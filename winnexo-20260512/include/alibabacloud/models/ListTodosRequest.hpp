// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTODOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTODOSREQUEST_HPP_
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
  class ListTodosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTodosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(priorities, priorities_);
      DARABONBA_PTR_TO_JSON(readStatus, readStatus_);
      DARABONBA_PTR_TO_JSON(sortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(sourceTypes, sourceTypes_);
      DARABONBA_PTR_TO_JSON(statuses, statuses_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTodosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(priorities, priorities_);
      DARABONBA_PTR_FROM_JSON(readStatus, readStatus_);
      DARABONBA_PTR_FROM_JSON(sortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(sourceTypes, sourceTypes_);
      DARABONBA_PTR_FROM_JSON(statuses, statuses_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListTodosRequest() = default ;
    ListTodosRequest(const ListTodosRequest &) = default ;
    ListTodosRequest(ListTodosRequest &&) = default ;
    ListTodosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTodosRequest() = default ;
    ListTodosRequest& operator=(const ListTodosRequest &) = default ;
    ListTodosRequest& operator=(ListTodosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->keyword_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr
        && this->priorities_ == nullptr && this->readStatus_ == nullptr && this->sortBy_ == nullptr && this->sourceTypes_ == nullptr && this->statuses_ == nullptr
        && this->tenantId_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline ListTodosRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListTodosRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListTodosRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTodosRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListTodosRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListTodosRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // priorities Field Functions 
    bool hasPriorities() const { return this->priorities_ != nullptr;};
    void deletePriorities() { this->priorities_ = nullptr;};
    inline const vector<string> & getPriorities() const { DARABONBA_PTR_GET_CONST(priorities_, vector<string>) };
    inline vector<string> getPriorities() { DARABONBA_PTR_GET(priorities_, vector<string>) };
    inline ListTodosRequest& setPriorities(const vector<string> & priorities) { DARABONBA_PTR_SET_VALUE(priorities_, priorities) };
    inline ListTodosRequest& setPriorities(vector<string> && priorities) { DARABONBA_PTR_SET_RVALUE(priorities_, priorities) };


    // readStatus Field Functions 
    bool hasReadStatus() const { return this->readStatus_ != nullptr;};
    void deleteReadStatus() { this->readStatus_ = nullptr;};
    inline const vector<string> & getReadStatus() const { DARABONBA_PTR_GET_CONST(readStatus_, vector<string>) };
    inline vector<string> getReadStatus() { DARABONBA_PTR_GET(readStatus_, vector<string>) };
    inline ListTodosRequest& setReadStatus(const vector<string> & readStatus) { DARABONBA_PTR_SET_VALUE(readStatus_, readStatus) };
    inline ListTodosRequest& setReadStatus(vector<string> && readStatus) { DARABONBA_PTR_SET_RVALUE(readStatus_, readStatus) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListTodosRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sourceTypes Field Functions 
    bool hasSourceTypes() const { return this->sourceTypes_ != nullptr;};
    void deleteSourceTypes() { this->sourceTypes_ = nullptr;};
    inline const vector<string> & getSourceTypes() const { DARABONBA_PTR_GET_CONST(sourceTypes_, vector<string>) };
    inline vector<string> getSourceTypes() { DARABONBA_PTR_GET(sourceTypes_, vector<string>) };
    inline ListTodosRequest& setSourceTypes(const vector<string> & sourceTypes) { DARABONBA_PTR_SET_VALUE(sourceTypes_, sourceTypes) };
    inline ListTodosRequest& setSourceTypes(vector<string> && sourceTypes) { DARABONBA_PTR_SET_RVALUE(sourceTypes_, sourceTypes) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & getStatuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> getStatuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline ListTodosRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline ListTodosRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListTodosRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


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
    shared_ptr<vector<string>> priorities_ {};
    // The read status filter. Valid values: UNREAD and READ. The status is determined by the readAt field of the assignee.
    shared_ptr<vector<string>> readStatus_ {};
    // The sorting method.
    shared_ptr<string> sortBy_ {};
    // The to-do type filter. Valid values: WORKFLOW and OPEN_API.
    shared_ptr<vector<string>> sourceTypes_ {};
    // The to-do status filter. Valid values: PENDING, COMPLETED, and CANCELLED.
    shared_ptr<vector<string>> statuses_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
