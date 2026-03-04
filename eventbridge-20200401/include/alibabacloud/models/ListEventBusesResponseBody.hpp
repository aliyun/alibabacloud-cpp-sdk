// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTBUSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTBUSESRESPONSEBODY_HPP_
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
  class ListEventBusesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventBusesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventBusesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListEventBusesResponseBody() = default ;
    ListEventBusesResponseBody(const ListEventBusesResponseBody &) = default ;
    ListEventBusesResponseBody(ListEventBusesResponseBody &&) = default ;
    ListEventBusesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventBusesResponseBody() = default ;
    ListEventBusesResponseBody& operator=(const ListEventBusesResponseBody &) = default ;
    ListEventBusesResponseBody& operator=(ListEventBusesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EventBuses, eventBuses_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EventBuses, eventBuses_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
      class EventBuses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventBuses& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EventBusARN, eventBusARN_);
          DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
        };
        friend void from_json(const Darabonba::Json& j, EventBuses& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EventBusARN, eventBusARN_);
          DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
        };
        EventBuses() = default ;
        EventBuses(const EventBuses &) = default ;
        EventBuses(EventBuses &&) = default ;
        EventBuses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventBuses() = default ;
        EventBuses& operator=(const EventBuses &) = default ;
        EventBuses& operator=(EventBuses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTimestamp_ == nullptr
        && this->description_ == nullptr && this->eventBusARN_ == nullptr && this->eventBusName_ == nullptr; };
        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline EventBuses& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline EventBuses& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // eventBusARN Field Functions 
        bool hasEventBusARN() const { return this->eventBusARN_ != nullptr;};
        void deleteEventBusARN() { this->eventBusARN_ = nullptr;};
        inline string getEventBusARN() const { DARABONBA_PTR_GET_DEFAULT(eventBusARN_, "") };
        inline EventBuses& setEventBusARN(string eventBusARN) { DARABONBA_PTR_SET_VALUE(eventBusARN_, eventBusARN) };


        // eventBusName Field Functions 
        bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
        void deleteEventBusName() { this->eventBusName_ = nullptr;};
        inline string getEventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
        inline EventBuses& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


      protected:
        // The timestamp that indicates when the event bus was created.
        shared_ptr<int64_t> createTimestamp_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The Alibaba Cloud Resource Name (ARN) of the event bus.
        shared_ptr<string> eventBusARN_ {};
        // The name of the event bus.
        shared_ptr<string> eventBusName_ {};
      };

      virtual bool empty() const override { return this->eventBuses_ == nullptr
        && this->nextToken_ == nullptr && this->total_ == nullptr; };
      // eventBuses Field Functions 
      bool hasEventBuses() const { return this->eventBuses_ != nullptr;};
      void deleteEventBuses() { this->eventBuses_ = nullptr;};
      inline const vector<Data::EventBuses> & getEventBuses() const { DARABONBA_PTR_GET_CONST(eventBuses_, vector<Data::EventBuses>) };
      inline vector<Data::EventBuses> getEventBuses() { DARABONBA_PTR_GET(eventBuses_, vector<Data::EventBuses>) };
      inline Data& setEventBuses(const vector<Data::EventBuses> & eventBuses) { DARABONBA_PTR_SET_VALUE(eventBuses_, eventBuses) };
      inline Data& setEventBuses(vector<Data::EventBuses> && eventBuses) { DARABONBA_PTR_SET_RVALUE(eventBuses_, eventBuses) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The event buses.
      shared_ptr<vector<Data::EventBuses>> eventBuses_ {};
      // If excess return values exist, this parameter is returned.
      shared_ptr<string> nextToken_ {};
      // The total number of entries.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListEventBusesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListEventBusesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListEventBusesResponseBody::Data) };
    inline ListEventBusesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListEventBusesResponseBody::Data) };
    inline ListEventBusesResponseBody& setData(const ListEventBusesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListEventBusesResponseBody& setData(ListEventBusesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEventBusesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEventBusesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEventBusesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. Valid values:
    // 
    // *   Success: The request was successful.
    // *   Other codes: The request failed. For information about error codes, see Error codes.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListEventBusesResponseBody::Data> data_ {};
    // The returned error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation was successful. If the operation was successful, the value true is returned.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
