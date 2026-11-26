// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESHARESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESHARESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateShareShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateShareShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(outputItemId, outputItemId_);
      DARABONBA_PTR_TO_JSON(outputItemName, outputItemName_);
      DARABONBA_PTR_TO_JSON(refreshShareLink, refreshShareLink_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(shareAccessType, shareAccessType_);
      DARABONBA_PTR_TO_JSON(shareEnabled, shareEnabled_);
      DARABONBA_PTR_TO_JSON(shareUserGroupIds, shareUserGroupIdsShrink_);
      DARABONBA_PTR_TO_JSON(shareUserIds, shareUserIdsShrink_);
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateShareShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(outputItemId, outputItemId_);
      DARABONBA_PTR_FROM_JSON(outputItemName, outputItemName_);
      DARABONBA_PTR_FROM_JSON(refreshShareLink, refreshShareLink_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(shareAccessType, shareAccessType_);
      DARABONBA_PTR_FROM_JSON(shareEnabled, shareEnabled_);
      DARABONBA_PTR_FROM_JSON(shareUserGroupIds, shareUserGroupIdsShrink_);
      DARABONBA_PTR_FROM_JSON(shareUserIds, shareUserIdsShrink_);
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    UpdateShareShrinkRequest() = default ;
    UpdateShareShrinkRequest(const UpdateShareShrinkRequest &) = default ;
    UpdateShareShrinkRequest(UpdateShareShrinkRequest &&) = default ;
    UpdateShareShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateShareShrinkRequest() = default ;
    UpdateShareShrinkRequest& operator=(const UpdateShareShrinkRequest &) = default ;
    UpdateShareShrinkRequest& operator=(UpdateShareShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->outputItemId_ == nullptr && this->outputItemName_ == nullptr && this->refreshShareLink_ == nullptr
        && this->sessionId_ == nullptr && this->shareAccessType_ == nullptr && this->shareEnabled_ == nullptr && this->shareUserGroupIdsShrink_ == nullptr && this->shareUserIdsShrink_ == nullptr
        && this->targetType_ == nullptr && this->tenantId_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline UpdateShareShrinkRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline UpdateShareShrinkRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline UpdateShareShrinkRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // outputItemId Field Functions 
    bool hasOutputItemId() const { return this->outputItemId_ != nullptr;};
    void deleteOutputItemId() { this->outputItemId_ = nullptr;};
    inline string getOutputItemId() const { DARABONBA_PTR_GET_DEFAULT(outputItemId_, "") };
    inline UpdateShareShrinkRequest& setOutputItemId(string outputItemId) { DARABONBA_PTR_SET_VALUE(outputItemId_, outputItemId) };


    // outputItemName Field Functions 
    bool hasOutputItemName() const { return this->outputItemName_ != nullptr;};
    void deleteOutputItemName() { this->outputItemName_ = nullptr;};
    inline string getOutputItemName() const { DARABONBA_PTR_GET_DEFAULT(outputItemName_, "") };
    inline UpdateShareShrinkRequest& setOutputItemName(string outputItemName) { DARABONBA_PTR_SET_VALUE(outputItemName_, outputItemName) };


    // refreshShareLink Field Functions 
    bool hasRefreshShareLink() const { return this->refreshShareLink_ != nullptr;};
    void deleteRefreshShareLink() { this->refreshShareLink_ = nullptr;};
    inline bool getRefreshShareLink() const { DARABONBA_PTR_GET_DEFAULT(refreshShareLink_, false) };
    inline UpdateShareShrinkRequest& setRefreshShareLink(bool refreshShareLink) { DARABONBA_PTR_SET_VALUE(refreshShareLink_, refreshShareLink) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline UpdateShareShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // shareAccessType Field Functions 
    bool hasShareAccessType() const { return this->shareAccessType_ != nullptr;};
    void deleteShareAccessType() { this->shareAccessType_ = nullptr;};
    inline string getShareAccessType() const { DARABONBA_PTR_GET_DEFAULT(shareAccessType_, "") };
    inline UpdateShareShrinkRequest& setShareAccessType(string shareAccessType) { DARABONBA_PTR_SET_VALUE(shareAccessType_, shareAccessType) };


    // shareEnabled Field Functions 
    bool hasShareEnabled() const { return this->shareEnabled_ != nullptr;};
    void deleteShareEnabled() { this->shareEnabled_ = nullptr;};
    inline bool getShareEnabled() const { DARABONBA_PTR_GET_DEFAULT(shareEnabled_, false) };
    inline UpdateShareShrinkRequest& setShareEnabled(bool shareEnabled) { DARABONBA_PTR_SET_VALUE(shareEnabled_, shareEnabled) };


    // shareUserGroupIdsShrink Field Functions 
    bool hasShareUserGroupIdsShrink() const { return this->shareUserGroupIdsShrink_ != nullptr;};
    void deleteShareUserGroupIdsShrink() { this->shareUserGroupIdsShrink_ = nullptr;};
    inline string getShareUserGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(shareUserGroupIdsShrink_, "") };
    inline UpdateShareShrinkRequest& setShareUserGroupIdsShrink(string shareUserGroupIdsShrink) { DARABONBA_PTR_SET_VALUE(shareUserGroupIdsShrink_, shareUserGroupIdsShrink) };


    // shareUserIdsShrink Field Functions 
    bool hasShareUserIdsShrink() const { return this->shareUserIdsShrink_ != nullptr;};
    void deleteShareUserIdsShrink() { this->shareUserIdsShrink_ = nullptr;};
    inline string getShareUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(shareUserIdsShrink_, "") };
    inline UpdateShareShrinkRequest& setShareUserIdsShrink(string shareUserIdsShrink) { DARABONBA_PTR_SET_VALUE(shareUserIdsShrink_, shareUserIdsShrink) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline UpdateShareShrinkRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateShareShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 平台应用 Token（控制台签发）。传入后将以 opsUserId 或 opsUserCode 指定的用户身份执行
    shared_ptr<string> appToken_ {};
    // 代理用户编码（租户内唯一），仅当应用凭证配置为 source_uid 时使用
    shared_ptr<string> opsUserCode_ {};
    // 代理用户ID（WINNEXO 平台用户ID），仅当应用凭证配置为 winnexo_uid 时使用
    shared_ptr<string> opsUserId_ {};
    // The output item ID.
    shared_ptr<string> outputItemId_ {};
    // The name of the output item. This parameter must be used together with sessionId.
    shared_ptr<string> outputItemName_ {};
    // Specifies whether to refresh the sharing link. This is supported only for output items that have sharing enabled or are being enabled in the current request.
    shared_ptr<bool> refreshShareLink_ {};
    // The session ID.
    shared_ptr<string> sessionId_ {};
    // The sharing scope. Valid values:
    // - PUBLIC: Accessible to all users.
    // - SPECIFIED: Accessible to specified users or user groups.
    shared_ptr<string> shareAccessType_ {};
    // Specifies whether sharing is enabled.
    shared_ptr<bool> shareEnabled_ {};
    // The list of user group IDs within the specified scope. Pass an empty array to clear the list.
    shared_ptr<string> shareUserGroupIdsShrink_ {};
    // The list of platform user IDs within the specified scope. Pass an empty array to clear the list.
    shared_ptr<string> shareUserIdsShrink_ {};
    // The type of the current permission. Valid values:
    // - period: Period type.
    // - objective: Objective type.
    // - kr: Key result type.
    // 
    // This parameter is required.
    shared_ptr<string> targetType_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
