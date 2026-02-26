// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPLITPURCHASEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SPLITPURCHASEORDERREQUEST_HPP_
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
  class SplitPurchaseOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SplitPurchaseOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SplitPurchaseOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SplitPurchaseOrderRequest() = default ;
    SplitPurchaseOrderRequest(const SplitPurchaseOrderRequest &) = default ;
    SplitPurchaseOrderRequest(SplitPurchaseOrderRequest &&) = default ;
    SplitPurchaseOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SplitPurchaseOrderRequest() = default ;
    SplitPurchaseOrderRequest& operator=(const SplitPurchaseOrderRequest &) = default ;
    SplitPurchaseOrderRequest& operator=(SplitPurchaseOrderRequest &&) = default ;
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
    inline SplitPurchaseOrderRequest& setBody(const PurchaseOrderRenderQuery & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SplitPurchaseOrderRequest& setBody(PurchaseOrderRenderQuery && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<PurchaseOrderRenderQuery> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
