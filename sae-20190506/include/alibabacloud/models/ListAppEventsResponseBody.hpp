// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAppEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAppEventsResponseBody() = default ;
    ListAppEventsResponseBody(const ListAppEventsResponseBody &) = default ;
    ListAppEventsResponseBody(ListAppEventsResponseBody &&) = default ;
    ListAppEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppEventsResponseBody() = default ;
    ListAppEventsResponseBody& operator=(const ListAppEventsResponseBody &) = default ;
    ListAppEventsResponseBody& operator=(ListAppEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppEventEntity, appEventEntity_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppEventEntity, appEventEntity_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class AppEventEntity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppEventEntity& obj) { 
          DARABONBA_PTR_TO_JSON(CauseAnalysis, causeAnalysis_);
          DARABONBA_PTR_TO_JSON(EventType, eventType_);
          DARABONBA_PTR_TO_JSON(FirstTimestamp, firstTimestamp_);
          DARABONBA_PTR_TO_JSON(LastTimestamp, lastTimestamp_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(ObjectKind, objectKind_);
          DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
        };
        friend void from_json(const Darabonba::Json& j, AppEventEntity& obj) { 
          DARABONBA_PTR_FROM_JSON(CauseAnalysis, causeAnalysis_);
          DARABONBA_PTR_FROM_JSON(EventType, eventType_);
          DARABONBA_PTR_FROM_JSON(FirstTimestamp, firstTimestamp_);
          DARABONBA_PTR_FROM_JSON(LastTimestamp, lastTimestamp_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(ObjectKind, objectKind_);
          DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
        };
        AppEventEntity() = default ;
        AppEventEntity(const AppEventEntity &) = default ;
        AppEventEntity(AppEventEntity &&) = default ;
        AppEventEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppEventEntity() = default ;
        AppEventEntity& operator=(const AppEventEntity &) = default ;
        AppEventEntity& operator=(AppEventEntity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->causeAnalysis_ == nullptr
        && this->eventType_ == nullptr && this->firstTimestamp_ == nullptr && this->lastTimestamp_ == nullptr && this->message_ == nullptr && this->objectKind_ == nullptr
        && this->objectName_ == nullptr && this->reason_ == nullptr; };
        // causeAnalysis Field Functions 
        bool hasCauseAnalysis() const { return this->causeAnalysis_ != nullptr;};
        void deleteCauseAnalysis() { this->causeAnalysis_ = nullptr;};
        inline string getCauseAnalysis() const { DARABONBA_PTR_GET_DEFAULT(causeAnalysis_, "") };
        inline AppEventEntity& setCauseAnalysis(string causeAnalysis) { DARABONBA_PTR_SET_VALUE(causeAnalysis_, causeAnalysis) };


        // eventType Field Functions 
        bool hasEventType() const { return this->eventType_ != nullptr;};
        void deleteEventType() { this->eventType_ = nullptr;};
        inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
        inline AppEventEntity& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


        // firstTimestamp Field Functions 
        bool hasFirstTimestamp() const { return this->firstTimestamp_ != nullptr;};
        void deleteFirstTimestamp() { this->firstTimestamp_ = nullptr;};
        inline string getFirstTimestamp() const { DARABONBA_PTR_GET_DEFAULT(firstTimestamp_, "") };
        inline AppEventEntity& setFirstTimestamp(string firstTimestamp) { DARABONBA_PTR_SET_VALUE(firstTimestamp_, firstTimestamp) };


        // lastTimestamp Field Functions 
        bool hasLastTimestamp() const { return this->lastTimestamp_ != nullptr;};
        void deleteLastTimestamp() { this->lastTimestamp_ = nullptr;};
        inline string getLastTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimestamp_, "") };
        inline AppEventEntity& setLastTimestamp(string lastTimestamp) { DARABONBA_PTR_SET_VALUE(lastTimestamp_, lastTimestamp) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline AppEventEntity& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // objectKind Field Functions 
        bool hasObjectKind() const { return this->objectKind_ != nullptr;};
        void deleteObjectKind() { this->objectKind_ = nullptr;};
        inline string getObjectKind() const { DARABONBA_PTR_GET_DEFAULT(objectKind_, "") };
        inline AppEventEntity& setObjectKind(string objectKind) { DARABONBA_PTR_SET_VALUE(objectKind_, objectKind) };


        // objectName Field Functions 
        bool hasObjectName() const { return this->objectName_ != nullptr;};
        void deleteObjectName() { this->objectName_ = nullptr;};
        inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
        inline AppEventEntity& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline AppEventEntity& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      protected:
        shared_ptr<string> causeAnalysis_ {};
        // The type of the event. Valid values:
        shared_ptr<string> eventType_ {};
        // The timestamp of the first occurrence of the event.
        shared_ptr<string> firstTimestamp_ {};
        // The timestamp of the last occurrence of the event.
        shared_ptr<string> lastTimestamp_ {};
        // The information about the event.
        shared_ptr<string> message_ {};
        // The type of the object.
        shared_ptr<string> objectKind_ {};
        // The name of the object.
        shared_ptr<string> objectName_ {};
        // The cause of the event.
        shared_ptr<string> reason_ {};
      };

      virtual bool empty() const override { return this->appEventEntity_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // appEventEntity Field Functions 
      bool hasAppEventEntity() const { return this->appEventEntity_ != nullptr;};
      void deleteAppEventEntity() { this->appEventEntity_ = nullptr;};
      inline const vector<Data::AppEventEntity> & getAppEventEntity() const { DARABONBA_PTR_GET_CONST(appEventEntity_, vector<Data::AppEventEntity>) };
      inline vector<Data::AppEventEntity> getAppEventEntity() { DARABONBA_PTR_GET(appEventEntity_, vector<Data::AppEventEntity>) };
      inline Data& setAppEventEntity(const vector<Data::AppEventEntity> & appEventEntity) { DARABONBA_PTR_SET_VALUE(appEventEntity_, appEventEntity) };
      inline Data& setAppEventEntity(vector<Data::AppEventEntity> && appEventEntity) { DARABONBA_PTR_SET_RVALUE(appEventEntity_, appEventEntity) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The events.
      shared_ptr<vector<Data::AppEventEntity>> appEventEntity_ {};
      // The number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of events that occurred in an application.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAppEventsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAppEventsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAppEventsResponseBody::Data) };
    inline ListAppEventsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAppEventsResponseBody::Data) };
    inline ListAppEventsResponseBody& setData(const ListAppEventsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAppEventsResponseBody& setData(ListAppEventsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListAppEventsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAppEventsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAppEventsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The events.
    shared_ptr<ListAppEventsResponseBody::Data> data_ {};
    // The error code returned if the call failed. Take note of the following rules:
    // 
    // *   If the call is successful, the **ErrorCode** parameter is not returned.
    // *   If the call fails, the **ErrorCode** parameter is returned. For more information, see the "**Error codes**" section in this topic.
    shared_ptr<string> errorCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the events that occurred in the application were queried. Valid values:
    // 
    // *   **true**: The events were queried.
    // *   **false**: The events failed to be queried.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
