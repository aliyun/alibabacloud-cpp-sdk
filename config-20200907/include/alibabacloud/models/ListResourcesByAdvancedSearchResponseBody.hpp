// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESBYADVANCEDSEARCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESBYADVANCEDSEARCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListResourcesByAdvancedSearchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesByAdvancedSearchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueryResults, queryResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesByAdvancedSearchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryResults, queryResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListResourcesByAdvancedSearchResponseBody() = default ;
    ListResourcesByAdvancedSearchResponseBody(const ListResourcesByAdvancedSearchResponseBody &) = default ;
    ListResourcesByAdvancedSearchResponseBody(ListResourcesByAdvancedSearchResponseBody &&) = default ;
    ListResourcesByAdvancedSearchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesByAdvancedSearchResponseBody() = default ;
    ListResourcesByAdvancedSearchResponseBody& operator=(const ListResourcesByAdvancedSearchResponseBody &) = default ;
    ListResourcesByAdvancedSearchResponseBody& operator=(ListResourcesByAdvancedSearchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryResults& obj) { 
        DARABONBA_PTR_TO_JSON(QueryResultList, queryResultList_);
      };
      friend void from_json(const Darabonba::Json& j, QueryResults& obj) { 
        DARABONBA_PTR_FROM_JSON(QueryResultList, queryResultList_);
      };
      QueryResults() = default ;
      QueryResults(const QueryResults &) = default ;
      QueryResults(QueryResults &&) = default ;
      QueryResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryResults() = default ;
      QueryResults& operator=(const QueryResults &) = default ;
      QueryResults& operator=(QueryResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QueryResultList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QueryResultList& obj) { 
          DARABONBA_PTR_TO_JSON(Columns, columns_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, QueryResultList& obj) { 
          DARABONBA_PTR_FROM_JSON(Columns, columns_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        QueryResultList() = default ;
        QueryResultList(const QueryResultList &) = default ;
        QueryResultList(QueryResultList &&) = default ;
        QueryResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QueryResultList() = default ;
        QueryResultList& operator=(const QueryResultList &) = default ;
        QueryResultList& operator=(QueryResultList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->columns_ == nullptr
        && this->values_ == nullptr; };
        // columns Field Functions 
        bool hasColumns() const { return this->columns_ != nullptr;};
        void deleteColumns() { this->columns_ = nullptr;};
        inline const vector<string> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<string>) };
        inline vector<string> getColumns() { DARABONBA_PTR_GET(columns_, vector<string>) };
        inline QueryResultList& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
        inline QueryResultList& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<Darabonba::Json> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getValues() { DARABONBA_PTR_GET(values_, vector<Darabonba::Json>) };
        inline QueryResultList& setValues(const vector<Darabonba::Json> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline QueryResultList& setValues(vector<Darabonba::Json> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The field names.
        shared_ptr<vector<string>> columns_ {};
        // The resource data.
        shared_ptr<vector<Darabonba::Json>> values_ {};
      };

      virtual bool empty() const override { return this->queryResultList_ == nullptr; };
      // queryResultList Field Functions 
      bool hasQueryResultList() const { return this->queryResultList_ != nullptr;};
      void deleteQueryResultList() { this->queryResultList_ = nullptr;};
      inline const QueryResults::QueryResultList & getQueryResultList() const { DARABONBA_PTR_GET_CONST(queryResultList_, QueryResults::QueryResultList) };
      inline QueryResults::QueryResultList getQueryResultList() { DARABONBA_PTR_GET(queryResultList_, QueryResults::QueryResultList) };
      inline QueryResults& setQueryResultList(const QueryResults::QueryResultList & queryResultList) { DARABONBA_PTR_SET_VALUE(queryResultList_, queryResultList) };
      inline QueryResults& setQueryResultList(QueryResults::QueryResultList && queryResultList) { DARABONBA_PTR_SET_RVALUE(queryResultList_, queryResultList) };


    protected:
      // The queried resources. A maximum of 1,000 data records can be returned. To view more data, use the download URL of the resource file.
      shared_ptr<QueryResults::QueryResultList> queryResultList_ {};
    };

    virtual bool empty() const override { return this->queryResults_ == nullptr
        && this->requestId_ == nullptr; };
    // queryResults Field Functions 
    bool hasQueryResults() const { return this->queryResults_ != nullptr;};
    void deleteQueryResults() { this->queryResults_ = nullptr;};
    inline const ListResourcesByAdvancedSearchResponseBody::QueryResults & getQueryResults() const { DARABONBA_PTR_GET_CONST(queryResults_, ListResourcesByAdvancedSearchResponseBody::QueryResults) };
    inline ListResourcesByAdvancedSearchResponseBody::QueryResults getQueryResults() { DARABONBA_PTR_GET(queryResults_, ListResourcesByAdvancedSearchResponseBody::QueryResults) };
    inline ListResourcesByAdvancedSearchResponseBody& setQueryResults(const ListResourcesByAdvancedSearchResponseBody::QueryResults & queryResults) { DARABONBA_PTR_SET_VALUE(queryResults_, queryResults) };
    inline ListResourcesByAdvancedSearchResponseBody& setQueryResults(ListResourcesByAdvancedSearchResponseBody::QueryResults && queryResults) { DARABONBA_PTR_SET_RVALUE(queryResults_, queryResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourcesByAdvancedSearchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The query result.
    shared_ptr<ListResourcesByAdvancedSearchResponseBody::QueryResults> queryResults_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
