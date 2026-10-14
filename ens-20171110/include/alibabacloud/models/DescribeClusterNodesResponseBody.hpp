// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeClusterNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
      // The current page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Nodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_TO_JSON(NodeInfo, nodeInfo_);
        DARABONBA_PTR_TO_JSON(NodepoolId, nodepoolId_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_FROM_JSON(NodeInfo, nodeInfo_);
        DARABONBA_PTR_FROM_JSON(NodepoolId, nodepoolId_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
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
      class NodeInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ContainerRuntimeVersion, containerRuntimeVersion_);
          DARABONBA_PTR_TO_JSON(KubeletVersion, kubeletVersion_);
          DARABONBA_PTR_TO_JSON(OsImage, osImage_);
        };
        friend void from_json(const Darabonba::Json& j, NodeInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ContainerRuntimeVersion, containerRuntimeVersion_);
          DARABONBA_PTR_FROM_JSON(KubeletVersion, kubeletVersion_);
          DARABONBA_PTR_FROM_JSON(OsImage, osImage_);
        };
        NodeInfo() = default ;
        NodeInfo(const NodeInfo &) = default ;
        NodeInfo(NodeInfo &&) = default ;
        NodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeInfo() = default ;
        NodeInfo& operator=(const NodeInfo &) = default ;
        NodeInfo& operator=(NodeInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->containerRuntimeVersion_ == nullptr
        && this->kubeletVersion_ == nullptr && this->osImage_ == nullptr; };
        // containerRuntimeVersion Field Functions 
        bool hasContainerRuntimeVersion() const { return this->containerRuntimeVersion_ != nullptr;};
        void deleteContainerRuntimeVersion() { this->containerRuntimeVersion_ = nullptr;};
        inline string getContainerRuntimeVersion() const { DARABONBA_PTR_GET_DEFAULT(containerRuntimeVersion_, "") };
        inline NodeInfo& setContainerRuntimeVersion(string containerRuntimeVersion) { DARABONBA_PTR_SET_VALUE(containerRuntimeVersion_, containerRuntimeVersion) };


        // kubeletVersion Field Functions 
        bool hasKubeletVersion() const { return this->kubeletVersion_ != nullptr;};
        void deleteKubeletVersion() { this->kubeletVersion_ = nullptr;};
        inline string getKubeletVersion() const { DARABONBA_PTR_GET_DEFAULT(kubeletVersion_, "") };
        inline NodeInfo& setKubeletVersion(string kubeletVersion) { DARABONBA_PTR_SET_VALUE(kubeletVersion_, kubeletVersion) };


        // osImage Field Functions 
        bool hasOsImage() const { return this->osImage_ != nullptr;};
        void deleteOsImage() { this->osImage_ = nullptr;};
        inline string getOsImage() const { DARABONBA_PTR_GET_DEFAULT(osImage_, "") };
        inline NodeInfo& setOsImage(string osImage) { DARABONBA_PTR_SET_VALUE(osImage_, osImage) };


      protected:
        // The container runtime version.
        shared_ptr<string> containerRuntimeVersion_ {};
        // The kubelet version of the node.
        shared_ptr<string> kubeletVersion_ {};
        // The operating system image of the node.
        shared_ptr<string> osImage_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->ensRegionId_ == nullptr && this->imageId_ == nullptr && this->instanceId_ == nullptr && this->ipAddress_ == nullptr && this->nodeInfo_ == nullptr
        && this->nodepoolId_ == nullptr && this->payType_ == nullptr && this->state_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Nodes& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline Nodes& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


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


      // ipAddress Field Functions 
      bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
      void deleteIpAddress() { this->ipAddress_ = nullptr;};
      inline const vector<string> & getIpAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<string>) };
      inline vector<string> getIpAddress() { DARABONBA_PTR_GET(ipAddress_, vector<string>) };
      inline Nodes& setIpAddress(const vector<string> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
      inline Nodes& setIpAddress(vector<string> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


      // nodeInfo Field Functions 
      bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
      void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
      inline const Nodes::NodeInfo & getNodeInfo() const { DARABONBA_PTR_GET_CONST(nodeInfo_, Nodes::NodeInfo) };
      inline Nodes::NodeInfo getNodeInfo() { DARABONBA_PTR_GET(nodeInfo_, Nodes::NodeInfo) };
      inline Nodes& setNodeInfo(const Nodes::NodeInfo & nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };
      inline Nodes& setNodeInfo(Nodes::NodeInfo && nodeInfo) { DARABONBA_PTR_SET_RVALUE(nodeInfo_, nodeInfo) };


      // nodepoolId Field Functions 
      bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
      void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
      inline string getNodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
      inline Nodes& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline Nodes& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Nodes& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The ENS edge zone ID.
      shared_ptr<string> ensRegionId_ {};
      // The instance image ID.
      shared_ptr<string> imageId_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The IP address of the ENS instance.
      shared_ptr<vector<string>> ipAddress_ {};
      // The node information.
      shared_ptr<Nodes::NodeInfo> nodeInfo_ {};
      // The node pool ID.
      shared_ptr<string> nodepoolId_ {};
      // The billing method. Valid values:
      // - PostPaid: pay-as-you-go.
      shared_ptr<string> payType_ {};
      // The status of the node pool. Valid values:
      // - initial: The node pool is being created.
      // - running: The node pool is created.
      // - removing: The node pool is being removed.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->nodes_ == nullptr
        && this->page_ == nullptr && this->requestId_ == nullptr; };
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


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The node information.
    shared_ptr<vector<DescribeClusterNodesResponseBody::Nodes>> nodes_ {};
    // The pagination information.
    shared_ptr<DescribeClusterNodesResponseBody::Page> page_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
