// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROMETHEUSALERTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROMETHEUSALERTRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeletePrometheusAlertRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePrometheusAlertRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePrometheusAlertRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeletePrometheusAlertRuleResponseBody() = default ;
    DeletePrometheusAlertRuleResponseBody(const DeletePrometheusAlertRuleResponseBody &) = default ;
    DeletePrometheusAlertRuleResponseBody(DeletePrometheusAlertRuleResponseBody &&) = default ;
    DeletePrometheusAlertRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePrometheusAlertRuleResponseBody() = default ;
    DeletePrometheusAlertRuleResponseBody& operator=(const DeletePrometheusAlertRuleResponseBody &) = default ;
    DeletePrometheusAlertRuleResponseBody& operator=(DeletePrometheusAlertRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DeletePrometheusAlertRuleResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeletePrometheusAlertRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeletePrometheusAlertRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeletePrometheusAlertRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Status code. 200 means success, other status codes are exceptions.
    std::shared_ptr<int64_t> code_ = nullptr;
    // More Information.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the alert rule was deleted. Valid values:
    // 
    // *   `true`: The alert rule was deleted.
    // *   `false`: The alert rule failed to be deleted.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
