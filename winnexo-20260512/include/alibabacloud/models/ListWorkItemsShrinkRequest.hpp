// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKITEMSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKITEMSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListWorkItemsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkItemsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(businessStatuses, businessStatusesShrink_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(itemTypes, itemTypesShrink_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(priorities, prioritiesShrink_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkItemsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(businessStatuses, businessStatusesShrink_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(itemTypes, itemTypesShrink_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(priorities, prioritiesShrink_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListWorkItemsShrinkRequest() = default ;
    ListWorkItemsShrinkRequest(const ListWorkItemsShrinkRequest &) = default ;
    ListWorkItemsShrinkRequest(ListWorkItemsShrinkRequest &&) = default ;
    ListWorkItemsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkItemsShrinkRequest() = default ;
    ListWorkItemsShrinkRequest& operator=(const ListWorkItemsShrinkRequest &) = default ;
    ListWorkItemsShrinkRequest& operator=(ListWorkItemsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessStatusesShrink_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->itemTypesShrink_ == nullptr && this->keyword_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->prioritiesShrink_ == nullptr && this->scope_ == nullptr && this->tenantId_ == nullptr; };
    // businessStatusesShrink Field Functions 
    bool hasBusinessStatusesShrink() const { return this->businessStatusesShrink_ != nullptr;};
    void deleteBusinessStatusesShrink() { this->businessStatusesShrink_ = nullptr;};
    inline string getBusinessStatusesShrink() const { DARABONBA_PTR_GET_DEFAULT(businessStatusesShrink_, "") };
    inline ListWorkItemsShrinkRequest& setBusinessStatusesShrink(string businessStatusesShrink) { DARABONBA_PTR_SET_VALUE(businessStatusesShrink_, businessStatusesShrink) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline ListWorkItemsShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // itemTypesShrink Field Functions 
    bool hasItemTypesShrink() const { return this->itemTypesShrink_ != nullptr;};
    void deleteItemTypesShrink() { this->itemTypesShrink_ = nullptr;};
    inline string getItemTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(itemTypesShrink_, "") };
    inline ListWorkItemsShrinkRequest& setItemTypesShrink(string itemTypesShrink) { DARABONBA_PTR_SET_VALUE(itemTypesShrink_, itemTypesShrink) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListWorkItemsShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListWorkItemsShrinkRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkItemsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListWorkItemsShrinkRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListWorkItemsShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prioritiesShrink Field Functions 
    bool hasPrioritiesShrink() const { return this->prioritiesShrink_ != nullptr;};
    void deletePrioritiesShrink() { this->prioritiesShrink_ = nullptr;};
    inline string getPrioritiesShrink() const { DARABONBA_PTR_GET_DEFAULT(prioritiesShrink_, "") };
    inline ListWorkItemsShrinkRequest& setPrioritiesShrink(string prioritiesShrink) { DARABONBA_PTR_SET_VALUE(prioritiesShrink_, prioritiesShrink) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListWorkItemsShrinkRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListWorkItemsShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The business statuses used for filtering.
    shared_ptr<string> businessStatusesShrink_ {};
    // The ID of the collaboration workspace.
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // The work item types used for filtering.
    shared_ptr<string> itemTypesShrink_ {};
    // The keyword for fuzzy search in the title or description.
    shared_ptr<string> keyword_ {};
    // The maximum number of entries to return per page. Valid values: 1 to 100. This parameter takes precedence over pageSize if both are specified.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token. Obtain the token from the nextToken parameter in the previous response. This parameter takes precedence over page if both are specified.
    shared_ptr<string> nextToken_ {};
    // The page number. This parameter is ignored if nextToken is specified.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page. Valid values: 1 to 100.
    shared_ptr<int64_t> pageSize_ {};
    // The priorities used for filtering.
    shared_ptr<string> prioritiesShrink_ {};
    // The personal scope used for filtering.
    shared_ptr<string> scope_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
