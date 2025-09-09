// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESHAREDACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESHAREDACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceSharedAccountsResponseBodyShareAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceSharedAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceSharedAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShareAccount, shareAccount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceSharedAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShareAccount, shareAccount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListServiceSharedAccountsResponseBody() = default ;
    ListServiceSharedAccountsResponseBody(const ListServiceSharedAccountsResponseBody &) = default ;
    ListServiceSharedAccountsResponseBody(ListServiceSharedAccountsResponseBody &&) = default ;
    ListServiceSharedAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceSharedAccountsResponseBody() = default ;
    ListServiceSharedAccountsResponseBody& operator=(const ListServiceSharedAccountsResponseBody &) = default ;
    ListServiceSharedAccountsResponseBody& operator=(ListServiceSharedAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->shareAccount_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceSharedAccountsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceSharedAccountsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceSharedAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // shareAccount Field Functions 
    bool hasShareAccount() const { return this->shareAccount_ != nullptr;};
    void deleteShareAccount() { this->shareAccount_ = nullptr;};
    inline const vector<ListServiceSharedAccountsResponseBodyShareAccount> & shareAccount() const { DARABONBA_PTR_GET_CONST(shareAccount_, vector<ListServiceSharedAccountsResponseBodyShareAccount>) };
    inline vector<ListServiceSharedAccountsResponseBodyShareAccount> shareAccount() { DARABONBA_PTR_GET(shareAccount_, vector<ListServiceSharedAccountsResponseBodyShareAccount>) };
    inline ListServiceSharedAccountsResponseBody& setShareAccount(const vector<ListServiceSharedAccountsResponseBodyShareAccount> & shareAccount) { DARABONBA_PTR_SET_VALUE(shareAccount_, shareAccount) };
    inline ListServiceSharedAccountsResponseBody& setShareAccount(vector<ListServiceSharedAccountsResponseBodyShareAccount> && shareAccount) { DARABONBA_PTR_SET_RVALUE(shareAccount_, shareAccount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListServiceSharedAccountsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Service shared account information.
    std::shared_ptr<vector<ListServiceSharedAccountsResponseBodyShareAccount>> shareAccount_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
