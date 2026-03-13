// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEEVALUATIONREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEEVALUATIONREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class GenerateEvaluationReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateEvaluationReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(EvaluationScore, evaluationScore_);
      DARABONBA_PTR_TO_JSON(EvaluationTime, evaluationTime_);
      DARABONBA_PTR_TO_JSON(Finished, finished_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
      DARABONBA_PTR_TO_JSON(ReportUrl, reportUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateEvaluationReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(EvaluationScore, evaluationScore_);
      DARABONBA_PTR_FROM_JSON(EvaluationTime, evaluationTime_);
      DARABONBA_PTR_FROM_JSON(Finished, finished_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
      DARABONBA_PTR_FROM_JSON(ReportUrl, reportUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateEvaluationReportResponseBody() = default ;
    GenerateEvaluationReportResponseBody(const GenerateEvaluationReportResponseBody &) = default ;
    GenerateEvaluationReportResponseBody(GenerateEvaluationReportResponseBody &&) = default ;
    GenerateEvaluationReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateEvaluationReportResponseBody() = default ;
    GenerateEvaluationReportResponseBody& operator=(const GenerateEvaluationReportResponseBody &) = default ;
    GenerateEvaluationReportResponseBody& operator=(GenerateEvaluationReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->evaluationScore_ == nullptr && this->evaluationTime_ == nullptr && this->finished_ == nullptr && this->reportType_ == nullptr && this->reportUrl_ == nullptr
        && this->requestId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline GenerateEvaluationReportResponseBody& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // evaluationScore Field Functions 
    bool hasEvaluationScore() const { return this->evaluationScore_ != nullptr;};
    void deleteEvaluationScore() { this->evaluationScore_ = nullptr;};
    inline double getEvaluationScore() const { DARABONBA_PTR_GET_DEFAULT(evaluationScore_, 0.0) };
    inline GenerateEvaluationReportResponseBody& setEvaluationScore(double evaluationScore) { DARABONBA_PTR_SET_VALUE(evaluationScore_, evaluationScore) };


    // evaluationTime Field Functions 
    bool hasEvaluationTime() const { return this->evaluationTime_ != nullptr;};
    void deleteEvaluationTime() { this->evaluationTime_ = nullptr;};
    inline string getEvaluationTime() const { DARABONBA_PTR_GET_DEFAULT(evaluationTime_, "") };
    inline GenerateEvaluationReportResponseBody& setEvaluationTime(string evaluationTime) { DARABONBA_PTR_SET_VALUE(evaluationTime_, evaluationTime) };


    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline string getFinished() const { DARABONBA_PTR_GET_DEFAULT(finished_, "") };
    inline GenerateEvaluationReportResponseBody& setFinished(string finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline GenerateEvaluationReportResponseBody& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


    // reportUrl Field Functions 
    bool hasReportUrl() const { return this->reportUrl_ != nullptr;};
    void deleteReportUrl() { this->reportUrl_ = nullptr;};
    inline string getReportUrl() const { DARABONBA_PTR_GET_DEFAULT(reportUrl_, "") };
    inline GenerateEvaluationReportResponseBody& setReportUrl(string reportUrl) { DARABONBA_PTR_SET_VALUE(reportUrl_, reportUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateEvaluationReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> accountId_ {};
    shared_ptr<double> evaluationScore_ {};
    shared_ptr<string> evaluationTime_ {};
    shared_ptr<string> finished_ {};
    shared_ptr<string> reportType_ {};
    shared_ptr<string> reportUrl_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
