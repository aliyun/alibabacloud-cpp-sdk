// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGITREPOSITORIESRESPONSEBODYGITREPOS_HPP_
#define ALIBABACLOUD_MODELS_LISTGITREPOSITORIESRESPONSEBODYGITREPOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListGitRepositoriesResponseBodyGitRepos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGitRepositoriesResponseBodyGitRepos& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FullName, fullName_);
      DARABONBA_PTR_TO_JSON(HtmlUrl, htmlUrl_);
      DARABONBA_PTR_TO_JSON(IsPrivate, isPrivate_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGitRepositoriesResponseBodyGitRepos& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FullName, fullName_);
      DARABONBA_PTR_FROM_JSON(HtmlUrl, htmlUrl_);
      DARABONBA_PTR_FROM_JSON(IsPrivate, isPrivate_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
    };
    ListGitRepositoriesResponseBodyGitRepos() = default ;
    ListGitRepositoriesResponseBodyGitRepos(const ListGitRepositoriesResponseBodyGitRepos &) = default ;
    ListGitRepositoriesResponseBodyGitRepos(ListGitRepositoriesResponseBodyGitRepos &&) = default ;
    ListGitRepositoriesResponseBodyGitRepos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGitRepositoriesResponseBodyGitRepos() = default ;
    ListGitRepositoriesResponseBodyGitRepos& operator=(const ListGitRepositoriesResponseBodyGitRepos &) = default ;
    ListGitRepositoriesResponseBodyGitRepos& operator=(ListGitRepositoriesResponseBodyGitRepos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->fullName_ == nullptr && return this->htmlUrl_ == nullptr && return this->isPrivate_ == nullptr && return this->repoId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListGitRepositoriesResponseBodyGitRepos& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fullName Field Functions 
    bool hasFullName() const { return this->fullName_ != nullptr;};
    void deleteFullName() { this->fullName_ = nullptr;};
    inline string fullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
    inline ListGitRepositoriesResponseBodyGitRepos& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


    // htmlUrl Field Functions 
    bool hasHtmlUrl() const { return this->htmlUrl_ != nullptr;};
    void deleteHtmlUrl() { this->htmlUrl_ = nullptr;};
    inline string htmlUrl() const { DARABONBA_PTR_GET_DEFAULT(htmlUrl_, "") };
    inline ListGitRepositoriesResponseBodyGitRepos& setHtmlUrl(string htmlUrl) { DARABONBA_PTR_SET_VALUE(htmlUrl_, htmlUrl) };


    // isPrivate Field Functions 
    bool hasIsPrivate() const { return this->isPrivate_ != nullptr;};
    void deleteIsPrivate() { this->isPrivate_ = nullptr;};
    inline bool isPrivate() const { DARABONBA_PTR_GET_DEFAULT(isPrivate_, false) };
    inline ListGitRepositoriesResponseBodyGitRepos& setIsPrivate(bool isPrivate) { DARABONBA_PTR_SET_VALUE(isPrivate_, isPrivate) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline int64_t repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, 0L) };
    inline ListGitRepositoriesResponseBodyGitRepos& setRepoId(int64_t repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> fullName_ = nullptr;
    std::shared_ptr<string> htmlUrl_ = nullptr;
    std::shared_ptr<bool> isPrivate_ = nullptr;
    std::shared_ptr<int64_t> repoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
