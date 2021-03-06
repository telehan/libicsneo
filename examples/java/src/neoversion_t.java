/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.0
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class neoversion_t {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected neoversion_t(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(neoversion_t obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  @SuppressWarnings("deprecation")
  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        icsneojavaJNI.delete_neoversion_t(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setMajor(int value) {
    icsneojavaJNI.neoversion_t_major_set(swigCPtr, this, value);
  }

  public int getMajor() {
    return icsneojavaJNI.neoversion_t_major_get(swigCPtr, this);
  }

  public void setMinor(int value) {
    icsneojavaJNI.neoversion_t_minor_set(swigCPtr, this, value);
  }

  public int getMinor() {
    return icsneojavaJNI.neoversion_t_minor_get(swigCPtr, this);
  }

  public void setPatch(int value) {
    icsneojavaJNI.neoversion_t_patch_set(swigCPtr, this, value);
  }

  public int getPatch() {
    return icsneojavaJNI.neoversion_t_patch_get(swigCPtr, this);
  }

  public void setMetadata(String value) {
    icsneojavaJNI.neoversion_t_metadata_set(swigCPtr, this, value);
  }

  public String getMetadata() {
    return icsneojavaJNI.neoversion_t_metadata_get(swigCPtr, this);
  }

  public void setBuildBranch(String value) {
    icsneojavaJNI.neoversion_t_buildBranch_set(swigCPtr, this, value);
  }

  public String getBuildBranch() {
    return icsneojavaJNI.neoversion_t_buildBranch_get(swigCPtr, this);
  }

  public void setBuildTag(String value) {
    icsneojavaJNI.neoversion_t_buildTag_set(swigCPtr, this, value);
  }

  public String getBuildTag() {
    return icsneojavaJNI.neoversion_t_buildTag_get(swigCPtr, this);
  }

  public void setReserved(String value) {
    icsneojavaJNI.neoversion_t_reserved_set(swigCPtr, this, value);
  }

  public String getReserved() {
    return icsneojavaJNI.neoversion_t_reserved_get(swigCPtr, this);
  }

  public neoversion_t() {
    this(icsneojavaJNI.new_neoversion_t(), true);
  }

}
