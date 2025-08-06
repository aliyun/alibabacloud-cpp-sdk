// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNodeResponseBodyNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(node, node_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(node, node_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetNodeResponseBody() = default ;
    GetNodeResponseBody(const GetNodeResponseBody &) = default ;
    GetNodeResponseBody(GetNodeResponseBody &&) = default ;
    GetNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeResponseBody() = default ;
    GetNodeResponseBody& operator=(const GetNodeResponseBody &) = default ;
    GetNodeResponseBody& operator=(GetNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->node_ != nullptr
        && this->requestId_ != nullptr; };
    // node Field Functions 
    bool hasNode() const { return this->node_ != nullptr;};
    void deleteNode() { this->node_ = nullptr;};
    inline const GetNodeResponseBodyNode & node() const { DARABONBA_PTR_GET_CONST(node_, GetNodeResponseBodyNode) };
    inline GetNodeResponseBodyNode node() { DARABONBA_PTR_GET(node_, GetNodeResponseBodyNode) };
    inline GetNodeResponseBody& setNode(const GetNodeResponseBodyNode & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
    inline GetNodeResponseBody& setNode(GetNodeResponseBodyNode && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetNodeResponseBodyNode> node_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
