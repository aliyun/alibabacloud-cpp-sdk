// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYMONITORVALUESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYMONITORVALUESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeHistoryMonitorValuesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryMonitorValuesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntervalForHistory, intervalForHistory_);
      DARABONBA_PTR_TO_JSON(MonitorKeys, monitorKeys_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeRole, nodeRole_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryMonitorValuesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntervalForHistory, intervalForHistory_);
      DARABONBA_PTR_FROM_JSON(MonitorKeys, monitorKeys_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeRole, nodeRole_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeHistoryMonitorValuesRequest() = default ;
    DescribeHistoryMonitorValuesRequest(const DescribeHistoryMonitorValuesRequest &) = default ;
    DescribeHistoryMonitorValuesRequest(DescribeHistoryMonitorValuesRequest &&) = default ;
    DescribeHistoryMonitorValuesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryMonitorValuesRequest() = default ;
    DescribeHistoryMonitorValuesRequest& operator=(const DescribeHistoryMonitorValuesRequest &) = default ;
    DescribeHistoryMonitorValuesRequest& operator=(DescribeHistoryMonitorValuesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceId_ == nullptr && this->intervalForHistory_ == nullptr && this->monitorKeys_ == nullptr && this->nodeId_ == nullptr && this->nodeRole_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityToken_ == nullptr
        && this->startTime_ == nullptr && this->type_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeHistoryMonitorValuesRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeHistoryMonitorValuesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intervalForHistory Field Functions 
    bool hasIntervalForHistory() const { return this->intervalForHistory_ != nullptr;};
    void deleteIntervalForHistory() { this->intervalForHistory_ = nullptr;};
    inline string getIntervalForHistory() const { DARABONBA_PTR_GET_DEFAULT(intervalForHistory_, "") };
    inline DescribeHistoryMonitorValuesRequest& setIntervalForHistory(string intervalForHistory) { DARABONBA_PTR_SET_VALUE(intervalForHistory_, intervalForHistory) };


    // monitorKeys Field Functions 
    bool hasMonitorKeys() const { return this->monitorKeys_ != nullptr;};
    void deleteMonitorKeys() { this->monitorKeys_ = nullptr;};
    inline string getMonitorKeys() const { DARABONBA_PTR_GET_DEFAULT(monitorKeys_, "") };
    inline DescribeHistoryMonitorValuesRequest& setMonitorKeys(string monitorKeys) { DARABONBA_PTR_SET_VALUE(monitorKeys_, monitorKeys) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeHistoryMonitorValuesRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeRole Field Functions 
    bool hasNodeRole() const { return this->nodeRole_ != nullptr;};
    void deleteNodeRole() { this->nodeRole_ = nullptr;};
    inline string getNodeRole() const { DARABONBA_PTR_GET_DEFAULT(nodeRole_, "") };
    inline DescribeHistoryMonitorValuesRequest& setNodeRole(string nodeRole) { DARABONBA_PTR_SET_VALUE(nodeRole_, nodeRole) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeHistoryMonitorValuesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeHistoryMonitorValuesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeHistoryMonitorValuesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeHistoryMonitorValuesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeHistoryMonitorValuesRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeHistoryMonitorValuesRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeHistoryMonitorValuesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The end time of the query for historical monitoring data. The end time must be later than the start time. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
    // 
    // > You can query monitoring data of the last month. The maximum query range cannot exceed 7 days.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // **[Deprecated]** This parameter is deprecated. The value is fixed to `01m`.
    // 
    // The system automatically determines the **query interval** based on the start time and end time. For example, if the query time range is less than or equal to 10 minutes, the data aggregation frequency is 5s, and the query results are returned at a frequency of 5s.
    // > * The query results are aligned with the data aggregation frequency of the instance. If the StartTime you specify does not fall on a data aggregation point, the first time point returned by the system is the nearest data aggregation point. For example, if the StartTime you specify is 2022-01-20T12:01:48Z, the first time point returned by the system is 2022-01-20T12:01:45Z.
    // > * If the number of data shards of the instance is greater than or equal to 32, the minimum data aggregation frequency is 1 minute.
    // 
    // This parameter is required.
    shared_ptr<string> intervalForHistory_ {};
    // The monitoring metrics. To specify multiple monitoring metrics, separate them with commas (,). Take CpuUsage as an example:
    // * Cluster or read/write splitting architecture:
    //     - To query the overall CPU usage of all data nodes (DB), specify **CpuUsage$db**.
    //    - To query the CPU usage of a single data node, specify **CpuUsage** and set the NodeId parameter to the DB node.
    // 
    // * Standard architecture (primary/secondary): Specify **CpuUsage**.
    // 
    // For more information about monitoring metrics and their descriptions, see <props="china">[MonitorKeys parameter description](https://www.alibabacloud.com/help/en/redis/developer-reference/api-r-kvstore-2015-01-01-describehistorymonitorvalues-redis#monitorKeys-note)<props="intl">[MonitorKeys parameter description](https://www.alibabacloud.com/help/zh/redis/developer-reference/api-r-kvstore-2015-01-01-describehistorymonitorvalues-redis#monitorKeys-note).
    // > * This parameter is empty by default. If this parameter is not specified, the UsedMemory and quotaMemory metrics are returned.
    // > * To ensure query efficiency, specify no more than 5 monitoring metrics in a single request when querying metrics for a single node. Specify no more than 1 monitoring metric in a single request when querying aggregated monitoring metrics.
    shared_ptr<string> monitorKeys_ {};
    // The node ID of the instance. Specify this parameter to query the monitoring information of a specific node.
    // 
    // > * This parameter is available only when the instance uses a read/write splitting or cluster architecture.
    // > * You can call the [DescribeLogicInstanceTopology](https://help.aliyun.com/document_detail/473786.html) operation to query node IDs.
    shared_ptr<string> nodeId_ {};
    // To query the metrics of a read-only node in a cloud-native read/write splitting instance, specify the **NodeId** parameter and set this parameter to **READONLY**.
    // >  In other cases, you do not need to specify this parameter (or set it to **MASTER**).
    shared_ptr<string> nodeRole_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> securityToken_ {};
    // The start time of the query for historical monitoring data. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
