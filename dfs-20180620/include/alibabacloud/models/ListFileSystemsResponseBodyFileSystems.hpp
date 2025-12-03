// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILESYSTEMSRESPONSEBODYFILESYSTEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTFILESYSTEMSRESPONSEBODYFILESYSTEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListFileSystemsResponseBodyFileSystems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileSystemsResponseBodyFileSystems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListFileSystemsResponseBodyFileSystems& obj) { 
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
    ListFileSystemsResponseBodyFileSystems() = default ;
    ListFileSystemsResponseBodyFileSystems(const ListFileSystemsResponseBodyFileSystems &) = default ;
    ListFileSystemsResponseBodyFileSystems(ListFileSystemsResponseBodyFileSystems &&) = default ;
    ListFileSystemsResponseBodyFileSystems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileSystemsResponseBodyFileSystems() = default ;
    ListFileSystemsResponseBodyFileSystems& operator=(const ListFileSystemsResponseBodyFileSystems &) = default ;
    ListFileSystemsResponseBodyFileSystems& operator=(ListFileSystemsResponseBodyFileSystems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->fileSystemId_ == nullptr && return this->fileSystemName_ == nullptr && return this->meteringSpaceSize_ == nullptr && return this->mountPointCount_ == nullptr
        && return this->numberOfDirectories_ == nullptr && return this->numberOfFiles_ == nullptr && return this->protocolType_ == nullptr && return this->provisionedThroughputInMiBps_ == nullptr && return this->regionId_ == nullptr
        && return this->spaceCapacity_ == nullptr && return this->storagePackageId_ == nullptr && return this->storageType_ == nullptr && return this->throughputMode_ == nullptr && return this->usedSpaceSize_ == nullptr
        && return this->version_ == nullptr && return this->zoneId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListFileSystemsResponseBodyFileSystems& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListFileSystemsResponseBodyFileSystems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ListFileSystemsResponseBodyFileSystems& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystemName Field Functions 
    bool hasFileSystemName() const { return this->fileSystemName_ != nullptr;};
    void deleteFileSystemName() { this->fileSystemName_ = nullptr;};
    inline string fileSystemName() const { DARABONBA_PTR_GET_DEFAULT(fileSystemName_, "") };
    inline ListFileSystemsResponseBodyFileSystems& setFileSystemName(string fileSystemName) { DARABONBA_PTR_SET_VALUE(fileSystemName_, fileSystemName) };


    // meteringSpaceSize Field Functions 
    bool hasMeteringSpaceSize() const { return this->meteringSpaceSize_ != nullptr;};
    void deleteMeteringSpaceSize() { this->meteringSpaceSize_ = nullptr;};
    inline float meteringSpaceSize() const { DARABONBA_PTR_GET_DEFAULT(meteringSpaceSize_, 0.0) };
    inline ListFileSystemsResponseBodyFileSystems& setMeteringSpaceSize(float meteringSpaceSize) { DARABONBA_PTR_SET_VALUE(meteringSpaceSize_, meteringSpaceSize) };


    // mountPointCount Field Functions 
    bool hasMountPointCount() const { return this->mountPointCount_ != nullptr;};
    void deleteMountPointCount() { this->mountPointCount_ = nullptr;};
    inline int64_t mountPointCount() const { DARABONBA_PTR_GET_DEFAULT(mountPointCount_, 0L) };
    inline ListFileSystemsResponseBodyFileSystems& setMountPointCount(int64_t mountPointCount) { DARABONBA_PTR_SET_VALUE(mountPointCount_, mountPointCount) };


    // numberOfDirectories Field Functions 
    bool hasNumberOfDirectories() const { return this->numberOfDirectories_ != nullptr;};
    void deleteNumberOfDirectories() { this->numberOfDirectories_ = nullptr;};
    inline int64_t numberOfDirectories() const { DARABONBA_PTR_GET_DEFAULT(numberOfDirectories_, 0L) };
    inline ListFileSystemsResponseBodyFileSystems& setNumberOfDirectories(int64_t numberOfDirectories) { DARABONBA_PTR_SET_VALUE(numberOfDirectories_, numberOfDirectories) };


    // numberOfFiles Field Functions 
    bool hasNumberOfFiles() const { return this->numberOfFiles_ != nullptr;};
    void deleteNumberOfFiles() { this->numberOfFiles_ = nullptr;};
    inline int64_t numberOfFiles() const { DARABONBA_PTR_GET_DEFAULT(numberOfFiles_, 0L) };
    inline ListFileSystemsResponseBodyFileSystems& setNumberOfFiles(int64_t numberOfFiles) { DARABONBA_PTR_SET_VALUE(numberOfFiles_, numberOfFiles) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline ListFileSystemsResponseBodyFileSystems& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // provisionedThroughputInMiBps Field Functions 
    bool hasProvisionedThroughputInMiBps() const { return this->provisionedThroughputInMiBps_ != nullptr;};
    void deleteProvisionedThroughputInMiBps() { this->provisionedThroughputInMiBps_ = nullptr;};
    inline int64_t provisionedThroughputInMiBps() const { DARABONBA_PTR_GET_DEFAULT(provisionedThroughputInMiBps_, 0L) };
    inline ListFileSystemsResponseBodyFileSystems& setProvisionedThroughputInMiBps(int64_t provisionedThroughputInMiBps) { DARABONBA_PTR_SET_VALUE(provisionedThroughputInMiBps_, provisionedThroughputInMiBps) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListFileSystemsResponseBodyFileSystems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // spaceCapacity Field Functions 
    bool hasSpaceCapacity() const { return this->spaceCapacity_ != nullptr;};
    void deleteSpaceCapacity() { this->spaceCapacity_ = nullptr;};
    inline int64_t spaceCapacity() const { DARABONBA_PTR_GET_DEFAULT(spaceCapacity_, 0L) };
    inline ListFileSystemsResponseBodyFileSystems& setSpaceCapacity(int64_t spaceCapacity) { DARABONBA_PTR_SET_VALUE(spaceCapacity_, spaceCapacity) };


    // storagePackageId Field Functions 
    bool hasStoragePackageId() const { return this->storagePackageId_ != nullptr;};
    void deleteStoragePackageId() { this->storagePackageId_ = nullptr;};
    inline string storagePackageId() const { DARABONBA_PTR_GET_DEFAULT(storagePackageId_, "") };
    inline ListFileSystemsResponseBodyFileSystems& setStoragePackageId(string storagePackageId) { DARABONBA_PTR_SET_VALUE(storagePackageId_, storagePackageId) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ListFileSystemsResponseBodyFileSystems& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // throughputMode Field Functions 
    bool hasThroughputMode() const { return this->throughputMode_ != nullptr;};
    void deleteThroughputMode() { this->throughputMode_ = nullptr;};
    inline string throughputMode() const { DARABONBA_PTR_GET_DEFAULT(throughputMode_, "") };
    inline ListFileSystemsResponseBodyFileSystems& setThroughputMode(string throughputMode) { DARABONBA_PTR_SET_VALUE(throughputMode_, throughputMode) };


    // usedSpaceSize Field Functions 
    bool hasUsedSpaceSize() const { return this->usedSpaceSize_ != nullptr;};
    void deleteUsedSpaceSize() { this->usedSpaceSize_ = nullptr;};
    inline float usedSpaceSize() const { DARABONBA_PTR_GET_DEFAULT(usedSpaceSize_, 0.0) };
    inline ListFileSystemsResponseBodyFileSystems& setUsedSpaceSize(float usedSpaceSize) { DARABONBA_PTR_SET_VALUE(usedSpaceSize_, usedSpaceSize) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListFileSystemsResponseBodyFileSystems& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListFileSystemsResponseBodyFileSystems& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> fileSystemId_ = nullptr;
    std::shared_ptr<string> fileSystemName_ = nullptr;
    std::shared_ptr<float> meteringSpaceSize_ = nullptr;
    std::shared_ptr<int64_t> mountPointCount_ = nullptr;
    std::shared_ptr<int64_t> numberOfDirectories_ = nullptr;
    std::shared_ptr<int64_t> numberOfFiles_ = nullptr;
    std::shared_ptr<string> protocolType_ = nullptr;
    std::shared_ptr<int64_t> provisionedThroughputInMiBps_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> spaceCapacity_ = nullptr;
    std::shared_ptr<string> storagePackageId_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
    std::shared_ptr<string> throughputMode_ = nullptr;
    std::shared_ptr<float> usedSpaceSize_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
