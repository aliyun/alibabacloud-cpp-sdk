// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRACESDATASSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRACESDATASSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class ListTracesDatasShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTracesDatasShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(Filters, filtersShrink_);
      DARABONBA_PTR_TO_JSON(HasEvents, hasEvents_);
      DARABONBA_PTR_TO_JSON(HasStatusMessage, hasStatusMessage_);
      DARABONBA_PTR_TO_JSON(LlmAppName, llmAppName_);
      DARABONBA_PTR_TO_JSON(MaxDuration, maxDuration_);
      DARABONBA_PTR_TO_JSON(MaxTime, maxTime_);
      DARABONBA_PTR_TO_JSON(MinDuration, minDuration_);
      DARABONBA_PTR_TO_JSON(MinTime, minTime_);
      DARABONBA_PTR_TO_JSON(OpentelemetryCompatible, opentelemetryCompatible_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(OwnerSubId, ownerSubId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(SpanIds, spanIdsShrink_);
      DARABONBA_PTR_TO_JSON(SpanName, spanName_);
      DARABONBA_PTR_TO_JSON(TraceIds, traceIdsShrink_);
      DARABONBA_PTR_TO_JSON(TraceReduceMethod, traceReduceMethod_);
    };
    friend void from_json(const Darabonba::Json& j, ListTracesDatasShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(Filters, filtersShrink_);
      DARABONBA_PTR_FROM_JSON(HasEvents, hasEvents_);
      DARABONBA_PTR_FROM_JSON(HasStatusMessage, hasStatusMessage_);
      DARABONBA_PTR_FROM_JSON(LlmAppName, llmAppName_);
      DARABONBA_PTR_FROM_JSON(MaxDuration, maxDuration_);
      DARABONBA_PTR_FROM_JSON(MaxTime, maxTime_);
      DARABONBA_PTR_FROM_JSON(MinDuration, minDuration_);
      DARABONBA_PTR_FROM_JSON(MinTime, minTime_);
      DARABONBA_PTR_FROM_JSON(OpentelemetryCompatible, opentelemetryCompatible_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(OwnerSubId, ownerSubId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(SpanIds, spanIdsShrink_);
      DARABONBA_PTR_FROM_JSON(SpanName, spanName_);
      DARABONBA_PTR_FROM_JSON(TraceIds, traceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(TraceReduceMethod, traceReduceMethod_);
    };
    ListTracesDatasShrinkRequest() = default ;
    ListTracesDatasShrinkRequest(const ListTracesDatasShrinkRequest &) = default ;
    ListTracesDatasShrinkRequest(ListTracesDatasShrinkRequest &&) = default ;
    ListTracesDatasShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTracesDatasShrinkRequest() = default ;
    ListTracesDatasShrinkRequest& operator=(const ListTracesDatasShrinkRequest &) = default ;
    ListTracesDatasShrinkRequest& operator=(ListTracesDatasShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endUserId_ != nullptr
        && this->filtersShrink_ != nullptr && this->hasEvents_ != nullptr && this->hasStatusMessage_ != nullptr && this->llmAppName_ != nullptr && this->maxDuration_ != nullptr
        && this->maxTime_ != nullptr && this->minDuration_ != nullptr && this->minTime_ != nullptr && this->opentelemetryCompatible_ != nullptr && this->ownerId_ != nullptr
        && this->ownerSubId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->sessionId_ != nullptr && this->sortBy_ != nullptr
        && this->sortOrder_ != nullptr && this->spanIdsShrink_ != nullptr && this->spanName_ != nullptr && this->traceIdsShrink_ != nullptr && this->traceReduceMethod_ != nullptr; };
    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline ListTracesDatasShrinkRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // filtersShrink Field Functions 
    bool hasFiltersShrink() const { return this->filtersShrink_ != nullptr;};
    void deleteFiltersShrink() { this->filtersShrink_ = nullptr;};
    inline string filtersShrink() const { DARABONBA_PTR_GET_DEFAULT(filtersShrink_, "") };
    inline ListTracesDatasShrinkRequest& setFiltersShrink(string filtersShrink) { DARABONBA_PTR_SET_VALUE(filtersShrink_, filtersShrink) };


    // hasEvents Field Functions 
    bool hasHasEvents() const { return this->hasEvents_ != nullptr;};
    void deleteHasEvents() { this->hasEvents_ = nullptr;};
    inline bool hasEvents() const { DARABONBA_PTR_GET_DEFAULT(hasEvents_, false) };
    inline ListTracesDatasShrinkRequest& setHasEvents(bool hasEvents) { DARABONBA_PTR_SET_VALUE(hasEvents_, hasEvents) };


    // hasStatusMessage Field Functions 
    bool hasHasStatusMessage() const { return this->hasStatusMessage_ != nullptr;};
    void deleteHasStatusMessage() { this->hasStatusMessage_ = nullptr;};
    inline bool hasStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(hasStatusMessage_, false) };
    inline ListTracesDatasShrinkRequest& setHasStatusMessage(bool hasStatusMessage) { DARABONBA_PTR_SET_VALUE(hasStatusMessage_, hasStatusMessage) };


    // llmAppName Field Functions 
    bool hasLlmAppName() const { return this->llmAppName_ != nullptr;};
    void deleteLlmAppName() { this->llmAppName_ = nullptr;};
    inline string llmAppName() const { DARABONBA_PTR_GET_DEFAULT(llmAppName_, "") };
    inline ListTracesDatasShrinkRequest& setLlmAppName(string llmAppName) { DARABONBA_PTR_SET_VALUE(llmAppName_, llmAppName) };


    // maxDuration Field Functions 
    bool hasMaxDuration() const { return this->maxDuration_ != nullptr;};
    void deleteMaxDuration() { this->maxDuration_ = nullptr;};
    inline float maxDuration() const { DARABONBA_PTR_GET_DEFAULT(maxDuration_, 0.0) };
    inline ListTracesDatasShrinkRequest& setMaxDuration(float maxDuration) { DARABONBA_PTR_SET_VALUE(maxDuration_, maxDuration) };


    // maxTime Field Functions 
    bool hasMaxTime() const { return this->maxTime_ != nullptr;};
    void deleteMaxTime() { this->maxTime_ = nullptr;};
    inline string maxTime() const { DARABONBA_PTR_GET_DEFAULT(maxTime_, "") };
    inline ListTracesDatasShrinkRequest& setMaxTime(string maxTime) { DARABONBA_PTR_SET_VALUE(maxTime_, maxTime) };


    // minDuration Field Functions 
    bool hasMinDuration() const { return this->minDuration_ != nullptr;};
    void deleteMinDuration() { this->minDuration_ = nullptr;};
    inline float minDuration() const { DARABONBA_PTR_GET_DEFAULT(minDuration_, 0.0) };
    inline ListTracesDatasShrinkRequest& setMinDuration(float minDuration) { DARABONBA_PTR_SET_VALUE(minDuration_, minDuration) };


    // minTime Field Functions 
    bool hasMinTime() const { return this->minTime_ != nullptr;};
    void deleteMinTime() { this->minTime_ = nullptr;};
    inline string minTime() const { DARABONBA_PTR_GET_DEFAULT(minTime_, "") };
    inline ListTracesDatasShrinkRequest& setMinTime(string minTime) { DARABONBA_PTR_SET_VALUE(minTime_, minTime) };


    // opentelemetryCompatible Field Functions 
    bool hasOpentelemetryCompatible() const { return this->opentelemetryCompatible_ != nullptr;};
    void deleteOpentelemetryCompatible() { this->opentelemetryCompatible_ = nullptr;};
    inline bool opentelemetryCompatible() const { DARABONBA_PTR_GET_DEFAULT(opentelemetryCompatible_, false) };
    inline ListTracesDatasShrinkRequest& setOpentelemetryCompatible(bool opentelemetryCompatible) { DARABONBA_PTR_SET_VALUE(opentelemetryCompatible_, opentelemetryCompatible) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListTracesDatasShrinkRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // ownerSubId Field Functions 
    bool hasOwnerSubId() const { return this->ownerSubId_ != nullptr;};
    void deleteOwnerSubId() { this->ownerSubId_ = nullptr;};
    inline string ownerSubId() const { DARABONBA_PTR_GET_DEFAULT(ownerSubId_, "") };
    inline ListTracesDatasShrinkRequest& setOwnerSubId(string ownerSubId) { DARABONBA_PTR_SET_VALUE(ownerSubId_, ownerSubId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTracesDatasShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTracesDatasShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ListTracesDatasShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListTracesDatasShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListTracesDatasShrinkRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // spanIdsShrink Field Functions 
    bool hasSpanIdsShrink() const { return this->spanIdsShrink_ != nullptr;};
    void deleteSpanIdsShrink() { this->spanIdsShrink_ = nullptr;};
    inline string spanIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(spanIdsShrink_, "") };
    inline ListTracesDatasShrinkRequest& setSpanIdsShrink(string spanIdsShrink) { DARABONBA_PTR_SET_VALUE(spanIdsShrink_, spanIdsShrink) };


    // spanName Field Functions 
    bool hasSpanName() const { return this->spanName_ != nullptr;};
    void deleteSpanName() { this->spanName_ = nullptr;};
    inline string spanName() const { DARABONBA_PTR_GET_DEFAULT(spanName_, "") };
    inline ListTracesDatasShrinkRequest& setSpanName(string spanName) { DARABONBA_PTR_SET_VALUE(spanName_, spanName) };


    // traceIdsShrink Field Functions 
    bool hasTraceIdsShrink() const { return this->traceIdsShrink_ != nullptr;};
    void deleteTraceIdsShrink() { this->traceIdsShrink_ = nullptr;};
    inline string traceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(traceIdsShrink_, "") };
    inline ListTracesDatasShrinkRequest& setTraceIdsShrink(string traceIdsShrink) { DARABONBA_PTR_SET_VALUE(traceIdsShrink_, traceIdsShrink) };


    // traceReduceMethod Field Functions 
    bool hasTraceReduceMethod() const { return this->traceReduceMethod_ != nullptr;};
    void deleteTraceReduceMethod() { this->traceReduceMethod_ = nullptr;};
    inline string traceReduceMethod() const { DARABONBA_PTR_GET_DEFAULT(traceReduceMethod_, "") };
    inline ListTracesDatasShrinkRequest& setTraceReduceMethod(string traceReduceMethod) { DARABONBA_PTR_SET_VALUE(traceReduceMethod_, traceReduceMethod) };


  protected:
    // The value of the attributes.service.app.user_id field in the trace record. It can contain upper and lower case letters, digits, dot (.), hyphen (-), and underscore (_). It is empty by default.
    std::shared_ptr<string> endUserId_ = nullptr;
    // Other filter parameters
    std::shared_ptr<string> filtersShrink_ = nullptr;
    // Whether to return only trace records containing spans with a non-empty events. Example: Suppose a trace has 3 spans. If this parameter is True, this trace meets the condition when any one of the 3 spans has a non-empty events. The default value is False. The events is not used for filtering.
    std::shared_ptr<bool> hasEvents_ = nullptr;
    // Whether to return only trace records containing spans with a non-empty statusMessage. Example: Suppose a trace has 3 spans. If this parameter is True, this trace meets the condition when any one of the 3 spans has a non-empty statusMessage. The default value is False. The statusMessage is not used for filtering.
    std::shared_ptr<bool> hasStatusMessage_ = nullptr;
    // The value of the resources.service.app.name field in the trace record. It can contain upper and lower case letters, digits, dot (.), hyphen (-), and underscore (_). Must be an exact match. It is empty by default.
    std::shared_ptr<string> llmAppName_ = nullptr;
    std::shared_ptr<float> maxDuration_ = nullptr;
    // The upper limit of the search time range, in UTC format (YYYY-mm-dd or YYYY-MM-DD HH:mm:ss). By default, the value is (current time +10 minutes)
    std::shared_ptr<string> maxTime_ = nullptr;
    std::shared_ptr<float> minDuration_ = nullptr;
    // The lower limit of the search time range, in UTC format (YYYY-mm-dd or YYYY-MM-DD HH:mm:ss). By default, the value is (current time - 2 days).
    // 
    // This parameter is required.
    std::shared_ptr<string> minTime_ = nullptr;
    // Whether the returned JSON data can be directly converted to OpenTelemetry TracesData protobuf object. Default value: False. JSON data that is compatible with OpenTelemetry is more complex. Such data is generally not required unless you want to generate a protobuf object of OpenTelemetry.
    std::shared_ptr<bool> opentelemetryCompatible_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // The value of the resources.service.owner.sub_id field in the trace record. It can contain upper and lower case letters, digits, dot (.), hyphen (-), and underscore (_). It is empty by default.
    std::shared_ptr<string> ownerSubId_ = nullptr;
    // The page number. Page starts from page 1. Default value: 1
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 20. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    // The field used to sort the returned results. Valid values: StartTime and Duration.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The sorting order. Valid values:
    // 
    // *   **ASC**
    // *   **DESC** (default)
    std::shared_ptr<string> sortOrder_ = nullptr;
    // The list of span IDs. Each trace record contains one or more spans.
    std::shared_ptr<string> spanIdsShrink_ = nullptr;
    std::shared_ptr<string> spanName_ = nullptr;
    // The list of trace IDs.
    std::shared_ptr<string> traceIdsShrink_ = nullptr;
    // The content simplification method for returned trace data to reduce the data volume.
    // 
    // REMOVE_EMBEDDING: Removes all embedding array contents.
    // 
    // ROOT_ONLY: Returns only the root span for each trace, with the root span content also having the REMOVE_EMBEDDING applied.
    // 
    // Blank: Maintains the original data without simplification.
    std::shared_ptr<string> traceReduceMethod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
