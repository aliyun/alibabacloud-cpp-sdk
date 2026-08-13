// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEAGENTUSERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEAGENTUSERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RevokeAgentUsersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeAgentUsersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(userGroupIds, userGroupIdsShrink_);
      DARABONBA_PTR_TO_JSON(userIds, userIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeAgentUsersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(userGroupIds, userGroupIdsShrink_);
      DARABONBA_PTR_FROM_JSON(userIds, userIdsShrink_);
    };
    RevokeAgentUsersShrinkRequest() = default ;
    RevokeAgentUsersShrinkRequest(const RevokeAgentUsersShrinkRequest &) = default ;
    RevokeAgentUsersShrinkRequest(RevokeAgentUsersShrinkRequest &&) = default ;
    RevokeAgentUsersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeAgentUsersShrinkRequest() = default ;
    RevokeAgentUsersShrinkRequest& operator=(const RevokeAgentUsersShrinkRequest &) = default ;
    RevokeAgentUsersShrinkRequest& operator=(RevokeAgentUsersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operatingObjectName_ == nullptr
        && this->tenantId_ == nullptr && this->userGroupIdsShrink_ == nullptr && this->userIdsShrink_ == nullptr; };
    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline RevokeAgentUsersShrinkRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline RevokeAgentUsersShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userGroupIdsShrink Field Functions 
    bool hasUserGroupIdsShrink() const { return this->userGroupIdsShrink_ != nullptr;};
    void deleteUserGroupIdsShrink() { this->userGroupIdsShrink_ = nullptr;};
    inline string getUserGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(userGroupIdsShrink_, "") };
    inline RevokeAgentUsersShrinkRequest& setUserGroupIdsShrink(string userGroupIdsShrink) { DARABONBA_PTR_SET_VALUE(userGroupIdsShrink_, userGroupIdsShrink) };


    // userIdsShrink Field Functions 
    bool hasUserIdsShrink() const { return this->userIdsShrink_ != nullptr;};
    void deleteUserIdsShrink() { this->userIdsShrink_ = nullptr;};
    inline string getUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(userIdsShrink_, "") };
    inline RevokeAgentUsersShrinkRequest& setUserIdsShrink(string userIdsShrink) { DARABONBA_PTR_SET_VALUE(userIdsShrink_, userIdsShrink) };


  protected:
    // 数字员工名称
    // 
    // This parameter is required.
    shared_ptr<string> operatingObjectName_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
    // 被撤销的用户组 ID 列表（16位 hex 字符串）
    shared_ptr<string> userGroupIdsShrink_ {};
    // 被撤销的用户 ID 列表
    shared_ptr<string> userIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
