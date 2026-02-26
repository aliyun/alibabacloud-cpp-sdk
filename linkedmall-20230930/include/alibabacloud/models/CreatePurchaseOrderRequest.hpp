// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPURCHASEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPURCHASEORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PurchaseOrderCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class CreatePurchaseOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePurchaseOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePurchaseOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreatePurchaseOrderRequest() = default ;
    CreatePurchaseOrderRequest(const CreatePurchaseOrderRequest &) = default ;
    CreatePurchaseOrderRequest(CreatePurchaseOrderRequest &&) = default ;
    CreatePurchaseOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePurchaseOrderRequest() = default ;
    CreatePurchaseOrderRequest& operator=(const CreatePurchaseOrderRequest &) = default ;
    CreatePurchaseOrderRequest& operator=(CreatePurchaseOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PurchaseOrderCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PurchaseOrderCreateCmd) };
    inline PurchaseOrderCreateCmd getBody() { DARABONBA_PTR_GET(body_, PurchaseOrderCreateCmd) };
    inline CreatePurchaseOrderRequest& setBody(const PurchaseOrderCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreatePurchaseOrderRequest& setBody(PurchaseOrderCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<PurchaseOrderCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
