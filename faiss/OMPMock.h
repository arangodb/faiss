void omp_set_num_threads(int);
void omp_set_dynamic(int);

/* query API functions */
int omp_get_num_threads(void);
int omp_get_nested(void);
int omp_get_max_threads(void);
int omp_get_thread_num(void);
int omp_in_parallel(void);
int omp_get_thread_limit(void);
