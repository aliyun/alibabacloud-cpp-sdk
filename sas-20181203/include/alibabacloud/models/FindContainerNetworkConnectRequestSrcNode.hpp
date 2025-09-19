// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTREQUESTSRCNODE_HPP_
#define ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTREQUESTSRCNODE_HPP_
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
  class FindContainerNetworkConnectRequestSrcNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindContainerNetworkConnectRequestSrcNode& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(PodName, podName_);
    };
    friend void from_json(const Darabonba::Json& j, FindContainerNetworkConnectRequestSrcNode& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(PodName, podName_);
    };
    FindContainerNetworkConnectRequestSrcNode() = default ;
    FindContainerNetworkConnectRequestSrcNode(const FindContainerNetworkConnectRequestSrcNode &) = default ;
    FindContainerNetworkConnectRequestSrcNode(FindContainerNetworkConnectRequestSrcNode &&) = default ;
    FindContainerNetworkConnectRequestSrcNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindContainerNetworkConnectRequestSrcNode() = default ;
    FindContainerNetworkConnectRequestSrcNode& operator=(const FindContainerNetworkConnectRequestSrcNode &) = default ;
    FindContainerNetworkConnectRequestSrcNode& operator=(FindContainerNetworkConnectRequestSrcNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->clusterId_ != nullptr && this->namespace_ != nullptr && this->nodeIds_ != nullptr && this->nodeType_ != nullptr && this->podName_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline FindContainerNetworkConnectRequestSrcNode& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline FindContainerNetworkConnectRequestSrcNode& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline FindContainerNetworkConnectRequestSrcNode& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & nodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> nodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline FindContainerNetworkConnectRequestSrcNode& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline FindContainerNetworkConnectRequestSrcNode& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline FindContainerNetworkConnectRequestSrcNode& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // podName Field Functions 
    bool hasPodName() const { return this->podName_ != nullptr;};
    void deletePodName() { this->podName_ = nullptr;};
    inline string podName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
    inline FindContainerNetworkConnectRequestSrcNode& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


  protected:
    // The name of the container application.
    std::shared_ptr<string> appName_ = nullptr;
    // The ID of the container cluster.
    // 
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of container clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The namespace of the cluster.
    std::shared_ptr<string> namespace_ = nullptr;
    // The node IDs.
    std::shared_ptr<vector<string>> nodeIds_ = nullptr;
    // The type of the node. Valid values:
    // 
    // *   **app**: application, which indicates that the node type is application.
    std::shared_ptr<string> nodeType_ = nullptr;
    // The name of the pod.
    std::shared_ptr<string> podName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
