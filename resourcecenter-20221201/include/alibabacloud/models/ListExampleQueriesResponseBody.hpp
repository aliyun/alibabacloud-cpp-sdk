// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXAMPLEQUERIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXAMPLEQUERIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ExampleQueries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExampleQueries& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(QueryId, queryId_);
      };
      friend void from_json(const Darabonba::Json& j, ExampleQueries& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
      };
      ExampleQueries() = default ;
      ExampleQueries(const ExampleQueries &) = default ;
      ExampleQueries(ExampleQueries &&) = default ;
      ExampleQueries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExampleQueries() = default ;
      ExampleQueries& operator=(const ExampleQueries &) = default ;
      ExampleQueries& operator=(ExampleQueries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->queryId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ExampleQueries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ExampleQueries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // queryId Field Functions 
      bool hasQueryId() const { return this->queryId_ != nullptr;};
      void deleteQueryId() { this->queryId_ = nullptr;};
      inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
      inline ExampleQueries& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    protected:
      // The description of the template.
      shared_ptr<string> description_ {};
      // The name of the template.
      shared_ptr<string> name_ {};
      // The ID of the template.
      shared_ptr<string> queryId_ {};
    };

    virtual bool empty() const override { return this->exampleQueries_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // exampleQueries Field Functions 
    bool hasExampleQueries() const { return this->exampleQueries_ != nullptr;};
    void deleteExampleQueries() { this->exampleQueries_ = nullptr;};
    inline const vector<ListExampleQueriesResponseBody::ExampleQueries> & getExampleQueries() const { DARABONBA_PTR_GET_CONST(exampleQueries_, vector<ListExampleQueriesResponseBody::ExampleQueries>) };
    inline vector<ListExampleQueriesResponseBody::ExampleQueries> getExampleQueries() { DARABONBA_PTR_GET(exampleQueries_, vector<ListExampleQueriesResponseBody::ExampleQueries>) };
    inline ListExampleQueriesResponseBody& setExampleQueries(const vector<ListExampleQueriesResponseBody::ExampleQueries> & exampleQueries) { DARABONBA_PTR_SET_VALUE(exampleQueries_, exampleQueries) };
    inline ListExampleQueriesResponseBody& setExampleQueries(vector<ListExampleQueriesResponseBody::ExampleQueries> && exampleQueries) { DARABONBA_PTR_SET_RVALUE(exampleQueries_, exampleQueries) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListExampleQueriesResponseBody& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExampleQueriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExampleQueriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the sample query templates.
    shared_ptr<vector<ListExampleQueriesResponseBody::ExampleQueries>> exampleQueries_ {};
    // The maximum number of entries per page.
    shared_ptr<string> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
