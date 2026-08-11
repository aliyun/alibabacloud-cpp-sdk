// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAPPRISKEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAPPRISKEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListAiAppRiskEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAiAppRiskEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAiAppRiskEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAiAppRiskEventResponseBody() = default ;
    ListAiAppRiskEventResponseBody(const ListAiAppRiskEventResponseBody &) = default ;
    ListAiAppRiskEventResponseBody(ListAiAppRiskEventResponseBody &&) = default ;
    ListAiAppRiskEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAiAppRiskEventResponseBody() = default ;
    ListAiAppRiskEventResponseBody& operator=(const ListAiAppRiskEventResponseBody &) = default ;
    ListAiAppRiskEventResponseBody& operator=(ListAiAppRiskEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(EventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(EventDesc, eventDesc_);
        DARABONBA_PTR_TO_JSON(EventDescEn, eventDescEn_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(LabelDesc, labelDesc_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(EventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(EventDesc, eventDesc_);
        DARABONBA_PTR_FROM_JSON(EventDescEn, eventDescEn_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(LabelDesc, labelDesc_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->eventCode_ == nullptr && this->eventDesc_ == nullptr && this->eventDescEn_ == nullptr && this->eventId_ == nullptr && this->eventName_ == nullptr
        && this->label_ == nullptr && this->labelDesc_ == nullptr && this->level_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // eventCode Field Functions 
      bool hasEventCode() const { return this->eventCode_ != nullptr;};
      void deleteEventCode() { this->eventCode_ = nullptr;};
      inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
      inline Data& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


      // eventDesc Field Functions 
      bool hasEventDesc() const { return this->eventDesc_ != nullptr;};
      void deleteEventDesc() { this->eventDesc_ = nullptr;};
      inline string getEventDesc() const { DARABONBA_PTR_GET_DEFAULT(eventDesc_, "") };
      inline Data& setEventDesc(string eventDesc) { DARABONBA_PTR_SET_VALUE(eventDesc_, eventDesc) };


      // eventDescEn Field Functions 
      bool hasEventDescEn() const { return this->eventDescEn_ != nullptr;};
      void deleteEventDescEn() { this->eventDescEn_ = nullptr;};
      inline string getEventDescEn() const { DARABONBA_PTR_GET_DEFAULT(eventDescEn_, "") };
      inline Data& setEventDescEn(string eventDescEn) { DARABONBA_PTR_SET_VALUE(eventDescEn_, eventDescEn) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline Data& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline Data& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Data& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // labelDesc Field Functions 
      bool hasLabelDesc() const { return this->labelDesc_ != nullptr;};
      void deleteLabelDesc() { this->labelDesc_ = nullptr;};
      inline string getLabelDesc() const { DARABONBA_PTR_GET_DEFAULT(labelDesc_, "") };
      inline Data& setLabelDesc(string labelDesc) { DARABONBA_PTR_SET_VALUE(labelDesc_, labelDesc) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline Data& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The end time. Format: YYYY-MM-DD HH:mm:ss.
      shared_ptr<string> endTime_ {};
      // The event code that identifies the type or category of the event.
      shared_ptr<string> eventCode_ {};
      // The event description that provides details about the risk event.
      shared_ptr<string> eventDesc_ {};
      // The event description in English.
      shared_ptr<string> eventDescEn_ {};
      // The event ID that uniquely identifies a risk event.
      shared_ptr<string> eventId_ {};
      // The event name that briefly describes the risk event.
      shared_ptr<string> eventName_ {};
      // The label used to mark or categorize the event.
      shared_ptr<string> label_ {};
      // The label description that provides details about the label.
      shared_ptr<string> labelDesc_ {};
      // The risk level that indicates the severity of the event, such as high, medium, or low.
      shared_ptr<string> level_ {};
      // The effective period. Format: YYYY-MM-DD HH:mm:ss (default time zone: UTC+08:00).
      shared_ptr<string> startTime_ {};
      // The event status that indicates the current processing state of the event, such as pending or resolved.
      shared_ptr<string> status_ {};
      // The event type that indicates the category of the risk event, such as security or performance.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAiAppRiskEventResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAiAppRiskEventResponseBody::Data>) };
    inline vector<ListAiAppRiskEventResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAiAppRiskEventResponseBody::Data>) };
    inline ListAiAppRiskEventResponseBody& setData(const vector<ListAiAppRiskEventResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAiAppRiskEventResponseBody& setData(vector<ListAiAppRiskEventResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAiAppRiskEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<vector<ListAiAppRiskEventResponseBody::Data>> data_ {};
    // The ID assigned by the backend to uniquely identify a request. This ID can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
