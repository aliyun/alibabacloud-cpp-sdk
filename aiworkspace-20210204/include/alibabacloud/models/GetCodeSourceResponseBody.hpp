// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCODESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCODESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetCodeSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCodeSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(CloneType, cloneType_);
      DARABONBA_PTR_TO_JSON(CodeBranch, codeBranch_);
      DARABONBA_PTR_TO_JSON(CodeCommit, codeCommit_);
      DARABONBA_PTR_TO_JSON(CodeRepo, codeRepo_);
      DARABONBA_PTR_TO_JSON(CodeRepoAccessToken, codeRepoAccessToken_);
      DARABONBA_PTR_TO_JSON(CodeRepoUserName, codeRepoUserName_);
      DARABONBA_PTR_TO_JSON(CodeSourceId, codeSourceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCodeSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(CloneType, cloneType_);
      DARABONBA_PTR_FROM_JSON(CodeBranch, codeBranch_);
      DARABONBA_PTR_FROM_JSON(CodeCommit, codeCommit_);
      DARABONBA_PTR_FROM_JSON(CodeRepo, codeRepo_);
      DARABONBA_PTR_FROM_JSON(CodeRepoAccessToken, codeRepoAccessToken_);
      DARABONBA_PTR_FROM_JSON(CodeRepoUserName, codeRepoUserName_);
      DARABONBA_PTR_FROM_JSON(CodeSourceId, codeSourceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetCodeSourceResponseBody() = default ;
    GetCodeSourceResponseBody(const GetCodeSourceResponseBody &) = default ;
    GetCodeSourceResponseBody(GetCodeSourceResponseBody &&) = default ;
    GetCodeSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCodeSourceResponseBody() = default ;
    GetCodeSourceResponseBody& operator=(const GetCodeSourceResponseBody &) = default ;
    GetCodeSourceResponseBody& operator=(GetCodeSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->cloneType_ == nullptr && this->codeBranch_ == nullptr && this->codeCommit_ == nullptr && this->codeRepo_ == nullptr && this->codeRepoAccessToken_ == nullptr
        && this->codeRepoUserName_ == nullptr && this->codeSourceId_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->gmtCreateTime_ == nullptr
        && this->gmtModifyTime_ == nullptr && this->mountPath_ == nullptr && this->requestId_ == nullptr && this->userId_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetCodeSourceResponseBody& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // cloneType Field Functions 
    bool hasCloneType() const { return this->cloneType_ != nullptr;};
    void deleteCloneType() { this->cloneType_ = nullptr;};
    inline int32_t getCloneType() const { DARABONBA_PTR_GET_DEFAULT(cloneType_, 0) };
    inline GetCodeSourceResponseBody& setCloneType(int32_t cloneType) { DARABONBA_PTR_SET_VALUE(cloneType_, cloneType) };


    // codeBranch Field Functions 
    bool hasCodeBranch() const { return this->codeBranch_ != nullptr;};
    void deleteCodeBranch() { this->codeBranch_ = nullptr;};
    inline string getCodeBranch() const { DARABONBA_PTR_GET_DEFAULT(codeBranch_, "") };
    inline GetCodeSourceResponseBody& setCodeBranch(string codeBranch) { DARABONBA_PTR_SET_VALUE(codeBranch_, codeBranch) };


    // codeCommit Field Functions 
    bool hasCodeCommit() const { return this->codeCommit_ != nullptr;};
    void deleteCodeCommit() { this->codeCommit_ = nullptr;};
    inline string getCodeCommit() const { DARABONBA_PTR_GET_DEFAULT(codeCommit_, "") };
    inline GetCodeSourceResponseBody& setCodeCommit(string codeCommit) { DARABONBA_PTR_SET_VALUE(codeCommit_, codeCommit) };


    // codeRepo Field Functions 
    bool hasCodeRepo() const { return this->codeRepo_ != nullptr;};
    void deleteCodeRepo() { this->codeRepo_ = nullptr;};
    inline string getCodeRepo() const { DARABONBA_PTR_GET_DEFAULT(codeRepo_, "") };
    inline GetCodeSourceResponseBody& setCodeRepo(string codeRepo) { DARABONBA_PTR_SET_VALUE(codeRepo_, codeRepo) };


    // codeRepoAccessToken Field Functions 
    bool hasCodeRepoAccessToken() const { return this->codeRepoAccessToken_ != nullptr;};
    void deleteCodeRepoAccessToken() { this->codeRepoAccessToken_ = nullptr;};
    inline string getCodeRepoAccessToken() const { DARABONBA_PTR_GET_DEFAULT(codeRepoAccessToken_, "") };
    inline GetCodeSourceResponseBody& setCodeRepoAccessToken(string codeRepoAccessToken) { DARABONBA_PTR_SET_VALUE(codeRepoAccessToken_, codeRepoAccessToken) };


    // codeRepoUserName Field Functions 
    bool hasCodeRepoUserName() const { return this->codeRepoUserName_ != nullptr;};
    void deleteCodeRepoUserName() { this->codeRepoUserName_ = nullptr;};
    inline string getCodeRepoUserName() const { DARABONBA_PTR_GET_DEFAULT(codeRepoUserName_, "") };
    inline GetCodeSourceResponseBody& setCodeRepoUserName(string codeRepoUserName) { DARABONBA_PTR_SET_VALUE(codeRepoUserName_, codeRepoUserName) };


    // codeSourceId Field Functions 
    bool hasCodeSourceId() const { return this->codeSourceId_ != nullptr;};
    void deleteCodeSourceId() { this->codeSourceId_ = nullptr;};
    inline string getCodeSourceId() const { DARABONBA_PTR_GET_DEFAULT(codeSourceId_, "") };
    inline GetCodeSourceResponseBody& setCodeSourceId(string codeSourceId) { DARABONBA_PTR_SET_VALUE(codeSourceId_, codeSourceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetCodeSourceResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetCodeSourceResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetCodeSourceResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifyTime Field Functions 
    bool hasGmtModifyTime() const { return this->gmtModifyTime_ != nullptr;};
    void deleteGmtModifyTime() { this->gmtModifyTime_ = nullptr;};
    inline string getGmtModifyTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifyTime_, "") };
    inline GetCodeSourceResponseBody& setGmtModifyTime(string gmtModifyTime) { DARABONBA_PTR_SET_VALUE(gmtModifyTime_, gmtModifyTime) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline GetCodeSourceResponseBody& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCodeSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetCodeSourceResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetCodeSourceResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The visibility of the code configuration. Valid values:
    // 
    // - PRIVATE: The configuration is visible only to you and the administrator in the workspace.
    // 
    // - PUBLIC: The configuration is visible to everyone in the workspace.
    shared_ptr<string> accessibility_ {};
    shared_ptr<int32_t> cloneType_ {};
    // The branch of the code repository.
    shared_ptr<string> codeBranch_ {};
    // The commit ID of the code.
    shared_ptr<string> codeCommit_ {};
    // The URL of the code repository.
    shared_ptr<string> codeRepo_ {};
    // The token used to access the code repository.
    shared_ptr<string> codeRepoAccessToken_ {};
    // The username for the code repository.
    shared_ptr<string> codeRepoUserName_ {};
    // The ID of the code source configuration.
    shared_ptr<string> codeSourceId_ {};
    // The detailed description of the code configuration.
    shared_ptr<string> description_ {};
    // The name of the code source configuration.
    shared_ptr<string> displayName_ {};
    // The time when the code configuration was created. The time is in the ISO 8601 format.
    shared_ptr<string> gmtCreateTime_ {};
    // The time when the code configuration was last modified. The time is in the ISO 8601 format.
    shared_ptr<string> gmtModifyTime_ {};
    // The local mount path for the code.
    shared_ptr<string> mountPath_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the user who created the code source configuration.
    shared_ptr<string> userId_ {};
    // The ID of the workspace.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
