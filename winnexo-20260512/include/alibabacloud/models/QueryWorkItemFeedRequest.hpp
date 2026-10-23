// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWORKITEMFEEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYWORKITEMFEEDREQUEST_HPP_
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
  class QueryWorkItemFeedRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWorkItemFeedRequest& obj) { 
      DARABONBA_PTR_TO_JSON(businessStatuses, businessStatuses_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(cursor, cursor_);
      DARABONBA_PTR_TO_JSON(itemTypes, itemTypes_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(priorities, priorities_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(sourceTaskId, sourceTaskId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(view, view_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWorkItemFeedRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(businessStatuses, businessStatuses_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(cursor, cursor_);
      DARABONBA_PTR_FROM_JSON(itemTypes, itemTypes_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(priorities, priorities_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(sourceTaskId, sourceTaskId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(view, view_);
    };
    QueryWorkItemFeedRequest() = default ;
    QueryWorkItemFeedRequest(const QueryWorkItemFeedRequest &) = default ;
    QueryWorkItemFeedRequest(QueryWorkItemFeedRequest &&) = default ;
    QueryWorkItemFeedRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWorkItemFeedRequest() = default ;
    QueryWorkItemFeedRequest& operator=(const QueryWorkItemFeedRequest &) = default ;
    QueryWorkItemFeedRequest& operator=(QueryWorkItemFeedRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessStatuses_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->cursor_ == nullptr && this->itemTypes_ == nullptr && this->keyword_ == nullptr && this->pageSize_ == nullptr
        && this->priorities_ == nullptr && this->scope_ == nullptr && this->sourceTaskId_ == nullptr && this->tenantId_ == nullptr && this->view_ == nullptr; };
    // businessStatuses Field Functions 
    bool hasBusinessStatuses() const { return this->businessStatuses_ != nullptr;};
    void deleteBusinessStatuses() { this->businessStatuses_ = nullptr;};
    inline const vector<string> & getBusinessStatuses() const { DARABONBA_PTR_GET_CONST(businessStatuses_, vector<string>) };
    inline vector<string> getBusinessStatuses() { DARABONBA_PTR_GET(businessStatuses_, vector<string>) };
    inline QueryWorkItemFeedRequest& setBusinessStatuses(const vector<string> & businessStatuses) { DARABONBA_PTR_SET_VALUE(businessStatuses_, businessStatuses) };
    inline QueryWorkItemFeedRequest& setBusinessStatuses(vector<string> && businessStatuses) { DARABONBA_PTR_SET_RVALUE(businessStatuses_, businessStatuses) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline QueryWorkItemFeedRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // cursor Field Functions 
    bool hasCursor() const { return this->cursor_ != nullptr;};
    void deleteCursor() { this->cursor_ = nullptr;};
    inline string getCursor() const { DARABONBA_PTR_GET_DEFAULT(cursor_, "") };
    inline QueryWorkItemFeedRequest& setCursor(string cursor) { DARABONBA_PTR_SET_VALUE(cursor_, cursor) };


    // itemTypes Field Functions 
    bool hasItemTypes() const { return this->itemTypes_ != nullptr;};
    void deleteItemTypes() { this->itemTypes_ = nullptr;};
    inline const vector<string> & getItemTypes() const { DARABONBA_PTR_GET_CONST(itemTypes_, vector<string>) };
    inline vector<string> getItemTypes() { DARABONBA_PTR_GET(itemTypes_, vector<string>) };
    inline QueryWorkItemFeedRequest& setItemTypes(const vector<string> & itemTypes) { DARABONBA_PTR_SET_VALUE(itemTypes_, itemTypes) };
    inline QueryWorkItemFeedRequest& setItemTypes(vector<string> && itemTypes) { DARABONBA_PTR_SET_RVALUE(itemTypes_, itemTypes) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline QueryWorkItemFeedRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryWorkItemFeedRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // priorities Field Functions 
    bool hasPriorities() const { return this->priorities_ != nullptr;};
    void deletePriorities() { this->priorities_ = nullptr;};
    inline const vector<string> & getPriorities() const { DARABONBA_PTR_GET_CONST(priorities_, vector<string>) };
    inline vector<string> getPriorities() { DARABONBA_PTR_GET(priorities_, vector<string>) };
    inline QueryWorkItemFeedRequest& setPriorities(const vector<string> & priorities) { DARABONBA_PTR_SET_VALUE(priorities_, priorities) };
    inline QueryWorkItemFeedRequest& setPriorities(vector<string> && priorities) { DARABONBA_PTR_SET_RVALUE(priorities_, priorities) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline QueryWorkItemFeedRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // sourceTaskId Field Functions 
    bool hasSourceTaskId() const { return this->sourceTaskId_ != nullptr;};
    void deleteSourceTaskId() { this->sourceTaskId_ = nullptr;};
    inline string getSourceTaskId() const { DARABONBA_PTR_GET_DEFAULT(sourceTaskId_, "") };
    inline QueryWorkItemFeedRequest& setSourceTaskId(string sourceTaskId) { DARABONBA_PTR_SET_VALUE(sourceTaskId_, sourceTaskId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline QueryWorkItemFeedRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // view Field Functions 
    bool hasView() const { return this->view_ != nullptr;};
    void deleteView() { this->view_ = nullptr;};
    inline string getView() const { DARABONBA_PTR_GET_DEFAULT(view_, "") };
    inline QueryWorkItemFeedRequest& setView(string view) { DARABONBA_PTR_SET_VALUE(view_, view) };


  protected:
    // The business status filter (seven states).
    shared_ptr<vector<string>> businessStatuses_ {};
    // The ID of the collaboration workspace.
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // The pagination cursor. Use the nextCursor value from the previous response.
    shared_ptr<string> cursor_ {};
    // The work item type filter.
    shared_ptr<vector<string>> itemTypes_ {};
    // The keyword for fuzzy search in the title or description.
    shared_ptr<string> keyword_ {};
    // The number of entries per page. Valid values: 1 to 100.
    shared_ptr<int64_t> pageSize_ {};
    // The priority filter.
    shared_ptr<vector<string>> priorities_ {};
    // The personal scope filter.
    shared_ptr<string> scope_ {};
    // The ID of the source task. If specified, the flat sub-items of the task are returned.
    shared_ptr<string> sourceTaskId_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The view type. Valid values: FLAT (flat view) and TREE (task grouping).
    shared_ptr<string> view_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
