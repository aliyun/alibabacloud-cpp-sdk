// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPTABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPTABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeBackupTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupRecords, backupRecords_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupRecords, backupRecords_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeBackupTablesResponseBody() = default ;
    DescribeBackupTablesResponseBody(const DescribeBackupTablesResponseBody &) = default ;
    DescribeBackupTablesResponseBody(DescribeBackupTablesResponseBody &&) = default ;
    DescribeBackupTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupTablesResponseBody() = default ;
    DescribeBackupTablesResponseBody& operator=(const DescribeBackupTablesResponseBody &) = default ;
    DescribeBackupTablesResponseBody& operator=(DescribeBackupTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tables& obj) { 
        DARABONBA_PTR_TO_JSON(Table, table_);
      };
      friend void from_json(const Darabonba::Json& j, Tables& obj) { 
        DARABONBA_PTR_FROM_JSON(Table, table_);
      };
      Tables() = default ;
      Tables(const Tables &) = default ;
      Tables(Tables &&) = default ;
      Tables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tables() = default ;
      Tables& operator=(const Tables &) = default ;
      Tables& operator=(Tables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->table_ == nullptr; };
      // table Field Functions 
      bool hasTable() const { return this->table_ != nullptr;};
      void deleteTable() { this->table_ = nullptr;};
      inline const vector<string> & getTable() const { DARABONBA_PTR_GET_CONST(table_, vector<string>) };
      inline vector<string> getTable() { DARABONBA_PTR_GET(table_, vector<string>) };
      inline Tables& setTable(const vector<string> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
      inline Tables& setTable(vector<string> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


    protected:
      shared_ptr<vector<string>> table_ {};
    };

    class BackupRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackupRecords& obj) { 
        DARABONBA_PTR_TO_JSON(BackupRecord, backupRecord_);
      };
      friend void from_json(const Darabonba::Json& j, BackupRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupRecord, backupRecord_);
      };
      BackupRecords() = default ;
      BackupRecords(const BackupRecords &) = default ;
      BackupRecords(BackupRecords &&) = default ;
      BackupRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackupRecords() = default ;
      BackupRecords& operator=(const BackupRecords &) = default ;
      BackupRecords& operator=(BackupRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BackupRecord : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackupRecord& obj) { 
          DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Process, process_);
          DARABONBA_PTR_TO_JSON(Speed, speed_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(Table, table_);
        };
        friend void from_json(const Darabonba::Json& j, BackupRecord& obj) { 
          DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Process, process_);
          DARABONBA_PTR_FROM_JSON(Speed, speed_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(Table, table_);
        };
        BackupRecord() = default ;
        BackupRecord(const BackupRecord &) = default ;
        BackupRecord(BackupRecord &&) = default ;
        BackupRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackupRecord() = default ;
        BackupRecord& operator=(const BackupRecord &) = default ;
        BackupRecord& operator=(BackupRecord &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataSize_ == nullptr
        && this->endTime_ == nullptr && this->message_ == nullptr && this->process_ == nullptr && this->speed_ == nullptr && this->startTime_ == nullptr
        && this->state_ == nullptr && this->table_ == nullptr; };
        // dataSize Field Functions 
        bool hasDataSize() const { return this->dataSize_ != nullptr;};
        void deleteDataSize() { this->dataSize_ = nullptr;};
        inline string getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, "") };
        inline BackupRecord& setDataSize(string dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline BackupRecord& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline BackupRecord& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // process Field Functions 
        bool hasProcess() const { return this->process_ != nullptr;};
        void deleteProcess() { this->process_ = nullptr;};
        inline string getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
        inline BackupRecord& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


        // speed Field Functions 
        bool hasSpeed() const { return this->speed_ != nullptr;};
        void deleteSpeed() { this->speed_ = nullptr;};
        inline string getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
        inline BackupRecord& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline BackupRecord& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline BackupRecord& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // table Field Functions 
        bool hasTable() const { return this->table_ != nullptr;};
        void deleteTable() { this->table_ = nullptr;};
        inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
        inline BackupRecord& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


      protected:
        shared_ptr<string> dataSize_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> message_ {};
        shared_ptr<string> process_ {};
        shared_ptr<string> speed_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> state_ {};
        shared_ptr<string> table_ {};
      };

      virtual bool empty() const override { return this->backupRecord_ == nullptr; };
      // backupRecord Field Functions 
      bool hasBackupRecord() const { return this->backupRecord_ != nullptr;};
      void deleteBackupRecord() { this->backupRecord_ = nullptr;};
      inline const vector<BackupRecords::BackupRecord> & getBackupRecord() const { DARABONBA_PTR_GET_CONST(backupRecord_, vector<BackupRecords::BackupRecord>) };
      inline vector<BackupRecords::BackupRecord> getBackupRecord() { DARABONBA_PTR_GET(backupRecord_, vector<BackupRecords::BackupRecord>) };
      inline BackupRecords& setBackupRecord(const vector<BackupRecords::BackupRecord> & backupRecord) { DARABONBA_PTR_SET_VALUE(backupRecord_, backupRecord) };
      inline BackupRecords& setBackupRecord(vector<BackupRecords::BackupRecord> && backupRecord) { DARABONBA_PTR_SET_RVALUE(backupRecord_, backupRecord) };


    protected:
      shared_ptr<vector<BackupRecords::BackupRecord>> backupRecord_ {};
    };

    virtual bool empty() const override { return this->backupRecords_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->tables_ == nullptr && this->total_ == nullptr; };
    // backupRecords Field Functions 
    bool hasBackupRecords() const { return this->backupRecords_ != nullptr;};
    void deleteBackupRecords() { this->backupRecords_ = nullptr;};
    inline const DescribeBackupTablesResponseBody::BackupRecords & getBackupRecords() const { DARABONBA_PTR_GET_CONST(backupRecords_, DescribeBackupTablesResponseBody::BackupRecords) };
    inline DescribeBackupTablesResponseBody::BackupRecords getBackupRecords() { DARABONBA_PTR_GET(backupRecords_, DescribeBackupTablesResponseBody::BackupRecords) };
    inline DescribeBackupTablesResponseBody& setBackupRecords(const DescribeBackupTablesResponseBody::BackupRecords & backupRecords) { DARABONBA_PTR_SET_VALUE(backupRecords_, backupRecords) };
    inline DescribeBackupTablesResponseBody& setBackupRecords(DescribeBackupTablesResponseBody::BackupRecords && backupRecords) { DARABONBA_PTR_SET_RVALUE(backupRecords_, backupRecords) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBackupTablesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupTablesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const DescribeBackupTablesResponseBody::Tables & getTables() const { DARABONBA_PTR_GET_CONST(tables_, DescribeBackupTablesResponseBody::Tables) };
    inline DescribeBackupTablesResponseBody::Tables getTables() { DARABONBA_PTR_GET(tables_, DescribeBackupTablesResponseBody::Tables) };
    inline DescribeBackupTablesResponseBody& setTables(const DescribeBackupTablesResponseBody::Tables & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline DescribeBackupTablesResponseBody& setTables(DescribeBackupTablesResponseBody::Tables && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeBackupTablesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<DescribeBackupTablesResponseBody::BackupRecords> backupRecords_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeBackupTablesResponseBody::Tables> tables_ {};
    // The total number of entries.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
