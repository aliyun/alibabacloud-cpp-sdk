// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGRULEEVALUATIONRESULTSRESPONSEBODYEVALUATIONRESULTSEVALUATIONRESULTLISTEVALUATIONRESULTIDENTIFIER_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGRULEEVALUATIONRESULTSRESPONSEBODYEVALUATIONRESULTSEVALUATIONRESULTLISTEVALUATIONRESULTIDENTIFIER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier& obj) { 
      DARABONBA_PTR_TO_JSON(EvaluationResultQualifier, evaluationResultQualifier_);
      DARABONBA_PTR_TO_JSON(OrderingTimestamp, orderingTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier& obj) { 
      DARABONBA_PTR_FROM_JSON(EvaluationResultQualifier, evaluationResultQualifier_);
      DARABONBA_PTR_FROM_JSON(OrderingTimestamp, orderingTimestamp_);
    };
    ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier() = default ;
    ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier(const ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier &) = default ;
    ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier(ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier &&) = default ;
    ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier() = default ;
    ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier& operator=(const ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier &) = default ;
    ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier& operator=(ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->evaluationResultQualifier_ == nullptr
        && return this->orderingTimestamp_ == nullptr; };
    // evaluationResultQualifier Field Functions 
    bool hasEvaluationResultQualifier() const { return this->evaluationResultQualifier_ != nullptr;};
    void deleteEvaluationResultQualifier() { this->evaluationResultQualifier_ = nullptr;};
    inline const Models::ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier & evaluationResultQualifier() const { DARABONBA_PTR_GET_CONST(evaluationResultQualifier_, Models::ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier) };
    inline Models::ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier evaluationResultQualifier() { DARABONBA_PTR_GET(evaluationResultQualifier_, Models::ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier) };
    inline ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier& setEvaluationResultQualifier(const Models::ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier & evaluationResultQualifier) { DARABONBA_PTR_SET_VALUE(evaluationResultQualifier_, evaluationResultQualifier) };
    inline ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier& setEvaluationResultQualifier(Models::ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier && evaluationResultQualifier) { DARABONBA_PTR_SET_RVALUE(evaluationResultQualifier_, evaluationResultQualifier) };


    // orderingTimestamp Field Functions 
    bool hasOrderingTimestamp() const { return this->orderingTimestamp_ != nullptr;};
    void deleteOrderingTimestamp() { this->orderingTimestamp_ = nullptr;};
    inline int64_t orderingTimestamp() const { DARABONBA_PTR_GET_DEFAULT(orderingTimestamp_, 0L) };
    inline ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier& setOrderingTimestamp(int64_t orderingTimestamp) { DARABONBA_PTR_SET_VALUE(orderingTimestamp_, orderingTimestamp) };


  protected:
    // The information about the evaluated resource in the compliance evaluation result.
    std::shared_ptr<Models::ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier> evaluationResultQualifier_ = nullptr;
    // The timestamp when the compliance evaluation was performed. Unit: milliseconds.
    // 
    // >  This timestamp indicates the time when the rule was triggered. You can obtain the timestamp from the `ConfigRuleInvokedTimestamp` parameter.
    std::shared_ptr<int64_t> orderingTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
