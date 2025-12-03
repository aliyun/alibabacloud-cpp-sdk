// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPOSITORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPOSITORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateRepositoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRepositoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gitignoreType, gitignoreType_);
      DARABONBA_PTR_TO_JSON(importAccount, importAccount_);
      DARABONBA_PTR_TO_JSON(importDemoProject, importDemoProject_);
      DARABONBA_PTR_TO_JSON(importRepoType, importRepoType_);
      DARABONBA_PTR_TO_JSON(importToken, importToken_);
      DARABONBA_PTR_TO_JSON(importTokenEncrypted, importTokenEncrypted_);
      DARABONBA_PTR_TO_JSON(importUrl, importUrl_);
      DARABONBA_PTR_TO_JSON(initStandardService, initStandardService_);
      DARABONBA_PTR_TO_JSON(isCryptoEnabled, isCryptoEnabled_);
      DARABONBA_PTR_TO_JSON(localImportUrl, localImportUrl_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(readmeType, readmeType_);
      DARABONBA_PTR_TO_JSON(visibilityLevel, visibilityLevel_);
      DARABONBA_PTR_TO_JSON(createParentPath, createParentPath_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(sync, sync_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRepositoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gitignoreType, gitignoreType_);
      DARABONBA_PTR_FROM_JSON(importAccount, importAccount_);
      DARABONBA_PTR_FROM_JSON(importDemoProject, importDemoProject_);
      DARABONBA_PTR_FROM_JSON(importRepoType, importRepoType_);
      DARABONBA_PTR_FROM_JSON(importToken, importToken_);
      DARABONBA_PTR_FROM_JSON(importTokenEncrypted, importTokenEncrypted_);
      DARABONBA_PTR_FROM_JSON(importUrl, importUrl_);
      DARABONBA_PTR_FROM_JSON(initStandardService, initStandardService_);
      DARABONBA_PTR_FROM_JSON(isCryptoEnabled, isCryptoEnabled_);
      DARABONBA_PTR_FROM_JSON(localImportUrl, localImportUrl_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(readmeType, readmeType_);
      DARABONBA_PTR_FROM_JSON(visibilityLevel, visibilityLevel_);
      DARABONBA_PTR_FROM_JSON(createParentPath, createParentPath_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(sync, sync_);
    };
    CreateRepositoryRequest() = default ;
    CreateRepositoryRequest(const CreateRepositoryRequest &) = default ;
    CreateRepositoryRequest(CreateRepositoryRequest &&) = default ;
    CreateRepositoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRepositoryRequest() = default ;
    CreateRepositoryRequest& operator=(const CreateRepositoryRequest &) = default ;
    CreateRepositoryRequest& operator=(CreateRepositoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->avatarUrl_ == nullptr && return this->description_ == nullptr && return this->gitignoreType_ == nullptr && return this->importAccount_ == nullptr && return this->importDemoProject_ == nullptr
        && return this->importRepoType_ == nullptr && return this->importToken_ == nullptr && return this->importTokenEncrypted_ == nullptr && return this->importUrl_ == nullptr && return this->initStandardService_ == nullptr
        && return this->isCryptoEnabled_ == nullptr && return this->localImportUrl_ == nullptr && return this->name_ == nullptr && return this->namespaceId_ == nullptr && return this->path_ == nullptr
        && return this->readmeType_ == nullptr && return this->visibilityLevel_ == nullptr && return this->createParentPath_ == nullptr && return this->organizationId_ == nullptr && return this->sync_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline CreateRepositoryRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline CreateRepositoryRequest& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRepositoryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gitignoreType Field Functions 
    bool hasGitignoreType() const { return this->gitignoreType_ != nullptr;};
    void deleteGitignoreType() { this->gitignoreType_ = nullptr;};
    inline string gitignoreType() const { DARABONBA_PTR_GET_DEFAULT(gitignoreType_, "") };
    inline CreateRepositoryRequest& setGitignoreType(string gitignoreType) { DARABONBA_PTR_SET_VALUE(gitignoreType_, gitignoreType) };


    // importAccount Field Functions 
    bool hasImportAccount() const { return this->importAccount_ != nullptr;};
    void deleteImportAccount() { this->importAccount_ = nullptr;};
    inline string importAccount() const { DARABONBA_PTR_GET_DEFAULT(importAccount_, "") };
    inline CreateRepositoryRequest& setImportAccount(string importAccount) { DARABONBA_PTR_SET_VALUE(importAccount_, importAccount) };


    // importDemoProject Field Functions 
    bool hasImportDemoProject() const { return this->importDemoProject_ != nullptr;};
    void deleteImportDemoProject() { this->importDemoProject_ = nullptr;};
    inline bool importDemoProject() const { DARABONBA_PTR_GET_DEFAULT(importDemoProject_, false) };
    inline CreateRepositoryRequest& setImportDemoProject(bool importDemoProject) { DARABONBA_PTR_SET_VALUE(importDemoProject_, importDemoProject) };


    // importRepoType Field Functions 
    bool hasImportRepoType() const { return this->importRepoType_ != nullptr;};
    void deleteImportRepoType() { this->importRepoType_ = nullptr;};
    inline string importRepoType() const { DARABONBA_PTR_GET_DEFAULT(importRepoType_, "") };
    inline CreateRepositoryRequest& setImportRepoType(string importRepoType) { DARABONBA_PTR_SET_VALUE(importRepoType_, importRepoType) };


    // importToken Field Functions 
    bool hasImportToken() const { return this->importToken_ != nullptr;};
    void deleteImportToken() { this->importToken_ = nullptr;};
    inline string importToken() const { DARABONBA_PTR_GET_DEFAULT(importToken_, "") };
    inline CreateRepositoryRequest& setImportToken(string importToken) { DARABONBA_PTR_SET_VALUE(importToken_, importToken) };


    // importTokenEncrypted Field Functions 
    bool hasImportTokenEncrypted() const { return this->importTokenEncrypted_ != nullptr;};
    void deleteImportTokenEncrypted() { this->importTokenEncrypted_ = nullptr;};
    inline string importTokenEncrypted() const { DARABONBA_PTR_GET_DEFAULT(importTokenEncrypted_, "") };
    inline CreateRepositoryRequest& setImportTokenEncrypted(string importTokenEncrypted) { DARABONBA_PTR_SET_VALUE(importTokenEncrypted_, importTokenEncrypted) };


    // importUrl Field Functions 
    bool hasImportUrl() const { return this->importUrl_ != nullptr;};
    void deleteImportUrl() { this->importUrl_ = nullptr;};
    inline string importUrl() const { DARABONBA_PTR_GET_DEFAULT(importUrl_, "") };
    inline CreateRepositoryRequest& setImportUrl(string importUrl) { DARABONBA_PTR_SET_VALUE(importUrl_, importUrl) };


    // initStandardService Field Functions 
    bool hasInitStandardService() const { return this->initStandardService_ != nullptr;};
    void deleteInitStandardService() { this->initStandardService_ = nullptr;};
    inline bool initStandardService() const { DARABONBA_PTR_GET_DEFAULT(initStandardService_, false) };
    inline CreateRepositoryRequest& setInitStandardService(bool initStandardService) { DARABONBA_PTR_SET_VALUE(initStandardService_, initStandardService) };


    // isCryptoEnabled Field Functions 
    bool hasIsCryptoEnabled() const { return this->isCryptoEnabled_ != nullptr;};
    void deleteIsCryptoEnabled() { this->isCryptoEnabled_ = nullptr;};
    inline bool isCryptoEnabled() const { DARABONBA_PTR_GET_DEFAULT(isCryptoEnabled_, false) };
    inline CreateRepositoryRequest& setIsCryptoEnabled(bool isCryptoEnabled) { DARABONBA_PTR_SET_VALUE(isCryptoEnabled_, isCryptoEnabled) };


    // localImportUrl Field Functions 
    bool hasLocalImportUrl() const { return this->localImportUrl_ != nullptr;};
    void deleteLocalImportUrl() { this->localImportUrl_ = nullptr;};
    inline string localImportUrl() const { DARABONBA_PTR_GET_DEFAULT(localImportUrl_, "") };
    inline CreateRepositoryRequest& setLocalImportUrl(string localImportUrl) { DARABONBA_PTR_SET_VALUE(localImportUrl_, localImportUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRepositoryRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline int64_t namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, 0L) };
    inline CreateRepositoryRequest& setNamespaceId(int64_t namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CreateRepositoryRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // readmeType Field Functions 
    bool hasReadmeType() const { return this->readmeType_ != nullptr;};
    void deleteReadmeType() { this->readmeType_ = nullptr;};
    inline string readmeType() const { DARABONBA_PTR_GET_DEFAULT(readmeType_, "") };
    inline CreateRepositoryRequest& setReadmeType(string readmeType) { DARABONBA_PTR_SET_VALUE(readmeType_, readmeType) };


    // visibilityLevel Field Functions 
    bool hasVisibilityLevel() const { return this->visibilityLevel_ != nullptr;};
    void deleteVisibilityLevel() { this->visibilityLevel_ = nullptr;};
    inline int32_t visibilityLevel() const { DARABONBA_PTR_GET_DEFAULT(visibilityLevel_, 0) };
    inline CreateRepositoryRequest& setVisibilityLevel(int32_t visibilityLevel) { DARABONBA_PTR_SET_VALUE(visibilityLevel_, visibilityLevel) };


    // createParentPath Field Functions 
    bool hasCreateParentPath() const { return this->createParentPath_ != nullptr;};
    void deleteCreateParentPath() { this->createParentPath_ = nullptr;};
    inline bool createParentPath() const { DARABONBA_PTR_GET_DEFAULT(createParentPath_, false) };
    inline CreateRepositoryRequest& setCreateParentPath(bool createParentPath) { DARABONBA_PTR_SET_VALUE(createParentPath_, createParentPath) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline CreateRepositoryRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // sync Field Functions 
    bool hasSync() const { return this->sync_ != nullptr;};
    void deleteSync() { this->sync_ = nullptr;};
    inline bool sync() const { DARABONBA_PTR_GET_DEFAULT(sync_, false) };
    inline CreateRepositoryRequest& setSync(bool sync) { DARABONBA_PTR_SET_VALUE(sync_, sync) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gitignoreType_ = nullptr;
    std::shared_ptr<string> importAccount_ = nullptr;
    std::shared_ptr<bool> importDemoProject_ = nullptr;
    std::shared_ptr<string> importRepoType_ = nullptr;
    std::shared_ptr<string> importToken_ = nullptr;
    std::shared_ptr<string> importTokenEncrypted_ = nullptr;
    std::shared_ptr<string> importUrl_ = nullptr;
    std::shared_ptr<bool> initStandardService_ = nullptr;
    std::shared_ptr<bool> isCryptoEnabled_ = nullptr;
    std::shared_ptr<string> localImportUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> namespaceId_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> readmeType_ = nullptr;
    std::shared_ptr<int32_t> visibilityLevel_ = nullptr;
    std::shared_ptr<bool> createParentPath_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<bool> sync_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
