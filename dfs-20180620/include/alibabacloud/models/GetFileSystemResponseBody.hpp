// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILESYSTEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILESYSTEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class GetFileSystemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileSystemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystem, fileSystem_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileSystemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystem, fileSystem_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFileSystemResponseBody() = default ;
    GetFileSystemResponseBody(const GetFileSystemResponseBody &) = default ;
    GetFileSystemResponseBody(GetFileSystemResponseBody &&) = default ;
    GetFileSystemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileSystemResponseBody() = default ;
    GetFileSystemResponseBody& operator=(const GetFileSystemResponseBody &) = default ;
    GetFileSystemResponseBody& operator=(GetFileSystemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FileSystem : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileSystem& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_TO_JSON(FileSystemName, fileSystemName_);
        DARABONBA_PTR_TO_JSON(MeteringSpaceSize, meteringSpaceSize_);
        DARABONBA_PTR_TO_JSON(MountPointCount, mountPointCount_);
        DARABONBA_PTR_TO_JSON(NumberOfDirectories, numberOfDirectories_);
        DARABONBA_PTR_TO_JSON(NumberOfFiles, numberOfFiles_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(ProvisionedThroughputInMiBps, provisionedThroughputInMiBps_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SpaceCapacity, spaceCapacity_);
        DARABONBA_PTR_TO_JSON(StoragePackageId, storagePackageId_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(ThroughputMode, throughputMode_);
        DARABONBA_PTR_TO_JSON(UsedSpaceSize, usedSpaceSize_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, FileSystem& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_FROM_JSON(FileSystemName, fileSystemName_);
        DARABONBA_PTR_FROM_JSON(MeteringSpaceSize, meteringSpaceSize_);
        DARABONBA_PTR_FROM_JSON(MountPointCount, mountPointCount_);
        DARABONBA_PTR_FROM_JSON(NumberOfDirectories, numberOfDirectories_);
        DARABONBA_PTR_FROM_JSON(NumberOfFiles, numberOfFiles_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(ProvisionedThroughputInMiBps, provisionedThroughputInMiBps_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SpaceCapacity, spaceCapacity_);
        DARABONBA_PTR_FROM_JSON(StoragePackageId, storagePackageId_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(ThroughputMode, throughputMode_);
        DARABONBA_PTR_FROM_JSON(UsedSpaceSize, usedSpaceSize_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      FileSystem() = default ;
      FileSystem(const FileSystem &) = default ;
      FileSystem(FileSystem &&) = default ;
      FileSystem(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileSystem() = default ;
      FileSystem& operator=(const FileSystem &) = default ;
      FileSystem& operator=(FileSystem &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->fileSystemId_ == nullptr && this->fileSystemName_ == nullptr && this->meteringSpaceSize_ == nullptr && this->mountPointCount_ == nullptr
        && this->numberOfDirectories_ == nullptr && this->numberOfFiles_ == nullptr && this->protocolType_ == nullptr && this->provisionedThroughputInMiBps_ == nullptr && this->regionId_ == nullptr
        && this->spaceCapacity_ == nullptr && this->storagePackageId_ == nullptr && this->storageType_ == nullptr && this->throughputMode_ == nullptr && this->usedSpaceSize_ == nullptr
        && this->version_ == nullptr && this->zoneId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline FileSystem& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline FileSystem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline FileSystem& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // fileSystemName Field Functions 
      bool hasFileSystemName() const { return this->fileSystemName_ != nullptr;};
      void deleteFileSystemName() { this->fileSystemName_ = nullptr;};
      inline string getFileSystemName() const { DARABONBA_PTR_GET_DEFAULT(fileSystemName_, "") };
      inline FileSystem& setFileSystemName(string fileSystemName) { DARABONBA_PTR_SET_VALUE(fileSystemName_, fileSystemName) };


      // meteringSpaceSize Field Functions 
      bool hasMeteringSpaceSize() const { return this->meteringSpaceSize_ != nullptr;};
      void deleteMeteringSpaceSize() { this->meteringSpaceSize_ = nullptr;};
      inline float getMeteringSpaceSize() const { DARABONBA_PTR_GET_DEFAULT(meteringSpaceSize_, 0.0) };
      inline FileSystem& setMeteringSpaceSize(float meteringSpaceSize) { DARABONBA_PTR_SET_VALUE(meteringSpaceSize_, meteringSpaceSize) };


      // mountPointCount Field Functions 
      bool hasMountPointCount() const { return this->mountPointCount_ != nullptr;};
      void deleteMountPointCount() { this->mountPointCount_ = nullptr;};
      inline int64_t getMountPointCount() const { DARABONBA_PTR_GET_DEFAULT(mountPointCount_, 0L) };
      inline FileSystem& setMountPointCount(int64_t mountPointCount) { DARABONBA_PTR_SET_VALUE(mountPointCount_, mountPointCount) };


      // numberOfDirectories Field Functions 
      bool hasNumberOfDirectories() const { return this->numberOfDirectories_ != nullptr;};
      void deleteNumberOfDirectories() { this->numberOfDirectories_ = nullptr;};
      inline int64_t getNumberOfDirectories() const { DARABONBA_PTR_GET_DEFAULT(numberOfDirectories_, 0L) };
      inline FileSystem& setNumberOfDirectories(int64_t numberOfDirectories) { DARABONBA_PTR_SET_VALUE(numberOfDirectories_, numberOfDirectories) };


      // numberOfFiles Field Functions 
      bool hasNumberOfFiles() const { return this->numberOfFiles_ != nullptr;};
      void deleteNumberOfFiles() { this->numberOfFiles_ = nullptr;};
      inline int64_t getNumberOfFiles() const { DARABONBA_PTR_GET_DEFAULT(numberOfFiles_, 0L) };
      inline FileSystem& setNumberOfFiles(int64_t numberOfFiles) { DARABONBA_PTR_SET_VALUE(numberOfFiles_, numberOfFiles) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline FileSystem& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // provisionedThroughputInMiBps Field Functions 
      bool hasProvisionedThroughputInMiBps() const { return this->provisionedThroughputInMiBps_ != nullptr;};
      void deleteProvisionedThroughputInMiBps() { this->provisionedThroughputInMiBps_ = nullptr;};
      inline int64_t getProvisionedThroughputInMiBps() const { DARABONBA_PTR_GET_DEFAULT(provisionedThroughputInMiBps_, 0L) };
      inline FileSystem& setProvisionedThroughputInMiBps(int64_t provisionedThroughputInMiBps) { DARABONBA_PTR_SET_VALUE(provisionedThroughputInMiBps_, provisionedThroughputInMiBps) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline FileSystem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // spaceCapacity Field Functions 
      bool hasSpaceCapacity() const { return this->spaceCapacity_ != nullptr;};
      void deleteSpaceCapacity() { this->spaceCapacity_ = nullptr;};
      inline int64_t getSpaceCapacity() const { DARABONBA_PTR_GET_DEFAULT(spaceCapacity_, 0L) };
      inline FileSystem& setSpaceCapacity(int64_t spaceCapacity) { DARABONBA_PTR_SET_VALUE(spaceCapacity_, spaceCapacity) };


      // storagePackageId Field Functions 
      bool hasStoragePackageId() const { return this->storagePackageId_ != nullptr;};
      void deleteStoragePackageId() { this->storagePackageId_ = nullptr;};
      inline string getStoragePackageId() const { DARABONBA_PTR_GET_DEFAULT(storagePackageId_, "") };
      inline FileSystem& setStoragePackageId(string storagePackageId) { DARABONBA_PTR_SET_VALUE(storagePackageId_, storagePackageId) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline FileSystem& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // throughputMode Field Functions 
      bool hasThroughputMode() const { return this->throughputMode_ != nullptr;};
      void deleteThroughputMode() { this->throughputMode_ = nullptr;};
      inline string getThroughputMode() const { DARABONBA_PTR_GET_DEFAULT(throughputMode_, "") };
      inline FileSystem& setThroughputMode(string throughputMode) { DARABONBA_PTR_SET_VALUE(throughputMode_, throughputMode) };


      // usedSpaceSize Field Functions 
      bool hasUsedSpaceSize() const { return this->usedSpaceSize_ != nullptr;};
      void deleteUsedSpaceSize() { this->usedSpaceSize_ = nullptr;};
      inline float getUsedSpaceSize() const { DARABONBA_PTR_GET_DEFAULT(usedSpaceSize_, 0.0) };
      inline FileSystem& setUsedSpaceSize(float usedSpaceSize) { DARABONBA_PTR_SET_VALUE(usedSpaceSize_, usedSpaceSize) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline FileSystem& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline FileSystem& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> fileSystemId_ {};
      shared_ptr<string> fileSystemName_ {};
      shared_ptr<float> meteringSpaceSize_ {};
      shared_ptr<int64_t> mountPointCount_ {};
      shared_ptr<int64_t> numberOfDirectories_ {};
      shared_ptr<int64_t> numberOfFiles_ {};
      shared_ptr<string> protocolType_ {};
      shared_ptr<int64_t> provisionedThroughputInMiBps_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<int64_t> spaceCapacity_ {};
      shared_ptr<string> storagePackageId_ {};
      shared_ptr<string> storageType_ {};
      shared_ptr<string> throughputMode_ {};
      shared_ptr<float> usedSpaceSize_ {};
      shared_ptr<string> version_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->fileSystem_ == nullptr
        && this->requestId_ == nullptr; };
    // fileSystem Field Functions 
    bool hasFileSystem() const { return this->fileSystem_ != nullptr;};
    void deleteFileSystem() { this->fileSystem_ = nullptr;};
    inline const GetFileSystemResponseBody::FileSystem & getFileSystem() const { DARABONBA_PTR_GET_CONST(fileSystem_, GetFileSystemResponseBody::FileSystem) };
    inline GetFileSystemResponseBody::FileSystem getFileSystem() { DARABONBA_PTR_GET(fileSystem_, GetFileSystemResponseBody::FileSystem) };
    inline GetFileSystemResponseBody& setFileSystem(const GetFileSystemResponseBody::FileSystem & fileSystem) { DARABONBA_PTR_SET_VALUE(fileSystem_, fileSystem) };
    inline GetFileSystemResponseBody& setFileSystem(GetFileSystemResponseBody::FileSystem && fileSystem) { DARABONBA_PTR_SET_RVALUE(fileSystem_, fileSystem) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileSystemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetFileSystemResponseBody::FileSystem> fileSystem_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
