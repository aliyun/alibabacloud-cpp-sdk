// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEPODSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEPODSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NodePodInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListNodePodsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodePodsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodePodInfos, nodePodInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodePodsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodePodInfos, nodePodInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListNodePodsResponseBody() = default ;
    ListNodePodsResponseBody(const ListNodePodsResponseBody &) = default ;
    ListNodePodsResponseBody(ListNodePodsResponseBody &&) = default ;
    ListNodePodsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodePodsResponseBody() = default ;
    ListNodePodsResponseBody& operator=(const ListNodePodsResponseBody &) = default ;
    ListNodePodsResponseBody& operator=(ListNodePodsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodePodInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // nodePodInfos Field Functions 
    bool hasNodePodInfos() const { return this->nodePodInfos_ != nullptr;};
    void deleteNodePodInfos() { this->nodePodInfos_ = nullptr;};
    inline const vector<NodePodInfo> & getNodePodInfos() const { DARABONBA_PTR_GET_CONST(nodePodInfos_, vector<NodePodInfo>) };
    inline vector<NodePodInfo> getNodePodInfos() { DARABONBA_PTR_GET(nodePodInfos_, vector<NodePodInfo>) };
    inline ListNodePodsResponseBody& setNodePodInfos(const vector<NodePodInfo> & nodePodInfos) { DARABONBA_PTR_SET_VALUE(nodePodInfos_, nodePodInfos) };
    inline ListNodePodsResponseBody& setNodePodInfos(vector<NodePodInfo> && nodePodInfos) { DARABONBA_PTR_SET_RVALUE(nodePodInfos_, nodePodInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodePodsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The node pod information.
    shared_ptr<vector<NodePodInfo>> nodePodInfos_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
