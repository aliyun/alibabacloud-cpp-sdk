// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTIMESUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUSHTIMESUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class PushTimesUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTimesUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ForceFatal, forceFatal_);
      DARABONBA_PTR_TO_JSON(HttpStateCode, httpStateCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PushTimesUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ForceFatal, forceFatal_);
      DARABONBA_PTR_FROM_JSON(HttpStateCode, httpStateCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PushTimesUsageResponseBody() = default ;
    PushTimesUsageResponseBody(const PushTimesUsageResponseBody &) = default ;
    PushTimesUsageResponseBody(PushTimesUsageResponseBody &&) = default ;
    PushTimesUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTimesUsageResponseBody() = default ;
    PushTimesUsageResponseBody& operator=(const PushTimesUsageResponseBody &) = default ;
    PushTimesUsageResponseBody& operator=(PushTimesUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->forceFatal_ == nullptr && this->httpStateCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline PushTimesUsageResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PushTimesUsageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // forceFatal Field Functions 
    bool hasForceFatal() const { return this->forceFatal_ != nullptr;};
    void deleteForceFatal() { this->forceFatal_ = nullptr;};
    inline bool getForceFatal() const { DARABONBA_PTR_GET_DEFAULT(forceFatal_, false) };
    inline PushTimesUsageResponseBody& setForceFatal(bool forceFatal) { DARABONBA_PTR_SET_VALUE(forceFatal_, forceFatal) };


    // httpStateCode Field Functions 
    bool hasHttpStateCode() const { return this->httpStateCode_ != nullptr;};
    void deleteHttpStateCode() { this->httpStateCode_ = nullptr;};
    inline string getHttpStateCode() const { DARABONBA_PTR_GET_DEFAULT(httpStateCode_, "") };
    inline PushTimesUsageResponseBody& setHttpStateCode(string httpStateCode) { DARABONBA_PTR_SET_VALUE(httpStateCode_, httpStateCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PushTimesUsageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PushTimesUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline PushTimesUsageResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PushTimesUsageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<bool> forceFatal_ {};
    shared_ptr<string> httpStateCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
