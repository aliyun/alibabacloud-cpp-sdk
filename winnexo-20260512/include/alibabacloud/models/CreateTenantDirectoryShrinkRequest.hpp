// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETENANTDIRECTORYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETENANTDIRECTORYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateTenantDirectoryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTenantDirectoryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(changeRecordEnabled, changeRecordEnabled_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ooVisibilityMode, ooVisibilityMode_);
      DARABONBA_PTR_TO_JSON(operatingObjectNames, operatingObjectNamesShrink_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTenantDirectoryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(changeRecordEnabled, changeRecordEnabled_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ooVisibilityMode, ooVisibilityMode_);
      DARABONBA_PTR_FROM_JSON(operatingObjectNames, operatingObjectNamesShrink_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreateTenantDirectoryShrinkRequest() = default ;
    CreateTenantDirectoryShrinkRequest(const CreateTenantDirectoryShrinkRequest &) = default ;
    CreateTenantDirectoryShrinkRequest(CreateTenantDirectoryShrinkRequest &&) = default ;
    CreateTenantDirectoryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTenantDirectoryShrinkRequest() = default ;
    CreateTenantDirectoryShrinkRequest& operator=(const CreateTenantDirectoryShrinkRequest &) = default ;
    CreateTenantDirectoryShrinkRequest& operator=(CreateTenantDirectoryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->changeRecordEnabled_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->ooVisibilityMode_ == nullptr && this->operatingObjectNamesShrink_ == nullptr
        && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->parentId_ == nullptr && this->path_ == nullptr && this->tenantId_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline CreateTenantDirectoryShrinkRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // changeRecordEnabled Field Functions 
    bool hasChangeRecordEnabled() const { return this->changeRecordEnabled_ != nullptr;};
    void deleteChangeRecordEnabled() { this->changeRecordEnabled_ = nullptr;};
    inline bool getChangeRecordEnabled() const { DARABONBA_PTR_GET_DEFAULT(changeRecordEnabled_, false) };
    inline CreateTenantDirectoryShrinkRequest& setChangeRecordEnabled(bool changeRecordEnabled) { DARABONBA_PTR_SET_VALUE(changeRecordEnabled_, changeRecordEnabled) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTenantDirectoryShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTenantDirectoryShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ooVisibilityMode Field Functions 
    bool hasOoVisibilityMode() const { return this->ooVisibilityMode_ != nullptr;};
    void deleteOoVisibilityMode() { this->ooVisibilityMode_ = nullptr;};
    inline string getOoVisibilityMode() const { DARABONBA_PTR_GET_DEFAULT(ooVisibilityMode_, "") };
    inline CreateTenantDirectoryShrinkRequest& setOoVisibilityMode(string ooVisibilityMode) { DARABONBA_PTR_SET_VALUE(ooVisibilityMode_, ooVisibilityMode) };


    // operatingObjectNamesShrink Field Functions 
    bool hasOperatingObjectNamesShrink() const { return this->operatingObjectNamesShrink_ != nullptr;};
    void deleteOperatingObjectNamesShrink() { this->operatingObjectNamesShrink_ = nullptr;};
    inline string getOperatingObjectNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectNamesShrink_, "") };
    inline CreateTenantDirectoryShrinkRequest& setOperatingObjectNamesShrink(string operatingObjectNamesShrink) { DARABONBA_PTR_SET_VALUE(operatingObjectNamesShrink_, operatingObjectNamesShrink) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline CreateTenantDirectoryShrinkRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline CreateTenantDirectoryShrinkRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline CreateTenantDirectoryShrinkRequest& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CreateTenantDirectoryShrinkRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateTenantDirectoryShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The platform application credential. Pass this parameter when you use the application proxy mode, and specify the operator by using opsUserId or opsUserCode based on the application configuration. Do not use real credentials in logs or public examples.
    shared_ptr<string> appToken_ {};
    // Specifies whether to generate AI version summaries for subsequent content updates. Valid values:
    // - true: Enabled.
    // - false: Disabled.
    // If this parameter is omitted or set to null, the configuration is not changed. Disabling this feature does not delete existing summaries. This parameter is supported only for standard enterprise knowledge base root directories.
    shared_ptr<bool> changeRecordEnabled_ {};
    // The purpose or content description of the directory. If this parameter is omitted, the value is empty.
    shared_ptr<string> description_ {};
    // The name of the directory. The name must be 1 to 256 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The digital employee association mode. ALL indicates that the directory is visible to all digital employees, and operatingObjectNames must be omitted, set to null, or set to an empty array. SPECIFIED indicates association by list, and operatingObjectNames must be explicitly provided. An empty array indicates that no employees are associated. If this parameter is omitted or set to null, the association configuration is not changed. This parameter is supported only for standard enterprise knowledge base root directories.
    shared_ptr<string> ooVisibilityMode_ {};
    // The list of internal names of the specified associated digital employees. This parameter must be used together with ooVisibilityMode. This parameter is required when ooVisibilityMode is set to SPECIFIED. An empty array indicates that all associations are cleared. When ooVisibilityMode is set to ALL, this parameter must be omitted, set to null, or set to an empty array. You can specify up to 100 items. Each item must be 1 to 256 characters in length after leading and trailing spaces are removed. The server verifies that the employees exist and are available in the current tenant, and fully replaces the associations after deduplication.
    shared_ptr<string> operatingObjectNamesShrink_ {};
    // The unique code of the proxied user in the tenant. This parameter is used only when the identity mapping mode of the application credential is source_uid. You cannot use this parameter to bypass tenant or knowledge base permission verification.
    shared_ptr<string> opsUserCode_ {};
    // The ID of the proxied WINNEXO platform user. This parameter is used only when the identity mapping mode of the application credential is winnexo_uid. You cannot use this parameter to bypass tenant or knowledge base permission verification.
    shared_ptr<string> opsUserId_ {};
    // The internal primary key of the parent directory. If this parameter is omitted or set to null, an enterprise knowledge base root directory is created. If this parameter is specified, a subdirectory is created. This parameter must be omitted or set to null when digital employee association or version summary configurations are included.
    shared_ptr<int64_t> parentId_ {};
    // The path of the directory. If this parameter is omitted or set to null, the server calculates the path based on the parent directory and the name.
    shared_ptr<string> path_ {};
    // The ID of the target tenant. This parameter is used for tenant routing in public requests. The server authentication chain verifies access permissions based on this parameter. You cannot use this parameter to access unauthorized tenants.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
