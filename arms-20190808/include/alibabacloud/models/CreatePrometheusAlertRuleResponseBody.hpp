// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMETHEUSALERTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMETHEUSALERTRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreatePrometheusAlertRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrometheusAlertRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PrometheusAlertRule, prometheusAlertRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrometheusAlertRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PrometheusAlertRule, prometheusAlertRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreatePrometheusAlertRuleResponseBody() = default ;
    CreatePrometheusAlertRuleResponseBody(const CreatePrometheusAlertRuleResponseBody &) = default ;
    CreatePrometheusAlertRuleResponseBody(CreatePrometheusAlertRuleResponseBody &&) = default ;
    CreatePrometheusAlertRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrometheusAlertRuleResponseBody() = default ;
    CreatePrometheusAlertRuleResponseBody& operator=(const CreatePrometheusAlertRuleResponseBody &) = default ;
    CreatePrometheusAlertRuleResponseBody& operator=(CreatePrometheusAlertRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->prometheusAlertRule_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline CreatePrometheusAlertRuleResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreatePrometheusAlertRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // prometheusAlertRule Field Functions 
    bool hasPrometheusAlertRule() const { return this->prometheusAlertRule_ != nullptr;};
    void deletePrometheusAlertRule() { this->prometheusAlertRule_ = nullptr;};
    inline const CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule & prometheusAlertRule() const { DARABONBA_PTR_GET_CONST(prometheusAlertRule_, CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule) };
    inline CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule prometheusAlertRule() { DARABONBA_PTR_GET(prometheusAlertRule_, CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule) };
    inline CreatePrometheusAlertRuleResponseBody& setPrometheusAlertRule(const CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule & prometheusAlertRule) { DARABONBA_PTR_SET_VALUE(prometheusAlertRule_, prometheusAlertRule) };
    inline CreatePrometheusAlertRuleResponseBody& setPrometheusAlertRule(CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule && prometheusAlertRule) { DARABONBA_PTR_SET_RVALUE(prometheusAlertRule_, prometheusAlertRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePrometheusAlertRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreatePrometheusAlertRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful.
    std::shared_ptr<int64_t> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The returned struct.
    std::shared_ptr<CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule> prometheusAlertRule_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
