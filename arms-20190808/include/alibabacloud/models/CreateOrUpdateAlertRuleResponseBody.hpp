// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOrUpdateAlertRuleResponseBodyAlertRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateAlertRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateAlertRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertRule, alertRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateAlertRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertRule, alertRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOrUpdateAlertRuleResponseBody() = default ;
    CreateOrUpdateAlertRuleResponseBody(const CreateOrUpdateAlertRuleResponseBody &) = default ;
    CreateOrUpdateAlertRuleResponseBody(CreateOrUpdateAlertRuleResponseBody &&) = default ;
    CreateOrUpdateAlertRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateAlertRuleResponseBody() = default ;
    CreateOrUpdateAlertRuleResponseBody& operator=(const CreateOrUpdateAlertRuleResponseBody &) = default ;
    CreateOrUpdateAlertRuleResponseBody& operator=(CreateOrUpdateAlertRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertRule_ != nullptr
        && this->requestId_ != nullptr; };
    // alertRule Field Functions 
    bool hasAlertRule() const { return this->alertRule_ != nullptr;};
    void deleteAlertRule() { this->alertRule_ = nullptr;};
    inline const CreateOrUpdateAlertRuleResponseBodyAlertRule & alertRule() const { DARABONBA_PTR_GET_CONST(alertRule_, CreateOrUpdateAlertRuleResponseBodyAlertRule) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule alertRule() { DARABONBA_PTR_GET(alertRule_, CreateOrUpdateAlertRuleResponseBodyAlertRule) };
    inline CreateOrUpdateAlertRuleResponseBody& setAlertRule(const CreateOrUpdateAlertRuleResponseBodyAlertRule & alertRule) { DARABONBA_PTR_SET_VALUE(alertRule_, alertRule) };
    inline CreateOrUpdateAlertRuleResponseBody& setAlertRule(CreateOrUpdateAlertRuleResponseBodyAlertRule && alertRule) { DARABONBA_PTR_SET_RVALUE(alertRule_, alertRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateAlertRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the alert rule.
    std::shared_ptr<CreateOrUpdateAlertRuleResponseBodyAlertRule> alertRule_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
