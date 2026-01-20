// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeSlowLogTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSlowLogTrendResponseBody() = default ;
    DescribeSlowLogTrendResponseBody(const DescribeSlowLogTrendResponseBody &) = default ;
    DescribeSlowLogTrendResponseBody(DescribeSlowLogTrendResponseBody &&) = default ;
    DescribeSlowLogTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogTrendResponseBody() = default ;
    DescribeSlowLogTrendResponseBody& operator=(const DescribeSlowLogTrendResponseBody &) = default ;
    DescribeSlowLogTrendResponseBody& operator=(DescribeSlowLogTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(ResultSet, resultSet_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(ResultSet, resultSet_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResultSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResultSet& obj) { 
          DARABONBA_PTR_TO_JSON(AvgQueryDurationMs, avgQueryDurationMs_);
          DARABONBA_PTR_TO_JSON(Cnt, cnt_);
          DARABONBA_PTR_TO_JSON(MaxQueryDurationMs, maxQueryDurationMs_);
          DARABONBA_PTR_TO_JSON(MinQueryDurationMs, minQueryDurationMs_);
          DARABONBA_PTR_TO_JSON(QueryStartTime, queryStartTime_);
        };
        friend void from_json(const Darabonba::Json& j, ResultSet& obj) { 
          DARABONBA_PTR_FROM_JSON(AvgQueryDurationMs, avgQueryDurationMs_);
          DARABONBA_PTR_FROM_JSON(Cnt, cnt_);
          DARABONBA_PTR_FROM_JSON(MaxQueryDurationMs, maxQueryDurationMs_);
          DARABONBA_PTR_FROM_JSON(MinQueryDurationMs, minQueryDurationMs_);
          DARABONBA_PTR_FROM_JSON(QueryStartTime, queryStartTime_);
        };
        ResultSet() = default ;
        ResultSet(const ResultSet &) = default ;
        ResultSet(ResultSet &&) = default ;
        ResultSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResultSet() = default ;
        ResultSet& operator=(const ResultSet &) = default ;
        ResultSet& operator=(ResultSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->avgQueryDurationMs_ == nullptr
        && this->cnt_ == nullptr && this->maxQueryDurationMs_ == nullptr && this->minQueryDurationMs_ == nullptr && this->queryStartTime_ == nullptr; };
        // avgQueryDurationMs Field Functions 
        bool hasAvgQueryDurationMs() const { return this->avgQueryDurationMs_ != nullptr;};
        void deleteAvgQueryDurationMs() { this->avgQueryDurationMs_ = nullptr;};
        inline int64_t getAvgQueryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(avgQueryDurationMs_, 0L) };
        inline ResultSet& setAvgQueryDurationMs(int64_t avgQueryDurationMs) { DARABONBA_PTR_SET_VALUE(avgQueryDurationMs_, avgQueryDurationMs) };


        // cnt Field Functions 
        bool hasCnt() const { return this->cnt_ != nullptr;};
        void deleteCnt() { this->cnt_ = nullptr;};
        inline int64_t getCnt() const { DARABONBA_PTR_GET_DEFAULT(cnt_, 0L) };
        inline ResultSet& setCnt(int64_t cnt) { DARABONBA_PTR_SET_VALUE(cnt_, cnt) };


        // maxQueryDurationMs Field Functions 
        bool hasMaxQueryDurationMs() const { return this->maxQueryDurationMs_ != nullptr;};
        void deleteMaxQueryDurationMs() { this->maxQueryDurationMs_ = nullptr;};
        inline int64_t getMaxQueryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(maxQueryDurationMs_, 0L) };
        inline ResultSet& setMaxQueryDurationMs(int64_t maxQueryDurationMs) { DARABONBA_PTR_SET_VALUE(maxQueryDurationMs_, maxQueryDurationMs) };


        // minQueryDurationMs Field Functions 
        bool hasMinQueryDurationMs() const { return this->minQueryDurationMs_ != nullptr;};
        void deleteMinQueryDurationMs() { this->minQueryDurationMs_ = nullptr;};
        inline int64_t getMinQueryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(minQueryDurationMs_, 0L) };
        inline ResultSet& setMinQueryDurationMs(int64_t minQueryDurationMs) { DARABONBA_PTR_SET_VALUE(minQueryDurationMs_, minQueryDurationMs) };


        // queryStartTime Field Functions 
        bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
        void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
        inline string getQueryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, "") };
        inline ResultSet& setQueryStartTime(string queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


      protected:
        // The average execution duration of slow SQL queries. Minimum value: **1000**. Unit: milliseconds.
        shared_ptr<int64_t> avgQueryDurationMs_ {};
        // The total number of SQL queries within the specified time range.
        shared_ptr<int64_t> cnt_ {};
        // The maximum execution duration of slow SQL queries. Minimum value: **1000**. Unit: milliseconds.
        shared_ptr<int64_t> maxQueryDurationMs_ {};
        // The minimum execution duration of slow SQL queries. Minimum value: **1000**. Unit: milliseconds.
        shared_ptr<int64_t> minQueryDurationMs_ {};
        // The beginning of the time range to query. The time is in the yyyy-MM-dd hh:mm:ss format. The time is displayed in UTC.
        shared_ptr<string> queryStartTime_ {};
      };

      virtual bool empty() const override { return this->DBInstanceID_ == nullptr
        && this->DBInstanceName_ == nullptr && this->resultSet_ == nullptr; };
      // DBInstanceID Field Functions 
      bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
      void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
      inline int32_t getDBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, 0) };
      inline Data& setDBInstanceID(int32_t DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // resultSet Field Functions 
      bool hasResultSet() const { return this->resultSet_ != nullptr;};
      void deleteResultSet() { this->resultSet_ = nullptr;};
      inline const vector<Data::ResultSet> & getResultSet() const { DARABONBA_PTR_GET_CONST(resultSet_, vector<Data::ResultSet>) };
      inline vector<Data::ResultSet> getResultSet() { DARABONBA_PTR_GET(resultSet_, vector<Data::ResultSet>) };
      inline Data& setResultSet(const vector<Data::ResultSet> & resultSet) { DARABONBA_PTR_SET_VALUE(resultSet_, resultSet) };
      inline Data& setResultSet(vector<Data::ResultSet> && resultSet) { DARABONBA_PTR_SET_RVALUE(resultSet_, resultSet) };


    protected:
      // The cluster ID.
      shared_ptr<int32_t> DBInstanceID_ {};
      // The cluster name.
      shared_ptr<string> DBInstanceName_ {};
      // The result sets.
      shared_ptr<vector<Data::ResultSet>> resultSet_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSlowLogTrendResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSlowLogTrendResponseBody::Data) };
    inline DescribeSlowLogTrendResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSlowLogTrendResponseBody::Data) };
    inline DescribeSlowLogTrendResponseBody& setData(const DescribeSlowLogTrendResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSlowLogTrendResponseBody& setData(DescribeSlowLogTrendResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlowLogTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    shared_ptr<DescribeSlowLogTrendResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
