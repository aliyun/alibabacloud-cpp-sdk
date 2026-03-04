// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIYUNOFFICIALEVENTSOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALIYUNOFFICIALEVENTSOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListAliyunOfficialEventSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliyunOfficialEventSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliyunOfficialEventSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAliyunOfficialEventSourcesResponseBody() = default ;
    ListAliyunOfficialEventSourcesResponseBody(const ListAliyunOfficialEventSourcesResponseBody &) = default ;
    ListAliyunOfficialEventSourcesResponseBody(ListAliyunOfficialEventSourcesResponseBody &&) = default ;
    ListAliyunOfficialEventSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliyunOfficialEventSourcesResponseBody() = default ;
    ListAliyunOfficialEventSourcesResponseBody& operator=(const ListAliyunOfficialEventSourcesResponseBody &) = default ;
    ListAliyunOfficialEventSourcesResponseBody& operator=(ListAliyunOfficialEventSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EventSourceList, eventSourceList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EventSourceList, eventSourceList_);
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
      class EventSourceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventSourceList& obj) { 
          DARABONBA_PTR_TO_JSON(Arn, arn_);
          DARABONBA_PTR_TO_JSON(Ctime, ctime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
          DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
          DARABONBA_PTR_TO_JSON(FullName, fullName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, EventSourceList& obj) { 
          DARABONBA_PTR_FROM_JSON(Arn, arn_);
          DARABONBA_PTR_FROM_JSON(Ctime, ctime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
          DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
          DARABONBA_PTR_FROM_JSON(FullName, fullName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        EventSourceList() = default ;
        EventSourceList(const EventSourceList &) = default ;
        EventSourceList(EventSourceList &&) = default ;
        EventSourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventSourceList() = default ;
        EventSourceList& operator=(const EventSourceList &) = default ;
        EventSourceList& operator=(EventSourceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EventTypes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EventTypes& obj) { 
            DARABONBA_PTR_TO_JSON(EventSourceName, eventSourceName_);
            DARABONBA_PTR_TO_JSON(GroupName, groupName_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(ShortName, shortName_);
          };
          friend void from_json(const Darabonba::Json& j, EventTypes& obj) { 
            DARABONBA_PTR_FROM_JSON(EventSourceName, eventSourceName_);
            DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(ShortName, shortName_);
          };
          EventTypes() = default ;
          EventTypes(const EventTypes &) = default ;
          EventTypes(EventTypes &&) = default ;
          EventTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EventTypes() = default ;
          EventTypes& operator=(const EventTypes &) = default ;
          EventTypes& operator=(EventTypes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->eventSourceName_ == nullptr
        && this->groupName_ == nullptr && this->name_ == nullptr && this->shortName_ == nullptr; };
          // eventSourceName Field Functions 
          bool hasEventSourceName() const { return this->eventSourceName_ != nullptr;};
          void deleteEventSourceName() { this->eventSourceName_ = nullptr;};
          inline string getEventSourceName() const { DARABONBA_PTR_GET_DEFAULT(eventSourceName_, "") };
          inline EventTypes& setEventSourceName(string eventSourceName) { DARABONBA_PTR_SET_VALUE(eventSourceName_, eventSourceName) };


          // groupName Field Functions 
          bool hasGroupName() const { return this->groupName_ != nullptr;};
          void deleteGroupName() { this->groupName_ = nullptr;};
          inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
          inline EventTypes& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline EventTypes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // shortName Field Functions 
          bool hasShortName() const { return this->shortName_ != nullptr;};
          void deleteShortName() { this->shortName_ = nullptr;};
          inline string getShortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
          inline EventTypes& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


        protected:
          // The name of the event source.
          shared_ptr<string> eventSourceName_ {};
          // The name of the group to which the event type belongs.
          shared_ptr<string> groupName_ {};
          // The full name of the event type.
          shared_ptr<string> name_ {};
          // The short name of the event type.
          shared_ptr<string> shortName_ {};
        };

        virtual bool empty() const override { return this->arn_ == nullptr
        && this->ctime_ == nullptr && this->description_ == nullptr && this->eventBusName_ == nullptr && this->eventTypes_ == nullptr && this->fullName_ == nullptr
        && this->name_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
        // arn Field Functions 
        bool hasArn() const { return this->arn_ != nullptr;};
        void deleteArn() { this->arn_ = nullptr;};
        inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
        inline EventSourceList& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


        // ctime Field Functions 
        bool hasCtime() const { return this->ctime_ != nullptr;};
        void deleteCtime() { this->ctime_ = nullptr;};
        inline float getCtime() const { DARABONBA_PTR_GET_DEFAULT(ctime_, 0.0) };
        inline EventSourceList& setCtime(float ctime) { DARABONBA_PTR_SET_VALUE(ctime_, ctime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline EventSourceList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // eventBusName Field Functions 
        bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
        void deleteEventBusName() { this->eventBusName_ = nullptr;};
        inline string getEventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
        inline EventSourceList& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


        // eventTypes Field Functions 
        bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
        void deleteEventTypes() { this->eventTypes_ = nullptr;};
        inline const vector<EventSourceList::EventTypes> & getEventTypes() const { DARABONBA_PTR_GET_CONST(eventTypes_, vector<EventSourceList::EventTypes>) };
        inline vector<EventSourceList::EventTypes> getEventTypes() { DARABONBA_PTR_GET(eventTypes_, vector<EventSourceList::EventTypes>) };
        inline EventSourceList& setEventTypes(const vector<EventSourceList::EventTypes> & eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };
        inline EventSourceList& setEventTypes(vector<EventSourceList::EventTypes> && eventTypes) { DARABONBA_PTR_SET_RVALUE(eventTypes_, eventTypes) };


        // fullName Field Functions 
        bool hasFullName() const { return this->fullName_ != nullptr;};
        void deleteFullName() { this->fullName_ = nullptr;};
        inline string getFullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
        inline EventSourceList& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EventSourceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline EventSourceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline EventSourceList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The Alibaba Cloud Resource Name (ARN) of the event bus.
        shared_ptr<string> arn_ {};
        // The time when the event source was created. Unit: milliseconds.
        shared_ptr<float> ctime_ {};
        // The description of the event source.
        shared_ptr<string> description_ {};
        // The name of the event source to which the event type belongs.
        shared_ptr<string> eventBusName_ {};
        // The event types.
        shared_ptr<vector<EventSourceList::EventTypes>> eventTypes_ {};
        // The full name of the event source.
        shared_ptr<string> fullName_ {};
        // The name of the event source.
        shared_ptr<string> name_ {};
        // The status of the event source. Valid value: Activated.
        shared_ptr<string> status_ {};
        // The type of the event source.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->eventSourceList_ == nullptr; };
      // eventSourceList Field Functions 
      bool hasEventSourceList() const { return this->eventSourceList_ != nullptr;};
      void deleteEventSourceList() { this->eventSourceList_ = nullptr;};
      inline const vector<Data::EventSourceList> & getEventSourceList() const { DARABONBA_PTR_GET_CONST(eventSourceList_, vector<Data::EventSourceList>) };
      inline vector<Data::EventSourceList> getEventSourceList() { DARABONBA_PTR_GET(eventSourceList_, vector<Data::EventSourceList>) };
      inline Data& setEventSourceList(const vector<Data::EventSourceList> & eventSourceList) { DARABONBA_PTR_SET_VALUE(eventSourceList_, eventSourceList) };
      inline Data& setEventSourceList(vector<Data::EventSourceList> && eventSourceList) { DARABONBA_PTR_SET_RVALUE(eventSourceList_, eventSourceList) };


    protected:
      // The event sources.
      shared_ptr<vector<Data::EventSourceList>> eventSourceList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAliyunOfficialEventSourcesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAliyunOfficialEventSourcesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAliyunOfficialEventSourcesResponseBody::Data) };
    inline ListAliyunOfficialEventSourcesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAliyunOfficialEventSourcesResponseBody::Data) };
    inline ListAliyunOfficialEventSourcesResponseBody& setData(const ListAliyunOfficialEventSourcesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAliyunOfficialEventSourcesResponseBody& setData(ListAliyunOfficialEventSourcesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAliyunOfficialEventSourcesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAliyunOfficialEventSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAliyunOfficialEventSourcesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The value Success indicates that the request is successful. Other values indicate that the request failed. For a list of error codes, see Error codes.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<ListAliyunOfficialEventSourcesResponseBody::Data> data_ {};
    // The returned error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation is successful. If the operation is successful, the value true is returned.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
