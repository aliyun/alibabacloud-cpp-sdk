// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTMICROOUTBOUNDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTMICROOUTBOUNDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class StartMicroOutboundResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartMicroOutboundResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CustomerInfo, customerInfo_);
      DARABONBA_PTR_TO_JSON(InvokeCmdId, invokeCmdId_);
      DARABONBA_PTR_TO_JSON(InvokeCreateTime, invokeCreateTime_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartMicroOutboundResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CustomerInfo, customerInfo_);
      DARABONBA_PTR_FROM_JSON(InvokeCmdId, invokeCmdId_);
      DARABONBA_PTR_FROM_JSON(InvokeCreateTime, invokeCreateTime_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartMicroOutboundResponseBody() = default ;
    StartMicroOutboundResponseBody(const StartMicroOutboundResponseBody &) = default ;
    StartMicroOutboundResponseBody(StartMicroOutboundResponseBody &&) = default ;
    StartMicroOutboundResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartMicroOutboundResponseBody() = default ;
    StartMicroOutboundResponseBody& operator=(const StartMicroOutboundResponseBody &) = default ;
    StartMicroOutboundResponseBody& operator=(StartMicroOutboundResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->customerInfo_ != nullptr && this->invokeCmdId_ != nullptr && this->invokeCreateTime_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline StartMicroOutboundResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // customerInfo Field Functions 
    bool hasCustomerInfo() const { return this->customerInfo_ != nullptr;};
    void deleteCustomerInfo() { this->customerInfo_ = nullptr;};
    inline string customerInfo() const { DARABONBA_PTR_GET_DEFAULT(customerInfo_, "") };
    inline StartMicroOutboundResponseBody& setCustomerInfo(string customerInfo) { DARABONBA_PTR_SET_VALUE(customerInfo_, customerInfo) };


    // invokeCmdId Field Functions 
    bool hasInvokeCmdId() const { return this->invokeCmdId_ != nullptr;};
    void deleteInvokeCmdId() { this->invokeCmdId_ = nullptr;};
    inline string invokeCmdId() const { DARABONBA_PTR_GET_DEFAULT(invokeCmdId_, "") };
    inline StartMicroOutboundResponseBody& setInvokeCmdId(string invokeCmdId) { DARABONBA_PTR_SET_VALUE(invokeCmdId_, invokeCmdId) };


    // invokeCreateTime Field Functions 
    bool hasInvokeCreateTime() const { return this->invokeCreateTime_ != nullptr;};
    void deleteInvokeCreateTime() { this->invokeCreateTime_ = nullptr;};
    inline string invokeCreateTime() const { DARABONBA_PTR_GET_DEFAULT(invokeCreateTime_, "") };
    inline StartMicroOutboundResponseBody& setInvokeCreateTime(string invokeCreateTime) { DARABONBA_PTR_SET_VALUE(invokeCreateTime_, invokeCreateTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline StartMicroOutboundResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartMicroOutboundResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> customerInfo_ = nullptr;
    std::shared_ptr<string> invokeCmdId_ = nullptr;
    std::shared_ptr<string> invokeCreateTime_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
