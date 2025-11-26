// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNODEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NodeGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetNodeGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodeGroup, nodeGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeGroup, nodeGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNodeGroupResponseBody() = default ;
    GetNodeGroupResponseBody(const GetNodeGroupResponseBody &) = default ;
    GetNodeGroupResponseBody(GetNodeGroupResponseBody &&) = default ;
    GetNodeGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeGroupResponseBody() = default ;
    GetNodeGroupResponseBody& operator=(const GetNodeGroupResponseBody &) = default ;
    GetNodeGroupResponseBody& operator=(GetNodeGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeGroup_ == nullptr
        && return this->requestId_ == nullptr; };
    // nodeGroup Field Functions 
    bool hasNodeGroup() const { return this->nodeGroup_ != nullptr;};
    void deleteNodeGroup() { this->nodeGroup_ = nullptr;};
    inline const NodeGroup & nodeGroup() const { DARABONBA_PTR_GET_CONST(nodeGroup_, NodeGroup) };
    inline NodeGroup nodeGroup() { DARABONBA_PTR_GET(nodeGroup_, NodeGroup) };
    inline GetNodeGroupResponseBody& setNodeGroup(const NodeGroup & nodeGroup) { DARABONBA_PTR_SET_VALUE(nodeGroup_, nodeGroup) };
    inline GetNodeGroupResponseBody& setNodeGroup(NodeGroup && nodeGroup) { DARABONBA_PTR_SET_RVALUE(nodeGroup_, nodeGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNodeGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The node group.
    std::shared_ptr<NodeGroup> nodeGroup_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
