// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTTRANSACTIONDETAILSRESPONSEBODYDATAACCOUNTTRANSACTIONSLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTTRANSACTIONDETAILSRESPONSEBODYDATAACCOUNTTRANSACTIONSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList& obj) { 
      DARABONBA_PTR_TO_JSON(AccountTransactionsList, accountTransactionsList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountTransactionsList, accountTransactionsList_);
    };
    QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList() = default ;
    QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList(const QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList &) = default ;
    QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList(QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList &&) = default ;
    QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList() = default ;
    QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList& operator=(const QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList &) = default ;
    QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList& operator=(QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountTransactionsList_ != nullptr; };
    // accountTransactionsList Field Functions 
    bool hasAccountTransactionsList() const { return this->accountTransactionsList_ != nullptr;};
    void deleteAccountTransactionsList() { this->accountTransactionsList_ = nullptr;};
    inline const vector<Models::QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList> & accountTransactionsList() const { DARABONBA_PTR_GET_CONST(accountTransactionsList_, vector<Models::QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList>) };
    inline vector<Models::QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList> accountTransactionsList() { DARABONBA_PTR_GET(accountTransactionsList_, vector<Models::QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList>) };
    inline QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList& setAccountTransactionsList(const vector<Models::QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList> & accountTransactionsList) { DARABONBA_PTR_SET_VALUE(accountTransactionsList_, accountTransactionsList) };
    inline QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList& setAccountTransactionsList(vector<Models::QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList> && accountTransactionsList) { DARABONBA_PTR_SET_RVALUE(accountTransactionsList_, accountTransactionsList) };


  protected:
    std::shared_ptr<vector<Models::QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList>> accountTransactionsList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
