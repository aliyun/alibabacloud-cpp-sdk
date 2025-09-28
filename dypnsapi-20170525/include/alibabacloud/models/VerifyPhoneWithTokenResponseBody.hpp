// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYPHONEWITHTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYPHONEWITHTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VerifyPhoneWithTokenResponseBodyGateVerify.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class VerifyPhoneWithTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyPhoneWithTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GateVerify, gateVerify_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyPhoneWithTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GateVerify, gateVerify_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    VerifyPhoneWithTokenResponseBody() = default ;
    VerifyPhoneWithTokenResponseBody(const VerifyPhoneWithTokenResponseBody &) = default ;
    VerifyPhoneWithTokenResponseBody(VerifyPhoneWithTokenResponseBody &&) = default ;
    VerifyPhoneWithTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyPhoneWithTokenResponseBody() = default ;
    VerifyPhoneWithTokenResponseBody& operator=(const VerifyPhoneWithTokenResponseBody &) = default ;
    VerifyPhoneWithTokenResponseBody& operator=(VerifyPhoneWithTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->gateVerify_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline VerifyPhoneWithTokenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // gateVerify Field Functions 
    bool hasGateVerify() const { return this->gateVerify_ != nullptr;};
    void deleteGateVerify() { this->gateVerify_ = nullptr;};
    inline const VerifyPhoneWithTokenResponseBodyGateVerify & gateVerify() const { DARABONBA_PTR_GET_CONST(gateVerify_, VerifyPhoneWithTokenResponseBodyGateVerify) };
    inline VerifyPhoneWithTokenResponseBodyGateVerify gateVerify() { DARABONBA_PTR_GET(gateVerify_, VerifyPhoneWithTokenResponseBodyGateVerify) };
    inline VerifyPhoneWithTokenResponseBody& setGateVerify(const VerifyPhoneWithTokenResponseBodyGateVerify & gateVerify) { DARABONBA_PTR_SET_VALUE(gateVerify_, gateVerify) };
    inline VerifyPhoneWithTokenResponseBody& setGateVerify(VerifyPhoneWithTokenResponseBodyGateVerify && gateVerify) { DARABONBA_PTR_SET_RVALUE(gateVerify_, gateVerify) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VerifyPhoneWithTokenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyPhoneWithTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   If OK is returned, the request is successful.
    // *   For more information about other error codes, see [API response codes](https://help.aliyun.com/document_detail/85198.html).
    std::shared_ptr<string> code_ = nullptr;
    // The response parameters.
    std::shared_ptr<VerifyPhoneWithTokenResponseBodyGateVerify> gateVerify_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
