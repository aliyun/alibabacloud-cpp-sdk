// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    ListEvaluationResultsResponseBody() = default ;
    ListEvaluationResultsResponseBody(const ListEvaluationResultsResponseBody &) = default ;
    ListEvaluationResultsResponseBody(ListEvaluationResultsResponseBody &&) = default ;
    ListEvaluationResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationResultsResponseBody() = default ;
    ListEvaluationResultsResponseBody& operator=(const ListEvaluationResultsResponseBody &) = default ;
    ListEvaluationResultsResponseBody& operator=(ListEvaluationResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(EvaluationTime, evaluationTime_);
        DARABONBA_PTR_TO_JSON(MetricResults, metricResults_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalScore, totalScore_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(EvaluationTime, evaluationTime_);
        DARABONBA_PTR_FROM_JSON(MetricResults, metricResults_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalScore, totalScore_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MetricResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MetricResults& obj) { 
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
        friend void from_json(const Darabonba::Json& j, MetricResults& obj) { 
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
        MetricResults() = default ;
        MetricResults(const MetricResults &) = default ;
        MetricResults(MetricResults &&) = default ;
        MetricResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MetricResults() = default ;
        MetricResults& operator=(const MetricResults &) = default ;
        MetricResults& operator=(MetricResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResourcesSummary : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourcesSummary& obj) { 
            DARABONBA_PTR_TO_JSON(NonCompliant, nonCompliant_);
          };
          friend void from_json(const Darabonba::Json& j, ResourcesSummary& obj) { 
            DARABONBA_PTR_FROM_JSON(NonCompliant, nonCompliant_);
          };
          ResourcesSummary() = default ;
          ResourcesSummary(const ResourcesSummary &) = default ;
          ResourcesSummary(ResourcesSummary &&) = default ;
          ResourcesSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourcesSummary() = default ;
          ResourcesSummary& operator=(const ResourcesSummary &) = default ;
          ResourcesSummary& operator=(ResourcesSummary &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->nonCompliant_ == nullptr; };
          // nonCompliant Field Functions 
          bool hasNonCompliant() const { return this->nonCompliant_ != nullptr;};
          void deleteNonCompliant() { this->nonCompliant_ = nullptr;};
          inline int32_t getNonCompliant() const { DARABONBA_PTR_GET_DEFAULT(nonCompliant_, 0) };
          inline ResourcesSummary& setNonCompliant(int32_t nonCompliant) { DARABONBA_PTR_SET_VALUE(nonCompliant_, nonCompliant) };


        protected:
          // The number of non-compliant resources.
          shared_ptr<int32_t> nonCompliant_ {};
        };

        class ErrorInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ErrorInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Message, message_);
          };
          friend void from_json(const Darabonba::Json& j, ErrorInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
          };
          ErrorInfo() = default ;
          ErrorInfo(const ErrorInfo &) = default ;
          ErrorInfo(ErrorInfo &&) = default ;
          ErrorInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ErrorInfo() = default ;
          ErrorInfo& operator=(const ErrorInfo &) = default ;
          ErrorInfo& operator=(ErrorInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline ErrorInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline ErrorInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        protected:
          // The error code.
          shared_ptr<string> code_ {};
          // The error message.
          shared_ptr<string> message_ {};
        };

        class AvailableRemediation : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AvailableRemediation& obj) { 
            DARABONBA_PTR_TO_JSON(RemediationTemplateId, remediationTemplateId_);
          };
          friend void from_json(const Darabonba::Json& j, AvailableRemediation& obj) { 
            DARABONBA_PTR_FROM_JSON(RemediationTemplateId, remediationTemplateId_);
          };
          AvailableRemediation() = default ;
          AvailableRemediation(const AvailableRemediation &) = default ;
          AvailableRemediation(AvailableRemediation &&) = default ;
          AvailableRemediation(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AvailableRemediation() = default ;
          AvailableRemediation& operator=(const AvailableRemediation &) = default ;
          AvailableRemediation& operator=(AvailableRemediation &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->remediationTemplateId_ == nullptr; };
          // remediationTemplateId Field Functions 
          bool hasRemediationTemplateId() const { return this->remediationTemplateId_ != nullptr;};
          void deleteRemediationTemplateId() { this->remediationTemplateId_ = nullptr;};
          inline string getRemediationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(remediationTemplateId_, "") };
          inline AvailableRemediation& setRemediationTemplateId(string remediationTemplateId) { DARABONBA_PTR_SET_VALUE(remediationTemplateId_, remediationTemplateId) };


        protected:
          shared_ptr<string> remediationTemplateId_ {};
        };

        class AccountSummary : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AccountSummary& obj) { 
            DARABONBA_PTR_TO_JSON(NonCompliant, nonCompliant_);
          };
          friend void from_json(const Darabonba::Json& j, AccountSummary& obj) { 
            DARABONBA_PTR_FROM_JSON(NonCompliant, nonCompliant_);
          };
          AccountSummary() = default ;
          AccountSummary(const AccountSummary &) = default ;
          AccountSummary(AccountSummary &&) = default ;
          AccountSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AccountSummary() = default ;
          AccountSummary& operator=(const AccountSummary &) = default ;
          AccountSummary& operator=(AccountSummary &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->nonCompliant_ == nullptr; };
          // nonCompliant Field Functions 
          bool hasNonCompliant() const { return this->nonCompliant_ != nullptr;};
          void deleteNonCompliant() { this->nonCompliant_ = nullptr;};
          inline int32_t getNonCompliant() const { DARABONBA_PTR_GET_DEFAULT(nonCompliant_, 0) };
          inline AccountSummary& setNonCompliant(int32_t nonCompliant) { DARABONBA_PTR_SET_VALUE(nonCompliant_, nonCompliant) };


        protected:
          shared_ptr<int32_t> nonCompliant_ {};
        };

        virtual bool empty() const override { return this->accountSummary_ == nullptr
        && this->availableRemediation_ == nullptr && this->errorInfo_ == nullptr && this->evaluationTime_ == nullptr && this->id_ == nullptr && this->potentialScoreIncrease_ == nullptr
        && this->resourcesSummary_ == nullptr && this->result_ == nullptr && this->risk_ == nullptr && this->status_ == nullptr; };
        // accountSummary Field Functions 
        bool hasAccountSummary() const { return this->accountSummary_ != nullptr;};
        void deleteAccountSummary() { this->accountSummary_ = nullptr;};
        inline const MetricResults::AccountSummary & getAccountSummary() const { DARABONBA_PTR_GET_CONST(accountSummary_, MetricResults::AccountSummary) };
        inline MetricResults::AccountSummary getAccountSummary() { DARABONBA_PTR_GET(accountSummary_, MetricResults::AccountSummary) };
        inline MetricResults& setAccountSummary(const MetricResults::AccountSummary & accountSummary) { DARABONBA_PTR_SET_VALUE(accountSummary_, accountSummary) };
        inline MetricResults& setAccountSummary(MetricResults::AccountSummary && accountSummary) { DARABONBA_PTR_SET_RVALUE(accountSummary_, accountSummary) };


        // availableRemediation Field Functions 
        bool hasAvailableRemediation() const { return this->availableRemediation_ != nullptr;};
        void deleteAvailableRemediation() { this->availableRemediation_ = nullptr;};
        inline const vector<MetricResults::AvailableRemediation> & getAvailableRemediation() const { DARABONBA_PTR_GET_CONST(availableRemediation_, vector<MetricResults::AvailableRemediation>) };
        inline vector<MetricResults::AvailableRemediation> getAvailableRemediation() { DARABONBA_PTR_GET(availableRemediation_, vector<MetricResults::AvailableRemediation>) };
        inline MetricResults& setAvailableRemediation(const vector<MetricResults::AvailableRemediation> & availableRemediation) { DARABONBA_PTR_SET_VALUE(availableRemediation_, availableRemediation) };
        inline MetricResults& setAvailableRemediation(vector<MetricResults::AvailableRemediation> && availableRemediation) { DARABONBA_PTR_SET_RVALUE(availableRemediation_, availableRemediation) };


        // errorInfo Field Functions 
        bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
        void deleteErrorInfo() { this->errorInfo_ = nullptr;};
        inline const MetricResults::ErrorInfo & getErrorInfo() const { DARABONBA_PTR_GET_CONST(errorInfo_, MetricResults::ErrorInfo) };
        inline MetricResults::ErrorInfo getErrorInfo() { DARABONBA_PTR_GET(errorInfo_, MetricResults::ErrorInfo) };
        inline MetricResults& setErrorInfo(const MetricResults::ErrorInfo & errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };
        inline MetricResults& setErrorInfo(MetricResults::ErrorInfo && errorInfo) { DARABONBA_PTR_SET_RVALUE(errorInfo_, errorInfo) };


        // evaluationTime Field Functions 
        bool hasEvaluationTime() const { return this->evaluationTime_ != nullptr;};
        void deleteEvaluationTime() { this->evaluationTime_ = nullptr;};
        inline string getEvaluationTime() const { DARABONBA_PTR_GET_DEFAULT(evaluationTime_, "") };
        inline MetricResults& setEvaluationTime(string evaluationTime) { DARABONBA_PTR_SET_VALUE(evaluationTime_, evaluationTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline MetricResults& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // potentialScoreIncrease Field Functions 
        bool hasPotentialScoreIncrease() const { return this->potentialScoreIncrease_ != nullptr;};
        void deletePotentialScoreIncrease() { this->potentialScoreIncrease_ = nullptr;};
        inline double getPotentialScoreIncrease() const { DARABONBA_PTR_GET_DEFAULT(potentialScoreIncrease_, 0.0) };
        inline MetricResults& setPotentialScoreIncrease(double potentialScoreIncrease) { DARABONBA_PTR_SET_VALUE(potentialScoreIncrease_, potentialScoreIncrease) };


        // resourcesSummary Field Functions 
        bool hasResourcesSummary() const { return this->resourcesSummary_ != nullptr;};
        void deleteResourcesSummary() { this->resourcesSummary_ = nullptr;};
        inline const MetricResults::ResourcesSummary & getResourcesSummary() const { DARABONBA_PTR_GET_CONST(resourcesSummary_, MetricResults::ResourcesSummary) };
        inline MetricResults::ResourcesSummary getResourcesSummary() { DARABONBA_PTR_GET(resourcesSummary_, MetricResults::ResourcesSummary) };
        inline MetricResults& setResourcesSummary(const MetricResults::ResourcesSummary & resourcesSummary) { DARABONBA_PTR_SET_VALUE(resourcesSummary_, resourcesSummary) };
        inline MetricResults& setResourcesSummary(MetricResults::ResourcesSummary && resourcesSummary) { DARABONBA_PTR_SET_RVALUE(resourcesSummary_, resourcesSummary) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline double getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, 0.0) };
        inline MetricResults& setResult(double result) { DARABONBA_PTR_SET_VALUE(result_, result) };


        // risk Field Functions 
        bool hasRisk() const { return this->risk_ != nullptr;};
        void deleteRisk() { this->risk_ = nullptr;};
        inline string getRisk() const { DARABONBA_PTR_GET_DEFAULT(risk_, "") };
        inline MetricResults& setRisk(string risk) { DARABONBA_PTR_SET_VALUE(risk_, risk) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline MetricResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<MetricResults::AccountSummary> accountSummary_ {};
        shared_ptr<vector<MetricResults::AvailableRemediation>> availableRemediation_ {};
        // The error information.
        // 
        // >  This parameter is returned only if the value of `Status` is `Failed`.
        shared_ptr<MetricResults::ErrorInfo> errorInfo_ {};
        // The end time of the check item. The time is displayed in UTC.
        shared_ptr<string> evaluationTime_ {};
        // The ID of the check item.
        shared_ptr<string> id_ {};
        shared_ptr<double> potentialScoreIncrease_ {};
        // The checked resources.
        shared_ptr<MetricResults::ResourcesSummary> resourcesSummary_ {};
        // The rate of the non-compliant resources.
        shared_ptr<double> result_ {};
        // The risk level. Valid values:
        // 
        // *   Error: high risk
        // *   Warning: medium risk
        // *   None: no risk
        shared_ptr<string> risk_ {};
        // The status of the check item. Valid values:
        // 
        // *   Running: The check is in progress.
        // *   Finished: The check is complete.
        // *   failed: The check fails.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->evaluationTime_ == nullptr
        && this->metricResults_ == nullptr && this->status_ == nullptr && this->totalScore_ == nullptr; };
      // evaluationTime Field Functions 
      bool hasEvaluationTime() const { return this->evaluationTime_ != nullptr;};
      void deleteEvaluationTime() { this->evaluationTime_ = nullptr;};
      inline string getEvaluationTime() const { DARABONBA_PTR_GET_DEFAULT(evaluationTime_, "") };
      inline Results& setEvaluationTime(string evaluationTime) { DARABONBA_PTR_SET_VALUE(evaluationTime_, evaluationTime) };


      // metricResults Field Functions 
      bool hasMetricResults() const { return this->metricResults_ != nullptr;};
      void deleteMetricResults() { this->metricResults_ = nullptr;};
      inline const vector<Results::MetricResults> & getMetricResults() const { DARABONBA_PTR_GET_CONST(metricResults_, vector<Results::MetricResults>) };
      inline vector<Results::MetricResults> getMetricResults() { DARABONBA_PTR_GET(metricResults_, vector<Results::MetricResults>) };
      inline Results& setMetricResults(const vector<Results::MetricResults> & metricResults) { DARABONBA_PTR_SET_VALUE(metricResults_, metricResults) };
      inline Results& setMetricResults(vector<Results::MetricResults> && metricResults) { DARABONBA_PTR_SET_RVALUE(metricResults_, metricResults) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Results& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalScore Field Functions 
      bool hasTotalScore() const { return this->totalScore_ != nullptr;};
      void deleteTotalScore() { this->totalScore_ = nullptr;};
      inline double getTotalScore() const { DARABONBA_PTR_GET_DEFAULT(totalScore_, 0.0) };
      inline Results& setTotalScore(double totalScore) { DARABONBA_PTR_SET_VALUE(totalScore_, totalScore) };


    protected:
      // The end time of the overall check. The time is displayed in UTC.
      shared_ptr<string> evaluationTime_ {};
      // The check result.
      shared_ptr<vector<Results::MetricResults>> metricResults_ {};
      // The status of the overall check. Valid values:
      // 
      // *   Running: The check is in progress.
      // *   Finished: The check is complete.
      // *   failed: The check fails.
      shared_ptr<string> status_ {};
      // The overall score.
      shared_ptr<double> totalScore_ {};
    };

    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->requestId_ == nullptr && this->results_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline ListEvaluationResultsResponseBody& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEvaluationResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const ListEvaluationResultsResponseBody::Results & getResults() const { DARABONBA_PTR_GET_CONST(results_, ListEvaluationResultsResponseBody::Results) };
    inline ListEvaluationResultsResponseBody::Results getResults() { DARABONBA_PTR_GET(results_, ListEvaluationResultsResponseBody::Results) };
    inline ListEvaluationResultsResponseBody& setResults(const ListEvaluationResultsResponseBody::Results & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ListEvaluationResultsResponseBody& setResults(ListEvaluationResultsResponseBody::Results && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The Alibaba Cloud account ID of the member.
    shared_ptr<int64_t> accountId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The check results, including the status of the overall check and the results of check items.
    shared_ptr<ListEvaluationResultsResponseBody::Results> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
