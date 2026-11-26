// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETENANTDIRECTORYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETENANTDIRECTORYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateTenantDirectoryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTenantDirectoryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(changeRecordEnabled, changeRecordEnabled_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ooVisibilityMode, ooVisibilityMode_);
      DARABONBA_PTR_TO_JSON(operatingObjectNames, operatingObjectNamesShrink_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTenantDirectoryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(changeRecordEnabled, changeRecordEnabled_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ooVisibilityMode, ooVisibilityMode_);
      DARABONBA_PTR_FROM_JSON(operatingObjectNames, operatingObjectNamesShrink_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    UpdateTenantDirectoryShrinkRequest() = default ;
    UpdateTenantDirectoryShrinkRequest(const UpdateTenantDirectoryShrinkRequest &) = default ;
    UpdateTenantDirectoryShrinkRequest(UpdateTenantDirectoryShrinkRequest &&) = default ;
    UpdateTenantDirectoryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTenantDirectoryShrinkRequest() = default ;
    UpdateTenantDirectoryShrinkRequest& operator=(const UpdateTenantDirectoryShrinkRequest &) = default ;
    UpdateTenantDirectoryShrinkRequest& operator=(UpdateTenantDirectoryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->changeRecordEnabled_ == nullptr && this->description_ == nullptr && this->directoryId_ == nullptr && this->name_ == nullptr && this->ooVisibilityMode_ == nullptr
        && this->operatingObjectNamesShrink_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->parentId_ == nullptr && this->path_ == nullptr
        && this->tenantId_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline UpdateTenantDirectoryShrinkRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // changeRecordEnabled Field Functions 
    bool hasChangeRecordEnabled() const { return this->changeRecordEnabled_ != nullptr;};
    void deleteChangeRecordEnabled() { this->changeRecordEnabled_ = nullptr;};
    inline bool getChangeRecordEnabled() const { DARABONBA_PTR_GET_DEFAULT(changeRecordEnabled_, false) };
    inline UpdateTenantDirectoryShrinkRequest& setChangeRecordEnabled(bool changeRecordEnabled) { DARABONBA_PTR_SET_VALUE(changeRecordEnabled_, changeRecordEnabled) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTenantDirectoryShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline UpdateTenantDirectoryShrinkRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTenantDirectoryShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ooVisibilityMode Field Functions 
    bool hasOoVisibilityMode() const { return this->ooVisibilityMode_ != nullptr;};
    void deleteOoVisibilityMode() { this->ooVisibilityMode_ = nullptr;};
    inline string getOoVisibilityMode() const { DARABONBA_PTR_GET_DEFAULT(ooVisibilityMode_, "") };
    inline UpdateTenantDirectoryShrinkRequest& setOoVisibilityMode(string ooVisibilityMode) { DARABONBA_PTR_SET_VALUE(ooVisibilityMode_, ooVisibilityMode) };


    // operatingObjectNamesShrink Field Functions 
    bool hasOperatingObjectNamesShrink() const { return this->operatingObjectNamesShrink_ != nullptr;};
    void deleteOperatingObjectNamesShrink() { this->operatingObjectNamesShrink_ = nullptr;};
    inline string getOperatingObjectNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectNamesShrink_, "") };
    inline UpdateTenantDirectoryShrinkRequest& setOperatingObjectNamesShrink(string operatingObjectNamesShrink) { DARABONBA_PTR_SET_VALUE(operatingObjectNamesShrink_, operatingObjectNamesShrink) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline UpdateTenantDirectoryShrinkRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline UpdateTenantDirectoryShrinkRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline UpdateTenantDirectoryShrinkRequest& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline UpdateTenantDirectoryShrinkRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateTenantDirectoryShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 平台应用 Token（控制台签发）。传入后将以 opsUserId 或 opsUserCode 指定的用户身份执行
    shared_ptr<string> appToken_ {};
    // 后续内容更新的AI版本摘要开关；false关闭，未传/null保持既有语义，不删除既有摘要
    shared_ptr<bool> changeRecordEnabled_ {};
    // The new directory description. If this parameter is omitted or set to null, the original value is retained.
    shared_ptr<string> description_ {};
    // The business ID of the enterprise knowledge base directory for the current tenant, which is not the internal primary key. When digital employee associations or version summary configurations are included, the target must be the root directory of a standard enterprise knowledge base.
    shared_ptr<string> directoryId_ {};
    // The new directory name. It can be up to 256 characters in length. If this parameter is omitted or set to null, the original value is retained.
    shared_ptr<string> name_ {};
    // 数字员工关联模式；仅普通企业知识库根可设置。未传/null保持既有语义；SPECIFIED须显式提供名单，ALL仅允许省略或空名单
    shared_ptr<string> ooVisibilityMode_ {};
    // 数字员工内部名称列表，最多100项，每项非空且最多256字符；SPECIFIED空数组表示不关联任何员工，非空名单按去重后全量替换
    shared_ptr<string> operatingObjectNamesShrink_ {};
    // 代理用户编码（租户内唯一），仅当应用凭证配置为 source_uid 时使用
    shared_ptr<string> opsUserCode_ {};
    // 代理用户ID（WINNEXO 平台用户ID），仅当应用凭证配置为 winnexo_uid 时使用
    shared_ptr<string> opsUserId_ {};
    // The internal primary key of the new parent folder. If this parameter is omitted or set to null, the original parent folder is retained. If a non-null value is passed, knowledge base management permissions for the target parent folder are required. This parameter cannot be committed at the same time as the digital employee associate or version summary configurations.
    shared_ptr<int64_t> parentId_ {};
    // The new directory path. If this parameter is omitted or set to null, a new path is not explicitly specified and is processed by the directory service.
    shared_ptr<string> path_ {};
    // The ID of the target tenant. It is used for tenant routing in public requests. The server-side authentication chain verifies access permissions. You cannot use this parameter to access unauthorized tenants.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
