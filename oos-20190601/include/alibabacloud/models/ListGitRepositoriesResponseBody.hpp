// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGITREPOSITORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGITREPOSITORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGitRepositoriesResponseBodyGitRepos.hpp>
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
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->gitRepos_ == nullptr && return this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListGitRepositoriesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // gitRepos Field Functions 
    bool hasGitRepos() const { return this->gitRepos_ != nullptr;};
    void deleteGitRepos() { this->gitRepos_ = nullptr;};
    inline const vector<ListGitRepositoriesResponseBodyGitRepos> & gitRepos() const { DARABONBA_PTR_GET_CONST(gitRepos_, vector<ListGitRepositoriesResponseBodyGitRepos>) };
    inline vector<ListGitRepositoriesResponseBodyGitRepos> gitRepos() { DARABONBA_PTR_GET(gitRepos_, vector<ListGitRepositoriesResponseBodyGitRepos>) };
    inline ListGitRepositoriesResponseBody& setGitRepos(const vector<ListGitRepositoriesResponseBodyGitRepos> & gitRepos) { DARABONBA_PTR_SET_VALUE(gitRepos_, gitRepos) };
    inline ListGitRepositoriesResponseBody& setGitRepos(vector<ListGitRepositoriesResponseBodyGitRepos> && gitRepos) { DARABONBA_PTR_SET_RVALUE(gitRepos_, gitRepos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGitRepositoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<vector<ListGitRepositoriesResponseBodyGitRepos>> gitRepos_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
