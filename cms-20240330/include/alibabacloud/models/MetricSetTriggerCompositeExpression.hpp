// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METRICSETTRIGGERCOMPOSITEEXPRESSION_HPP_
#define ALIBABACLOUD_MODELS_METRICSETTRIGGERCOMPOSITEEXPRESSION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MetricSetTriggerSimpleExpression.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class MetricSetTriggerCompositeExpression : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetricSetTriggerCompositeExpression& obj) { 
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(expressionType, expressionType_);
      DARABONBA_PTR_TO_JSON(logicOperator, logicOperator_);
    };
    friend void from_json(const Darabonba::Json& j, MetricSetTriggerCompositeExpression& obj) { 
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(expressionType, expressionType_);
      DARABONBA_PTR_FROM_JSON(logicOperator, logicOperator_);
    };
    MetricSetTriggerCompositeExpression() = default ;
    MetricSetTriggerCompositeExpression(const MetricSetTriggerCompositeExpression &) = default ;
    MetricSetTriggerCompositeExpression(MetricSetTriggerCompositeExpression &&) = default ;
    MetricSetTriggerCompositeExpression(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetricSetTriggerCompositeExpression() = default ;
    MetricSetTriggerCompositeExpression& operator=(const MetricSetTriggerCompositeExpression &) = default ;
    MetricSetTriggerCompositeExpression& operator=(MetricSetTriggerCompositeExpression &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && this->expressionType_ == nullptr && this->logicOperator_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<MetricSetTriggerSimpleExpression> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<MetricSetTriggerSimpleExpression>) };
    inline vector<MetricSetTriggerSimpleExpression> getConditions() { DARABONBA_PTR_GET(conditions_, vector<MetricSetTriggerSimpleExpression>) };
    inline MetricSetTriggerCompositeExpression& setConditions(const vector<MetricSetTriggerSimpleExpression> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline MetricSetTriggerCompositeExpression& setConditions(vector<MetricSetTriggerSimpleExpression> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // expressionType Field Functions 
    bool hasExpressionType() const { return this->expressionType_ != nullptr;};
    void deleteExpressionType() { this->expressionType_ = nullptr;};
    inline string getExpressionType() const { DARABONBA_PTR_GET_DEFAULT(expressionType_, "") };
    inline MetricSetTriggerCompositeExpression& setExpressionType(string expressionType) { DARABONBA_PTR_SET_VALUE(expressionType_, expressionType) };


    // logicOperator Field Functions 
    bool hasLogicOperator() const { return this->logicOperator_ != nullptr;};
    void deleteLogicOperator() { this->logicOperator_ = nullptr;};
    inline string getLogicOperator() const { DARABONBA_PTR_GET_DEFAULT(logicOperator_, "") };
    inline MetricSetTriggerCompositeExpression& setLogicOperator(string logicOperator) { DARABONBA_PTR_SET_VALUE(logicOperator_, logicOperator) };


  protected:
    shared_ptr<vector<MetricSetTriggerSimpleExpression>> conditions_ {};
    shared_ptr<string> expressionType_ {};
    shared_ptr<string> logicOperator_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
