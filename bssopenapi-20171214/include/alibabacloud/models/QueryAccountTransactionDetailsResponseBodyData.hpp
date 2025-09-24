// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTTRANSACTIONDETAILSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTTRANSACTIONDETAILSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryAccountTransactionDetailsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountTransactionDetailsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountTransactionsList, accountTransactionsList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountTransactionDetailsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountTransactionsList, accountTransactionsList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryAccountTransactionDetailsResponseBodyData() = default ;
    QueryAccountTransactionDetailsResponseBodyData(const QueryAccountTransactionDetailsResponseBodyData &) = default ;
    QueryAccountTransactionDetailsResponseBodyData(QueryAccountTransactionDetailsResponseBodyData &&) = default ;
    QueryAccountTransactionDetailsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountTransactionDetailsResponseBodyData() = default ;
    QueryAccountTransactionDetailsResponseBodyData& operator=(const QueryAccountTransactionDetailsResponseBodyData &) = default ;
    QueryAccountTransactionDetailsResponseBodyData& operator=(QueryAccountTransactionDetailsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->accountTransactionsList_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->totalCount_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline QueryAccountTransactionDetailsResponseBodyData& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountTransactionsList Field Functions 
    bool hasAccountTransactionsList() const { return this->accountTransactionsList_ != nullptr;};
    void deleteAccountTransactionsList() { this->accountTransactionsList_ = nullptr;};
    inline const Models::QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList & accountTransactionsList() const { DARABONBA_PTR_GET_CONST(accountTransactionsList_, Models::QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList) };
    inline Models::QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList accountTransactionsList() { DARABONBA_PTR_GET(accountTransactionsList_, Models::QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList) };
    inline QueryAccountTransactionDetailsResponseBodyData& setAccountTransactionsList(const Models::QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList & accountTransactionsList) { DARABONBA_PTR_SET_VALUE(accountTransactionsList_, accountTransactionsList) };
    inline QueryAccountTransactionDetailsResponseBodyData& setAccountTransactionsList(Models::QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList && accountTransactionsList) { DARABONBA_PTR_SET_RVALUE(accountTransactionsList_, accountTransactionsList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryAccountTransactionDetailsResponseBodyData& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryAccountTransactionDetailsResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryAccountTransactionDetailsResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The name of the account.
    std::shared_ptr<string> accountName_ = nullptr;
    // The details of the transactions within the account.
    std::shared_ptr<Models::QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsList> accountTransactionsList_ = nullptr;
    // This parameter is invalid.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used for paging.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
