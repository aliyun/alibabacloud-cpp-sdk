// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTEXTDATABASEWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTEXTDATABASEWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateContextDatabaseWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContextDatabaseWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(GenerateInitialKey, generateInitialKey_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(PermissionMode, permissionMode_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContextDatabaseWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(GenerateInitialKey, generateInitialKey_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(PermissionMode, permissionMode_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    CreateContextDatabaseWorkspaceRequest() = default ;
    CreateContextDatabaseWorkspaceRequest(const CreateContextDatabaseWorkspaceRequest &) = default ;
    CreateContextDatabaseWorkspaceRequest(CreateContextDatabaseWorkspaceRequest &&) = default ;
    CreateContextDatabaseWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContextDatabaseWorkspaceRequest() = default ;
    CreateContextDatabaseWorkspaceRequest& operator=(const CreateContextDatabaseWorkspaceRequest &) = default ;
    CreateContextDatabaseWorkspaceRequest& operator=(CreateContextDatabaseWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->generateInitialKey_ == nullptr && this->memberName_ == nullptr && this->permissionMode_ == nullptr && this->workspaceName_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateContextDatabaseWorkspaceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // generateInitialKey Field Functions 
    bool hasGenerateInitialKey() const { return this->generateInitialKey_ != nullptr;};
    void deleteGenerateInitialKey() { this->generateInitialKey_ = nullptr;};
    inline bool getGenerateInitialKey() const { DARABONBA_PTR_GET_DEFAULT(generateInitialKey_, false) };
    inline CreateContextDatabaseWorkspaceRequest& setGenerateInitialKey(bool generateInitialKey) { DARABONBA_PTR_SET_VALUE(generateInitialKey_, generateInitialKey) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string getMemberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline CreateContextDatabaseWorkspaceRequest& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // permissionMode Field Functions 
    bool hasPermissionMode() const { return this->permissionMode_ != nullptr;};
    void deletePermissionMode() { this->permissionMode_ = nullptr;};
    inline string getPermissionMode() const { DARABONBA_PTR_GET_DEFAULT(permissionMode_, "") };
    inline CreateContextDatabaseWorkspaceRequest& setPermissionMode(string permissionMode) { DARABONBA_PTR_SET_VALUE(permissionMode_, permissionMode) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline CreateContextDatabaseWorkspaceRequest& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // The ID of the cluster to which the workspace belongs. This parameter is optional.
    // - If you do not specify this parameter, the cluster selection logic that prioritizes account-exclusive storage is used.
    // - `default`: The shared cluster is used.
    // - Cluster IDs starting with `acc-`: The associated dedicated cluster is used.
    shared_ptr<string> clusterId_ {};
    // Specifies whether to generate an initial API key. This parameter is optional. Default value: `true`.
    // - `true`: Generates the first API key and returns the key name and plaintext key.
    // - `false`: Does not generate an initial API key. The ApiKeyName and ApiKey fields in the response are empty.
    shared_ptr<bool> generateInitialKey_ {};
    // The name of the first member when the workspace is created. This parameter is optional.
    shared_ptr<string> memberName_ {};
    // The permission mode selected when the workspace is created. Valid values:
    // - `compatibility`: The compatibility mode. This mode is used if you do not specify this parameter.
    // - `advanced`: The advanced permission mode. Only the Alibaba Cloud account can select this mode. It takes effect immediately after the workspace is created and cannot be disabled.
    // 
    // This parameter is a string, not a Boolean switch. Valid values are case-insensitive and ignore leading and trailing whitespace. If you explicitly pass an empty string, pure whitespace, or other values, `InvalidParameter` (HTTP 400) is returned. If a RAM user selects `advanced`, `NoPermission` (HTTP 403) is returned.
    shared_ptr<string> permissionMode_ {};
    // The name of the workspace.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
