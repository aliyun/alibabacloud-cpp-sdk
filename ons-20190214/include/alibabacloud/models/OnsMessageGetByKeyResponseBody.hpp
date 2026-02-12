// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSMESSAGEGETBYKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSMESSAGEGETBYKEYRESPONSEBODY_HPP_
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
  class OnsMessageGetByKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsMessageGetByKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsMessageGetByKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsMessageGetByKeyResponseBody() = default ;
    OnsMessageGetByKeyResponseBody(const OnsMessageGetByKeyResponseBody &) = default ;
    OnsMessageGetByKeyResponseBody(OnsMessageGetByKeyResponseBody &&) = default ;
    OnsMessageGetByKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsMessageGetByKeyResponseBody() = default ;
    OnsMessageGetByKeyResponseBody& operator=(const OnsMessageGetByKeyResponseBody &) = default ;
    OnsMessageGetByKeyResponseBody& operator=(OnsMessageGetByKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(OnsRestMessageDo, onsRestMessageDo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(OnsRestMessageDo, onsRestMessageDo_);
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
      class OnsRestMessageDo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OnsRestMessageDo& obj) { 
          DARABONBA_PTR_TO_JSON(BodyCRC, bodyCRC_);
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
        friend void from_json(const Darabonba::Json& j, OnsRestMessageDo& obj) { 
          DARABONBA_PTR_FROM_JSON(BodyCRC, bodyCRC_);
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
        OnsRestMessageDo() = default ;
        OnsRestMessageDo(const OnsRestMessageDo &) = default ;
        OnsRestMessageDo(OnsRestMessageDo &&) = default ;
        OnsRestMessageDo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OnsRestMessageDo() = default ;
        OnsRestMessageDo& operator=(const OnsRestMessageDo &) = default ;
        OnsRestMessageDo& operator=(OnsRestMessageDo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PropertyList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PropertyList& obj) { 
            DARABONBA_PTR_TO_JSON(MessageProperty, messageProperty_);
          };
          friend void from_json(const Darabonba::Json& j, PropertyList& obj) { 
            DARABONBA_PTR_FROM_JSON(MessageProperty, messageProperty_);
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
          class MessageProperty : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MessageProperty& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, MessageProperty& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            MessageProperty() = default ;
            MessageProperty(const MessageProperty &) = default ;
            MessageProperty(MessageProperty &&) = default ;
            MessageProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MessageProperty() = default ;
            MessageProperty& operator=(const MessageProperty &) = default ;
            MessageProperty& operator=(MessageProperty &&) = default ;
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
            inline MessageProperty& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline MessageProperty& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> name_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->messageProperty_ == nullptr; };
          // messageProperty Field Functions 
          bool hasMessageProperty() const { return this->messageProperty_ != nullptr;};
          void deleteMessageProperty() { this->messageProperty_ = nullptr;};
          inline const vector<PropertyList::MessageProperty> & getMessageProperty() const { DARABONBA_PTR_GET_CONST(messageProperty_, vector<PropertyList::MessageProperty>) };
          inline vector<PropertyList::MessageProperty> getMessageProperty() { DARABONBA_PTR_GET(messageProperty_, vector<PropertyList::MessageProperty>) };
          inline PropertyList& setMessageProperty(const vector<PropertyList::MessageProperty> & messageProperty) { DARABONBA_PTR_SET_VALUE(messageProperty_, messageProperty) };
          inline PropertyList& setMessageProperty(vector<PropertyList::MessageProperty> && messageProperty) { DARABONBA_PTR_SET_RVALUE(messageProperty_, messageProperty) };


        protected:
          shared_ptr<vector<PropertyList::MessageProperty>> messageProperty_ {};
        };

        virtual bool empty() const override { return this->bodyCRC_ == nullptr
        && this->bornHost_ == nullptr && this->bornTimestamp_ == nullptr && this->instanceId_ == nullptr && this->msgId_ == nullptr && this->propertyList_ == nullptr
        && this->reconsumeTimes_ == nullptr && this->storeHost_ == nullptr && this->storeSize_ == nullptr && this->storeTimestamp_ == nullptr && this->topic_ == nullptr; };
        // bodyCRC Field Functions 
        bool hasBodyCRC() const { return this->bodyCRC_ != nullptr;};
        void deleteBodyCRC() { this->bodyCRC_ = nullptr;};
        inline int32_t getBodyCRC() const { DARABONBA_PTR_GET_DEFAULT(bodyCRC_, 0) };
        inline OnsRestMessageDo& setBodyCRC(int32_t bodyCRC) { DARABONBA_PTR_SET_VALUE(bodyCRC_, bodyCRC) };


        // bornHost Field Functions 
        bool hasBornHost() const { return this->bornHost_ != nullptr;};
        void deleteBornHost() { this->bornHost_ = nullptr;};
        inline string getBornHost() const { DARABONBA_PTR_GET_DEFAULT(bornHost_, "") };
        inline OnsRestMessageDo& setBornHost(string bornHost) { DARABONBA_PTR_SET_VALUE(bornHost_, bornHost) };


        // bornTimestamp Field Functions 
        bool hasBornTimestamp() const { return this->bornTimestamp_ != nullptr;};
        void deleteBornTimestamp() { this->bornTimestamp_ = nullptr;};
        inline int64_t getBornTimestamp() const { DARABONBA_PTR_GET_DEFAULT(bornTimestamp_, 0L) };
        inline OnsRestMessageDo& setBornTimestamp(int64_t bornTimestamp) { DARABONBA_PTR_SET_VALUE(bornTimestamp_, bornTimestamp) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline OnsRestMessageDo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // msgId Field Functions 
        bool hasMsgId() const { return this->msgId_ != nullptr;};
        void deleteMsgId() { this->msgId_ = nullptr;};
        inline string getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
        inline OnsRestMessageDo& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


        // propertyList Field Functions 
        bool hasPropertyList() const { return this->propertyList_ != nullptr;};
        void deletePropertyList() { this->propertyList_ = nullptr;};
        inline const OnsRestMessageDo::PropertyList & getPropertyList() const { DARABONBA_PTR_GET_CONST(propertyList_, OnsRestMessageDo::PropertyList) };
        inline OnsRestMessageDo::PropertyList getPropertyList() { DARABONBA_PTR_GET(propertyList_, OnsRestMessageDo::PropertyList) };
        inline OnsRestMessageDo& setPropertyList(const OnsRestMessageDo::PropertyList & propertyList) { DARABONBA_PTR_SET_VALUE(propertyList_, propertyList) };
        inline OnsRestMessageDo& setPropertyList(OnsRestMessageDo::PropertyList && propertyList) { DARABONBA_PTR_SET_RVALUE(propertyList_, propertyList) };


        // reconsumeTimes Field Functions 
        bool hasReconsumeTimes() const { return this->reconsumeTimes_ != nullptr;};
        void deleteReconsumeTimes() { this->reconsumeTimes_ = nullptr;};
        inline int32_t getReconsumeTimes() const { DARABONBA_PTR_GET_DEFAULT(reconsumeTimes_, 0) };
        inline OnsRestMessageDo& setReconsumeTimes(int32_t reconsumeTimes) { DARABONBA_PTR_SET_VALUE(reconsumeTimes_, reconsumeTimes) };


        // storeHost Field Functions 
        bool hasStoreHost() const { return this->storeHost_ != nullptr;};
        void deleteStoreHost() { this->storeHost_ = nullptr;};
        inline string getStoreHost() const { DARABONBA_PTR_GET_DEFAULT(storeHost_, "") };
        inline OnsRestMessageDo& setStoreHost(string storeHost) { DARABONBA_PTR_SET_VALUE(storeHost_, storeHost) };


        // storeSize Field Functions 
        bool hasStoreSize() const { return this->storeSize_ != nullptr;};
        void deleteStoreSize() { this->storeSize_ = nullptr;};
        inline int32_t getStoreSize() const { DARABONBA_PTR_GET_DEFAULT(storeSize_, 0) };
        inline OnsRestMessageDo& setStoreSize(int32_t storeSize) { DARABONBA_PTR_SET_VALUE(storeSize_, storeSize) };


        // storeTimestamp Field Functions 
        bool hasStoreTimestamp() const { return this->storeTimestamp_ != nullptr;};
        void deleteStoreTimestamp() { this->storeTimestamp_ = nullptr;};
        inline int64_t getStoreTimestamp() const { DARABONBA_PTR_GET_DEFAULT(storeTimestamp_, 0L) };
        inline OnsRestMessageDo& setStoreTimestamp(int64_t storeTimestamp) { DARABONBA_PTR_SET_VALUE(storeTimestamp_, storeTimestamp) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
        inline OnsRestMessageDo& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      protected:
        shared_ptr<int32_t> bodyCRC_ {};
        shared_ptr<string> bornHost_ {};
        shared_ptr<int64_t> bornTimestamp_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> msgId_ {};
        shared_ptr<OnsRestMessageDo::PropertyList> propertyList_ {};
        shared_ptr<int32_t> reconsumeTimes_ {};
        shared_ptr<string> storeHost_ {};
        shared_ptr<int32_t> storeSize_ {};
        shared_ptr<int64_t> storeTimestamp_ {};
        shared_ptr<string> topic_ {};
      };

      virtual bool empty() const override { return this->onsRestMessageDo_ == nullptr; };
      // onsRestMessageDo Field Functions 
      bool hasOnsRestMessageDo() const { return this->onsRestMessageDo_ != nullptr;};
      void deleteOnsRestMessageDo() { this->onsRestMessageDo_ = nullptr;};
      inline const vector<Data::OnsRestMessageDo> & getOnsRestMessageDo() const { DARABONBA_PTR_GET_CONST(onsRestMessageDo_, vector<Data::OnsRestMessageDo>) };
      inline vector<Data::OnsRestMessageDo> getOnsRestMessageDo() { DARABONBA_PTR_GET(onsRestMessageDo_, vector<Data::OnsRestMessageDo>) };
      inline Data& setOnsRestMessageDo(const vector<Data::OnsRestMessageDo> & onsRestMessageDo) { DARABONBA_PTR_SET_VALUE(onsRestMessageDo_, onsRestMessageDo) };
      inline Data& setOnsRestMessageDo(vector<Data::OnsRestMessageDo> && onsRestMessageDo) { DARABONBA_PTR_SET_RVALUE(onsRestMessageDo_, onsRestMessageDo) };


    protected:
      shared_ptr<vector<Data::OnsRestMessageDo>> onsRestMessageDo_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OnsMessageGetByKeyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OnsMessageGetByKeyResponseBody::Data) };
    inline OnsMessageGetByKeyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OnsMessageGetByKeyResponseBody::Data) };
    inline OnsMessageGetByKeyResponseBody& setData(const OnsMessageGetByKeyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OnsMessageGetByKeyResponseBody& setData(OnsMessageGetByKeyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsMessageGetByKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<OnsMessageGetByKeyResponseBody::Data> data_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
