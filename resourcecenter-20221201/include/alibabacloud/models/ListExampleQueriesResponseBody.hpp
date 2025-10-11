// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXAMPLEQUERIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXAMPLEQUERIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExampleQueriesResponseBodyExampleQueries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListExampleQueriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExampleQueriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExampleQueries, exampleQueries_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListExampleQueriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExampleQueries, exampleQueries_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListExampleQueriesResponseBody() = default ;
    ListExampleQueriesResponseBody(const ListExampleQueriesResponseBody &) = default ;
    ListExampleQueriesResponseBody(ListExampleQueriesResponseBody &&) = default ;
    ListExampleQueriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExampleQueriesResponseBody() = default ;
    ListExampleQueriesResponseBody& operator=(const ListExampleQueriesResponseBody &) = default ;
    ListExampleQueriesResponseBody& operator=(ListExampleQueriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exampleQueries_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // exampleQueries Field Functions 
    bool hasExampleQueries() const { return this->exampleQueries_ != nullptr;};
    void deleteExampleQueries() { this->exampleQueries_ = nullptr;};
    inline const vector<ListExampleQueriesResponseBodyExampleQueries> & exampleQueries() const { DARABONBA_PTR_GET_CONST(exampleQueries_, vector<ListExampleQueriesResponseBodyExampleQueries>) };
    inline vector<ListExampleQueriesResponseBodyExampleQueries> exampleQueries() { DARABONBA_PTR_GET(exampleQueries_, vector<ListExampleQueriesResponseBodyExampleQueries>) };
    inline ListExampleQueriesResponseBody& setExampleQueries(const vector<ListExampleQueriesResponseBodyExampleQueries> & exampleQueries) { DARABONBA_PTR_SET_VALUE(exampleQueries_, exampleQueries) };
    inline ListExampleQueriesResponseBody& setExampleQueries(vector<ListExampleQueriesResponseBodyExampleQueries> && exampleQueries) { DARABONBA_PTR_SET_RVALUE(exampleQueries_, exampleQueries) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListExampleQueriesResponseBody& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExampleQueriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExampleQueriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the sample query templates.
    std::shared_ptr<vector<ListExampleQueriesResponseBodyExampleQueries>> exampleQueries_ = nullptr;
    // The maximum number of entries per page.
    std::shared_ptr<string> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
