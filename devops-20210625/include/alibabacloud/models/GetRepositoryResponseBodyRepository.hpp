// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOSITORYRESPONSEBODYREPOSITORY_HPP_
#define ALIBABACLOUD_MODELS_GETREPOSITORYRESPONSEBODYREPOSITORY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRepositoryResponseBodyRepositoryNamespace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetRepositoryResponseBodyRepository : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepositoryResponseBodyRepository& obj) { 
      DARABONBA_PTR_TO_JSON(archive, archive_);
      DARABONBA_PTR_TO_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(defaultBranch, defaultBranch_);
      DARABONBA_PTR_TO_JSON(demoProjectStatus, demoProjectStatus_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(httpUrlToRepository, httpUrlToRepository_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(lastActivityAt, lastActivityAt_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameWithNamespace, nameWithNamespace_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(pathWithNamespace, pathWithNamespace_);
      DARABONBA_PTR_TO_JSON(sshUrlToRepository, sshUrlToRepository_);
      DARABONBA_PTR_TO_JSON(visibilityLevel, visibilityLevel_);
      DARABONBA_PTR_TO_JSON(webUrl, webUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepositoryResponseBodyRepository& obj) { 
      DARABONBA_PTR_FROM_JSON(archive, archive_);
      DARABONBA_PTR_FROM_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(defaultBranch, defaultBranch_);
      DARABONBA_PTR_FROM_JSON(demoProjectStatus, demoProjectStatus_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(httpUrlToRepository, httpUrlToRepository_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(lastActivityAt, lastActivityAt_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameWithNamespace, nameWithNamespace_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(pathWithNamespace, pathWithNamespace_);
      DARABONBA_PTR_FROM_JSON(sshUrlToRepository, sshUrlToRepository_);
      DARABONBA_PTR_FROM_JSON(visibilityLevel, visibilityLevel_);
      DARABONBA_PTR_FROM_JSON(webUrl, webUrl_);
    };
    GetRepositoryResponseBodyRepository() = default ;
    GetRepositoryResponseBodyRepository(const GetRepositoryResponseBodyRepository &) = default ;
    GetRepositoryResponseBodyRepository(GetRepositoryResponseBodyRepository &&) = default ;
    GetRepositoryResponseBodyRepository(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepositoryResponseBodyRepository() = default ;
    GetRepositoryResponseBodyRepository& operator=(const GetRepositoryResponseBodyRepository &) = default ;
    GetRepositoryResponseBodyRepository& operator=(GetRepositoryResponseBodyRepository &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->archive_ == nullptr
        && return this->avatarUrl_ == nullptr && return this->createdAt_ == nullptr && return this->creatorId_ == nullptr && return this->defaultBranch_ == nullptr && return this->demoProjectStatus_ == nullptr
        && return this->description_ == nullptr && return this->httpUrlToRepository_ == nullptr && return this->id_ == nullptr && return this->lastActivityAt_ == nullptr && return this->name_ == nullptr
        && return this->nameWithNamespace_ == nullptr && return this->namespace_ == nullptr && return this->path_ == nullptr && return this->pathWithNamespace_ == nullptr && return this->sshUrlToRepository_ == nullptr
        && return this->visibilityLevel_ == nullptr && return this->webUrl_ == nullptr; };
    // archive Field Functions 
    bool hasArchive() const { return this->archive_ != nullptr;};
    void deleteArchive() { this->archive_ = nullptr;};
    inline bool archive() const { DARABONBA_PTR_GET_DEFAULT(archive_, false) };
    inline GetRepositoryResponseBodyRepository& setArchive(bool archive) { DARABONBA_PTR_SET_VALUE(archive_, archive) };


    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline GetRepositoryResponseBodyRepository& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline GetRepositoryResponseBodyRepository& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline int64_t creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
    inline GetRepositoryResponseBodyRepository& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // defaultBranch Field Functions 
    bool hasDefaultBranch() const { return this->defaultBranch_ != nullptr;};
    void deleteDefaultBranch() { this->defaultBranch_ = nullptr;};
    inline string defaultBranch() const { DARABONBA_PTR_GET_DEFAULT(defaultBranch_, "") };
    inline GetRepositoryResponseBodyRepository& setDefaultBranch(string defaultBranch) { DARABONBA_PTR_SET_VALUE(defaultBranch_, defaultBranch) };


    // demoProjectStatus Field Functions 
    bool hasDemoProjectStatus() const { return this->demoProjectStatus_ != nullptr;};
    void deleteDemoProjectStatus() { this->demoProjectStatus_ = nullptr;};
    inline bool demoProjectStatus() const { DARABONBA_PTR_GET_DEFAULT(demoProjectStatus_, false) };
    inline GetRepositoryResponseBodyRepository& setDemoProjectStatus(bool demoProjectStatus) { DARABONBA_PTR_SET_VALUE(demoProjectStatus_, demoProjectStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetRepositoryResponseBodyRepository& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // httpUrlToRepository Field Functions 
    bool hasHttpUrlToRepository() const { return this->httpUrlToRepository_ != nullptr;};
    void deleteHttpUrlToRepository() { this->httpUrlToRepository_ = nullptr;};
    inline string httpUrlToRepository() const { DARABONBA_PTR_GET_DEFAULT(httpUrlToRepository_, "") };
    inline GetRepositoryResponseBodyRepository& setHttpUrlToRepository(string httpUrlToRepository) { DARABONBA_PTR_SET_VALUE(httpUrlToRepository_, httpUrlToRepository) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetRepositoryResponseBodyRepository& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastActivityAt Field Functions 
    bool hasLastActivityAt() const { return this->lastActivityAt_ != nullptr;};
    void deleteLastActivityAt() { this->lastActivityAt_ = nullptr;};
    inline string lastActivityAt() const { DARABONBA_PTR_GET_DEFAULT(lastActivityAt_, "") };
    inline GetRepositoryResponseBodyRepository& setLastActivityAt(string lastActivityAt) { DARABONBA_PTR_SET_VALUE(lastActivityAt_, lastActivityAt) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRepositoryResponseBodyRepository& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameWithNamespace Field Functions 
    bool hasNameWithNamespace() const { return this->nameWithNamespace_ != nullptr;};
    void deleteNameWithNamespace() { this->nameWithNamespace_ = nullptr;};
    inline string nameWithNamespace() const { DARABONBA_PTR_GET_DEFAULT(nameWithNamespace_, "") };
    inline GetRepositoryResponseBodyRepository& setNameWithNamespace(string nameWithNamespace) { DARABONBA_PTR_SET_VALUE(nameWithNamespace_, nameWithNamespace) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline const Models::GetRepositoryResponseBodyRepositoryNamespace & _namespace() const { DARABONBA_PTR_GET_CONST(namespace_, Models::GetRepositoryResponseBodyRepositoryNamespace) };
    inline Models::GetRepositoryResponseBodyRepositoryNamespace _namespace() { DARABONBA_PTR_GET(namespace_, Models::GetRepositoryResponseBodyRepositoryNamespace) };
    inline GetRepositoryResponseBodyRepository& setNamespace(const Models::GetRepositoryResponseBodyRepositoryNamespace & _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };
    inline GetRepositoryResponseBodyRepository& setNamespace(Models::GetRepositoryResponseBodyRepositoryNamespace && _namespace) { DARABONBA_PTR_SET_RVALUE(namespace_, _namespace) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetRepositoryResponseBodyRepository& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // pathWithNamespace Field Functions 
    bool hasPathWithNamespace() const { return this->pathWithNamespace_ != nullptr;};
    void deletePathWithNamespace() { this->pathWithNamespace_ = nullptr;};
    inline string pathWithNamespace() const { DARABONBA_PTR_GET_DEFAULT(pathWithNamespace_, "") };
    inline GetRepositoryResponseBodyRepository& setPathWithNamespace(string pathWithNamespace) { DARABONBA_PTR_SET_VALUE(pathWithNamespace_, pathWithNamespace) };


    // sshUrlToRepository Field Functions 
    bool hasSshUrlToRepository() const { return this->sshUrlToRepository_ != nullptr;};
    void deleteSshUrlToRepository() { this->sshUrlToRepository_ = nullptr;};
    inline string sshUrlToRepository() const { DARABONBA_PTR_GET_DEFAULT(sshUrlToRepository_, "") };
    inline GetRepositoryResponseBodyRepository& setSshUrlToRepository(string sshUrlToRepository) { DARABONBA_PTR_SET_VALUE(sshUrlToRepository_, sshUrlToRepository) };


    // visibilityLevel Field Functions 
    bool hasVisibilityLevel() const { return this->visibilityLevel_ != nullptr;};
    void deleteVisibilityLevel() { this->visibilityLevel_ = nullptr;};
    inline int32_t visibilityLevel() const { DARABONBA_PTR_GET_DEFAULT(visibilityLevel_, 0) };
    inline GetRepositoryResponseBodyRepository& setVisibilityLevel(int32_t visibilityLevel) { DARABONBA_PTR_SET_VALUE(visibilityLevel_, visibilityLevel) };


    // webUrl Field Functions 
    bool hasWebUrl() const { return this->webUrl_ != nullptr;};
    void deleteWebUrl() { this->webUrl_ = nullptr;};
    inline string webUrl() const { DARABONBA_PTR_GET_DEFAULT(webUrl_, "") };
    inline GetRepositoryResponseBodyRepository& setWebUrl(string webUrl) { DARABONBA_PTR_SET_VALUE(webUrl_, webUrl) };


  protected:
    std::shared_ptr<bool> archive_ = nullptr;
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<int64_t> creatorId_ = nullptr;
    std::shared_ptr<string> defaultBranch_ = nullptr;
    std::shared_ptr<bool> demoProjectStatus_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> httpUrlToRepository_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> lastActivityAt_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nameWithNamespace_ = nullptr;
    std::shared_ptr<Models::GetRepositoryResponseBodyRepositoryNamespace> namespace_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> pathWithNamespace_ = nullptr;
    std::shared_ptr<string> sshUrlToRepository_ = nullptr;
    std::shared_ptr<int32_t> visibilityLevel_ = nullptr;
    std::shared_ptr<string> webUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
