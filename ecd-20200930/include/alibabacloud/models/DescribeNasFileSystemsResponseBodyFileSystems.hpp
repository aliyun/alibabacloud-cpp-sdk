// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENASFILESYSTEMSRESPONSEBODYFILESYSTEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENASFILESYSTEMSRESPONSEBODYFILESYSTEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups.hpp>
#include <alibabacloud/models/DescribeNASFileSystemsResponseBodyFileSystemsDesktopGroups.hpp>
#include <alibabacloud/models/DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeNASFileSystemsResponseBodyFileSystems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNASFileSystemsResponseBodyFileSystems& obj) { 
      DARABONBA_PTR_TO_JSON(AllowOperateUserDrive, allowOperateUserDrive_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroups, appInstanceGroups_);
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DesktopGroups, desktopGroups_);
      DARABONBA_PTR_TO_JSON(EncryptionEnabled, encryptionEnabled_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FileSystemName, fileSystemName_);
      DARABONBA_PTR_TO_JSON(FileSystemStatus, fileSystemStatus_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_TO_JSON(MeteredSize, meteredSize_);
      DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_TO_JSON(MountTargetStatus, mountTargetStatus_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_TO_JSON(OfficeSites, officeSites_);
      DARABONBA_PTR_TO_JSON(ProfileCompatible, profileCompatible_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(SupportAcl, supportAcl_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNASFileSystemsResponseBodyFileSystems& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowOperateUserDrive, allowOperateUserDrive_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroups, appInstanceGroups_);
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DesktopGroups, desktopGroups_);
      DARABONBA_PTR_FROM_JSON(EncryptionEnabled, encryptionEnabled_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FileSystemName, fileSystemName_);
      DARABONBA_PTR_FROM_JSON(FileSystemStatus, fileSystemStatus_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_FROM_JSON(MeteredSize, meteredSize_);
      DARABONBA_PTR_FROM_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_FROM_JSON(MountTargetStatus, mountTargetStatus_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_FROM_JSON(OfficeSites, officeSites_);
      DARABONBA_PTR_FROM_JSON(ProfileCompatible, profileCompatible_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(SupportAcl, supportAcl_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeNASFileSystemsResponseBodyFileSystems() = default ;
    DescribeNASFileSystemsResponseBodyFileSystems(const DescribeNASFileSystemsResponseBodyFileSystems &) = default ;
    DescribeNASFileSystemsResponseBodyFileSystems(DescribeNASFileSystemsResponseBodyFileSystems &&) = default ;
    DescribeNASFileSystemsResponseBodyFileSystems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNASFileSystemsResponseBodyFileSystems() = default ;
    DescribeNASFileSystemsResponseBodyFileSystems& operator=(const DescribeNASFileSystemsResponseBodyFileSystems &) = default ;
    DescribeNASFileSystemsResponseBodyFileSystems& operator=(DescribeNASFileSystemsResponseBodyFileSystems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowOperateUserDrive_ == nullptr
        && return this->appInstanceGroups_ == nullptr && return this->capacity_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->desktopGroups_ == nullptr
        && return this->encryptionEnabled_ == nullptr && return this->fileSystemId_ == nullptr && return this->fileSystemName_ == nullptr && return this->fileSystemStatus_ == nullptr && return this->fileSystemType_ == nullptr
        && return this->meteredSize_ == nullptr && return this->mountTargetDomain_ == nullptr && return this->mountTargetStatus_ == nullptr && return this->officeSiteId_ == nullptr && return this->officeSiteName_ == nullptr
        && return this->officeSites_ == nullptr && return this->profileCompatible_ == nullptr && return this->regionId_ == nullptr && return this->scene_ == nullptr && return this->storageType_ == nullptr
        && return this->supportAcl_ == nullptr && return this->zoneId_ == nullptr; };
    // allowOperateUserDrive Field Functions 
    bool hasAllowOperateUserDrive() const { return this->allowOperateUserDrive_ != nullptr;};
    void deleteAllowOperateUserDrive() { this->allowOperateUserDrive_ = nullptr;};
    inline bool allowOperateUserDrive() const { DARABONBA_PTR_GET_DEFAULT(allowOperateUserDrive_, false) };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setAllowOperateUserDrive(bool allowOperateUserDrive) { DARABONBA_PTR_SET_VALUE(allowOperateUserDrive_, allowOperateUserDrive) };


    // appInstanceGroups Field Functions 
    bool hasAppInstanceGroups() const { return this->appInstanceGroups_ != nullptr;};
    void deleteAppInstanceGroups() { this->appInstanceGroups_ = nullptr;};
    inline const vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups> & appInstanceGroups() const { DARABONBA_PTR_GET_CONST(appInstanceGroups_, vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups>) };
    inline vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups> appInstanceGroups() { DARABONBA_PTR_GET(appInstanceGroups_, vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups>) };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setAppInstanceGroups(const vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups> & appInstanceGroups) { DARABONBA_PTR_SET_VALUE(appInstanceGroups_, appInstanceGroups) };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setAppInstanceGroups(vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups> && appInstanceGroups) { DARABONBA_PTR_SET_RVALUE(appInstanceGroups_, appInstanceGroups) };


    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // desktopGroups Field Functions 
    bool hasDesktopGroups() const { return this->desktopGroups_ != nullptr;};
    void deleteDesktopGroups() { this->desktopGroups_ = nullptr;};
    inline const vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsDesktopGroups> & desktopGroups() const { DARABONBA_PTR_GET_CONST(desktopGroups_, vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsDesktopGroups>) };
    inline vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsDesktopGroups> desktopGroups() { DARABONBA_PTR_GET(desktopGroups_, vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsDesktopGroups>) };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setDesktopGroups(const vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsDesktopGroups> & desktopGroups) { DARABONBA_PTR_SET_VALUE(desktopGroups_, desktopGroups) };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setDesktopGroups(vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsDesktopGroups> && desktopGroups) { DARABONBA_PTR_SET_RVALUE(desktopGroups_, desktopGroups) };


    // encryptionEnabled Field Functions 
    bool hasEncryptionEnabled() const { return this->encryptionEnabled_ != nullptr;};
    void deleteEncryptionEnabled() { this->encryptionEnabled_ = nullptr;};
    inline bool encryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(encryptionEnabled_, false) };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setEncryptionEnabled(bool encryptionEnabled) { DARABONBA_PTR_SET_VALUE(encryptionEnabled_, encryptionEnabled) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystemName Field Functions 
    bool hasFileSystemName() const { return this->fileSystemName_ != nullptr;};
    void deleteFileSystemName() { this->fileSystemName_ = nullptr;};
    inline string fileSystemName() const { DARABONBA_PTR_GET_DEFAULT(fileSystemName_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setFileSystemName(string fileSystemName) { DARABONBA_PTR_SET_VALUE(fileSystemName_, fileSystemName) };


    // fileSystemStatus Field Functions 
    bool hasFileSystemStatus() const { return this->fileSystemStatus_ != nullptr;};
    void deleteFileSystemStatus() { this->fileSystemStatus_ = nullptr;};
    inline string fileSystemStatus() const { DARABONBA_PTR_GET_DEFAULT(fileSystemStatus_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setFileSystemStatus(string fileSystemStatus) { DARABONBA_PTR_SET_VALUE(fileSystemStatus_, fileSystemStatus) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string fileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // meteredSize Field Functions 
    bool hasMeteredSize() const { return this->meteredSize_ != nullptr;};
    void deleteMeteredSize() { this->meteredSize_ = nullptr;};
    inline int64_t meteredSize() const { DARABONBA_PTR_GET_DEFAULT(meteredSize_, 0L) };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setMeteredSize(int64_t meteredSize) { DARABONBA_PTR_SET_VALUE(meteredSize_, meteredSize) };


    // mountTargetDomain Field Functions 
    bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
    void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
    inline string mountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


    // mountTargetStatus Field Functions 
    bool hasMountTargetStatus() const { return this->mountTargetStatus_ != nullptr;};
    void deleteMountTargetStatus() { this->mountTargetStatus_ = nullptr;};
    inline string mountTargetStatus() const { DARABONBA_PTR_GET_DEFAULT(mountTargetStatus_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setMountTargetStatus(string mountTargetStatus) { DARABONBA_PTR_SET_VALUE(mountTargetStatus_, mountTargetStatus) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string officeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // officeSites Field Functions 
    bool hasOfficeSites() const { return this->officeSites_ != nullptr;};
    void deleteOfficeSites() { this->officeSites_ = nullptr;};
    inline const vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites> & officeSites() const { DARABONBA_PTR_GET_CONST(officeSites_, vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites>) };
    inline vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites> officeSites() { DARABONBA_PTR_GET(officeSites_, vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites>) };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setOfficeSites(const vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites> & officeSites) { DARABONBA_PTR_SET_VALUE(officeSites_, officeSites) };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setOfficeSites(vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites> && officeSites) { DARABONBA_PTR_SET_RVALUE(officeSites_, officeSites) };


    // profileCompatible Field Functions 
    bool hasProfileCompatible() const { return this->profileCompatible_ != nullptr;};
    void deleteProfileCompatible() { this->profileCompatible_ = nullptr;};
    inline bool profileCompatible() const { DARABONBA_PTR_GET_DEFAULT(profileCompatible_, false) };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setProfileCompatible(bool profileCompatible) { DARABONBA_PTR_SET_VALUE(profileCompatible_, profileCompatible) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // supportAcl Field Functions 
    bool hasSupportAcl() const { return this->supportAcl_ != nullptr;};
    void deleteSupportAcl() { this->supportAcl_ = nullptr;};
    inline bool supportAcl() const { DARABONBA_PTR_GET_DEFAULT(supportAcl_, false) };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setSupportAcl(bool supportAcl) { DARABONBA_PTR_SET_VALUE(supportAcl_, supportAcl) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystems& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // >  This parameter is not publicly available.
    std::shared_ptr<bool> allowOperateUserDrive_ = nullptr;
    // The application delivery groups that are associated with the UPM-supported NAS file systems.
    std::shared_ptr<vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups>> appInstanceGroups_ = nullptr;
    // The total capacity of the NAS file system. Unit: GiB.
    // 
    // *   The Capacity type has 10 PiB of storage, which is equal to 10,485,760 GiB.
    // *   The Performance type has 1 PiB of storage, which is equal to 1,048,576 GiB.
    std::shared_ptr<int64_t> capacity_ = nullptr;
    // The time when the NAS file system was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the NAS file system.
    std::shared_ptr<string> description_ = nullptr;
    // The cloud computer shares that are associated with the UPM-supported NAS file systems.
    std::shared_ptr<vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsDesktopGroups>> desktopGroups_ = nullptr;
    // Indicates whether disk encryption is enabled.
    std::shared_ptr<bool> encryptionEnabled_ = nullptr;
    // The ID of the NAS file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The name of the NAS file system.
    std::shared_ptr<string> fileSystemName_ = nullptr;
    // The status of the NAS file system. The possible values include:
    // 
    // *   Pending: The NAS file system is being created.
    // *   Running: The NAS file system is running.
    // *   Stopped: The NAS file system is stopped.
    // *   Deleting: The NAS file system is being deleted.
    // *   Deleted: The NAS file system is deleted.
    // *   Invalid: The NAS file system is invalid.
    std::shared_ptr<string> fileSystemStatus_ = nullptr;
    // The type of the NAS file system. The only valid value is `standard`.
    std::shared_ptr<string> fileSystemType_ = nullptr;
    // The used capacity of the NAS file system. Unit: bytes.
    std::shared_ptr<int64_t> meteredSize_ = nullptr;
    // The domain name of the mount target.
    std::shared_ptr<string> mountTargetDomain_ = nullptr;
    // The status of the mount target. The possible values include:
    // 
    // *   Pending: The mount target is being created.
    // *   Active: The mount target is enabled.
    // *   Inactive: The mount target is disabled.
    // *   Deleting: The mount target is being deleted.
    // *   Invalid: The mount target is invalid.
    std::shared_ptr<string> mountTargetStatus_ = nullptr;
    // The ID of the office network.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The name of the office network.
    std::shared_ptr<string> officeSiteName_ = nullptr;
    // The office networks.
    std::shared_ptr<vector<Models::DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites>> officeSites_ = nullptr;
    // Indicates whether the User Profile Management (UPM) feature is supported.
    std::shared_ptr<bool> profileCompatible_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The storage type of the NAS file system.
    // 
    // Valid values:
    // 
    // *   Upm: the UPM-supported NAS file system.
    // *   ShareNas: the shared NAS file system.
    std::shared_ptr<string> scene_ = nullptr;
    // The storage type of the NAS file system. Valid values:
    // 
    // *   Capacity
    // *   Performance
    std::shared_ptr<string> storageType_ = nullptr;
    // Indicates whether the Server Message Block (SMB) access control list (ACL) feature was enabled.
    std::shared_ptr<bool> supportAcl_ = nullptr;
    // The ID of the zone where the NAS file system resides.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
