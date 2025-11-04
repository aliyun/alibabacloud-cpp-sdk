// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTVOLUMESDISKVOLUME_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTVOLUMESDISKVOLUME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyEciScalingConfigurationRequestVolumesDiskVolume : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestVolumesDiskVolume& obj) { 
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(FsType, fsType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestVolumesDiskVolume& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(FsType, fsType_);
    };
    ModifyEciScalingConfigurationRequestVolumesDiskVolume() = default ;
    ModifyEciScalingConfigurationRequestVolumesDiskVolume(const ModifyEciScalingConfigurationRequestVolumesDiskVolume &) = default ;
    ModifyEciScalingConfigurationRequestVolumesDiskVolume(ModifyEciScalingConfigurationRequestVolumesDiskVolume &&) = default ;
    ModifyEciScalingConfigurationRequestVolumesDiskVolume(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestVolumesDiskVolume() = default ;
    ModifyEciScalingConfigurationRequestVolumesDiskVolume& operator=(const ModifyEciScalingConfigurationRequestVolumesDiskVolume &) = default ;
    ModifyEciScalingConfigurationRequestVolumesDiskVolume& operator=(ModifyEciScalingConfigurationRequestVolumesDiskVolume &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskId_ == nullptr
        && return this->diskSize_ == nullptr && return this->fsType_ == nullptr; };
    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline ModifyEciScalingConfigurationRequestVolumesDiskVolume& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline ModifyEciScalingConfigurationRequestVolumesDiskVolume& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // fsType Field Functions 
    bool hasFsType() const { return this->fsType_ != nullptr;};
    void deleteFsType() { this->fsType_ = nullptr;};
    inline string fsType() const { DARABONBA_PTR_GET_DEFAULT(fsType_, "") };
    inline ModifyEciScalingConfigurationRequestVolumesDiskVolume& setFsType(string fsType) { DARABONBA_PTR_SET_VALUE(fsType_, fsType) };


  protected:
    std::shared_ptr<string> diskId_ = nullptr;
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    std::shared_ptr<string> fsType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
