void omp_set_num_threads(int) {}

void omp_set_dynamic(int) {}

void omp_set_nested(int) {}

/* query API functions */
int omp_get_num_threads(void) {
    return 1;
}

int omp_get_nested(void) {
    return 1;
}

int omp_get_max_threads(void) {
    return 1;
}

int omp_get_thread_num(void) {
    return 0;
}

int omp_in_parallel(void) {
    return 0;
}

int omp_get_thread_limit(void) {
    return 1;
}
