// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEBYURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNODEBYURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNodeByUrlResponseBodyNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetNodeByUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeByUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(node, node_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeByUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(node, node_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetNodeByUrlResponseBody() = default ;
    GetNodeByUrlResponseBody(const GetNodeByUrlResponseBody &) = default ;
    GetNodeByUrlResponseBody(GetNodeByUrlResponseBody &&) = default ;
    GetNodeByUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeByUrlResponseBody() = default ;
    GetNodeByUrlResponseBody& operator=(const GetNodeByUrlResponseBody &) = default ;
    GetNodeByUrlResponseBody& operator=(GetNodeByUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->node_ == nullptr
        && return this->requestId_ == nullptr; };
    // node Field Functions 
    bool hasNode() const { return this->node_ != nullptr;};
    void deleteNode() { this->node_ = nullptr;};
    inline const GetNodeByUrlResponseBodyNode & node() const { DARABONBA_PTR_GET_CONST(node_, GetNodeByUrlResponseBodyNode) };
    inline GetNodeByUrlResponseBodyNode node() { DARABONBA_PTR_GET(node_, GetNodeByUrlResponseBodyNode) };
    inline GetNodeByUrlResponseBody& setNode(const GetNodeByUrlResponseBodyNode & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
    inline GetNodeByUrlResponseBody& setNode(GetNodeByUrlResponseBodyNode && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNodeByUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetNodeByUrlResponseBodyNode> node_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
