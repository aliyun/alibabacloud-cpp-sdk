// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlowLogRecords, slowLogRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlowLogRecords, slowLogRecords_);
    };
    DescribeSlowLogRecordsResponseBody() = default ;
    DescribeSlowLogRecordsResponseBody(const DescribeSlowLogRecordsResponseBody &) = default ;
    DescribeSlowLogRecordsResponseBody(DescribeSlowLogRecordsResponseBody &&) = default ;
    DescribeSlowLogRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogRecordsResponseBody() = default ;
    DescribeSlowLogRecordsResponseBody& operator=(const DescribeSlowLogRecordsResponseBody &) = default ;
    DescribeSlowLogRecordsResponseBody& operator=(DescribeSlowLogRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SlowLogRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlowLogRecords& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Rows, rows_);
        DARABONBA_PTR_TO_JSON(RowsBeforeLimitAtLeast, rowsBeforeLimitAtLeast_);
        DARABONBA_PTR_TO_JSON(Statistics, statistics_);
        DARABONBA_PTR_TO_JSON(TableSchema, tableSchema_);
      };
      friend void from_json(const Darabonba::Json& j, SlowLogRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Rows, rows_);
        DARABONBA_PTR_FROM_JSON(RowsBeforeLimitAtLeast, rowsBeforeLimitAtLeast_);
        DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
        DARABONBA_PTR_FROM_JSON(TableSchema, tableSchema_);
      };
      SlowLogRecords() = default ;
      SlowLogRecords(const SlowLogRecords &) = default ;
      SlowLogRecords(SlowLogRecords &&) = default ;
      SlowLogRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlowLogRecords() = default ;
      SlowLogRecords& operator=(const SlowLogRecords &) = default ;
      SlowLogRecords& operator=(SlowLogRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TableSchema : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TableSchema& obj) { 
          DARABONBA_PTR_TO_JSON(ResultSet, resultSet_);
        };
        friend void from_json(const Darabonba::Json& j, TableSchema& obj) { 
          DARABONBA_PTR_FROM_JSON(ResultSet, resultSet_);
        };
        TableSchema() = default ;
        TableSchema(const TableSchema &) = default ;
        TableSchema(TableSchema &&) = default ;
        TableSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TableSchema() = default ;
        TableSchema& operator=(const TableSchema &) = default ;
        TableSchema& operator=(TableSchema &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResultSet : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResultSet& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, ResultSet& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
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
          virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ResultSet& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline ResultSet& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The name of the column.
          shared_ptr<string> name_ {};
          // The type of the column.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->resultSet_ == nullptr; };
        // resultSet Field Functions 
        bool hasResultSet() const { return this->resultSet_ != nullptr;};
        void deleteResultSet() { this->resultSet_ = nullptr;};
        inline const vector<TableSchema::ResultSet> & getResultSet() const { DARABONBA_PTR_GET_CONST(resultSet_, vector<TableSchema::ResultSet>) };
        inline vector<TableSchema::ResultSet> getResultSet() { DARABONBA_PTR_GET(resultSet_, vector<TableSchema::ResultSet>) };
        inline TableSchema& setResultSet(const vector<TableSchema::ResultSet> & resultSet) { DARABONBA_PTR_SET_VALUE(resultSet_, resultSet) };
        inline TableSchema& setResultSet(vector<TableSchema::ResultSet> && resultSet) { DARABONBA_PTR_SET_RVALUE(resultSet_, resultSet) };


      protected:
        shared_ptr<vector<TableSchema::ResultSet>> resultSet_ {};
      };

      class Statistics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Statistics& obj) { 
          DARABONBA_PTR_TO_JSON(BytesRead, bytesRead_);
          DARABONBA_PTR_TO_JSON(ElapsedTime, elapsedTime_);
          DARABONBA_PTR_TO_JSON(RowsRead, rowsRead_);
        };
        friend void from_json(const Darabonba::Json& j, Statistics& obj) { 
          DARABONBA_PTR_FROM_JSON(BytesRead, bytesRead_);
          DARABONBA_PTR_FROM_JSON(ElapsedTime, elapsedTime_);
          DARABONBA_PTR_FROM_JSON(RowsRead, rowsRead_);
        };
        Statistics() = default ;
        Statistics(const Statistics &) = default ;
        Statistics(Statistics &&) = default ;
        Statistics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Statistics() = default ;
        Statistics& operator=(const Statistics &) = default ;
        Statistics& operator=(Statistics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bytesRead_ == nullptr
        && this->elapsedTime_ == nullptr && this->rowsRead_ == nullptr; };
        // bytesRead Field Functions 
        bool hasBytesRead() const { return this->bytesRead_ != nullptr;};
        void deleteBytesRead() { this->bytesRead_ = nullptr;};
        inline int32_t getBytesRead() const { DARABONBA_PTR_GET_DEFAULT(bytesRead_, 0) };
        inline Statistics& setBytesRead(int32_t bytesRead) { DARABONBA_PTR_SET_VALUE(bytesRead_, bytesRead) };


        // elapsedTime Field Functions 
        bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
        void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
        inline float getElapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0.0) };
        inline Statistics& setElapsedTime(float elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


        // rowsRead Field Functions 
        bool hasRowsRead() const { return this->rowsRead_ != nullptr;};
        void deleteRowsRead() { this->rowsRead_ = nullptr;};
        inline int32_t getRowsRead() const { DARABONBA_PTR_GET_DEFAULT(rowsRead_, 0) };
        inline Statistics& setRowsRead(int32_t rowsRead) { DARABONBA_PTR_SET_VALUE(rowsRead_, rowsRead) };


      protected:
        // The total size of data that were read. Unit: bytes.
        shared_ptr<int32_t> bytesRead_ {};
        // The time consumed by the slow query. Unit: milliseconds.
        shared_ptr<float> elapsedTime_ {};
        // The total number of rows that were read.
        shared_ptr<int32_t> rowsRead_ {};
      };

      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(ResultSet, resultSet_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
            DARABONBA_PTR_TO_JSON(InitialAddress, initialAddress_);
            DARABONBA_PTR_TO_JSON(InitialQueryId, initialQueryId_);
            DARABONBA_PTR_TO_JSON(InitialUser, initialUser_);
            DARABONBA_PTR_TO_JSON(MemoryUsage, memoryUsage_);
            DARABONBA_PTR_TO_JSON(Query, query_);
            DARABONBA_PTR_TO_JSON(QueryDurationMs, queryDurationMs_);
            DARABONBA_PTR_TO_JSON(QueryStartTime, queryStartTime_);
            DARABONBA_PTR_TO_JSON(ReadBytes, readBytes_);
            DARABONBA_PTR_TO_JSON(ReadRows, readRows_);
            DARABONBA_PTR_TO_JSON(ResultBytes, resultBytes_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, ResultSet& obj) { 
            DARABONBA_PTR_FROM_JSON(InitialAddress, initialAddress_);
            DARABONBA_PTR_FROM_JSON(InitialQueryId, initialQueryId_);
            DARABONBA_PTR_FROM_JSON(InitialUser, initialUser_);
            DARABONBA_PTR_FROM_JSON(MemoryUsage, memoryUsage_);
            DARABONBA_PTR_FROM_JSON(Query, query_);
            DARABONBA_PTR_FROM_JSON(QueryDurationMs, queryDurationMs_);
            DARABONBA_PTR_FROM_JSON(QueryStartTime, queryStartTime_);
            DARABONBA_PTR_FROM_JSON(ReadBytes, readBytes_);
            DARABONBA_PTR_FROM_JSON(ReadRows, readRows_);
            DARABONBA_PTR_FROM_JSON(ResultBytes, resultBytes_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
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
        && this->initialQueryId_ == nullptr && this->initialUser_ == nullptr && this->memoryUsage_ == nullptr && this->query_ == nullptr && this->queryDurationMs_ == nullptr
        && this->queryStartTime_ == nullptr && this->readBytes_ == nullptr && this->readRows_ == nullptr && this->resultBytes_ == nullptr && this->type_ == nullptr; };
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


          // memoryUsage Field Functions 
          bool hasMemoryUsage() const { return this->memoryUsage_ != nullptr;};
          void deleteMemoryUsage() { this->memoryUsage_ = nullptr;};
          inline string getMemoryUsage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsage_, "") };
          inline ResultSet& setMemoryUsage(string memoryUsage) { DARABONBA_PTR_SET_VALUE(memoryUsage_, memoryUsage) };


          // query Field Functions 
          bool hasQuery() const { return this->query_ != nullptr;};
          void deleteQuery() { this->query_ = nullptr;};
          inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
          inline ResultSet& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


          // queryDurationMs Field Functions 
          bool hasQueryDurationMs() const { return this->queryDurationMs_ != nullptr;};
          void deleteQueryDurationMs() { this->queryDurationMs_ = nullptr;};
          inline string getQueryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(queryDurationMs_, "") };
          inline ResultSet& setQueryDurationMs(string queryDurationMs) { DARABONBA_PTR_SET_VALUE(queryDurationMs_, queryDurationMs) };


          // queryStartTime Field Functions 
          bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
          void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
          inline string getQueryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, "") };
          inline ResultSet& setQueryStartTime(string queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


          // readBytes Field Functions 
          bool hasReadBytes() const { return this->readBytes_ != nullptr;};
          void deleteReadBytes() { this->readBytes_ = nullptr;};
          inline string getReadBytes() const { DARABONBA_PTR_GET_DEFAULT(readBytes_, "") };
          inline ResultSet& setReadBytes(string readBytes) { DARABONBA_PTR_SET_VALUE(readBytes_, readBytes) };


          // readRows Field Functions 
          bool hasReadRows() const { return this->readRows_ != nullptr;};
          void deleteReadRows() { this->readRows_ = nullptr;};
          inline string getReadRows() const { DARABONBA_PTR_GET_DEFAULT(readRows_, "") };
          inline ResultSet& setReadRows(string readRows) { DARABONBA_PTR_SET_VALUE(readRows_, readRows) };


          // resultBytes Field Functions 
          bool hasResultBytes() const { return this->resultBytes_ != nullptr;};
          void deleteResultBytes() { this->resultBytes_ = nullptr;};
          inline string getResultBytes() const { DARABONBA_PTR_GET_DEFAULT(resultBytes_, "") };
          inline ResultSet& setResultBytes(string resultBytes) { DARABONBA_PTR_SET_VALUE(resultBytes_, resultBytes) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline ResultSet& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The IP address of the client that initiated the query.
          shared_ptr<string> initialAddress_ {};
          // The query ID.
          shared_ptr<string> initialQueryId_ {};
          // The username that is used to initiate the query.
          shared_ptr<string> initialUser_ {};
          // The peak memory usage for the query. Unit: bytes.
          shared_ptr<string> memoryUsage_ {};
          // The statement that was executed in the query.
          shared_ptr<string> query_ {};
          // The duration of the query. Unit: milliseconds.
          shared_ptr<string> queryDurationMs_ {};
          // The beginning of the time range to query. The time is in the yyyy-MM-dd hh:mm:ss format. The time is displayed in UTC.
          shared_ptr<string> queryStartTime_ {};
          // The size of the data read by executing the statement. Unit: bytes.
          shared_ptr<string> readBytes_ {};
          // The number of rows read by executing the statement.
          shared_ptr<string> readRows_ {};
          // The size of the result data. Unit: bytes.
          shared_ptr<string> resultBytes_ {};
          // The query status. Valid values:
          // 
          // *   **QueryFinish**: The query is complete.
          // *   **Processing**: The query is running.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->resultSet_ == nullptr; };
        // resultSet Field Functions 
        bool hasResultSet() const { return this->resultSet_ != nullptr;};
        void deleteResultSet() { this->resultSet_ = nullptr;};
        inline const vector<Data::ResultSet> & getResultSet() const { DARABONBA_PTR_GET_CONST(resultSet_, vector<Data::ResultSet>) };
        inline vector<Data::ResultSet> getResultSet() { DARABONBA_PTR_GET(resultSet_, vector<Data::ResultSet>) };
        inline Data& setResultSet(const vector<Data::ResultSet> & resultSet) { DARABONBA_PTR_SET_VALUE(resultSet_, resultSet) };
        inline Data& setResultSet(vector<Data::ResultSet> && resultSet) { DARABONBA_PTR_SET_RVALUE(resultSet_, resultSet) };


      protected:
        shared_ptr<vector<Data::ResultSet>> resultSet_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->rows_ == nullptr && this->rowsBeforeLimitAtLeast_ == nullptr && this->statistics_ == nullptr && this->tableSchema_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const SlowLogRecords::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SlowLogRecords::Data) };
      inline SlowLogRecords::Data getData() { DARABONBA_PTR_GET(data_, SlowLogRecords::Data) };
      inline SlowLogRecords& setData(const SlowLogRecords::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline SlowLogRecords& setData(SlowLogRecords::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // rows Field Functions 
      bool hasRows() const { return this->rows_ != nullptr;};
      void deleteRows() { this->rows_ = nullptr;};
      inline string getRows() const { DARABONBA_PTR_GET_DEFAULT(rows_, "") };
      inline SlowLogRecords& setRows(string rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


      // rowsBeforeLimitAtLeast Field Functions 
      bool hasRowsBeforeLimitAtLeast() const { return this->rowsBeforeLimitAtLeast_ != nullptr;};
      void deleteRowsBeforeLimitAtLeast() { this->rowsBeforeLimitAtLeast_ = nullptr;};
      inline string getRowsBeforeLimitAtLeast() const { DARABONBA_PTR_GET_DEFAULT(rowsBeforeLimitAtLeast_, "") };
      inline SlowLogRecords& setRowsBeforeLimitAtLeast(string rowsBeforeLimitAtLeast) { DARABONBA_PTR_SET_VALUE(rowsBeforeLimitAtLeast_, rowsBeforeLimitAtLeast) };


      // statistics Field Functions 
      bool hasStatistics() const { return this->statistics_ != nullptr;};
      void deleteStatistics() { this->statistics_ = nullptr;};
      inline const SlowLogRecords::Statistics & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, SlowLogRecords::Statistics) };
      inline SlowLogRecords::Statistics getStatistics() { DARABONBA_PTR_GET(statistics_, SlowLogRecords::Statistics) };
      inline SlowLogRecords& setStatistics(const SlowLogRecords::Statistics & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
      inline SlowLogRecords& setStatistics(SlowLogRecords::Statistics && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


      // tableSchema Field Functions 
      bool hasTableSchema() const { return this->tableSchema_ != nullptr;};
      void deleteTableSchema() { this->tableSchema_ = nullptr;};
      inline const SlowLogRecords::TableSchema & getTableSchema() const { DARABONBA_PTR_GET_CONST(tableSchema_, SlowLogRecords::TableSchema) };
      inline SlowLogRecords::TableSchema getTableSchema() { DARABONBA_PTR_GET(tableSchema_, SlowLogRecords::TableSchema) };
      inline SlowLogRecords& setTableSchema(const SlowLogRecords::TableSchema & tableSchema) { DARABONBA_PTR_SET_VALUE(tableSchema_, tableSchema) };
      inline SlowLogRecords& setTableSchema(SlowLogRecords::TableSchema && tableSchema) { DARABONBA_PTR_SET_RVALUE(tableSchema_, tableSchema) };


    protected:
      // Details about the slow query logs.
      shared_ptr<SlowLogRecords::Data> data_ {};
      // The number of rows in the result set.
      shared_ptr<string> rows_ {};
      // The number of entries per page.
      shared_ptr<string> rowsBeforeLimitAtLeast_ {};
      // The statistics of the results.
      shared_ptr<SlowLogRecords::Statistics> statistics_ {};
      // The schema of the table in the database.
      shared_ptr<SlowLogRecords::TableSchema> tableSchema_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->slowLogRecords_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlowLogRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slowLogRecords Field Functions 
    bool hasSlowLogRecords() const { return this->slowLogRecords_ != nullptr;};
    void deleteSlowLogRecords() { this->slowLogRecords_ = nullptr;};
    inline const DescribeSlowLogRecordsResponseBody::SlowLogRecords & getSlowLogRecords() const { DARABONBA_PTR_GET_CONST(slowLogRecords_, DescribeSlowLogRecordsResponseBody::SlowLogRecords) };
    inline DescribeSlowLogRecordsResponseBody::SlowLogRecords getSlowLogRecords() { DARABONBA_PTR_GET(slowLogRecords_, DescribeSlowLogRecordsResponseBody::SlowLogRecords) };
    inline DescribeSlowLogRecordsResponseBody& setSlowLogRecords(const DescribeSlowLogRecordsResponseBody::SlowLogRecords & slowLogRecords) { DARABONBA_PTR_SET_VALUE(slowLogRecords_, slowLogRecords) };
    inline DescribeSlowLogRecordsResponseBody& setSlowLogRecords(DescribeSlowLogRecordsResponseBody::SlowLogRecords && slowLogRecords) { DARABONBA_PTR_SET_RVALUE(slowLogRecords_, slowLogRecords) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details about the slow query logs.
    shared_ptr<DescribeSlowLogRecordsResponseBody::SlowLogRecords> slowLogRecords_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
