// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGRULEEVALUATIONSTATISTICSRESPONSEBODYEVALUATIONRESULTS_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGRULEEVALUATIONSTATISTICSRESPONSEBODYEVALUATIONRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(NonCompliantResourceCnt, nonCompliantResourceCnt_);
      DARABONBA_PTR_TO_JSON(NonCompliantRuleCnt, nonCompliantRuleCnt_);
      DARABONBA_PTR_TO_JSON(StatisticDate, statisticDate_);
      DARABONBA_PTR_TO_JSON(TotalResourceCnt, totalResourceCnt_);
      DARABONBA_PTR_TO_JSON(TotalRuleCnt, totalRuleCnt_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(NonCompliantResourceCnt, nonCompliantResourceCnt_);
      DARABONBA_PTR_FROM_JSON(NonCompliantRuleCnt, nonCompliantRuleCnt_);
      DARABONBA_PTR_FROM_JSON(StatisticDate, statisticDate_);
      DARABONBA_PTR_FROM_JSON(TotalResourceCnt, totalResourceCnt_);
      DARABONBA_PTR_FROM_JSON(TotalRuleCnt, totalRuleCnt_);
    };
    ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults() = default ;
    ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults(const ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults &) = default ;
    ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults(ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults &&) = default ;
    ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults() = default ;
    ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults& operator=(const ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults &) = default ;
    ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults& operator=(ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && return this->nonCompliantResourceCnt_ == nullptr && return this->nonCompliantRuleCnt_ == nullptr && return this->statisticDate_ == nullptr && return this->totalResourceCnt_ == nullptr && return this->totalRuleCnt_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // nonCompliantResourceCnt Field Functions 
    bool hasNonCompliantResourceCnt() const { return this->nonCompliantResourceCnt_ != nullptr;};
    void deleteNonCompliantResourceCnt() { this->nonCompliantResourceCnt_ = nullptr;};
    inline int32_t nonCompliantResourceCnt() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantResourceCnt_, 0) };
    inline ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults& setNonCompliantResourceCnt(int32_t nonCompliantResourceCnt) { DARABONBA_PTR_SET_VALUE(nonCompliantResourceCnt_, nonCompliantResourceCnt) };


    // nonCompliantRuleCnt Field Functions 
    bool hasNonCompliantRuleCnt() const { return this->nonCompliantRuleCnt_ != nullptr;};
    void deleteNonCompliantRuleCnt() { this->nonCompliantRuleCnt_ = nullptr;};
    inline int32_t nonCompliantRuleCnt() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantRuleCnt_, 0) };
    inline ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults& setNonCompliantRuleCnt(int32_t nonCompliantRuleCnt) { DARABONBA_PTR_SET_VALUE(nonCompliantRuleCnt_, nonCompliantRuleCnt) };


    // statisticDate Field Functions 
    bool hasStatisticDate() const { return this->statisticDate_ != nullptr;};
    void deleteStatisticDate() { this->statisticDate_ = nullptr;};
    inline string statisticDate() const { DARABONBA_PTR_GET_DEFAULT(statisticDate_, "") };
    inline ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults& setStatisticDate(string statisticDate) { DARABONBA_PTR_SET_VALUE(statisticDate_, statisticDate) };


    // totalResourceCnt Field Functions 
    bool hasTotalResourceCnt() const { return this->totalResourceCnt_ != nullptr;};
    void deleteTotalResourceCnt() { this->totalResourceCnt_ = nullptr;};
    inline int32_t totalResourceCnt() const { DARABONBA_PTR_GET_DEFAULT(totalResourceCnt_, 0) };
    inline ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults& setTotalResourceCnt(int32_t totalResourceCnt) { DARABONBA_PTR_SET_VALUE(totalResourceCnt_, totalResourceCnt) };


    // totalRuleCnt Field Functions 
    bool hasTotalRuleCnt() const { return this->totalRuleCnt_ != nullptr;};
    void deleteTotalRuleCnt() { this->totalRuleCnt_ = nullptr;};
    inline int32_t totalRuleCnt() const { DARABONBA_PTR_GET_DEFAULT(totalRuleCnt_, 0) };
    inline ListAggregateConfigRuleEvaluationStatisticsResponseBodyEvaluationResults& setTotalRuleCnt(int32_t totalRuleCnt) { DARABONBA_PTR_SET_VALUE(totalRuleCnt_, totalRuleCnt) };


  protected:
    // The ID of the account group.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The number of resources that are evaluated as non-compliant.
    std::shared_ptr<int32_t> nonCompliantResourceCnt_ = nullptr;
    // The number of rules based on which resources are evaluated as non-compliant.
    std::shared_ptr<int32_t> nonCompliantRuleCnt_ = nullptr;
    // The date on which the statistics are obtained.
    std::shared_ptr<string> statisticDate_ = nullptr;
    // The total number of resources.
    std::shared_ptr<int32_t> totalResourceCnt_ = nullptr;
    // The total number of rules.
    std::shared_ptr<int32_t> totalRuleCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
