// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBClusterPerformanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterPerformanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterPerformanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDBClusterPerformanceRequest() = default ;
    DescribeDBClusterPerformanceRequest(const DescribeDBClusterPerformanceRequest &) = default ;
    DescribeDBClusterPerformanceRequest(DescribeDBClusterPerformanceRequest &&) = default ;
    DescribeDBClusterPerformanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterPerformanceRequest() = default ;
    DescribeDBClusterPerformanceRequest& operator=(const DescribeDBClusterPerformanceRequest &) = default ;
    DescribeDBClusterPerformanceRequest& operator=(DescribeDBClusterPerformanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->endTime_ == nullptr && this->key_ == nullptr && this->nodeType_ == nullptr && this->nodes_ == nullptr && this->resourceGroupName_ == nullptr
        && this->startTime_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBClusterPerformanceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDBClusterPerformanceRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeDBClusterPerformanceRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline DescribeDBClusterPerformanceRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline string getNodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, "") };
    inline DescribeDBClusterPerformanceRequest& setNodes(string nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline DescribeDBClusterPerformanceRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDBClusterPerformanceRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query details about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the `YYYY-MM-DDTHH:mmZ` format.
    // 
    // > The end time must be later than the start time. The maximum time range that can be specified is seven days.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The performance metric that you want to query. Separate multiple values with commas (,). For more information, see [Performance parameters](https://help.aliyun.com/document_detail/86943.html).
    // 
    // This parameter is required.
    shared_ptr<string> key_ {};
    // The node type. Valid values:
    // 
    // *   **master**: coordinator node.
    // *   **segment**: compute node.
    // 
    // > If you do not specify this parameter, the performance metrics of all nodes are returned.
    shared_ptr<string> nodeType_ {};
    // The nodes for which you want to query performance metrics. Separate multiple values with commas (,). Example: `master-10******1,master-10******2`. You can call the [DescribeDBClusterNode](https://help.aliyun.com/document_detail/390136.html) operation to query the names of nodes.
    // 
    // You can also filter the nodes based on their metric values. Valid values:
    // 
    // *   **top10**: the 10 nodes that have the highest metric values.
    // *   **top20**: the 20 nodes that have the highest metric values.
    // *   **bottom10**: the 10 nodes that have the lowest metric values.
    // *   **bottom20**: the 20 nodes that have the lowest metric values.
    shared_ptr<string> nodes_ {};
    // The name of the resource group.
    shared_ptr<string> resourceGroupName_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the `YYYY-MM-DDTHH:mmZ` format.
    // 
    // > You can query monitoring information only within the last 30 days.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
