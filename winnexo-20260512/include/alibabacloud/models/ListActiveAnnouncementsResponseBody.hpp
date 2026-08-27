// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIVEANNOUNCEMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIVEANNOUNCEMENTSRESPONSEBODY_HPP_
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
  class ListActiveAnnouncementsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActiveAnnouncementsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListActiveAnnouncementsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListActiveAnnouncementsResponseBody() = default ;
    ListActiveAnnouncementsResponseBody(const ListActiveAnnouncementsResponseBody &) = default ;
    ListActiveAnnouncementsResponseBody(ListActiveAnnouncementsResponseBody &&) = default ;
    ListActiveAnnouncementsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActiveAnnouncementsResponseBody() = default ;
    ListActiveAnnouncementsResponseBody& operator=(const ListActiveAnnouncementsResponseBody &) = default ;
    ListActiveAnnouncementsResponseBody& operator=(ListActiveAnnouncementsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(announcementId, announcementId_);
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
        DARABONBA_PTR_TO_JSON(displayPage, displayPage_);
        DARABONBA_PTR_TO_JSON(displayType, displayType_);
        DARABONBA_PTR_TO_JSON(effectiveEnd, effectiveEnd_);
        DARABONBA_PTR_TO_JSON(effectiveStart, effectiveStart_);
        DARABONBA_PTR_TO_JSON(priority, priority_);
        DARABONBA_PTR_TO_JSON(publishedAt, publishedAt_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(announcementId, announcementId_);
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
        DARABONBA_PTR_FROM_JSON(displayPage, displayPage_);
        DARABONBA_PTR_FROM_JSON(displayType, displayType_);
        DARABONBA_PTR_FROM_JSON(effectiveEnd, effectiveEnd_);
        DARABONBA_PTR_FROM_JSON(effectiveStart, effectiveStart_);
        DARABONBA_PTR_FROM_JSON(priority, priority_);
        DARABONBA_PTR_FROM_JSON(publishedAt, publishedAt_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(title, title_);
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
      virtual bool empty() const override { return this->announcementId_ == nullptr
        && this->content_ == nullptr && this->createdBy_ == nullptr && this->displayPage_ == nullptr && this->displayType_ == nullptr && this->effectiveEnd_ == nullptr
        && this->effectiveStart_ == nullptr && this->priority_ == nullptr && this->publishedAt_ == nullptr && this->status_ == nullptr && this->title_ == nullptr; };
      // announcementId Field Functions 
      bool hasAnnouncementId() const { return this->announcementId_ != nullptr;};
      void deleteAnnouncementId() { this->announcementId_ = nullptr;};
      inline int64_t getAnnouncementId() const { DARABONBA_PTR_GET_DEFAULT(announcementId_, 0L) };
      inline Items& setAnnouncementId(int64_t announcementId) { DARABONBA_PTR_SET_VALUE(announcementId_, announcementId) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Items& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // createdBy Field Functions 
      bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
      void deleteCreatedBy() { this->createdBy_ = nullptr;};
      inline int64_t getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, 0L) };
      inline Items& setCreatedBy(int64_t createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


      // displayPage Field Functions 
      bool hasDisplayPage() const { return this->displayPage_ != nullptr;};
      void deleteDisplayPage() { this->displayPage_ = nullptr;};
      inline string getDisplayPage() const { DARABONBA_PTR_GET_DEFAULT(displayPage_, "") };
      inline Items& setDisplayPage(string displayPage) { DARABONBA_PTR_SET_VALUE(displayPage_, displayPage) };


      // displayType Field Functions 
      bool hasDisplayType() const { return this->displayType_ != nullptr;};
      void deleteDisplayType() { this->displayType_ = nullptr;};
      inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
      inline Items& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


      // effectiveEnd Field Functions 
      bool hasEffectiveEnd() const { return this->effectiveEnd_ != nullptr;};
      void deleteEffectiveEnd() { this->effectiveEnd_ = nullptr;};
      inline string getEffectiveEnd() const { DARABONBA_PTR_GET_DEFAULT(effectiveEnd_, "") };
      inline Items& setEffectiveEnd(string effectiveEnd) { DARABONBA_PTR_SET_VALUE(effectiveEnd_, effectiveEnd) };


      // effectiveStart Field Functions 
      bool hasEffectiveStart() const { return this->effectiveStart_ != nullptr;};
      void deleteEffectiveStart() { this->effectiveStart_ = nullptr;};
      inline string getEffectiveStart() const { DARABONBA_PTR_GET_DEFAULT(effectiveStart_, "") };
      inline Items& setEffectiveStart(string effectiveStart) { DARABONBA_PTR_SET_VALUE(effectiveStart_, effectiveStart) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline Items& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // publishedAt Field Functions 
      bool hasPublishedAt() const { return this->publishedAt_ != nullptr;};
      void deletePublishedAt() { this->publishedAt_ = nullptr;};
      inline string getPublishedAt() const { DARABONBA_PTR_GET_DEFAULT(publishedAt_, "") };
      inline Items& setPublishedAt(string publishedAt) { DARABONBA_PTR_SET_VALUE(publishedAt_, publishedAt) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Items& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The business ID of the notice.
      shared_ptr<int64_t> announcementId_ {};
      // The returned content.
      shared_ptr<string> content_ {};
      // The user ID of the project creator.
      shared_ptr<int64_t> createdBy_ {};
      // The display page. Valid values: ALL, FRONTEND, BACKEND.
      shared_ptr<string> displayPage_ {};
      // The display type and group label.
      shared_ptr<string> displayType_ {};
      // The custom effective end time.
      shared_ptr<string> effectiveEnd_ {};
      // The effective start time in ISO 8601 format with time zone. If this parameter is not specified, the notice takes effect immediately.
      shared_ptr<string> effectiveStart_ {};
      // The priority of the free task.
      // 
      // - Uses the default priority of the project, as shown in the following figure. The default priority values are as follows:
      // 
      //      - **-10**: Low. This is the default value.
      // 
      //      - **0**: Normal.
      // 
      //     - **1**: Urgent.
      // 
      //      - **2**: Very urgent.
      // 
      // ![](https://img.alicdn.com/imgextra/i1/O1CN01hNuSPz25juCzgxhmW_!!6000000007563-2-tps-2682-1304.png)
      // 
      // - Custom priority defined by the user, as shown in the following figure, with an additional "Generally urgent" level.
      // 
      // The value of this parameter is subject to the actual response of the API call. A higher priority corresponds to a larger value.
      // 
      // ![](https://img.alicdn.com/imgextra/i1/O1CN01V67b3i1mkNvJiW8D1_!!6000000004992-2-tps-2128-1126.png)
      shared_ptr<string> priority_ {};
      // The publish time in ISO 8601 format.
      shared_ptr<string> publishedAt_ {};
      // The task status. The value Running is returned upon submission.
      shared_ptr<string> status_ {};
      // The title of the scheduled meeting.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListActiveAnnouncementsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListActiveAnnouncementsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListActiveAnnouncementsResponseBody::Items>) };
    inline vector<ListActiveAnnouncementsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListActiveAnnouncementsResponseBody::Items>) };
    inline ListActiveAnnouncementsResponseBody& setItems(const vector<ListActiveAnnouncementsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListActiveAnnouncementsResponseBody& setItems(vector<ListActiveAnnouncementsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListActiveAnnouncementsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListActiveAnnouncementsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListActiveAnnouncementsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListActiveAnnouncementsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListActiveAnnouncementsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The business status code. A value of 200 indicates success. A failure returns a backend error code (ERR.* / InvalidParameter.*).
    shared_ptr<string> code_ {};
    // The list of MCP cards.
    shared_ptr<vector<ListActiveAnnouncementsResponseBody::Items>> items_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The page number, starting from 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The page size.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
