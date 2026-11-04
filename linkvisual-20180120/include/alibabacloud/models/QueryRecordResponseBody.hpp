// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryRecordResponseBody() = default ;
    QueryRecordResponseBody(const QueryRecordResponseBody &) = default ;
    QueryRecordResponseBody(QueryRecordResponseBody &&) = default ;
    QueryRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRecordResponseBody() = default ;
    QueryRecordResponseBody& operator=(const QueryRecordResponseBody &) = default ;
    QueryRecordResponseBody& operator=(QueryRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(EventType, eventType_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(RecordType, recordType_);
          DARABONBA_PTR_TO_JSON(SnapshotUrl, snapshotUrl_);
          DARABONBA_PTR_TO_JSON(StreamType, streamType_);
          DARABONBA_PTR_TO_JSON(VideoFrameNumber, videoFrameNumber_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(EventType, eventType_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
          DARABONBA_PTR_FROM_JSON(SnapshotUrl, snapshotUrl_);
          DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
          DARABONBA_PTR_FROM_JSON(VideoFrameNumber, videoFrameNumber_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->eventType_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr && this->recordType_ == nullptr
        && this->snapshotUrl_ == nullptr && this->streamType_ == nullptr && this->videoFrameNumber_ == nullptr; };
        // beginTime Field Functions 
        bool hasBeginTime() const { return this->beginTime_ != nullptr;};
        void deleteBeginTime() { this->beginTime_ = nullptr;};
        inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
        inline List& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline List& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // eventType Field Functions 
        bool hasEventType() const { return this->eventType_ != nullptr;};
        void deleteEventType() { this->eventType_ = nullptr;};
        inline int32_t getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, 0) };
        inline List& setEventType(int32_t eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline List& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline int32_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0) };
        inline List& setFileSize(int32_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // recordType Field Functions 
        bool hasRecordType() const { return this->recordType_ != nullptr;};
        void deleteRecordType() { this->recordType_ = nullptr;};
        inline int32_t getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, 0) };
        inline List& setRecordType(int32_t recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


        // snapshotUrl Field Functions 
        bool hasSnapshotUrl() const { return this->snapshotUrl_ != nullptr;};
        void deleteSnapshotUrl() { this->snapshotUrl_ = nullptr;};
        inline string getSnapshotUrl() const { DARABONBA_PTR_GET_DEFAULT(snapshotUrl_, "") };
        inline List& setSnapshotUrl(string snapshotUrl) { DARABONBA_PTR_SET_VALUE(snapshotUrl_, snapshotUrl) };


        // streamType Field Functions 
        bool hasStreamType() const { return this->streamType_ != nullptr;};
        void deleteStreamType() { this->streamType_ = nullptr;};
        inline int32_t getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
        inline List& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


        // videoFrameNumber Field Functions 
        bool hasVideoFrameNumber() const { return this->videoFrameNumber_ != nullptr;};
        void deleteVideoFrameNumber() { this->videoFrameNumber_ = nullptr;};
        inline int32_t getVideoFrameNumber() const { DARABONBA_PTR_GET_DEFAULT(videoFrameNumber_, 0) };
        inline List& setVideoFrameNumber(int32_t videoFrameNumber) { DARABONBA_PTR_SET_VALUE(videoFrameNumber_, videoFrameNumber) };


      protected:
        // The start time of the recording.
        shared_ptr<string> beginTime_ {};
        // The end time of the recording.
        shared_ptr<string> endTime_ {};
        // The event type corresponding to the recording. This parameter is returned only when the recording type (**RecordType**) is **intelligent alert event recording**.
        // 
        // For example, **1** indicates a motion detection event.
        shared_ptr<int32_t> eventType_ {};
        // The name of the recording file.
        shared_ptr<string> fileName_ {};
        // The size of the recording file. Unit: bytes.
        shared_ptr<int32_t> fileSize_ {};
        // The recording type. Valid values:
        // 
        // - **0**: continuous recording.
        // - **1**: intelligent alert event recording.
        // - **2**: manual recording.
        shared_ptr<int32_t> recordType_ {};
        // The URL of the thumbnail.
        shared_ptr<string> snapshotUrl_ {};
        // The stream type. Valid values:
        // - **0**: main stream.
        // - **1**: sub stream.
        shared_ptr<int32_t> streamType_ {};
        // The number of video frames in the recording file.
        shared_ptr<int32_t> videoFrameNumber_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Data& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    protected:
      // The returned list of recordings.
      shared_ptr<vector<Data::List>> list_ {};
      // The current page number.
      shared_ptr<int32_t> page_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryRecordResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryRecordResponseBody::Data) };
    inline QueryRecordResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryRecordResponseBody::Data) };
    inline QueryRecordResponseBody& setData(const QueryRecordResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryRecordResponseBody& setData(QueryRecordResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryRecordResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryRecordResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. Valid values:
    // 
    // - **200**: The call is successful.
    // - Other values: error codes. For more information, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The query results.
    shared_ptr<QueryRecordResponseBody::Data> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // - **true**: The call is successful.
    // - **false**: The call fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
