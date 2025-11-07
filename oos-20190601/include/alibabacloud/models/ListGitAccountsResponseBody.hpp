// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGITACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGITACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGitAccountsResponseBodyGitAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListGitAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGitAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(GitAccounts, gitAccounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGitAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(GitAccounts, gitAccounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListGitAccountsResponseBody() = default ;
    ListGitAccountsResponseBody(const ListGitAccountsResponseBody &) = default ;
    ListGitAccountsResponseBody(ListGitAccountsResponseBody &&) = default ;
    ListGitAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGitAccountsResponseBody() = default ;
    ListGitAccountsResponseBody& operator=(const ListGitAccountsResponseBody &) = default ;
    ListGitAccountsResponseBody& operator=(ListGitAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->gitAccounts_ == nullptr && return this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListGitAccountsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // gitAccounts Field Functions 
    bool hasGitAccounts() const { return this->gitAccounts_ != nullptr;};
    void deleteGitAccounts() { this->gitAccounts_ = nullptr;};
    inline const vector<ListGitAccountsResponseBodyGitAccounts> & gitAccounts() const { DARABONBA_PTR_GET_CONST(gitAccounts_, vector<ListGitAccountsResponseBodyGitAccounts>) };
    inline vector<ListGitAccountsResponseBodyGitAccounts> gitAccounts() { DARABONBA_PTR_GET(gitAccounts_, vector<ListGitAccountsResponseBodyGitAccounts>) };
    inline ListGitAccountsResponseBody& setGitAccounts(const vector<ListGitAccountsResponseBodyGitAccounts> & gitAccounts) { DARABONBA_PTR_SET_VALUE(gitAccounts_, gitAccounts) };
    inline ListGitAccountsResponseBody& setGitAccounts(vector<ListGitAccountsResponseBodyGitAccounts> && gitAccounts) { DARABONBA_PTR_SET_RVALUE(gitAccounts_, gitAccounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGitAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<vector<ListGitAccountsResponseBodyGitAccounts>> gitAccounts_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
