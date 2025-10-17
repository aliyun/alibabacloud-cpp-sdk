// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURESYNCHRONIZATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURESYNCHRONIZATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConfigureSynchronizationJobRequestDestinationEndpoint.hpp>
#include <alibabacloud/models/ConfigureSynchronizationJobRequestPartitionKey.hpp>
#include <alibabacloud/models/ConfigureSynchronizationJobRequestSourceEndpoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureSynchronizationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureSynchronizationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_TO_JSON(PartitionKey, partitionKey_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_TO_JSON(MigrationReserved, migrationReserved_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
      DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobId, synchronizationJobId_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobName, synchronizationJobName_);
      DARABONBA_PTR_TO_JSON(SynchronizationObjects, synchronizationObjects_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureSynchronizationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_FROM_JSON(PartitionKey, partitionKey_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_FROM_JSON(MigrationReserved, migrationReserved_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
      DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobId, synchronizationJobId_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobName, synchronizationJobName_);
      DARABONBA_PTR_FROM_JSON(SynchronizationObjects, synchronizationObjects_);
    };
    ConfigureSynchronizationJobRequest() = default ;
    ConfigureSynchronizationJobRequest(const ConfigureSynchronizationJobRequest &) = default ;
    ConfigureSynchronizationJobRequest(ConfigureSynchronizationJobRequest &&) = default ;
    ConfigureSynchronizationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureSynchronizationJobRequest() = default ;
    ConfigureSynchronizationJobRequest& operator=(const ConfigureSynchronizationJobRequest &) = default ;
    ConfigureSynchronizationJobRequest& operator=(ConfigureSynchronizationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationEndpoint_ == nullptr
        && return this->partitionKey_ == nullptr && return this->sourceEndpoint_ == nullptr && return this->accountId_ == nullptr && return this->checkpoint_ == nullptr && return this->dataInitialization_ == nullptr
        && return this->migrationReserved_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->structureInitialization_ == nullptr
        && return this->synchronizationDirection_ == nullptr && return this->synchronizationJobId_ == nullptr && return this->synchronizationJobName_ == nullptr && return this->synchronizationObjects_ == nullptr; };
    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const ConfigureSynchronizationJobRequestDestinationEndpoint & destinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, ConfigureSynchronizationJobRequestDestinationEndpoint) };
    inline ConfigureSynchronizationJobRequestDestinationEndpoint destinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, ConfigureSynchronizationJobRequestDestinationEndpoint) };
    inline ConfigureSynchronizationJobRequest& setDestinationEndpoint(const ConfigureSynchronizationJobRequestDestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline ConfigureSynchronizationJobRequest& setDestinationEndpoint(ConfigureSynchronizationJobRequestDestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // partitionKey Field Functions 
    bool hasPartitionKey() const { return this->partitionKey_ != nullptr;};
    void deletePartitionKey() { this->partitionKey_ = nullptr;};
    inline const ConfigureSynchronizationJobRequestPartitionKey & partitionKey() const { DARABONBA_PTR_GET_CONST(partitionKey_, ConfigureSynchronizationJobRequestPartitionKey) };
    inline ConfigureSynchronizationJobRequestPartitionKey partitionKey() { DARABONBA_PTR_GET(partitionKey_, ConfigureSynchronizationJobRequestPartitionKey) };
    inline ConfigureSynchronizationJobRequest& setPartitionKey(const ConfigureSynchronizationJobRequestPartitionKey & partitionKey) { DARABONBA_PTR_SET_VALUE(partitionKey_, partitionKey) };
    inline ConfigureSynchronizationJobRequest& setPartitionKey(ConfigureSynchronizationJobRequestPartitionKey && partitionKey) { DARABONBA_PTR_SET_RVALUE(partitionKey_, partitionKey) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const ConfigureSynchronizationJobRequestSourceEndpoint & sourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, ConfigureSynchronizationJobRequestSourceEndpoint) };
    inline ConfigureSynchronizationJobRequestSourceEndpoint sourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, ConfigureSynchronizationJobRequestSourceEndpoint) };
    inline ConfigureSynchronizationJobRequest& setSourceEndpoint(const ConfigureSynchronizationJobRequestSourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline ConfigureSynchronizationJobRequest& setSourceEndpoint(ConfigureSynchronizationJobRequestSourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ConfigureSynchronizationJobRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline string checkpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
    inline ConfigureSynchronizationJobRequest& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // dataInitialization Field Functions 
    bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
    void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
    inline bool dataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, false) };
    inline ConfigureSynchronizationJobRequest& setDataInitialization(bool dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


    // migrationReserved Field Functions 
    bool hasMigrationReserved() const { return this->migrationReserved_ != nullptr;};
    void deleteMigrationReserved() { this->migrationReserved_ = nullptr;};
    inline string migrationReserved() const { DARABONBA_PTR_GET_DEFAULT(migrationReserved_, "") };
    inline ConfigureSynchronizationJobRequest& setMigrationReserved(string migrationReserved) { DARABONBA_PTR_SET_VALUE(migrationReserved_, migrationReserved) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ConfigureSynchronizationJobRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigureSynchronizationJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigureSynchronizationJobRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // structureInitialization Field Functions 
    bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
    void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
    inline bool structureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, false) };
    inline ConfigureSynchronizationJobRequest& setStructureInitialization(bool structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string synchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline ConfigureSynchronizationJobRequest& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


    // synchronizationJobId Field Functions 
    bool hasSynchronizationJobId() const { return this->synchronizationJobId_ != nullptr;};
    void deleteSynchronizationJobId() { this->synchronizationJobId_ = nullptr;};
    inline string synchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobId_, "") };
    inline ConfigureSynchronizationJobRequest& setSynchronizationJobId(string synchronizationJobId) { DARABONBA_PTR_SET_VALUE(synchronizationJobId_, synchronizationJobId) };


    // synchronizationJobName Field Functions 
    bool hasSynchronizationJobName() const { return this->synchronizationJobName_ != nullptr;};
    void deleteSynchronizationJobName() { this->synchronizationJobName_ = nullptr;};
    inline string synchronizationJobName() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobName_, "") };
    inline ConfigureSynchronizationJobRequest& setSynchronizationJobName(string synchronizationJobName) { DARABONBA_PTR_SET_VALUE(synchronizationJobName_, synchronizationJobName) };


    // synchronizationObjects Field Functions 
    bool hasSynchronizationObjects() const { return this->synchronizationObjects_ != nullptr;};
    void deleteSynchronizationObjects() { this->synchronizationObjects_ = nullptr;};
    inline string synchronizationObjects() const { DARABONBA_PTR_GET_DEFAULT(synchronizationObjects_, "") };
    inline ConfigureSynchronizationJobRequest& setSynchronizationObjects(string synchronizationObjects) { DARABONBA_PTR_SET_VALUE(synchronizationObjects_, synchronizationObjects) };


  protected:
    std::shared_ptr<ConfigureSynchronizationJobRequestDestinationEndpoint> destinationEndpoint_ = nullptr;
    std::shared_ptr<ConfigureSynchronizationJobRequestPartitionKey> partitionKey_ = nullptr;
    std::shared_ptr<ConfigureSynchronizationJobRequestSourceEndpoint> sourceEndpoint_ = nullptr;
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter because this parameter will be removed in the future.
    std::shared_ptr<string> accountId_ = nullptr;
    // The synchronization checkpoint.
    std::shared_ptr<string> checkpoint_ = nullptr;
    // Specifies whether to perform initial full data synchronization. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // >  Default value: **true**.
    // 
    // This parameter is required.
    std::shared_ptr<bool> dataInitialization_ = nullptr;
    // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet special requirements, for example, whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
    // 
    // >  This parameter can be used for data synchronization between ApsaraDB for Redis Enterprise Edition instances. For more information, see [Use OpenAPI Explorer to configure one-way or two-way data synchronization between ApsaraDB for Redis Enterprise Edition instances](https://help.aliyun.com/document_detail/155967.html).
    std::shared_ptr<string> migrationReserved_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // 资源组ID。
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Specifies whether to perform initial schema synchronization. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // >  Default value: **true**.
    // 
    // This parameter is required.
    std::shared_ptr<bool> structureInitialization_ = nullptr;
    // The synchronization direction. Valid values:
    // 
    // *   **Forward**
    // *   **Reverse**
    // 
    // > 
    // *   Default value: **Forward**.
    // *   The value **Reverse** takes effect only if the topology of the data synchronization instance is two-way synchronization.
    std::shared_ptr<string> synchronizationDirection_ = nullptr;
    // The ID of the data synchronization instance. You can call the [DescribeSynchronizationJobs](https://help.aliyun.com/document_detail/49454.html) operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> synchronizationJobId_ = nullptr;
    // The name of the data synchronization task.
    // 
    // >  We recommend that you specify an informative name for easy identification. You do not need to use a unique task name.
    std::shared_ptr<string> synchronizationJobName_ = nullptr;
    // The objects that you want to synchronize. The value is a JSON string and can contain regular expressions. For more information, see [SynchronizationObjects](https://help.aliyun.com/document_detail/141901.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> synchronizationObjects_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
