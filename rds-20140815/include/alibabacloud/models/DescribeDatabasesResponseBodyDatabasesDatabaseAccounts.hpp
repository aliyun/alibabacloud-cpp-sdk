// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASEACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASEACCOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDatabasesResponseBodyDatabasesDatabaseAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabasesResponseBodyDatabasesDatabaseAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(AccountPrivilegeInfo, accountPrivilegeInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabasesResponseBodyDatabasesDatabaseAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountPrivilegeInfo, accountPrivilegeInfo_);
    };
    DescribeDatabasesResponseBodyDatabasesDatabaseAccounts() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccounts(const DescribeDatabasesResponseBodyDatabasesDatabaseAccounts &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccounts(DescribeDatabasesResponseBodyDatabasesDatabaseAccounts &&) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabasesResponseBodyDatabasesDatabaseAccounts() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccounts& operator=(const DescribeDatabasesResponseBodyDatabasesDatabaseAccounts &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccounts& operator=(DescribeDatabasesResponseBodyDatabasesDatabaseAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountPrivilegeInfo_ == nullptr; };
    // accountPrivilegeInfo Field Functions 
    bool hasAccountPrivilegeInfo() const { return this->accountPrivilegeInfo_ != nullptr;};
    void deleteAccountPrivilegeInfo() { this->accountPrivilegeInfo_ = nullptr;};
    inline const vector<Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo> & accountPrivilegeInfo() const { DARABONBA_PTR_GET_CONST(accountPrivilegeInfo_, vector<Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo>) };
    inline vector<Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo> accountPrivilegeInfo() { DARABONBA_PTR_GET(accountPrivilegeInfo_, vector<Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo>) };
    inline DescribeDatabasesResponseBodyDatabasesDatabaseAccounts& setAccountPrivilegeInfo(const vector<Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo> & accountPrivilegeInfo) { DARABONBA_PTR_SET_VALUE(accountPrivilegeInfo_, accountPrivilegeInfo) };
    inline DescribeDatabasesResponseBodyDatabasesDatabaseAccounts& setAccountPrivilegeInfo(vector<Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo> && accountPrivilegeInfo) { DARABONBA_PTR_SET_RVALUE(accountPrivilegeInfo_, accountPrivilegeInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo>> accountPrivilegeInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
