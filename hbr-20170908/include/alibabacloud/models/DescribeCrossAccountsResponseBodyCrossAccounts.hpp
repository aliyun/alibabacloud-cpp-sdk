// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSACCOUNTSRESPONSEBODYCROSSACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSACCOUNTSRESPONSEBODYCROSSACCOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeCrossAccountsResponseBodyCrossAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossAccountsResponseBodyCrossAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(CrossAccount, crossAccount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossAccountsResponseBodyCrossAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossAccount, crossAccount_);
    };
    DescribeCrossAccountsResponseBodyCrossAccounts() = default ;
    DescribeCrossAccountsResponseBodyCrossAccounts(const DescribeCrossAccountsResponseBodyCrossAccounts &) = default ;
    DescribeCrossAccountsResponseBodyCrossAccounts(DescribeCrossAccountsResponseBodyCrossAccounts &&) = default ;
    DescribeCrossAccountsResponseBodyCrossAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossAccountsResponseBodyCrossAccounts() = default ;
    DescribeCrossAccountsResponseBodyCrossAccounts& operator=(const DescribeCrossAccountsResponseBodyCrossAccounts &) = default ;
    DescribeCrossAccountsResponseBodyCrossAccounts& operator=(DescribeCrossAccountsResponseBodyCrossAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crossAccount_ == nullptr; };
    // crossAccount Field Functions 
    bool hasCrossAccount() const { return this->crossAccount_ != nullptr;};
    void deleteCrossAccount() { this->crossAccount_ = nullptr;};
    inline const vector<Models::DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount> & crossAccount() const { DARABONBA_PTR_GET_CONST(crossAccount_, vector<Models::DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount>) };
    inline vector<Models::DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount> crossAccount() { DARABONBA_PTR_GET(crossAccount_, vector<Models::DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount>) };
    inline DescribeCrossAccountsResponseBodyCrossAccounts& setCrossAccount(const vector<Models::DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount> & crossAccount) { DARABONBA_PTR_SET_VALUE(crossAccount_, crossAccount) };
    inline DescribeCrossAccountsResponseBodyCrossAccounts& setCrossAccount(vector<Models::DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount> && crossAccount) { DARABONBA_PTR_SET_RVALUE(crossAccount_, crossAccount) };


  protected:
    std::shared_ptr<vector<Models::DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount>> crossAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
