// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nodes, nodes_);
      DARABONBA_PTR_TO_JSON(page, page_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(page, page_);
    };
    DescribeClusterNodesResponseBody() = default ;
    DescribeClusterNodesResponseBody(const DescribeClusterNodesResponseBody &) = default ;
    DescribeClusterNodesResponseBody(DescribeClusterNodesResponseBody &&) = default ;
    DescribeClusterNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodesResponseBody() = default ;
    DescribeClusterNodesResponseBody& operator=(const DescribeClusterNodesResponseBody &) = default ;
    DescribeClusterNodesResponseBody& operator=(DescribeClusterNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Page : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Page& obj) { 
        DARABONBA_PTR_TO_JSON(page_number, pageNumber_);
        DARABONBA_PTR_TO_JSON(page_size, pageSize_);
        DARABONBA_PTR_TO_JSON(total_count, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Page& obj) { 
        DARABONBA_PTR_FROM_JSON(page_number, pageNumber_);
        DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
        DARABONBA_PTR_FROM_JSON(total_count, totalCount_);
      };
      Page() = default ;
      Page(const Page &) = default ;
      Page(Page &&) = default ;
      Page(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Page() = default ;
      Page& operator=(const Page &) = default ;
      Page& operator=(Page &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Page& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Page& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Page& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Nodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
        DARABONBA_PTR_TO_JSON(creation_time, creationTime_);
        DARABONBA_PTR_TO_JSON(error_message, errorMessage_);
        DARABONBA_PTR_TO_JSON(expired_time, expiredTime_);
        DARABONBA_PTR_TO_JSON(host_name, hostName_);
        DARABONBA_PTR_TO_JSON(image_id, imageId_);
        DARABONBA_PTR_TO_JSON(instance_charge_type, instanceChargeType_);
        DARABONBA_PTR_TO_JSON(instance_id, instanceId_);
        DARABONBA_PTR_TO_JSON(instance_name, instanceName_);
        DARABONBA_PTR_TO_JSON(instance_role, instanceRole_);
        DARABONBA_PTR_TO_JSON(instance_status, instanceStatus_);
        DARABONBA_PTR_TO_JSON(instance_type, instanceType_);
        DARABONBA_PTR_TO_JSON(instance_type_family, instanceTypeFamily_);
        DARABONBA_PTR_TO_JSON(ip_address, ipAddress_);
        DARABONBA_PTR_TO_JSON(is_aliyun_node, isAliyunNode_);
        DARABONBA_PTR_TO_JSON(node_name, nodeName_);
        DARABONBA_PTR_TO_JSON(node_status, nodeStatus_);
        DARABONBA_PTR_TO_JSON(nodepool_id, nodepoolId_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(spot_strategy, spotStrategy_);
        DARABONBA_PTR_TO_JSON(state, state_);
      };
      friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
        DARABONBA_PTR_FROM_JSON(creation_time, creationTime_);
        DARABONBA_PTR_FROM_JSON(error_message, errorMessage_);
        DARABONBA_PTR_FROM_JSON(expired_time, expiredTime_);
        DARABONBA_PTR_FROM_JSON(host_name, hostName_);
        DARABONBA_PTR_FROM_JSON(image_id, imageId_);
        DARABONBA_PTR_FROM_JSON(instance_charge_type, instanceChargeType_);
        DARABONBA_PTR_FROM_JSON(instance_id, instanceId_);
        DARABONBA_PTR_FROM_JSON(instance_name, instanceName_);
        DARABONBA_PTR_FROM_JSON(instance_role, instanceRole_);
        DARABONBA_PTR_FROM_JSON(instance_status, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(instance_type, instanceType_);
        DARABONBA_PTR_FROM_JSON(instance_type_family, instanceTypeFamily_);
        DARABONBA_PTR_FROM_JSON(ip_address, ipAddress_);
        DARABONBA_PTR_FROM_JSON(is_aliyun_node, isAliyunNode_);
        DARABONBA_PTR_FROM_JSON(node_name, nodeName_);
        DARABONBA_PTR_FROM_JSON(node_status, nodeStatus_);
        DARABONBA_PTR_FROM_JSON(nodepool_id, nodepoolId_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(spot_strategy, spotStrategy_);
        DARABONBA_PTR_FROM_JSON(state, state_);
      };
      Nodes() = default ;
      Nodes(const Nodes &) = default ;
      Nodes(Nodes &&) = default ;
      Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Nodes() = default ;
      Nodes& operator=(const Nodes &) = default ;
      Nodes& operator=(Nodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->errorMessage_ == nullptr && this->expiredTime_ == nullptr && this->hostName_ == nullptr && this->imageId_ == nullptr && this->instanceChargeType_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceRole_ == nullptr && this->instanceStatus_ == nullptr && this->instanceType_ == nullptr
        && this->instanceTypeFamily_ == nullptr && this->ipAddress_ == nullptr && this->isAliyunNode_ == nullptr && this->nodeName_ == nullptr && this->nodeStatus_ == nullptr
        && this->nodepoolId_ == nullptr && this->source_ == nullptr && this->spotStrategy_ == nullptr && this->state_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Nodes& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Nodes& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline Nodes& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline Nodes& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Nodes& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // instanceChargeType Field Functions 
      bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
      void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
      inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
      inline Nodes& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Nodes& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Nodes& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceRole Field Functions 
      bool hasInstanceRole() const { return this->instanceRole_ != nullptr;};
      void deleteInstanceRole() { this->instanceRole_ = nullptr;};
      inline string getInstanceRole() const { DARABONBA_PTR_GET_DEFAULT(instanceRole_, "") };
      inline Nodes& setInstanceRole(string instanceRole) { DARABONBA_PTR_SET_VALUE(instanceRole_, instanceRole) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline Nodes& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Nodes& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // instanceTypeFamily Field Functions 
      bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
      void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
      inline string getInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
      inline Nodes& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


      // ipAddress Field Functions 
      bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
      void deleteIpAddress() { this->ipAddress_ = nullptr;};
      inline const vector<string> & getIpAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<string>) };
      inline vector<string> getIpAddress() { DARABONBA_PTR_GET(ipAddress_, vector<string>) };
      inline Nodes& setIpAddress(const vector<string> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
      inline Nodes& setIpAddress(vector<string> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


      // isAliyunNode Field Functions 
      bool hasIsAliyunNode() const { return this->isAliyunNode_ != nullptr;};
      void deleteIsAliyunNode() { this->isAliyunNode_ = nullptr;};
      inline bool getIsAliyunNode() const { DARABONBA_PTR_GET_DEFAULT(isAliyunNode_, false) };
      inline Nodes& setIsAliyunNode(bool isAliyunNode) { DARABONBA_PTR_SET_VALUE(isAliyunNode_, isAliyunNode) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline Nodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // nodeStatus Field Functions 
      bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
      void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
      inline string getNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, "") };
      inline Nodes& setNodeStatus(string nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


      // nodepoolId Field Functions 
      bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
      void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
      inline string getNodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
      inline Nodes& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Nodes& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // spotStrategy Field Functions 
      bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
      void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
      inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
      inline Nodes& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Nodes& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The time when the node was created.
      shared_ptr<string> creationTime_ {};
      // The error message generated when the node was created.
      shared_ptr<string> errorMessage_ {};
      // The expiration date of the node.
      shared_ptr<string> expiredTime_ {};
      // The name of the host.
      shared_ptr<string> hostName_ {};
      // The ID of the system image that is used by the node.
      shared_ptr<string> imageId_ {};
      // The billing method of the node. Valid values:
      // 
      // *   `PrePaid`: the subscription billing method. If the value is PrePaid, make sure that you have a sufficient balance or credit in your account. Otherwise, an `InvalidPayMethod` error is returned.
      // *   `PostPaid`: the pay-as-you-go billing method.
      shared_ptr<string> instanceChargeType_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The name of the instance on which the node is deployed.
      shared_ptr<string> instanceName_ {};
      // The role of the node. Valid values:
      // 
      // *   Master: master node
      // *   Worker: worker node
      shared_ptr<string> instanceRole_ {};
      // The status of the node.
      shared_ptr<string> instanceStatus_ {};
      // The type of the node.
      shared_ptr<string> instanceType_ {};
      // The ECS instance family of the node.
      shared_ptr<string> instanceTypeFamily_ {};
      // The IP address of the node.
      shared_ptr<vector<string>> ipAddress_ {};
      // Indicates whether the instance on which the node is deployed is provided by Alibaba Cloud. Valid values:
      // 
      // *   `true`: The instance is provided by Alibaba Cloud.
      // *   `false`: The instance is not provided by Alibaba Cloud.
      shared_ptr<bool> isAliyunNode_ {};
      // The name of the node. This name is the identifier of the node in the cluster.
      shared_ptr<string> nodeName_ {};
      // Indicates whether the node is ready. Valid values:
      // 
      // *   `Ready`: The node is ready.
      // *   `NotReady`: The node is not ready.
      // *   `Unknown`: The status of the node is unknown.
      // *   `Offline`: The node is offline.
      shared_ptr<string> nodeStatus_ {};
      // The node pool ID.
      shared_ptr<string> nodepoolId_ {};
      // Indicates how the node is initialized. A node can be manually created or created by using Resource Orchestration Service (ROS).
      shared_ptr<string> source_ {};
      // The type of preemptible instance. Valid values:
      // 
      // *   NoSpot: a non-preemptible instance.
      // *   SpotWithPriceLimit: a preemptible instance that is configured with the highest bid price.
      // *   SpotAsPriceGo: a preemptible instance for which the system automatically bids based on the current market price.
      shared_ptr<string> spotStrategy_ {};
      // The status of the node. Valid values:
      // 
      // *   `pending`: The node is being created.
      // *   `running`: The node is running.
      // *   `starting`: The node is being started.
      // *   `stopping`: The node is being stopped.
      // *   `stopped`: The node is stopped.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->nodes_ == nullptr
        && this->page_ == nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<DescribeClusterNodesResponseBody::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<DescribeClusterNodesResponseBody::Nodes>) };
    inline vector<DescribeClusterNodesResponseBody::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<DescribeClusterNodesResponseBody::Nodes>) };
    inline DescribeClusterNodesResponseBody& setNodes(const vector<DescribeClusterNodesResponseBody::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribeClusterNodesResponseBody& setNodes(vector<DescribeClusterNodesResponseBody::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const DescribeClusterNodesResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, DescribeClusterNodesResponseBody::Page) };
    inline DescribeClusterNodesResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, DescribeClusterNodesResponseBody::Page) };
    inline DescribeClusterNodesResponseBody& setPage(const DescribeClusterNodesResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline DescribeClusterNodesResponseBody& setPage(DescribeClusterNodesResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


  protected:
    // The details of the nodes in the cluster.
    shared_ptr<vector<DescribeClusterNodesResponseBody::Nodes>> nodes_ {};
    // The pagination information.
    shared_ptr<DescribeClusterNodesResponseBody::Page> page_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
