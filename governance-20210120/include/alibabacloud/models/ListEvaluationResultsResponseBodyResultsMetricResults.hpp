// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSRESPONSEBODYRESULTSMETRICRESULTS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSRESPONSEBODYRESULTSMETRICRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary.hpp>
#include <vector>
#include <alibabacloud/models/ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation.hpp>
#include <alibabacloud/models/ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo.hpp>
#include <alibabacloud/models/ListEvaluationResultsResponseBodyResultsMetricResultsResourcesSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationResultsResponseBodyResultsMetricResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationResultsResponseBodyResultsMetricResults& obj) { 
      DARABONBA_PTR_TO_JSON(AccountSummary, accountSummary_);
      DARABONBA_PTR_TO_JSON(AvailableRemediation, availableRemediation_);
      DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_TO_JSON(EvaluationTime, evaluationTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PotentialScoreIncrease, potentialScoreIncrease_);
      DARABONBA_PTR_TO_JSON(ResourcesSummary, resourcesSummary_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Risk, risk_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationResultsResponseBodyResultsMetricResults& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountSummary, accountSummary_);
      DARABONBA_PTR_FROM_JSON(AvailableRemediation, availableRemediation_);
      DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_FROM_JSON(EvaluationTime, evaluationTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PotentialScoreIncrease, potentialScoreIncrease_);
      DARABONBA_PTR_FROM_JSON(ResourcesSummary, resourcesSummary_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Risk, risk_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListEvaluationResultsResponseBodyResultsMetricResults() = default ;
    ListEvaluationResultsResponseBodyResultsMetricResults(const ListEvaluationResultsResponseBodyResultsMetricResults &) = default ;
    ListEvaluationResultsResponseBodyResultsMetricResults(ListEvaluationResultsResponseBodyResultsMetricResults &&) = default ;
    ListEvaluationResultsResponseBodyResultsMetricResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationResultsResponseBodyResultsMetricResults() = default ;
    ListEvaluationResultsResponseBodyResultsMetricResults& operator=(const ListEvaluationResultsResponseBodyResultsMetricResults &) = default ;
    ListEvaluationResultsResponseBodyResultsMetricResults& operator=(ListEvaluationResultsResponseBodyResultsMetricResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountSummary_ == nullptr
        && return this->availableRemediation_ == nullptr && return this->errorInfo_ == nullptr && return this->evaluationTime_ == nullptr && return this->id_ == nullptr && return this->potentialScoreIncrease_ == nullptr
        && return this->resourcesSummary_ == nullptr && return this->result_ == nullptr && return this->risk_ == nullptr && return this->status_ == nullptr; };
    // accountSummary Field Functions 
    bool hasAccountSummary() const { return this->accountSummary_ != nullptr;};
    void deleteAccountSummary() { this->accountSummary_ = nullptr;};
    inline const Models::ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary & accountSummary() const { DARABONBA_PTR_GET_CONST(accountSummary_, Models::ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary) };
    inline Models::ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary accountSummary() { DARABONBA_PTR_GET(accountSummary_, Models::ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary) };
    inline ListEvaluationResultsResponseBodyResultsMetricResults& setAccountSummary(const Models::ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary & accountSummary) { DARABONBA_PTR_SET_VALUE(accountSummary_, accountSummary) };
    inline ListEvaluationResultsResponseBodyResultsMetricResults& setAccountSummary(Models::ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary && accountSummary) { DARABONBA_PTR_SET_RVALUE(accountSummary_, accountSummary) };


    // availableRemediation Field Functions 
    bool hasAvailableRemediation() const { return this->availableRemediation_ != nullptr;};
    void deleteAvailableRemediation() { this->availableRemediation_ = nullptr;};
    inline const vector<Models::ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation> & availableRemediation() const { DARABONBA_PTR_GET_CONST(availableRemediation_, vector<Models::ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation>) };
    inline vector<Models::ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation> availableRemediation() { DARABONBA_PTR_GET(availableRemediation_, vector<Models::ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation>) };
    inline ListEvaluationResultsResponseBodyResultsMetricResults& setAvailableRemediation(const vector<Models::ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation> & availableRemediation) { DARABONBA_PTR_SET_VALUE(availableRemediation_, availableRemediation) };
    inline ListEvaluationResultsResponseBodyResultsMetricResults& setAvailableRemediation(vector<Models::ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation> && availableRemediation) { DARABONBA_PTR_SET_RVALUE(availableRemediation_, availableRemediation) };


    // errorInfo Field Functions 
    bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
    void deleteErrorInfo() { this->errorInfo_ = nullptr;};
    inline const Models::ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo & errorInfo() const { DARABONBA_PTR_GET_CONST(errorInfo_, Models::ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo) };
    inline Models::ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo errorInfo() { DARABONBA_PTR_GET(errorInfo_, Models::ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo) };
    inline ListEvaluationResultsResponseBodyResultsMetricResults& setErrorInfo(const Models::ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo & errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };
    inline ListEvaluationResultsResponseBodyResultsMetricResults& setErrorInfo(Models::ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo && errorInfo) { DARABONBA_PTR_SET_RVALUE(errorInfo_, errorInfo) };


    // evaluationTime Field Functions 
    bool hasEvaluationTime() const { return this->evaluationTime_ != nullptr;};
    void deleteEvaluationTime() { this->evaluationTime_ = nullptr;};
    inline string evaluationTime() const { DARABONBA_PTR_GET_DEFAULT(evaluationTime_, "") };
    inline ListEvaluationResultsResponseBodyResultsMetricResults& setEvaluationTime(string evaluationTime) { DARABONBA_PTR_SET_VALUE(evaluationTime_, evaluationTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListEvaluationResultsResponseBodyResultsMetricResults& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // potentialScoreIncrease Field Functions 
    bool hasPotentialScoreIncrease() const { return this->potentialScoreIncrease_ != nullptr;};
    void deletePotentialScoreIncrease() { this->potentialScoreIncrease_ = nullptr;};
    inline double potentialScoreIncrease() const { DARABONBA_PTR_GET_DEFAULT(potentialScoreIncrease_, 0.0) };
    inline ListEvaluationResultsResponseBodyResultsMetricResults& setPotentialScoreIncrease(double potentialScoreIncrease) { DARABONBA_PTR_SET_VALUE(potentialScoreIncrease_, potentialScoreIncrease) };


    // resourcesSummary Field Functions 
    bool hasResourcesSummary() const { return this->resourcesSummary_ != nullptr;};
    void deleteResourcesSummary() { this->resourcesSummary_ = nullptr;};
    inline const Models::ListEvaluationResultsResponseBodyResultsMetricResultsResourcesSummary & resourcesSummary() const { DARABONBA_PTR_GET_CONST(resourcesSummary_, Models::ListEvaluationResultsResponseBodyResultsMetricResultsResourcesSummary) };
    inline Models::ListEvaluationResultsResponseBodyResultsMetricResultsResourcesSummary resourcesSummary() { DARABONBA_PTR_GET(resourcesSummary_, Models::ListEvaluationResultsResponseBodyResultsMetricResultsResourcesSummary) };
    inline ListEvaluationResultsResponseBodyResultsMetricResults& setResourcesSummary(const Models::ListEvaluationResultsResponseBodyResultsMetricResultsResourcesSummary & resourcesSummary) { DARABONBA_PTR_SET_VALUE(resourcesSummary_, resourcesSummary) };
    inline ListEvaluationResultsResponseBodyResultsMetricResults& setResourcesSummary(Models::ListEvaluationResultsResponseBodyResultsMetricResultsResourcesSummary && resourcesSummary) { DARABONBA_PTR_SET_RVALUE(resourcesSummary_, resourcesSummary) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline double result() const { DARABONBA_PTR_GET_DEFAULT(result_, 0.0) };
    inline ListEvaluationResultsResponseBodyResultsMetricResults& setResult(double result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // risk Field Functions 
    bool hasRisk() const { return this->risk_ != nullptr;};
    void deleteRisk() { this->risk_ = nullptr;};
    inline string risk() const { DARABONBA_PTR_GET_DEFAULT(risk_, "") };
    inline ListEvaluationResultsResponseBodyResultsMetricResults& setRisk(string risk) { DARABONBA_PTR_SET_VALUE(risk_, risk) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEvaluationResultsResponseBodyResultsMetricResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<Models::ListEvaluationResultsResponseBodyResultsMetricResultsAccountSummary> accountSummary_ = nullptr;
    std::shared_ptr<vector<Models::ListEvaluationResultsResponseBodyResultsMetricResultsAvailableRemediation>> availableRemediation_ = nullptr;
    // The error information.
    // 
    // >  This parameter is returned only if the value of `Status` is `Failed`.
    std::shared_ptr<Models::ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo> errorInfo_ = nullptr;
    // The end time of the check item. The time is displayed in UTC.
    std::shared_ptr<string> evaluationTime_ = nullptr;
    // The ID of the check item.
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<double> potentialScoreIncrease_ = nullptr;
    // The checked resources.
    std::shared_ptr<Models::ListEvaluationResultsResponseBodyResultsMetricResultsResourcesSummary> resourcesSummary_ = nullptr;
    // The rate of the non-compliant resources.
    std::shared_ptr<double> result_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   Error: high risk
    // *   Warning: medium risk
    // *   None: no risk
    std::shared_ptr<string> risk_ = nullptr;
    // The status of the check item. Valid values:
    // 
    // *   Running: The check is in progress.
    // *   Finished: The check is complete.
    // *   failed: The check fails.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
