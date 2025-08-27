// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERREFUNDDETAILQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ORDERREFUNDDETAILQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OrderRefundDetailQueryResponseBodyModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class OrderRefundDetailQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderRefundDetailQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, OrderRefundDetailQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    OrderRefundDetailQueryResponseBody() = default ;
    OrderRefundDetailQueryResponseBody(const OrderRefundDetailQueryResponseBody &) = default ;
    OrderRefundDetailQueryResponseBody(OrderRefundDetailQueryResponseBody &&) = default ;
    OrderRefundDetailQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderRefundDetailQueryResponseBody() = default ;
    OrderRefundDetailQueryResponseBody& operator=(const OrderRefundDetailQueryResponseBody &) = default ;
    OrderRefundDetailQueryResponseBody& operator=(OrderRefundDetailQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->code_ != nullptr && this->message_ != nullptr && this->module_ != nullptr && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OrderRefundDetailQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline OrderRefundDetailQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline OrderRefundDetailQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const OrderRefundDetailQueryResponseBodyModule & module() const { DARABONBA_PTR_GET_CONST(module_, OrderRefundDetailQueryResponseBodyModule) };
    inline OrderRefundDetailQueryResponseBodyModule module() { DARABONBA_PTR_GET(module_, OrderRefundDetailQueryResponseBodyModule) };
    inline OrderRefundDetailQueryResponseBody& setModule(const OrderRefundDetailQueryResponseBodyModule & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline OrderRefundDetailQueryResponseBody& setModule(OrderRefundDetailQueryResponseBodyModule && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline OrderRefundDetailQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<OrderRefundDetailQueryResponseBodyModule> module_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
