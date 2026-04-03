// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WORKSPACEPERMISSIONITEM_HPP_
#define ALIBABACLOUD_MODELS_WORKSPACEPERMISSIONITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AccessDeniedDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class WorkspacePermissionItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WorkspacePermissionItem& obj) { 
      DARABONBA_PTR_TO_JSON(accessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(allowed, allowed_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, WorkspacePermissionItem& obj) { 
      DARABONBA_PTR_FROM_JSON(accessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(allowed, allowed_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    WorkspacePermissionItem() = default ;
    WorkspacePermissionItem(const WorkspacePermissionItem &) = default ;
    WorkspacePermissionItem(WorkspacePermissionItem &&) = default ;
    WorkspacePermissionItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WorkspacePermissionItem() = default ;
    WorkspacePermissionItem& operator=(const WorkspacePermissionItem &) = default ;
    WorkspacePermissionItem& operator=(WorkspacePermissionItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->action_ == nullptr && this->allowed_ == nullptr && this->message_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, AccessDeniedDetail) };
    inline AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, AccessDeniedDetail) };
    inline WorkspacePermissionItem& setAccessDeniedDetail(const AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline WorkspacePermissionItem& setAccessDeniedDetail(AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline WorkspacePermissionItem& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // allowed Field Functions 
    bool hasAllowed() const { return this->allowed_ != nullptr;};
    void deleteAllowed() { this->allowed_ = nullptr;};
    inline bool getAllowed() const { DARABONBA_PTR_GET_DEFAULT(allowed_, false) };
    inline WorkspacePermissionItem& setAllowed(bool allowed) { DARABONBA_PTR_SET_VALUE(allowed_, allowed) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline WorkspacePermissionItem& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // RAM 明确拒绝且可构造 detail 时返回；通过或非 RAM 拒绝场景省略
    shared_ptr<AccessDeniedDetail> accessDeniedDetail_ {};
    // 归一化后的 RAM action，始终含 agentrun: 前缀，如 agentrun:ListTemplates
    shared_ptr<string> action_ {};
    // RAM 判定通过为 true；workspace 不存在、非法/不支持 action、RAM SDK 报错等均为 false
    shared_ptr<bool> allowed_ {};
    // 人类可读原因；通过时通常为空字符串
    shared_ptr<string> message_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
