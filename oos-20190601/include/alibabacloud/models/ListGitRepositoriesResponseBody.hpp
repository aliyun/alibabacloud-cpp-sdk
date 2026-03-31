// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGITREPOSITORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGITREPOSITORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListGitRepositoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGitRepositoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(GitRepos, gitRepos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGitRepositoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(GitRepos, gitRepos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListGitRepositoriesResponseBody() = default ;
    ListGitRepositoriesResponseBody(const ListGitRepositoriesResponseBody &) = default ;
    ListGitRepositoriesResponseBody(ListGitRepositoriesResponseBody &&) = default ;
    ListGitRepositoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGitRepositoriesResponseBody() = default ;
    ListGitRepositoriesResponseBody& operator=(const ListGitRepositoriesResponseBody &) = default ;
    ListGitRepositoriesResponseBody& operator=(ListGitRepositoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GitRepos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GitRepos& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FullName, fullName_);
        DARABONBA_PTR_TO_JSON(HtmlUrl, htmlUrl_);
        DARABONBA_PTR_TO_JSON(IsPrivate, isPrivate_);
        DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      };
      friend void from_json(const Darabonba::Json& j, GitRepos& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FullName, fullName_);
        DARABONBA_PTR_FROM_JSON(HtmlUrl, htmlUrl_);
        DARABONBA_PTR_FROM_JSON(IsPrivate, isPrivate_);
        DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      };
      GitRepos() = default ;
      GitRepos(const GitRepos &) = default ;
      GitRepos(GitRepos &&) = default ;
      GitRepos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GitRepos() = default ;
      GitRepos& operator=(const GitRepos &) = default ;
      GitRepos& operator=(GitRepos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->fullName_ == nullptr && this->htmlUrl_ == nullptr && this->isPrivate_ == nullptr && this->repoId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline GitRepos& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fullName Field Functions 
      bool hasFullName() const { return this->fullName_ != nullptr;};
      void deleteFullName() { this->fullName_ = nullptr;};
      inline string getFullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
      inline GitRepos& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


      // htmlUrl Field Functions 
      bool hasHtmlUrl() const { return this->htmlUrl_ != nullptr;};
      void deleteHtmlUrl() { this->htmlUrl_ = nullptr;};
      inline string getHtmlUrl() const { DARABONBA_PTR_GET_DEFAULT(htmlUrl_, "") };
      inline GitRepos& setHtmlUrl(string htmlUrl) { DARABONBA_PTR_SET_VALUE(htmlUrl_, htmlUrl) };


      // isPrivate Field Functions 
      bool hasIsPrivate() const { return this->isPrivate_ != nullptr;};
      void deleteIsPrivate() { this->isPrivate_ = nullptr;};
      inline bool getIsPrivate() const { DARABONBA_PTR_GET_DEFAULT(isPrivate_, false) };
      inline GitRepos& setIsPrivate(bool isPrivate) { DARABONBA_PTR_SET_VALUE(isPrivate_, isPrivate) };


      // repoId Field Functions 
      bool hasRepoId() const { return this->repoId_ != nullptr;};
      void deleteRepoId() { this->repoId_ = nullptr;};
      inline int64_t getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, 0L) };
      inline GitRepos& setRepoId(int64_t repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> fullName_ {};
      shared_ptr<string> htmlUrl_ {};
      shared_ptr<bool> isPrivate_ {};
      shared_ptr<int64_t> repoId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->gitRepos_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListGitRepositoriesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // gitRepos Field Functions 
    bool hasGitRepos() const { return this->gitRepos_ != nullptr;};
    void deleteGitRepos() { this->gitRepos_ = nullptr;};
    inline const vector<ListGitRepositoriesResponseBody::GitRepos> & getGitRepos() const { DARABONBA_PTR_GET_CONST(gitRepos_, vector<ListGitRepositoriesResponseBody::GitRepos>) };
    inline vector<ListGitRepositoriesResponseBody::GitRepos> getGitRepos() { DARABONBA_PTR_GET(gitRepos_, vector<ListGitRepositoriesResponseBody::GitRepos>) };
    inline ListGitRepositoriesResponseBody& setGitRepos(const vector<ListGitRepositoriesResponseBody::GitRepos> & gitRepos) { DARABONBA_PTR_SET_VALUE(gitRepos_, gitRepos) };
    inline ListGitRepositoriesResponseBody& setGitRepos(vector<ListGitRepositoriesResponseBody::GitRepos> && gitRepos) { DARABONBA_PTR_SET_RVALUE(gitRepos_, gitRepos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGitRepositoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> count_ {};
    shared_ptr<vector<ListGitRepositoriesResponseBody::GitRepos>> gitRepos_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
