// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccountsResponseBodyAccountListDBAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAccountsResponseBodyAccountList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBodyAccountList& obj) { 
      DARABONBA_PTR_TO_JSON(DBAccount, DBAccount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBodyAccountList& obj) { 
      DARABONBA_PTR_FROM_JSON(DBAccount, DBAccount_);
    };
    DescribeAccountsResponseBodyAccountList() = default ;
    DescribeAccountsResponseBodyAccountList(const DescribeAccountsResponseBodyAccountList &) = default ;
    DescribeAccountsResponseBodyAccountList(DescribeAccountsResponseBodyAccountList &&) = default ;
    DescribeAccountsResponseBodyAccountList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsResponseBodyAccountList() = default ;
    DescribeAccountsResponseBodyAccountList& operator=(const DescribeAccountsResponseBodyAccountList &) = default ;
    DescribeAccountsResponseBodyAccountList& operator=(DescribeAccountsResponseBodyAccountList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBAccount_ == nullptr; };
    // DBAccount Field Functions 
    bool hasDBAccount() const { return this->DBAccount_ != nullptr;};
    void deleteDBAccount() { this->DBAccount_ = nullptr;};
    inline const vector<Models::DescribeAccountsResponseBodyAccountListDBAccount> & DBAccount() const { DARABONBA_PTR_GET_CONST(DBAccount_, vector<Models::DescribeAccountsResponseBodyAccountListDBAccount>) };
    inline vector<Models::DescribeAccountsResponseBodyAccountListDBAccount> DBAccount() { DARABONBA_PTR_GET(DBAccount_, vector<Models::DescribeAccountsResponseBodyAccountListDBAccount>) };
    inline DescribeAccountsResponseBodyAccountList& setDBAccount(const vector<Models::DescribeAccountsResponseBodyAccountListDBAccount> & DBAccount) { DARABONBA_PTR_SET_VALUE(DBAccount_, DBAccount) };
    inline DescribeAccountsResponseBodyAccountList& setDBAccount(vector<Models::DescribeAccountsResponseBodyAccountListDBAccount> && DBAccount) { DARABONBA_PTR_SET_RVALUE(DBAccount_, DBAccount) };


  protected:
    std::shared_ptr<vector<Models::DescribeAccountsResponseBodyAccountListDBAccount>> DBAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
