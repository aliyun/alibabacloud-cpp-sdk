// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVANCEDQUERYHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVANCEDQUERYHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeAdvancedQueryHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvancedQueryHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueryHistoryList, queryHistoryList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvancedQueryHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryHistoryList, queryHistoryList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAdvancedQueryHistoryResponseBody() = default ;
    DescribeAdvancedQueryHistoryResponseBody(const DescribeAdvancedQueryHistoryResponseBody &) = default ;
    DescribeAdvancedQueryHistoryResponseBody(DescribeAdvancedQueryHistoryResponseBody &&) = default ;
    DescribeAdvancedQueryHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvancedQueryHistoryResponseBody() = default ;
    DescribeAdvancedQueryHistoryResponseBody& operator=(const DescribeAdvancedQueryHistoryResponseBody &) = default ;
    DescribeAdvancedQueryHistoryResponseBody& operator=(DescribeAdvancedQueryHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryHistoryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryHistoryList& obj) { 
        DARABONBA_PTR_TO_JSON(QueryId, queryId_);
        DARABONBA_PTR_TO_JSON(QuerySql, querySql_);
        DARABONBA_PTR_TO_JSON(SimpleQuery, simpleQuery_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      };
      friend void from_json(const Darabonba::Json& j, QueryHistoryList& obj) { 
        DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
        DARABONBA_PTR_FROM_JSON(QuerySql, querySql_);
        DARABONBA_PTR_FROM_JSON(SimpleQuery, simpleQuery_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      };
      QueryHistoryList() = default ;
      QueryHistoryList(const QueryHistoryList &) = default ;
      QueryHistoryList(QueryHistoryList &&) = default ;
      QueryHistoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryHistoryList() = default ;
      QueryHistoryList& operator=(const QueryHistoryList &) = default ;
      QueryHistoryList& operator=(QueryHistoryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->queryId_ == nullptr
        && this->querySql_ == nullptr && this->simpleQuery_ == nullptr && this->timeStamp_ == nullptr; };
      // queryId Field Functions 
      bool hasQueryId() const { return this->queryId_ != nullptr;};
      void deleteQueryId() { this->queryId_ = nullptr;};
      inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
      inline QueryHistoryList& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


      // querySql Field Functions 
      bool hasQuerySql() const { return this->querySql_ != nullptr;};
      void deleteQuerySql() { this->querySql_ = nullptr;};
      inline string getQuerySql() const { DARABONBA_PTR_GET_DEFAULT(querySql_, "") };
      inline QueryHistoryList& setQuerySql(string querySql) { DARABONBA_PTR_SET_VALUE(querySql_, querySql) };


      // simpleQuery Field Functions 
      bool hasSimpleQuery() const { return this->simpleQuery_ != nullptr;};
      void deleteSimpleQuery() { this->simpleQuery_ = nullptr;};
      inline bool getSimpleQuery() const { DARABONBA_PTR_GET_DEFAULT(simpleQuery_, false) };
      inline QueryHistoryList& setSimpleQuery(bool simpleQuery) { DARABONBA_PTR_SET_VALUE(simpleQuery_, simpleQuery) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline QueryHistoryList& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    protected:
      shared_ptr<string> queryId_ {};
      shared_ptr<string> querySql_ {};
      shared_ptr<bool> simpleQuery_ {};
      shared_ptr<string> timeStamp_ {};
    };

    virtual bool empty() const override { return this->queryHistoryList_ == nullptr
        && this->requestId_ == nullptr; };
    // queryHistoryList Field Functions 
    bool hasQueryHistoryList() const { return this->queryHistoryList_ != nullptr;};
    void deleteQueryHistoryList() { this->queryHistoryList_ = nullptr;};
    inline const vector<DescribeAdvancedQueryHistoryResponseBody::QueryHistoryList> & getQueryHistoryList() const { DARABONBA_PTR_GET_CONST(queryHistoryList_, vector<DescribeAdvancedQueryHistoryResponseBody::QueryHistoryList>) };
    inline vector<DescribeAdvancedQueryHistoryResponseBody::QueryHistoryList> getQueryHistoryList() { DARABONBA_PTR_GET(queryHistoryList_, vector<DescribeAdvancedQueryHistoryResponseBody::QueryHistoryList>) };
    inline DescribeAdvancedQueryHistoryResponseBody& setQueryHistoryList(const vector<DescribeAdvancedQueryHistoryResponseBody::QueryHistoryList> & queryHistoryList) { DARABONBA_PTR_SET_VALUE(queryHistoryList_, queryHistoryList) };
    inline DescribeAdvancedQueryHistoryResponseBody& setQueryHistoryList(vector<DescribeAdvancedQueryHistoryResponseBody::QueryHistoryList> && queryHistoryList) { DARABONBA_PTR_SET_RVALUE(queryHistoryList_, queryHistoryList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdvancedQueryHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeAdvancedQueryHistoryResponseBody::QueryHistoryList>> queryHistoryList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
