// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULEDTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULEDTASKSREQUEST_HPP_
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
  class ListScheduledTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScheduledTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(creatorOnly, creatorOnly_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(visibilities, visibilities_);
    };
    friend void from_json(const Darabonba::Json& j, ListScheduledTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(creatorOnly, creatorOnly_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(visibilities, visibilities_);
    };
    ListScheduledTasksRequest() = default ;
    ListScheduledTasksRequest(const ListScheduledTasksRequest &) = default ;
    ListScheduledTasksRequest(ListScheduledTasksRequest &&) = default ;
    ListScheduledTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScheduledTasksRequest() = default ;
    ListScheduledTasksRequest& operator=(const ListScheduledTasksRequest &) = default ;
    ListScheduledTasksRequest& operator=(ListScheduledTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->creatorOnly_ == nullptr && this->keyword_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->page_ == nullptr
        && this->pageSize_ == nullptr && this->tenantId_ == nullptr && this->visibilities_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline ListScheduledTasksRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // creatorOnly Field Functions 
    bool hasCreatorOnly() const { return this->creatorOnly_ != nullptr;};
    void deleteCreatorOnly() { this->creatorOnly_ = nullptr;};
    inline bool getCreatorOnly() const { DARABONBA_PTR_GET_DEFAULT(creatorOnly_, false) };
    inline ListScheduledTasksRequest& setCreatorOnly(bool creatorOnly) { DARABONBA_PTR_SET_VALUE(creatorOnly_, creatorOnly) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListScheduledTasksRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListScheduledTasksRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListScheduledTasksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListScheduledTasksRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListScheduledTasksRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListScheduledTasksRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // visibilities Field Functions 
    bool hasVisibilities() const { return this->visibilities_ != nullptr;};
    void deleteVisibilities() { this->visibilities_ = nullptr;};
    inline const vector<string> & getVisibilities() const { DARABONBA_PTR_GET_CONST(visibilities_, vector<string>) };
    inline vector<string> getVisibilities() { DARABONBA_PTR_GET(visibilities_, vector<string>) };
    inline ListScheduledTasksRequest& setVisibilities(const vector<string> & visibilities) { DARABONBA_PTR_SET_VALUE(visibilities_, visibilities) };
    inline ListScheduledTasksRequest& setVisibilities(vector<string> && visibilities) { DARABONBA_PTR_SET_RVALUE(visibilities_, visibilities) };


  protected:
    // The ID of the collaboration group (such as cg_101). If specified, a group task is created (the caller must be a valid group member). If left empty, a personal task is created.
    shared_ptr<string> collaborationGroupId_ {};
    // Specifies whether to return only tasks created by the caller. This parameter takes effect only in the group dimension (in the personal dimension, only the caller\\"s own tasks are returned). If not specified, no filtering is applied.
    shared_ptr<bool> creatorOnly_ {};
    // The keyword of the rule name, used for fuzzy match.
    shared_ptr<string> keyword_ {};
    // The maximum number of entries returned in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page.
    shared_ptr<string> nextToken_ {};
    // The page number. Default value: 1.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page.
    // 
    // > The maximum number of entries per page is 30.
    shared_ptr<int64_t> pageSize_ {};
    // The tenant ID that takes effect.
    shared_ptr<string> tenantId_ {};
    // Filters by visibility. Valid values:
    // - PRIVATE: visible only to the creator and group owner.
    // - COLLABORATIVE: visible to specified collaborators.
    // - PUBLIC: visible to all group members.
    // 
    // If not specified or an empty list is passed, no filtering is applied. This parameter takes effect only in the group dimension (when collaborationGroupId is specified) and is ignored in the personal dimension.
    shared_ptr<vector<string>> visibilities_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
