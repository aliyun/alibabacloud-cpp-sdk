// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHTTPEVENTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHTTPEVENTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetHttpEventConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHttpEventConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetHttpEventConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetHttpEventConfigResponseBody() = default ;
    GetHttpEventConfigResponseBody(const GetHttpEventConfigResponseBody &) = default ;
    GetHttpEventConfigResponseBody(GetHttpEventConfigResponseBody &&) = default ;
    GetHttpEventConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHttpEventConfigResponseBody() = default ;
    GetHttpEventConfigResponseBody& operator=(const GetHttpEventConfigResponseBody &) = default ;
    GetHttpEventConfigResponseBody& operator=(GetHttpEventConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
        DARABONBA_PTR_TO_JSON(EventConfig, eventConfig_);
        DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
        DARABONBA_PTR_TO_JSON(SwitchFlag, switchFlag_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
        DARABONBA_PTR_FROM_JSON(EventConfig, eventConfig_);
        DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
        DARABONBA_PTR_FROM_JSON(SwitchFlag, switchFlag_);
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
      class EventConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ComplaintHandledEvent, complaintHandledEvent_);
          DARABONBA_PTR_TO_JSON(FileReviewedEvent, fileReviewedEvent_);
          DARABONBA_PTR_TO_JSON(SyncTaskCompleteEvent, syncTaskCompleteEvent_);
          DARABONBA_PTR_TO_JSON(TaskCompleteEvent, taskCompleteEvent_);
        };
        friend void from_json(const Darabonba::Json& j, EventConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ComplaintHandledEvent, complaintHandledEvent_);
          DARABONBA_PTR_FROM_JSON(FileReviewedEvent, fileReviewedEvent_);
          DARABONBA_PTR_FROM_JSON(SyncTaskCompleteEvent, syncTaskCompleteEvent_);
          DARABONBA_PTR_FROM_JSON(TaskCompleteEvent, taskCompleteEvent_);
        };
        EventConfig() = default ;
        EventConfig(const EventConfig &) = default ;
        EventConfig(EventConfig &&) = default ;
        EventConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventConfig() = default ;
        EventConfig& operator=(const EventConfig &) = default ;
        EventConfig& operator=(EventConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->complaintHandledEvent_ == nullptr
        && this->fileReviewedEvent_ == nullptr && this->syncTaskCompleteEvent_ == nullptr && this->taskCompleteEvent_ == nullptr; };
        // complaintHandledEvent Field Functions 
        bool hasComplaintHandledEvent() const { return this->complaintHandledEvent_ != nullptr;};
        void deleteComplaintHandledEvent() { this->complaintHandledEvent_ = nullptr;};
        inline bool getComplaintHandledEvent() const { DARABONBA_PTR_GET_DEFAULT(complaintHandledEvent_, false) };
        inline EventConfig& setComplaintHandledEvent(bool complaintHandledEvent) { DARABONBA_PTR_SET_VALUE(complaintHandledEvent_, complaintHandledEvent) };


        // fileReviewedEvent Field Functions 
        bool hasFileReviewedEvent() const { return this->fileReviewedEvent_ != nullptr;};
        void deleteFileReviewedEvent() { this->fileReviewedEvent_ = nullptr;};
        inline bool getFileReviewedEvent() const { DARABONBA_PTR_GET_DEFAULT(fileReviewedEvent_, false) };
        inline EventConfig& setFileReviewedEvent(bool fileReviewedEvent) { DARABONBA_PTR_SET_VALUE(fileReviewedEvent_, fileReviewedEvent) };


        // syncTaskCompleteEvent Field Functions 
        bool hasSyncTaskCompleteEvent() const { return this->syncTaskCompleteEvent_ != nullptr;};
        void deleteSyncTaskCompleteEvent() { this->syncTaskCompleteEvent_ = nullptr;};
        inline bool getSyncTaskCompleteEvent() const { DARABONBA_PTR_GET_DEFAULT(syncTaskCompleteEvent_, false) };
        inline EventConfig& setSyncTaskCompleteEvent(bool syncTaskCompleteEvent) { DARABONBA_PTR_SET_VALUE(syncTaskCompleteEvent_, syncTaskCompleteEvent) };


        // taskCompleteEvent Field Functions 
        bool hasTaskCompleteEvent() const { return this->taskCompleteEvent_ != nullptr;};
        void deleteTaskCompleteEvent() { this->taskCompleteEvent_ = nullptr;};
        inline bool getTaskCompleteEvent() const { DARABONBA_PTR_GET_DEFAULT(taskCompleteEvent_, false) };
        inline EventConfig& setTaskCompleteEvent(bool taskCompleteEvent) { DARABONBA_PTR_SET_VALUE(taskCompleteEvent_, taskCompleteEvent) };


      protected:
        shared_ptr<bool> complaintHandledEvent_ {};
        shared_ptr<bool> fileReviewedEvent_ {};
        shared_ptr<bool> syncTaskCompleteEvent_ {};
        shared_ptr<bool> taskCompleteEvent_ {};
      };

      virtual bool empty() const override { return this->callbackUrl_ == nullptr
        && this->eventConfig_ == nullptr && this->httpMethod_ == nullptr && this->switchFlag_ == nullptr; };
      // callbackUrl Field Functions 
      bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
      void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
      inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
      inline Data& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


      // eventConfig Field Functions 
      bool hasEventConfig() const { return this->eventConfig_ != nullptr;};
      void deleteEventConfig() { this->eventConfig_ = nullptr;};
      inline const Data::EventConfig & getEventConfig() const { DARABONBA_PTR_GET_CONST(eventConfig_, Data::EventConfig) };
      inline Data::EventConfig getEventConfig() { DARABONBA_PTR_GET(eventConfig_, Data::EventConfig) };
      inline Data& setEventConfig(const Data::EventConfig & eventConfig) { DARABONBA_PTR_SET_VALUE(eventConfig_, eventConfig) };
      inline Data& setEventConfig(Data::EventConfig && eventConfig) { DARABONBA_PTR_SET_RVALUE(eventConfig_, eventConfig) };


      // httpMethod Field Functions 
      bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
      void deleteHttpMethod() { this->httpMethod_ = nullptr;};
      inline string getHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
      inline Data& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


      // switchFlag Field Functions 
      bool hasSwitchFlag() const { return this->switchFlag_ != nullptr;};
      void deleteSwitchFlag() { this->switchFlag_ = nullptr;};
      inline bool getSwitchFlag() const { DARABONBA_PTR_GET_DEFAULT(switchFlag_, false) };
      inline Data& setSwitchFlag(bool switchFlag) { DARABONBA_PTR_SET_VALUE(switchFlag_, switchFlag) };


    protected:
      shared_ptr<string> callbackUrl_ {};
      shared_ptr<Data::EventConfig> eventConfig_ {};
      shared_ptr<string> httpMethod_ {};
      shared_ptr<bool> switchFlag_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHttpEventConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHttpEventConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHttpEventConfigResponseBody::Data) };
    inline GetHttpEventConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHttpEventConfigResponseBody::Data) };
    inline GetHttpEventConfigResponseBody& setData(const GetHttpEventConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHttpEventConfigResponseBody& setData(GetHttpEventConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHttpEventConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHttpEventConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetHttpEventConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetHttpEventConfigResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
