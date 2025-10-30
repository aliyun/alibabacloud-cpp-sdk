// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEvaluationResultsResponseBodyResultsMetricResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationResultsResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationResultsResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(EvaluationTime, evaluationTime_);
      DARABONBA_PTR_TO_JSON(MetricResults, metricResults_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalScore, totalScore_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationResultsResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(EvaluationTime, evaluationTime_);
      DARABONBA_PTR_FROM_JSON(MetricResults, metricResults_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalScore, totalScore_);
    };
    ListEvaluationResultsResponseBodyResults() = default ;
    ListEvaluationResultsResponseBodyResults(const ListEvaluationResultsResponseBodyResults &) = default ;
    ListEvaluationResultsResponseBodyResults(ListEvaluationResultsResponseBodyResults &&) = default ;
    ListEvaluationResultsResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationResultsResponseBodyResults() = default ;
    ListEvaluationResultsResponseBodyResults& operator=(const ListEvaluationResultsResponseBodyResults &) = default ;
    ListEvaluationResultsResponseBodyResults& operator=(ListEvaluationResultsResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->evaluationTime_ == nullptr
        && return this->metricResults_ == nullptr && return this->status_ == nullptr && return this->totalScore_ == nullptr; };
    // evaluationTime Field Functions 
    bool hasEvaluationTime() const { return this->evaluationTime_ != nullptr;};
    void deleteEvaluationTime() { this->evaluationTime_ = nullptr;};
    inline string evaluationTime() const { DARABONBA_PTR_GET_DEFAULT(evaluationTime_, "") };
    inline ListEvaluationResultsResponseBodyResults& setEvaluationTime(string evaluationTime) { DARABONBA_PTR_SET_VALUE(evaluationTime_, evaluationTime) };


    // metricResults Field Functions 
    bool hasMetricResults() const { return this->metricResults_ != nullptr;};
    void deleteMetricResults() { this->metricResults_ = nullptr;};
    inline const vector<Models::ListEvaluationResultsResponseBodyResultsMetricResults> & metricResults() const { DARABONBA_PTR_GET_CONST(metricResults_, vector<Models::ListEvaluationResultsResponseBodyResultsMetricResults>) };
    inline vector<Models::ListEvaluationResultsResponseBodyResultsMetricResults> metricResults() { DARABONBA_PTR_GET(metricResults_, vector<Models::ListEvaluationResultsResponseBodyResultsMetricResults>) };
    inline ListEvaluationResultsResponseBodyResults& setMetricResults(const vector<Models::ListEvaluationResultsResponseBodyResultsMetricResults> & metricResults) { DARABONBA_PTR_SET_VALUE(metricResults_, metricResults) };
    inline ListEvaluationResultsResponseBodyResults& setMetricResults(vector<Models::ListEvaluationResultsResponseBodyResultsMetricResults> && metricResults) { DARABONBA_PTR_SET_RVALUE(metricResults_, metricResults) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEvaluationResultsResponseBodyResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalScore Field Functions 
    bool hasTotalScore() const { return this->totalScore_ != nullptr;};
    void deleteTotalScore() { this->totalScore_ = nullptr;};
    inline double totalScore() const { DARABONBA_PTR_GET_DEFAULT(totalScore_, 0.0) };
    inline ListEvaluationResultsResponseBodyResults& setTotalScore(double totalScore) { DARABONBA_PTR_SET_VALUE(totalScore_, totalScore) };


  protected:
    // The end time of the overall check. The time is displayed in UTC.
    std::shared_ptr<string> evaluationTime_ = nullptr;
    // The check result.
    std::shared_ptr<vector<Models::ListEvaluationResultsResponseBodyResultsMetricResults>> metricResults_ = nullptr;
    // The status of the overall check. Valid values:
    // 
    // *   Running: The check is in progress.
    // *   Finished: The check is complete.
    // *   failed: The check fails.
    std::shared_ptr<string> status_ = nullptr;
    // The overall score.
    std::shared_ptr<double> totalScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
