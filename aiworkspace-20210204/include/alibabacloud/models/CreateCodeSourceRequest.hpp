// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECODESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECODESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateCodeSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCodeSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(CloneType, cloneType_);
      DARABONBA_PTR_TO_JSON(CodeBranch, codeBranch_);
      DARABONBA_PTR_TO_JSON(CodeCommit, codeCommit_);
      DARABONBA_PTR_TO_JSON(CodeRepo, codeRepo_);
      DARABONBA_PTR_TO_JSON(CodeRepoAccessToken, codeRepoAccessToken_);
      DARABONBA_PTR_TO_JSON(CodeRepoUserName, codeRepoUserName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCodeSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(CloneType, cloneType_);
      DARABONBA_PTR_FROM_JSON(CodeBranch, codeBranch_);
      DARABONBA_PTR_FROM_JSON(CodeCommit, codeCommit_);
      DARABONBA_PTR_FROM_JSON(CodeRepo, codeRepo_);
      DARABONBA_PTR_FROM_JSON(CodeRepoAccessToken, codeRepoAccessToken_);
      DARABONBA_PTR_FROM_JSON(CodeRepoUserName, codeRepoUserName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateCodeSourceRequest() = default ;
    CreateCodeSourceRequest(const CreateCodeSourceRequest &) = default ;
    CreateCodeSourceRequest(CreateCodeSourceRequest &&) = default ;
    CreateCodeSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCodeSourceRequest() = default ;
    CreateCodeSourceRequest& operator=(const CreateCodeSourceRequest &) = default ;
    CreateCodeSourceRequest& operator=(CreateCodeSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->cloneType_ == nullptr && this->codeBranch_ == nullptr && this->codeCommit_ == nullptr && this->codeRepo_ == nullptr && this->codeRepoAccessToken_ == nullptr
        && this->codeRepoUserName_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->mountPath_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateCodeSourceRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // cloneType Field Functions 
    bool hasCloneType() const { return this->cloneType_ != nullptr;};
    void deleteCloneType() { this->cloneType_ = nullptr;};
    inline int32_t getCloneType() const { DARABONBA_PTR_GET_DEFAULT(cloneType_, 0) };
    inline CreateCodeSourceRequest& setCloneType(int32_t cloneType) { DARABONBA_PTR_SET_VALUE(cloneType_, cloneType) };


    // codeBranch Field Functions 
    bool hasCodeBranch() const { return this->codeBranch_ != nullptr;};
    void deleteCodeBranch() { this->codeBranch_ = nullptr;};
    inline string getCodeBranch() const { DARABONBA_PTR_GET_DEFAULT(codeBranch_, "") };
    inline CreateCodeSourceRequest& setCodeBranch(string codeBranch) { DARABONBA_PTR_SET_VALUE(codeBranch_, codeBranch) };


    // codeCommit Field Functions 
    bool hasCodeCommit() const { return this->codeCommit_ != nullptr;};
    void deleteCodeCommit() { this->codeCommit_ = nullptr;};
    inline string getCodeCommit() const { DARABONBA_PTR_GET_DEFAULT(codeCommit_, "") };
    inline CreateCodeSourceRequest& setCodeCommit(string codeCommit) { DARABONBA_PTR_SET_VALUE(codeCommit_, codeCommit) };


    // codeRepo Field Functions 
    bool hasCodeRepo() const { return this->codeRepo_ != nullptr;};
    void deleteCodeRepo() { this->codeRepo_ = nullptr;};
    inline string getCodeRepo() const { DARABONBA_PTR_GET_DEFAULT(codeRepo_, "") };
    inline CreateCodeSourceRequest& setCodeRepo(string codeRepo) { DARABONBA_PTR_SET_VALUE(codeRepo_, codeRepo) };


    // codeRepoAccessToken Field Functions 
    bool hasCodeRepoAccessToken() const { return this->codeRepoAccessToken_ != nullptr;};
    void deleteCodeRepoAccessToken() { this->codeRepoAccessToken_ = nullptr;};
    inline string getCodeRepoAccessToken() const { DARABONBA_PTR_GET_DEFAULT(codeRepoAccessToken_, "") };
    inline CreateCodeSourceRequest& setCodeRepoAccessToken(string codeRepoAccessToken) { DARABONBA_PTR_SET_VALUE(codeRepoAccessToken_, codeRepoAccessToken) };


    // codeRepoUserName Field Functions 
    bool hasCodeRepoUserName() const { return this->codeRepoUserName_ != nullptr;};
    void deleteCodeRepoUserName() { this->codeRepoUserName_ = nullptr;};
    inline string getCodeRepoUserName() const { DARABONBA_PTR_GET_DEFAULT(codeRepoUserName_, "") };
    inline CreateCodeSourceRequest& setCodeRepoUserName(string codeRepoUserName) { DARABONBA_PTR_SET_VALUE(codeRepoUserName_, codeRepoUserName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCodeSourceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateCodeSourceRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline CreateCodeSourceRequest& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateCodeSourceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The visibility of the code configuration. Valid values:
    // 
    // - PUBLIC: The configuration is visible to everyone in the workspace.
    // 
    // - PRIVATE: The configuration is visible only to you and workspace administrators.
    shared_ptr<string> accessibility_ {};
    shared_ptr<int32_t> cloneType_ {};
    // The code branch.
    shared_ptr<string> codeBranch_ {};
    // The commit ID of the code. \\`CodeCommit\\` takes precedence over \\`CodeBranch\\`. If you specify \\`CodeCommit\\`, \\`CodeBranch\\` is ignored.
    shared_ptr<string> codeCommit_ {};
    // The URL of the code repository.
    shared_ptr<string> codeRepo_ {};
    // The access token for the code repository.
    shared_ptr<string> codeRepoAccessToken_ {};
    // The username for the code repository.
    shared_ptr<string> codeRepoUserName_ {};
    // The description of the code configuration, which helps distinguish it from other configurations.
    shared_ptr<string> description_ {};
    // The name of the code configuration.
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // The local mount path for the code. The default is `/root/code/`.
    shared_ptr<string> mountPath_ {};
    // The workspace ID. For more information, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
