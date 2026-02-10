// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class FindContainerNetworkConnectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindContainerNetworkConnectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DstNode, dstNode_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SrcNode, srcNode_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, FindContainerNetworkConnectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DstNode, dstNode_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SrcNode, srcNode_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    FindContainerNetworkConnectRequest() = default ;
    FindContainerNetworkConnectRequest(const FindContainerNetworkConnectRequest &) = default ;
    FindContainerNetworkConnectRequest(FindContainerNetworkConnectRequest &&) = default ;
    FindContainerNetworkConnectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindContainerNetworkConnectRequest() = default ;
    FindContainerNetworkConnectRequest& operator=(const FindContainerNetworkConnectRequest &) = default ;
    FindContainerNetworkConnectRequest& operator=(FindContainerNetworkConnectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SrcNode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SrcNode& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
        DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(PodName, podName_);
      };
      friend void from_json(const Darabonba::Json& j, SrcNode& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
        DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(PodName, podName_);
      };
      SrcNode() = default ;
      SrcNode(const SrcNode &) = default ;
      SrcNode(SrcNode &&) = default ;
      SrcNode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SrcNode() = default ;
      SrcNode& operator=(const SrcNode &) = default ;
      SrcNode& operator=(SrcNode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appName_ == nullptr
        && this->clusterId_ == nullptr && this->namespace_ == nullptr && this->nodeIds_ == nullptr && this->nodeType_ == nullptr && this->podName_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline SrcNode& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline SrcNode& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline SrcNode& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // nodeIds Field Functions 
      bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
      void deleteNodeIds() { this->nodeIds_ = nullptr;};
      inline const vector<string> & getNodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
      inline vector<string> getNodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
      inline SrcNode& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
      inline SrcNode& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline SrcNode& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // podName Field Functions 
      bool hasPodName() const { return this->podName_ != nullptr;};
      void deletePodName() { this->podName_ = nullptr;};
      inline string getPodName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
      inline SrcNode& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


    protected:
      // The name of the container application.
      shared_ptr<string> appName_ {};
      // The ID of the container cluster.
      // 
      // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of container clusters.
      shared_ptr<string> clusterId_ {};
      // The namespace of the cluster.
      shared_ptr<string> namespace_ {};
      // The node IDs.
      shared_ptr<vector<string>> nodeIds_ {};
      // The type of the node. Valid values:
      // 
      // *   **app**: application, which indicates that the node type is application.
      shared_ptr<string> nodeType_ {};
      // The name of the pod.
      shared_ptr<string> podName_ {};
    };

    class DstNode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DstNode& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
        DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(PodName, podName_);
      };
      friend void from_json(const Darabonba::Json& j, DstNode& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
        DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(PodName, podName_);
      };
      DstNode() = default ;
      DstNode(const DstNode &) = default ;
      DstNode(DstNode &&) = default ;
      DstNode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DstNode() = default ;
      DstNode& operator=(const DstNode &) = default ;
      DstNode& operator=(DstNode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appName_ == nullptr
        && this->clusterId_ == nullptr && this->namespace_ == nullptr && this->nodeIds_ == nullptr && this->nodeType_ == nullptr && this->podName_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline DstNode& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline DstNode& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline DstNode& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // nodeIds Field Functions 
      bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
      void deleteNodeIds() { this->nodeIds_ = nullptr;};
      inline const vector<string> & getNodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
      inline vector<string> getNodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
      inline DstNode& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
      inline DstNode& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline DstNode& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // podName Field Functions 
      bool hasPodName() const { return this->podName_ != nullptr;};
      void deletePodName() { this->podName_ = nullptr;};
      inline string getPodName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
      inline DstNode& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


    protected:
      // The name of the container application.
      shared_ptr<string> appName_ {};
      // The ID of the container cluster.
      // 
      // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of container clusters.
      shared_ptr<string> clusterId_ {};
      // The namespace of the cluster.
      shared_ptr<string> namespace_ {};
      // The node IDs.
      shared_ptr<vector<string>> nodeIds_ {};
      // The type of the node. Valid values:
      // 
      // *   **app**: application, which indicates that the node type is application.
      shared_ptr<string> nodeType_ {};
      // The name of the pod.
      shared_ptr<string> podName_ {};
    };

    virtual bool empty() const override { return this->criteriaType_ == nullptr
        && this->currentPage_ == nullptr && this->dstNode_ == nullptr && this->endTime_ == nullptr && this->pageSize_ == nullptr && this->srcNode_ == nullptr
        && this->startTime_ == nullptr; };
    // criteriaType Field Functions 
    bool hasCriteriaType() const { return this->criteriaType_ != nullptr;};
    void deleteCriteriaType() { this->criteriaType_ = nullptr;};
    inline string getCriteriaType() const { DARABONBA_PTR_GET_DEFAULT(criteriaType_, "") };
    inline FindContainerNetworkConnectRequest& setCriteriaType(string criteriaType) { DARABONBA_PTR_SET_VALUE(criteriaType_, criteriaType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline FindContainerNetworkConnectRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dstNode Field Functions 
    bool hasDstNode() const { return this->dstNode_ != nullptr;};
    void deleteDstNode() { this->dstNode_ = nullptr;};
    inline const FindContainerNetworkConnectRequest::DstNode & getDstNode() const { DARABONBA_PTR_GET_CONST(dstNode_, FindContainerNetworkConnectRequest::DstNode) };
    inline FindContainerNetworkConnectRequest::DstNode getDstNode() { DARABONBA_PTR_GET(dstNode_, FindContainerNetworkConnectRequest::DstNode) };
    inline FindContainerNetworkConnectRequest& setDstNode(const FindContainerNetworkConnectRequest::DstNode & dstNode) { DARABONBA_PTR_SET_VALUE(dstNode_, dstNode) };
    inline FindContainerNetworkConnectRequest& setDstNode(FindContainerNetworkConnectRequest::DstNode && dstNode) { DARABONBA_PTR_SET_RVALUE(dstNode_, dstNode) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline FindContainerNetworkConnectRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline FindContainerNetworkConnectRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // srcNode Field Functions 
    bool hasSrcNode() const { return this->srcNode_ != nullptr;};
    void deleteSrcNode() { this->srcNode_ = nullptr;};
    inline const FindContainerNetworkConnectRequest::SrcNode & getSrcNode() const { DARABONBA_PTR_GET_CONST(srcNode_, FindContainerNetworkConnectRequest::SrcNode) };
    inline FindContainerNetworkConnectRequest::SrcNode getSrcNode() { DARABONBA_PTR_GET(srcNode_, FindContainerNetworkConnectRequest::SrcNode) };
    inline FindContainerNetworkConnectRequest& setSrcNode(const FindContainerNetworkConnectRequest::SrcNode & srcNode) { DARABONBA_PTR_SET_VALUE(srcNode_, srcNode) };
    inline FindContainerNetworkConnectRequest& setSrcNode(FindContainerNetworkConnectRequest::SrcNode && srcNode) { DARABONBA_PTR_SET_RVALUE(srcNode_, srcNode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline FindContainerNetworkConnectRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The type of the information that you want to query. Valid values:
    // 
    // *   **EDGE**: connection information
    shared_ptr<string> criteriaType_ {};
    // The number of the page to return. Default value: **1**.
    shared_ptr<int64_t> currentPage_ {};
    // The information about the destination node.
    shared_ptr<FindContainerNetworkConnectRequest::DstNode> dstNode_ {};
    // The end time of the network connection.
    shared_ptr<int64_t> endTime_ {};
    // The number of entries to return on each page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // > We recommend that you do not leave this parameter empty.
    shared_ptr<int64_t> pageSize_ {};
    // The information about the source node.
    shared_ptr<FindContainerNetworkConnectRequest::SrcNode> srcNode_ {};
    // The start time of the network connection.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
