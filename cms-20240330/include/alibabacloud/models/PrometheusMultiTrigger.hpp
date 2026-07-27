// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMETHEUSMULTITRIGGER_HPP_
#define ALIBABACLOUD_MODELS_PROMETHEUSMULTITRIGGER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PrometheusSimpleExpression.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class PrometheusMultiTrigger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrometheusMultiTrigger& obj) { 
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(durationSecs, durationSecs_);
      DARABONBA_PTR_TO_JSON(expressionType, expressionType_);
      DARABONBA_PTR_TO_JSON(logicOperator, logicOperator_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(queryName, queryName_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, PrometheusMultiTrigger& obj) { 
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(durationSecs, durationSecs_);
      DARABONBA_PTR_FROM_JSON(expressionType, expressionType_);
      DARABONBA_PTR_FROM_JSON(logicOperator, logicOperator_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(queryName, queryName_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
    };
    PrometheusMultiTrigger() = default ;
    PrometheusMultiTrigger(const PrometheusMultiTrigger &) = default ;
    PrometheusMultiTrigger(PrometheusMultiTrigger &&) = default ;
    PrometheusMultiTrigger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrometheusMultiTrigger() = default ;
    PrometheusMultiTrigger& operator=(const PrometheusMultiTrigger &) = default ;
    PrometheusMultiTrigger& operator=(PrometheusMultiTrigger &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && this->durationSecs_ == nullptr && this->expressionType_ == nullptr && this->logicOperator_ == nullptr && this->operator_ == nullptr && this->queryName_ == nullptr
        && this->severity_ == nullptr && this->threshold_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<PrometheusSimpleExpression> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<PrometheusSimpleExpression>) };
    inline vector<PrometheusSimpleExpression> getConditions() { DARABONBA_PTR_GET(conditions_, vector<PrometheusSimpleExpression>) };
    inline PrometheusMultiTrigger& setConditions(const vector<PrometheusSimpleExpression> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline PrometheusMultiTrigger& setConditions(vector<PrometheusSimpleExpression> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // durationSecs Field Functions 
    bool hasDurationSecs() const { return this->durationSecs_ != nullptr;};
    void deleteDurationSecs() { this->durationSecs_ = nullptr;};
    inline int32_t getDurationSecs() const { DARABONBA_PTR_GET_DEFAULT(durationSecs_, 0) };
    inline PrometheusMultiTrigger& setDurationSecs(int32_t durationSecs) { DARABONBA_PTR_SET_VALUE(durationSecs_, durationSecs) };


    // expressionType Field Functions 
    bool hasExpressionType() const { return this->expressionType_ != nullptr;};
    void deleteExpressionType() { this->expressionType_ = nullptr;};
    inline string getExpressionType() const { DARABONBA_PTR_GET_DEFAULT(expressionType_, "") };
    inline PrometheusMultiTrigger& setExpressionType(string expressionType) { DARABONBA_PTR_SET_VALUE(expressionType_, expressionType) };


    // logicOperator Field Functions 
    bool hasLogicOperator() const { return this->logicOperator_ != nullptr;};
    void deleteLogicOperator() { this->logicOperator_ = nullptr;};
    inline string getLogicOperator() const { DARABONBA_PTR_GET_DEFAULT(logicOperator_, "") };
    inline PrometheusMultiTrigger& setLogicOperator(string logicOperator) { DARABONBA_PTR_SET_VALUE(logicOperator_, logicOperator) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline PrometheusMultiTrigger& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // queryName Field Functions 
    bool hasQueryName() const { return this->queryName_ != nullptr;};
    void deleteQueryName() { this->queryName_ = nullptr;};
    inline string getQueryName() const { DARABONBA_PTR_GET_DEFAULT(queryName_, "") };
    inline PrometheusMultiTrigger& setQueryName(string queryName) { DARABONBA_PTR_SET_VALUE(queryName_, queryName) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline PrometheusMultiTrigger& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline PrometheusMultiTrigger& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    shared_ptr<vector<PrometheusSimpleExpression>> conditions_ {};
    shared_ptr<int32_t> durationSecs_ {};
    shared_ptr<string> expressionType_ {};
    shared_ptr<string> logicOperator_ {};
    shared_ptr<string> operator_ {};
    shared_ptr<string> queryName_ {};
    shared_ptr<string> severity_ {};
    shared_ptr<double> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
