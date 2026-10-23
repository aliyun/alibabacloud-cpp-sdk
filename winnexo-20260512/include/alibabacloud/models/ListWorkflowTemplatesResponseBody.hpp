// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWTEMPLATESRESPONSEBODY_HPP_
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
  class ListWorkflowTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListWorkflowTemplatesResponseBody() = default ;
    ListWorkflowTemplatesResponseBody(const ListWorkflowTemplatesResponseBody &) = default ;
    ListWorkflowTemplatesResponseBody(ListWorkflowTemplatesResponseBody &&) = default ;
    ListWorkflowTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowTemplatesResponseBody() = default ;
    ListWorkflowTemplatesResponseBody& operator=(const ListWorkflowTemplatesResponseBody &) = default ;
    ListWorkflowTemplatesResponseBody& operator=(ListWorkflowTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(effectiveVersion, effectiveVersion_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(latestVersion, latestVersion_);
        DARABONBA_PTR_TO_JSON(latestVersionStatus, latestVersionStatus_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(ownerCount, ownerCount_);
        DARABONBA_PTR_TO_JSON(reviewStepCount, reviewStepCount_);
        DARABONBA_PTR_TO_JSON(stepCount, stepCount_);
        DARABONBA_PTR_TO_JSON(templateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(effectiveVersion, effectiveVersion_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(latestVersion, latestVersion_);
        DARABONBA_PTR_FROM_JSON(latestVersionStatus, latestVersionStatus_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(ownerCount, ownerCount_);
        DARABONBA_PTR_FROM_JSON(reviewStepCount, reviewStepCount_);
        DARABONBA_PTR_FROM_JSON(stepCount, stepCount_);
        DARABONBA_PTR_FROM_JSON(templateId, templateId_);
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
      virtual bool empty() const override { return this->description_ == nullptr
        && this->effectiveVersion_ == nullptr && this->gmtModified_ == nullptr && this->latestVersion_ == nullptr && this->latestVersionStatus_ == nullptr && this->name_ == nullptr
        && this->ownerCount_ == nullptr && this->reviewStepCount_ == nullptr && this->stepCount_ == nullptr && this->templateId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // effectiveVersion Field Functions 
      bool hasEffectiveVersion() const { return this->effectiveVersion_ != nullptr;};
      void deleteEffectiveVersion() { this->effectiveVersion_ = nullptr;};
      inline string getEffectiveVersion() const { DARABONBA_PTR_GET_DEFAULT(effectiveVersion_, "") };
      inline Items& setEffectiveVersion(string effectiveVersion) { DARABONBA_PTR_SET_VALUE(effectiveVersion_, effectiveVersion) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // latestVersion Field Functions 
      bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
      void deleteLatestVersion() { this->latestVersion_ = nullptr;};
      inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
      inline Items& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


      // latestVersionStatus Field Functions 
      bool hasLatestVersionStatus() const { return this->latestVersionStatus_ != nullptr;};
      void deleteLatestVersionStatus() { this->latestVersionStatus_ = nullptr;};
      inline string getLatestVersionStatus() const { DARABONBA_PTR_GET_DEFAULT(latestVersionStatus_, "") };
      inline Items& setLatestVersionStatus(string latestVersionStatus) { DARABONBA_PTR_SET_VALUE(latestVersionStatus_, latestVersionStatus) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ownerCount Field Functions 
      bool hasOwnerCount() const { return this->ownerCount_ != nullptr;};
      void deleteOwnerCount() { this->ownerCount_ = nullptr;};
      inline int64_t getOwnerCount() const { DARABONBA_PTR_GET_DEFAULT(ownerCount_, 0L) };
      inline Items& setOwnerCount(int64_t ownerCount) { DARABONBA_PTR_SET_VALUE(ownerCount_, ownerCount) };


      // reviewStepCount Field Functions 
      bool hasReviewStepCount() const { return this->reviewStepCount_ != nullptr;};
      void deleteReviewStepCount() { this->reviewStepCount_ = nullptr;};
      inline int64_t getReviewStepCount() const { DARABONBA_PTR_GET_DEFAULT(reviewStepCount_, 0L) };
      inline Items& setReviewStepCount(int64_t reviewStepCount) { DARABONBA_PTR_SET_VALUE(reviewStepCount_, reviewStepCount) };


      // stepCount Field Functions 
      bool hasStepCount() const { return this->stepCount_ != nullptr;};
      void deleteStepCount() { this->stepCount_ = nullptr;};
      inline int64_t getStepCount() const { DARABONBA_PTR_GET_DEFAULT(stepCount_, 0L) };
      inline Items& setStepCount(int64_t stepCount) { DARABONBA_PTR_SET_VALUE(stepCount_, stepCount) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Items& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      // The description of the template.
      shared_ptr<string> description_ {};
      // The current effective version number. An empty value indicates that only a draft exists and the template cannot be used for work items.
      shared_ptr<string> effectiveVersion_ {};
      // The time when the template was last modified. The time is in the ISO 8601 standard.
      shared_ptr<string> gmtModified_ {};
      // The latest version number.
      shared_ptr<string> latestVersion_ {};
      // The status of the latest version. Valid values:
      // - DRAFT: Draft. The version contains uncommitted edits.
      // - SUBMITTED: Submitted.
      shared_ptr<string> latestVersionStatus_ {};
      // The name of the template.
      shared_ptr<string> name_ {};
      // The number of unique owners.
      shared_ptr<int64_t> ownerCount_ {};
      // The number of steps configured with reviewers.
      shared_ptr<int64_t> reviewStepCount_ {};
      // The number of steps.
      shared_ptr<int64_t> stepCount_ {};
      // The ID of the template.
      shared_ptr<string> templateId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->hasMore_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListWorkflowTemplatesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListWorkflowTemplatesResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListWorkflowTemplatesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListWorkflowTemplatesResponseBody::Items>) };
    inline vector<ListWorkflowTemplatesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListWorkflowTemplatesResponseBody::Items>) };
    inline ListWorkflowTemplatesResponseBody& setItems(const vector<ListWorkflowTemplatesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListWorkflowTemplatesResponseBody& setItems(vector<ListWorkflowTemplatesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListWorkflowTemplatesResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListWorkflowTemplatesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkflowTemplatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListWorkflowTemplatesResponseBody& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListWorkflowTemplatesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkflowTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListWorkflowTemplatesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // Indicates whether more data is available.
    shared_ptr<bool> hasMore_ {};
    // The list of template summaries on the current page.
    shared_ptr<vector<ListWorkflowTemplatesResponseBody::Items>> items_ {};
    // The maximum number of entries returned per page in the current request.
    shared_ptr<int64_t> maxResults_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The pagination token for the next page. An empty string indicates that no more data is available.
    shared_ptr<string> nextToken_ {};
    // The current page number.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page in the current request.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of visible entries that match the filter conditions.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
