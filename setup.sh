# setup.sh
#
# David Adams
# March 2020

if [ -n "$DUNELYZE_DIR" ]; then
  echo It appears duneproc is already set up:
  echo DUNELYZE_DIR = $DUNELYZE_DIR

elif [ -z "$DUNETPC_VERSION" ]; then
  echo "Please set up dunetpc."

else

echo Setting up dunelyze
export DUNELYZE_DIR=$(dirname $(readlink -f $BASH_SOURCE))
PATH=$DUNELYZE_DIR/bin:$PATH
TMPPATH=.:./job:
if [ ${FHICL_FILE_PATH:0:8} = $TMPPATH ]; then FHICL_FILE_PATH=${FHICL_FILE_PATH:8}; fi
FHICL_FILE_PATH=${TMPPATH}$DUNELYZE_DIR/fcl:$FHICL_FILE_PATH
unset TMPPATH

fi


