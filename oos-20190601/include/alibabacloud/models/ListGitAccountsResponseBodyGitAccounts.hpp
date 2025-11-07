// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGITACCOUNTSRESPONSEBODYGITACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTGITACCOUNTSRESPONSEBODYGITACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListGitAccountsResponseBodyGitAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGitAccountsResponseBodyGitAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(IsActive, isActive_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
    };
    friend void from_json(const Darabonba::Json& j, ListGitAccountsResponseBodyGitAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(IsActive, isActive_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
    };
    ListGitAccountsResponseBodyGitAccounts() = default ;
    ListGitAccountsResponseBodyGitAccounts(const ListGitAccountsResponseBodyGitAccounts &) = default ;
    ListGitAccountsResponseBodyGitAccounts(ListGitAccountsResponseBodyGitAccounts &&) = default ;
    ListGitAccountsResponseBodyGitAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGitAccountsResponseBodyGitAccounts() = default ;
    ListGitAccountsResponseBodyGitAccounts& operator=(const ListGitAccountsResponseBodyGitAccounts &) = default ;
    ListGitAccountsResponseBodyGitAccounts& operator=(ListGitAccountsResponseBodyGitAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isActive_ == nullptr
        && return this->owner_ == nullptr; };
    // isActive Field Functions 
    bool hasIsActive() const { return this->isActive_ != nullptr;};
    void deleteIsActive() { this->isActive_ = nullptr;};
    inline bool isActive() const { DARABONBA_PTR_GET_DEFAULT(isActive_, false) };
    inline ListGitAccountsResponseBodyGitAccounts& setIsActive(bool isActive) { DARABONBA_PTR_SET_VALUE(isActive_, isActive) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListGitAccountsResponseBodyGitAccounts& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


  protected:
    std::shared_ptr<bool> isActive_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
