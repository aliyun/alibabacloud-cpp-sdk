// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGUREMIGRATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGUREMIGRATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConfigureMigrationJobRequestDestinationEndpoint.hpp>
#include <alibabacloud/models/ConfigureMigrationJobRequestMigrationMode.hpp>
#include <alibabacloud/models/ConfigureMigrationJobRequestSourceEndpoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureMigrationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureMigrationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_TO_JSON(MigrationJobId, migrationJobId_);
      DARABONBA_PTR_TO_JSON(MigrationJobName, migrationJobName_);
      DARABONBA_PTR_TO_JSON(MigrationObject, migrationObject_);
      DARABONBA_PTR_TO_JSON(MigrationReserved, migrationReserved_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureMigrationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_FROM_JSON(MigrationJobId, migrationJobId_);
      DARABONBA_PTR_FROM_JSON(MigrationJobName, migrationJobName_);
      DARABONBA_PTR_FROM_JSON(MigrationObject, migrationObject_);
      DARABONBA_PTR_FROM_JSON(MigrationReserved, migrationReserved_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ConfigureMigrationJobRequest() = default ;
    ConfigureMigrationJobRequest(const ConfigureMigrationJobRequest &) = default ;
    ConfigureMigrationJobRequest(ConfigureMigrationJobRequest &&) = default ;
    ConfigureMigrationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureMigrationJobRequest() = default ;
    ConfigureMigrationJobRequest& operator=(const ConfigureMigrationJobRequest &) = default ;
    ConfigureMigrationJobRequest& operator=(ConfigureMigrationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationEndpoint_ != nullptr
        && this->migrationMode_ != nullptr && this->sourceEndpoint_ != nullptr && this->accountId_ != nullptr && this->checkpoint_ != nullptr && this->migrationJobId_ != nullptr
        && this->migrationJobName_ != nullptr && this->migrationObject_ != nullptr && this->migrationReserved_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr; };
    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const ConfigureMigrationJobRequestDestinationEndpoint & destinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, ConfigureMigrationJobRequestDestinationEndpoint) };
    inline ConfigureMigrationJobRequestDestinationEndpoint destinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, ConfigureMigrationJobRequestDestinationEndpoint) };
    inline ConfigureMigrationJobRequest& setDestinationEndpoint(const ConfigureMigrationJobRequestDestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline ConfigureMigrationJobRequest& setDestinationEndpoint(ConfigureMigrationJobRequestDestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // migrationMode Field Functions 
    bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
    void deleteMigrationMode() { this->migrationMode_ = nullptr;};
    inline const ConfigureMigrationJobRequestMigrationMode & migrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, ConfigureMigrationJobRequestMigrationMode) };
    inline ConfigureMigrationJobRequestMigrationMode migrationMode() { DARABONBA_PTR_GET(migrationMode_, ConfigureMigrationJobRequestMigrationMode) };
    inline ConfigureMigrationJobRequest& setMigrationMode(const ConfigureMigrationJobRequestMigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
    inline ConfigureMigrationJobRequest& setMigrationMode(ConfigureMigrationJobRequestMigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const ConfigureMigrationJobRequestSourceEndpoint & sourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, ConfigureMigrationJobRequestSourceEndpoint) };
    inline ConfigureMigrationJobRequestSourceEndpoint sourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, ConfigureMigrationJobRequestSourceEndpoint) };
    inline ConfigureMigrationJobRequest& setSourceEndpoint(const ConfigureMigrationJobRequestSourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline ConfigureMigrationJobRequest& setSourceEndpoint(ConfigureMigrationJobRequestSourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ConfigureMigrationJobRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline string checkpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
    inline ConfigureMigrationJobRequest& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // migrationJobId Field Functions 
    bool hasMigrationJobId() const { return this->migrationJobId_ != nullptr;};
    void deleteMigrationJobId() { this->migrationJobId_ = nullptr;};
    inline string migrationJobId() const { DARABONBA_PTR_GET_DEFAULT(migrationJobId_, "") };
    inline ConfigureMigrationJobRequest& setMigrationJobId(string migrationJobId) { DARABONBA_PTR_SET_VALUE(migrationJobId_, migrationJobId) };


    // migrationJobName Field Functions 
    bool hasMigrationJobName() const { return this->migrationJobName_ != nullptr;};
    void deleteMigrationJobName() { this->migrationJobName_ = nullptr;};
    inline string migrationJobName() const { DARABONBA_PTR_GET_DEFAULT(migrationJobName_, "") };
    inline ConfigureMigrationJobRequest& setMigrationJobName(string migrationJobName) { DARABONBA_PTR_SET_VALUE(migrationJobName_, migrationJobName) };


    // migrationObject Field Functions 
    bool hasMigrationObject() const { return this->migrationObject_ != nullptr;};
    void deleteMigrationObject() { this->migrationObject_ = nullptr;};
    inline string migrationObject() const { DARABONBA_PTR_GET_DEFAULT(migrationObject_, "") };
    inline ConfigureMigrationJobRequest& setMigrationObject(string migrationObject) { DARABONBA_PTR_SET_VALUE(migrationObject_, migrationObject) };


    // migrationReserved Field Functions 
    bool hasMigrationReserved() const { return this->migrationReserved_ != nullptr;};
    void deleteMigrationReserved() { this->migrationReserved_ = nullptr;};
    inline string migrationReserved() const { DARABONBA_PTR_GET_DEFAULT(migrationReserved_, "") };
    inline ConfigureMigrationJobRequest& setMigrationReserved(string migrationReserved) { DARABONBA_PTR_SET_VALUE(migrationReserved_, migrationReserved) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ConfigureMigrationJobRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigureMigrationJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigureMigrationJobRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    std::shared_ptr<ConfigureMigrationJobRequestDestinationEndpoint> destinationEndpoint_ = nullptr;
    std::shared_ptr<ConfigureMigrationJobRequestMigrationMode> migrationMode_ = nullptr;
    std::shared_ptr<ConfigureMigrationJobRequestSourceEndpoint> sourceEndpoint_ = nullptr;
    // The objects that you want to migrate. The value is a JSON string and can contain regular expressions.
    // 
    // For more information, see [MigrationObject](https://help.aliyun.com/document_detail/141227.html).
    std::shared_ptr<string> accountId_ = nullptr;
    // Specifies whether to perform incremental data migration. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // >  For more information about databases that support incremental data migration, see [Supported databases and migration types](https://help.aliyun.com/document_detail/26618.html).
    std::shared_ptr<string> checkpoint_ = nullptr;
    // system
    // 
    // This parameter is required.
    std::shared_ptr<string> migrationJobId_ = nullptr;
    // The ID of the region where the data migration instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    // 
    // >  The region ID of the data migration instance is the same as that of the destination database.
    // 
    // This parameter is required.
    std::shared_ptr<string> migrationJobName_ = nullptr;
    // Specifies whether to perform schema migration. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // >  For more information about databases that support schema migration, see [Supported databases and migration types](https://help.aliyun.com/document_detail/26618.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> migrationObject_ = nullptr;
    // Specifies whether to perform full data migration. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // >  For more information about databases that support full data migration, see [Supported databases and migration types](https://help.aliyun.com/document_detail/26618.html).
    std::shared_ptr<string> migrationReserved_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource GroupId
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
