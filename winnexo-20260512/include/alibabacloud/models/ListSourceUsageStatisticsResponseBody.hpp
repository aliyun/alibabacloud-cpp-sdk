// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOURCEUSAGESTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSOURCEUSAGESTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListSourceUsageStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSourceUsageStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListSourceUsageStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListSourceUsageStatisticsResponseBody() = default ;
    ListSourceUsageStatisticsResponseBody(const ListSourceUsageStatisticsResponseBody &) = default ;
    ListSourceUsageStatisticsResponseBody(ListSourceUsageStatisticsResponseBody &&) = default ;
    ListSourceUsageStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSourceUsageStatisticsResponseBody() = default ;
    ListSourceUsageStatisticsResponseBody& operator=(const ListSourceUsageStatisticsResponseBody &) = default ;
    ListSourceUsageStatisticsResponseBody& operator=(ListSourceUsageStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(lastEventTime, lastEventTime_);
        DARABONBA_PTR_TO_JSON(retrievalCount, retrievalCount_);
        DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
        DARABONBA_PTR_TO_JSON(sourceName, sourceName_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(usageCount, usageCount_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(lastEventTime, lastEventTime_);
        DARABONBA_PTR_FROM_JSON(retrievalCount, retrievalCount_);
        DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
        DARABONBA_PTR_FROM_JSON(sourceName, sourceName_);
        DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(usageCount, usageCount_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->lastEventTime_ == nullptr
        && this->retrievalCount_ == nullptr && this->sourceId_ == nullptr && this->sourceName_ == nullptr && this->sourceType_ == nullptr && this->usageCount_ == nullptr; };
      // lastEventTime Field Functions 
      bool hasLastEventTime() const { return this->lastEventTime_ != nullptr;};
      void deleteLastEventTime() { this->lastEventTime_ = nullptr;};
      inline string getLastEventTime() const { DARABONBA_PTR_GET_DEFAULT(lastEventTime_, "") };
      inline Items& setLastEventTime(string lastEventTime) { DARABONBA_PTR_SET_VALUE(lastEventTime_, lastEventTime) };


      // retrievalCount Field Functions 
      bool hasRetrievalCount() const { return this->retrievalCount_ != nullptr;};
      void deleteRetrievalCount() { this->retrievalCount_ = nullptr;};
      inline int64_t getRetrievalCount() const { DARABONBA_PTR_GET_DEFAULT(retrievalCount_, 0L) };
      inline Items& setRetrievalCount(int64_t retrievalCount) { DARABONBA_PTR_SET_VALUE(retrievalCount_, retrievalCount) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
      inline Items& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      // sourceName Field Functions 
      bool hasSourceName() const { return this->sourceName_ != nullptr;};
      void deleteSourceName() { this->sourceName_ = nullptr;};
      inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
      inline Items& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Items& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // usageCount Field Functions 
      bool hasUsageCount() const { return this->usageCount_ != nullptr;};
      void deleteUsageCount() { this->usageCount_ = nullptr;};
      inline int64_t getUsageCount() const { DARABONBA_PTR_GET_DEFAULT(usageCount_, 0L) };
      inline Items& setUsageCount(int64_t usageCount) { DARABONBA_PTR_SET_VALUE(usageCount_, usageCount) };


    protected:
      // The time of the most recent reporting and ingestion within the filtered range.
      shared_ptr<string> lastEventTime_ {};
      // The number of deduplicated sources.
      shared_ptr<int64_t> retrievalCount_ {};
      // The ID of the data source, which is unique within the tenant.
      shared_ptr<string> sourceId_ {};
      // The name of the data source.
      shared_ptr<string> sourceName_ {};
      // The skill source type.
      shared_ptr<string> sourceType_ {};
      // The number of used sources.
      shared_ptr<int64_t> usageCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->hasMore_ == nullptr && this->items_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSourceUsageStatisticsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListSourceUsageStatisticsResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListSourceUsageStatisticsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListSourceUsageStatisticsResponseBody::Items>) };
    inline vector<ListSourceUsageStatisticsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListSourceUsageStatisticsResponseBody::Items>) };
    inline ListSourceUsageStatisticsResponseBody& setItems(const vector<ListSourceUsageStatisticsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListSourceUsageStatisticsResponseBody& setItems(vector<ListSourceUsageStatisticsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSourceUsageStatisticsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListSourceUsageStatisticsResponseBody& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListSourceUsageStatisticsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSourceUsageStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListSourceUsageStatisticsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // Indicates whether there is a next page.
    shared_ptr<bool> hasMore_ {};
    // The user information.
    shared_ptr<vector<ListSourceUsageStatisticsResponseBody::Items>> items_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The current page number.
    shared_ptr<int64_t> page_ {};
    // The page size. Maximum value: 100.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of data entries.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
