// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRYRUNCONFIGRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DRYRUNCONFIGRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DryRunConfigRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DryRunConfigRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleConditionContext, ruleConditionContext_);
    };
    friend void from_json(const Darabonba::Json& j, DryRunConfigRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleConditionContext, ruleConditionContext_);
    };
    DryRunConfigRuleResponseBody() = default ;
    DryRunConfigRuleResponseBody(const DryRunConfigRuleResponseBody &) = default ;
    DryRunConfigRuleResponseBody(DryRunConfigRuleResponseBody &&) = default ;
    DryRunConfigRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DryRunConfigRuleResponseBody() = default ;
    DryRunConfigRuleResponseBody& operator=(const DryRunConfigRuleResponseBody &) = default ;
    DryRunConfigRuleResponseBody& operator=(DryRunConfigRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceType_ == nullptr
        && this->requestId_ == nullptr && this->ruleConditionContext_ == nullptr; };
    // complianceType Field Functions 
    bool hasComplianceType() const { return this->complianceType_ != nullptr;};
    void deleteComplianceType() { this->complianceType_ = nullptr;};
    inline string getComplianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
    inline DryRunConfigRuleResponseBody& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DryRunConfigRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleConditionContext Field Functions 
    bool hasRuleConditionContext() const { return this->ruleConditionContext_ != nullptr;};
    void deleteRuleConditionContext() { this->ruleConditionContext_ = nullptr;};
    inline string getRuleConditionContext() const { DARABONBA_PTR_GET_DEFAULT(ruleConditionContext_, "") };
    inline DryRunConfigRuleResponseBody& setRuleConditionContext(string ruleConditionContext) { DARABONBA_PTR_SET_VALUE(ruleConditionContext_, ruleConditionContext) };


  protected:
    shared_ptr<string> complianceType_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> ruleConditionContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
