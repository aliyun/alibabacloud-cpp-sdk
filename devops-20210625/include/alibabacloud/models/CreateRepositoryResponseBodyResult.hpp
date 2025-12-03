// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPOSITORYRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPOSITORYRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRepositoryResponseBodyResultNamespace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateRepositoryResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRepositoryResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Import_from_svn, importFromSvn_);
      DARABONBA_PTR_TO_JSON(archived, archived_);
      DARABONBA_PTR_TO_JSON(avatar_url, avatarUrl_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(defaultBranch, defaultBranch_);
      DARABONBA_PTR_TO_JSON(demoProject, demoProject_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(httpUrlToRepo, httpUrlToRepo_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(lastActivityAt, lastActivityAt_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameWithNamespace, nameWithNamespace_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(pathWithNamespace, pathWithNamespace_);
      DARABONBA_PTR_TO_JSON(sshUrlToRepo, sshUrlToRepo_);
      DARABONBA_PTR_TO_JSON(visibilityLevel, visibilityLevel_);
      DARABONBA_PTR_TO_JSON(webUrl, webUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRepositoryResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Import_from_svn, importFromSvn_);
      DARABONBA_PTR_FROM_JSON(archived, archived_);
      DARABONBA_PTR_FROM_JSON(avatar_url, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(defaultBranch, defaultBranch_);
      DARABONBA_PTR_FROM_JSON(demoProject, demoProject_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(httpUrlToRepo, httpUrlToRepo_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(lastActivityAt, lastActivityAt_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameWithNamespace, nameWithNamespace_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(pathWithNamespace, pathWithNamespace_);
      DARABONBA_PTR_FROM_JSON(sshUrlToRepo, sshUrlToRepo_);
      DARABONBA_PTR_FROM_JSON(visibilityLevel, visibilityLevel_);
      DARABONBA_PTR_FROM_JSON(webUrl, webUrl_);
    };
    CreateRepositoryResponseBodyResult() = default ;
    CreateRepositoryResponseBodyResult(const CreateRepositoryResponseBodyResult &) = default ;
    CreateRepositoryResponseBodyResult(CreateRepositoryResponseBodyResult &&) = default ;
    CreateRepositoryResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRepositoryResponseBodyResult() = default ;
    CreateRepositoryResponseBodyResult& operator=(const CreateRepositoryResponseBodyResult &) = default ;
    CreateRepositoryResponseBodyResult& operator=(CreateRepositoryResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->importFromSvn_ == nullptr
        && return this->archived_ == nullptr && return this->avatarUrl_ == nullptr && return this->createdAt_ == nullptr && return this->creatorId_ == nullptr && return this->defaultBranch_ == nullptr
        && return this->demoProject_ == nullptr && return this->description_ == nullptr && return this->httpUrlToRepo_ == nullptr && return this->id_ == nullptr && return this->lastActivityAt_ == nullptr
        && return this->name_ == nullptr && return this->nameWithNamespace_ == nullptr && return this->namespace_ == nullptr && return this->path_ == nullptr && return this->pathWithNamespace_ == nullptr
        && return this->sshUrlToRepo_ == nullptr && return this->visibilityLevel_ == nullptr && return this->webUrl_ == nullptr; };
    // importFromSvn Field Functions 
    bool hasImportFromSvn() const { return this->importFromSvn_ != nullptr;};
    void deleteImportFromSvn() { this->importFromSvn_ = nullptr;};
    inline bool importFromSvn() const { DARABONBA_PTR_GET_DEFAULT(importFromSvn_, false) };
    inline CreateRepositoryResponseBodyResult& setImportFromSvn(bool importFromSvn) { DARABONBA_PTR_SET_VALUE(importFromSvn_, importFromSvn) };


    // archived Field Functions 
    bool hasArchived() const { return this->archived_ != nullptr;};
    void deleteArchived() { this->archived_ = nullptr;};
    inline bool archived() const { DARABONBA_PTR_GET_DEFAULT(archived_, false) };
    inline CreateRepositoryResponseBodyResult& setArchived(bool archived) { DARABONBA_PTR_SET_VALUE(archived_, archived) };


    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline CreateRepositoryResponseBodyResult& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline CreateRepositoryResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline int64_t creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
    inline CreateRepositoryResponseBodyResult& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // defaultBranch Field Functions 
    bool hasDefaultBranch() const { return this->defaultBranch_ != nullptr;};
    void deleteDefaultBranch() { this->defaultBranch_ = nullptr;};
    inline string defaultBranch() const { DARABONBA_PTR_GET_DEFAULT(defaultBranch_, "") };
    inline CreateRepositoryResponseBodyResult& setDefaultBranch(string defaultBranch) { DARABONBA_PTR_SET_VALUE(defaultBranch_, defaultBranch) };


    // demoProject Field Functions 
    bool hasDemoProject() const { return this->demoProject_ != nullptr;};
    void deleteDemoProject() { this->demoProject_ = nullptr;};
    inline bool demoProject() const { DARABONBA_PTR_GET_DEFAULT(demoProject_, false) };
    inline CreateRepositoryResponseBodyResult& setDemoProject(bool demoProject) { DARABONBA_PTR_SET_VALUE(demoProject_, demoProject) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRepositoryResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // httpUrlToRepo Field Functions 
    bool hasHttpUrlToRepo() const { return this->httpUrlToRepo_ != nullptr;};
    void deleteHttpUrlToRepo() { this->httpUrlToRepo_ = nullptr;};
    inline string httpUrlToRepo() const { DARABONBA_PTR_GET_DEFAULT(httpUrlToRepo_, "") };
    inline CreateRepositoryResponseBodyResult& setHttpUrlToRepo(string httpUrlToRepo) { DARABONBA_PTR_SET_VALUE(httpUrlToRepo_, httpUrlToRepo) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateRepositoryResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastActivityAt Field Functions 
    bool hasLastActivityAt() const { return this->lastActivityAt_ != nullptr;};
    void deleteLastActivityAt() { this->lastActivityAt_ = nullptr;};
    inline string lastActivityAt() const { DARABONBA_PTR_GET_DEFAULT(lastActivityAt_, "") };
    inline CreateRepositoryResponseBodyResult& setLastActivityAt(string lastActivityAt) { DARABONBA_PTR_SET_VALUE(lastActivityAt_, lastActivityAt) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRepositoryResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameWithNamespace Field Functions 
    bool hasNameWithNamespace() const { return this->nameWithNamespace_ != nullptr;};
    void deleteNameWithNamespace() { this->nameWithNamespace_ = nullptr;};
    inline string nameWithNamespace() const { DARABONBA_PTR_GET_DEFAULT(nameWithNamespace_, "") };
    inline CreateRepositoryResponseBodyResult& setNameWithNamespace(string nameWithNamespace) { DARABONBA_PTR_SET_VALUE(nameWithNamespace_, nameWithNamespace) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline const Models::CreateRepositoryResponseBodyResultNamespace & _namespace() const { DARABONBA_PTR_GET_CONST(namespace_, Models::CreateRepositoryResponseBodyResultNamespace) };
    inline Models::CreateRepositoryResponseBodyResultNamespace _namespace() { DARABONBA_PTR_GET(namespace_, Models::CreateRepositoryResponseBodyResultNamespace) };
    inline CreateRepositoryResponseBodyResult& setNamespace(const Models::CreateRepositoryResponseBodyResultNamespace & _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };
    inline CreateRepositoryResponseBodyResult& setNamespace(Models::CreateRepositoryResponseBodyResultNamespace && _namespace) { DARABONBA_PTR_SET_RVALUE(namespace_, _namespace) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CreateRepositoryResponseBodyResult& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // pathWithNamespace Field Functions 
    bool hasPathWithNamespace() const { return this->pathWithNamespace_ != nullptr;};
    void deletePathWithNamespace() { this->pathWithNamespace_ = nullptr;};
    inline string pathWithNamespace() const { DARABONBA_PTR_GET_DEFAULT(pathWithNamespace_, "") };
    inline CreateRepositoryResponseBodyResult& setPathWithNamespace(string pathWithNamespace) { DARABONBA_PTR_SET_VALUE(pathWithNamespace_, pathWithNamespace) };


    // sshUrlToRepo Field Functions 
    bool hasSshUrlToRepo() const { return this->sshUrlToRepo_ != nullptr;};
    void deleteSshUrlToRepo() { this->sshUrlToRepo_ = nullptr;};
    inline string sshUrlToRepo() const { DARABONBA_PTR_GET_DEFAULT(sshUrlToRepo_, "") };
    inline CreateRepositoryResponseBodyResult& setSshUrlToRepo(string sshUrlToRepo) { DARABONBA_PTR_SET_VALUE(sshUrlToRepo_, sshUrlToRepo) };


    // visibilityLevel Field Functions 
    bool hasVisibilityLevel() const { return this->visibilityLevel_ != nullptr;};
    void deleteVisibilityLevel() { this->visibilityLevel_ = nullptr;};
    inline string visibilityLevel() const { DARABONBA_PTR_GET_DEFAULT(visibilityLevel_, "") };
    inline CreateRepositoryResponseBodyResult& setVisibilityLevel(string visibilityLevel) { DARABONBA_PTR_SET_VALUE(visibilityLevel_, visibilityLevel) };


    // webUrl Field Functions 
    bool hasWebUrl() const { return this->webUrl_ != nullptr;};
    void deleteWebUrl() { this->webUrl_ = nullptr;};
    inline string webUrl() const { DARABONBA_PTR_GET_DEFAULT(webUrl_, "") };
    inline CreateRepositoryResponseBodyResult& setWebUrl(string webUrl) { DARABONBA_PTR_SET_VALUE(webUrl_, webUrl) };


  protected:
    std::shared_ptr<bool> importFromSvn_ = nullptr;
    std::shared_ptr<bool> archived_ = nullptr;
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<int64_t> creatorId_ = nullptr;
    std::shared_ptr<string> defaultBranch_ = nullptr;
    std::shared_ptr<bool> demoProject_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> httpUrlToRepo_ = nullptr;
    // id
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> lastActivityAt_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nameWithNamespace_ = nullptr;
    std::shared_ptr<Models::CreateRepositoryResponseBodyResultNamespace> namespace_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> pathWithNamespace_ = nullptr;
    std::shared_ptr<string> sshUrlToRepo_ = nullptr;
    std::shared_ptr<string> visibilityLevel_ = nullptr;
    // web url
    std::shared_ptr<string> webUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
