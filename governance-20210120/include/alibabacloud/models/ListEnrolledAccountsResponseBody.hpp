// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENROLLEDACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENROLLEDACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEnrolledAccountsResponseBodyEnrolledAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEnrolledAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnrolledAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnrolledAccounts, enrolledAccounts_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnrolledAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnrolledAccounts, enrolledAccounts_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEnrolledAccountsResponseBody() = default ;
    ListEnrolledAccountsResponseBody(const ListEnrolledAccountsResponseBody &) = default ;
    ListEnrolledAccountsResponseBody(ListEnrolledAccountsResponseBody &&) = default ;
    ListEnrolledAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnrolledAccountsResponseBody() = default ;
    ListEnrolledAccountsResponseBody& operator=(const ListEnrolledAccountsResponseBody &) = default ;
    ListEnrolledAccountsResponseBody& operator=(ListEnrolledAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enrolledAccounts_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // enrolledAccounts Field Functions 
    bool hasEnrolledAccounts() const { return this->enrolledAccounts_ != nullptr;};
    void deleteEnrolledAccounts() { this->enrolledAccounts_ = nullptr;};
    inline const vector<ListEnrolledAccountsResponseBodyEnrolledAccounts> & enrolledAccounts() const { DARABONBA_PTR_GET_CONST(enrolledAccounts_, vector<ListEnrolledAccountsResponseBodyEnrolledAccounts>) };
    inline vector<ListEnrolledAccountsResponseBodyEnrolledAccounts> enrolledAccounts() { DARABONBA_PTR_GET(enrolledAccounts_, vector<ListEnrolledAccountsResponseBodyEnrolledAccounts>) };
    inline ListEnrolledAccountsResponseBody& setEnrolledAccounts(const vector<ListEnrolledAccountsResponseBodyEnrolledAccounts> & enrolledAccounts) { DARABONBA_PTR_SET_VALUE(enrolledAccounts_, enrolledAccounts) };
    inline ListEnrolledAccountsResponseBody& setEnrolledAccounts(vector<ListEnrolledAccountsResponseBodyEnrolledAccounts> && enrolledAccounts) { DARABONBA_PTR_SET_RVALUE(enrolledAccounts_, enrolledAccounts) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEnrolledAccountsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnrolledAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The enrolled accounts.
    std::shared_ptr<vector<ListEnrolledAccountsResponseBodyEnrolledAccounts>> enrolledAccounts_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
