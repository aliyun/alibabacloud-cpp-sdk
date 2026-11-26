// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETKNOWLEDGEBASEVISIBILITYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETKNOWLEDGEBASEVISIBILITYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SetKnowledgeBaseVisibilityShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetKnowledgeBaseVisibilityShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(cascadeMode, cascadeMode_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(targetId, targetId_);
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(userGroupIds, userGroupIdsShrink_);
      DARABONBA_PTR_TO_JSON(userIds, userIdsShrink_);
      DARABONBA_PTR_TO_JSON(visibilityMode, visibilityMode_);
    };
    friend void from_json(const Darabonba::Json& j, SetKnowledgeBaseVisibilityShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(cascadeMode, cascadeMode_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(targetId, targetId_);
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(userGroupIds, userGroupIdsShrink_);
      DARABONBA_PTR_FROM_JSON(userIds, userIdsShrink_);
      DARABONBA_PTR_FROM_JSON(visibilityMode, visibilityMode_);
    };
    SetKnowledgeBaseVisibilityShrinkRequest() = default ;
    SetKnowledgeBaseVisibilityShrinkRequest(const SetKnowledgeBaseVisibilityShrinkRequest &) = default ;
    SetKnowledgeBaseVisibilityShrinkRequest(SetKnowledgeBaseVisibilityShrinkRequest &&) = default ;
    SetKnowledgeBaseVisibilityShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetKnowledgeBaseVisibilityShrinkRequest() = default ;
    SetKnowledgeBaseVisibilityShrinkRequest& operator=(const SetKnowledgeBaseVisibilityShrinkRequest &) = default ;
    SetKnowledgeBaseVisibilityShrinkRequest& operator=(SetKnowledgeBaseVisibilityShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->cascadeMode_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->targetId_ == nullptr && this->targetType_ == nullptr
        && this->tenantId_ == nullptr && this->userGroupIdsShrink_ == nullptr && this->userIdsShrink_ == nullptr && this->visibilityMode_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline SetKnowledgeBaseVisibilityShrinkRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // cascadeMode Field Functions 
    bool hasCascadeMode() const { return this->cascadeMode_ != nullptr;};
    void deleteCascadeMode() { this->cascadeMode_ = nullptr;};
    inline string getCascadeMode() const { DARABONBA_PTR_GET_DEFAULT(cascadeMode_, "") };
    inline SetKnowledgeBaseVisibilityShrinkRequest& setCascadeMode(string cascadeMode) { DARABONBA_PTR_SET_VALUE(cascadeMode_, cascadeMode) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline SetKnowledgeBaseVisibilityShrinkRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline SetKnowledgeBaseVisibilityShrinkRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline SetKnowledgeBaseVisibilityShrinkRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline SetKnowledgeBaseVisibilityShrinkRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SetKnowledgeBaseVisibilityShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userGroupIdsShrink Field Functions 
    bool hasUserGroupIdsShrink() const { return this->userGroupIdsShrink_ != nullptr;};
    void deleteUserGroupIdsShrink() { this->userGroupIdsShrink_ = nullptr;};
    inline string getUserGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(userGroupIdsShrink_, "") };
    inline SetKnowledgeBaseVisibilityShrinkRequest& setUserGroupIdsShrink(string userGroupIdsShrink) { DARABONBA_PTR_SET_VALUE(userGroupIdsShrink_, userGroupIdsShrink) };


    // userIdsShrink Field Functions 
    bool hasUserIdsShrink() const { return this->userIdsShrink_ != nullptr;};
    void deleteUserIdsShrink() { this->userIdsShrink_ = nullptr;};
    inline string getUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(userIdsShrink_, "") };
    inline SetKnowledgeBaseVisibilityShrinkRequest& setUserIdsShrink(string userIdsShrink) { DARABONBA_PTR_SET_VALUE(userIdsShrink_, userIdsShrink) };


    // visibilityMode Field Functions 
    bool hasVisibilityMode() const { return this->visibilityMode_ != nullptr;};
    void deleteVisibilityMode() { this->visibilityMode_ = nullptr;};
    inline string getVisibilityMode() const { DARABONBA_PTR_GET_DEFAULT(visibilityMode_, "") };
    inline SetKnowledgeBaseVisibilityShrinkRequest& setVisibilityMode(string visibilityMode) { DARABONBA_PTR_SET_VALUE(visibilityMode_, visibilityMode) };


  protected:
    // token
    shared_ptr<string> appToken_ {};
    // Specifies how to handle subfolders.
    shared_ptr<string> cascadeMode_ {};
    // The user code.
    shared_ptr<string> opsUserCode_ {};
    // The ID of the operator.
    shared_ptr<string> opsUserId_ {};
    // The target ID, which varies based on the target type.
    // - If the type is period, specify the period ID.
    // - If the type is objective, specify the objective ID.
    // - If the type is kr, specify the keyResult ID.
    // 
    // This parameter is required.
    shared_ptr<string> targetId_ {};
    // The type of the current permission. Valid values:
    // - period: period type
    // - objective: objective type
    // - kr: keyResult type
    // 
    // This parameter is required.
    shared_ptr<string> targetType_ {};
    // The ID of the tenant to which the resource belongs. If this parameter is not specified, the current tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The collection of user groups.
    shared_ptr<string> userGroupIdsShrink_ {};
    // The collection of user IDs.
    shared_ptr<string> userIdsShrink_ {};
    // The visibility scope mode.
    // 
    // This parameter is required.
    shared_ptr<string> visibilityMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
