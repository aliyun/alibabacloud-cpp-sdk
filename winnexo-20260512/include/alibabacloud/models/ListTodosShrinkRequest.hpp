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
    // 协作空间 ID（可选过滤；不传 = 全部空间）
    shared_ptr<string> collaborationGroupId_ {};
    // 标题/摘要模糊搜索关键词
    shared_ptr<string> keyword_ {};
    // 单页最大返回数量（1~100）；传入时优先于 pageSize
    shared_ptr<int64_t> maxResults_ {};
    // 翻页令牌，取上次响应返回的 nextToken；传入时优先于 page
    shared_ptr<string> nextToken_ {};
    // 页码；传入 nextToken 时忽略
    shared_ptr<int64_t> page_ {};
    // 每页条数（1~100）
    shared_ptr<int64_t> pageSize_ {};
    // 优先级筛选（HIGH/MEDIUM/LOW）
    shared_ptr<string> prioritiesShrink_ {};
    // 读取状态筛选（UNREAD/READ，按处理人 readAt 判定）
    shared_ptr<string> readStatusShrink_ {};
    // 排序方式
    shared_ptr<string> sortBy_ {};
    // 待办类型筛选（WORKFLOW/OPEN_API）
    shared_ptr<string> sourceTypesShrink_ {};
    // 待办状态筛选（PENDING/COMPLETED/CANCELLED）
    shared_ptr<string> statusesShrink_ {};
    // 租户ID，公共参数；缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
