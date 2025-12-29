// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeDBInstancePerformanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancePerformanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReplicaSetRole, replicaSetRole_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(SearchId, searchId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancePerformanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReplicaSetRole, replicaSetRole_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(SearchId, searchId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDBInstancePerformanceRequest() = default ;
    DescribeDBInstancePerformanceRequest(const DescribeDBInstancePerformanceRequest &) = default ;
    DescribeDBInstancePerformanceRequest(DescribeDBInstancePerformanceRequest &&) = default ;
    DescribeDBInstancePerformanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancePerformanceRequest() = default ;
    DescribeDBInstancePerformanceRequest& operator=(const DescribeDBInstancePerformanceRequest &) = default ;
    DescribeDBInstancePerformanceRequest& operator=(DescribeDBInstancePerformanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->endTime_ == nullptr && this->interval_ == nullptr && this->key_ == nullptr && this->nodeId_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->replicaSetRole_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->roleId_ == nullptr
        && this->searchId_ == nullptr && this->startTime_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstancePerformanceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDBInstancePerformanceRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeDBInstancePerformanceRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeDBInstancePerformanceRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeDBInstancePerformanceRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeDBInstancePerformanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDBInstancePerformanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // replicaSetRole Field Functions 
    bool hasReplicaSetRole() const { return this->replicaSetRole_ != nullptr;};
    void deleteReplicaSetRole() { this->replicaSetRole_ = nullptr;};
    inline string getReplicaSetRole() const { DARABONBA_PTR_GET_DEFAULT(replicaSetRole_, "") };
    inline DescribeDBInstancePerformanceRequest& setReplicaSetRole(string replicaSetRole) { DARABONBA_PTR_SET_VALUE(replicaSetRole_, replicaSetRole) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeDBInstancePerformanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeDBInstancePerformanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline DescribeDBInstancePerformanceRequest& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // searchId Field Functions 
    bool hasSearchId() const { return this->searchId_ != nullptr;};
    void deleteSearchId() { this->searchId_ = nullptr;};
    inline string getSearchId() const { DARABONBA_PTR_GET_DEFAULT(searchId_, "") };
    inline DescribeDBInstancePerformanceRequest& setSearchId(string searchId) { DARABONBA_PTR_SET_VALUE(searchId_, searchId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDBInstancePerformanceRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The instance ID.
    // 
    // >  If you set this parameter to the ID of a sharded cluster instance, you must also specify the **NodeId** parameter.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time must be in UTC. The end time must be later than the start time.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The interval at which performance data is collected. Valid values: 5, 30, 60, 600, 1800, 3600, 86400.
    shared_ptr<string> interval_ {};
    // The performance metric. For more information about valid values, see [Monitoring items and metrics](https://help.aliyun.com/document_detail/216973.html).
    // 
    // >  If you need to specify multiple metrics, separate the metrics with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> key_ {};
    // The ID of the mongos or shard node in a sharded cluster instance. You can specify this parameter to view the performance data of a single node.
    // 
    // >  This parameter is valid when you set the **DBInstanceId** parameter to the ID of a sharded cluster instance.
    shared_ptr<string> nodeId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The role of the node in the standalone or replica set instance. Valid values:
    // 
    // *   **Primary**
    // *   **Secondary**
    // 
    // >  *  This parameter is valid only when you specify the **DBInstanceId** parameter to the ID of a standalone instance or a replica set instance.
    // > *  This parameter can be set only to **Primary** when you specify the **DBInstanceId** parameter to the ID of a standalone instance.
    shared_ptr<string> replicaSetRole_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The role ID of the node in a standalone or replica set instance. You can call the [DescribeReplicaSetRole](https://help.aliyun.com/document_detail/62134.html) operation to query the role ID of the node.
    // 
    // >  This parameter is available when you set the **DBInstanceId** parameter to the ID of a standalone instance or a replica set instance.
    shared_ptr<string> roleId_ {};
    shared_ptr<string> searchId_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
