// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHNODEGROUPNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REFRESHNODEGROUPNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class RefreshNodeGroupNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshNodeGroupNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodeGroupRefreshTaskId, nodeGroupRefreshTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshNodeGroupNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeGroupRefreshTaskId, nodeGroupRefreshTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RefreshNodeGroupNodesResponseBody() = default ;
    RefreshNodeGroupNodesResponseBody(const RefreshNodeGroupNodesResponseBody &) = default ;
    RefreshNodeGroupNodesResponseBody(RefreshNodeGroupNodesResponseBody &&) = default ;
    RefreshNodeGroupNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshNodeGroupNodesResponseBody() = default ;
    RefreshNodeGroupNodesResponseBody& operator=(const RefreshNodeGroupNodesResponseBody &) = default ;
    RefreshNodeGroupNodesResponseBody& operator=(RefreshNodeGroupNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeGroupRefreshTaskId_ == nullptr
        && this->requestId_ == nullptr; };
    // nodeGroupRefreshTaskId Field Functions 
    bool hasNodeGroupRefreshTaskId() const { return this->nodeGroupRefreshTaskId_ != nullptr;};
    void deleteNodeGroupRefreshTaskId() { this->nodeGroupRefreshTaskId_ = nullptr;};
    inline string getNodeGroupRefreshTaskId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupRefreshTaskId_, "") };
    inline RefreshNodeGroupNodesResponseBody& setNodeGroupRefreshTaskId(string nodeGroupRefreshTaskId) { DARABONBA_PTR_SET_VALUE(nodeGroupRefreshTaskId_, nodeGroupRefreshTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefreshNodeGroupNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The task ID. Query the task progress through DescribeNodeGroupRefreshTask. If no nodes have configuration drift, no task is created and this field returns an empty string.
    shared_ptr<string> nodeGroupRefreshTaskId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
