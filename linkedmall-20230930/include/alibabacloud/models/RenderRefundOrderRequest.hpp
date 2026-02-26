// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENDERREFUNDORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENDERREFUNDORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RefundRenderCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class RenderRefundOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenderRefundOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, RenderRefundOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    RenderRefundOrderRequest() = default ;
    RenderRefundOrderRequest(const RenderRefundOrderRequest &) = default ;
    RenderRefundOrderRequest(RenderRefundOrderRequest &&) = default ;
    RenderRefundOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenderRefundOrderRequest() = default ;
    RenderRefundOrderRequest& operator=(const RenderRefundOrderRequest &) = default ;
    RenderRefundOrderRequest& operator=(RenderRefundOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const RefundRenderCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, RefundRenderCmd) };
    inline RefundRenderCmd getBody() { DARABONBA_PTR_GET(body_, RefundRenderCmd) };
    inline RenderRefundOrderRequest& setBody(const RefundRenderCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline RenderRefundOrderRequest& setBody(RefundRenderCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<RefundRenderCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
