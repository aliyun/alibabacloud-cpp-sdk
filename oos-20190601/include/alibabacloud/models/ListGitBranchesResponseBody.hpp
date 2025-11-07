// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGITBRANCHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGITBRANCHESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGitBranchesResponseBodyGitBranches.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListGitBranchesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGitBranchesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(GitBranches, gitBranches_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGitBranchesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(GitBranches, gitBranches_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListGitBranchesResponseBody() = default ;
    ListGitBranchesResponseBody(const ListGitBranchesResponseBody &) = default ;
    ListGitBranchesResponseBody(ListGitBranchesResponseBody &&) = default ;
    ListGitBranchesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGitBranchesResponseBody() = default ;
    ListGitBranchesResponseBody& operator=(const ListGitBranchesResponseBody &) = default ;
    ListGitBranchesResponseBody& operator=(ListGitBranchesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->gitBranches_ == nullptr && return this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListGitBranchesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // gitBranches Field Functions 
    bool hasGitBranches() const { return this->gitBranches_ != nullptr;};
    void deleteGitBranches() { this->gitBranches_ = nullptr;};
    inline const vector<ListGitBranchesResponseBodyGitBranches> & gitBranches() const { DARABONBA_PTR_GET_CONST(gitBranches_, vector<ListGitBranchesResponseBodyGitBranches>) };
    inline vector<ListGitBranchesResponseBodyGitBranches> gitBranches() { DARABONBA_PTR_GET(gitBranches_, vector<ListGitBranchesResponseBodyGitBranches>) };
    inline ListGitBranchesResponseBody& setGitBranches(const vector<ListGitBranchesResponseBodyGitBranches> & gitBranches) { DARABONBA_PTR_SET_VALUE(gitBranches_, gitBranches) };
    inline ListGitBranchesResponseBody& setGitBranches(vector<ListGitBranchesResponseBodyGitBranches> && gitBranches) { DARABONBA_PTR_SET_RVALUE(gitBranches_, gitBranches) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGitBranchesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<vector<ListGitBranchesResponseBodyGitBranches>> gitBranches_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
