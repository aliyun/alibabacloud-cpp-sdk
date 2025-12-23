// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAVEDQUERIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSAVEDQUERIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSavedQueriesResponseBodySavedQueries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListSavedQueriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSavedQueriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SavedQueries, savedQueries_);
    };
    friend void from_json(const Darabonba::Json& j, ListSavedQueriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SavedQueries, savedQueries_);
    };
    ListSavedQueriesResponseBody() = default ;
    ListSavedQueriesResponseBody(const ListSavedQueriesResponseBody &) = default ;
    ListSavedQueriesResponseBody(ListSavedQueriesResponseBody &&) = default ;
    ListSavedQueriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSavedQueriesResponseBody() = default ;
    ListSavedQueriesResponseBody& operator=(const ListSavedQueriesResponseBody &) = default ;
    ListSavedQueriesResponseBody& operator=(ListSavedQueriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->savedQueries_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListSavedQueriesResponseBody& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSavedQueriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSavedQueriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // savedQueries Field Functions 
    bool hasSavedQueries() const { return this->savedQueries_ != nullptr;};
    void deleteSavedQueries() { this->savedQueries_ = nullptr;};
    inline const vector<ListSavedQueriesResponseBodySavedQueries> & savedQueries() const { DARABONBA_PTR_GET_CONST(savedQueries_, vector<ListSavedQueriesResponseBodySavedQueries>) };
    inline vector<ListSavedQueriesResponseBodySavedQueries> savedQueries() { DARABONBA_PTR_GET(savedQueries_, vector<ListSavedQueriesResponseBodySavedQueries>) };
    inline ListSavedQueriesResponseBody& setSavedQueries(const vector<ListSavedQueriesResponseBodySavedQueries> & savedQueries) { DARABONBA_PTR_SET_VALUE(savedQueries_, savedQueries) };
    inline ListSavedQueriesResponseBody& setSavedQueries(vector<ListSavedQueriesResponseBodySavedQueries> && savedQueries) { DARABONBA_PTR_SET_RVALUE(savedQueries_, savedQueries) };


  protected:
    // The maximum number of entries per page.
    std::shared_ptr<string> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the custom query templates.
    std::shared_ptr<vector<ListSavedQueriesResponseBodySavedQueries>> savedQueries_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
