// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONCURRENTCONVERSATIONQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONCURRENTCONVERSATIONQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetConcurrentConversationQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConcurrentConversationQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MaxConcurrent, maxConcurrent_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RemainingConcurrent, remainingConcurrent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetConcurrentConversationQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrent, maxConcurrent_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RemainingConcurrent, remainingConcurrent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetConcurrentConversationQuotaResponseBody() = default ;
    GetConcurrentConversationQuotaResponseBody(const GetConcurrentConversationQuotaResponseBody &) = default ;
    GetConcurrentConversationQuotaResponseBody(GetConcurrentConversationQuotaResponseBody &&) = default ;
    GetConcurrentConversationQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConcurrentConversationQuotaResponseBody() = default ;
    GetConcurrentConversationQuotaResponseBody& operator=(const GetConcurrentConversationQuotaResponseBody &) = default ;
    GetConcurrentConversationQuotaResponseBody& operator=(GetConcurrentConversationQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->maxConcurrent_ == nullptr && this->message_ == nullptr && this->remainingConcurrent_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetConcurrentConversationQuotaResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetConcurrentConversationQuotaResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxConcurrent Field Functions 
    bool hasMaxConcurrent() const { return this->maxConcurrent_ != nullptr;};
    void deleteMaxConcurrent() { this->maxConcurrent_ = nullptr;};
    inline int32_t getMaxConcurrent() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrent_, 0) };
    inline GetConcurrentConversationQuotaResponseBody& setMaxConcurrent(int32_t maxConcurrent) { DARABONBA_PTR_SET_VALUE(maxConcurrent_, maxConcurrent) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConcurrentConversationQuotaResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // remainingConcurrent Field Functions 
    bool hasRemainingConcurrent() const { return this->remainingConcurrent_ != nullptr;};
    void deleteRemainingConcurrent() { this->remainingConcurrent_ = nullptr;};
    inline int32_t getRemainingConcurrent() const { DARABONBA_PTR_GET_DEFAULT(remainingConcurrent_, 0) };
    inline GetConcurrentConversationQuotaResponseBody& setRemainingConcurrent(int32_t remainingConcurrent) { DARABONBA_PTR_SET_VALUE(remainingConcurrent_, remainingConcurrent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConcurrentConversationQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetConcurrentConversationQuotaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    // maxConcurrent
    shared_ptr<int32_t> maxConcurrent_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> remainingConcurrent_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
