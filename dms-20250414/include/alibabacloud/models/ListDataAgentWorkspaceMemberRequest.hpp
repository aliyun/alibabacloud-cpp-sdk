// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAAGENTWORKSPACEMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAAGENTWORKSPACEMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListDataAgentWorkspaceMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAgentWorkspaceMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchMemberId, searchMemberId_);
      DARABONBA_PTR_TO_JSON(SearchRoleName, searchRoleName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAgentWorkspaceMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchMemberId, searchMemberId_);
      DARABONBA_PTR_FROM_JSON(SearchRoleName, searchRoleName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListDataAgentWorkspaceMemberRequest() = default ;
    ListDataAgentWorkspaceMemberRequest(const ListDataAgentWorkspaceMemberRequest &) = default ;
    ListDataAgentWorkspaceMemberRequest(ListDataAgentWorkspaceMemberRequest &&) = default ;
    ListDataAgentWorkspaceMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAgentWorkspaceMemberRequest() = default ;
    ListDataAgentWorkspaceMemberRequest& operator=(const ListDataAgentWorkspaceMemberRequest &) = default ;
    ListDataAgentWorkspaceMemberRequest& operator=(ListDataAgentWorkspaceMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DMSUnit_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->order_ == nullptr && this->orderBy_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->searchMemberId_ == nullptr && this->searchRoleName_ == nullptr && this->workspaceId_ == nullptr; };
    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline ListDataAgentWorkspaceMemberRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataAgentWorkspaceMemberRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataAgentWorkspaceMemberRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListDataAgentWorkspaceMemberRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListDataAgentWorkspaceMemberRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListDataAgentWorkspaceMemberRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListDataAgentWorkspaceMemberRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchMemberId Field Functions 
    bool hasSearchMemberId() const { return this->searchMemberId_ != nullptr;};
    void deleteSearchMemberId() { this->searchMemberId_ = nullptr;};
    inline string getSearchMemberId() const { DARABONBA_PTR_GET_DEFAULT(searchMemberId_, "") };
    inline ListDataAgentWorkspaceMemberRequest& setSearchMemberId(string searchMemberId) { DARABONBA_PTR_SET_VALUE(searchMemberId_, searchMemberId) };


    // searchRoleName Field Functions 
    bool hasSearchRoleName() const { return this->searchRoleName_ != nullptr;};
    void deleteSearchRoleName() { this->searchRoleName_ = nullptr;};
    inline string getSearchRoleName() const { DARABONBA_PTR_GET_DEFAULT(searchRoleName_, "") };
    inline ListDataAgentWorkspaceMemberRequest& setSearchRoleName(string searchRoleName) { DARABONBA_PTR_SET_VALUE(searchRoleName_, searchRoleName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDataAgentWorkspaceMemberRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> DMSUnit_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> order_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> searchMemberId_ {};
    shared_ptr<string> searchRoleName_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
