// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENASFILESYSTEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENASFILESYSTEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeNASFileSystemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNASFileSystemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystems, fileSystems_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNASFileSystemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystems, fileSystems_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNASFileSystemsResponseBody() = default ;
    DescribeNASFileSystemsResponseBody(const DescribeNASFileSystemsResponseBody &) = default ;
    DescribeNASFileSystemsResponseBody(DescribeNASFileSystemsResponseBody &&) = default ;
    DescribeNASFileSystemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNASFileSystemsResponseBody() = default ;
    DescribeNASFileSystemsResponseBody& operator=(const DescribeNASFileSystemsResponseBody &) = default ;
    DescribeNASFileSystemsResponseBody& operator=(DescribeNASFileSystemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FileSystems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileSystems& obj) { 
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
      friend void from_json(const Darabonba::Json& j, FileSystems& obj) { 
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
      FileSystems() = default ;
      FileSystems(const FileSystems &) = default ;
      FileSystems(FileSystems &&) = default ;
      FileSystems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileSystems() = default ;
      FileSystems& operator=(const FileSystems &) = default ;
      FileSystems& operator=(FileSystems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OfficeSites : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OfficeSites& obj) { 
          DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
          DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
        };
        friend void from_json(const Darabonba::Json& j, OfficeSites& obj) { 
          DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
          DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
        };
        OfficeSites() = default ;
        OfficeSites(const OfficeSites &) = default ;
        OfficeSites(OfficeSites &&) = default ;
        OfficeSites(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OfficeSites() = default ;
        OfficeSites& operator=(const OfficeSites &) = default ;
        OfficeSites& operator=(OfficeSites &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->officeSiteId_ == nullptr
        && this->officeSiteName_ == nullptr; };
        // officeSiteId Field Functions 
        bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
        void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
        inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
        inline OfficeSites& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


        // officeSiteName Field Functions 
        bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
        void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
        inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
        inline OfficeSites& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


      protected:
        // The ID of the office network.
        shared_ptr<string> officeSiteId_ {};
        // The name of the office network.
        shared_ptr<string> officeSiteName_ {};
      };

      class DesktopGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DesktopGroups& obj) { 
          DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
          DARABONBA_PTR_TO_JSON(DesktopGroupName, desktopGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, DesktopGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
          DARABONBA_PTR_FROM_JSON(DesktopGroupName, desktopGroupName_);
        };
        DesktopGroups() = default ;
        DesktopGroups(const DesktopGroups &) = default ;
        DesktopGroups(DesktopGroups &&) = default ;
        DesktopGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DesktopGroups() = default ;
        DesktopGroups& operator=(const DesktopGroups &) = default ;
        DesktopGroups& operator=(DesktopGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->desktopGroupId_ == nullptr
        && this->desktopGroupName_ == nullptr; };
        // desktopGroupId Field Functions 
        bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
        void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
        inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
        inline DesktopGroups& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


        // desktopGroupName Field Functions 
        bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
        void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
        inline string getDesktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
        inline DesktopGroups& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


      protected:
        // The ID of the cloud computer share.
        shared_ptr<string> desktopGroupId_ {};
        // The name of the cloud computer share.
        shared_ptr<string> desktopGroupName_ {};
      };

      class AppInstanceGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppInstanceGroups& obj) { 
          DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
          DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, AppInstanceGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
          DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
        };
        AppInstanceGroups() = default ;
        AppInstanceGroups(const AppInstanceGroups &) = default ;
        AppInstanceGroups(AppInstanceGroups &&) = default ;
        AppInstanceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppInstanceGroups() = default ;
        AppInstanceGroups& operator=(const AppInstanceGroups &) = default ;
        AppInstanceGroups& operator=(AppInstanceGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceGroupName_ == nullptr; };
        // appInstanceGroupId Field Functions 
        bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
        void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
        inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
        inline AppInstanceGroups& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


        // appInstanceGroupName Field Functions 
        bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
        void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
        inline string getAppInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
        inline AppInstanceGroups& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


      protected:
        // The ID of the delivery group.
        shared_ptr<string> appInstanceGroupId_ {};
        // The name of the delivery group.
        shared_ptr<string> appInstanceGroupName_ {};
      };

      virtual bool empty() const override { return this->allowOperateUserDrive_ == nullptr
        && this->appInstanceGroups_ == nullptr && this->capacity_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->desktopGroups_ == nullptr
        && this->encryptionEnabled_ == nullptr && this->fileSystemId_ == nullptr && this->fileSystemName_ == nullptr && this->fileSystemStatus_ == nullptr && this->fileSystemType_ == nullptr
        && this->meteredSize_ == nullptr && this->mountTargetDomain_ == nullptr && this->mountTargetStatus_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteName_ == nullptr
        && this->officeSites_ == nullptr && this->profileCompatible_ == nullptr && this->regionId_ == nullptr && this->scene_ == nullptr && this->storageType_ == nullptr
        && this->supportAcl_ == nullptr && this->zoneId_ == nullptr; };
      // allowOperateUserDrive Field Functions 
      bool hasAllowOperateUserDrive() const { return this->allowOperateUserDrive_ != nullptr;};
      void deleteAllowOperateUserDrive() { this->allowOperateUserDrive_ = nullptr;};
      inline bool getAllowOperateUserDrive() const { DARABONBA_PTR_GET_DEFAULT(allowOperateUserDrive_, false) };
      inline FileSystems& setAllowOperateUserDrive(bool allowOperateUserDrive) { DARABONBA_PTR_SET_VALUE(allowOperateUserDrive_, allowOperateUserDrive) };


      // appInstanceGroups Field Functions 
      bool hasAppInstanceGroups() const { return this->appInstanceGroups_ != nullptr;};
      void deleteAppInstanceGroups() { this->appInstanceGroups_ = nullptr;};
      inline const vector<FileSystems::AppInstanceGroups> & getAppInstanceGroups() const { DARABONBA_PTR_GET_CONST(appInstanceGroups_, vector<FileSystems::AppInstanceGroups>) };
      inline vector<FileSystems::AppInstanceGroups> getAppInstanceGroups() { DARABONBA_PTR_GET(appInstanceGroups_, vector<FileSystems::AppInstanceGroups>) };
      inline FileSystems& setAppInstanceGroups(const vector<FileSystems::AppInstanceGroups> & appInstanceGroups) { DARABONBA_PTR_SET_VALUE(appInstanceGroups_, appInstanceGroups) };
      inline FileSystems& setAppInstanceGroups(vector<FileSystems::AppInstanceGroups> && appInstanceGroups) { DARABONBA_PTR_SET_RVALUE(appInstanceGroups_, appInstanceGroups) };


      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
      inline FileSystems& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline FileSystems& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline FileSystems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // desktopGroups Field Functions 
      bool hasDesktopGroups() const { return this->desktopGroups_ != nullptr;};
      void deleteDesktopGroups() { this->desktopGroups_ = nullptr;};
      inline const vector<FileSystems::DesktopGroups> & getDesktopGroups() const { DARABONBA_PTR_GET_CONST(desktopGroups_, vector<FileSystems::DesktopGroups>) };
      inline vector<FileSystems::DesktopGroups> getDesktopGroups() { DARABONBA_PTR_GET(desktopGroups_, vector<FileSystems::DesktopGroups>) };
      inline FileSystems& setDesktopGroups(const vector<FileSystems::DesktopGroups> & desktopGroups) { DARABONBA_PTR_SET_VALUE(desktopGroups_, desktopGroups) };
      inline FileSystems& setDesktopGroups(vector<FileSystems::DesktopGroups> && desktopGroups) { DARABONBA_PTR_SET_RVALUE(desktopGroups_, desktopGroups) };


      // encryptionEnabled Field Functions 
      bool hasEncryptionEnabled() const { return this->encryptionEnabled_ != nullptr;};
      void deleteEncryptionEnabled() { this->encryptionEnabled_ = nullptr;};
      inline bool getEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(encryptionEnabled_, false) };
      inline FileSystems& setEncryptionEnabled(bool encryptionEnabled) { DARABONBA_PTR_SET_VALUE(encryptionEnabled_, encryptionEnabled) };


      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline FileSystems& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // fileSystemName Field Functions 
      bool hasFileSystemName() const { return this->fileSystemName_ != nullptr;};
      void deleteFileSystemName() { this->fileSystemName_ = nullptr;};
      inline string getFileSystemName() const { DARABONBA_PTR_GET_DEFAULT(fileSystemName_, "") };
      inline FileSystems& setFileSystemName(string fileSystemName) { DARABONBA_PTR_SET_VALUE(fileSystemName_, fileSystemName) };


      // fileSystemStatus Field Functions 
      bool hasFileSystemStatus() const { return this->fileSystemStatus_ != nullptr;};
      void deleteFileSystemStatus() { this->fileSystemStatus_ = nullptr;};
      inline string getFileSystemStatus() const { DARABONBA_PTR_GET_DEFAULT(fileSystemStatus_, "") };
      inline FileSystems& setFileSystemStatus(string fileSystemStatus) { DARABONBA_PTR_SET_VALUE(fileSystemStatus_, fileSystemStatus) };


      // fileSystemType Field Functions 
      bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
      void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
      inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
      inline FileSystems& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


      // meteredSize Field Functions 
      bool hasMeteredSize() const { return this->meteredSize_ != nullptr;};
      void deleteMeteredSize() { this->meteredSize_ = nullptr;};
      inline int64_t getMeteredSize() const { DARABONBA_PTR_GET_DEFAULT(meteredSize_, 0L) };
      inline FileSystems& setMeteredSize(int64_t meteredSize) { DARABONBA_PTR_SET_VALUE(meteredSize_, meteredSize) };


      // mountTargetDomain Field Functions 
      bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
      void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
      inline string getMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
      inline FileSystems& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


      // mountTargetStatus Field Functions 
      bool hasMountTargetStatus() const { return this->mountTargetStatus_ != nullptr;};
      void deleteMountTargetStatus() { this->mountTargetStatus_ = nullptr;};
      inline string getMountTargetStatus() const { DARABONBA_PTR_GET_DEFAULT(mountTargetStatus_, "") };
      inline FileSystems& setMountTargetStatus(string mountTargetStatus) { DARABONBA_PTR_SET_VALUE(mountTargetStatus_, mountTargetStatus) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline FileSystems& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // officeSiteName Field Functions 
      bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
      void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
      inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
      inline FileSystems& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


      // officeSites Field Functions 
      bool hasOfficeSites() const { return this->officeSites_ != nullptr;};
      void deleteOfficeSites() { this->officeSites_ = nullptr;};
      inline const vector<FileSystems::OfficeSites> & getOfficeSites() const { DARABONBA_PTR_GET_CONST(officeSites_, vector<FileSystems::OfficeSites>) };
      inline vector<FileSystems::OfficeSites> getOfficeSites() { DARABONBA_PTR_GET(officeSites_, vector<FileSystems::OfficeSites>) };
      inline FileSystems& setOfficeSites(const vector<FileSystems::OfficeSites> & officeSites) { DARABONBA_PTR_SET_VALUE(officeSites_, officeSites) };
      inline FileSystems& setOfficeSites(vector<FileSystems::OfficeSites> && officeSites) { DARABONBA_PTR_SET_RVALUE(officeSites_, officeSites) };


      // profileCompatible Field Functions 
      bool hasProfileCompatible() const { return this->profileCompatible_ != nullptr;};
      void deleteProfileCompatible() { this->profileCompatible_ = nullptr;};
      inline bool getProfileCompatible() const { DARABONBA_PTR_GET_DEFAULT(profileCompatible_, false) };
      inline FileSystems& setProfileCompatible(bool profileCompatible) { DARABONBA_PTR_SET_VALUE(profileCompatible_, profileCompatible) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline FileSystems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline FileSystems& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline FileSystems& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // supportAcl Field Functions 
      bool hasSupportAcl() const { return this->supportAcl_ != nullptr;};
      void deleteSupportAcl() { this->supportAcl_ = nullptr;};
      inline bool getSupportAcl() const { DARABONBA_PTR_GET_DEFAULT(supportAcl_, false) };
      inline FileSystems& setSupportAcl(bool supportAcl) { DARABONBA_PTR_SET_VALUE(supportAcl_, supportAcl) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline FileSystems& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // >  This parameter is not publicly available.
      shared_ptr<bool> allowOperateUserDrive_ {};
      // The application delivery groups that are associated with the UPM-supported NAS file systems.
      shared_ptr<vector<FileSystems::AppInstanceGroups>> appInstanceGroups_ {};
      // The total capacity of the NAS file system. Unit: GiB.
      // 
      // *   The Capacity type has 10 PiB of storage, which is equal to 10,485,760 GiB.
      // *   The Performance type has 1 PiB of storage, which is equal to 1,048,576 GiB.
      shared_ptr<int64_t> capacity_ {};
      // The time when the NAS file system was created.
      shared_ptr<string> createTime_ {};
      // The description of the NAS file system.
      shared_ptr<string> description_ {};
      // The cloud computer shares that are associated with the UPM-supported NAS file systems.
      shared_ptr<vector<FileSystems::DesktopGroups>> desktopGroups_ {};
      // Indicates whether disk encryption is enabled.
      shared_ptr<bool> encryptionEnabled_ {};
      // The ID of the NAS file system.
      shared_ptr<string> fileSystemId_ {};
      // The name of the NAS file system.
      shared_ptr<string> fileSystemName_ {};
      // The status of the NAS file system. The possible values include:
      // 
      // *   Pending: The NAS file system is being created.
      // *   Running: The NAS file system is running.
      // *   Stopped: The NAS file system is stopped.
      // *   Deleting: The NAS file system is being deleted.
      // *   Deleted: The NAS file system is deleted.
      // *   Invalid: The NAS file system is invalid.
      shared_ptr<string> fileSystemStatus_ {};
      // The type of the NAS file system. The only valid value is `standard`.
      shared_ptr<string> fileSystemType_ {};
      // The used capacity of the NAS file system. Unit: bytes.
      shared_ptr<int64_t> meteredSize_ {};
      // The domain name of the mount target.
      shared_ptr<string> mountTargetDomain_ {};
      // The status of the mount target. The possible values include:
      // 
      // *   Pending: The mount target is being created.
      // *   Active: The mount target is enabled.
      // *   Inactive: The mount target is disabled.
      // *   Deleting: The mount target is being deleted.
      // *   Invalid: The mount target is invalid.
      shared_ptr<string> mountTargetStatus_ {};
      // The ID of the office network.
      shared_ptr<string> officeSiteId_ {};
      // The name of the office network.
      shared_ptr<string> officeSiteName_ {};
      // The office networks.
      shared_ptr<vector<FileSystems::OfficeSites>> officeSites_ {};
      // Indicates whether the User Profile Management (UPM) feature is supported.
      shared_ptr<bool> profileCompatible_ {};
      // The ID of the region.
      shared_ptr<string> regionId_ {};
      // The storage type of the NAS file system.
      // 
      // Valid values:
      // 
      // *   Upm: the UPM-supported NAS file system.
      // *   ShareNas: the shared NAS file system.
      shared_ptr<string> scene_ {};
      // The storage type of the NAS file system. Valid values:
      // 
      // *   Capacity
      // *   Performance
      shared_ptr<string> storageType_ {};
      // Indicates whether the Server Message Block (SMB) access control list (ACL) feature was enabled.
      shared_ptr<bool> supportAcl_ {};
      // The ID of the zone where the NAS file system resides.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->fileSystems_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // fileSystems Field Functions 
    bool hasFileSystems() const { return this->fileSystems_ != nullptr;};
    void deleteFileSystems() { this->fileSystems_ = nullptr;};
    inline const vector<DescribeNASFileSystemsResponseBody::FileSystems> & getFileSystems() const { DARABONBA_PTR_GET_CONST(fileSystems_, vector<DescribeNASFileSystemsResponseBody::FileSystems>) };
    inline vector<DescribeNASFileSystemsResponseBody::FileSystems> getFileSystems() { DARABONBA_PTR_GET(fileSystems_, vector<DescribeNASFileSystemsResponseBody::FileSystems>) };
    inline DescribeNASFileSystemsResponseBody& setFileSystems(const vector<DescribeNASFileSystemsResponseBody::FileSystems> & fileSystems) { DARABONBA_PTR_SET_VALUE(fileSystems_, fileSystems) };
    inline DescribeNASFileSystemsResponseBody& setFileSystems(vector<DescribeNASFileSystemsResponseBody::FileSystems> && fileSystems) { DARABONBA_PTR_SET_RVALUE(fileSystems_, fileSystems) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNASFileSystemsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNASFileSystemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The NAS file systems.
    shared_ptr<vector<DescribeNASFileSystemsResponseBody::FileSystems>> fileSystems_ {};
    // The token that determines the start point of the next query. This parameter is empty if no additional results exist.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
