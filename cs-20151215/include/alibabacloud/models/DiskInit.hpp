// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISKINIT_HPP_
#define ALIBABACLOUD_MODELS_DISKINIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DiskInit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiskInit& obj) { 
      DARABONBA_PTR_TO_JSON(disk_name, diskName_);
      DARABONBA_PTR_TO_JSON(local_disk, localDisk_);
      DARABONBA_PTR_TO_JSON(mkfs_type, mkfsType_);
      DARABONBA_PTR_TO_JSON(mount_for_runtime, mountForRuntime_);
      DARABONBA_PTR_TO_JSON(mount_target, mountTarget_);
    };
    friend void from_json(const Darabonba::Json& j, DiskInit& obj) { 
      DARABONBA_PTR_FROM_JSON(disk_name, diskName_);
      DARABONBA_PTR_FROM_JSON(local_disk, localDisk_);
      DARABONBA_PTR_FROM_JSON(mkfs_type, mkfsType_);
      DARABONBA_PTR_FROM_JSON(mount_for_runtime, mountForRuntime_);
      DARABONBA_PTR_FROM_JSON(mount_target, mountTarget_);
    };
    DiskInit() = default ;
    DiskInit(const DiskInit &) = default ;
    DiskInit(DiskInit &&) = default ;
    DiskInit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiskInit() = default ;
    DiskInit& operator=(const DiskInit &) = default ;
    DiskInit& operator=(DiskInit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskName_ == nullptr
        && this->localDisk_ == nullptr && this->mkfsType_ == nullptr && this->mountForRuntime_ == nullptr && this->mountTarget_ == nullptr; };
    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline DiskInit& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // localDisk Field Functions 
    bool hasLocalDisk() const { return this->localDisk_ != nullptr;};
    void deleteLocalDisk() { this->localDisk_ = nullptr;};
    inline bool getLocalDisk() const { DARABONBA_PTR_GET_DEFAULT(localDisk_, false) };
    inline DiskInit& setLocalDisk(bool localDisk) { DARABONBA_PTR_SET_VALUE(localDisk_, localDisk) };


    // mkfsType Field Functions 
    bool hasMkfsType() const { return this->mkfsType_ != nullptr;};
    void deleteMkfsType() { this->mkfsType_ = nullptr;};
    inline string getMkfsType() const { DARABONBA_PTR_GET_DEFAULT(mkfsType_, "") };
    inline DiskInit& setMkfsType(string mkfsType) { DARABONBA_PTR_SET_VALUE(mkfsType_, mkfsType) };


    // mountForRuntime Field Functions 
    bool hasMountForRuntime() const { return this->mountForRuntime_ != nullptr;};
    void deleteMountForRuntime() { this->mountForRuntime_ = nullptr;};
    inline bool getMountForRuntime() const { DARABONBA_PTR_GET_DEFAULT(mountForRuntime_, false) };
    inline DiskInit& setMountForRuntime(bool mountForRuntime) { DARABONBA_PTR_SET_VALUE(mountForRuntime_, mountForRuntime) };


    // mountTarget Field Functions 
    bool hasMountTarget() const { return this->mountTarget_ != nullptr;};
    void deleteMountTarget() { this->mountTarget_ = nullptr;};
    inline string getMountTarget() const { DARABONBA_PTR_GET_DEFAULT(mountTarget_, "") };
    inline DiskInit& setMountTarget(string mountTarget) { DARABONBA_PTR_SET_VALUE(mountTarget_, mountTarget) };


  protected:
    // This parameter is required.
    shared_ptr<string> diskName_ {};
    shared_ptr<bool> localDisk_ {};
    shared_ptr<string> mkfsType_ {};
    shared_ptr<bool> mountForRuntime_ {};
    shared_ptr<string> mountTarget_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
