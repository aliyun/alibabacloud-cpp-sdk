// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYREADWRITESPLITTINGCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYREADWRITESPLITTINGCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyReadWriteSplittingConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyReadWriteSplittingConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DistributionType, distributionType_);
      DARABONBA_PTR_TO_JSON(MaxDelayTime, maxDelayTime_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyReadWriteSplittingConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DistributionType, distributionType_);
      DARABONBA_PTR_FROM_JSON(MaxDelayTime, maxDelayTime_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    ModifyReadWriteSplittingConnectionRequest() = default ;
    ModifyReadWriteSplittingConnectionRequest(const ModifyReadWriteSplittingConnectionRequest &) = default ;
    ModifyReadWriteSplittingConnectionRequest(ModifyReadWriteSplittingConnectionRequest &&) = default ;
    ModifyReadWriteSplittingConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyReadWriteSplittingConnectionRequest() = default ;
    ModifyReadWriteSplittingConnectionRequest& operator=(const ModifyReadWriteSplittingConnectionRequest &) = default ;
    ModifyReadWriteSplittingConnectionRequest& operator=(ModifyReadWriteSplittingConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionStringPrefix_ == nullptr
        && this->DBInstanceId_ == nullptr && this->distributionType_ == nullptr && this->maxDelayTime_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->port_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->weight_ == nullptr; };
    // connectionStringPrefix Field Functions 
    bool hasConnectionStringPrefix() const { return this->connectionStringPrefix_ != nullptr;};
    void deleteConnectionStringPrefix() { this->connectionStringPrefix_ = nullptr;};
    inline string getConnectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionStringPrefix_, "") };
    inline ModifyReadWriteSplittingConnectionRequest& setConnectionStringPrefix(string connectionStringPrefix) { DARABONBA_PTR_SET_VALUE(connectionStringPrefix_, connectionStringPrefix) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyReadWriteSplittingConnectionRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // distributionType Field Functions 
    bool hasDistributionType() const { return this->distributionType_ != nullptr;};
    void deleteDistributionType() { this->distributionType_ = nullptr;};
    inline string getDistributionType() const { DARABONBA_PTR_GET_DEFAULT(distributionType_, "") };
    inline ModifyReadWriteSplittingConnectionRequest& setDistributionType(string distributionType) { DARABONBA_PTR_SET_VALUE(distributionType_, distributionType) };


    // maxDelayTime Field Functions 
    bool hasMaxDelayTime() const { return this->maxDelayTime_ != nullptr;};
    void deleteMaxDelayTime() { this->maxDelayTime_ = nullptr;};
    inline string getMaxDelayTime() const { DARABONBA_PTR_GET_DEFAULT(maxDelayTime_, "") };
    inline ModifyReadWriteSplittingConnectionRequest& setMaxDelayTime(string maxDelayTime) { DARABONBA_PTR_SET_VALUE(maxDelayTime_, maxDelayTime) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyReadWriteSplittingConnectionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyReadWriteSplittingConnectionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ModifyReadWriteSplittingConnectionRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyReadWriteSplittingConnectionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyReadWriteSplittingConnectionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline string getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
    inline ModifyReadWriteSplittingConnectionRequest& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The prefix of the read/write splitting endpoint. The prefix must be unique. It can be up to 30 characters in length and can contain lowercase letters and hyphens (-). It must start with a lowercase letter.
    // 
    // > The default prefix consists of the name of the primary instance followed by the letters rw.
    shared_ptr<string> connectionStringPrefix_ {};
    // The ID of the primary instance. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The method that is used to assign read weights. Valid values:
    // 
    // *   **Standard**: The system automatically assigns read weights to the primary and read-only instances based on the specifications of these instances.
    // *   **Custom**: You must manually assign a read weight to each instance.
    // 
    // > You must specify at least one of **MaxDelayTime** and **DistributionType**.
    shared_ptr<string> distributionType_ {};
    // The latency threshold that is allowed by the read/write splitting link. Unit: seconds. If the latency on a read-only instance exceeds the specified threshold, the system no longer routes read requests to the read-only instance. If you do not specify this parameter, the default value of this parameter is retained.
    // 
    // > *   If the primary instance runs SQL Server 2017 on RDS Cluster Edition, the **MaxDelayTime** parameter is not supported.
    // > *   You must specify at least one of **MaxDelayTime** and **DistributionType**.
    shared_ptr<string> maxDelayTime_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The port that is associated with the read/write splitting endpoint.
    shared_ptr<string> port_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The read weights of the primary instance and its read-only instances. A read weight must be a multiple of 100 and cannot exceed 10,000.
    // 
    // *   For ApsaraDB RDS instances, the value of this parameter is in the following format: `{"<ID of the read-only instance >":<Weight>,"master":<Weight>,"slave":<Weight>}`.
    // *   For ApsaraDB MyBase instances, the value of this parameter is in the following format: `[{"instanceName":"<ID of the primary instance>","weight":<Weight>,"role":"master"},{"instanceName":"<ID of the primary instance>","weight":<Weight>,"role":"slave"},{"instanceName":"<ID of the read-only instance>","weight":<Weight>,"role":"master"}]`
    // 
    // > 
    // 
    // *   This parameter must be specified when **DistributionType** is set to **Custom**.
    // 
    // *   If **DistributionType** is set to **Standard**, this parameter is invalid.
    shared_ptr<string> weight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
