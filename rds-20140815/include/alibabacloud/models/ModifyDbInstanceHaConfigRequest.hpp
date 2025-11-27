// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCEHACONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCEHACONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBInstanceHAConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceHAConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(HAMode, HAMode_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SyncMode, syncMode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceHAConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(HAMode, HAMode_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SyncMode, syncMode_);
    };
    ModifyDBInstanceHAConfigRequest() = default ;
    ModifyDBInstanceHAConfigRequest(const ModifyDBInstanceHAConfigRequest &) = default ;
    ModifyDBInstanceHAConfigRequest(ModifyDBInstanceHAConfigRequest &&) = default ;
    ModifyDBInstanceHAConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceHAConfigRequest() = default ;
    ModifyDBInstanceHAConfigRequest& operator=(const ModifyDBInstanceHAConfigRequest &) = default ;
    ModifyDBInstanceHAConfigRequest& operator=(ModifyDBInstanceHAConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbInstanceId_ == nullptr
        && return this->HAMode_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->syncMode_ == nullptr; };
    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline ModifyDBInstanceHAConfigRequest& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // HAMode Field Functions 
    bool hasHAMode() const { return this->HAMode_ != nullptr;};
    void deleteHAMode() { this->HAMode_ = nullptr;};
    inline string HAMode() const { DARABONBA_PTR_GET_DEFAULT(HAMode_, "") };
    inline ModifyDBInstanceHAConfigRequest& setHAMode(string HAMode) { DARABONBA_PTR_SET_VALUE(HAMode_, HAMode) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBInstanceHAConfigRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBInstanceHAConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBInstanceHAConfigRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBInstanceHAConfigRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // syncMode Field Functions 
    bool hasSyncMode() const { return this->syncMode_ != nullptr;};
    void deleteSyncMode() { this->syncMode_ = nullptr;};
    inline string syncMode() const { DARABONBA_PTR_GET_DEFAULT(syncMode_, "") };
    inline ModifyDBInstanceHAConfigRequest& setSyncMode(string syncMode) { DARABONBA_PTR_SET_VALUE(syncMode_, syncMode) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbInstanceId_ = nullptr;
    // The HA mode of the instance.
    // 
    // *   RPO: Data consistency is preferred. The instance ensures data reliability to minimize data losses. If you have high requirements on data consistency, select this mode.
    // *   RTO: Service availability is preferred. The instance restores the database service at the earliest opportunity to ensure service availability. If you have high requirements for service availability, select this mode.
    // 
    // This parameter is required.
    std::shared_ptr<string> HAMode_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The data replication mode of the instance. For more information, see [Data replication mode](https://help.aliyun.com/document_detail/96055.html).
    // 
    // *   Semi-sync: the semi-synchronous mode.
    // *   Sync: the synchronous mode.
    // *   gAsyncg: the asynchronous mode.
    // *   Mgr: the MySQL group replication (MGR) mode. This mode is available only for the China site (aliyun.com).
    // 
    // > This parameter is not supported for instances that run SQL Server 2017 on RDS Cluster Edition.
    // 
    // This parameter is required.
    std::shared_ptr<string> syncMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
