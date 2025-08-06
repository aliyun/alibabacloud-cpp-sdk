// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTONLINEEVALTASKRESULTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTONLINEEVALTASKRESULTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class ListOnlineEvalTaskResultsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOnlineEvalTaskResultsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EvaluationId, evaluationId_);
      DARABONBA_PTR_TO_JSON(MostRecentResultsOnly, mostRecentResultsOnly_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TraceIds, traceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListOnlineEvalTaskResultsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EvaluationId, evaluationId_);
      DARABONBA_PTR_FROM_JSON(MostRecentResultsOnly, mostRecentResultsOnly_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TraceIds, traceIdsShrink_);
    };
    ListOnlineEvalTaskResultsShrinkRequest() = default ;
    ListOnlineEvalTaskResultsShrinkRequest(const ListOnlineEvalTaskResultsShrinkRequest &) = default ;
    ListOnlineEvalTaskResultsShrinkRequest(ListOnlineEvalTaskResultsShrinkRequest &&) = default ;
    ListOnlineEvalTaskResultsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOnlineEvalTaskResultsShrinkRequest() = default ;
    ListOnlineEvalTaskResultsShrinkRequest& operator=(const ListOnlineEvalTaskResultsShrinkRequest &) = default ;
    ListOnlineEvalTaskResultsShrinkRequest& operator=(ListOnlineEvalTaskResultsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->evaluationId_ != nullptr
        && this->mostRecentResultsOnly_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->traceIdsShrink_ != nullptr; };
    // evaluationId Field Functions 
    bool hasEvaluationId() const { return this->evaluationId_ != nullptr;};
    void deleteEvaluationId() { this->evaluationId_ = nullptr;};
    inline string evaluationId() const { DARABONBA_PTR_GET_DEFAULT(evaluationId_, "") };
    inline ListOnlineEvalTaskResultsShrinkRequest& setEvaluationId(string evaluationId) { DARABONBA_PTR_SET_VALUE(evaluationId_, evaluationId) };


    // mostRecentResultsOnly Field Functions 
    bool hasMostRecentResultsOnly() const { return this->mostRecentResultsOnly_ != nullptr;};
    void deleteMostRecentResultsOnly() { this->mostRecentResultsOnly_ = nullptr;};
    inline bool mostRecentResultsOnly() const { DARABONBA_PTR_GET_DEFAULT(mostRecentResultsOnly_, false) };
    inline ListOnlineEvalTaskResultsShrinkRequest& setMostRecentResultsOnly(bool mostRecentResultsOnly) { DARABONBA_PTR_SET_VALUE(mostRecentResultsOnly_, mostRecentResultsOnly) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOnlineEvalTaskResultsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOnlineEvalTaskResultsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // traceIdsShrink Field Functions 
    bool hasTraceIdsShrink() const { return this->traceIdsShrink_ != nullptr;};
    void deleteTraceIdsShrink() { this->traceIdsShrink_ = nullptr;};
    inline string traceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(traceIdsShrink_, "") };
    inline ListOnlineEvalTaskResultsShrinkRequest& setTraceIdsShrink(string traceIdsShrink) { DARABONBA_PTR_SET_VALUE(traceIdsShrink_, traceIdsShrink) };


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
    std::shared_ptr<string> traceIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
