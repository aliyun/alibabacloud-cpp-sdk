// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGRULEEVALUATIONSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGRULEEVALUATIONSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateConfigRuleEvaluationStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateConfigRuleEvaluationStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EvaluationResults, evaluationResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateConfigRuleEvaluationStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EvaluationResults, evaluationResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAggregateConfigRuleEvaluationStatisticsResponseBody() = default ;
    ListAggregateConfigRuleEvaluationStatisticsResponseBody(const ListAggregateConfigRuleEvaluationStatisticsResponseBody &) = default ;
    ListAggregateConfigRuleEvaluationStatisticsResponseBody(ListAggregateConfigRuleEvaluationStatisticsResponseBody &&) = default ;
    ListAggregateConfigRuleEvaluationStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateConfigRuleEvaluationStatisticsResponseBody() = default ;
    ListAggregateConfigRuleEvaluationStatisticsResponseBody& operator=(const ListAggregateConfigRuleEvaluationStatisticsResponseBody &) = default ;
    ListAggregateConfigRuleEvaluationStatisticsResponseBody& operator=(ListAggregateConfigRuleEvaluationStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EvaluationResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EvaluationResults& obj) { 
        DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
        DARABONBA_PTR_TO_JSON(NonCompliantResourceCnt, nonCompliantResourceCnt_);
        DARABONBA_PTR_TO_JSON(NonCompliantRuleCnt, nonCompliantRuleCnt_);
        DARABONBA_PTR_TO_JSON(StatisticDate, statisticDate_);
        DARABONBA_PTR_TO_JSON(TotalResourceCnt, totalResourceCnt_);
        DARABONBA_PTR_TO_JSON(TotalRuleCnt, totalRuleCnt_);
      };
      friend void from_json(const Darabonba::Json& j, EvaluationResults& obj) { 
        DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
        DARABONBA_PTR_FROM_JSON(NonCompliantResourceCnt, nonCompliantResourceCnt_);
        DARABONBA_PTR_FROM_JSON(NonCompliantRuleCnt, nonCompliantRuleCnt_);
        DARABONBA_PTR_FROM_JSON(StatisticDate, statisticDate_);
        DARABONBA_PTR_FROM_JSON(TotalResourceCnt, totalResourceCnt_);
        DARABONBA_PTR_FROM_JSON(TotalRuleCnt, totalRuleCnt_);
      };
      EvaluationResults() = default ;
      EvaluationResults(const EvaluationResults &) = default ;
      EvaluationResults(EvaluationResults &&) = default ;
      EvaluationResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EvaluationResults() = default ;
      EvaluationResults& operator=(const EvaluationResults &) = default ;
      EvaluationResults& operator=(EvaluationResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->nonCompliantResourceCnt_ == nullptr && this->nonCompliantRuleCnt_ == nullptr && this->statisticDate_ == nullptr && this->totalResourceCnt_ == nullptr && this->totalRuleCnt_ == nullptr; };
      // aggregatorId Field Functions 
      bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
      void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
      inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
      inline EvaluationResults& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


      // nonCompliantResourceCnt Field Functions 
      bool hasNonCompliantResourceCnt() const { return this->nonCompliantResourceCnt_ != nullptr;};
      void deleteNonCompliantResourceCnt() { this->nonCompliantResourceCnt_ = nullptr;};
      inline int32_t getNonCompliantResourceCnt() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantResourceCnt_, 0) };
      inline EvaluationResults& setNonCompliantResourceCnt(int32_t nonCompliantResourceCnt) { DARABONBA_PTR_SET_VALUE(nonCompliantResourceCnt_, nonCompliantResourceCnt) };


      // nonCompliantRuleCnt Field Functions 
      bool hasNonCompliantRuleCnt() const { return this->nonCompliantRuleCnt_ != nullptr;};
      void deleteNonCompliantRuleCnt() { this->nonCompliantRuleCnt_ = nullptr;};
      inline int32_t getNonCompliantRuleCnt() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantRuleCnt_, 0) };
      inline EvaluationResults& setNonCompliantRuleCnt(int32_t nonCompliantRuleCnt) { DARABONBA_PTR_SET_VALUE(nonCompliantRuleCnt_, nonCompliantRuleCnt) };


      // statisticDate Field Functions 
      bool hasStatisticDate() const { return this->statisticDate_ != nullptr;};
      void deleteStatisticDate() { this->statisticDate_ = nullptr;};
      inline string getStatisticDate() const { DARABONBA_PTR_GET_DEFAULT(statisticDate_, "") };
      inline EvaluationResults& setStatisticDate(string statisticDate) { DARABONBA_PTR_SET_VALUE(statisticDate_, statisticDate) };


      // totalResourceCnt Field Functions 
      bool hasTotalResourceCnt() const { return this->totalResourceCnt_ != nullptr;};
      void deleteTotalResourceCnt() { this->totalResourceCnt_ = nullptr;};
      inline int32_t getTotalResourceCnt() const { DARABONBA_PTR_GET_DEFAULT(totalResourceCnt_, 0) };
      inline EvaluationResults& setTotalResourceCnt(int32_t totalResourceCnt) { DARABONBA_PTR_SET_VALUE(totalResourceCnt_, totalResourceCnt) };


      // totalRuleCnt Field Functions 
      bool hasTotalRuleCnt() const { return this->totalRuleCnt_ != nullptr;};
      void deleteTotalRuleCnt() { this->totalRuleCnt_ = nullptr;};
      inline int32_t getTotalRuleCnt() const { DARABONBA_PTR_GET_DEFAULT(totalRuleCnt_, 0) };
      inline EvaluationResults& setTotalRuleCnt(int32_t totalRuleCnt) { DARABONBA_PTR_SET_VALUE(totalRuleCnt_, totalRuleCnt) };


    protected:
      // The ID of the account group.
      shared_ptr<string> aggregatorId_ {};
      // The number of resources that are evaluated as non-compliant.
      shared_ptr<int32_t> nonCompliantResourceCnt_ {};
      // The number of rules based on which resources are evaluated as non-compliant.
      shared_ptr<int32_t> nonCompliantRuleCnt_ {};
      // The date on which the statistics are obtained.
      shared_ptr<string> statisticDate_ {};
      // The total number of resources.
      shared_ptr<int32_t> totalResourceCnt_ {};
      // The total number of rules.
      shared_ptr<int32_t> totalRuleCnt_ {};
    };

    virtual bool empty() const override { return this->evaluationResults_ == nullptr
        && this->requestId_ == nullptr; };
    // evaluationResults Field Functions 
    bool hasEvaluationResults() const { return this->evaluationResults_ != nullptr;};
    void deleteEvaluationResults() { this->evaluationResults_ = nullptr;};
    inline const vector<ListAggregateConfigRuleEvaluationStatisticsResponseBody::EvaluationResults> & getEvaluationResults() const { DARABONBA_PTR_GET_CONST(evaluationResults_, vector<ListAggregateConfigRuleEvaluationStatisticsResponseBody::EvaluationResults>) };
    inline vector<ListAggregateConfigRuleEvaluationStatisticsResponseBody::EvaluationResults> getEvaluationResults() { DARABONBA_PTR_GET(evaluationResults_, vector<ListAggregateConfigRuleEvaluationStatisticsResponseBody::EvaluationResults>) };
    inline ListAggregateConfigRuleEvaluationStatisticsResponseBody& setEvaluationResults(const vector<ListAggregateConfigRuleEvaluationStatisticsResponseBody::EvaluationResults> & evaluationResults) { DARABONBA_PTR_SET_VALUE(evaluationResults_, evaluationResults) };
    inline ListAggregateConfigRuleEvaluationStatisticsResponseBody& setEvaluationResults(vector<ListAggregateConfigRuleEvaluationStatisticsResponseBody::EvaluationResults> && evaluationResults) { DARABONBA_PTR_SET_RVALUE(evaluationResults_, evaluationResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggregateConfigRuleEvaluationStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics of compliance evaluation results.
    shared_ptr<vector<ListAggregateConfigRuleEvaluationStatisticsResponseBody::EvaluationResults>> evaluationResults_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
