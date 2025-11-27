// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEREADWRITESPLITTINGCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEREADWRITESPLITTINGCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class AllocateReadWriteSplittingConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateReadWriteSplittingConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DistributionType, distributionType_);
      DARABONBA_PTR_TO_JSON(MaxDelayTime, maxDelayTime_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateReadWriteSplittingConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DistributionType, distributionType_);
      DARABONBA_PTR_FROM_JSON(MaxDelayTime, maxDelayTime_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    AllocateReadWriteSplittingConnectionRequest() = default ;
    AllocateReadWriteSplittingConnectionRequest(const AllocateReadWriteSplittingConnectionRequest &) = default ;
    AllocateReadWriteSplittingConnectionRequest(AllocateReadWriteSplittingConnectionRequest &&) = default ;
    AllocateReadWriteSplittingConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateReadWriteSplittingConnectionRequest() = default ;
    AllocateReadWriteSplittingConnectionRequest& operator=(const AllocateReadWriteSplittingConnectionRequest &) = default ;
    AllocateReadWriteSplittingConnectionRequest& operator=(AllocateReadWriteSplittingConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionStringPrefix_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->distributionType_ == nullptr && return this->maxDelayTime_ == nullptr && return this->netType_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->port_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->weight_ == nullptr; };
    // connectionStringPrefix Field Functions 
    bool hasConnectionStringPrefix() const { return this->connectionStringPrefix_ != nullptr;};
    void deleteConnectionStringPrefix() { this->connectionStringPrefix_ = nullptr;};
    inline string connectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionStringPrefix_, "") };
    inline AllocateReadWriteSplittingConnectionRequest& setConnectionStringPrefix(string connectionStringPrefix) { DARABONBA_PTR_SET_VALUE(connectionStringPrefix_, connectionStringPrefix) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline AllocateReadWriteSplittingConnectionRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // distributionType Field Functions 
    bool hasDistributionType() const { return this->distributionType_ != nullptr;};
    void deleteDistributionType() { this->distributionType_ = nullptr;};
    inline string distributionType() const { DARABONBA_PTR_GET_DEFAULT(distributionType_, "") };
    inline AllocateReadWriteSplittingConnectionRequest& setDistributionType(string distributionType) { DARABONBA_PTR_SET_VALUE(distributionType_, distributionType) };


    // maxDelayTime Field Functions 
    bool hasMaxDelayTime() const { return this->maxDelayTime_ != nullptr;};
    void deleteMaxDelayTime() { this->maxDelayTime_ = nullptr;};
    inline string maxDelayTime() const { DARABONBA_PTR_GET_DEFAULT(maxDelayTime_, "") };
    inline AllocateReadWriteSplittingConnectionRequest& setMaxDelayTime(string maxDelayTime) { DARABONBA_PTR_SET_VALUE(maxDelayTime_, maxDelayTime) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline AllocateReadWriteSplittingConnectionRequest& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AllocateReadWriteSplittingConnectionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AllocateReadWriteSplittingConnectionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline AllocateReadWriteSplittingConnectionRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AllocateReadWriteSplittingConnectionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AllocateReadWriteSplittingConnectionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline string weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
    inline AllocateReadWriteSplittingConnectionRequest& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The prefix of the read-only routing endpoint. The prefix must be unique. It can be up to 30 characters in length and can contain lowercase letters and hyphens (-). It must start with a lowercase letter.
    // 
    // >  The default prefix consists of the name of the primary instance followed by the letters rw.
    std::shared_ptr<string> connectionStringPrefix_ = nullptr;
    // The primary instance ID. You can call the DescribeDBInstances operation to query the primary instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The method that is used to assign read weights. Valid values:
    // 
    // *   **Standard**: The system automatically assigns read weights to the primary and read-only instances based on the specifications of these instances.
    // *   **Custom**: You must manually assign a read weight to each instance.
    std::shared_ptr<string> distributionType_ = nullptr;
    // The threshold of the latency that is allowed on the read-only instances. Valid values: 0 to 7200. Default value: 30. Unit: seconds.
    // 
    // >  If the latency on a read-only instance exceeds the specified threshold, ApsaraDB RDS does not forward read requests to the read-only instance.
    std::shared_ptr<string> maxDelayTime_ = nullptr;
    // The network type of the read-only routing endpoint. Valid values:
    // 
    // *   **Internet**
    // *   **Intranet**
    // 
    // >  The default value is Intranet. Make sure that the network type of the read-only routing endpoint is the same as that of the primary instance.
    std::shared_ptr<string> netType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The port that is associated with the read-only routing endpoint. Valid values: 1000 to 5999. Default value: 1433.
    std::shared_ptr<string> port_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The read weights of the primary instance and its read-only instances. The read weight is increased in increments of 100. The maximum value is 10000.
    // 
    // *   For ApsaraDB RDS instances, the value of this parameter is in the following format: `{"<ID of the read-only instance >":<Weight>,"master":<Weight>,"slave":<Weight>}`.
    // *   For ApsaraDB MyBase instances, the value of this parameter is in the following format: `[{"instanceName":"<Primary instance ID>","weight":<Weight>,"role":"master"},{"instanceName":"<Primary instance ID>","weight":<Weight>,"role":"slave"},{"instanceName":"<Read-only instance ID>","weight":<Weight>,"role":"master"}]`
    // 
    // > 
    // 
    // *   This parameter must be specified when **DistributionType** is set to **Custom**.
    // 
    // *   If **DistributionType** is set to **Standard**, this parameter is invalid.
    std::shared_ptr<string> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
