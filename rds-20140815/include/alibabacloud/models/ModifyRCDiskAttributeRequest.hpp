// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRCDISKATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRCDISKATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyRCDiskAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRCDiskAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRCDiskAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyRCDiskAttributeRequest() = default ;
    ModifyRCDiskAttributeRequest(const ModifyRCDiskAttributeRequest &) = default ;
    ModifyRCDiskAttributeRequest(ModifyRCDiskAttributeRequest &&) = default ;
    ModifyRCDiskAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRCDiskAttributeRequest() = default ;
    ModifyRCDiskAttributeRequest& operator=(const ModifyRCDiskAttributeRequest &) = default ;
    ModifyRCDiskAttributeRequest& operator=(ModifyRCDiskAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->burstingEnabled_ == nullptr
        && this->deleteWithInstance_ == nullptr && this->description_ == nullptr && this->diskId_ == nullptr && this->diskName_ == nullptr && this->regionId_ == nullptr; };
    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline ModifyRCDiskAttributeRequest& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // deleteWithInstance Field Functions 
    bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
    void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
    inline bool getDeleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
    inline ModifyRCDiskAttributeRequest& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyRCDiskAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline ModifyRCDiskAttributeRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline ModifyRCDiskAttributeRequest& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRCDiskAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to enable the performance burst feature for cloud disks that support burst. Valid values:
    // 
    // true: Enabled.
    // false: Disabled.
    // Note
    // An error is returned if you pass any value for cloud disks that do not support the burst feature.
    shared_ptr<bool> burstingEnabled_ {};
    // Specifies whether to release the cloud disk when the associated instance is released. Default value: null, which indicates that the current value is not changed.
    // 
    // Cloud disks that have the multi-attach feature enabled do not support this parameter.
    // 
    // An error is returned if you set DeleteWithInstance to false in the following cases:
    // 
    // The category of the cloud disk is local disk (ephemeral).
    // The category of the cloud disk is basic cloud disk (cloud) and the cloud disk is not detachable (Portable=false).
    // Warning
    // If you set DeleteWithInstance to false and the ECS instance to which the cloud disk is attached is security-locked with "LockReason" : "security" in OperationLocks, the DeleteWithInstance attribute of the cloud disk is ignored and the cloud disk is released together with the instance.
    shared_ptr<bool> deleteWithInstance_ {};
    // The description of the cloud disk. The description must be 2 to 256 characters in length and cannot start with http:// or https://.
    shared_ptr<string> description_ {};
    // The ID of the cloud disk whose attributes you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> diskId_ {};
    // The name of the cloud disk. The name must be 2 to 128 characters in length and can contain Unicode characters under the letter category (including letters from various languages, Chinese characters, and digits). The name can contain colons (:), underscores (_), periods (.), or hyphens (-).
    shared_ptr<string> diskName_ {};
    // The region ID. You can call DescribeRegions to obtain the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
