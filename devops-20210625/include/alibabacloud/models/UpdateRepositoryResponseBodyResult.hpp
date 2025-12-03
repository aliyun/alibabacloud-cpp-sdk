// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREPOSITORYRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREPOSITORYRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRepositoryResponseBodyResultNamespace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateRepositoryResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRepositoryResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(archived, archived_);
      DARABONBA_PTR_TO_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(buildsEnabled, buildsEnabled_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(defaultBranch, defaultBranch_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(httpUrlToRepo, httpUrlToRepo_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(issuesEnabled, issuesEnabled_);
      DARABONBA_PTR_TO_JSON(lastActivityAt, lastActivityAt_);
      DARABONBA_PTR_TO_JSON(mergeRequestsEnabled, mergeRequestsEnabled_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameWithNamespace, nameWithNamespace_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(pathWithNamespace, pathWithNamespace_);
      DARABONBA_PTR_TO_JSON(snippetsEnabled, snippetsEnabled_);
      DARABONBA_PTR_TO_JSON(sshUrlToRepo, sshUrlToRepo_);
      DARABONBA_PTR_TO_JSON(visibilityLevel, visibilityLevel_);
      DARABONBA_PTR_TO_JSON(webUrl, webUrl_);
      DARABONBA_PTR_TO_JSON(wikiEnabled, wikiEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRepositoryResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(archived, archived_);
      DARABONBA_PTR_FROM_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(buildsEnabled, buildsEnabled_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(defaultBranch, defaultBranch_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(httpUrlToRepo, httpUrlToRepo_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(issuesEnabled, issuesEnabled_);
      DARABONBA_PTR_FROM_JSON(lastActivityAt, lastActivityAt_);
      DARABONBA_PTR_FROM_JSON(mergeRequestsEnabled, mergeRequestsEnabled_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameWithNamespace, nameWithNamespace_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(pathWithNamespace, pathWithNamespace_);
      DARABONBA_PTR_FROM_JSON(snippetsEnabled, snippetsEnabled_);
      DARABONBA_PTR_FROM_JSON(sshUrlToRepo, sshUrlToRepo_);
      DARABONBA_PTR_FROM_JSON(visibilityLevel, visibilityLevel_);
      DARABONBA_PTR_FROM_JSON(webUrl, webUrl_);
      DARABONBA_PTR_FROM_JSON(wikiEnabled, wikiEnabled_);
    };
    UpdateRepositoryResponseBodyResult() = default ;
    UpdateRepositoryResponseBodyResult(const UpdateRepositoryResponseBodyResult &) = default ;
    UpdateRepositoryResponseBodyResult(UpdateRepositoryResponseBodyResult &&) = default ;
    UpdateRepositoryResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRepositoryResponseBodyResult() = default ;
    UpdateRepositoryResponseBodyResult& operator=(const UpdateRepositoryResponseBodyResult &) = default ;
    UpdateRepositoryResponseBodyResult& operator=(UpdateRepositoryResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->archived_ == nullptr
        && return this->avatarUrl_ == nullptr && return this->buildsEnabled_ == nullptr && return this->createdAt_ == nullptr && return this->creatorId_ == nullptr && return this->defaultBranch_ == nullptr
        && return this->description_ == nullptr && return this->httpUrlToRepo_ == nullptr && return this->id_ == nullptr && return this->issuesEnabled_ == nullptr && return this->lastActivityAt_ == nullptr
        && return this->mergeRequestsEnabled_ == nullptr && return this->name_ == nullptr && return this->nameWithNamespace_ == nullptr && return this->namespace_ == nullptr && return this->path_ == nullptr
        && return this->pathWithNamespace_ == nullptr && return this->snippetsEnabled_ == nullptr && return this->sshUrlToRepo_ == nullptr && return this->visibilityLevel_ == nullptr && return this->webUrl_ == nullptr
        && return this->wikiEnabled_ == nullptr; };
    // archived Field Functions 
    bool hasArchived() const { return this->archived_ != nullptr;};
    void deleteArchived() { this->archived_ = nullptr;};
    inline bool archived() const { DARABONBA_PTR_GET_DEFAULT(archived_, false) };
    inline UpdateRepositoryResponseBodyResult& setArchived(bool archived) { DARABONBA_PTR_SET_VALUE(archived_, archived) };


    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline UpdateRepositoryResponseBodyResult& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // buildsEnabled Field Functions 
    bool hasBuildsEnabled() const { return this->buildsEnabled_ != nullptr;};
    void deleteBuildsEnabled() { this->buildsEnabled_ = nullptr;};
    inline bool buildsEnabled() const { DARABONBA_PTR_GET_DEFAULT(buildsEnabled_, false) };
    inline UpdateRepositoryResponseBodyResult& setBuildsEnabled(bool buildsEnabled) { DARABONBA_PTR_SET_VALUE(buildsEnabled_, buildsEnabled) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline UpdateRepositoryResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline int64_t creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
    inline UpdateRepositoryResponseBodyResult& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // defaultBranch Field Functions 
    bool hasDefaultBranch() const { return this->defaultBranch_ != nullptr;};
    void deleteDefaultBranch() { this->defaultBranch_ = nullptr;};
    inline string defaultBranch() const { DARABONBA_PTR_GET_DEFAULT(defaultBranch_, "") };
    inline UpdateRepositoryResponseBodyResult& setDefaultBranch(string defaultBranch) { DARABONBA_PTR_SET_VALUE(defaultBranch_, defaultBranch) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateRepositoryResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // httpUrlToRepo Field Functions 
    bool hasHttpUrlToRepo() const { return this->httpUrlToRepo_ != nullptr;};
    void deleteHttpUrlToRepo() { this->httpUrlToRepo_ = nullptr;};
    inline string httpUrlToRepo() const { DARABONBA_PTR_GET_DEFAULT(httpUrlToRepo_, "") };
    inline UpdateRepositoryResponseBodyResult& setHttpUrlToRepo(string httpUrlToRepo) { DARABONBA_PTR_SET_VALUE(httpUrlToRepo_, httpUrlToRepo) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateRepositoryResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // issuesEnabled Field Functions 
    bool hasIssuesEnabled() const { return this->issuesEnabled_ != nullptr;};
    void deleteIssuesEnabled() { this->issuesEnabled_ = nullptr;};
    inline bool issuesEnabled() const { DARABONBA_PTR_GET_DEFAULT(issuesEnabled_, false) };
    inline UpdateRepositoryResponseBodyResult& setIssuesEnabled(bool issuesEnabled) { DARABONBA_PTR_SET_VALUE(issuesEnabled_, issuesEnabled) };


    // lastActivityAt Field Functions 
    bool hasLastActivityAt() const { return this->lastActivityAt_ != nullptr;};
    void deleteLastActivityAt() { this->lastActivityAt_ = nullptr;};
    inline string lastActivityAt() const { DARABONBA_PTR_GET_DEFAULT(lastActivityAt_, "") };
    inline UpdateRepositoryResponseBodyResult& setLastActivityAt(string lastActivityAt) { DARABONBA_PTR_SET_VALUE(lastActivityAt_, lastActivityAt) };


    // mergeRequestsEnabled Field Functions 
    bool hasMergeRequestsEnabled() const { return this->mergeRequestsEnabled_ != nullptr;};
    void deleteMergeRequestsEnabled() { this->mergeRequestsEnabled_ = nullptr;};
    inline bool mergeRequestsEnabled() const { DARABONBA_PTR_GET_DEFAULT(mergeRequestsEnabled_, false) };
    inline UpdateRepositoryResponseBodyResult& setMergeRequestsEnabled(bool mergeRequestsEnabled) { DARABONBA_PTR_SET_VALUE(mergeRequestsEnabled_, mergeRequestsEnabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateRepositoryResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameWithNamespace Field Functions 
    bool hasNameWithNamespace() const { return this->nameWithNamespace_ != nullptr;};
    void deleteNameWithNamespace() { this->nameWithNamespace_ = nullptr;};
    inline string nameWithNamespace() const { DARABONBA_PTR_GET_DEFAULT(nameWithNamespace_, "") };
    inline UpdateRepositoryResponseBodyResult& setNameWithNamespace(string nameWithNamespace) { DARABONBA_PTR_SET_VALUE(nameWithNamespace_, nameWithNamespace) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline const Models::UpdateRepositoryResponseBodyResultNamespace & _namespace() const { DARABONBA_PTR_GET_CONST(namespace_, Models::UpdateRepositoryResponseBodyResultNamespace) };
    inline Models::UpdateRepositoryResponseBodyResultNamespace _namespace() { DARABONBA_PTR_GET(namespace_, Models::UpdateRepositoryResponseBodyResultNamespace) };
    inline UpdateRepositoryResponseBodyResult& setNamespace(const Models::UpdateRepositoryResponseBodyResultNamespace & _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };
    inline UpdateRepositoryResponseBodyResult& setNamespace(Models::UpdateRepositoryResponseBodyResultNamespace && _namespace) { DARABONBA_PTR_SET_RVALUE(namespace_, _namespace) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline UpdateRepositoryResponseBodyResult& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // pathWithNamespace Field Functions 
    bool hasPathWithNamespace() const { return this->pathWithNamespace_ != nullptr;};
    void deletePathWithNamespace() { this->pathWithNamespace_ = nullptr;};
    inline string pathWithNamespace() const { DARABONBA_PTR_GET_DEFAULT(pathWithNamespace_, "") };
    inline UpdateRepositoryResponseBodyResult& setPathWithNamespace(string pathWithNamespace) { DARABONBA_PTR_SET_VALUE(pathWithNamespace_, pathWithNamespace) };


    // snippetsEnabled Field Functions 
    bool hasSnippetsEnabled() const { return this->snippetsEnabled_ != nullptr;};
    void deleteSnippetsEnabled() { this->snippetsEnabled_ = nullptr;};
    inline bool snippetsEnabled() const { DARABONBA_PTR_GET_DEFAULT(snippetsEnabled_, false) };
    inline UpdateRepositoryResponseBodyResult& setSnippetsEnabled(bool snippetsEnabled) { DARABONBA_PTR_SET_VALUE(snippetsEnabled_, snippetsEnabled) };


    // sshUrlToRepo Field Functions 
    bool hasSshUrlToRepo() const { return this->sshUrlToRepo_ != nullptr;};
    void deleteSshUrlToRepo() { this->sshUrlToRepo_ = nullptr;};
    inline string sshUrlToRepo() const { DARABONBA_PTR_GET_DEFAULT(sshUrlToRepo_, "") };
    inline UpdateRepositoryResponseBodyResult& setSshUrlToRepo(string sshUrlToRepo) { DARABONBA_PTR_SET_VALUE(sshUrlToRepo_, sshUrlToRepo) };


    // visibilityLevel Field Functions 
    bool hasVisibilityLevel() const { return this->visibilityLevel_ != nullptr;};
    void deleteVisibilityLevel() { this->visibilityLevel_ = nullptr;};
    inline int32_t visibilityLevel() const { DARABONBA_PTR_GET_DEFAULT(visibilityLevel_, 0) };
    inline UpdateRepositoryResponseBodyResult& setVisibilityLevel(int32_t visibilityLevel) { DARABONBA_PTR_SET_VALUE(visibilityLevel_, visibilityLevel) };


    // webUrl Field Functions 
    bool hasWebUrl() const { return this->webUrl_ != nullptr;};
    void deleteWebUrl() { this->webUrl_ = nullptr;};
    inline string webUrl() const { DARABONBA_PTR_GET_DEFAULT(webUrl_, "") };
    inline UpdateRepositoryResponseBodyResult& setWebUrl(string webUrl) { DARABONBA_PTR_SET_VALUE(webUrl_, webUrl) };


    // wikiEnabled Field Functions 
    bool hasWikiEnabled() const { return this->wikiEnabled_ != nullptr;};
    void deleteWikiEnabled() { this->wikiEnabled_ = nullptr;};
    inline bool wikiEnabled() const { DARABONBA_PTR_GET_DEFAULT(wikiEnabled_, false) };
    inline UpdateRepositoryResponseBodyResult& setWikiEnabled(bool wikiEnabled) { DARABONBA_PTR_SET_VALUE(wikiEnabled_, wikiEnabled) };


  protected:
    std::shared_ptr<bool> archived_ = nullptr;
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<bool> buildsEnabled_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<int64_t> creatorId_ = nullptr;
    std::shared_ptr<string> defaultBranch_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> httpUrlToRepo_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<bool> issuesEnabled_ = nullptr;
    std::shared_ptr<string> lastActivityAt_ = nullptr;
    std::shared_ptr<bool> mergeRequestsEnabled_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nameWithNamespace_ = nullptr;
    std::shared_ptr<Models::UpdateRepositoryResponseBodyResultNamespace> namespace_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> pathWithNamespace_ = nullptr;
    std::shared_ptr<bool> snippetsEnabled_ = nullptr;
    std::shared_ptr<string> sshUrlToRepo_ = nullptr;
    std::shared_ptr<int32_t> visibilityLevel_ = nullptr;
    std::shared_ptr<string> webUrl_ = nullptr;
    std::shared_ptr<bool> wikiEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
