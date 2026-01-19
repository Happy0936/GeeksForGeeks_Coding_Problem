class Solution:
    def removeKdig(self, s, k):
        st = []

        for ch in s:
            while st and k > 0 and st[-1] > ch:
                st.pop()
                k -= 1
            st.append(ch)

        while k > 0:
            st.pop()
            k -= 1

        while st and st[0] == '0':
            st.pop(0)

        return "".join(st) if st else "0"
