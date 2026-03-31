// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGITACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGITACCOUNTSRESPONSEBODY_HPP_
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
    class GitAccounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GitAccounts& obj) { 
        DARABONBA_PTR_TO_JSON(IsActive, isActive_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
      };
      friend void from_json(const Darabonba::Json& j, GitAccounts& obj) { 
        DARABONBA_PTR_FROM_JSON(IsActive, isActive_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
      };
      GitAccounts() = default ;
      GitAccounts(const GitAccounts &) = default ;
      GitAccounts(GitAccounts &&) = default ;
      GitAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GitAccounts() = default ;
      GitAccounts& operator=(const GitAccounts &) = default ;
      GitAccounts& operator=(GitAccounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isActive_ == nullptr
        && this->owner_ == nullptr; };
      // isActive Field Functions 
      bool hasIsActive() const { return this->isActive_ != nullptr;};
      void deleteIsActive() { this->isActive_ = nullptr;};
      inline bool getIsActive() const { DARABONBA_PTR_GET_DEFAULT(isActive_, false) };
      inline GitAccounts& setIsActive(bool isActive) { DARABONBA_PTR_SET_VALUE(isActive_, isActive) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline GitAccounts& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    protected:
      shared_ptr<bool> isActive_ {};
      shared_ptr<string> owner_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->gitAccounts_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListGitAccountsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // gitAccounts Field Functions 
    bool hasGitAccounts() const { return this->gitAccounts_ != nullptr;};
    void deleteGitAccounts() { this->gitAccounts_ = nullptr;};
    inline const vector<ListGitAccountsResponseBody::GitAccounts> & getGitAccounts() const { DARABONBA_PTR_GET_CONST(gitAccounts_, vector<ListGitAccountsResponseBody::GitAccounts>) };
    inline vector<ListGitAccountsResponseBody::GitAccounts> getGitAccounts() { DARABONBA_PTR_GET(gitAccounts_, vector<ListGitAccountsResponseBody::GitAccounts>) };
    inline ListGitAccountsResponseBody& setGitAccounts(const vector<ListGitAccountsResponseBody::GitAccounts> & gitAccounts) { DARABONBA_PTR_SET_VALUE(gitAccounts_, gitAccounts) };
    inline ListGitAccountsResponseBody& setGitAccounts(vector<ListGitAccountsResponseBody::GitAccounts> && gitAccounts) { DARABONBA_PTR_SET_RVALUE(gitAccounts_, gitAccounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGitAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> count_ {};
    shared_ptr<vector<ListGitAccountsResponseBody::GitAccounts>> gitAccounts_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
