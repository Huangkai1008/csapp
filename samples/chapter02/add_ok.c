/**
 * @author HuangKai
 * @brief Determine whether arguments can be added without overflow.
 */
int uadd_ok(unsigned x, unsigned y) {
    unsigned sum = x + y;
    return sum >= x;
}
