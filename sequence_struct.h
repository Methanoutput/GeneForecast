#ifndef SEQUENCE_STRUCT_H
#define SEQUENCE_STRUCT_H

typedef enum{
    ATG,
    GTG,
    TTG,
    EDGE,
} StartCodon;

typedef enum{
    TAA,
    TGA,
    TAG,
    EDGE
} StopCodon;

struct seq{
    int id;
    int len;
    int partial; //i do not really unterstand yet what this means.
    StartCodon start; //the docs from prodigal say this is "usually atg, gtg or ttg" or edge. its not usually but all the time one of these.
    StopCodon stop;

} seq_t;

#endif


/*ID: A unique identifier for each gene, consisting of the ordinal ID of the sequence and an ordinal ID of that gene within the sequence (separated by an underscore). For example, "4_1023" indicates the 1023rd gene in the 4th sequence in the file.
partial: An indicator of if a gene runs off the edge of a sequence or into a gap. A "0" indicates the gene has a true boundary (a start or a stop), whereas a "1" indicates the gene is "unfinished" at that edge (i.e. a partial gene). For example, "01" means a gene is partial at the right boundary, "11" indicates both edges are incomplete, and "00" indicates a complete gene with a start and stop codon.
start_type: The sequence of the start codon (usually ATG, GTG, or TTG). If the gene has no start codon, this field will be labeled "Edge".
stop_type: The sequence of the stop codon (usually TAA, TGA, or TAG). If the gene has no stop codon, this field will be labeled "Edge".
rbs_motif: The RBS motif found by Prodigal (e.g. "AGGA" or "GGA", etc.)
rbs_spacer: The number of bases between the start codon and the observed motif.
gc_cont: The GC content of the gene sequence.
gc_skew: The GC skew of the gene sequence.
conf: A confidence score for this gene, representing the probability that this gene is real, i.e. 78.3% means Prodigal believes that gene is real 78.3% of the time and a false positive 21.7% of the time.
score: The total score for this gene.
cscore: The hexamer coding portion of the score, i.e. how much this gene looks like a true protein.
sscore: A score for the translation initiation site for this gene; it is the sum of the following three fields.
rscore: A score for the RBS motif of this gene.
uscore: A score for the sequence surrounding the start codon.
tscore: A score for the start codon type (ATG vs. GTG vs. TTG vs. Nonstandard).
mscore: A score for the remaining signals (stop codon type and leading/lagging strand information).*/