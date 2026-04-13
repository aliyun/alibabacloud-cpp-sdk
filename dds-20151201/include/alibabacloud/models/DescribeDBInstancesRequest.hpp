// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeDBInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ConnectionDomain, connectionDomain_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_TO_JSON(DBNodeType, DBNodeType_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplicationFactor, replicationFactor_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ConnectionDomain, connectionDomain_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_FROM_JSON(DBNodeType, DBNodeType_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplicationFactor, replicationFactor_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBInstancesRequest() = default ;
    DescribeDBInstancesRequest(const DescribeDBInstancesRequest &) = default ;
    DescribeDBInstancesRequest(DescribeDBInstancesRequest &&) = default ;
    DescribeDBInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesRequest() = default ;
    DescribeDBInstancesRequest& operator=(const DescribeDBInstancesRequest &) = default ;
    DescribeDBInstancesRequest& operator=(DescribeDBInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the instance. Valid values of N: **1** to **20**.
      // 
      // *   The key cannot start with `aliyun`, `acs:`, `http://`, or `https://`.
      // *   It can be up to 64 characters in length.
      // *   It cannot be an empty string.
      shared_ptr<string> key_ {};
      // The tag value of the instance. Valid values of N: **1** to **20**.
      // 
      // *   The value cannot start with `aliyun`, `acs:`, `http://`, or `https://`.
      // *   The value can be up to 128 characters in length.
      // *   It can be an empty string.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->connectionDomain_ == nullptr && this->DBInstanceClass_ == nullptr && this->DBInstanceDescription_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceStatus_ == nullptr
        && this->DBInstanceType_ == nullptr && this->DBNodeType_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->expireTime_ == nullptr
        && this->expired_ == nullptr && this->networkType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->replicationFactor_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->tag_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeDBInstancesRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // connectionDomain Field Functions 
    bool hasConnectionDomain() const { return this->connectionDomain_ != nullptr;};
    void deleteConnectionDomain() { this->connectionDomain_ = nullptr;};
    inline string getConnectionDomain() const { DARABONBA_PTR_GET_DEFAULT(connectionDomain_, "") };
    inline DescribeDBInstancesRequest& setConnectionDomain(string connectionDomain) { DARABONBA_PTR_SET_VALUE(connectionDomain_, connectionDomain) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline DescribeDBInstancesRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline DescribeDBInstancesRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstancesRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStatus Field Functions 
    bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
    void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
    inline string getDBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
    inline DescribeDBInstancesRequest& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


    // DBInstanceType Field Functions 
    bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
    void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
    inline string getDBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
    inline DescribeDBInstancesRequest& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


    // DBNodeType Field Functions 
    bool hasDBNodeType() const { return this->DBNodeType_ != nullptr;};
    void deleteDBNodeType() { this->DBNodeType_ = nullptr;};
    inline string getDBNodeType() const { DARABONBA_PTR_GET_DEFAULT(DBNodeType_, "") };
    inline DescribeDBInstancesRequest& setDBNodeType(string DBNodeType) { DARABONBA_PTR_SET_VALUE(DBNodeType_, DBNodeType) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBInstancesRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDBInstancesRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBInstancesRequest& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribeDBInstancesRequest& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeDBInstancesRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeDBInstancesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDBInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDBInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicationFactor Field Functions 
    bool hasReplicationFactor() const { return this->replicationFactor_ != nullptr;};
    void deleteReplicationFactor() { this->replicationFactor_ = nullptr;};
    inline string getReplicationFactor() const { DARABONBA_PTR_GET_DEFAULT(replicationFactor_, "") };
    inline DescribeDBInstancesRequest& setReplicationFactor(string replicationFactor) { DARABONBA_PTR_SET_VALUE(replicationFactor_, replicationFactor) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBInstancesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeDBInstancesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeDBInstancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeDBInstancesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeDBInstancesRequest::Tag>) };
    inline vector<DescribeDBInstancesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeDBInstancesRequest::Tag>) };
    inline DescribeDBInstancesRequest& setTag(const vector<DescribeDBInstancesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDBInstancesRequest& setTag(vector<DescribeDBInstancesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstancesRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBInstancesRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstancesRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The billing method of the instance. Valid values:
    // 
    // *   **PrePaid**: subscription
    // *   **PostPaid**: pay-as-you-go
    shared_ptr<string> chargeType_ {};
    // The endpoint of the node. You can call the [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/62010.html) operation to query the endpoint of the node.
    shared_ptr<string> connectionDomain_ {};
    // The instance type. For more information about valid values, see [Instance types](https://help.aliyun.com/document_detail/57141.html).
    shared_ptr<string> DBInstanceClass_ {};
    // The name of the instance. The name must meet the following requirements:
    // 
    // *   The name must start with a letter.
    // *   It can contain digits, letters, underscores (_), and hyphens (-).
    // *   It must be 2 to 256 characters in length.
    shared_ptr<string> DBInstanceDescription_ {};
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The state of the instance. For more information about valid values, see [Instance states](https://help.aliyun.com/document_detail/63870.html).
    shared_ptr<string> DBInstanceStatus_ {};
    // The architecture of the instance. Valid values:
    // 
    // *   **sharding**: sharded cluster instance
    // *   **replicate**: replica set or standalone instance
    shared_ptr<string> DBInstanceType_ {};
    // The type of the node in the instance. This parameter is used to filter standard or test instance.
    // 
    // 1.  Valid value for a standalone or DBFS instance.
    // 2.  Valid value for a standard instance that comes in the replica set or sharded cluster architecture: standard
    // 3.  Valid value when all instances are displayed: default
    shared_ptr<string> DBNodeType_ {};
    // The database engine of the instance. Set the value to **MongoDB**.
    shared_ptr<string> engine_ {};
    // The database engine version of the instance.
    // 
    // *   **6.0**
    // *   **5.0**
    // *   **4.4**
    // *   **4.2**
    // *   **4.0**
    // *   **3.4**
    shared_ptr<string> engineVersion_ {};
    // The time when the instance expires.
    shared_ptr<string> expireTime_ {};
    // Specifies whether the instance has expired. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> expired_ {};
    // The network type of the instance. Valid values:
    // 
    // *   **Classic**
    // *   **VPC**
    shared_ptr<string> networkType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of the page to return. The value of this parameter must be an integer that is greater than 0. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The number of nodes in the replica set instance. Valid values:
    // 
    // *   **3**
    // *   **5**
    // *   **7**
    shared_ptr<string> replicationFactor_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tags of the instance.
    shared_ptr<vector<DescribeDBInstancesRequest::Tag>> tag_ {};
    // The vSwitch ID of the instance.
    shared_ptr<string> vSwitchId_ {};
    // The VPC ID of the instance.
    shared_ptr<string> vpcId_ {};
    // The zone ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query the most recent zone list.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
