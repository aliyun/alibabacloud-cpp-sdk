// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENDERPURCHASEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENDERPURCHASEORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PurchaseOrderRenderQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class RenderPurchaseOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenderPurchaseOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, RenderPurchaseOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    RenderPurchaseOrderRequest() = default ;
    RenderPurchaseOrderRequest(const RenderPurchaseOrderRequest &) = default ;
    RenderPurchaseOrderRequest(RenderPurchaseOrderRequest &&) = default ;
    RenderPurchaseOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenderPurchaseOrderRequest() = default ;
    RenderPurchaseOrderRequest& operator=(const RenderPurchaseOrderRequest &) = default ;
    RenderPurchaseOrderRequest& operator=(RenderPurchaseOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PurchaseOrderRenderQuery & getBody() const { DARABONBA_PTR_GET_CONST(body_, PurchaseOrderRenderQuery) };
    inline PurchaseOrderRenderQuery getBody() { DARABONBA_PTR_GET(body_, PurchaseOrderRenderQuery) };
    inline RenderPurchaseOrderRequest& setBody(const PurchaseOrderRenderQuery & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline RenderPurchaseOrderRequest& setBody(PurchaseOrderRenderQuery && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<PurchaseOrderRenderQuery> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
