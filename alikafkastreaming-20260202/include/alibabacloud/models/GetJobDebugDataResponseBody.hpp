// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBDEBUGDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBDEBUGDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaStreaming20260202
{
namespace Models
{
  class GetJobDebugDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobDebugDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobDebugDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetJobDebugDataResponseBody() = default ;
    GetJobDebugDataResponseBody(const GetJobDebugDataResponseBody &) = default ;
    GetJobDebugDataResponseBody(GetJobDebugDataResponseBody &&) = default ;
    GetJobDebugDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobDebugDataResponseBody() = default ;
    GetJobDebugDataResponseBody& operator=(const GetJobDebugDataResponseBody &) = default ;
    GetJobDebugDataResponseBody& operator=(GetJobDebugDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataRows, dataRows_);
        DARABONBA_PTR_TO_JSON(DebugField, debugField_);
        DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
        DARABONBA_PTR_TO_JSON(Limit, limit_);
        DARABONBA_PTR_TO_JSON(NextCursor, nextCursor_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataRows, dataRows_);
        DARABONBA_PTR_FROM_JSON(DebugField, debugField_);
        DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
        DARABONBA_PTR_FROM_JSON(Limit, limit_);
        DARABONBA_PTR_FROM_JSON(NextCursor, nextCursor_);
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
      class DataRows : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataRows& obj) { 
          DARABONBA_PTR_TO_JSON(FlinkInstanceId, flinkInstanceId_);
          DARABONBA_PTR_TO_JSON(JobName, jobName_);
          DARABONBA_PTR_TO_JSON(Offset, offset_);
          DARABONBA_PTR_TO_JSON(Partition, partition_);
          DARABONBA_PTR_TO_JSON(ProcessedValue, processedValue_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        };
        friend void from_json(const Darabonba::Json& j, DataRows& obj) { 
          DARABONBA_PTR_FROM_JSON(FlinkInstanceId, flinkInstanceId_);
          DARABONBA_PTR_FROM_JSON(JobName, jobName_);
          DARABONBA_PTR_FROM_JSON(Offset, offset_);
          DARABONBA_PTR_FROM_JSON(Partition, partition_);
          DARABONBA_PTR_FROM_JSON(ProcessedValue, processedValue_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        };
        DataRows() = default ;
        DataRows(const DataRows &) = default ;
        DataRows(DataRows &&) = default ;
        DataRows(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataRows() = default ;
        DataRows& operator=(const DataRows &) = default ;
        DataRows& operator=(DataRows &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->flinkInstanceId_ == nullptr
        && this->jobName_ == nullptr && this->offset_ == nullptr && this->partition_ == nullptr && this->processedValue_ == nullptr && this->timestamp_ == nullptr
        && this->uuid_ == nullptr; };
        // flinkInstanceId Field Functions 
        bool hasFlinkInstanceId() const { return this->flinkInstanceId_ != nullptr;};
        void deleteFlinkInstanceId() { this->flinkInstanceId_ = nullptr;};
        inline string getFlinkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(flinkInstanceId_, "") };
        inline DataRows& setFlinkInstanceId(string flinkInstanceId) { DARABONBA_PTR_SET_VALUE(flinkInstanceId_, flinkInstanceId) };


        // jobName Field Functions 
        bool hasJobName() const { return this->jobName_ != nullptr;};
        void deleteJobName() { this->jobName_ = nullptr;};
        inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
        inline DataRows& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


        // offset Field Functions 
        bool hasOffset() const { return this->offset_ != nullptr;};
        void deleteOffset() { this->offset_ = nullptr;};
        inline int64_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
        inline DataRows& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


        // partition Field Functions 
        bool hasPartition() const { return this->partition_ != nullptr;};
        void deletePartition() { this->partition_ = nullptr;};
        inline int32_t getPartition() const { DARABONBA_PTR_GET_DEFAULT(partition_, 0) };
        inline DataRows& setPartition(int32_t partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


        // processedValue Field Functions 
        bool hasProcessedValue() const { return this->processedValue_ != nullptr;};
        void deleteProcessedValue() { this->processedValue_ = nullptr;};
        inline string getProcessedValue() const { DARABONBA_PTR_GET_DEFAULT(processedValue_, "") };
        inline DataRows& setProcessedValue(string processedValue) { DARABONBA_PTR_SET_VALUE(processedValue_, processedValue) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline DataRows& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline DataRows& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      protected:
        shared_ptr<string> flinkInstanceId_ {};
        shared_ptr<string> jobName_ {};
        shared_ptr<int64_t> offset_ {};
        shared_ptr<int32_t> partition_ {};
        shared_ptr<string> processedValue_ {};
        shared_ptr<int64_t> timestamp_ {};
        shared_ptr<string> uuid_ {};
      };

      virtual bool empty() const override { return this->dataRows_ == nullptr
        && this->debugField_ == nullptr && this->hasMore_ == nullptr && this->limit_ == nullptr && this->nextCursor_ == nullptr; };
      // dataRows Field Functions 
      bool hasDataRows() const { return this->dataRows_ != nullptr;};
      void deleteDataRows() { this->dataRows_ = nullptr;};
      inline const vector<Data::DataRows> & getDataRows() const { DARABONBA_PTR_GET_CONST(dataRows_, vector<Data::DataRows>) };
      inline vector<Data::DataRows> getDataRows() { DARABONBA_PTR_GET(dataRows_, vector<Data::DataRows>) };
      inline Data& setDataRows(const vector<Data::DataRows> & dataRows) { DARABONBA_PTR_SET_VALUE(dataRows_, dataRows) };
      inline Data& setDataRows(vector<Data::DataRows> && dataRows) { DARABONBA_PTR_SET_RVALUE(dataRows_, dataRows) };


      // debugField Field Functions 
      bool hasDebugField() const { return this->debugField_ != nullptr;};
      void deleteDebugField() { this->debugField_ = nullptr;};
      inline string getDebugField() const { DARABONBA_PTR_GET_DEFAULT(debugField_, "") };
      inline Data& setDebugField(string debugField) { DARABONBA_PTR_SET_VALUE(debugField_, debugField) };


      // hasMore Field Functions 
      bool hasHasMore() const { return this->hasMore_ != nullptr;};
      void deleteHasMore() { this->hasMore_ = nullptr;};
      inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
      inline Data& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


      // limit Field Functions 
      bool hasLimit() const { return this->limit_ != nullptr;};
      void deleteLimit() { this->limit_ = nullptr;};
      inline string getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
      inline Data& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


      // nextCursor Field Functions 
      bool hasNextCursor() const { return this->nextCursor_ != nullptr;};
      void deleteNextCursor() { this->nextCursor_ = nullptr;};
      inline string getNextCursor() const { DARABONBA_PTR_GET_DEFAULT(nextCursor_, "") };
      inline Data& setNextCursor(string nextCursor) { DARABONBA_PTR_SET_VALUE(nextCursor_, nextCursor) };


    protected:
      shared_ptr<vector<Data::DataRows>> dataRows_ {};
      shared_ptr<string> debugField_ {};
      shared_ptr<bool> hasMore_ {};
      shared_ptr<string> limit_ {};
      shared_ptr<string> nextCursor_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetJobDebugDataResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetJobDebugDataResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetJobDebugDataResponseBody::Data) };
    inline GetJobDebugDataResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetJobDebugDataResponseBody::Data) };
    inline GetJobDebugDataResponseBody& setData(const GetJobDebugDataResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetJobDebugDataResponseBody& setData(GetJobDebugDataResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobDebugDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetJobDebugDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<GetJobDebugDataResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202
#endif
