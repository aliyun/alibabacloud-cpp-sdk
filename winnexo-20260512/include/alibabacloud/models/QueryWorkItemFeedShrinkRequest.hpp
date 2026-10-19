// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWORKITEMFEEDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYWORKITEMFEEDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class QueryWorkItemFeedShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWorkItemFeedShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(businessStatuses, businessStatusesShrink_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(cursor, cursor_);
      DARABONBA_PTR_TO_JSON(itemTypes, itemTypesShrink_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(priorities, prioritiesShrink_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(sourceTaskId, sourceTaskId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(view, view_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWorkItemFeedShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(businessStatuses, businessStatusesShrink_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(cursor, cursor_);
      DARABONBA_PTR_FROM_JSON(itemTypes, itemTypesShrink_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(priorities, prioritiesShrink_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(sourceTaskId, sourceTaskId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(view, view_);
    };
    QueryWorkItemFeedShrinkRequest() = default ;
    QueryWorkItemFeedShrinkRequest(const QueryWorkItemFeedShrinkRequest &) = default ;
    QueryWorkItemFeedShrinkRequest(QueryWorkItemFeedShrinkRequest &&) = default ;
    QueryWorkItemFeedShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWorkItemFeedShrinkRequest() = default ;
    QueryWorkItemFeedShrinkRequest& operator=(const QueryWorkItemFeedShrinkRequest &) = default ;
    QueryWorkItemFeedShrinkRequest& operator=(QueryWorkItemFeedShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessStatusesShrink_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->cursor_ == nullptr && this->itemTypesShrink_ == nullptr && this->keyword_ == nullptr && this->pageSize_ == nullptr
        && this->prioritiesShrink_ == nullptr && this->scope_ == nullptr && this->sourceTaskId_ == nullptr && this->tenantId_ == nullptr && this->view_ == nullptr; };
    // businessStatusesShrink Field Functions 
    bool hasBusinessStatusesShrink() const { return this->businessStatusesShrink_ != nullptr;};
    void deleteBusinessStatusesShrink() { this->businessStatusesShrink_ = nullptr;};
    inline string getBusinessStatusesShrink() const { DARABONBA_PTR_GET_DEFAULT(businessStatusesShrink_, "") };
    inline QueryWorkItemFeedShrinkRequest& setBusinessStatusesShrink(string businessStatusesShrink) { DARABONBA_PTR_SET_VALUE(businessStatusesShrink_, businessStatusesShrink) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline QueryWorkItemFeedShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // cursor Field Functions 
    bool hasCursor() const { return this->cursor_ != nullptr;};
    void deleteCursor() { this->cursor_ = nullptr;};
    inline string getCursor() const { DARABONBA_PTR_GET_DEFAULT(cursor_, "") };
    inline QueryWorkItemFeedShrinkRequest& setCursor(string cursor) { DARABONBA_PTR_SET_VALUE(cursor_, cursor) };


    // itemTypesShrink Field Functions 
    bool hasItemTypesShrink() const { return this->itemTypesShrink_ != nullptr;};
    void deleteItemTypesShrink() { this->itemTypesShrink_ = nullptr;};
    inline string getItemTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(itemTypesShrink_, "") };
    inline QueryWorkItemFeedShrinkRequest& setItemTypesShrink(string itemTypesShrink) { DARABONBA_PTR_SET_VALUE(itemTypesShrink_, itemTypesShrink) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline QueryWorkItemFeedShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryWorkItemFeedShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prioritiesShrink Field Functions 
    bool hasPrioritiesShrink() const { return this->prioritiesShrink_ != nullptr;};
    void deletePrioritiesShrink() { this->prioritiesShrink_ = nullptr;};
    inline string getPrioritiesShrink() const { DARABONBA_PTR_GET_DEFAULT(prioritiesShrink_, "") };
    inline QueryWorkItemFeedShrinkRequest& setPrioritiesShrink(string prioritiesShrink) { DARABONBA_PTR_SET_VALUE(prioritiesShrink_, prioritiesShrink) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline QueryWorkItemFeedShrinkRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // sourceTaskId Field Functions 
    bool hasSourceTaskId() const { return this->sourceTaskId_ != nullptr;};
    void deleteSourceTaskId() { this->sourceTaskId_ = nullptr;};
    inline string getSourceTaskId() const { DARABONBA_PTR_GET_DEFAULT(sourceTaskId_, "") };
    inline QueryWorkItemFeedShrinkRequest& setSourceTaskId(string sourceTaskId) { DARABONBA_PTR_SET_VALUE(sourceTaskId_, sourceTaskId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline QueryWorkItemFeedShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // view Field Functions 
    bool hasView() const { return this->view_ != nullptr;};
    void deleteView() { this->view_ = nullptr;};
    inline string getView() const { DARABONBA_PTR_GET_DEFAULT(view_, "") };
    inline QueryWorkItemFeedShrinkRequest& setView(string view) { DARABONBA_PTR_SET_VALUE(view_, view) };


  protected:
    // 业务状态筛选（七态）
    shared_ptr<string> businessStatusesShrink_ {};
    // 协作空间 ID
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // 翻页游标，取上次响应的 nextCursor
    shared_ptr<string> cursor_ {};
    // 工作项类型筛选
    shared_ptr<string> itemTypesShrink_ {};
    // 标题/描述模糊搜索关键词
    shared_ptr<string> keyword_ {};
    // 单页条数（1~100）
    shared_ptr<int64_t> pageSize_ {};
    // 优先级筛选
    shared_ptr<string> prioritiesShrink_ {};
    // 个人范围筛选
    shared_ptr<string> scope_ {};
    // 来源任务ID；指定时返回该任务平铺子项
    shared_ptr<string> sourceTaskId_ {};
    // 租户ID，公共参数；缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
    // 视图：FLAT 平铺 / TREE 任务分组
    shared_ptr<string> view_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
