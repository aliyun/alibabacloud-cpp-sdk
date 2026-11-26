// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEMORYAUTOEXTRACTIONSWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEMORYAUTOEXTRACTIONSWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateMemoryAutoExtractionSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMemoryAutoExtractionSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(clearExisting, clearExisting_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(ownerType, ownerType_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMemoryAutoExtractionSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(clearExisting, clearExisting_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(ownerType, ownerType_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    UpdateMemoryAutoExtractionSwitchRequest() = default ;
    UpdateMemoryAutoExtractionSwitchRequest(const UpdateMemoryAutoExtractionSwitchRequest &) = default ;
    UpdateMemoryAutoExtractionSwitchRequest(UpdateMemoryAutoExtractionSwitchRequest &&) = default ;
    UpdateMemoryAutoExtractionSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMemoryAutoExtractionSwitchRequest() = default ;
    UpdateMemoryAutoExtractionSwitchRequest& operator=(const UpdateMemoryAutoExtractionSwitchRequest &) = default ;
    UpdateMemoryAutoExtractionSwitchRequest& operator=(UpdateMemoryAutoExtractionSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->clearExisting_ == nullptr && this->enabled_ == nullptr && this->groupId_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr
        && this->ownerType_ == nullptr && this->tenantId_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline UpdateMemoryAutoExtractionSwitchRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // clearExisting Field Functions 
    bool hasClearExisting() const { return this->clearExisting_ != nullptr;};
    void deleteClearExisting() { this->clearExisting_ = nullptr;};
    inline bool getClearExisting() const { DARABONBA_PTR_GET_DEFAULT(clearExisting_, false) };
    inline UpdateMemoryAutoExtractionSwitchRequest& setClearExisting(bool clearExisting) { DARABONBA_PTR_SET_VALUE(clearExisting_, clearExisting) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateMemoryAutoExtractionSwitchRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateMemoryAutoExtractionSwitchRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline UpdateMemoryAutoExtractionSwitchRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline UpdateMemoryAutoExtractionSwitchRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string getOwnerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline UpdateMemoryAutoExtractionSwitchRequest& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateMemoryAutoExtractionSwitchRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 平台应用 Token（控制台签发）。传入后将以 opsUserId 或 opsUserCode 指定的用户身份执行
    shared_ptr<string> appToken_ {};
    // Specifies whether to synchronously clear the automatically collected memory. This parameter can be used when enabling or disabling the feature.
    shared_ptr<bool> clearExisting_ {};
    // Specifies whether to enable automatic memory collection.
    // 
    // This parameter is required.
    shared_ptr<bool> enabled_ {};
    // The ID of the collaboration workspace. This parameter is required when ownerType is set to group.
    shared_ptr<string> groupId_ {};
    // 代理用户编码（租户内唯一），仅当应用凭证配置为 source_uid 时使用
    shared_ptr<string> opsUserCode_ {};
    // 代理用户ID（WINNEXO 平台用户ID），仅当应用凭证配置为 winnexo_uid 时使用
    shared_ptr<string> opsUserId_ {};
    // The owner type. Valid values:
    // - user: the personal memory of the authenticated user
    // - group: the memory of the specified collaboration workspace
    shared_ptr<string> ownerType_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
