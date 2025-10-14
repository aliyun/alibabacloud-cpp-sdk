// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutResourceMetricRulesResponseBodyFailedListResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutResourceMetricRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutResourceMetricRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FailedListResult, failedListResult_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FailedListResult, failedListResult_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PutResourceMetricRulesResponseBody() = default ;
    PutResourceMetricRulesResponseBody(const PutResourceMetricRulesResponseBody &) = default ;
    PutResourceMetricRulesResponseBody(PutResourceMetricRulesResponseBody &&) = default ;
    PutResourceMetricRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutResourceMetricRulesResponseBody() = default ;
    PutResourceMetricRulesResponseBody& operator=(const PutResourceMetricRulesResponseBody &) = default ;
    PutResourceMetricRulesResponseBody& operator=(PutResourceMetricRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->failedListResult_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PutResourceMetricRulesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // failedListResult Field Functions 
    bool hasFailedListResult() const { return this->failedListResult_ != nullptr;};
    void deleteFailedListResult() { this->failedListResult_ = nullptr;};
    inline const PutResourceMetricRulesResponseBodyFailedListResult & failedListResult() const { DARABONBA_PTR_GET_CONST(failedListResult_, PutResourceMetricRulesResponseBodyFailedListResult) };
    inline PutResourceMetricRulesResponseBodyFailedListResult failedListResult() { DARABONBA_PTR_GET(failedListResult_, PutResourceMetricRulesResponseBodyFailedListResult) };
    inline PutResourceMetricRulesResponseBody& setFailedListResult(const PutResourceMetricRulesResponseBodyFailedListResult & failedListResult) { DARABONBA_PTR_SET_VALUE(failedListResult_, failedListResult) };
    inline PutResourceMetricRulesResponseBody& setFailedListResult(PutResourceMetricRulesResponseBodyFailedListResult && failedListResult) { DARABONBA_PTR_SET_RVALUE(failedListResult_, failedListResult) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PutResourceMetricRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutResourceMetricRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PutResourceMetricRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The alert rules that failed to be created for the resource.
    std::shared_ptr<PutResourceMetricRulesResponseBodyFailedListResult> failedListResult_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
