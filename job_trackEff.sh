#! /bin/bash

root -l -b -q 'TrackEff.C("./RPC_Root_files/EffScan_parallel_partitionA_higher/ABS010/Scan001665_HV9_DAQ-Trk.root","s1&&s3&&s4","s5")'

sed -i "114s/ABS010/ABS022/" TrackEff.C
sed -i "116s/ABS010/ABS022/" TrackEff.C

root -l -b -q 'TrackEff.C("./RPC_Root_files/EffScan_parallel_partitionA_higher/ABS022/Scan001664_HV9_DAQ-Trk.root","s1&&s3&&s4","s5")'

sed -i "114s/ABS022/ABS069/" TrackEff.C
sed -i "116s/ABS022/ABS069/" TrackEff.C 

root -l -b -q 'TrackEff.C("./RPC_Root_files/EffScan_parallel_partitionA_higher/ABS069/Scan001663_HV9_DAQ-Trk.root","s1&&s3&&s4","s5")'

sed -i "114s/ABS069/ABS220/" TrackEff.C
sed -i "116s/ABS069/ABS220/" TrackEff.C

root -l -b -q 'TrackEff.C("./RPC_Root_files/EffScan_parallel_partitionA_higher/ABS220/Scan001662_HV9_DAQ-Trk.root","s1&&s3&&s4","s5")'

sed -i "114s/ABS220/ABS010/" TrackEff.C
sed -i "116s/ABS220/ABS010/" TrackEff.C

