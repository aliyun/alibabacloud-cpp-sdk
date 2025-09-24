// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBILLOVERVIEWRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYBILLOVERVIEWRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryBillOverviewResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryBillOverviewResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBillOverviewResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountID, accountID_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(Items, items_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBillOverviewResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountID, accountID_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
    };
    QueryBillOverviewResponseBodyData() = default ;
    QueryBillOverviewResponseBodyData(const QueryBillOverviewResponseBodyData &) = default ;
    QueryBillOverviewResponseBodyData(QueryBillOverviewResponseBodyData &&) = default ;
    QueryBillOverviewResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBillOverviewResponseBodyData() = default ;
    QueryBillOverviewResponseBodyData& operator=(const QueryBillOverviewResponseBodyData &) = default ;
    QueryBillOverviewResponseBodyData& operator=(QueryBillOverviewResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountID_ != nullptr
        && this->accountName_ != nullptr && this->billingCycle_ != nullptr && this->items_ != nullptr; };
    // accountID Field Functions 
    bool hasAccountID() const { return this->accountID_ != nullptr;};
    void deleteAccountID() { this->accountID_ = nullptr;};
    inline string accountID() const { DARABONBA_PTR_GET_DEFAULT(accountID_, "") };
    inline QueryBillOverviewResponseBodyData& setAccountID(string accountID) { DARABONBA_PTR_SET_VALUE(accountID_, accountID) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline QueryBillOverviewResponseBodyData& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline QueryBillOverviewResponseBodyData& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const Models::QueryBillOverviewResponseBodyDataItems & items() const { DARABONBA_PTR_GET_CONST(items_, Models::QueryBillOverviewResponseBodyDataItems) };
    inline Models::QueryBillOverviewResponseBodyDataItems items() { DARABONBA_PTR_GET(items_, Models::QueryBillOverviewResponseBodyDataItems) };
    inline QueryBillOverviewResponseBodyData& setItems(const Models::QueryBillOverviewResponseBodyDataItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline QueryBillOverviewResponseBodyData& setItems(Models::QueryBillOverviewResponseBodyDataItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    // The ID of the account.
    std::shared_ptr<string> accountID_ = nullptr;
    // The name of the account.
    std::shared_ptr<string> accountName_ = nullptr;
    // The billing cycle, in the YYYY-MM format.
    std::shared_ptr<string> billingCycle_ = nullptr;
    // The details of the bills.
    std::shared_ptr<Models::QueryBillOverviewResponseBodyDataItems> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
