// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETTESTRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNETTESTRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNetTestResultsResponseBodyNetTestResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListNetTestResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetTestResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NetTestResults, netTestResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetTestResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NetTestResults, netTestResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListNetTestResultsResponseBody() = default ;
    ListNetTestResultsResponseBody(const ListNetTestResultsResponseBody &) = default ;
    ListNetTestResultsResponseBody(ListNetTestResultsResponseBody &&) = default ;
    ListNetTestResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetTestResultsResponseBody() = default ;
    ListNetTestResultsResponseBody& operator=(const ListNetTestResultsResponseBody &) = default ;
    ListNetTestResultsResponseBody& operator=(ListNetTestResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->netTestResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListNetTestResultsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // netTestResults Field Functions 
    bool hasNetTestResults() const { return this->netTestResults_ != nullptr;};
    void deleteNetTestResults() { this->netTestResults_ = nullptr;};
    inline const vector<ListNetTestResultsResponseBodyNetTestResults> & netTestResults() const { DARABONBA_PTR_GET_CONST(netTestResults_, vector<ListNetTestResultsResponseBodyNetTestResults>) };
    inline vector<ListNetTestResultsResponseBodyNetTestResults> netTestResults() { DARABONBA_PTR_GET(netTestResults_, vector<ListNetTestResultsResponseBodyNetTestResults>) };
    inline ListNetTestResultsResponseBody& setNetTestResults(const vector<ListNetTestResultsResponseBodyNetTestResults> & netTestResults) { DARABONBA_PTR_SET_VALUE(netTestResults_, netTestResults) };
    inline ListNetTestResultsResponseBody& setNetTestResults(vector<ListNetTestResultsResponseBodyNetTestResults> && netTestResults) { DARABONBA_PTR_SET_RVALUE(netTestResults_, netTestResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNetTestResultsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNetTestResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of entries to return on each page. Maximum value: 100.
    // 
    // Default value:
    // 
    // *   If you do not configure this parameter or if you set this parameter to a value less than 20, the default value is 20.
    // *   If you set this parameter to a value that is greater than 100, the default value is 100.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The results.
    std::shared_ptr<vector<ListNetTestResultsResponseBodyNetTestResults>> netTestResults_ = nullptr;
    // The token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
