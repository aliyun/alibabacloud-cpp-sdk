// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class TransferVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DisableWriteWindows, disableWriteWindows_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceAccount, sourceAccount_);
      DARABONBA_PTR_TO_JSON(SourceClusterName, sourceClusterName_);
      DARABONBA_PTR_TO_JSON(SourcePassword, sourcePassword_);
      DARABONBA_PTR_TO_JSON(SourceShards, sourceShards_);
      DARABONBA_PTR_TO_JSON(TargetAccount, targetAccount_);
      DARABONBA_PTR_TO_JSON(TargetDbClusterId, targetDbClusterId_);
      DARABONBA_PTR_TO_JSON(TargetPassword, targetPassword_);
    };
    friend void from_json(const Darabonba::Json& j, TransferVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DisableWriteWindows, disableWriteWindows_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceAccount, sourceAccount_);
      DARABONBA_PTR_FROM_JSON(SourceClusterName, sourceClusterName_);
      DARABONBA_PTR_FROM_JSON(SourcePassword, sourcePassword_);
      DARABONBA_PTR_FROM_JSON(SourceShards, sourceShards_);
      DARABONBA_PTR_FROM_JSON(TargetAccount, targetAccount_);
      DARABONBA_PTR_FROM_JSON(TargetDbClusterId, targetDbClusterId_);
      DARABONBA_PTR_FROM_JSON(TargetPassword, targetPassword_);
    };
    TransferVersionRequest() = default ;
    TransferVersionRequest(const TransferVersionRequest &) = default ;
    TransferVersionRequest(TransferVersionRequest &&) = default ;
    TransferVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferVersionRequest() = default ;
    TransferVersionRequest& operator=(const TransferVersionRequest &) = default ;
    TransferVersionRequest& operator=(TransferVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->disableWriteWindows_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->sourceAccount_ == nullptr && return this->sourceClusterName_ == nullptr
        && return this->sourcePassword_ == nullptr && return this->sourceShards_ == nullptr && return this->targetAccount_ == nullptr && return this->targetDbClusterId_ == nullptr && return this->targetPassword_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline TransferVersionRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // disableWriteWindows Field Functions 
    bool hasDisableWriteWindows() const { return this->disableWriteWindows_ != nullptr;};
    void deleteDisableWriteWindows() { this->disableWriteWindows_ = nullptr;};
    inline string disableWriteWindows() const { DARABONBA_PTR_GET_DEFAULT(disableWriteWindows_, "") };
    inline TransferVersionRequest& setDisableWriteWindows(string disableWriteWindows) { DARABONBA_PTR_SET_VALUE(disableWriteWindows_, disableWriteWindows) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline TransferVersionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline TransferVersionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline TransferVersionRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline TransferVersionRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline TransferVersionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline TransferVersionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline TransferVersionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceAccount Field Functions 
    bool hasSourceAccount() const { return this->sourceAccount_ != nullptr;};
    void deleteSourceAccount() { this->sourceAccount_ = nullptr;};
    inline string sourceAccount() const { DARABONBA_PTR_GET_DEFAULT(sourceAccount_, "") };
    inline TransferVersionRequest& setSourceAccount(string sourceAccount) { DARABONBA_PTR_SET_VALUE(sourceAccount_, sourceAccount) };


    // sourceClusterName Field Functions 
    bool hasSourceClusterName() const { return this->sourceClusterName_ != nullptr;};
    void deleteSourceClusterName() { this->sourceClusterName_ = nullptr;};
    inline string sourceClusterName() const { DARABONBA_PTR_GET_DEFAULT(sourceClusterName_, "") };
    inline TransferVersionRequest& setSourceClusterName(string sourceClusterName) { DARABONBA_PTR_SET_VALUE(sourceClusterName_, sourceClusterName) };


    // sourcePassword Field Functions 
    bool hasSourcePassword() const { return this->sourcePassword_ != nullptr;};
    void deleteSourcePassword() { this->sourcePassword_ = nullptr;};
    inline string sourcePassword() const { DARABONBA_PTR_GET_DEFAULT(sourcePassword_, "") };
    inline TransferVersionRequest& setSourcePassword(string sourcePassword) { DARABONBA_PTR_SET_VALUE(sourcePassword_, sourcePassword) };


    // sourceShards Field Functions 
    bool hasSourceShards() const { return this->sourceShards_ != nullptr;};
    void deleteSourceShards() { this->sourceShards_ = nullptr;};
    inline string sourceShards() const { DARABONBA_PTR_GET_DEFAULT(sourceShards_, "") };
    inline TransferVersionRequest& setSourceShards(string sourceShards) { DARABONBA_PTR_SET_VALUE(sourceShards_, sourceShards) };


    // targetAccount Field Functions 
    bool hasTargetAccount() const { return this->targetAccount_ != nullptr;};
    void deleteTargetAccount() { this->targetAccount_ = nullptr;};
    inline string targetAccount() const { DARABONBA_PTR_GET_DEFAULT(targetAccount_, "") };
    inline TransferVersionRequest& setTargetAccount(string targetAccount) { DARABONBA_PTR_SET_VALUE(targetAccount_, targetAccount) };


    // targetDbClusterId Field Functions 
    bool hasTargetDbClusterId() const { return this->targetDbClusterId_ != nullptr;};
    void deleteTargetDbClusterId() { this->targetDbClusterId_ = nullptr;};
    inline string targetDbClusterId() const { DARABONBA_PTR_GET_DEFAULT(targetDbClusterId_, "") };
    inline TransferVersionRequest& setTargetDbClusterId(string targetDbClusterId) { DARABONBA_PTR_SET_VALUE(targetDbClusterId_, targetDbClusterId) };


    // targetPassword Field Functions 
    bool hasTargetPassword() const { return this->targetPassword_ != nullptr;};
    void deleteTargetPassword() { this->targetPassword_ = nullptr;};
    inline string targetPassword() const { DARABONBA_PTR_GET_DEFAULT(targetPassword_, "") };
    inline TransferVersionRequest& setTargetPassword(string targetPassword) { DARABONBA_PTR_SET_VALUE(targetPassword_, targetPassword) };


  protected:
    // The ID of the source ApsaraDB for ClickHouse cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The time window during which write operations are stopped.
    std::shared_ptr<string> disableWriteWindows_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/170875.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The database account that is used to log on to the database in the source ApsaraDB for ClickHouse cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceAccount_ = nullptr;
    // The name of the self-managed ClickHouse cluster. You can execute the `SELECT * FROM system.clusters` statement to query the cluster name.
    std::shared_ptr<string> sourceClusterName_ = nullptr;
    // The password that corresponds to the database account for logging on to the database in the source ApsaraDB for ClickHouse cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourcePassword_ = nullptr;
    // The endpoint and TCP port of the self-managed ClickHouse cluster.
    std::shared_ptr<string> sourceShards_ = nullptr;
    // The database account that is used to log on to the database in the destination ApsaraDB for ClickHouse cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetAccount_ = nullptr;
    // The ID of the destination ApsaraDB for ClickHouse cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetDbClusterId_ = nullptr;
    // The password that corresponds to the database account for logging on to the database in the destination ApsaraDB for ClickHouse cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetPassword_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
