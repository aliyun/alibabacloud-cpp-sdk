// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVANCEDQUERYHISTORYRESPONSEBODYQUERYHISTORYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVANCEDQUERYHISTORYRESPONSEBODYQUERYHISTORYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList& obj) { 
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
      DARABONBA_PTR_TO_JSON(QuerySql, querySql_);
      DARABONBA_PTR_TO_JSON(SimpleQuery, simpleQuery_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
      DARABONBA_PTR_FROM_JSON(QuerySql, querySql_);
      DARABONBA_PTR_FROM_JSON(SimpleQuery, simpleQuery_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList() = default ;
    DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList(const DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList &) = default ;
    DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList(DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList &&) = default ;
    DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList() = default ;
    DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList& operator=(const DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList &) = default ;
    DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList& operator=(DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryId_ == nullptr
        && return this->querySql_ == nullptr && return this->simpleQuery_ == nullptr && return this->timeStamp_ == nullptr; };
    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string queryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // querySql Field Functions 
    bool hasQuerySql() const { return this->querySql_ != nullptr;};
    void deleteQuerySql() { this->querySql_ = nullptr;};
    inline string querySql() const { DARABONBA_PTR_GET_DEFAULT(querySql_, "") };
    inline DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList& setQuerySql(string querySql) { DARABONBA_PTR_SET_VALUE(querySql_, querySql) };


    // simpleQuery Field Functions 
    bool hasSimpleQuery() const { return this->simpleQuery_ != nullptr;};
    void deleteSimpleQuery() { this->simpleQuery_ = nullptr;};
    inline bool simpleQuery() const { DARABONBA_PTR_GET_DEFAULT(simpleQuery_, false) };
    inline DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList& setSimpleQuery(bool simpleQuery) { DARABONBA_PTR_SET_VALUE(simpleQuery_, simpleQuery) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    std::shared_ptr<string> queryId_ = nullptr;
    std::shared_ptr<string> querySql_ = nullptr;
    std::shared_ptr<bool> simpleQuery_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
