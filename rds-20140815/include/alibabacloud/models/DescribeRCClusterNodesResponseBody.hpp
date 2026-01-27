// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCCLUSTERNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCCLUSTERNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCClusterNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCClusterNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCClusterNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRCClusterNodesResponseBody() = default ;
    DescribeRCClusterNodesResponseBody(const DescribeRCClusterNodesResponseBody &) = default ;
    DescribeRCClusterNodesResponseBody(DescribeRCClusterNodesResponseBody &&) = default ;
    DescribeRCClusterNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCClusterNodesResponseBody() = default ;
    DescribeRCClusterNodesResponseBody& operator=(const DescribeRCClusterNodesResponseBody &) = default ;
    DescribeRCClusterNodesResponseBody& operator=(DescribeRCClusterNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Page : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Page& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Page& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Page& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Page& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Page& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The maximum number of entries returned per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    class Nodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DockerVersion, dockerVersion_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceRole, instanceRole_);
        DARABONBA_PTR_TO_JSON(IpAddresses, ipAddresses_);
        DARABONBA_PTR_TO_JSON(IsAliyunNode, isAliyunNode_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(NodePoolId, nodePoolId_);
        DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
        DARABONBA_PTR_TO_JSON(PodCount, podCount_);
        DARABONBA_PTR_TO_JSON(RuntimeVersion, runtimeVersion_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DockerVersion, dockerVersion_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceRole, instanceRole_);
        DARABONBA_PTR_FROM_JSON(IpAddresses, ipAddresses_);
        DARABONBA_PTR_FROM_JSON(IsAliyunNode, isAliyunNode_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(NodePoolId, nodePoolId_);
        DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
        DARABONBA_PTR_FROM_JSON(PodCount, podCount_);
        DARABONBA_PTR_FROM_JSON(RuntimeVersion, runtimeVersion_);
        DARABONBA_PTR_FROM_JSON(State, state_);
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
        && this->dockerVersion_ == nullptr && this->imageId_ == nullptr && this->instanceId_ == nullptr && this->instanceRole_ == nullptr && this->ipAddresses_ == nullptr
        && this->isAliyunNode_ == nullptr && this->nodeName_ == nullptr && this->nodePoolId_ == nullptr && this->nodeStatus_ == nullptr && this->podCount_ == nullptr
        && this->runtimeVersion_ == nullptr && this->state_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Nodes& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // dockerVersion Field Functions 
      bool hasDockerVersion() const { return this->dockerVersion_ != nullptr;};
      void deleteDockerVersion() { this->dockerVersion_ = nullptr;};
      inline string getDockerVersion() const { DARABONBA_PTR_GET_DEFAULT(dockerVersion_, "") };
      inline Nodes& setDockerVersion(string dockerVersion) { DARABONBA_PTR_SET_VALUE(dockerVersion_, dockerVersion) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Nodes& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Nodes& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceRole Field Functions 
      bool hasInstanceRole() const { return this->instanceRole_ != nullptr;};
      void deleteInstanceRole() { this->instanceRole_ = nullptr;};
      inline string getInstanceRole() const { DARABONBA_PTR_GET_DEFAULT(instanceRole_, "") };
      inline Nodes& setInstanceRole(string instanceRole) { DARABONBA_PTR_SET_VALUE(instanceRole_, instanceRole) };


      // ipAddresses Field Functions 
      bool hasIpAddresses() const { return this->ipAddresses_ != nullptr;};
      void deleteIpAddresses() { this->ipAddresses_ = nullptr;};
      inline const vector<string> & getIpAddresses() const { DARABONBA_PTR_GET_CONST(ipAddresses_, vector<string>) };
      inline vector<string> getIpAddresses() { DARABONBA_PTR_GET(ipAddresses_, vector<string>) };
      inline Nodes& setIpAddresses(const vector<string> & ipAddresses) { DARABONBA_PTR_SET_VALUE(ipAddresses_, ipAddresses) };
      inline Nodes& setIpAddresses(vector<string> && ipAddresses) { DARABONBA_PTR_SET_RVALUE(ipAddresses_, ipAddresses) };


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


      // nodePoolId Field Functions 
      bool hasNodePoolId() const { return this->nodePoolId_ != nullptr;};
      void deleteNodePoolId() { this->nodePoolId_ = nullptr;};
      inline string getNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(nodePoolId_, "") };
      inline Nodes& setNodePoolId(string nodePoolId) { DARABONBA_PTR_SET_VALUE(nodePoolId_, nodePoolId) };


      // nodeStatus Field Functions 
      bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
      void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
      inline string getNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, "") };
      inline Nodes& setNodeStatus(string nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


      // podCount Field Functions 
      bool hasPodCount() const { return this->podCount_ != nullptr;};
      void deletePodCount() { this->podCount_ = nullptr;};
      inline int64_t getPodCount() const { DARABONBA_PTR_GET_DEFAULT(podCount_, 0L) };
      inline Nodes& setPodCount(int64_t podCount) { DARABONBA_PTR_SET_VALUE(podCount_, podCount) };


      // runtimeVersion Field Functions 
      bool hasRuntimeVersion() const { return this->runtimeVersion_ != nullptr;};
      void deleteRuntimeVersion() { this->runtimeVersion_ = nullptr;};
      inline string getRuntimeVersion() const { DARABONBA_PTR_GET_DEFAULT(runtimeVersion_, "") };
      inline Nodes& setRuntimeVersion(string runtimeVersion) { DARABONBA_PTR_SET_VALUE(runtimeVersion_, runtimeVersion) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Nodes& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The time when the node was created.
      shared_ptr<string> creationTime_ {};
      // The container version.
      shared_ptr<string> dockerVersion_ {};
      // The image ID of the node.
      shared_ptr<string> imageId_ {};
      // The node ID.
      shared_ptr<string> instanceId_ {};
      // The node role. Valid values:
      // 
      // *   **Master**: master node
      // *   **Worker**: worker node
      shared_ptr<string> instanceRole_ {};
      // The IP address.
      shared_ptr<vector<string>> ipAddresses_ {};
      // Indicates whether the node is provided by Alibaba Cloud. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isAliyunNode_ {};
      // The node name, which is the identifier of the RDS Custom node in the cluster.
      shared_ptr<string> nodeName_ {};
      // The node pool ID.
      shared_ptr<string> nodePoolId_ {};
      // Indicates whether the node is ready. Valid values:
      // 
      // *   **Ready**: The node is ready.
      // *   **NotReady**: The node is not ready.
      // *   **Unknown**: The status of the node is unknown.
      // *   **Offline**: The node is offline.
      shared_ptr<string> nodeStatus_ {};
      shared_ptr<int64_t> podCount_ {};
      // The runtime of the ACK cluster.
      shared_ptr<string> runtimeVersion_ {};
      // The node status. Valid values:
      // 
      // *   **pending**
      // *   **running**
      // *   **starting**
      // *   **stopping**
      // *   **stopped**
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->nodes_ == nullptr
        && this->page_ == nullptr && this->requestId_ == nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<DescribeRCClusterNodesResponseBody::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<DescribeRCClusterNodesResponseBody::Nodes>) };
    inline vector<DescribeRCClusterNodesResponseBody::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<DescribeRCClusterNodesResponseBody::Nodes>) };
    inline DescribeRCClusterNodesResponseBody& setNodes(const vector<DescribeRCClusterNodesResponseBody::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribeRCClusterNodesResponseBody& setNodes(vector<DescribeRCClusterNodesResponseBody::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const DescribeRCClusterNodesResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, DescribeRCClusterNodesResponseBody::Page) };
    inline DescribeRCClusterNodesResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, DescribeRCClusterNodesResponseBody::Page) };
    inline DescribeRCClusterNodesResponseBody& setPage(const DescribeRCClusterNodesResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline DescribeRCClusterNodesResponseBody& setPage(DescribeRCClusterNodesResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCClusterNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the nodes.
    shared_ptr<vector<DescribeRCClusterNodesResponseBody::Nodes>> nodes_ {};
    // The pagination information.
    shared_ptr<DescribeRCClusterNodesResponseBody::Page> page_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
