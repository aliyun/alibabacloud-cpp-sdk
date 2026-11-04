// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCARPROCESSEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCARPROCESSEVENTSRESPONSEBODY_HPP_
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
  class QueryCarProcessEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCarProcessEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCarProcessEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryCarProcessEventsResponseBody() = default ;
    QueryCarProcessEventsResponseBody(const QueryCarProcessEventsResponseBody &) = default ;
    QueryCarProcessEventsResponseBody(QueryCarProcessEventsResponseBody &&) = default ;
    QueryCarProcessEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCarProcessEventsResponseBody() = default ;
    QueryCarProcessEventsResponseBody& operator=(const QueryCarProcessEventsResponseBody &) = default ;
    QueryCarProcessEventsResponseBody& operator=(QueryCarProcessEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
        DARABONBA_PTR_TO_JSON(PageData, pageData_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
        DARABONBA_PTR_FROM_JSON(PageData, pageData_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class PageData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageData& obj) { 
          DARABONBA_PTR_TO_JSON(ActionType, actionType_);
          DARABONBA_PTR_TO_JSON(AreaIndex, areaIndex_);
          DARABONBA_PTR_TO_JSON(Confidence, confidence_);
          DARABONBA_PTR_TO_JSON(EventId, eventId_);
          DARABONBA_PTR_TO_JSON(EventPicId, eventPicId_);
          DARABONBA_PTR_TO_JSON(EventPicUrl, eventPicUrl_);
          DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
          DARABONBA_PTR_TO_JSON(EventType, eventType_);
          DARABONBA_PTR_TO_JSON(IotId, iotId_);
          DARABONBA_PTR_TO_JSON(PlateNo, plateNo_);
          DARABONBA_PTR_TO_JSON(SubDeviceName, subDeviceName_);
          DARABONBA_PTR_TO_JSON(SubDeviceNickName, subDeviceNickName_);
          DARABONBA_PTR_TO_JSON(SubIotId, subIotId_);
          DARABONBA_PTR_TO_JSON(SubProductKey, subProductKey_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, PageData& obj) { 
          DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
          DARABONBA_PTR_FROM_JSON(AreaIndex, areaIndex_);
          DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
          DARABONBA_PTR_FROM_JSON(EventId, eventId_);
          DARABONBA_PTR_FROM_JSON(EventPicId, eventPicId_);
          DARABONBA_PTR_FROM_JSON(EventPicUrl, eventPicUrl_);
          DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
          DARABONBA_PTR_FROM_JSON(EventType, eventType_);
          DARABONBA_PTR_FROM_JSON(IotId, iotId_);
          DARABONBA_PTR_FROM_JSON(PlateNo, plateNo_);
          DARABONBA_PTR_FROM_JSON(SubDeviceName, subDeviceName_);
          DARABONBA_PTR_FROM_JSON(SubDeviceNickName, subDeviceNickName_);
          DARABONBA_PTR_FROM_JSON(SubIotId, subIotId_);
          DARABONBA_PTR_FROM_JSON(SubProductKey, subProductKey_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        };
        PageData() = default ;
        PageData(const PageData &) = default ;
        PageData(PageData &&) = default ;
        PageData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageData() = default ;
        PageData& operator=(const PageData &) = default ;
        PageData& operator=(PageData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actionType_ == nullptr
        && this->areaIndex_ == nullptr && this->confidence_ == nullptr && this->eventId_ == nullptr && this->eventPicId_ == nullptr && this->eventPicUrl_ == nullptr
        && this->eventTime_ == nullptr && this->eventType_ == nullptr && this->iotId_ == nullptr && this->plateNo_ == nullptr && this->subDeviceName_ == nullptr
        && this->subDeviceNickName_ == nullptr && this->subIotId_ == nullptr && this->subProductKey_ == nullptr && this->taskId_ == nullptr; };
        // actionType Field Functions 
        bool hasActionType() const { return this->actionType_ != nullptr;};
        void deleteActionType() { this->actionType_ = nullptr;};
        inline int32_t getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, 0) };
        inline PageData& setActionType(int32_t actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


        // areaIndex Field Functions 
        bool hasAreaIndex() const { return this->areaIndex_ != nullptr;};
        void deleteAreaIndex() { this->areaIndex_ = nullptr;};
        inline int32_t getAreaIndex() const { DARABONBA_PTR_GET_DEFAULT(areaIndex_, 0) };
        inline PageData& setAreaIndex(int32_t areaIndex) { DARABONBA_PTR_SET_VALUE(areaIndex_, areaIndex) };


        // confidence Field Functions 
        bool hasConfidence() const { return this->confidence_ != nullptr;};
        void deleteConfidence() { this->confidence_ = nullptr;};
        inline int32_t getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0) };
        inline PageData& setConfidence(int32_t confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


        // eventId Field Functions 
        bool hasEventId() const { return this->eventId_ != nullptr;};
        void deleteEventId() { this->eventId_ = nullptr;};
        inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
        inline PageData& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


        // eventPicId Field Functions 
        bool hasEventPicId() const { return this->eventPicId_ != nullptr;};
        void deleteEventPicId() { this->eventPicId_ = nullptr;};
        inline string getEventPicId() const { DARABONBA_PTR_GET_DEFAULT(eventPicId_, "") };
        inline PageData& setEventPicId(string eventPicId) { DARABONBA_PTR_SET_VALUE(eventPicId_, eventPicId) };


        // eventPicUrl Field Functions 
        bool hasEventPicUrl() const { return this->eventPicUrl_ != nullptr;};
        void deleteEventPicUrl() { this->eventPicUrl_ = nullptr;};
        inline string getEventPicUrl() const { DARABONBA_PTR_GET_DEFAULT(eventPicUrl_, "") };
        inline PageData& setEventPicUrl(string eventPicUrl) { DARABONBA_PTR_SET_VALUE(eventPicUrl_, eventPicUrl) };


        // eventTime Field Functions 
        bool hasEventTime() const { return this->eventTime_ != nullptr;};
        void deleteEventTime() { this->eventTime_ = nullptr;};
        inline int64_t getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
        inline PageData& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


        // eventType Field Functions 
        bool hasEventType() const { return this->eventType_ != nullptr;};
        void deleteEventType() { this->eventType_ = nullptr;};
        inline int32_t getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, 0) };
        inline PageData& setEventType(int32_t eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


        // iotId Field Functions 
        bool hasIotId() const { return this->iotId_ != nullptr;};
        void deleteIotId() { this->iotId_ = nullptr;};
        inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
        inline PageData& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


        // plateNo Field Functions 
        bool hasPlateNo() const { return this->plateNo_ != nullptr;};
        void deletePlateNo() { this->plateNo_ = nullptr;};
        inline string getPlateNo() const { DARABONBA_PTR_GET_DEFAULT(plateNo_, "") };
        inline PageData& setPlateNo(string plateNo) { DARABONBA_PTR_SET_VALUE(plateNo_, plateNo) };


        // subDeviceName Field Functions 
        bool hasSubDeviceName() const { return this->subDeviceName_ != nullptr;};
        void deleteSubDeviceName() { this->subDeviceName_ = nullptr;};
        inline string getSubDeviceName() const { DARABONBA_PTR_GET_DEFAULT(subDeviceName_, "") };
        inline PageData& setSubDeviceName(string subDeviceName) { DARABONBA_PTR_SET_VALUE(subDeviceName_, subDeviceName) };


        // subDeviceNickName Field Functions 
        bool hasSubDeviceNickName() const { return this->subDeviceNickName_ != nullptr;};
        void deleteSubDeviceNickName() { this->subDeviceNickName_ = nullptr;};
        inline string getSubDeviceNickName() const { DARABONBA_PTR_GET_DEFAULT(subDeviceNickName_, "") };
        inline PageData& setSubDeviceNickName(string subDeviceNickName) { DARABONBA_PTR_SET_VALUE(subDeviceNickName_, subDeviceNickName) };


        // subIotId Field Functions 
        bool hasSubIotId() const { return this->subIotId_ != nullptr;};
        void deleteSubIotId() { this->subIotId_ = nullptr;};
        inline string getSubIotId() const { DARABONBA_PTR_GET_DEFAULT(subIotId_, "") };
        inline PageData& setSubIotId(string subIotId) { DARABONBA_PTR_SET_VALUE(subIotId_, subIotId) };


        // subProductKey Field Functions 
        bool hasSubProductKey() const { return this->subProductKey_ != nullptr;};
        void deleteSubProductKey() { this->subProductKey_ = nullptr;};
        inline string getSubProductKey() const { DARABONBA_PTR_GET_DEFAULT(subProductKey_, "") };
        inline PageData& setSubProductKey(string subProductKey) { DARABONBA_PTR_SET_VALUE(subProductKey_, subProductKey) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline PageData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        // The action type of the vehicle.
        shared_ptr<int32_t> actionType_ {};
        // The number of detection boxes recognized by the IPC device.
        shared_ptr<int32_t> areaIndex_ {};
        // The confidence level of the vehicle recognition.
        shared_ptr<int32_t> confidence_ {};
        // The ID of the intelligent alert event.
        shared_ptr<string> eventId_ {};
        // The ID of the intelligent alert event picture.
        shared_ptr<string> eventPicId_ {};
        // The URL of the intelligent alert event picture.
        shared_ptr<string> eventPicUrl_ {};
        // The timestamp when the event occurred, in milliseconds.
        shared_ptr<int64_t> eventTime_ {};
        // The type of the intelligent alert event. Valid values:
        // 
        // - **0**: All intelligent alert events.
        // - Multiple intelligent alert events: Enter the sequence numbers of the intelligent alert events and separate them with commas (,), such as `10001,10002`.
        // > You can specify up to 10 intelligent alert events at a time.
        // 
        // To view all intelligent alert event types, go to the **Define Feature** tab of the **Product Details** page in the IoT Platform console. For more information, see [View intelligent alert event types](https://help.aliyun.com/document_detail/207701.html).
        shared_ptr<int32_t> eventType_ {};
        // The IotId of the V-series edge appliance.
        shared_ptr<string> iotId_ {};
        // The license plate number.
        shared_ptr<string> plateNo_ {};
        // The DeviceName of the IPC device.
        shared_ptr<string> subDeviceName_ {};
        // The DeviceNickName of the IPC device.
        shared_ptr<string> subDeviceNickName_ {};
        // The ID of the IPC device.
        shared_ptr<string> subIotId_ {};
        // The ProductKey of the IPC device.
        shared_ptr<string> subProductKey_ {};
        // The task ID of the vehicle detection event.
        shared_ptr<string> taskId_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageCount_ == nullptr && this->pageData_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageCount Field Functions 
      bool hasPageCount() const { return this->pageCount_ != nullptr;};
      void deletePageCount() { this->pageCount_ = nullptr;};
      inline int32_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0) };
      inline Data& setPageCount(int32_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


      // pageData Field Functions 
      bool hasPageData() const { return this->pageData_ != nullptr;};
      void deletePageData() { this->pageData_ = nullptr;};
      inline const vector<Data::PageData> & getPageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<Data::PageData>) };
      inline vector<Data::PageData> getPageData() { DARABONBA_PTR_GET(pageData_, vector<Data::PageData>) };
      inline Data& setPageData(const vector<Data::PageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
      inline Data& setPageData(vector<Data::PageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The current page number.
      shared_ptr<int32_t> currentPage_ {};
      // The total number of pages.
      shared_ptr<int32_t> pageCount_ {};
      // The list of returned intelligent alert events.
      shared_ptr<vector<Data::PageData>> pageData_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of vehicle recognition events.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryCarProcessEventsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryCarProcessEventsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryCarProcessEventsResponseBody::Data) };
    inline QueryCarProcessEventsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryCarProcessEventsResponseBody::Data) };
    inline QueryCarProcessEventsResponseBody& setData(const QueryCarProcessEventsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryCarProcessEventsResponseBody& setData(QueryCarProcessEventsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryCarProcessEventsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCarProcessEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCarProcessEventsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. Valid values:
    // 
    // - **200**: The call was successful.
    // - Other values: An error occurred. For more information, see [Error codes](https://help.aliyun.com/document_detail/288314.html).
    shared_ptr<string> code_ {};
    // The data returned if the call is successful.
    shared_ptr<QueryCarProcessEventsResponseBody::Data> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
