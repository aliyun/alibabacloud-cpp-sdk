// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSUMMARYRESPONSEBODY_HPP_
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
  class DescribeBackupSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Full, full_);
      DARABONBA_PTR_TO_JSON(Incr, incr_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Full, full_);
      DARABONBA_PTR_FROM_JSON(Incr, incr_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupSummaryResponseBody() = default ;
    DescribeBackupSummaryResponseBody(const DescribeBackupSummaryResponseBody &) = default ;
    DescribeBackupSummaryResponseBody(DescribeBackupSummaryResponseBody &&) = default ;
    DescribeBackupSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupSummaryResponseBody() = default ;
    DescribeBackupSummaryResponseBody& operator=(const DescribeBackupSummaryResponseBody &) = default ;
    DescribeBackupSummaryResponseBody& operator=(DescribeBackupSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Incr : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Incr& obj) { 
        DARABONBA_PTR_TO_JSON(BackupLogSize, backupLogSize_);
        DARABONBA_PTR_TO_JSON(Pos, pos_);
        DARABONBA_PTR_TO_JSON(QueueLogNum, queueLogNum_);
        DARABONBA_PTR_TO_JSON(RunningLogNum, runningLogNum_);
        DARABONBA_PTR_TO_JSON(Speed, speed_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Incr& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupLogSize, backupLogSize_);
        DARABONBA_PTR_FROM_JSON(Pos, pos_);
        DARABONBA_PTR_FROM_JSON(QueueLogNum, queueLogNum_);
        DARABONBA_PTR_FROM_JSON(RunningLogNum, runningLogNum_);
        DARABONBA_PTR_FROM_JSON(Speed, speed_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Incr() = default ;
      Incr(const Incr &) = default ;
      Incr(Incr &&) = default ;
      Incr(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Incr() = default ;
      Incr& operator=(const Incr &) = default ;
      Incr& operator=(Incr &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupLogSize_ == nullptr
        && this->pos_ == nullptr && this->queueLogNum_ == nullptr && this->runningLogNum_ == nullptr && this->speed_ == nullptr && this->status_ == nullptr; };
      // backupLogSize Field Functions 
      bool hasBackupLogSize() const { return this->backupLogSize_ != nullptr;};
      void deleteBackupLogSize() { this->backupLogSize_ = nullptr;};
      inline string getBackupLogSize() const { DARABONBA_PTR_GET_DEFAULT(backupLogSize_, "") };
      inline Incr& setBackupLogSize(string backupLogSize) { DARABONBA_PTR_SET_VALUE(backupLogSize_, backupLogSize) };


      // pos Field Functions 
      bool hasPos() const { return this->pos_ != nullptr;};
      void deletePos() { this->pos_ = nullptr;};
      inline string getPos() const { DARABONBA_PTR_GET_DEFAULT(pos_, "") };
      inline Incr& setPos(string pos) { DARABONBA_PTR_SET_VALUE(pos_, pos) };


      // queueLogNum Field Functions 
      bool hasQueueLogNum() const { return this->queueLogNum_ != nullptr;};
      void deleteQueueLogNum() { this->queueLogNum_ = nullptr;};
      inline string getQueueLogNum() const { DARABONBA_PTR_GET_DEFAULT(queueLogNum_, "") };
      inline Incr& setQueueLogNum(string queueLogNum) { DARABONBA_PTR_SET_VALUE(queueLogNum_, queueLogNum) };


      // runningLogNum Field Functions 
      bool hasRunningLogNum() const { return this->runningLogNum_ != nullptr;};
      void deleteRunningLogNum() { this->runningLogNum_ = nullptr;};
      inline string getRunningLogNum() const { DARABONBA_PTR_GET_DEFAULT(runningLogNum_, "") };
      inline Incr& setRunningLogNum(string runningLogNum) { DARABONBA_PTR_SET_VALUE(runningLogNum_, runningLogNum) };


      // speed Field Functions 
      bool hasSpeed() const { return this->speed_ != nullptr;};
      void deleteSpeed() { this->speed_ = nullptr;};
      inline string getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
      inline Incr& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Incr& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The data size.
      shared_ptr<string> backupLogSize_ {};
      // The synchronization point.
      shared_ptr<string> pos_ {};
      // The number of logs in the queue.
      shared_ptr<string> queueLogNum_ {};
      // The number of logs being backed up.
      shared_ptr<string> runningLogNum_ {};
      // The current write speed of the incremental backup.
      shared_ptr<string> speed_ {};
      // The status of the incremental backup.
      shared_ptr<string> status_ {};
    };

    class Full : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Full& obj) { 
        DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
        DARABONBA_PTR_TO_JSON(NextFullBackupDate, nextFullBackupDate_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Records, records_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Full& obj) { 
        DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
        DARABONBA_PTR_FROM_JSON(NextFullBackupDate, nextFullBackupDate_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Records, records_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Full() = default ;
      Full(const Full &) = default ;
      Full(Full &&) = default ;
      Full(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Full() = default ;
      Full& operator=(const Full &) = default ;
      Full& operator=(Full &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(Record, record_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(Record, record_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Record : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Record& obj) { 
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
            DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
            DARABONBA_PTR_TO_JSON(Process, process_);
            DARABONBA_PTR_TO_JSON(RecordId, recordId_);
            DARABONBA_PTR_TO_JSON(Speed, speed_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, Record& obj) { 
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
            DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
            DARABONBA_PTR_FROM_JSON(Process, process_);
            DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
            DARABONBA_PTR_FROM_JSON(Speed, speed_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          Record() = default ;
          Record(const Record &) = default ;
          Record(Record &&) = default ;
          Record(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Record() = default ;
          Record& operator=(const Record &) = default ;
          Record& operator=(Record &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dataSize_ == nullptr && this->finishTime_ == nullptr && this->process_ == nullptr && this->recordId_ == nullptr && this->speed_ == nullptr
        && this->status_ == nullptr; };
          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline Record& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // dataSize Field Functions 
          bool hasDataSize() const { return this->dataSize_ != nullptr;};
          void deleteDataSize() { this->dataSize_ = nullptr;};
          inline string getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, "") };
          inline Record& setDataSize(string dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


          // finishTime Field Functions 
          bool hasFinishTime() const { return this->finishTime_ != nullptr;};
          void deleteFinishTime() { this->finishTime_ = nullptr;};
          inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
          inline Record& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


          // process Field Functions 
          bool hasProcess() const { return this->process_ != nullptr;};
          void deleteProcess() { this->process_ = nullptr;};
          inline string getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
          inline Record& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


          // recordId Field Functions 
          bool hasRecordId() const { return this->recordId_ != nullptr;};
          void deleteRecordId() { this->recordId_ = nullptr;};
          inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
          inline Record& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


          // speed Field Functions 
          bool hasSpeed() const { return this->speed_ != nullptr;};
          void deleteSpeed() { this->speed_ = nullptr;};
          inline string getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
          inline Record& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Record& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          shared_ptr<string> createTime_ {};
          shared_ptr<string> dataSize_ {};
          shared_ptr<string> finishTime_ {};
          shared_ptr<string> process_ {};
          shared_ptr<string> recordId_ {};
          shared_ptr<string> speed_ {};
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->record_ == nullptr; };
        // record Field Functions 
        bool hasRecord() const { return this->record_ != nullptr;};
        void deleteRecord() { this->record_ = nullptr;};
        inline const vector<Records::Record> & getRecord() const { DARABONBA_PTR_GET_CONST(record_, vector<Records::Record>) };
        inline vector<Records::Record> getRecord() { DARABONBA_PTR_GET(record_, vector<Records::Record>) };
        inline Records& setRecord(const vector<Records::Record> & record) { DARABONBA_PTR_SET_VALUE(record_, record) };
        inline Records& setRecord(vector<Records::Record> && record) { DARABONBA_PTR_SET_RVALUE(record_, record) };


      protected:
        shared_ptr<vector<Records::Record>> record_ {};
      };

      virtual bool empty() const override { return this->hasMore_ == nullptr
        && this->nextFullBackupDate_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->records_ == nullptr && this->total_ == nullptr; };
      // hasMore Field Functions 
      bool hasHasMore() const { return this->hasMore_ != nullptr;};
      void deleteHasMore() { this->hasMore_ = nullptr;};
      inline string getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, "") };
      inline Full& setHasMore(string hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


      // nextFullBackupDate Field Functions 
      bool hasNextFullBackupDate() const { return this->nextFullBackupDate_ != nullptr;};
      void deleteNextFullBackupDate() { this->nextFullBackupDate_ = nullptr;};
      inline string getNextFullBackupDate() const { DARABONBA_PTR_GET_DEFAULT(nextFullBackupDate_, "") };
      inline Full& setNextFullBackupDate(string nextFullBackupDate) { DARABONBA_PTR_SET_VALUE(nextFullBackupDate_, nextFullBackupDate) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Full& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Full& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const Full::Records & getRecords() const { DARABONBA_PTR_GET_CONST(records_, Full::Records) };
      inline Full::Records getRecords() { DARABONBA_PTR_GET(records_, Full::Records) };
      inline Full& setRecords(const Full::Records & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Full& setRecords(Full::Records && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Full& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // Indicates whether there is a next page. Valid values:
      // 
      // - true: There is a next page.
      // - false: There is no next page.
      shared_ptr<string> hasMore_ {};
      // The time of the next full backup.
      shared_ptr<string> nextFullBackupDate_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The page size.
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<Full::Records> records_ {};
      // The total number of entries.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->full_ == nullptr
        && this->incr_ == nullptr && this->requestId_ == nullptr; };
    // full Field Functions 
    bool hasFull() const { return this->full_ != nullptr;};
    void deleteFull() { this->full_ = nullptr;};
    inline const DescribeBackupSummaryResponseBody::Full & getFull() const { DARABONBA_PTR_GET_CONST(full_, DescribeBackupSummaryResponseBody::Full) };
    inline DescribeBackupSummaryResponseBody::Full getFull() { DARABONBA_PTR_GET(full_, DescribeBackupSummaryResponseBody::Full) };
    inline DescribeBackupSummaryResponseBody& setFull(const DescribeBackupSummaryResponseBody::Full & full) { DARABONBA_PTR_SET_VALUE(full_, full) };
    inline DescribeBackupSummaryResponseBody& setFull(DescribeBackupSummaryResponseBody::Full && full) { DARABONBA_PTR_SET_RVALUE(full_, full) };


    // incr Field Functions 
    bool hasIncr() const { return this->incr_ != nullptr;};
    void deleteIncr() { this->incr_ = nullptr;};
    inline const DescribeBackupSummaryResponseBody::Incr & getIncr() const { DARABONBA_PTR_GET_CONST(incr_, DescribeBackupSummaryResponseBody::Incr) };
    inline DescribeBackupSummaryResponseBody::Incr getIncr() { DARABONBA_PTR_GET(incr_, DescribeBackupSummaryResponseBody::Incr) };
    inline DescribeBackupSummaryResponseBody& setIncr(const DescribeBackupSummaryResponseBody::Incr & incr) { DARABONBA_PTR_SET_VALUE(incr_, incr) };
    inline DescribeBackupSummaryResponseBody& setIncr(DescribeBackupSummaryResponseBody::Incr && incr) { DARABONBA_PTR_SET_RVALUE(incr_, incr) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the full backup.
    shared_ptr<DescribeBackupSummaryResponseBody::Full> full_ {};
    // The details of the incremental backup.
    shared_ptr<DescribeBackupSummaryResponseBody::Incr> incr_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
