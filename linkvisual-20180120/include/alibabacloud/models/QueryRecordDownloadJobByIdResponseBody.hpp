// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECORDDOWNLOADJOBBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECORDDOWNLOADJOBBYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryRecordDownloadJobByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRecordDownloadJobByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRecordDownloadJobByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryRecordDownloadJobByIdResponseBody() = default ;
    QueryRecordDownloadJobByIdResponseBody(const QueryRecordDownloadJobByIdResponseBody &) = default ;
    QueryRecordDownloadJobByIdResponseBody(QueryRecordDownloadJobByIdResponseBody &&) = default ;
    QueryRecordDownloadJobByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRecordDownloadJobByIdResponseBody() = default ;
    QueryRecordDownloadJobByIdResponseBody& operator=(const QueryRecordDownloadJobByIdResponseBody &) = default ;
    QueryRecordDownloadJobByIdResponseBody& operator=(QueryRecordDownloadJobByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(IotId, iotId_);
        DARABONBA_PTR_TO_JSON(JobErrorCode, jobErrorCode_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(RecordType, recordType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StreamType, streamType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(IotId, iotId_);
        DARABONBA_PTR_FROM_JSON(JobErrorCode, jobErrorCode_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
      virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->fileName_ == nullptr && this->iotId_ == nullptr && this->jobErrorCode_ == nullptr && this->progress_ == nullptr
        && this->recordType_ == nullptr && this->status_ == nullptr && this->streamType_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline int32_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0) };
      inline Data& setBeginTime(int32_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
      inline Data& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Data& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // iotId Field Functions 
      bool hasIotId() const { return this->iotId_ != nullptr;};
      void deleteIotId() { this->iotId_ = nullptr;};
      inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
      inline Data& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


      // jobErrorCode Field Functions 
      bool hasJobErrorCode() const { return this->jobErrorCode_ != nullptr;};
      void deleteJobErrorCode() { this->jobErrorCode_ = nullptr;};
      inline int32_t getJobErrorCode() const { DARABONBA_PTR_GET_DEFAULT(jobErrorCode_, 0) };
      inline Data& setJobErrorCode(int32_t jobErrorCode) { DARABONBA_PTR_SET_VALUE(jobErrorCode_, jobErrorCode) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
      inline Data& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // recordType Field Functions 
      bool hasRecordType() const { return this->recordType_ != nullptr;};
      void deleteRecordType() { this->recordType_ = nullptr;};
      inline int32_t getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, 0) };
      inline Data& setRecordType(int32_t recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // streamType Field Functions 
      bool hasStreamType() const { return this->streamType_ != nullptr;};
      void deleteStreamType() { this->streamType_ = nullptr;};
      inline int32_t getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
      inline Data& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Data& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The start time of the query range. The value is a 10-digit timestamp in seconds. Valid values: 0 to 2147483647.
      shared_ptr<int32_t> beginTime_ {};
      // The end time of the query range. The value is a 10-digit timestamp in seconds. Valid values: 0 to 2147483647.
      shared_ptr<int32_t> endTime_ {};
      // The file name. This parameter is displayed when **Type** is 1.
      shared_ptr<string> fileName_ {};
      // The device ID.
      shared_ptr<string> iotId_ {};
      // The cause of the task exception. This parameter is returned when **Status** is **-1**:
      // 
      // - **9441**: Network exception.
      // - **9442**: Audio and video data error.
      shared_ptr<int32_t> jobErrorCode_ {};
      // The generation progress of the recording file. Valid values: 0 to 100.
      shared_ptr<int32_t> progress_ {};
      // The recording type.
      // 
      // - **0**: Continuous recording.
      // - **1**: Event recording.
      // - **2**: Manual recording.
      // - **4**: Local-to-cloud recording.
      // - **99**: Mixed type.
      shared_ptr<int32_t> recordType_ {};
      // The generation status of the recording file.
      // 
      // - **-1**: An exception occurred during the generation of the recording file.
      // - **0**: The recording file has been generated.
      // - **1**: The recording file is being generated.
      shared_ptr<int32_t> status_ {};
      // The stream type.
      // 
      // - **0**: Main stream.
      // - **1**: Sub stream.
      shared_ptr<int32_t> streamType_ {};
      // The download type.
      // 
      // - **1**: Download by file.
      // - **2**: Download device cloud recordings by time range.
      // - **3**: Download device local recordings by time range.
      shared_ptr<int32_t> type_ {};
      // The download URL of the cloud recording. The URL is valid for 1 hour.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryRecordDownloadJobByIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryRecordDownloadJobByIdResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryRecordDownloadJobByIdResponseBody::Data) };
    inline QueryRecordDownloadJobByIdResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryRecordDownloadJobByIdResponseBody::Data) };
    inline QueryRecordDownloadJobByIdResponseBody& setData(const QueryRecordDownloadJobByIdResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryRecordDownloadJobByIdResponseBody& setData(QueryRecordDownloadJobByIdResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryRecordDownloadJobByIdResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRecordDownloadJobByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryRecordDownloadJobByIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code of the call result:
    // 
    // - If the call is successful, 200 is returned.
    // - If the call fails, an error code is returned. For more information, see **Error codes** below.
    shared_ptr<string> code_ {};
    // The data returned if the call is successful.
    shared_ptr<QueryRecordDownloadJobByIdResponseBody::Data> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
