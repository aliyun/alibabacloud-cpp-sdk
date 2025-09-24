// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBILLTOOSSSUBSCRIPTIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYBILLTOOSSSUBSCRIPTIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryBillToOSSSubscriptionResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryBillToOSSSubscriptionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBillToOSSSubscriptionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountID, accountID_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(Items, items_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBillToOSSSubscriptionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountID, accountID_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
    };
    QueryBillToOSSSubscriptionResponseBodyData() = default ;
    QueryBillToOSSSubscriptionResponseBodyData(const QueryBillToOSSSubscriptionResponseBodyData &) = default ;
    QueryBillToOSSSubscriptionResponseBodyData(QueryBillToOSSSubscriptionResponseBodyData &&) = default ;
    QueryBillToOSSSubscriptionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBillToOSSSubscriptionResponseBodyData() = default ;
    QueryBillToOSSSubscriptionResponseBodyData& operator=(const QueryBillToOSSSubscriptionResponseBodyData &) = default ;
    QueryBillToOSSSubscriptionResponseBodyData& operator=(QueryBillToOSSSubscriptionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountID_ != nullptr
        && this->accountName_ != nullptr && this->items_ != nullptr; };
    // accountID Field Functions 
    bool hasAccountID() const { return this->accountID_ != nullptr;};
    void deleteAccountID() { this->accountID_ = nullptr;};
    inline string accountID() const { DARABONBA_PTR_GET_DEFAULT(accountID_, "") };
    inline QueryBillToOSSSubscriptionResponseBodyData& setAccountID(string accountID) { DARABONBA_PTR_SET_VALUE(accountID_, accountID) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline QueryBillToOSSSubscriptionResponseBodyData& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const Models::QueryBillToOSSSubscriptionResponseBodyDataItems & items() const { DARABONBA_PTR_GET_CONST(items_, Models::QueryBillToOSSSubscriptionResponseBodyDataItems) };
    inline Models::QueryBillToOSSSubscriptionResponseBodyDataItems items() { DARABONBA_PTR_GET(items_, Models::QueryBillToOSSSubscriptionResponseBodyDataItems) };
    inline QueryBillToOSSSubscriptionResponseBodyData& setItems(const Models::QueryBillToOSSSubscriptionResponseBodyDataItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline QueryBillToOSSSubscriptionResponseBodyData& setItems(Models::QueryBillToOSSSubscriptionResponseBodyDataItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    // The ID of the account used to perform the query.
    std::shared_ptr<string> accountID_ = nullptr;
    // The name of the account used to perform the query.
    std::shared_ptr<string> accountName_ = nullptr;
    // The details of the subscribed bill.
    std::shared_ptr<Models::QueryBillToOSSSubscriptionResponseBodyDataItems> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
