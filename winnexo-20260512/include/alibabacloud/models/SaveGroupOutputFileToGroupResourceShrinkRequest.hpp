// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEGROUPOUTPUTFILETOGROUPRESOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEGROUPOUTPUTFILETOGROUPRESOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SaveGroupOutputFileToGroupResourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveGroupOutputFileToGroupResourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(itemIds, itemIdsShrink_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveGroupOutputFileToGroupResourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(itemIds, itemIdsShrink_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    SaveGroupOutputFileToGroupResourceShrinkRequest() = default ;
    SaveGroupOutputFileToGroupResourceShrinkRequest(const SaveGroupOutputFileToGroupResourceShrinkRequest &) = default ;
    SaveGroupOutputFileToGroupResourceShrinkRequest(SaveGroupOutputFileToGroupResourceShrinkRequest &&) = default ;
    SaveGroupOutputFileToGroupResourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveGroupOutputFileToGroupResourceShrinkRequest() = default ;
    SaveGroupOutputFileToGroupResourceShrinkRequest& operator=(const SaveGroupOutputFileToGroupResourceShrinkRequest &) = default ;
    SaveGroupOutputFileToGroupResourceShrinkRequest& operator=(SaveGroupOutputFileToGroupResourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->directoryId_ == nullptr && this->groupId_ == nullptr && this->itemIdsShrink_ == nullptr && this->mode_ == nullptr && this->opsUserCode_ == nullptr
        && this->opsUserId_ == nullptr && this->tenantId_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline SaveGroupOutputFileToGroupResourceShrinkRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline SaveGroupOutputFileToGroupResourceShrinkRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SaveGroupOutputFileToGroupResourceShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // itemIdsShrink Field Functions 
    bool hasItemIdsShrink() const { return this->itemIdsShrink_ != nullptr;};
    void deleteItemIdsShrink() { this->itemIdsShrink_ = nullptr;};
    inline string getItemIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(itemIdsShrink_, "") };
    inline SaveGroupOutputFileToGroupResourceShrinkRequest& setItemIdsShrink(string itemIdsShrink) { DARABONBA_PTR_SET_VALUE(itemIdsShrink_, itemIdsShrink) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline SaveGroupOutputFileToGroupResourceShrinkRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline SaveGroupOutputFileToGroupResourceShrinkRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline SaveGroupOutputFileToGroupResourceShrinkRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SaveGroupOutputFileToGroupResourceShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 平台应用 Token（控制台签发）。传入后将以 opsUserId 或 opsUserCode 指定的用户身份执行
    shared_ptr<string> appToken_ {};
    // The ID of the target personal directory. If not specified, the user\"s default directory is automatically resolved.
    shared_ptr<string> directoryId_ {};
    // The project group ID.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // itemIds
    // 
    // This parameter is required.
    shared_ptr<string> itemIdsShrink_ {};
    // The save mode. Valid values:
    // - link: creates a link (1:1 idempotent, editing the output synchronizes the resource).
    // - copy: creates a copy (unlimited times, snapshot).
    // 
    // This parameter is required.
    shared_ptr<string> mode_ {};
    // 代理用户编码（租户内唯一），仅当应用凭证配置为 source_uid 时使用
    shared_ptr<string> opsUserCode_ {};
    // 代理用户ID（WINNEXO 平台用户ID），仅当应用凭证配置为 winnexo_uid 时使用
    shared_ptr<string> opsUserId_ {};
    // The tenant ID. This is a common parameter. In winnexo-cli, pass this value explicitly by using --tenant-id.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
