#ifndef __SITUS_LIB_ERR
#define __SITUS_LIB_ERR

#ifdef __cplusplus
extern "C" {
#endif

/* header file for lib_err.c */
void error_IO_files_6(char *);
void error_IO_files_5(char *, char *, char *, char *);
void error_IO_files_4(char *, char *, char *, char *);
void error_IO_files_3(char *, char *, char *);
void error_IO_files_2(char *, char *, char *);
void error_IO_files_1(char *, char *, char *);
void error_IO_files_0(char *, char *);
void error_memory_allocation(int , char *);
void error_start_vectors(int , char *, char *, char *);
void error_option(int , char *);
void error_open_filename(int , char *, char *);
void error_read_filename(int , char *);
void error_density(int , char *);
void error_no_density(int , char *, int );
void error_reading_constraints(int , char *, int , char *);
void error_atoms_exceed(int , char *);
void error_atoms_too_small(int , char *);
void error_out_of_index(int , char *);
void error_EOF(int , char *); 
void error_number_vertices(int , char *, int);
void error_no_volume(int , char *);
void error_in_allocation(char *);
void error_number_columns (int , char *);
void error_number_rows (int , char *);
void error_number_sections (int , char *);
void error_number_spacing (int , char *);
void error_unreadable_file_short (int , char *, char *);
void error_unreadable_file_long (int , char *, char *);
void error_xplor_file_indexing(int , char *);
void error_xplor_file_unit_cell(int , char *);
void error_xplor_file_map_section(int , char *);
void error_xplor_file_map_section_number(int , char *);
void error_EOF_ZYX_mode(int , char *);
void error_xplor_maker(char *);
void error_file_convert(int , char *, char *);
void error_file_header(int , char *, char *);
void error_file_float_mode(int, char *, char *);
void error_axis_assignment(int , char *);
void error_skew_transform(char *);
void error_spider_header(int , char *);
void error_index_conversion(int , char *);
void error_divide_zero(int , char *);
void error_sqrt_negative(int , char *);
void error_write_filename(int , char *);
void error_map_not_square(int , char *, int , int );
void error_voxel_size(int , char *);
void error_negative_euler(int , char *);
void error_eigenvec_not_converged(int , char *);
void error_atom_count(int , char *, int , int );
void error_no_bounding_sphere(int , char *, char *);
void error_no_bounding(int, char *, char *);
void error_underflow(int, char *);
void error_threshold(int , char *);
void error_normalize(int , char *);
void error_kernels(int , char *);
void error_kernel_size(int , char *, unsigned);
void error_lattice_smoothing(int , char *);
void error_codebook_vectors(int , char *, char *, char *);
void error_vector_pairs(int, char *);
void error_protein_data(int , char *);
void error_alpha_carbons(int , char *);
void error_number_fits(int , char *);
void error_kabsch(int , char *);
void error_codebook_range(int , char *);
void error_file_constraints(int , char *, char *);
void error_files_incompatible(int , char *, char *, char *);
void error_symmetry_option(char *);
void error_resolution(int , char *);
void error_extends_beyond(int , char *);
void error_map_dimensions(int , char *);
void error_resolution_range(int , char *);
void error_anisotropy_range(int , char *);
void error_euler_sampling(int , char *);
void error_euler_below_start(int, char *);
void error_euler_below_neg_360(int, char *);
void error_euler_above_pos_360(int, char *);
void error_psi_euler_range_above_360(int, char *);
void error_theta_euler_range_above_180(int, char *);
void error_phi_euler_range_above_360(int, char *);
void error_sba(int, char *);

#ifdef __cplusplus
}
#endif

#endif
