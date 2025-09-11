// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTLISTDBACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTLISTDBACCOUNT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccountsResponseBodyAccountListDBAccountTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeAccountsResponseBodyAccountListDBAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBodyAccountListDBAccount& obj) { 
      DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBodyAccountListDBAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeAccountsResponseBodyAccountListDBAccount() = default ;
    DescribeAccountsResponseBodyAccountListDBAccount(const DescribeAccountsResponseBodyAccountListDBAccount &) = default ;
    DescribeAccountsResponseBodyAccountListDBAccount(DescribeAccountsResponseBodyAccountListDBAccount &&) = default ;
    DescribeAccountsResponseBodyAccountListDBAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsResponseBodyAccountListDBAccount() = default ;
    DescribeAccountsResponseBodyAccountListDBAccount& operator=(const DescribeAccountsResponseBodyAccountListDBAccount &) = default ;
    DescribeAccountsResponseBodyAccountListDBAccount& operator=(DescribeAccountsResponseBodyAccountListDBAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountDescription_ != nullptr
        && this->accountName_ != nullptr && this->accountStatus_ != nullptr && this->accountType_ != nullptr && this->tags_ != nullptr; };
    // accountDescription Field Functions 
    bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
    void deleteAccountDescription() { this->accountDescription_ = nullptr;};
    inline string accountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
    inline DescribeAccountsResponseBodyAccountListDBAccount& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeAccountsResponseBodyAccountListDBAccount& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string accountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline DescribeAccountsResponseBodyAccountListDBAccount& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline DescribeAccountsResponseBodyAccountListDBAccount& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeAccountsResponseBodyAccountListDBAccountTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeAccountsResponseBodyAccountListDBAccountTags) };
    inline Models::DescribeAccountsResponseBodyAccountListDBAccountTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeAccountsResponseBodyAccountListDBAccountTags) };
    inline DescribeAccountsResponseBodyAccountListDBAccount& setTags(const Models::DescribeAccountsResponseBodyAccountListDBAccountTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeAccountsResponseBodyAccountListDBAccount& setTags(Models::DescribeAccountsResponseBodyAccountListDBAccountTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The description of the database account.
    std::shared_ptr<string> accountDescription_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> accountName_ = nullptr;
    // The state of the database account. Valid values:
    // 
    // *   **Creating**
    // *   **Available**
    // *   **Deleting**
    std::shared_ptr<string> accountStatus_ = nullptr;
    // The type of the database account. Valid values:
    // 
    // *   **Normal**: standard account.
    // *   **Super**: privileged account.
    std::shared_ptr<string> accountType_ = nullptr;
    std::shared_ptr<Models::DescribeAccountsResponseBodyAccountListDBAccountTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
