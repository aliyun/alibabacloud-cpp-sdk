// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCONFIGRULEEVALUATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCONFIGRULEEVALUATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class StartConfigRuleEvaluationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartConfigRuleEvaluationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(RevertEvaluation, revertEvaluation_);
    };
    friend void from_json(const Darabonba::Json& j, StartConfigRuleEvaluationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(RevertEvaluation, revertEvaluation_);
    };
    StartConfigRuleEvaluationRequest() = default ;
    StartConfigRuleEvaluationRequest(const StartConfigRuleEvaluationRequest &) = default ;
    StartConfigRuleEvaluationRequest(StartConfigRuleEvaluationRequest &&) = default ;
    StartConfigRuleEvaluationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartConfigRuleEvaluationRequest() = default ;
    StartConfigRuleEvaluationRequest& operator=(const StartConfigRuleEvaluationRequest &) = default ;
    StartConfigRuleEvaluationRequest& operator=(StartConfigRuleEvaluationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePackId_ == nullptr
        && this->configRuleId_ == nullptr && this->revertEvaluation_ == nullptr; };
    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline StartConfigRuleEvaluationRequest& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string getConfigRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline StartConfigRuleEvaluationRequest& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // revertEvaluation Field Functions 
    bool hasRevertEvaluation() const { return this->revertEvaluation_ != nullptr;};
    void deleteRevertEvaluation() { this->revertEvaluation_ = nullptr;};
    inline bool getRevertEvaluation() const { DARABONBA_PTR_GET_DEFAULT(revertEvaluation_, false) };
    inline StartConfigRuleEvaluationRequest& setRevertEvaluation(bool revertEvaluation) { DARABONBA_PTR_SET_VALUE(revertEvaluation_, revertEvaluation) };


  protected:
    // The compliance package ID.
    // 
    // For more information about how to obtain the ID of a compliance package, see [ListCompliancePacks](https://help.aliyun.com/document_detail/606968.html).
    // 
    // >  You must configure either the `CompliancePackId` or `ConfigRuleId` parameter.
    shared_ptr<string> compliancePackId_ {};
    // The rule ID.
    // 
    // You can call the [ListConfigRules](https://help.aliyun.com/document_detail/609222.html) operation to obtain the rule ID.
    // 
    // >  You must configure either the `CompliancePackId` or `ConfigRuleId` parameter.
    shared_ptr<string> configRuleId_ {};
    // Specifies whether to re-evaluate the ignored non-compliant resource. Valid values:
    // 
    // *   true: re-evaluates the ignored non-compliant resource based on the rule.
    // *   false (default): does not re-evaluate the ignored non-compliant resource based on the rule.
    shared_ptr<bool> revertEvaluation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
