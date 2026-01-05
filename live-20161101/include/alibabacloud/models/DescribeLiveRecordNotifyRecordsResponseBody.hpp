// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERECORDNOTIFYRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERECORDNOTIFYRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRecordNotifyRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRecordNotifyRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackList, callbackList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRecordNotifyRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackList, callbackList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeLiveRecordNotifyRecordsResponseBody() = default ;
    DescribeLiveRecordNotifyRecordsResponseBody(const DescribeLiveRecordNotifyRecordsResponseBody &) = default ;
    DescribeLiveRecordNotifyRecordsResponseBody(DescribeLiveRecordNotifyRecordsResponseBody &&) = default ;
    DescribeLiveRecordNotifyRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRecordNotifyRecordsResponseBody() = default ;
    DescribeLiveRecordNotifyRecordsResponseBody& operator=(const DescribeLiveRecordNotifyRecordsResponseBody &) = default ;
    DescribeLiveRecordNotifyRecordsResponseBody& operator=(DescribeLiveRecordNotifyRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CallbackList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CallbackList& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(NotifyContent, notifyContent_);
        DARABONBA_PTR_TO_JSON(NotifyHeader, notifyHeader_);
        DARABONBA_PTR_TO_JSON(NotifyResponse, notifyResponse_);
        DARABONBA_PTR_TO_JSON(NotifyResult, notifyResult_);
        DARABONBA_PTR_TO_JSON(NotifyTime, notifyTime_);
        DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
        DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
        DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      };
      friend void from_json(const Darabonba::Json& j, CallbackList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(NotifyContent, notifyContent_);
        DARABONBA_PTR_FROM_JSON(NotifyHeader, notifyHeader_);
        DARABONBA_PTR_FROM_JSON(NotifyResponse, notifyResponse_);
        DARABONBA_PTR_FROM_JSON(NotifyResult, notifyResult_);
        DARABONBA_PTR_FROM_JSON(NotifyTime, notifyTime_);
        DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
        DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
        DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      };
      CallbackList() = default ;
      CallbackList(const CallbackList &) = default ;
      CallbackList(CallbackList &&) = default ;
      CallbackList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CallbackList() = default ;
      CallbackList& operator=(const CallbackList &) = default ;
      CallbackList& operator=(CallbackList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appName_ == nullptr
        && this->description_ == nullptr && this->domainName_ == nullptr && this->notifyContent_ == nullptr && this->notifyHeader_ == nullptr && this->notifyResponse_ == nullptr
        && this->notifyResult_ == nullptr && this->notifyTime_ == nullptr && this->notifyType_ == nullptr && this->notifyUrl_ == nullptr && this->streamName_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline CallbackList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CallbackList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline CallbackList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // notifyContent Field Functions 
      bool hasNotifyContent() const { return this->notifyContent_ != nullptr;};
      void deleteNotifyContent() { this->notifyContent_ = nullptr;};
      inline string getNotifyContent() const { DARABONBA_PTR_GET_DEFAULT(notifyContent_, "") };
      inline CallbackList& setNotifyContent(string notifyContent) { DARABONBA_PTR_SET_VALUE(notifyContent_, notifyContent) };


      // notifyHeader Field Functions 
      bool hasNotifyHeader() const { return this->notifyHeader_ != nullptr;};
      void deleteNotifyHeader() { this->notifyHeader_ = nullptr;};
      inline string getNotifyHeader() const { DARABONBA_PTR_GET_DEFAULT(notifyHeader_, "") };
      inline CallbackList& setNotifyHeader(string notifyHeader) { DARABONBA_PTR_SET_VALUE(notifyHeader_, notifyHeader) };


      // notifyResponse Field Functions 
      bool hasNotifyResponse() const { return this->notifyResponse_ != nullptr;};
      void deleteNotifyResponse() { this->notifyResponse_ = nullptr;};
      inline string getNotifyResponse() const { DARABONBA_PTR_GET_DEFAULT(notifyResponse_, "") };
      inline CallbackList& setNotifyResponse(string notifyResponse) { DARABONBA_PTR_SET_VALUE(notifyResponse_, notifyResponse) };


      // notifyResult Field Functions 
      bool hasNotifyResult() const { return this->notifyResult_ != nullptr;};
      void deleteNotifyResult() { this->notifyResult_ = nullptr;};
      inline string getNotifyResult() const { DARABONBA_PTR_GET_DEFAULT(notifyResult_, "") };
      inline CallbackList& setNotifyResult(string notifyResult) { DARABONBA_PTR_SET_VALUE(notifyResult_, notifyResult) };


      // notifyTime Field Functions 
      bool hasNotifyTime() const { return this->notifyTime_ != nullptr;};
      void deleteNotifyTime() { this->notifyTime_ = nullptr;};
      inline string getNotifyTime() const { DARABONBA_PTR_GET_DEFAULT(notifyTime_, "") };
      inline CallbackList& setNotifyTime(string notifyTime) { DARABONBA_PTR_SET_VALUE(notifyTime_, notifyTime) };


      // notifyType Field Functions 
      bool hasNotifyType() const { return this->notifyType_ != nullptr;};
      void deleteNotifyType() { this->notifyType_ = nullptr;};
      inline string getNotifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
      inline CallbackList& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


      // notifyUrl Field Functions 
      bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
      void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
      inline string getNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
      inline CallbackList& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


      // streamName Field Functions 
      bool hasStreamName() const { return this->streamName_ != nullptr;};
      void deleteStreamName() { this->streamName_ = nullptr;};
      inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
      inline CallbackList& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    protected:
      // The name of the application to which the live stream belongs.
      shared_ptr<string> appName_ {};
      // The description of the result. A value of success indicates that the request is successful. If the request fails, an error message is returned.
      shared_ptr<string> description_ {};
      // The main streaming domain.
      shared_ptr<string> domainName_ {};
      // The callback content.
      shared_ptr<string> notifyContent_ {};
      shared_ptr<string> notifyHeader_ {};
      shared_ptr<string> notifyResponse_ {};
      // The callback result. Valid values:
      // 
      // *   success
      // *   failed
      shared_ptr<string> notifyResult_ {};
      // The time when the callback was returned. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> notifyTime_ {};
      // The callback type. Valid values:
      // 
      // *   file_created: The recording file is created.
      // *   record_error: A recording error occurs.
      // *   record_started: Recording is started.
      // *   record_paused: Recording is paused.
      // *   record_resumed: Recording is resumed.
      // *   record_force_transcode_fail: The recording task fails to trigger transcoding.
      // *   transformat_error: An error occurs when the live stream is parsed.
      shared_ptr<string> notifyType_ {};
      // The recording callback URL.
      shared_ptr<string> notifyUrl_ {};
      // The name of the live stream.
      shared_ptr<string> streamName_ {};
    };

    virtual bool empty() const override { return this->callbackList_ == nullptr
        && this->code_ == nullptr && this->msg_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalNum_ == nullptr && this->totalPage_ == nullptr; };
    // callbackList Field Functions 
    bool hasCallbackList() const { return this->callbackList_ != nullptr;};
    void deleteCallbackList() { this->callbackList_ = nullptr;};
    inline const vector<DescribeLiveRecordNotifyRecordsResponseBody::CallbackList> & getCallbackList() const { DARABONBA_PTR_GET_CONST(callbackList_, vector<DescribeLiveRecordNotifyRecordsResponseBody::CallbackList>) };
    inline vector<DescribeLiveRecordNotifyRecordsResponseBody::CallbackList> getCallbackList() { DARABONBA_PTR_GET(callbackList_, vector<DescribeLiveRecordNotifyRecordsResponseBody::CallbackList>) };
    inline DescribeLiveRecordNotifyRecordsResponseBody& setCallbackList(const vector<DescribeLiveRecordNotifyRecordsResponseBody::CallbackList> & callbackList) { DARABONBA_PTR_SET_VALUE(callbackList_, callbackList) };
    inline DescribeLiveRecordNotifyRecordsResponseBody& setCallbackList(vector<DescribeLiveRecordNotifyRecordsResponseBody::CallbackList> && callbackList) { DARABONBA_PTR_SET_RVALUE(callbackList_, callbackList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeLiveRecordNotifyRecordsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeLiveRecordNotifyRecordsResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeLiveRecordNotifyRecordsResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveRecordNotifyRecordsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveRecordNotifyRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeLiveRecordNotifyRecordsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeLiveRecordNotifyRecordsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The callback records.
    shared_ptr<vector<DescribeLiveRecordNotifyRecordsResponseBody::CallbackList>> callbackList_ {};
    // The error code.
    shared_ptr<int32_t> code_ {};
    // The returned message.
    shared_ptr<string> msg_ {};
    // The page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries that meet the specified conditions.
    shared_ptr<int32_t> totalNum_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
