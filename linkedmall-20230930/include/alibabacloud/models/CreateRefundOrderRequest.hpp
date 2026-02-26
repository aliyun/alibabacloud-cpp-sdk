// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREFUNDORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREFUNDORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RefundOrderCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class CreateRefundOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRefundOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRefundOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateRefundOrderRequest() = default ;
    CreateRefundOrderRequest(const CreateRefundOrderRequest &) = default ;
    CreateRefundOrderRequest(CreateRefundOrderRequest &&) = default ;
    CreateRefundOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRefundOrderRequest() = default ;
    CreateRefundOrderRequest& operator=(const CreateRefundOrderRequest &) = default ;
    CreateRefundOrderRequest& operator=(CreateRefundOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const RefundOrderCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, RefundOrderCmd) };
    inline RefundOrderCmd getBody() { DARABONBA_PTR_GET(body_, RefundOrderCmd) };
    inline CreateRefundOrderRequest& setBody(const RefundOrderCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateRefundOrderRequest& setBody(RefundOrderCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<RefundOrderCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
