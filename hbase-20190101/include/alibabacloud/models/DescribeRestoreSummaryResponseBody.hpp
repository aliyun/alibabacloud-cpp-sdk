// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTORESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTORESUMMARYRESPONSEBODY_HPP_
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
  class DescribeRestoreSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HasMoreRestoreRecord, hasMoreRestoreRecord_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rescords, rescords_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HasMoreRestoreRecord, hasMoreRestoreRecord_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rescords, rescords_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeRestoreSummaryResponseBody() = default ;
    DescribeRestoreSummaryResponseBody(const DescribeRestoreSummaryResponseBody &) = default ;
    DescribeRestoreSummaryResponseBody(DescribeRestoreSummaryResponseBody &&) = default ;
    DescribeRestoreSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreSummaryResponseBody() = default ;
    DescribeRestoreSummaryResponseBody& operator=(const DescribeRestoreSummaryResponseBody &) = default ;
    DescribeRestoreSummaryResponseBody& operator=(DescribeRestoreSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rescords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rescords& obj) { 
        DARABONBA_PTR_TO_JSON(Rescord, rescord_);
      };
      friend void from_json(const Darabonba::Json& j, Rescords& obj) { 
        DARABONBA_PTR_FROM_JSON(Rescord, rescord_);
      };
      Rescords() = default ;
      Rescords(const Rescords &) = default ;
      Rescords(Rescords &&) = default ;
      Rescords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rescords() = default ;
      Rescords& operator=(const Rescords &) = default ;
      Rescords& operator=(Rescords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rescord : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rescord& obj) { 
          DARABONBA_PTR_TO_JSON(BulkLoadProcess, bulkLoadProcess_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(HfileRestoreProcess, hfileRestoreProcess_);
          DARABONBA_PTR_TO_JSON(LogProcess, logProcess_);
          DARABONBA_PTR_TO_JSON(RecordId, recordId_);
          DARABONBA_PTR_TO_JSON(SchemaProcess, schemaProcess_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Rescord& obj) { 
          DARABONBA_PTR_FROM_JSON(BulkLoadProcess, bulkLoadProcess_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(HfileRestoreProcess, hfileRestoreProcess_);
          DARABONBA_PTR_FROM_JSON(LogProcess, logProcess_);
          DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
          DARABONBA_PTR_FROM_JSON(SchemaProcess, schemaProcess_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Rescord() = default ;
        Rescord(const Rescord &) = default ;
        Rescord(Rescord &&) = default ;
        Rescord(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rescord() = default ;
        Rescord& operator=(const Rescord &) = default ;
        Rescord& operator=(Rescord &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bulkLoadProcess_ == nullptr
        && this->createTime_ == nullptr && this->finishTime_ == nullptr && this->hfileRestoreProcess_ == nullptr && this->logProcess_ == nullptr && this->recordId_ == nullptr
        && this->schemaProcess_ == nullptr && this->status_ == nullptr; };
        // bulkLoadProcess Field Functions 
        bool hasBulkLoadProcess() const { return this->bulkLoadProcess_ != nullptr;};
        void deleteBulkLoadProcess() { this->bulkLoadProcess_ = nullptr;};
        inline string getBulkLoadProcess() const { DARABONBA_PTR_GET_DEFAULT(bulkLoadProcess_, "") };
        inline Rescord& setBulkLoadProcess(string bulkLoadProcess) { DARABONBA_PTR_SET_VALUE(bulkLoadProcess_, bulkLoadProcess) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Rescord& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline Rescord& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // hfileRestoreProcess Field Functions 
        bool hasHfileRestoreProcess() const { return this->hfileRestoreProcess_ != nullptr;};
        void deleteHfileRestoreProcess() { this->hfileRestoreProcess_ = nullptr;};
        inline string getHfileRestoreProcess() const { DARABONBA_PTR_GET_DEFAULT(hfileRestoreProcess_, "") };
        inline Rescord& setHfileRestoreProcess(string hfileRestoreProcess) { DARABONBA_PTR_SET_VALUE(hfileRestoreProcess_, hfileRestoreProcess) };


        // logProcess Field Functions 
        bool hasLogProcess() const { return this->logProcess_ != nullptr;};
        void deleteLogProcess() { this->logProcess_ = nullptr;};
        inline string getLogProcess() const { DARABONBA_PTR_GET_DEFAULT(logProcess_, "") };
        inline Rescord& setLogProcess(string logProcess) { DARABONBA_PTR_SET_VALUE(logProcess_, logProcess) };


        // recordId Field Functions 
        bool hasRecordId() const { return this->recordId_ != nullptr;};
        void deleteRecordId() { this->recordId_ = nullptr;};
        inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
        inline Rescord& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


        // schemaProcess Field Functions 
        bool hasSchemaProcess() const { return this->schemaProcess_ != nullptr;};
        void deleteSchemaProcess() { this->schemaProcess_ = nullptr;};
        inline string getSchemaProcess() const { DARABONBA_PTR_GET_DEFAULT(schemaProcess_, "") };
        inline Rescord& setSchemaProcess(string schemaProcess) { DARABONBA_PTR_SET_VALUE(schemaProcess_, schemaProcess) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Rescord& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> bulkLoadProcess_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> finishTime_ {};
        shared_ptr<string> hfileRestoreProcess_ {};
        shared_ptr<string> logProcess_ {};
        shared_ptr<string> recordId_ {};
        shared_ptr<string> schemaProcess_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->rescord_ == nullptr; };
      // rescord Field Functions 
      bool hasRescord() const { return this->rescord_ != nullptr;};
      void deleteRescord() { this->rescord_ = nullptr;};
      inline const vector<Rescords::Rescord> & getRescord() const { DARABONBA_PTR_GET_CONST(rescord_, vector<Rescords::Rescord>) };
      inline vector<Rescords::Rescord> getRescord() { DARABONBA_PTR_GET(rescord_, vector<Rescords::Rescord>) };
      inline Rescords& setRescord(const vector<Rescords::Rescord> & rescord) { DARABONBA_PTR_SET_VALUE(rescord_, rescord) };
      inline Rescords& setRescord(vector<Rescords::Rescord> && rescord) { DARABONBA_PTR_SET_RVALUE(rescord_, rescord) };


    protected:
      shared_ptr<vector<Rescords::Rescord>> rescord_ {};
    };

    virtual bool empty() const override { return this->hasMoreRestoreRecord_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->rescords_ == nullptr && this->total_ == nullptr; };
    // hasMoreRestoreRecord Field Functions 
    bool hasHasMoreRestoreRecord() const { return this->hasMoreRestoreRecord_ != nullptr;};
    void deleteHasMoreRestoreRecord() { this->hasMoreRestoreRecord_ = nullptr;};
    inline int32_t getHasMoreRestoreRecord() const { DARABONBA_PTR_GET_DEFAULT(hasMoreRestoreRecord_, 0) };
    inline DescribeRestoreSummaryResponseBody& setHasMoreRestoreRecord(int32_t hasMoreRestoreRecord) { DARABONBA_PTR_SET_VALUE(hasMoreRestoreRecord_, hasMoreRestoreRecord) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRestoreSummaryResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRestoreSummaryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRestoreSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rescords Field Functions 
    bool hasRescords() const { return this->rescords_ != nullptr;};
    void deleteRescords() { this->rescords_ = nullptr;};
    inline const DescribeRestoreSummaryResponseBody::Rescords & getRescords() const { DARABONBA_PTR_GET_CONST(rescords_, DescribeRestoreSummaryResponseBody::Rescords) };
    inline DescribeRestoreSummaryResponseBody::Rescords getRescords() { DARABONBA_PTR_GET(rescords_, DescribeRestoreSummaryResponseBody::Rescords) };
    inline DescribeRestoreSummaryResponseBody& setRescords(const DescribeRestoreSummaryResponseBody::Rescords & rescords) { DARABONBA_PTR_SET_VALUE(rescords_, rescords) };
    inline DescribeRestoreSummaryResponseBody& setRescords(DescribeRestoreSummaryResponseBody::Rescords && rescords) { DARABONBA_PTR_SET_RVALUE(rescords_, rescords) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeRestoreSummaryResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Indicates whether there is a next page. This parameter is currently not used.
    shared_ptr<int32_t> hasMoreRestoreRecord_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The page size.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeRestoreSummaryResponseBody::Rescords> rescords_ {};
    // The total number of records.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
