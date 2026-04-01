// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYREADONLYINSTANCEDELAYREPLICATIONTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYREADONLYINSTANCEDELAYREPLICATIONTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyReadonlyInstanceDelayReplicationTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyReadonlyInstanceDelayReplicationTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReadSQLReplicationTime, readSQLReplicationTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyReadonlyInstanceDelayReplicationTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReadSQLReplicationTime, readSQLReplicationTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyReadonlyInstanceDelayReplicationTimeRequest() = default ;
    ModifyReadonlyInstanceDelayReplicationTimeRequest(const ModifyReadonlyInstanceDelayReplicationTimeRequest &) = default ;
    ModifyReadonlyInstanceDelayReplicationTimeRequest(ModifyReadonlyInstanceDelayReplicationTimeRequest &&) = default ;
    ModifyReadonlyInstanceDelayReplicationTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyReadonlyInstanceDelayReplicationTimeRequest() = default ;
    ModifyReadonlyInstanceDelayReplicationTimeRequest& operator=(const ModifyReadonlyInstanceDelayReplicationTimeRequest &) = default ;
    ModifyReadonlyInstanceDelayReplicationTimeRequest& operator=(ModifyReadonlyInstanceDelayReplicationTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->ownerId_ == nullptr && this->readSQLReplicationTime_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyReadonlyInstanceDelayReplicationTimeRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyReadonlyInstanceDelayReplicationTimeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // readSQLReplicationTime Field Functions 
    bool hasReadSQLReplicationTime() const { return this->readSQLReplicationTime_ != nullptr;};
    void deleteReadSQLReplicationTime() { this->readSQLReplicationTime_ = nullptr;};
    inline string getReadSQLReplicationTime() const { DARABONBA_PTR_GET_DEFAULT(readSQLReplicationTime_, "") };
    inline ModifyReadonlyInstanceDelayReplicationTimeRequest& setReadSQLReplicationTime(string readSQLReplicationTime) { DARABONBA_PTR_SET_VALUE(readSQLReplicationTime_, readSQLReplicationTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyReadonlyInstanceDelayReplicationTimeRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyReadonlyInstanceDelayReplicationTimeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyReadonlyInstanceDelayReplicationTimeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the read-only instance. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The replication latency of the data replication. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<string> readSQLReplicationTime_ {};
    // The resource group ID. You can call the DescribeDBInstanceAttribute to query the resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
