// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCONTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCONTEXTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class SearchContextResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchContextResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(auditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(callId, callId_);
      DARABONBA_ANY_TO_JSON(diagnostics, diagnostics_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(recallEventId, recallEventId_);
      DARABONBA_PTR_TO_JSON(relevance, relevance_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(results, results_);
      DARABONBA_PTR_TO_JSON(rewrittenQueries, rewrittenQueries_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(strategyVersion, strategyVersion_);
    };
    friend void from_json(const Darabonba::Json& j, SearchContextResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(auditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(callId, callId_);
      DARABONBA_ANY_FROM_JSON(diagnostics, diagnostics_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(recallEventId, recallEventId_);
      DARABONBA_PTR_FROM_JSON(relevance, relevance_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(results, results_);
      DARABONBA_PTR_FROM_JSON(rewrittenQueries, rewrittenQueries_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(strategyVersion, strategyVersion_);
    };
    SearchContextResponseBody() = default ;
    SearchContextResponseBody(const SearchContextResponseBody &) = default ;
    SearchContextResponseBody(SearchContextResponseBody &&) = default ;
    SearchContextResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchContextResponseBody() = default ;
    SearchContextResponseBody& operator=(const SearchContextResponseBody &) = default ;
    SearchContextResponseBody& operator=(SearchContextResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditStatus_ == nullptr
        && this->callId_ == nullptr && this->diagnostics_ == nullptr && this->mode_ == nullptr && this->recallEventId_ == nullptr && this->relevance_ == nullptr
        && this->requestId_ == nullptr && this->results_ == nullptr && this->rewrittenQueries_ == nullptr && this->status_ == nullptr && this->strategyVersion_ == nullptr; };
    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline string getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
    inline SearchContextResponseBody& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline SearchContextResponseBody& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // diagnostics Field Functions 
    bool hasDiagnostics() const { return this->diagnostics_ != nullptr;};
    void deleteDiagnostics() { this->diagnostics_ = nullptr;};
    inline     const Darabonba::Json & getDiagnostics() const { DARABONBA_GET(diagnostics_) };
    Darabonba::Json & getDiagnostics() { DARABONBA_GET(diagnostics_) };
    inline SearchContextResponseBody& setDiagnostics(const Darabonba::Json & diagnostics) { DARABONBA_SET_VALUE(diagnostics_, diagnostics) };
    inline SearchContextResponseBody& setDiagnostics(Darabonba::Json && diagnostics) { DARABONBA_SET_RVALUE(diagnostics_, diagnostics) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline SearchContextResponseBody& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // recallEventId Field Functions 
    bool hasRecallEventId() const { return this->recallEventId_ != nullptr;};
    void deleteRecallEventId() { this->recallEventId_ = nullptr;};
    inline string getRecallEventId() const { DARABONBA_PTR_GET_DEFAULT(recallEventId_, "") };
    inline SearchContextResponseBody& setRecallEventId(string recallEventId) { DARABONBA_PTR_SET_VALUE(recallEventId_, recallEventId) };


    // relevance Field Functions 
    bool hasRelevance() const { return this->relevance_ != nullptr;};
    void deleteRelevance() { this->relevance_ = nullptr;};
    inline const vector<Darabonba::Json> & getRelevance() const { DARABONBA_PTR_GET_CONST(relevance_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getRelevance() { DARABONBA_PTR_GET(relevance_, vector<Darabonba::Json>) };
    inline SearchContextResponseBody& setRelevance(const vector<Darabonba::Json> & relevance) { DARABONBA_PTR_SET_VALUE(relevance_, relevance) };
    inline SearchContextResponseBody& setRelevance(vector<Darabonba::Json> && relevance) { DARABONBA_PTR_SET_RVALUE(relevance_, relevance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchContextResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Darabonba::Json> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getResults() { DARABONBA_PTR_GET(results_, vector<Darabonba::Json>) };
    inline SearchContextResponseBody& setResults(const vector<Darabonba::Json> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline SearchContextResponseBody& setResults(vector<Darabonba::Json> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // rewrittenQueries Field Functions 
    bool hasRewrittenQueries() const { return this->rewrittenQueries_ != nullptr;};
    void deleteRewrittenQueries() { this->rewrittenQueries_ = nullptr;};
    inline const vector<string> & getRewrittenQueries() const { DARABONBA_PTR_GET_CONST(rewrittenQueries_, vector<string>) };
    inline vector<string> getRewrittenQueries() { DARABONBA_PTR_GET(rewrittenQueries_, vector<string>) };
    inline SearchContextResponseBody& setRewrittenQueries(const vector<string> & rewrittenQueries) { DARABONBA_PTR_SET_VALUE(rewrittenQueries_, rewrittenQueries) };
    inline SearchContextResponseBody& setRewrittenQueries(vector<string> && rewrittenQueries) { DARABONBA_PTR_SET_RVALUE(rewrittenQueries_, rewrittenQueries) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SearchContextResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyVersion Field Functions 
    bool hasStrategyVersion() const { return this->strategyVersion_ != nullptr;};
    void deleteStrategyVersion() { this->strategyVersion_ = nullptr;};
    inline string getStrategyVersion() const { DARABONBA_PTR_GET_DEFAULT(strategyVersion_, "") };
    inline SearchContextResponseBody& setStrategyVersion(string strategyVersion) { DARABONBA_PTR_SET_VALUE(strategyVersion_, strategyVersion) };


  protected:
    // The audit write status. Valid values: ok and degraded.
    shared_ptr<string> auditStatus_ {};
    // The call ID for the multi-strategy recall of the experience store.
    shared_ptr<string> callId_ {};
    // The diagnostics information for the current experience recall, including duration, model call volume, and filtering. The actual diagnostics items are determined by the running mode.
    Darabonba::Json diagnostics_ {};
    // The actual experience recall mode used for the current request. Valid values: direct, agentic, and hybrid.
    shared_ptr<string> mode_ {};
    // The ID of the recall event. You can use this ID to call the GetContextStoreRecall operation to view audit details.
    shared_ptr<string> recallEventId_ {};
    // The list of relevance judgment results for candidate experiences.
    shared_ptr<vector<Darabonba::Json>> relevance_ {};
    // The ID of the request. You can use this ID to locate the request for troubleshooting.
    shared_ptr<string> requestId_ {};
    // The list of retrieval results, sorted by similarity in descending order.
    shared_ptr<vector<Darabonba::Json>> results_ {};
    // The list of rewritten queries generated based on the original retrieval query. The original query is not included.
    shared_ptr<vector<string>> rewrittenQueries_ {};
    // The processing status of the current experience recall call. Valid values: success, degraded, failed, and error.
    shared_ptr<string> status_ {};
    // The strategy implementation version used for the current experience recall. This is used for auditing and result tracing.
    shared_ptr<string> strategyVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
