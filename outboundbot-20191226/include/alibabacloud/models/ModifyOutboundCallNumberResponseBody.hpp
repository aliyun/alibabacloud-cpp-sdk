// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOUTBOUNDCALLNUMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOUTBOUNDCALLNUMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyOutboundCallNumberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOutboundCallNumberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OutboundCallNumber, outboundCallNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOutboundCallNumberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OutboundCallNumber, outboundCallNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ModifyOutboundCallNumberResponseBody() = default ;
    ModifyOutboundCallNumberResponseBody(const ModifyOutboundCallNumberResponseBody &) = default ;
    ModifyOutboundCallNumberResponseBody(ModifyOutboundCallNumberResponseBody &&) = default ;
    ModifyOutboundCallNumberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOutboundCallNumberResponseBody() = default ;
    ModifyOutboundCallNumberResponseBody& operator=(const ModifyOutboundCallNumberResponseBody &) = default ;
    ModifyOutboundCallNumberResponseBody& operator=(ModifyOutboundCallNumberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OutboundCallNumber : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OutboundCallNumber& obj) { 
        DARABONBA_PTR_TO_JSON(Number, number_);
        DARABONBA_PTR_TO_JSON(OutboundCallNumberId, outboundCallNumberId_);
        DARABONBA_PTR_TO_JSON(RateLimitCount, rateLimitCount_);
        DARABONBA_PTR_TO_JSON(RateLimitPeriod, rateLimitPeriod_);
      };
      friend void from_json(const Darabonba::Json& j, OutboundCallNumber& obj) { 
        DARABONBA_PTR_FROM_JSON(Number, number_);
        DARABONBA_PTR_FROM_JSON(OutboundCallNumberId, outboundCallNumberId_);
        DARABONBA_PTR_FROM_JSON(RateLimitCount, rateLimitCount_);
        DARABONBA_PTR_FROM_JSON(RateLimitPeriod, rateLimitPeriod_);
      };
      OutboundCallNumber() = default ;
      OutboundCallNumber(const OutboundCallNumber &) = default ;
      OutboundCallNumber(OutboundCallNumber &&) = default ;
      OutboundCallNumber(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OutboundCallNumber() = default ;
      OutboundCallNumber& operator=(const OutboundCallNumber &) = default ;
      OutboundCallNumber& operator=(OutboundCallNumber &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->number_ == nullptr
        && this->outboundCallNumberId_ == nullptr && this->rateLimitCount_ == nullptr && this->rateLimitPeriod_ == nullptr; };
      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
      inline OutboundCallNumber& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      // outboundCallNumberId Field Functions 
      bool hasOutboundCallNumberId() const { return this->outboundCallNumberId_ != nullptr;};
      void deleteOutboundCallNumberId() { this->outboundCallNumberId_ = nullptr;};
      inline string getOutboundCallNumberId() const { DARABONBA_PTR_GET_DEFAULT(outboundCallNumberId_, "") };
      inline OutboundCallNumber& setOutboundCallNumberId(string outboundCallNumberId) { DARABONBA_PTR_SET_VALUE(outboundCallNumberId_, outboundCallNumberId) };


      // rateLimitCount Field Functions 
      bool hasRateLimitCount() const { return this->rateLimitCount_ != nullptr;};
      void deleteRateLimitCount() { this->rateLimitCount_ = nullptr;};
      inline string getRateLimitCount() const { DARABONBA_PTR_GET_DEFAULT(rateLimitCount_, "") };
      inline OutboundCallNumber& setRateLimitCount(string rateLimitCount) { DARABONBA_PTR_SET_VALUE(rateLimitCount_, rateLimitCount) };


      // rateLimitPeriod Field Functions 
      bool hasRateLimitPeriod() const { return this->rateLimitPeriod_ != nullptr;};
      void deleteRateLimitPeriod() { this->rateLimitPeriod_ = nullptr;};
      inline string getRateLimitPeriod() const { DARABONBA_PTR_GET_DEFAULT(rateLimitPeriod_, "") };
      inline OutboundCallNumber& setRateLimitPeriod(string rateLimitPeriod) { DARABONBA_PTR_SET_VALUE(rateLimitPeriod_, rateLimitPeriod) };


    protected:
      shared_ptr<string> number_ {};
      shared_ptr<string> outboundCallNumberId_ {};
      shared_ptr<string> rateLimitCount_ {};
      shared_ptr<string> rateLimitPeriod_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->outboundCallNumber_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModifyOutboundCallNumberResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModifyOutboundCallNumberResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifyOutboundCallNumberResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // outboundCallNumber Field Functions 
    bool hasOutboundCallNumber() const { return this->outboundCallNumber_ != nullptr;};
    void deleteOutboundCallNumber() { this->outboundCallNumber_ = nullptr;};
    inline const ModifyOutboundCallNumberResponseBody::OutboundCallNumber & getOutboundCallNumber() const { DARABONBA_PTR_GET_CONST(outboundCallNumber_, ModifyOutboundCallNumberResponseBody::OutboundCallNumber) };
    inline ModifyOutboundCallNumberResponseBody::OutboundCallNumber getOutboundCallNumber() { DARABONBA_PTR_GET(outboundCallNumber_, ModifyOutboundCallNumberResponseBody::OutboundCallNumber) };
    inline ModifyOutboundCallNumberResponseBody& setOutboundCallNumber(const ModifyOutboundCallNumberResponseBody::OutboundCallNumber & outboundCallNumber) { DARABONBA_PTR_SET_VALUE(outboundCallNumber_, outboundCallNumber) };
    inline ModifyOutboundCallNumberResponseBody& setOutboundCallNumber(ModifyOutboundCallNumberResponseBody::OutboundCallNumber && outboundCallNumber) { DARABONBA_PTR_SET_RVALUE(outboundCallNumber_, outboundCallNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyOutboundCallNumberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModifyOutboundCallNumberResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ModifyOutboundCallNumberResponseBody::OutboundCallNumber> outboundCallNumber_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
