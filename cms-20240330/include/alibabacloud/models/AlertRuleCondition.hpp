// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULECONDITION_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULECONDITION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AlertRuleConditionCaseList.hpp>
#include <alibabacloud/models/AlertRuleConditionCompareList.hpp>
#include <alibabacloud/models/AlertRuleConditionCompositeEscalation.hpp>
#include <alibabacloud/models/AlertRuleConditionExpressEscalation.hpp>
#include <alibabacloud/models/AlertRuleConditionSimpleEscalation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleCondition& obj) { 
      DARABONBA_PTR_TO_JSON(alertCount, alertCount_);
      DARABONBA_PTR_TO_JSON(caseList, caseList_);
      DARABONBA_PTR_TO_JSON(compareList, compareList_);
      DARABONBA_PTR_TO_JSON(compositeEscalation, compositeEscalation_);
      DARABONBA_PTR_TO_JSON(escalationType, escalationType_);
      DARABONBA_PTR_TO_JSON(expressEscalation, expressEscalation_);
      DARABONBA_PTR_TO_JSON(noDataAlertLevel, noDataAlertLevel_);
      DARABONBA_PTR_TO_JSON(noDataAppendValue, noDataAppendValue_);
      DARABONBA_PTR_TO_JSON(noDataPolicy, noDataPolicy_);
      DARABONBA_PTR_TO_JSON(oper, oper_);
      DARABONBA_PTR_TO_JSON(relation, relation_);
      DARABONBA_PTR_TO_JSON(simpleEscalation, simpleEscalation_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(alertCount, alertCount_);
      DARABONBA_PTR_FROM_JSON(caseList, caseList_);
      DARABONBA_PTR_FROM_JSON(compareList, compareList_);
      DARABONBA_PTR_FROM_JSON(compositeEscalation, compositeEscalation_);
      DARABONBA_PTR_FROM_JSON(escalationType, escalationType_);
      DARABONBA_PTR_FROM_JSON(expressEscalation, expressEscalation_);
      DARABONBA_PTR_FROM_JSON(noDataAlertLevel, noDataAlertLevel_);
      DARABONBA_PTR_FROM_JSON(noDataAppendValue, noDataAppendValue_);
      DARABONBA_PTR_FROM_JSON(noDataPolicy, noDataPolicy_);
      DARABONBA_PTR_FROM_JSON(oper, oper_);
      DARABONBA_PTR_FROM_JSON(relation, relation_);
      DARABONBA_PTR_FROM_JSON(simpleEscalation, simpleEscalation_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    AlertRuleCondition() = default ;
    AlertRuleCondition(const AlertRuleCondition &) = default ;
    AlertRuleCondition(AlertRuleCondition &&) = default ;
    AlertRuleCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleCondition() = default ;
    AlertRuleCondition& operator=(const AlertRuleCondition &) = default ;
    AlertRuleCondition& operator=(AlertRuleCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertCount_ != nullptr
        && this->caseList_ != nullptr && this->compareList_ != nullptr && this->compositeEscalation_ != nullptr && this->escalationType_ != nullptr && this->expressEscalation_ != nullptr
        && this->noDataAlertLevel_ != nullptr && this->noDataAppendValue_ != nullptr && this->noDataPolicy_ != nullptr && this->oper_ != nullptr && this->relation_ != nullptr
        && this->simpleEscalation_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // alertCount Field Functions 
    bool hasAlertCount() const { return this->alertCount_ != nullptr;};
    void deleteAlertCount() { this->alertCount_ = nullptr;};
    inline int32_t alertCount() const { DARABONBA_PTR_GET_DEFAULT(alertCount_, 0) };
    inline AlertRuleCondition& setAlertCount(int32_t alertCount) { DARABONBA_PTR_SET_VALUE(alertCount_, alertCount) };


    // caseList Field Functions 
    bool hasCaseList() const { return this->caseList_ != nullptr;};
    void deleteCaseList() { this->caseList_ = nullptr;};
    inline const vector<AlertRuleConditionCaseList> & caseList() const { DARABONBA_PTR_GET_CONST(caseList_, vector<AlertRuleConditionCaseList>) };
    inline vector<AlertRuleConditionCaseList> caseList() { DARABONBA_PTR_GET(caseList_, vector<AlertRuleConditionCaseList>) };
    inline AlertRuleCondition& setCaseList(const vector<AlertRuleConditionCaseList> & caseList) { DARABONBA_PTR_SET_VALUE(caseList_, caseList) };
    inline AlertRuleCondition& setCaseList(vector<AlertRuleConditionCaseList> && caseList) { DARABONBA_PTR_SET_RVALUE(caseList_, caseList) };


    // compareList Field Functions 
    bool hasCompareList() const { return this->compareList_ != nullptr;};
    void deleteCompareList() { this->compareList_ = nullptr;};
    inline const vector<AlertRuleConditionCompareList> & compareList() const { DARABONBA_PTR_GET_CONST(compareList_, vector<AlertRuleConditionCompareList>) };
    inline vector<AlertRuleConditionCompareList> compareList() { DARABONBA_PTR_GET(compareList_, vector<AlertRuleConditionCompareList>) };
    inline AlertRuleCondition& setCompareList(const vector<AlertRuleConditionCompareList> & compareList) { DARABONBA_PTR_SET_VALUE(compareList_, compareList) };
    inline AlertRuleCondition& setCompareList(vector<AlertRuleConditionCompareList> && compareList) { DARABONBA_PTR_SET_RVALUE(compareList_, compareList) };


    // compositeEscalation Field Functions 
    bool hasCompositeEscalation() const { return this->compositeEscalation_ != nullptr;};
    void deleteCompositeEscalation() { this->compositeEscalation_ = nullptr;};
    inline const AlertRuleConditionCompositeEscalation & compositeEscalation() const { DARABONBA_PTR_GET_CONST(compositeEscalation_, AlertRuleConditionCompositeEscalation) };
    inline AlertRuleConditionCompositeEscalation compositeEscalation() { DARABONBA_PTR_GET(compositeEscalation_, AlertRuleConditionCompositeEscalation) };
    inline AlertRuleCondition& setCompositeEscalation(const AlertRuleConditionCompositeEscalation & compositeEscalation) { DARABONBA_PTR_SET_VALUE(compositeEscalation_, compositeEscalation) };
    inline AlertRuleCondition& setCompositeEscalation(AlertRuleConditionCompositeEscalation && compositeEscalation) { DARABONBA_PTR_SET_RVALUE(compositeEscalation_, compositeEscalation) };


    // escalationType Field Functions 
    bool hasEscalationType() const { return this->escalationType_ != nullptr;};
    void deleteEscalationType() { this->escalationType_ = nullptr;};
    inline string escalationType() const { DARABONBA_PTR_GET_DEFAULT(escalationType_, "") };
    inline AlertRuleCondition& setEscalationType(string escalationType) { DARABONBA_PTR_SET_VALUE(escalationType_, escalationType) };


    // expressEscalation Field Functions 
    bool hasExpressEscalation() const { return this->expressEscalation_ != nullptr;};
    void deleteExpressEscalation() { this->expressEscalation_ = nullptr;};
    inline const AlertRuleConditionExpressEscalation & expressEscalation() const { DARABONBA_PTR_GET_CONST(expressEscalation_, AlertRuleConditionExpressEscalation) };
    inline AlertRuleConditionExpressEscalation expressEscalation() { DARABONBA_PTR_GET(expressEscalation_, AlertRuleConditionExpressEscalation) };
    inline AlertRuleCondition& setExpressEscalation(const AlertRuleConditionExpressEscalation & expressEscalation) { DARABONBA_PTR_SET_VALUE(expressEscalation_, expressEscalation) };
    inline AlertRuleCondition& setExpressEscalation(AlertRuleConditionExpressEscalation && expressEscalation) { DARABONBA_PTR_SET_RVALUE(expressEscalation_, expressEscalation) };


    // noDataAlertLevel Field Functions 
    bool hasNoDataAlertLevel() const { return this->noDataAlertLevel_ != nullptr;};
    void deleteNoDataAlertLevel() { this->noDataAlertLevel_ = nullptr;};
    inline string noDataAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(noDataAlertLevel_, "") };
    inline AlertRuleCondition& setNoDataAlertLevel(string noDataAlertLevel) { DARABONBA_PTR_SET_VALUE(noDataAlertLevel_, noDataAlertLevel) };


    // noDataAppendValue Field Functions 
    bool hasNoDataAppendValue() const { return this->noDataAppendValue_ != nullptr;};
    void deleteNoDataAppendValue() { this->noDataAppendValue_ = nullptr;};
    inline string noDataAppendValue() const { DARABONBA_PTR_GET_DEFAULT(noDataAppendValue_, "") };
    inline AlertRuleCondition& setNoDataAppendValue(string noDataAppendValue) { DARABONBA_PTR_SET_VALUE(noDataAppendValue_, noDataAppendValue) };


    // noDataPolicy Field Functions 
    bool hasNoDataPolicy() const { return this->noDataPolicy_ != nullptr;};
    void deleteNoDataPolicy() { this->noDataPolicy_ = nullptr;};
    inline string noDataPolicy() const { DARABONBA_PTR_GET_DEFAULT(noDataPolicy_, "") };
    inline AlertRuleCondition& setNoDataPolicy(string noDataPolicy) { DARABONBA_PTR_SET_VALUE(noDataPolicy_, noDataPolicy) };


    // oper Field Functions 
    bool hasOper() const { return this->oper_ != nullptr;};
    void deleteOper() { this->oper_ = nullptr;};
    inline string oper() const { DARABONBA_PTR_GET_DEFAULT(oper_, "") };
    inline AlertRuleCondition& setOper(string oper) { DARABONBA_PTR_SET_VALUE(oper_, oper) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string relation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline AlertRuleCondition& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


    // simpleEscalation Field Functions 
    bool hasSimpleEscalation() const { return this->simpleEscalation_ != nullptr;};
    void deleteSimpleEscalation() { this->simpleEscalation_ = nullptr;};
    inline const AlertRuleConditionSimpleEscalation & simpleEscalation() const { DARABONBA_PTR_GET_CONST(simpleEscalation_, AlertRuleConditionSimpleEscalation) };
    inline AlertRuleConditionSimpleEscalation simpleEscalation() { DARABONBA_PTR_GET(simpleEscalation_, AlertRuleConditionSimpleEscalation) };
    inline AlertRuleCondition& setSimpleEscalation(const AlertRuleConditionSimpleEscalation & simpleEscalation) { DARABONBA_PTR_SET_VALUE(simpleEscalation_, simpleEscalation) };
    inline AlertRuleCondition& setSimpleEscalation(AlertRuleConditionSimpleEscalation && simpleEscalation) { DARABONBA_PTR_SET_RVALUE(simpleEscalation_, simpleEscalation) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AlertRuleCondition& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline AlertRuleCondition& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // type=SLS_CONDITION时指定，满足条件几次后告警，默认为1
    std::shared_ptr<int32_t> alertCount_ = nullptr;
    // type=SLS_CONDITION时指定
    std::shared_ptr<vector<AlertRuleConditionCaseList>> caseList_ = nullptr;
    std::shared_ptr<vector<AlertRuleConditionCompareList>> compareList_ = nullptr;
    std::shared_ptr<AlertRuleConditionCompositeEscalation> compositeEscalation_ = nullptr;
    std::shared_ptr<string> escalationType_ = nullptr;
    std::shared_ptr<AlertRuleConditionExpressEscalation> expressEscalation_ = nullptr;
    // 无数据时按什么级别告警，不指定则不对无数据报警
    std::shared_ptr<string> noDataAlertLevel_ = nullptr;
    std::shared_ptr<string> noDataAppendValue_ = nullptr;
    std::shared_ptr<string> noDataPolicy_ = nullptr;
    std::shared_ptr<string> oper_ = nullptr;
    std::shared_ptr<string> relation_ = nullptr;
    std::shared_ptr<AlertRuleConditionSimpleEscalation> simpleEscalation_ = nullptr;
    // 规则条件类型，可选值：SLS_CONDITION
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<double> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
