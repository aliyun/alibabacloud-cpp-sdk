// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEACCOUNTSRESPONSEBODYINSTANCEACCOUNTSINSTANCEACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEACCOUNTSRESPONSEBODYINSTANCEACCOUNTSINSTANCEACCOUNT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(DbPrivileges, dbPrivileges_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Host, host_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(DbPrivileges, dbPrivileges_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
    };
    DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount() = default ;
    DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount(const DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount &) = default ;
    DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount(DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount &&) = default ;
    DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount() = default ;
    DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount& operator=(const DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount &) = default ;
    DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount& operator=(DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->accountType_ != nullptr && this->dbPrivileges_ != nullptr && this->description_ != nullptr && this->host_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline int32_t accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, 0) };
    inline DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount& setAccountType(int32_t accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // dbPrivileges Field Functions 
    bool hasDbPrivileges() const { return this->dbPrivileges_ != nullptr;};
    void deleteDbPrivileges() { this->dbPrivileges_ = nullptr;};
    inline const Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges & dbPrivileges() const { DARABONBA_PTR_GET_CONST(dbPrivileges_, Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges) };
    inline Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges dbPrivileges() { DARABONBA_PTR_GET(dbPrivileges_, Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges) };
    inline DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount& setDbPrivileges(const Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges & dbPrivileges) { DARABONBA_PTR_SET_VALUE(dbPrivileges_, dbPrivileges) };
    inline DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount& setDbPrivileges(Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges && dbPrivileges) { DARABONBA_PTR_SET_RVALUE(dbPrivileges_, dbPrivileges) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


  protected:
    // Indicates the username of an instance account.
    std::shared_ptr<string> accountName_ = nullptr;
    // Indicates the type of an instance account. Valid values:
    // 
    // *   **0**: The instance account is a privileged account.
    // *   **1**: The instance account is a standard account.
    std::shared_ptr<int32_t> accountType_ = nullptr;
    // Indicates the information about the permissions of an account on a database.
    std::shared_ptr<Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges> dbPrivileges_ = nullptr;
    // Indicates the description of an account. By default, if 0 is the value of the AccountType parameter, **Created by DRDS** is returned as the value of the Description parameter. If 1 is the value of the AccountType parameter, an empty string is returned as the value of the Description parameter. You can modify the description of an account on the Accounts page in the PolarDB-X console.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates an IP address that is allowed to access the database. The value **%** indicates that each IP address is allowed to access the database. \\</note>
    std::shared_ptr<string> host_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
