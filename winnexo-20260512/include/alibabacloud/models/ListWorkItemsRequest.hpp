// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKITEMSREQUEST_HPP_
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
  class ListWorkItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(businessStatuses, businessStatuses_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(itemTypes, itemTypes_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(priorities, priorities_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(businessStatuses, businessStatuses_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(itemTypes, itemTypes_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(priorities, priorities_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListWorkItemsRequest() = default ;
    ListWorkItemsRequest(const ListWorkItemsRequest &) = default ;
    ListWorkItemsRequest(ListWorkItemsRequest &&) = default ;
    ListWorkItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkItemsRequest() = default ;
    ListWorkItemsRequest& operator=(const ListWorkItemsRequest &) = default ;
    ListWorkItemsRequest& operator=(ListWorkItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessStatuses_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->itemTypes_ == nullptr && this->keyword_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->priorities_ == nullptr && this->scope_ == nullptr && this->tenantId_ == nullptr; };
    // businessStatuses Field Functions 
    bool hasBusinessStatuses() const { return this->businessStatuses_ != nullptr;};
    void deleteBusinessStatuses() { this->businessStatuses_ = nullptr;};
    inline const vector<string> & getBusinessStatuses() const { DARABONBA_PTR_GET_CONST(businessStatuses_, vector<string>) };
    inline vector<string> getBusinessStatuses() { DARABONBA_PTR_GET(businessStatuses_, vector<string>) };
    inline ListWorkItemsRequest& setBusinessStatuses(const vector<string> & businessStatuses) { DARABONBA_PTR_SET_VALUE(businessStatuses_, businessStatuses) };
    inline ListWorkItemsRequest& setBusinessStatuses(vector<string> && businessStatuses) { DARABONBA_PTR_SET_RVALUE(businessStatuses_, businessStatuses) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline ListWorkItemsRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // itemTypes Field Functions 
    bool hasItemTypes() const { return this->itemTypes_ != nullptr;};
    void deleteItemTypes() { this->itemTypes_ = nullptr;};
    inline const vector<string> & getItemTypes() const { DARABONBA_PTR_GET_CONST(itemTypes_, vector<string>) };
    inline vector<string> getItemTypes() { DARABONBA_PTR_GET(itemTypes_, vector<string>) };
    inline ListWorkItemsRequest& setItemTypes(const vector<string> & itemTypes) { DARABONBA_PTR_SET_VALUE(itemTypes_, itemTypes) };
    inline ListWorkItemsRequest& setItemTypes(vector<string> && itemTypes) { DARABONBA_PTR_SET_RVALUE(itemTypes_, itemTypes) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListWorkItemsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListWorkItemsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkItemsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListWorkItemsRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListWorkItemsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // priorities Field Functions 
    bool hasPriorities() const { return this->priorities_ != nullptr;};
    void deletePriorities() { this->priorities_ = nullptr;};
    inline const vector<string> & getPriorities() const { DARABONBA_PTR_GET_CONST(priorities_, vector<string>) };
    inline vector<string> getPriorities() { DARABONBA_PTR_GET(priorities_, vector<string>) };
    inline ListWorkItemsRequest& setPriorities(const vector<string> & priorities) { DARABONBA_PTR_SET_VALUE(priorities_, priorities) };
    inline ListWorkItemsRequest& setPriorities(vector<string> && priorities) { DARABONBA_PTR_SET_RVALUE(priorities_, priorities) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListWorkItemsRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListWorkItemsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 业务状态筛选（七态）
    shared_ptr<vector<string>> businessStatuses_ {};
    // 协作空间 ID
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // 工作项类型筛选
    shared_ptr<vector<string>> itemTypes_ {};
    // 标题/描述模糊搜索关键词
    shared_ptr<string> keyword_ {};
    // 单页最大返回数量（1~100）；传入时优先于 pageSize
    shared_ptr<int64_t> maxResults_ {};
    // 翻页令牌，取上次响应返回的 nextToken；传入时优先于 page
    shared_ptr<string> nextToken_ {};
    // 页码；传入 nextToken 时忽略
    shared_ptr<int64_t> page_ {};
    // 每页条数（1~100）
    shared_ptr<int64_t> pageSize_ {};
    // 优先级筛选
    shared_ptr<vector<string>> priorities_ {};
    // 个人范围筛选
    shared_ptr<string> scope_ {};
    // 租户ID，公共参数；缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
