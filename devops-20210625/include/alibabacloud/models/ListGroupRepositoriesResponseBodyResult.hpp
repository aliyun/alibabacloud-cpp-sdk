// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPREPOSITORIESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPREPOSITORIESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListGroupRepositoriesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupRepositoriesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(archived, archived_);
      DARABONBA_PTR_TO_JSON(commitCount, commitCount_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(httpUrl, httpUrl_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(importUrl, importUrl_);
      DARABONBA_PTR_TO_JSON(isStared, isStared_);
      DARABONBA_PTR_TO_JSON(issuesEnabled, issuesEnabled_);
      DARABONBA_PTR_TO_JSON(lastActivityAt, lastActivityAt_);
      DARABONBA_PTR_TO_JSON(mergeRequestsEnabled, mergeRequestsEnabled_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameWithNamespace, nameWithNamespace_);
      DARABONBA_PTR_TO_JSON(namespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(pathWithNamespace, pathWithNamespace_);
      DARABONBA_PTR_TO_JSON(privateFlag, privateFlag_);
      DARABONBA_PTR_TO_JSON(snippetsEnabled, snippetsEnabled_);
      DARABONBA_PTR_TO_JSON(sshUrl, sshUrl_);
      DARABONBA_PTR_TO_JSON(starCount, starCount_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(visibilityLevel, visibilityLevel_);
      DARABONBA_PTR_TO_JSON(webUrl, webUrl_);
      DARABONBA_PTR_TO_JSON(wikiEnabled, wikiEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupRepositoriesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(archived, archived_);
      DARABONBA_PTR_FROM_JSON(commitCount, commitCount_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(httpUrl, httpUrl_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(importUrl, importUrl_);
      DARABONBA_PTR_FROM_JSON(isStared, isStared_);
      DARABONBA_PTR_FROM_JSON(issuesEnabled, issuesEnabled_);
      DARABONBA_PTR_FROM_JSON(lastActivityAt, lastActivityAt_);
      DARABONBA_PTR_FROM_JSON(mergeRequestsEnabled, mergeRequestsEnabled_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameWithNamespace, nameWithNamespace_);
      DARABONBA_PTR_FROM_JSON(namespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(pathWithNamespace, pathWithNamespace_);
      DARABONBA_PTR_FROM_JSON(privateFlag, privateFlag_);
      DARABONBA_PTR_FROM_JSON(snippetsEnabled, snippetsEnabled_);
      DARABONBA_PTR_FROM_JSON(sshUrl, sshUrl_);
      DARABONBA_PTR_FROM_JSON(starCount, starCount_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(visibilityLevel, visibilityLevel_);
      DARABONBA_PTR_FROM_JSON(webUrl, webUrl_);
      DARABONBA_PTR_FROM_JSON(wikiEnabled, wikiEnabled_);
    };
    ListGroupRepositoriesResponseBodyResult() = default ;
    ListGroupRepositoriesResponseBodyResult(const ListGroupRepositoriesResponseBodyResult &) = default ;
    ListGroupRepositoriesResponseBodyResult(ListGroupRepositoriesResponseBodyResult &&) = default ;
    ListGroupRepositoriesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupRepositoriesResponseBodyResult() = default ;
    ListGroupRepositoriesResponseBodyResult& operator=(const ListGroupRepositoriesResponseBodyResult &) = default ;
    ListGroupRepositoriesResponseBodyResult& operator=(ListGroupRepositoriesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->archived_ == nullptr
        && return this->commitCount_ == nullptr && return this->createdAt_ == nullptr && return this->creatorId_ == nullptr && return this->description_ == nullptr && return this->httpUrl_ == nullptr
        && return this->id_ == nullptr && return this->importUrl_ == nullptr && return this->isStared_ == nullptr && return this->issuesEnabled_ == nullptr && return this->lastActivityAt_ == nullptr
        && return this->mergeRequestsEnabled_ == nullptr && return this->name_ == nullptr && return this->nameWithNamespace_ == nullptr && return this->namespaceId_ == nullptr && return this->path_ == nullptr
        && return this->pathWithNamespace_ == nullptr && return this->privateFlag_ == nullptr && return this->snippetsEnabled_ == nullptr && return this->sshUrl_ == nullptr && return this->starCount_ == nullptr
        && return this->updatedAt_ == nullptr && return this->visibilityLevel_ == nullptr && return this->webUrl_ == nullptr && return this->wikiEnabled_ == nullptr; };
    // archived Field Functions 
    bool hasArchived() const { return this->archived_ != nullptr;};
    void deleteArchived() { this->archived_ = nullptr;};
    inline bool archived() const { DARABONBA_PTR_GET_DEFAULT(archived_, false) };
    inline ListGroupRepositoriesResponseBodyResult& setArchived(bool archived) { DARABONBA_PTR_SET_VALUE(archived_, archived) };


    // commitCount Field Functions 
    bool hasCommitCount() const { return this->commitCount_ != nullptr;};
    void deleteCommitCount() { this->commitCount_ = nullptr;};
    inline int64_t commitCount() const { DARABONBA_PTR_GET_DEFAULT(commitCount_, 0L) };
    inline ListGroupRepositoriesResponseBodyResult& setCommitCount(int64_t commitCount) { DARABONBA_PTR_SET_VALUE(commitCount_, commitCount) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListGroupRepositoriesResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline int64_t creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
    inline ListGroupRepositoriesResponseBodyResult& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListGroupRepositoriesResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // httpUrl Field Functions 
    bool hasHttpUrl() const { return this->httpUrl_ != nullptr;};
    void deleteHttpUrl() { this->httpUrl_ = nullptr;};
    inline string httpUrl() const { DARABONBA_PTR_GET_DEFAULT(httpUrl_, "") };
    inline ListGroupRepositoriesResponseBodyResult& setHttpUrl(string httpUrl) { DARABONBA_PTR_SET_VALUE(httpUrl_, httpUrl) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListGroupRepositoriesResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // importUrl Field Functions 
    bool hasImportUrl() const { return this->importUrl_ != nullptr;};
    void deleteImportUrl() { this->importUrl_ = nullptr;};
    inline string importUrl() const { DARABONBA_PTR_GET_DEFAULT(importUrl_, "") };
    inline ListGroupRepositoriesResponseBodyResult& setImportUrl(string importUrl) { DARABONBA_PTR_SET_VALUE(importUrl_, importUrl) };


    // isStared Field Functions 
    bool hasIsStared() const { return this->isStared_ != nullptr;};
    void deleteIsStared() { this->isStared_ = nullptr;};
    inline bool isStared() const { DARABONBA_PTR_GET_DEFAULT(isStared_, false) };
    inline ListGroupRepositoriesResponseBodyResult& setIsStared(bool isStared) { DARABONBA_PTR_SET_VALUE(isStared_, isStared) };


    // issuesEnabled Field Functions 
    bool hasIssuesEnabled() const { return this->issuesEnabled_ != nullptr;};
    void deleteIssuesEnabled() { this->issuesEnabled_ = nullptr;};
    inline bool issuesEnabled() const { DARABONBA_PTR_GET_DEFAULT(issuesEnabled_, false) };
    inline ListGroupRepositoriesResponseBodyResult& setIssuesEnabled(bool issuesEnabled) { DARABONBA_PTR_SET_VALUE(issuesEnabled_, issuesEnabled) };


    // lastActivityAt Field Functions 
    bool hasLastActivityAt() const { return this->lastActivityAt_ != nullptr;};
    void deleteLastActivityAt() { this->lastActivityAt_ = nullptr;};
    inline string lastActivityAt() const { DARABONBA_PTR_GET_DEFAULT(lastActivityAt_, "") };
    inline ListGroupRepositoriesResponseBodyResult& setLastActivityAt(string lastActivityAt) { DARABONBA_PTR_SET_VALUE(lastActivityAt_, lastActivityAt) };


    // mergeRequestsEnabled Field Functions 
    bool hasMergeRequestsEnabled() const { return this->mergeRequestsEnabled_ != nullptr;};
    void deleteMergeRequestsEnabled() { this->mergeRequestsEnabled_ = nullptr;};
    inline bool mergeRequestsEnabled() const { DARABONBA_PTR_GET_DEFAULT(mergeRequestsEnabled_, false) };
    inline ListGroupRepositoriesResponseBodyResult& setMergeRequestsEnabled(bool mergeRequestsEnabled) { DARABONBA_PTR_SET_VALUE(mergeRequestsEnabled_, mergeRequestsEnabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGroupRepositoriesResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameWithNamespace Field Functions 
    bool hasNameWithNamespace() const { return this->nameWithNamespace_ != nullptr;};
    void deleteNameWithNamespace() { this->nameWithNamespace_ = nullptr;};
    inline string nameWithNamespace() const { DARABONBA_PTR_GET_DEFAULT(nameWithNamespace_, "") };
    inline ListGroupRepositoriesResponseBodyResult& setNameWithNamespace(string nameWithNamespace) { DARABONBA_PTR_SET_VALUE(nameWithNamespace_, nameWithNamespace) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline bool namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, false) };
    inline ListGroupRepositoriesResponseBodyResult& setNamespaceId(bool namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListGroupRepositoriesResponseBodyResult& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // pathWithNamespace Field Functions 
    bool hasPathWithNamespace() const { return this->pathWithNamespace_ != nullptr;};
    void deletePathWithNamespace() { this->pathWithNamespace_ = nullptr;};
    inline string pathWithNamespace() const { DARABONBA_PTR_GET_DEFAULT(pathWithNamespace_, "") };
    inline ListGroupRepositoriesResponseBodyResult& setPathWithNamespace(string pathWithNamespace) { DARABONBA_PTR_SET_VALUE(pathWithNamespace_, pathWithNamespace) };


    // privateFlag Field Functions 
    bool hasPrivateFlag() const { return this->privateFlag_ != nullptr;};
    void deletePrivateFlag() { this->privateFlag_ = nullptr;};
    inline bool privateFlag() const { DARABONBA_PTR_GET_DEFAULT(privateFlag_, false) };
    inline ListGroupRepositoriesResponseBodyResult& setPrivateFlag(bool privateFlag) { DARABONBA_PTR_SET_VALUE(privateFlag_, privateFlag) };


    // snippetsEnabled Field Functions 
    bool hasSnippetsEnabled() const { return this->snippetsEnabled_ != nullptr;};
    void deleteSnippetsEnabled() { this->snippetsEnabled_ = nullptr;};
    inline bool snippetsEnabled() const { DARABONBA_PTR_GET_DEFAULT(snippetsEnabled_, false) };
    inline ListGroupRepositoriesResponseBodyResult& setSnippetsEnabled(bool snippetsEnabled) { DARABONBA_PTR_SET_VALUE(snippetsEnabled_, snippetsEnabled) };


    // sshUrl Field Functions 
    bool hasSshUrl() const { return this->sshUrl_ != nullptr;};
    void deleteSshUrl() { this->sshUrl_ = nullptr;};
    inline string sshUrl() const { DARABONBA_PTR_GET_DEFAULT(sshUrl_, "") };
    inline ListGroupRepositoriesResponseBodyResult& setSshUrl(string sshUrl) { DARABONBA_PTR_SET_VALUE(sshUrl_, sshUrl) };


    // starCount Field Functions 
    bool hasStarCount() const { return this->starCount_ != nullptr;};
    void deleteStarCount() { this->starCount_ = nullptr;};
    inline int32_t starCount() const { DARABONBA_PTR_GET_DEFAULT(starCount_, 0) };
    inline ListGroupRepositoriesResponseBodyResult& setStarCount(int32_t starCount) { DARABONBA_PTR_SET_VALUE(starCount_, starCount) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline ListGroupRepositoriesResponseBodyResult& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // visibilityLevel Field Functions 
    bool hasVisibilityLevel() const { return this->visibilityLevel_ != nullptr;};
    void deleteVisibilityLevel() { this->visibilityLevel_ = nullptr;};
    inline int32_t visibilityLevel() const { DARABONBA_PTR_GET_DEFAULT(visibilityLevel_, 0) };
    inline ListGroupRepositoriesResponseBodyResult& setVisibilityLevel(int32_t visibilityLevel) { DARABONBA_PTR_SET_VALUE(visibilityLevel_, visibilityLevel) };


    // webUrl Field Functions 
    bool hasWebUrl() const { return this->webUrl_ != nullptr;};
    void deleteWebUrl() { this->webUrl_ = nullptr;};
    inline string webUrl() const { DARABONBA_PTR_GET_DEFAULT(webUrl_, "") };
    inline ListGroupRepositoriesResponseBodyResult& setWebUrl(string webUrl) { DARABONBA_PTR_SET_VALUE(webUrl_, webUrl) };


    // wikiEnabled Field Functions 
    bool hasWikiEnabled() const { return this->wikiEnabled_ != nullptr;};
    void deleteWikiEnabled() { this->wikiEnabled_ = nullptr;};
    inline bool wikiEnabled() const { DARABONBA_PTR_GET_DEFAULT(wikiEnabled_, false) };
    inline ListGroupRepositoriesResponseBodyResult& setWikiEnabled(bool wikiEnabled) { DARABONBA_PTR_SET_VALUE(wikiEnabled_, wikiEnabled) };


  protected:
    std::shared_ptr<bool> archived_ = nullptr;
    std::shared_ptr<int64_t> commitCount_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<int64_t> creatorId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> httpUrl_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> importUrl_ = nullptr;
    std::shared_ptr<bool> isStared_ = nullptr;
    std::shared_ptr<bool> issuesEnabled_ = nullptr;
    std::shared_ptr<string> lastActivityAt_ = nullptr;
    std::shared_ptr<bool> mergeRequestsEnabled_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nameWithNamespace_ = nullptr;
    std::shared_ptr<bool> namespaceId_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> pathWithNamespace_ = nullptr;
    std::shared_ptr<bool> privateFlag_ = nullptr;
    std::shared_ptr<bool> snippetsEnabled_ = nullptr;
    std::shared_ptr<string> sshUrl_ = nullptr;
    std::shared_ptr<int32_t> starCount_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
    std::shared_ptr<int32_t> visibilityLevel_ = nullptr;
    std::shared_ptr<string> webUrl_ = nullptr;
    std::shared_ptr<bool> wikiEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
