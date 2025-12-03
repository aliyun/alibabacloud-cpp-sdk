// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILESYSTEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILESYSTEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class CreateFileSystemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileSystemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataRedundancyType, dataRedundancyType_);
      DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemName, fileSystemName_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(PartitionNumber, partitionNumber_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(ProvisionedThroughputInMiBps, provisionedThroughputInMiBps_);
      DARABONBA_PTR_TO_JSON(SpaceCapacity, spaceCapacity_);
      DARABONBA_PTR_TO_JSON(StorageSetName, storageSetName_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(ThroughputMode, throughputMode_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileSystemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataRedundancyType, dataRedundancyType_);
      DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemName, fileSystemName_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(PartitionNumber, partitionNumber_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(ProvisionedThroughputInMiBps, provisionedThroughputInMiBps_);
      DARABONBA_PTR_FROM_JSON(SpaceCapacity, spaceCapacity_);
      DARABONBA_PTR_FROM_JSON(StorageSetName, storageSetName_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(ThroughputMode, throughputMode_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateFileSystemRequest() = default ;
    CreateFileSystemRequest(const CreateFileSystemRequest &) = default ;
    CreateFileSystemRequest(CreateFileSystemRequest &&) = default ;
    CreateFileSystemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileSystemRequest() = default ;
    CreateFileSystemRequest& operator=(const CreateFileSystemRequest &) = default ;
    CreateFileSystemRequest& operator=(CreateFileSystemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataRedundancyType_ == nullptr
        && return this->dedicatedClusterId_ == nullptr && return this->description_ == nullptr && return this->fileSystemName_ == nullptr && return this->inputRegionId_ == nullptr && return this->partitionNumber_ == nullptr
        && return this->protocolType_ == nullptr && return this->provisionedThroughputInMiBps_ == nullptr && return this->spaceCapacity_ == nullptr && return this->storageSetName_ == nullptr && return this->storageType_ == nullptr
        && return this->throughputMode_ == nullptr && return this->zoneId_ == nullptr; };
    // dataRedundancyType Field Functions 
    bool hasDataRedundancyType() const { return this->dataRedundancyType_ != nullptr;};
    void deleteDataRedundancyType() { this->dataRedundancyType_ = nullptr;};
    inline string dataRedundancyType() const { DARABONBA_PTR_GET_DEFAULT(dataRedundancyType_, "") };
    inline CreateFileSystemRequest& setDataRedundancyType(string dataRedundancyType) { DARABONBA_PTR_SET_VALUE(dataRedundancyType_, dataRedundancyType) };


    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string dedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline CreateFileSystemRequest& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFileSystemRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemName Field Functions 
    bool hasFileSystemName() const { return this->fileSystemName_ != nullptr;};
    void deleteFileSystemName() { this->fileSystemName_ = nullptr;};
    inline string fileSystemName() const { DARABONBA_PTR_GET_DEFAULT(fileSystemName_, "") };
    inline CreateFileSystemRequest& setFileSystemName(string fileSystemName) { DARABONBA_PTR_SET_VALUE(fileSystemName_, fileSystemName) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline CreateFileSystemRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // partitionNumber Field Functions 
    bool hasPartitionNumber() const { return this->partitionNumber_ != nullptr;};
    void deletePartitionNumber() { this->partitionNumber_ = nullptr;};
    inline int32_t partitionNumber() const { DARABONBA_PTR_GET_DEFAULT(partitionNumber_, 0) };
    inline CreateFileSystemRequest& setPartitionNumber(int32_t partitionNumber) { DARABONBA_PTR_SET_VALUE(partitionNumber_, partitionNumber) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline CreateFileSystemRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // provisionedThroughputInMiBps Field Functions 
    bool hasProvisionedThroughputInMiBps() const { return this->provisionedThroughputInMiBps_ != nullptr;};
    void deleteProvisionedThroughputInMiBps() { this->provisionedThroughputInMiBps_ = nullptr;};
    inline int64_t provisionedThroughputInMiBps() const { DARABONBA_PTR_GET_DEFAULT(provisionedThroughputInMiBps_, 0L) };
    inline CreateFileSystemRequest& setProvisionedThroughputInMiBps(int64_t provisionedThroughputInMiBps) { DARABONBA_PTR_SET_VALUE(provisionedThroughputInMiBps_, provisionedThroughputInMiBps) };


    // spaceCapacity Field Functions 
    bool hasSpaceCapacity() const { return this->spaceCapacity_ != nullptr;};
    void deleteSpaceCapacity() { this->spaceCapacity_ = nullptr;};
    inline int64_t spaceCapacity() const { DARABONBA_PTR_GET_DEFAULT(spaceCapacity_, 0L) };
    inline CreateFileSystemRequest& setSpaceCapacity(int64_t spaceCapacity) { DARABONBA_PTR_SET_VALUE(spaceCapacity_, spaceCapacity) };


    // storageSetName Field Functions 
    bool hasStorageSetName() const { return this->storageSetName_ != nullptr;};
    void deleteStorageSetName() { this->storageSetName_ = nullptr;};
    inline string storageSetName() const { DARABONBA_PTR_GET_DEFAULT(storageSetName_, "") };
    inline CreateFileSystemRequest& setStorageSetName(string storageSetName) { DARABONBA_PTR_SET_VALUE(storageSetName_, storageSetName) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateFileSystemRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // throughputMode Field Functions 
    bool hasThroughputMode() const { return this->throughputMode_ != nullptr;};
    void deleteThroughputMode() { this->throughputMode_ = nullptr;};
    inline string throughputMode() const { DARABONBA_PTR_GET_DEFAULT(throughputMode_, "") };
    inline CreateFileSystemRequest& setThroughputMode(string throughputMode) { DARABONBA_PTR_SET_VALUE(throughputMode_, throughputMode) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateFileSystemRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> dataRedundancyType_ = nullptr;
    std::shared_ptr<string> dedicatedClusterId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileSystemName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    std::shared_ptr<int32_t> partitionNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> protocolType_ = nullptr;
    std::shared_ptr<int64_t> provisionedThroughputInMiBps_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> spaceCapacity_ = nullptr;
    std::shared_ptr<string> storageSetName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> storageType_ = nullptr;
    std::shared_ptr<string> throughputMode_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
