// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAGGREGATECONFIGRULEEVALUATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTAGGREGATECONFIGRULEEVALUATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class StartAggregateConfigRuleEvaluationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAggregateConfigRuleEvaluationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(RevertEvaluation, revertEvaluation_);
    };
    friend void from_json(const Darabonba::Json& j, StartAggregateConfigRuleEvaluationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(RevertEvaluation, revertEvaluation_);
    };
    StartAggregateConfigRuleEvaluationRequest() = default ;
    StartAggregateConfigRuleEvaluationRequest(const StartAggregateConfigRuleEvaluationRequest &) = default ;
    StartAggregateConfigRuleEvaluationRequest(StartAggregateConfigRuleEvaluationRequest &&) = default ;
    StartAggregateConfigRuleEvaluationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAggregateConfigRuleEvaluationRequest() = default ;
    StartAggregateConfigRuleEvaluationRequest& operator=(const StartAggregateConfigRuleEvaluationRequest &) = default ;
    StartAggregateConfigRuleEvaluationRequest& operator=(StartAggregateConfigRuleEvaluationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && return this->compliancePackId_ == nullptr && return this->configRuleId_ == nullptr && return this->revertEvaluation_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline StartAggregateConfigRuleEvaluationRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string compliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline StartAggregateConfigRuleEvaluationRequest& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline StartAggregateConfigRuleEvaluationRequest& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // revertEvaluation Field Functions 
    bool hasRevertEvaluation() const { return this->revertEvaluation_ != nullptr;};
    void deleteRevertEvaluation() { this->revertEvaluation_ = nullptr;};
    inline bool revertEvaluation() const { DARABONBA_PTR_GET_DEFAULT(revertEvaluation_, false) };
    inline StartAggregateConfigRuleEvaluationRequest& setRevertEvaluation(bool revertEvaluation) { DARABONBA_PTR_SET_VALUE(revertEvaluation_, revertEvaluation) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The ID of the compliance package.
    // 
    // For more information about how to obtain the ID of a compliance package, see [ListAggregateCompliancePacks](https://help.aliyun.com/document_detail/262059.html).
    // 
    // > You must configure either the `CompliancePackId` or `ConfigRuleId` parameter.
    std::shared_ptr<string> compliancePackId_ = nullptr;
    // The rule ID.
    // 
    // For more information about how to query the ID of a rule, see [ListAggregateConfigRules](https://help.aliyun.com/document_detail/264148.html).
    // 
    // >  You must configure either the `CompliancePackId` or `ConfigRuleId` parameter.
    std::shared_ptr<string> configRuleId_ = nullptr;
    // Specifies whether to re-evaluate the ignored non-compliant resource. Valid values:
    // 
    // *   true: re-evaluates the ignored non-compliant resource based on the rule.
    // *   false (default): does not re-evaluate the ignored non-compliant resource based on the rule.
    std::shared_ptr<bool> revertEvaluation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
