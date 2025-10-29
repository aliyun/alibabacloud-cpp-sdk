// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALERTRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAlertRuleResponseBodyAlertRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetAlertRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertRule, alertRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertRule, alertRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAlertRuleResponseBody() = default ;
    GetAlertRuleResponseBody(const GetAlertRuleResponseBody &) = default ;
    GetAlertRuleResponseBody(GetAlertRuleResponseBody &&) = default ;
    GetAlertRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertRuleResponseBody() = default ;
    GetAlertRuleResponseBody& operator=(const GetAlertRuleResponseBody &) = default ;
    GetAlertRuleResponseBody& operator=(GetAlertRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertRule_ == nullptr
        && return this->requestId_ == nullptr; };
    // alertRule Field Functions 
    bool hasAlertRule() const { return this->alertRule_ != nullptr;};
    void deleteAlertRule() { this->alertRule_ = nullptr;};
    inline const GetAlertRuleResponseBodyAlertRule & alertRule() const { DARABONBA_PTR_GET_CONST(alertRule_, GetAlertRuleResponseBodyAlertRule) };
    inline GetAlertRuleResponseBodyAlertRule alertRule() { DARABONBA_PTR_GET(alertRule_, GetAlertRuleResponseBodyAlertRule) };
    inline GetAlertRuleResponseBody& setAlertRule(const GetAlertRuleResponseBodyAlertRule & alertRule) { DARABONBA_PTR_SET_VALUE(alertRule_, alertRule) };
    inline GetAlertRuleResponseBody& setAlertRule(GetAlertRuleResponseBodyAlertRule && alertRule) { DARABONBA_PTR_SET_RVALUE(alertRule_, alertRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlertRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the rule.
    std::shared_ptr<GetAlertRuleResponseBodyAlertRule> alertRule_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
