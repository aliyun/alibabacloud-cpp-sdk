// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTMETRICRULETARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTMETRICRULETARGETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutMetricRuleTargetsResponseBodyFailData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutMetricRuleTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutMetricRuleTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FailData, failData_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PutMetricRuleTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FailData, failData_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PutMetricRuleTargetsResponseBody() = default ;
    PutMetricRuleTargetsResponseBody(const PutMetricRuleTargetsResponseBody &) = default ;
    PutMetricRuleTargetsResponseBody(PutMetricRuleTargetsResponseBody &&) = default ;
    PutMetricRuleTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutMetricRuleTargetsResponseBody() = default ;
    PutMetricRuleTargetsResponseBody& operator=(const PutMetricRuleTargetsResponseBody &) = default ;
    PutMetricRuleTargetsResponseBody& operator=(PutMetricRuleTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->failData_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PutMetricRuleTargetsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // failData Field Functions 
    bool hasFailData() const { return this->failData_ != nullptr;};
    void deleteFailData() { this->failData_ = nullptr;};
    inline const PutMetricRuleTargetsResponseBodyFailData & failData() const { DARABONBA_PTR_GET_CONST(failData_, PutMetricRuleTargetsResponseBodyFailData) };
    inline PutMetricRuleTargetsResponseBodyFailData failData() { DARABONBA_PTR_GET(failData_, PutMetricRuleTargetsResponseBodyFailData) };
    inline PutMetricRuleTargetsResponseBody& setFailData(const PutMetricRuleTargetsResponseBodyFailData & failData) { DARABONBA_PTR_SET_VALUE(failData_, failData) };
    inline PutMetricRuleTargetsResponseBody& setFailData(PutMetricRuleTargetsResponseBodyFailData && failData) { DARABONBA_PTR_SET_RVALUE(failData_, failData) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PutMetricRuleTargetsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutMetricRuleTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PutMetricRuleTargetsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The failed data.
    std::shared_ptr<PutMetricRuleTargetsResponseBodyFailData> failData_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
