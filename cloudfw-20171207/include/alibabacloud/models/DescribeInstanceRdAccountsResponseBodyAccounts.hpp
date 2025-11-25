// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERDACCOUNTSRESPONSEBODYACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERDACCOUNTSRESPONSEBODYACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInstanceRdAccountsResponseBodyAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRdAccountsResponseBodyAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRdAccountsResponseBodyAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
    };
    DescribeInstanceRdAccountsResponseBodyAccounts() = default ;
    DescribeInstanceRdAccountsResponseBodyAccounts(const DescribeInstanceRdAccountsResponseBodyAccounts &) = default ;
    DescribeInstanceRdAccountsResponseBodyAccounts(DescribeInstanceRdAccountsResponseBodyAccounts &&) = default ;
    DescribeInstanceRdAccountsResponseBodyAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRdAccountsResponseBodyAccounts() = default ;
    DescribeInstanceRdAccountsResponseBodyAccounts& operator=(const DescribeInstanceRdAccountsResponseBodyAccounts &) = default ;
    DescribeInstanceRdAccountsResponseBodyAccounts& operator=(DescribeInstanceRdAccountsResponseBodyAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->displayName_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DescribeInstanceRdAccountsResponseBodyAccounts& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeInstanceRdAccountsResponseBodyAccounts& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
