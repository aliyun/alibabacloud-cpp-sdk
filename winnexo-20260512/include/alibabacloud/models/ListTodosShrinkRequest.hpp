// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTODOSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTODOSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListTodosShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTodosShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(priorities, prioritiesShrink_);
      DARABONBA_PTR_TO_JSON(readStatus, readStatusShrink_);
      DARABONBA_PTR_TO_JSON(sortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(sourceTypes, sourceTypesShrink_);
      DARABONBA_PTR_TO_JSON(statuses, statusesShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTodosShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(priorities, prioritiesShrink_);
      DARABONBA_PTR_FROM_JSON(readStatus, readStatusShrink_);
      DARABONBA_PTR_FROM_JSON(sortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(sourceTypes, sourceTypesShrink_);
      DARABONBA_PTR_FROM_JSON(statuses, statusesShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListTodosShrinkRequest() = default ;
    ListTodosShrinkRequest(const ListTodosShrinkRequest &) = default ;
    ListTodosShrinkRequest(ListTodosShrinkRequest &&) = default ;
    ListTodosShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTodosShrinkRequest() = default ;
    ListTodosShrinkRequest& operator=(const ListTodosShrinkRequest &) = default ;
    ListTodosShrinkRequest& operator=(ListTodosShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->keyword_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr
        && this->prioritiesShrink_ == nullptr && this->readStatusShrink_ == nullptr && this->sortBy_ == nullptr && this->sourceTypesShrink_ == nullptr && this->statusesShrink_ == nullptr
        && this->tenantId_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline ListTodosShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListTodosShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListTodosShrinkRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTodosShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListTodosShrinkRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListTodosShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prioritiesShrink Field Functions 
    bool hasPrioritiesShrink() const { return this->prioritiesShrink_ != nullptr;};
    void deletePrioritiesShrink() { this->prioritiesShrink_ = nullptr;};
    inline string getPrioritiesShrink() const { DARABONBA_PTR_GET_DEFAULT(prioritiesShrink_, "") };
    inline ListTodosShrinkRequest& setPrioritiesShrink(string prioritiesShrink) { DARABONBA_PTR_SET_VALUE(prioritiesShrink_, prioritiesShrink) };


    // readStatusShrink Field Functions 
    bool hasReadStatusShrink() const { return this->readStatusShrink_ != nullptr;};
    void deleteReadStatusShrink() { this->readStatusShrink_ = nullptr;};
    inline string getReadStatusShrink() const { DARABONBA_PTR_GET_DEFAULT(readStatusShrink_, "") };
    inline ListTodosShrinkRequest& setReadStatusShrink(string readStatusShrink) { DARABONBA_PTR_SET_VALUE(readStatusShrink_, readStatusShrink) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListTodosShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sourceTypesShrink Field Functions 
    bool hasSourceTypesShrink() const { return this->sourceTypesShrink_ != nullptr;};
    void deleteSourceTypesShrink() { this->sourceTypesShrink_ = nullptr;};
    inline string getSourceTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceTypesShrink_, "") };
    inline ListTodosShrinkRequest& setSourceTypesShrink(string sourceTypesShrink) { DARABONBA_PTR_SET_VALUE(sourceTypesShrink_, sourceTypesShrink) };


    // statusesShrink Field Functions 
    bool hasStatusesShrink() const { return this->statusesShrink_ != nullptr;};
    void deleteStatusesShrink() { this->statusesShrink_ = nullptr;};
    inline string getStatusesShrink() const { DARABONBA_PTR_GET_DEFAULT(statusesShrink_, "") };
    inline ListTodosShrinkRequest& setStatusesShrink(string statusesShrink) { DARABONBA_PTR_SET_VALUE(statusesShrink_, statusesShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListTodosShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The collaboration workspace ID. This is an optional filter. If not specified, items from all workspaces are returned.
    shared_ptr<string> collaborationGroupId_ {};
    // The keyword for fuzzy search in the title or summary.
    shared_ptr<string> keyword_ {};
    // The maximum number of entries to return per page. Valid values: 1 to 100. This parameter takes precedence over pageSize if both are specified.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token. Use the nextToken value returned in the previous response. This parameter takes precedence over page if both are specified.
    shared_ptr<string> nextToken_ {};
    // The page number. This parameter is ignored if nextToken is specified.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page. Valid values: 1 to 100.
    shared_ptr<int64_t> pageSize_ {};
    // The priority filter. Valid values: HIGH, MEDIUM, and LOW.
    shared_ptr<string> prioritiesShrink_ {};
    // The read status filter. Valid values: UNREAD and READ. The status is determined by the readAt field of the assignee.
    shared_ptr<string> readStatusShrink_ {};
    // The sorting method.
    shared_ptr<string> sortBy_ {};
    // The to-do type filter. Valid values: WORKFLOW and OPEN_API.
    shared_ptr<string> sourceTypesShrink_ {};
    // The to-do status filter. Valid values: PENDING, COMPLETED, and CANCELLED.
    shared_ptr<string> statusesShrink_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
