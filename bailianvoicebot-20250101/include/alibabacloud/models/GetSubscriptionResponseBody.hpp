// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class GetSubscriptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSubscriptionResponseBody() = default ;
    GetSubscriptionResponseBody(const GetSubscriptionResponseBody &) = default ;
    GetSubscriptionResponseBody(GetSubscriptionResponseBody &&) = default ;
    GetSubscriptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionResponseBody() = default ;
    GetSubscriptionResponseBody& operator=(const GetSubscriptionResponseBody &) = default ;
    GetSubscriptionResponseBody& operator=(GetSubscriptionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Disabled, disabled_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(EventList, eventList_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MqInstanceId, mqInstanceId_);
        DARABONBA_PTR_TO_JSON(MqType, mqType_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(ProducerId, producerId_);
        DARABONBA_PTR_TO_JSON(Topic, topic_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(EventList, eventList_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MqInstanceId, mqInstanceId_);
        DARABONBA_PTR_FROM_JSON(MqType, mqType_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(ProducerId, producerId_);
        DARABONBA_PTR_FROM_JSON(Topic, topic_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
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
      class EventList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventList& obj) { 
          DARABONBA_PTR_TO_JSON(Disabled, disabled_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, EventList& obj) { 
          DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        EventList() = default ;
        EventList(const EventList &) = default ;
        EventList(EventList &&) = default ;
        EventList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventList() = default ;
        EventList& operator=(const EventList &) = default ;
        EventList& operator=(EventList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->disabled_ == nullptr
        && this->displayName_ == nullptr && this->name_ == nullptr; };
        // disabled Field Functions 
        bool hasDisabled() const { return this->disabled_ != nullptr;};
        void deleteDisabled() { this->disabled_ = nullptr;};
        inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
        inline EventList& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline EventList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EventList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<bool> disabled_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->disabled_ == nullptr
        && this->endpoint_ == nullptr && this->eventList_ == nullptr && this->instanceId_ == nullptr && this->mqInstanceId_ == nullptr && this->mqType_ == nullptr
        && this->password_ == nullptr && this->producerId_ == nullptr && this->topic_ == nullptr && this->userName_ == nullptr; };
      // disabled Field Functions 
      bool hasDisabled() const { return this->disabled_ != nullptr;};
      void deleteDisabled() { this->disabled_ = nullptr;};
      inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
      inline Data& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Data& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // eventList Field Functions 
      bool hasEventList() const { return this->eventList_ != nullptr;};
      void deleteEventList() { this->eventList_ = nullptr;};
      inline const vector<Data::EventList> & getEventList() const { DARABONBA_PTR_GET_CONST(eventList_, vector<Data::EventList>) };
      inline vector<Data::EventList> getEventList() { DARABONBA_PTR_GET(eventList_, vector<Data::EventList>) };
      inline Data& setEventList(const vector<Data::EventList> & eventList) { DARABONBA_PTR_SET_VALUE(eventList_, eventList) };
      inline Data& setEventList(vector<Data::EventList> && eventList) { DARABONBA_PTR_SET_RVALUE(eventList_, eventList) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // mqInstanceId Field Functions 
      bool hasMqInstanceId() const { return this->mqInstanceId_ != nullptr;};
      void deleteMqInstanceId() { this->mqInstanceId_ = nullptr;};
      inline string getMqInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mqInstanceId_, "") };
      inline Data& setMqInstanceId(string mqInstanceId) { DARABONBA_PTR_SET_VALUE(mqInstanceId_, mqInstanceId) };


      // mqType Field Functions 
      bool hasMqType() const { return this->mqType_ != nullptr;};
      void deleteMqType() { this->mqType_ = nullptr;};
      inline string getMqType() const { DARABONBA_PTR_GET_DEFAULT(mqType_, "") };
      inline Data& setMqType(string mqType) { DARABONBA_PTR_SET_VALUE(mqType_, mqType) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline Data& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // producerId Field Functions 
      bool hasProducerId() const { return this->producerId_ != nullptr;};
      void deleteProducerId() { this->producerId_ = nullptr;};
      inline string getProducerId() const { DARABONBA_PTR_GET_DEFAULT(producerId_, "") };
      inline Data& setProducerId(string producerId) { DARABONBA_PTR_SET_VALUE(producerId_, producerId) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
      inline Data& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Data& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      shared_ptr<bool> disabled_ {};
      shared_ptr<string> endpoint_ {};
      shared_ptr<vector<Data::EventList>> eventList_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> mqInstanceId_ {};
      shared_ptr<string> mqType_ {};
      shared_ptr<string> password_ {};
      shared_ptr<string> producerId_ {};
      shared_ptr<string> topic_ {};
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSubscriptionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSubscriptionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSubscriptionResponseBody::Data) };
    inline GetSubscriptionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSubscriptionResponseBody::Data) };
    inline GetSubscriptionResponseBody& setData(const GetSubscriptionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSubscriptionResponseBody& setData(GetSubscriptionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetSubscriptionResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSubscriptionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline GetSubscriptionResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline GetSubscriptionResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSubscriptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetSubscriptionResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
