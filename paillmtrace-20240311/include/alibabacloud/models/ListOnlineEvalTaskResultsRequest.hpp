// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTONLINEEVALTASKRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTONLINEEVALTASKRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class ListOnlineEvalTaskResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOnlineEvalTaskResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EvaluationId, evaluationId_);
      DARABONBA_PTR_TO_JSON(MostRecentResultsOnly, mostRecentResultsOnly_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TraceIds, traceIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListOnlineEvalTaskResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EvaluationId, evaluationId_);
      DARABONBA_PTR_FROM_JSON(MostRecentResultsOnly, mostRecentResultsOnly_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TraceIds, traceIds_);
    };
    ListOnlineEvalTaskResultsRequest() = default ;
    ListOnlineEvalTaskResultsRequest(const ListOnlineEvalTaskResultsRequest &) = default ;
    ListOnlineEvalTaskResultsRequest(ListOnlineEvalTaskResultsRequest &&) = default ;
    ListOnlineEvalTaskResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOnlineEvalTaskResultsRequest() = default ;
    ListOnlineEvalTaskResultsRequest& operator=(const ListOnlineEvalTaskResultsRequest &) = default ;
    ListOnlineEvalTaskResultsRequest& operator=(ListOnlineEvalTaskResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->evaluationId_ != nullptr
        && this->mostRecentResultsOnly_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->traceIds_ != nullptr; };
    // evaluationId Field Functions 
    bool hasEvaluationId() const { return this->evaluationId_ != nullptr;};
    void deleteEvaluationId() { this->evaluationId_ = nullptr;};
    inline string evaluationId() const { DARABONBA_PTR_GET_DEFAULT(evaluationId_, "") };
    inline ListOnlineEvalTaskResultsRequest& setEvaluationId(string evaluationId) { DARABONBA_PTR_SET_VALUE(evaluationId_, evaluationId) };


    // mostRecentResultsOnly Field Functions 
    bool hasMostRecentResultsOnly() const { return this->mostRecentResultsOnly_ != nullptr;};
    void deleteMostRecentResultsOnly() { this->mostRecentResultsOnly_ = nullptr;};
    inline bool mostRecentResultsOnly() const { DARABONBA_PTR_GET_DEFAULT(mostRecentResultsOnly_, false) };
    inline ListOnlineEvalTaskResultsRequest& setMostRecentResultsOnly(bool mostRecentResultsOnly) { DARABONBA_PTR_SET_VALUE(mostRecentResultsOnly_, mostRecentResultsOnly) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOnlineEvalTaskResultsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOnlineEvalTaskResultsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // traceIds Field Functions 
    bool hasTraceIds() const { return this->traceIds_ != nullptr;};
    void deleteTraceIds() { this->traceIds_ = nullptr;};
    inline const vector<string> & traceIds() const { DARABONBA_PTR_GET_CONST(traceIds_, vector<string>) };
    inline vector<string> traceIds() { DARABONBA_PTR_GET(traceIds_, vector<string>) };
    inline ListOnlineEvalTaskResultsRequest& setTraceIds(const vector<string> & traceIds) { DARABONBA_PTR_SET_VALUE(traceIds_, traceIds) };
    inline ListOnlineEvalTaskResultsRequest& setTraceIds(vector<string> && traceIds) { DARABONBA_PTR_SET_RVALUE(traceIds_, traceIds) };


  protected:
    // The ID of the evaluation task. At least one of the trace ID or task ID must be set.
    std::shared_ptr<string> evaluationId_ = nullptr;
    // The same trace data may have been evaluated by different tasks. If no task ID is specified and there are multiple evaluation results for the same trace ID, this parameter specifies whether to return only the most recent evaluation result.
    std::shared_ptr<bool> mostRecentResultsOnly_ = nullptr;
    // The current page number. Value range: integers greater than 0. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Page size, default is 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Specify a set of trace IDs, and only return the evaluation results for these traces. At least one of the trace ID or task ID must be set.
    std::shared_ptr<vector<string>> traceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
