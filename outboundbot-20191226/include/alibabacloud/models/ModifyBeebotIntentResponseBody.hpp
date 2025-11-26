// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyBeebotIntentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBeebotIntentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BeebotRequestId, beebotRequestId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBeebotIntentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BeebotRequestId, beebotRequestId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ModifyBeebotIntentResponseBody() = default ;
    ModifyBeebotIntentResponseBody(const ModifyBeebotIntentResponseBody &) = default ;
    ModifyBeebotIntentResponseBody(ModifyBeebotIntentResponseBody &&) = default ;
    ModifyBeebotIntentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBeebotIntentResponseBody() = default ;
    ModifyBeebotIntentResponseBody& operator=(const ModifyBeebotIntentResponseBody &) = default ;
    ModifyBeebotIntentResponseBody& operator=(ModifyBeebotIntentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beebotRequestId_ == nullptr
        && return this->code_ == nullptr && return this->httpStatusCode_ == nullptr && return this->intentId_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // beebotRequestId Field Functions 
    bool hasBeebotRequestId() const { return this->beebotRequestId_ != nullptr;};
    void deleteBeebotRequestId() { this->beebotRequestId_ = nullptr;};
    inline string beebotRequestId() const { DARABONBA_PTR_GET_DEFAULT(beebotRequestId_, "") };
    inline ModifyBeebotIntentResponseBody& setBeebotRequestId(string beebotRequestId) { DARABONBA_PTR_SET_VALUE(beebotRequestId_, beebotRequestId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModifyBeebotIntentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModifyBeebotIntentResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline ModifyBeebotIntentResponseBody& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifyBeebotIntentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyBeebotIntentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModifyBeebotIntentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> beebotRequestId_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<int64_t> intentId_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
