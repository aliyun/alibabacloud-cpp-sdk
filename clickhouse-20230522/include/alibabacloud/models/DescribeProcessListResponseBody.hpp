// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTRESPONSEBODY_HPP_
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
  class DescribeProcessListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeProcessListResponseBody() = default ;
    DescribeProcessListResponseBody(const DescribeProcessListResponseBody &) = default ;
    DescribeProcessListResponseBody(DescribeProcessListResponseBody &&) = default ;
    DescribeProcessListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessListResponseBody() = default ;
    DescribeProcessListResponseBody& operator=(const DescribeProcessListResponseBody &) = default ;
    DescribeProcessListResponseBody& operator=(DescribeProcessListResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(ResultSet, resultSet_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
          DARABONBA_PTR_TO_JSON(InitialAddress, initialAddress_);
          DARABONBA_PTR_TO_JSON(InitialQueryId, initialQueryId_);
          DARABONBA_PTR_TO_JSON(InitialUser, initialUser_);
          DARABONBA_PTR_TO_JSON(Query, query_);
          DARABONBA_PTR_TO_JSON(QueryDurationMs, queryDurationMs_);
          DARABONBA_PTR_TO_JSON(QueryStartTime, queryStartTime_);
        };
        friend void from_json(const Darabonba::Json& j, ResultSet& obj) { 
          DARABONBA_PTR_FROM_JSON(InitialAddress, initialAddress_);
          DARABONBA_PTR_FROM_JSON(InitialQueryId, initialQueryId_);
          DARABONBA_PTR_FROM_JSON(InitialUser, initialUser_);
          DARABONBA_PTR_FROM_JSON(Query, query_);
          DARABONBA_PTR_FROM_JSON(QueryDurationMs, queryDurationMs_);
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
        virtual bool empty() const override { return this->initialAddress_ == nullptr
        && this->initialQueryId_ == nullptr && this->initialUser_ == nullptr && this->query_ == nullptr && this->queryDurationMs_ == nullptr && this->queryStartTime_ == nullptr; };
        // initialAddress Field Functions 
        bool hasInitialAddress() const { return this->initialAddress_ != nullptr;};
        void deleteInitialAddress() { this->initialAddress_ = nullptr;};
        inline string getInitialAddress() const { DARABONBA_PTR_GET_DEFAULT(initialAddress_, "") };
        inline ResultSet& setInitialAddress(string initialAddress) { DARABONBA_PTR_SET_VALUE(initialAddress_, initialAddress) };


        // initialQueryId Field Functions 
        bool hasInitialQueryId() const { return this->initialQueryId_ != nullptr;};
        void deleteInitialQueryId() { this->initialQueryId_ = nullptr;};
        inline string getInitialQueryId() const { DARABONBA_PTR_GET_DEFAULT(initialQueryId_, "") };
        inline ResultSet& setInitialQueryId(string initialQueryId) { DARABONBA_PTR_SET_VALUE(initialQueryId_, initialQueryId) };


        // initialUser Field Functions 
        bool hasInitialUser() const { return this->initialUser_ != nullptr;};
        void deleteInitialUser() { this->initialUser_ = nullptr;};
        inline string getInitialUser() const { DARABONBA_PTR_GET_DEFAULT(initialUser_, "") };
        inline ResultSet& setInitialUser(string initialUser) { DARABONBA_PTR_SET_VALUE(initialUser_, initialUser) };


        // query Field Functions 
        bool hasQuery() const { return this->query_ != nullptr;};
        void deleteQuery() { this->query_ = nullptr;};
        inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
        inline ResultSet& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


        // queryDurationMs Field Functions 
        bool hasQueryDurationMs() const { return this->queryDurationMs_ != nullptr;};
        void deleteQueryDurationMs() { this->queryDurationMs_ = nullptr;};
        inline int64_t getQueryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(queryDurationMs_, 0L) };
        inline ResultSet& setQueryDurationMs(int64_t queryDurationMs) { DARABONBA_PTR_SET_VALUE(queryDurationMs_, queryDurationMs) };


        // queryStartTime Field Functions 
        bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
        void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
        inline string getQueryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, "") };
        inline ResultSet& setQueryStartTime(string queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


      protected:
        // The address to which the query statement is sent.
        shared_ptr<string> initialAddress_ {};
        // The query ID.
        shared_ptr<string> initialQueryId_ {};
        // The user who executes the query statement.
        shared_ptr<string> initialUser_ {};
        // The query statement that is running.
        shared_ptr<string> query_ {};
        // The minimum query duration. Minimum value: **1000**. Unit: milliseconds.
        shared_ptr<int64_t> queryDurationMs_ {};
        // The beginning of the time range to query. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> queryStartTime_ {};
      };

      virtual bool empty() const override { return this->DBInstanceID_ == nullptr
        && this->DBInstanceName_ == nullptr && this->resultSet_ == nullptr && this->totalCount_ == nullptr; };
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


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The cluster ID.
      shared_ptr<int32_t> DBInstanceID_ {};
      // The cluster name.
      shared_ptr<string> DBInstanceName_ {};
      // The result sets.
      shared_ptr<vector<Data::ResultSet>> resultSet_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeProcessListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeProcessListResponseBody::Data) };
    inline DescribeProcessListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeProcessListResponseBody::Data) };
    inline DescribeProcessListResponseBody& setData(const DescribeProcessListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeProcessListResponseBody& setData(DescribeProcessListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProcessListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<DescribeProcessListResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
