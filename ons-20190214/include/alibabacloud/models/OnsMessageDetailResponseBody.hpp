// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSMESSAGEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSMESSAGEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsMessageDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsMessageDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsMessageDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsMessageDetailResponseBody() = default ;
    OnsMessageDetailResponseBody(const OnsMessageDetailResponseBody &) = default ;
    OnsMessageDetailResponseBody(OnsMessageDetailResponseBody &&) = default ;
    OnsMessageDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsMessageDetailResponseBody() = default ;
    OnsMessageDetailResponseBody& operator=(const OnsMessageDetailResponseBody &) = default ;
    OnsMessageDetailResponseBody& operator=(OnsMessageDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Body, body_);
        DARABONBA_PTR_TO_JSON(BodyCRC, bodyCRC_);
        DARABONBA_PTR_TO_JSON(BodyStr, bodyStr_);
        DARABONBA_PTR_TO_JSON(BornHost, bornHost_);
        DARABONBA_PTR_TO_JSON(BornTimestamp, bornTimestamp_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MsgId, msgId_);
        DARABONBA_PTR_TO_JSON(PropertyList, propertyList_);
        DARABONBA_PTR_TO_JSON(ReconsumeTimes, reconsumeTimes_);
        DARABONBA_PTR_TO_JSON(StoreHost, storeHost_);
        DARABONBA_PTR_TO_JSON(StoreSize, storeSize_);
        DARABONBA_PTR_TO_JSON(StoreTimestamp, storeTimestamp_);
        DARABONBA_PTR_TO_JSON(Topic, topic_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Body, body_);
        DARABONBA_PTR_FROM_JSON(BodyCRC, bodyCRC_);
        DARABONBA_PTR_FROM_JSON(BodyStr, bodyStr_);
        DARABONBA_PTR_FROM_JSON(BornHost, bornHost_);
        DARABONBA_PTR_FROM_JSON(BornTimestamp, bornTimestamp_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
        DARABONBA_PTR_FROM_JSON(PropertyList, propertyList_);
        DARABONBA_PTR_FROM_JSON(ReconsumeTimes, reconsumeTimes_);
        DARABONBA_PTR_FROM_JSON(StoreHost, storeHost_);
        DARABONBA_PTR_FROM_JSON(StoreSize, storeSize_);
        DARABONBA_PTR_FROM_JSON(StoreTimestamp, storeTimestamp_);
        DARABONBA_PTR_FROM_JSON(Topic, topic_);
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
      class PropertyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PropertyList& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, PropertyList& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        PropertyList() = default ;
        PropertyList(const PropertyList &) = default ;
        PropertyList(PropertyList &&) = default ;
        PropertyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PropertyList() = default ;
        PropertyList& operator=(const PropertyList &) = default ;
        PropertyList& operator=(PropertyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PropertyList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline PropertyList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The name of the attribute. Valid values:
        // 
        // *   **TRACE_ON**: indicates whether the trace of the message exists.
        // *   **MSG_REGION**: The region ID of the instance to which the topic belongs.
        // *   **__MESSAGE_DECODED_TIME**: The time when the message was decoded.
        // *   **__BORNHOST**: The IP address of the producer client.
        // *   **UNIQ_KEY**: The ID of the message.
        // 
        // For information about the terms that are used in ApsaraMQ for RocketMQ, see [Terms](https://help.aliyun.com/document_detail/29533.html).
        shared_ptr<string> name_ {};
        // The value of the attribute.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->body_ == nullptr
        && this->bodyCRC_ == nullptr && this->bodyStr_ == nullptr && this->bornHost_ == nullptr && this->bornTimestamp_ == nullptr && this->instanceId_ == nullptr
        && this->msgId_ == nullptr && this->propertyList_ == nullptr && this->reconsumeTimes_ == nullptr && this->storeHost_ == nullptr && this->storeSize_ == nullptr
        && this->storeTimestamp_ == nullptr && this->topic_ == nullptr; };
      // body Field Functions 
      bool hasBody() const { return this->body_ != nullptr;};
      void deleteBody() { this->body_ = nullptr;};
      inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
      inline Data& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


      // bodyCRC Field Functions 
      bool hasBodyCRC() const { return this->bodyCRC_ != nullptr;};
      void deleteBodyCRC() { this->bodyCRC_ = nullptr;};
      inline int32_t getBodyCRC() const { DARABONBA_PTR_GET_DEFAULT(bodyCRC_, 0) };
      inline Data& setBodyCRC(int32_t bodyCRC) { DARABONBA_PTR_SET_VALUE(bodyCRC_, bodyCRC) };


      // bodyStr Field Functions 
      bool hasBodyStr() const { return this->bodyStr_ != nullptr;};
      void deleteBodyStr() { this->bodyStr_ = nullptr;};
      inline string getBodyStr() const { DARABONBA_PTR_GET_DEFAULT(bodyStr_, "") };
      inline Data& setBodyStr(string bodyStr) { DARABONBA_PTR_SET_VALUE(bodyStr_, bodyStr) };


      // bornHost Field Functions 
      bool hasBornHost() const { return this->bornHost_ != nullptr;};
      void deleteBornHost() { this->bornHost_ = nullptr;};
      inline string getBornHost() const { DARABONBA_PTR_GET_DEFAULT(bornHost_, "") };
      inline Data& setBornHost(string bornHost) { DARABONBA_PTR_SET_VALUE(bornHost_, bornHost) };


      // bornTimestamp Field Functions 
      bool hasBornTimestamp() const { return this->bornTimestamp_ != nullptr;};
      void deleteBornTimestamp() { this->bornTimestamp_ = nullptr;};
      inline int64_t getBornTimestamp() const { DARABONBA_PTR_GET_DEFAULT(bornTimestamp_, 0L) };
      inline Data& setBornTimestamp(int64_t bornTimestamp) { DARABONBA_PTR_SET_VALUE(bornTimestamp_, bornTimestamp) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // msgId Field Functions 
      bool hasMsgId() const { return this->msgId_ != nullptr;};
      void deleteMsgId() { this->msgId_ = nullptr;};
      inline string getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
      inline Data& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


      // propertyList Field Functions 
      bool hasPropertyList() const { return this->propertyList_ != nullptr;};
      void deletePropertyList() { this->propertyList_ = nullptr;};
      inline const vector<Data::PropertyList> & getPropertyList() const { DARABONBA_PTR_GET_CONST(propertyList_, vector<Data::PropertyList>) };
      inline vector<Data::PropertyList> getPropertyList() { DARABONBA_PTR_GET(propertyList_, vector<Data::PropertyList>) };
      inline Data& setPropertyList(const vector<Data::PropertyList> & propertyList) { DARABONBA_PTR_SET_VALUE(propertyList_, propertyList) };
      inline Data& setPropertyList(vector<Data::PropertyList> && propertyList) { DARABONBA_PTR_SET_RVALUE(propertyList_, propertyList) };


      // reconsumeTimes Field Functions 
      bool hasReconsumeTimes() const { return this->reconsumeTimes_ != nullptr;};
      void deleteReconsumeTimes() { this->reconsumeTimes_ = nullptr;};
      inline int32_t getReconsumeTimes() const { DARABONBA_PTR_GET_DEFAULT(reconsumeTimes_, 0) };
      inline Data& setReconsumeTimes(int32_t reconsumeTimes) { DARABONBA_PTR_SET_VALUE(reconsumeTimes_, reconsumeTimes) };


      // storeHost Field Functions 
      bool hasStoreHost() const { return this->storeHost_ != nullptr;};
      void deleteStoreHost() { this->storeHost_ = nullptr;};
      inline string getStoreHost() const { DARABONBA_PTR_GET_DEFAULT(storeHost_, "") };
      inline Data& setStoreHost(string storeHost) { DARABONBA_PTR_SET_VALUE(storeHost_, storeHost) };


      // storeSize Field Functions 
      bool hasStoreSize() const { return this->storeSize_ != nullptr;};
      void deleteStoreSize() { this->storeSize_ = nullptr;};
      inline int32_t getStoreSize() const { DARABONBA_PTR_GET_DEFAULT(storeSize_, 0) };
      inline Data& setStoreSize(int32_t storeSize) { DARABONBA_PTR_SET_VALUE(storeSize_, storeSize) };


      // storeTimestamp Field Functions 
      bool hasStoreTimestamp() const { return this->storeTimestamp_ != nullptr;};
      void deleteStoreTimestamp() { this->storeTimestamp_ = nullptr;};
      inline int64_t getStoreTimestamp() const { DARABONBA_PTR_GET_DEFAULT(storeTimestamp_, 0L) };
      inline Data& setStoreTimestamp(int64_t storeTimestamp) { DARABONBA_PTR_SET_VALUE(storeTimestamp_, storeTimestamp) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
      inline Data& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    protected:
      // The string that is obtained after the message body is encrypted by using the Base 64 algorithm.
      shared_ptr<string> body_ {};
      // The cyclic redundancy check (CRC) value of the message body.
      shared_ptr<int32_t> bodyCRC_ {};
      // The information about the message body.
      shared_ptr<string> bodyStr_ {};
      // The producer instance that generated the message.
      shared_ptr<string> bornHost_ {};
      // The timestamp that indicates the point in time when the message was generated. Unit: milliseconds.
      shared_ptr<int64_t> bornTimestamp_ {};
      // The ID of the ApsaraMQ for RocketMQ Instance.
      shared_ptr<string> instanceId_ {};
      // The ID of the message.
      shared_ptr<string> msgId_ {};
      // The attributes of the message.
      shared_ptr<vector<Data::PropertyList>> propertyList_ {};
      // The number of retries that ApsaraMQ for RocketMQ performed to send the message to consumers.
      shared_ptr<int32_t> reconsumeTimes_ {};
      // The ApsaraMQ for RocketMQ broker that stores the message.
      shared_ptr<string> storeHost_ {};
      // The size of the message. Unit: KB.
      shared_ptr<int32_t> storeSize_ {};
      // The timestamp that indicates the point in time when the ApsaraMQ for RocketMQ broker stored the message. Unit: milliseconds.
      shared_ptr<int64_t> storeTimestamp_ {};
      // The topic to which the message belongs.
      shared_ptr<string> topic_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OnsMessageDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OnsMessageDetailResponseBody::Data) };
    inline OnsMessageDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OnsMessageDetailResponseBody::Data) };
    inline OnsMessageDetailResponseBody& setData(const OnsMessageDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OnsMessageDetailResponseBody& setData(OnsMessageDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsMessageDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<OnsMessageDetailResponseBody::Data> data_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
