// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetNodesResponseBodyNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nodes, nodes_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetNodesResponseBody() = default ;
    GetNodesResponseBody(const GetNodesResponseBody &) = default ;
    GetNodesResponseBody(GetNodesResponseBody &&) = default ;
    GetNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodesResponseBody() = default ;
    GetNodesResponseBody& operator=(const GetNodesResponseBody &) = default ;
    GetNodesResponseBody& operator=(GetNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodes_ == nullptr
        && return this->requestId_ == nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<GetNodesResponseBodyNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<GetNodesResponseBodyNodes>) };
    inline vector<GetNodesResponseBodyNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<GetNodesResponseBodyNodes>) };
    inline GetNodesResponseBody& setNodes(const vector<GetNodesResponseBodyNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline GetNodesResponseBody& setNodes(vector<GetNodesResponseBodyNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetNodesResponseBodyNodes>> nodes_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
