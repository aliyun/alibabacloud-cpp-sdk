// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODY_HPP_
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
  class DescribeSlowLogTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlowLogTrend, slowLogTrend_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlowLogTrend, slowLogTrend_);
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
    class SlowLogTrend : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlowLogTrend& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Rows, rows_);
        DARABONBA_PTR_TO_JSON(RowsBeforeLimitAtLeast, rowsBeforeLimitAtLeast_);
        DARABONBA_PTR_TO_JSON(Statistics, statistics_);
        DARABONBA_PTR_TO_JSON(TableSchema, tableSchema_);
      };
      friend void from_json(const Darabonba::Json& j, SlowLogTrend& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Rows, rows_);
        DARABONBA_PTR_FROM_JSON(RowsBeforeLimitAtLeast, rowsBeforeLimitAtLeast_);
        DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
        DARABONBA_PTR_FROM_JSON(TableSchema, tableSchema_);
      };
      SlowLogTrend() = default ;
      SlowLogTrend(const SlowLogTrend &) = default ;
      SlowLogTrend(SlowLogTrend &&) = default ;
      SlowLogTrend(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlowLogTrend() = default ;
      SlowLogTrend& operator=(const SlowLogTrend &) = default ;
      SlowLogTrend& operator=(SlowLogTrend &&) = default ;
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
          shared_ptr<string> name_ {};
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
        shared_ptr<int32_t> bytesRead_ {};
        shared_ptr<float> elapsedTime_ {};
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
            DARABONBA_PTR_TO_JSON(AvgQueryDurationMs, avgQueryDurationMs_);
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(MaxQueryDurationMs, maxQueryDurationMs_);
            DARABONBA_PTR_TO_JSON(MinQueryDurationMs, minQueryDurationMs_);
            DARABONBA_PTR_TO_JSON(QueryStartTime, queryStartTime_);
          };
          friend void from_json(const Darabonba::Json& j, ResultSet& obj) { 
            DARABONBA_PTR_FROM_JSON(AvgQueryDurationMs, avgQueryDurationMs_);
            DARABONBA_PTR_FROM_JSON(Count, count_);
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
        && this->count_ == nullptr && this->maxQueryDurationMs_ == nullptr && this->minQueryDurationMs_ == nullptr && this->queryStartTime_ == nullptr; };
          // avgQueryDurationMs Field Functions 
          bool hasAvgQueryDurationMs() const { return this->avgQueryDurationMs_ != nullptr;};
          void deleteAvgQueryDurationMs() { this->avgQueryDurationMs_ = nullptr;};
          inline string getAvgQueryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(avgQueryDurationMs_, "") };
          inline ResultSet& setAvgQueryDurationMs(string avgQueryDurationMs) { DARABONBA_PTR_SET_VALUE(avgQueryDurationMs_, avgQueryDurationMs) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
          inline ResultSet& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // maxQueryDurationMs Field Functions 
          bool hasMaxQueryDurationMs() const { return this->maxQueryDurationMs_ != nullptr;};
          void deleteMaxQueryDurationMs() { this->maxQueryDurationMs_ = nullptr;};
          inline string getMaxQueryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(maxQueryDurationMs_, "") };
          inline ResultSet& setMaxQueryDurationMs(string maxQueryDurationMs) { DARABONBA_PTR_SET_VALUE(maxQueryDurationMs_, maxQueryDurationMs) };


          // minQueryDurationMs Field Functions 
          bool hasMinQueryDurationMs() const { return this->minQueryDurationMs_ != nullptr;};
          void deleteMinQueryDurationMs() { this->minQueryDurationMs_ = nullptr;};
          inline string getMinQueryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(minQueryDurationMs_, "") };
          inline ResultSet& setMinQueryDurationMs(string minQueryDurationMs) { DARABONBA_PTR_SET_VALUE(minQueryDurationMs_, minQueryDurationMs) };


          // queryStartTime Field Functions 
          bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
          void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
          inline string getQueryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, "") };
          inline ResultSet& setQueryStartTime(string queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


        protected:
          shared_ptr<string> avgQueryDurationMs_ {};
          shared_ptr<string> count_ {};
          shared_ptr<string> maxQueryDurationMs_ {};
          shared_ptr<string> minQueryDurationMs_ {};
          shared_ptr<string> queryStartTime_ {};
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
      inline const SlowLogTrend::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SlowLogTrend::Data) };
      inline SlowLogTrend::Data getData() { DARABONBA_PTR_GET(data_, SlowLogTrend::Data) };
      inline SlowLogTrend& setData(const SlowLogTrend::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline SlowLogTrend& setData(SlowLogTrend::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // rows Field Functions 
      bool hasRows() const { return this->rows_ != nullptr;};
      void deleteRows() { this->rows_ = nullptr;};
      inline string getRows() const { DARABONBA_PTR_GET_DEFAULT(rows_, "") };
      inline SlowLogTrend& setRows(string rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


      // rowsBeforeLimitAtLeast Field Functions 
      bool hasRowsBeforeLimitAtLeast() const { return this->rowsBeforeLimitAtLeast_ != nullptr;};
      void deleteRowsBeforeLimitAtLeast() { this->rowsBeforeLimitAtLeast_ = nullptr;};
      inline string getRowsBeforeLimitAtLeast() const { DARABONBA_PTR_GET_DEFAULT(rowsBeforeLimitAtLeast_, "") };
      inline SlowLogTrend& setRowsBeforeLimitAtLeast(string rowsBeforeLimitAtLeast) { DARABONBA_PTR_SET_VALUE(rowsBeforeLimitAtLeast_, rowsBeforeLimitAtLeast) };


      // statistics Field Functions 
      bool hasStatistics() const { return this->statistics_ != nullptr;};
      void deleteStatistics() { this->statistics_ = nullptr;};
      inline const SlowLogTrend::Statistics & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, SlowLogTrend::Statistics) };
      inline SlowLogTrend::Statistics getStatistics() { DARABONBA_PTR_GET(statistics_, SlowLogTrend::Statistics) };
      inline SlowLogTrend& setStatistics(const SlowLogTrend::Statistics & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
      inline SlowLogTrend& setStatistics(SlowLogTrend::Statistics && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


      // tableSchema Field Functions 
      bool hasTableSchema() const { return this->tableSchema_ != nullptr;};
      void deleteTableSchema() { this->tableSchema_ = nullptr;};
      inline const SlowLogTrend::TableSchema & getTableSchema() const { DARABONBA_PTR_GET_CONST(tableSchema_, SlowLogTrend::TableSchema) };
      inline SlowLogTrend::TableSchema getTableSchema() { DARABONBA_PTR_GET(tableSchema_, SlowLogTrend::TableSchema) };
      inline SlowLogTrend& setTableSchema(const SlowLogTrend::TableSchema & tableSchema) { DARABONBA_PTR_SET_VALUE(tableSchema_, tableSchema) };
      inline SlowLogTrend& setTableSchema(SlowLogTrend::TableSchema && tableSchema) { DARABONBA_PTR_SET_RVALUE(tableSchema_, tableSchema) };


    protected:
      shared_ptr<SlowLogTrend::Data> data_ {};
      shared_ptr<string> rows_ {};
      shared_ptr<string> rowsBeforeLimitAtLeast_ {};
      shared_ptr<SlowLogTrend::Statistics> statistics_ {};
      shared_ptr<SlowLogTrend::TableSchema> tableSchema_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->slowLogTrend_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlowLogTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slowLogTrend Field Functions 
    bool hasSlowLogTrend() const { return this->slowLogTrend_ != nullptr;};
    void deleteSlowLogTrend() { this->slowLogTrend_ = nullptr;};
    inline const DescribeSlowLogTrendResponseBody::SlowLogTrend & getSlowLogTrend() const { DARABONBA_PTR_GET_CONST(slowLogTrend_, DescribeSlowLogTrendResponseBody::SlowLogTrend) };
    inline DescribeSlowLogTrendResponseBody::SlowLogTrend getSlowLogTrend() { DARABONBA_PTR_GET(slowLogTrend_, DescribeSlowLogTrendResponseBody::SlowLogTrend) };
    inline DescribeSlowLogTrendResponseBody& setSlowLogTrend(const DescribeSlowLogTrendResponseBody::SlowLogTrend & slowLogTrend) { DARABONBA_PTR_SET_VALUE(slowLogTrend_, slowLogTrend) };
    inline DescribeSlowLogTrendResponseBody& setSlowLogTrend(DescribeSlowLogTrendResponseBody::SlowLogTrend && slowLogTrend) { DARABONBA_PTR_SET_RVALUE(slowLogTrend_, slowLogTrend) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeSlowLogTrendResponseBody::SlowLogTrend> slowLogTrend_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
