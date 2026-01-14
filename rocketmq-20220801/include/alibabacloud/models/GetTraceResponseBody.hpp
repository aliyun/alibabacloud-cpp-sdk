// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetTraceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetTraceResponseBody() = default ;
    GetTraceResponseBody(const GetTraceResponseBody &) = default ;
    GetTraceResponseBody(GetTraceResponseBody &&) = default ;
    GetTraceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceResponseBody() = default ;
    GetTraceResponseBody& operator=(const GetTraceResponseBody &) = default ;
    GetTraceResponseBody& operator=(GetTraceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(brokerInfo, brokerInfo_);
        DARABONBA_PTR_TO_JSON(consumerInfos, consumerInfos_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(messageInfo, messageInfo_);
        DARABONBA_PTR_TO_JSON(producerInfo, producerInfo_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(topicName, topicName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(brokerInfo, brokerInfo_);
        DARABONBA_PTR_FROM_JSON(consumerInfos, consumerInfos_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(messageInfo, messageInfo_);
        DARABONBA_PTR_FROM_JSON(producerInfo, producerInfo_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(topicName, topicName_);
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
      class ProducerInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProducerInfo& obj) { 
          DARABONBA_PTR_TO_JSON(records, records_);
        };
        friend void from_json(const Darabonba::Json& j, ProducerInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(records, records_);
        };
        ProducerInfo() = default ;
        ProducerInfo(const ProducerInfo &) = default ;
        ProducerInfo(ProducerInfo &&) = default ;
        ProducerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProducerInfo() = default ;
        ProducerInfo& operator=(const ProducerInfo &) = default ;
        ProducerInfo& operator=(ProducerInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Records : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Records& obj) { 
            DARABONBA_PTR_TO_JSON(arriveTime, arriveTime_);
            DARABONBA_PTR_TO_JSON(clientHost, clientHost_);
            DARABONBA_PTR_TO_JSON(dlqOriginMessageId, dlqOriginMessageId_);
            DARABONBA_PTR_TO_JSON(dlqOriginTopic, dlqOriginTopic_);
            DARABONBA_PTR_TO_JSON(messageSource, messageSource_);
            DARABONBA_PTR_TO_JSON(produceDuration, produceDuration_);
            DARABONBA_PTR_TO_JSON(produceStatus, produceStatus_);
            DARABONBA_PTR_TO_JSON(produceTime, produceTime_);
            DARABONBA_PTR_TO_JSON(recallTime, recallTime_);
            DARABONBA_PTR_TO_JSON(userName, userName_);
          };
          friend void from_json(const Darabonba::Json& j, Records& obj) { 
            DARABONBA_PTR_FROM_JSON(arriveTime, arriveTime_);
            DARABONBA_PTR_FROM_JSON(clientHost, clientHost_);
            DARABONBA_PTR_FROM_JSON(dlqOriginMessageId, dlqOriginMessageId_);
            DARABONBA_PTR_FROM_JSON(dlqOriginTopic, dlqOriginTopic_);
            DARABONBA_PTR_FROM_JSON(messageSource, messageSource_);
            DARABONBA_PTR_FROM_JSON(produceDuration, produceDuration_);
            DARABONBA_PTR_FROM_JSON(produceStatus, produceStatus_);
            DARABONBA_PTR_FROM_JSON(produceTime, produceTime_);
            DARABONBA_PTR_FROM_JSON(recallTime, recallTime_);
            DARABONBA_PTR_FROM_JSON(userName, userName_);
          };
          Records() = default ;
          Records(const Records &) = default ;
          Records(Records &&) = default ;
          Records(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Records() = default ;
          Records& operator=(const Records &) = default ;
          Records& operator=(Records &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->arriveTime_ == nullptr
        && this->clientHost_ == nullptr && this->dlqOriginMessageId_ == nullptr && this->dlqOriginTopic_ == nullptr && this->messageSource_ == nullptr && this->produceDuration_ == nullptr
        && this->produceStatus_ == nullptr && this->produceTime_ == nullptr && this->recallTime_ == nullptr && this->userName_ == nullptr; };
          // arriveTime Field Functions 
          bool hasArriveTime() const { return this->arriveTime_ != nullptr;};
          void deleteArriveTime() { this->arriveTime_ = nullptr;};
          inline string getArriveTime() const { DARABONBA_PTR_GET_DEFAULT(arriveTime_, "") };
          inline Records& setArriveTime(string arriveTime) { DARABONBA_PTR_SET_VALUE(arriveTime_, arriveTime) };


          // clientHost Field Functions 
          bool hasClientHost() const { return this->clientHost_ != nullptr;};
          void deleteClientHost() { this->clientHost_ = nullptr;};
          inline string getClientHost() const { DARABONBA_PTR_GET_DEFAULT(clientHost_, "") };
          inline Records& setClientHost(string clientHost) { DARABONBA_PTR_SET_VALUE(clientHost_, clientHost) };


          // dlqOriginMessageId Field Functions 
          bool hasDlqOriginMessageId() const { return this->dlqOriginMessageId_ != nullptr;};
          void deleteDlqOriginMessageId() { this->dlqOriginMessageId_ = nullptr;};
          inline string getDlqOriginMessageId() const { DARABONBA_PTR_GET_DEFAULT(dlqOriginMessageId_, "") };
          inline Records& setDlqOriginMessageId(string dlqOriginMessageId) { DARABONBA_PTR_SET_VALUE(dlqOriginMessageId_, dlqOriginMessageId) };


          // dlqOriginTopic Field Functions 
          bool hasDlqOriginTopic() const { return this->dlqOriginTopic_ != nullptr;};
          void deleteDlqOriginTopic() { this->dlqOriginTopic_ = nullptr;};
          inline string getDlqOriginTopic() const { DARABONBA_PTR_GET_DEFAULT(dlqOriginTopic_, "") };
          inline Records& setDlqOriginTopic(string dlqOriginTopic) { DARABONBA_PTR_SET_VALUE(dlqOriginTopic_, dlqOriginTopic) };


          // messageSource Field Functions 
          bool hasMessageSource() const { return this->messageSource_ != nullptr;};
          void deleteMessageSource() { this->messageSource_ = nullptr;};
          inline string getMessageSource() const { DARABONBA_PTR_GET_DEFAULT(messageSource_, "") };
          inline Records& setMessageSource(string messageSource) { DARABONBA_PTR_SET_VALUE(messageSource_, messageSource) };


          // produceDuration Field Functions 
          bool hasProduceDuration() const { return this->produceDuration_ != nullptr;};
          void deleteProduceDuration() { this->produceDuration_ = nullptr;};
          inline int64_t getProduceDuration() const { DARABONBA_PTR_GET_DEFAULT(produceDuration_, 0L) };
          inline Records& setProduceDuration(int64_t produceDuration) { DARABONBA_PTR_SET_VALUE(produceDuration_, produceDuration) };


          // produceStatus Field Functions 
          bool hasProduceStatus() const { return this->produceStatus_ != nullptr;};
          void deleteProduceStatus() { this->produceStatus_ = nullptr;};
          inline string getProduceStatus() const { DARABONBA_PTR_GET_DEFAULT(produceStatus_, "") };
          inline Records& setProduceStatus(string produceStatus) { DARABONBA_PTR_SET_VALUE(produceStatus_, produceStatus) };


          // produceTime Field Functions 
          bool hasProduceTime() const { return this->produceTime_ != nullptr;};
          void deleteProduceTime() { this->produceTime_ = nullptr;};
          inline string getProduceTime() const { DARABONBA_PTR_GET_DEFAULT(produceTime_, "") };
          inline Records& setProduceTime(string produceTime) { DARABONBA_PTR_SET_VALUE(produceTime_, produceTime) };


          // recallTime Field Functions 
          bool hasRecallTime() const { return this->recallTime_ != nullptr;};
          void deleteRecallTime() { this->recallTime_ = nullptr;};
          inline string getRecallTime() const { DARABONBA_PTR_GET_DEFAULT(recallTime_, "") };
          inline Records& setRecallTime(string recallTime) { DARABONBA_PTR_SET_VALUE(recallTime_, recallTime) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline Records& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          // Arrive time.
          shared_ptr<string> arriveTime_ {};
          // Client host.
          shared_ptr<string> clientHost_ {};
          // Dead-letter queue message ID.
          shared_ptr<string> dlqOriginMessageId_ {};
          // Dead-letter queue topic.
          shared_ptr<string> dlqOriginTopic_ {};
          // Message source.
          shared_ptr<string> messageSource_ {};
          // Producer duration.
          shared_ptr<int64_t> produceDuration_ {};
          // Producer status.
          shared_ptr<string> produceStatus_ {};
          // Producer time.
          shared_ptr<string> produceTime_ {};
          // The time when the scheduled message withdrawal request was initiated
          shared_ptr<string> recallTime_ {};
          // Producer name.
          shared_ptr<string> userName_ {};
        };

        virtual bool empty() const override { return this->records_ == nullptr; };
        // records Field Functions 
        bool hasRecords() const { return this->records_ != nullptr;};
        void deleteRecords() { this->records_ = nullptr;};
        inline const vector<ProducerInfo::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<ProducerInfo::Records>) };
        inline vector<ProducerInfo::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<ProducerInfo::Records>) };
        inline ProducerInfo& setRecords(const vector<ProducerInfo::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
        inline ProducerInfo& setRecords(vector<ProducerInfo::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      protected:
        // The production records.
        shared_ptr<vector<ProducerInfo::Records>> records_ {};
      };

      class MessageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MessageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(body, body_);
          DARABONBA_PTR_TO_JSON(bornHost, bornHost_);
          DARABONBA_PTR_TO_JSON(bornTime, bornTime_);
          DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(liteTopicName, liteTopicName_);
          DARABONBA_PTR_TO_JSON(messageGroup, messageGroup_);
          DARABONBA_PTR_TO_JSON(messageId, messageId_);
          DARABONBA_PTR_TO_JSON(messageKeys, messageKeys_);
          DARABONBA_PTR_TO_JSON(messageTag, messageTag_);
          DARABONBA_PTR_TO_JSON(messageType, messageType_);
          DARABONBA_PTR_TO_JSON(regionId, regionId_);
          DARABONBA_PTR_TO_JSON(storeHost, storeHost_);
          DARABONBA_PTR_TO_JSON(storeTime, storeTime_);
          DARABONBA_PTR_TO_JSON(topicName, topicName_);
          DARABONBA_PTR_TO_JSON(transactionId, transactionId_);
          DARABONBA_PTR_TO_JSON(userProperties, userProperties_);
        };
        friend void from_json(const Darabonba::Json& j, MessageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(body, body_);
          DARABONBA_PTR_FROM_JSON(bornHost, bornHost_);
          DARABONBA_PTR_FROM_JSON(bornTime, bornTime_);
          DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(liteTopicName, liteTopicName_);
          DARABONBA_PTR_FROM_JSON(messageGroup, messageGroup_);
          DARABONBA_PTR_FROM_JSON(messageId, messageId_);
          DARABONBA_PTR_FROM_JSON(messageKeys, messageKeys_);
          DARABONBA_PTR_FROM_JSON(messageTag, messageTag_);
          DARABONBA_PTR_FROM_JSON(messageType, messageType_);
          DARABONBA_PTR_FROM_JSON(regionId, regionId_);
          DARABONBA_PTR_FROM_JSON(storeHost, storeHost_);
          DARABONBA_PTR_FROM_JSON(storeTime, storeTime_);
          DARABONBA_PTR_FROM_JSON(topicName, topicName_);
          DARABONBA_PTR_FROM_JSON(transactionId, transactionId_);
          DARABONBA_PTR_FROM_JSON(userProperties, userProperties_);
        };
        MessageInfo() = default ;
        MessageInfo(const MessageInfo &) = default ;
        MessageInfo(MessageInfo &&) = default ;
        MessageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MessageInfo() = default ;
        MessageInfo& operator=(const MessageInfo &) = default ;
        MessageInfo& operator=(MessageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->body_ == nullptr
        && this->bornHost_ == nullptr && this->bornTime_ == nullptr && this->instanceId_ == nullptr && this->liteTopicName_ == nullptr && this->messageGroup_ == nullptr
        && this->messageId_ == nullptr && this->messageKeys_ == nullptr && this->messageTag_ == nullptr && this->messageType_ == nullptr && this->regionId_ == nullptr
        && this->storeHost_ == nullptr && this->storeTime_ == nullptr && this->topicName_ == nullptr && this->transactionId_ == nullptr && this->userProperties_ == nullptr; };
        // body Field Functions 
        bool hasBody() const { return this->body_ != nullptr;};
        void deleteBody() { this->body_ = nullptr;};
        inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
        inline MessageInfo& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


        // bornHost Field Functions 
        bool hasBornHost() const { return this->bornHost_ != nullptr;};
        void deleteBornHost() { this->bornHost_ = nullptr;};
        inline string getBornHost() const { DARABONBA_PTR_GET_DEFAULT(bornHost_, "") };
        inline MessageInfo& setBornHost(string bornHost) { DARABONBA_PTR_SET_VALUE(bornHost_, bornHost) };


        // bornTime Field Functions 
        bool hasBornTime() const { return this->bornTime_ != nullptr;};
        void deleteBornTime() { this->bornTime_ = nullptr;};
        inline string getBornTime() const { DARABONBA_PTR_GET_DEFAULT(bornTime_, "") };
        inline MessageInfo& setBornTime(string bornTime) { DARABONBA_PTR_SET_VALUE(bornTime_, bornTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline MessageInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // liteTopicName Field Functions 
        bool hasLiteTopicName() const { return this->liteTopicName_ != nullptr;};
        void deleteLiteTopicName() { this->liteTopicName_ = nullptr;};
        inline string getLiteTopicName() const { DARABONBA_PTR_GET_DEFAULT(liteTopicName_, "") };
        inline MessageInfo& setLiteTopicName(string liteTopicName) { DARABONBA_PTR_SET_VALUE(liteTopicName_, liteTopicName) };


        // messageGroup Field Functions 
        bool hasMessageGroup() const { return this->messageGroup_ != nullptr;};
        void deleteMessageGroup() { this->messageGroup_ = nullptr;};
        inline string getMessageGroup() const { DARABONBA_PTR_GET_DEFAULT(messageGroup_, "") };
        inline MessageInfo& setMessageGroup(string messageGroup) { DARABONBA_PTR_SET_VALUE(messageGroup_, messageGroup) };


        // messageId Field Functions 
        bool hasMessageId() const { return this->messageId_ != nullptr;};
        void deleteMessageId() { this->messageId_ = nullptr;};
        inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
        inline MessageInfo& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


        // messageKeys Field Functions 
        bool hasMessageKeys() const { return this->messageKeys_ != nullptr;};
        void deleteMessageKeys() { this->messageKeys_ = nullptr;};
        inline const vector<string> & getMessageKeys() const { DARABONBA_PTR_GET_CONST(messageKeys_, vector<string>) };
        inline vector<string> getMessageKeys() { DARABONBA_PTR_GET(messageKeys_, vector<string>) };
        inline MessageInfo& setMessageKeys(const vector<string> & messageKeys) { DARABONBA_PTR_SET_VALUE(messageKeys_, messageKeys) };
        inline MessageInfo& setMessageKeys(vector<string> && messageKeys) { DARABONBA_PTR_SET_RVALUE(messageKeys_, messageKeys) };


        // messageTag Field Functions 
        bool hasMessageTag() const { return this->messageTag_ != nullptr;};
        void deleteMessageTag() { this->messageTag_ = nullptr;};
        inline string getMessageTag() const { DARABONBA_PTR_GET_DEFAULT(messageTag_, "") };
        inline MessageInfo& setMessageTag(string messageTag) { DARABONBA_PTR_SET_VALUE(messageTag_, messageTag) };


        // messageType Field Functions 
        bool hasMessageType() const { return this->messageType_ != nullptr;};
        void deleteMessageType() { this->messageType_ = nullptr;};
        inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
        inline MessageInfo& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline MessageInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // storeHost Field Functions 
        bool hasStoreHost() const { return this->storeHost_ != nullptr;};
        void deleteStoreHost() { this->storeHost_ = nullptr;};
        inline string getStoreHost() const { DARABONBA_PTR_GET_DEFAULT(storeHost_, "") };
        inline MessageInfo& setStoreHost(string storeHost) { DARABONBA_PTR_SET_VALUE(storeHost_, storeHost) };


        // storeTime Field Functions 
        bool hasStoreTime() const { return this->storeTime_ != nullptr;};
        void deleteStoreTime() { this->storeTime_ = nullptr;};
        inline string getStoreTime() const { DARABONBA_PTR_GET_DEFAULT(storeTime_, "") };
        inline MessageInfo& setStoreTime(string storeTime) { DARABONBA_PTR_SET_VALUE(storeTime_, storeTime) };


        // topicName Field Functions 
        bool hasTopicName() const { return this->topicName_ != nullptr;};
        void deleteTopicName() { this->topicName_ = nullptr;};
        inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
        inline MessageInfo& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


        // transactionId Field Functions 
        bool hasTransactionId() const { return this->transactionId_ != nullptr;};
        void deleteTransactionId() { this->transactionId_ = nullptr;};
        inline string getTransactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
        inline MessageInfo& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


        // userProperties Field Functions 
        bool hasUserProperties() const { return this->userProperties_ != nullptr;};
        void deleteUserProperties() { this->userProperties_ = nullptr;};
        inline const map<string, string> & getUserProperties() const { DARABONBA_PTR_GET_CONST(userProperties_, map<string, string>) };
        inline map<string, string> getUserProperties() { DARABONBA_PTR_GET(userProperties_, map<string, string>) };
        inline MessageInfo& setUserProperties(const map<string, string> & userProperties) { DARABONBA_PTR_SET_VALUE(userProperties_, userProperties) };
        inline MessageInfo& setUserProperties(map<string, string> && userProperties) { DARABONBA_PTR_SET_RVALUE(userProperties_, userProperties) };


      protected:
        // Message body.
        shared_ptr<string> body_ {};
        // Message born host.
        shared_ptr<string> bornHost_ {};
        // Message born time.
        shared_ptr<string> bornTime_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> liteTopicName_ {};
        // Message grpup.
        shared_ptr<string> messageGroup_ {};
        // The message ID.
        shared_ptr<string> messageId_ {};
        // Message keys.
        shared_ptr<vector<string>> messageKeys_ {};
        // Message tag.
        shared_ptr<string> messageTag_ {};
        // Message type.
        shared_ptr<string> messageType_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // Message store host.
        shared_ptr<string> storeHost_ {};
        // Message store time.
        shared_ptr<string> storeTime_ {};
        // The topic name.
        shared_ptr<string> topicName_ {};
        // Message transaction id.
        shared_ptr<string> transactionId_ {};
        // Message user properties.
        shared_ptr<map<string, string>> userProperties_ {};
      };

      class ConsumerInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConsumerInfos& obj) { 
          DARABONBA_PTR_TO_JSON(consumeStatus, consumeStatus_);
          DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
          DARABONBA_PTR_TO_JSON(deadLetterInfo, deadLetterInfo_);
          DARABONBA_PTR_TO_JSON(deadMessage, deadMessage_);
          DARABONBA_PTR_TO_JSON(records, records_);
        };
        friend void from_json(const Darabonba::Json& j, ConsumerInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(consumeStatus, consumeStatus_);
          DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
          DARABONBA_PTR_FROM_JSON(deadLetterInfo, deadLetterInfo_);
          DARABONBA_PTR_FROM_JSON(deadMessage, deadMessage_);
          DARABONBA_PTR_FROM_JSON(records, records_);
        };
        ConsumerInfos() = default ;
        ConsumerInfos(const ConsumerInfos &) = default ;
        ConsumerInfos(ConsumerInfos &&) = default ;
        ConsumerInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConsumerInfos() = default ;
        ConsumerInfos& operator=(const ConsumerInfos &) = default ;
        ConsumerInfos& operator=(ConsumerInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Records : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Records& obj) { 
            DARABONBA_PTR_TO_JSON(clientHost, clientHost_);
            DARABONBA_PTR_TO_JSON(consumeStatus, consumeStatus_);
            DARABONBA_PTR_TO_JSON(fifoEnable, fifoEnable_);
            DARABONBA_PTR_TO_JSON(operations, operations_);
            DARABONBA_PTR_TO_JSON(popCk, popCk_);
            DARABONBA_PTR_TO_JSON(userName, userName_);
          };
          friend void from_json(const Darabonba::Json& j, Records& obj) { 
            DARABONBA_PTR_FROM_JSON(clientHost, clientHost_);
            DARABONBA_PTR_FROM_JSON(consumeStatus, consumeStatus_);
            DARABONBA_PTR_FROM_JSON(fifoEnable, fifoEnable_);
            DARABONBA_PTR_FROM_JSON(operations, operations_);
            DARABONBA_PTR_FROM_JSON(popCk, popCk_);
            DARABONBA_PTR_FROM_JSON(userName, userName_);
          };
          Records() = default ;
          Records(const Records &) = default ;
          Records(Records &&) = default ;
          Records(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Records() = default ;
          Records& operator=(const Records &) = default ;
          Records& operator=(Records &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Operations : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Operations& obj) { 
              DARABONBA_PTR_TO_JSON(deadMessage, deadMessage_);
              DARABONBA_PTR_TO_JSON(invisibleTime, invisibleTime_);
              DARABONBA_PTR_TO_JSON(operateTime, operateTime_);
              DARABONBA_PTR_TO_JSON(operateType, operateType_);
            };
            friend void from_json(const Darabonba::Json& j, Operations& obj) { 
              DARABONBA_PTR_FROM_JSON(deadMessage, deadMessage_);
              DARABONBA_PTR_FROM_JSON(invisibleTime, invisibleTime_);
              DARABONBA_PTR_FROM_JSON(operateTime, operateTime_);
              DARABONBA_PTR_FROM_JSON(operateType, operateType_);
            };
            Operations() = default ;
            Operations(const Operations &) = default ;
            Operations(Operations &&) = default ;
            Operations(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Operations() = default ;
            Operations& operator=(const Operations &) = default ;
            Operations& operator=(Operations &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->deadMessage_ == nullptr
        && this->invisibleTime_ == nullptr && this->operateTime_ == nullptr && this->operateType_ == nullptr; };
            // deadMessage Field Functions 
            bool hasDeadMessage() const { return this->deadMessage_ != nullptr;};
            void deleteDeadMessage() { this->deadMessage_ = nullptr;};
            inline bool getDeadMessage() const { DARABONBA_PTR_GET_DEFAULT(deadMessage_, false) };
            inline Operations& setDeadMessage(bool deadMessage) { DARABONBA_PTR_SET_VALUE(deadMessage_, deadMessage) };


            // invisibleTime Field Functions 
            bool hasInvisibleTime() const { return this->invisibleTime_ != nullptr;};
            void deleteInvisibleTime() { this->invisibleTime_ = nullptr;};
            inline int64_t getInvisibleTime() const { DARABONBA_PTR_GET_DEFAULT(invisibleTime_, 0L) };
            inline Operations& setInvisibleTime(int64_t invisibleTime) { DARABONBA_PTR_SET_VALUE(invisibleTime_, invisibleTime) };


            // operateTime Field Functions 
            bool hasOperateTime() const { return this->operateTime_ != nullptr;};
            void deleteOperateTime() { this->operateTime_ = nullptr;};
            inline string getOperateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
            inline Operations& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


            // operateType Field Functions 
            bool hasOperateType() const { return this->operateType_ != nullptr;};
            void deleteOperateType() { this->operateType_ = nullptr;};
            inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
            inline Operations& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


          protected:
            // Whether it is a dead letter message.
            shared_ptr<bool> deadMessage_ {};
            // Invisible time, milliseconds.
            shared_ptr<int64_t> invisibleTime_ {};
            // Operation time.
            shared_ptr<string> operateTime_ {};
            // Operation type.
            shared_ptr<string> operateType_ {};
          };

          virtual bool empty() const override { return this->clientHost_ == nullptr
        && this->consumeStatus_ == nullptr && this->fifoEnable_ == nullptr && this->operations_ == nullptr && this->popCk_ == nullptr && this->userName_ == nullptr; };
          // clientHost Field Functions 
          bool hasClientHost() const { return this->clientHost_ != nullptr;};
          void deleteClientHost() { this->clientHost_ = nullptr;};
          inline string getClientHost() const { DARABONBA_PTR_GET_DEFAULT(clientHost_, "") };
          inline Records& setClientHost(string clientHost) { DARABONBA_PTR_SET_VALUE(clientHost_, clientHost) };


          // consumeStatus Field Functions 
          bool hasConsumeStatus() const { return this->consumeStatus_ != nullptr;};
          void deleteConsumeStatus() { this->consumeStatus_ = nullptr;};
          inline string getConsumeStatus() const { DARABONBA_PTR_GET_DEFAULT(consumeStatus_, "") };
          inline Records& setConsumeStatus(string consumeStatus) { DARABONBA_PTR_SET_VALUE(consumeStatus_, consumeStatus) };


          // fifoEnable Field Functions 
          bool hasFifoEnable() const { return this->fifoEnable_ != nullptr;};
          void deleteFifoEnable() { this->fifoEnable_ = nullptr;};
          inline bool getFifoEnable() const { DARABONBA_PTR_GET_DEFAULT(fifoEnable_, false) };
          inline Records& setFifoEnable(bool fifoEnable) { DARABONBA_PTR_SET_VALUE(fifoEnable_, fifoEnable) };


          // operations Field Functions 
          bool hasOperations() const { return this->operations_ != nullptr;};
          void deleteOperations() { this->operations_ = nullptr;};
          inline const vector<Records::Operations> & getOperations() const { DARABONBA_PTR_GET_CONST(operations_, vector<Records::Operations>) };
          inline vector<Records::Operations> getOperations() { DARABONBA_PTR_GET(operations_, vector<Records::Operations>) };
          inline Records& setOperations(const vector<Records::Operations> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
          inline Records& setOperations(vector<Records::Operations> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


          // popCk Field Functions 
          bool hasPopCk() const { return this->popCk_ != nullptr;};
          void deletePopCk() { this->popCk_ = nullptr;};
          inline string getPopCk() const { DARABONBA_PTR_GET_DEFAULT(popCk_, "") };
          inline Records& setPopCk(string popCk) { DARABONBA_PTR_SET_VALUE(popCk_, popCk) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline Records& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          // Client host.
          shared_ptr<string> clientHost_ {};
          // Consume status.
          shared_ptr<string> consumeStatus_ {};
          // Whether to consume fifo.
          shared_ptr<bool> fifoEnable_ {};
          // Operation list.
          shared_ptr<vector<Records::Operations>> operations_ {};
          // POP_CK
          shared_ptr<string> popCk_ {};
          // Consumer name.
          shared_ptr<string> userName_ {};
        };

        class DeadLetterInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DeadLetterInfo& obj) { 
            DARABONBA_PTR_TO_JSON(messageId, messageId_);
            DARABONBA_PTR_TO_JSON(toDlqTime, toDlqTime_);
            DARABONBA_PTR_TO_JSON(topicName, topicName_);
          };
          friend void from_json(const Darabonba::Json& j, DeadLetterInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(messageId, messageId_);
            DARABONBA_PTR_FROM_JSON(toDlqTime, toDlqTime_);
            DARABONBA_PTR_FROM_JSON(topicName, topicName_);
          };
          DeadLetterInfo() = default ;
          DeadLetterInfo(const DeadLetterInfo &) = default ;
          DeadLetterInfo(DeadLetterInfo &&) = default ;
          DeadLetterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DeadLetterInfo() = default ;
          DeadLetterInfo& operator=(const DeadLetterInfo &) = default ;
          DeadLetterInfo& operator=(DeadLetterInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->messageId_ == nullptr
        && this->toDlqTime_ == nullptr && this->topicName_ == nullptr; };
          // messageId Field Functions 
          bool hasMessageId() const { return this->messageId_ != nullptr;};
          void deleteMessageId() { this->messageId_ = nullptr;};
          inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
          inline DeadLetterInfo& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


          // toDlqTime Field Functions 
          bool hasToDlqTime() const { return this->toDlqTime_ != nullptr;};
          void deleteToDlqTime() { this->toDlqTime_ = nullptr;};
          inline string getToDlqTime() const { DARABONBA_PTR_GET_DEFAULT(toDlqTime_, "") };
          inline DeadLetterInfo& setToDlqTime(string toDlqTime) { DARABONBA_PTR_SET_VALUE(toDlqTime_, toDlqTime) };


          // topicName Field Functions 
          bool hasTopicName() const { return this->topicName_ != nullptr;};
          void deleteTopicName() { this->topicName_ = nullptr;};
          inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
          inline DeadLetterInfo& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


        protected:
          // MessageId.
          shared_ptr<string> messageId_ {};
          // Arrival time in the dead letter queue.
          shared_ptr<string> toDlqTime_ {};
          // The topic name.
          shared_ptr<string> topicName_ {};
        };

        virtual bool empty() const override { return this->consumeStatus_ == nullptr
        && this->consumerGroupId_ == nullptr && this->deadLetterInfo_ == nullptr && this->deadMessage_ == nullptr && this->records_ == nullptr; };
        // consumeStatus Field Functions 
        bool hasConsumeStatus() const { return this->consumeStatus_ != nullptr;};
        void deleteConsumeStatus() { this->consumeStatus_ = nullptr;};
        inline string getConsumeStatus() const { DARABONBA_PTR_GET_DEFAULT(consumeStatus_, "") };
        inline ConsumerInfos& setConsumeStatus(string consumeStatus) { DARABONBA_PTR_SET_VALUE(consumeStatus_, consumeStatus) };


        // consumerGroupId Field Functions 
        bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
        void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
        inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
        inline ConsumerInfos& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


        // deadLetterInfo Field Functions 
        bool hasDeadLetterInfo() const { return this->deadLetterInfo_ != nullptr;};
        void deleteDeadLetterInfo() { this->deadLetterInfo_ = nullptr;};
        inline const ConsumerInfos::DeadLetterInfo & getDeadLetterInfo() const { DARABONBA_PTR_GET_CONST(deadLetterInfo_, ConsumerInfos::DeadLetterInfo) };
        inline ConsumerInfos::DeadLetterInfo getDeadLetterInfo() { DARABONBA_PTR_GET(deadLetterInfo_, ConsumerInfos::DeadLetterInfo) };
        inline ConsumerInfos& setDeadLetterInfo(const ConsumerInfos::DeadLetterInfo & deadLetterInfo) { DARABONBA_PTR_SET_VALUE(deadLetterInfo_, deadLetterInfo) };
        inline ConsumerInfos& setDeadLetterInfo(ConsumerInfos::DeadLetterInfo && deadLetterInfo) { DARABONBA_PTR_SET_RVALUE(deadLetterInfo_, deadLetterInfo) };


        // deadMessage Field Functions 
        bool hasDeadMessage() const { return this->deadMessage_ != nullptr;};
        void deleteDeadMessage() { this->deadMessage_ = nullptr;};
        inline bool getDeadMessage() const { DARABONBA_PTR_GET_DEFAULT(deadMessage_, false) };
        inline ConsumerInfos& setDeadMessage(bool deadMessage) { DARABONBA_PTR_SET_VALUE(deadMessage_, deadMessage) };


        // records Field Functions 
        bool hasRecords() const { return this->records_ != nullptr;};
        void deleteRecords() { this->records_ = nullptr;};
        inline const vector<ConsumerInfos::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<ConsumerInfos::Records>) };
        inline vector<ConsumerInfos::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<ConsumerInfos::Records>) };
        inline ConsumerInfos& setRecords(const vector<ConsumerInfos::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
        inline ConsumerInfos& setRecords(vector<ConsumerInfos::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      protected:
        // Consume status.
        shared_ptr<string> consumeStatus_ {};
        // The consumer group ID.
        shared_ptr<string> consumerGroupId_ {};
        // Dead letter info.
        shared_ptr<ConsumerInfos::DeadLetterInfo> deadLetterInfo_ {};
        // Whether it is a dead letter message.
        shared_ptr<bool> deadMessage_ {};
        // Consumer record list.
        shared_ptr<vector<ConsumerInfos::Records>> records_ {};
      };

      class BrokerInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BrokerInfo& obj) { 
          DARABONBA_PTR_TO_JSON(delayStatus, delayStatus_);
          DARABONBA_PTR_TO_JSON(operations, operations_);
          DARABONBA_PTR_TO_JSON(presetDelayTime, presetDelayTime_);
          DARABONBA_PTR_TO_JSON(recallResult, recallResult_);
        };
        friend void from_json(const Darabonba::Json& j, BrokerInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(delayStatus, delayStatus_);
          DARABONBA_PTR_FROM_JSON(operations, operations_);
          DARABONBA_PTR_FROM_JSON(presetDelayTime, presetDelayTime_);
          DARABONBA_PTR_FROM_JSON(recallResult, recallResult_);
        };
        BrokerInfo() = default ;
        BrokerInfo(const BrokerInfo &) = default ;
        BrokerInfo(BrokerInfo &&) = default ;
        BrokerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BrokerInfo() = default ;
        BrokerInfo& operator=(const BrokerInfo &) = default ;
        BrokerInfo& operator=(BrokerInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Operations : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Operations& obj) { 
            DARABONBA_PTR_TO_JSON(operateTime, operateTime_);
            DARABONBA_PTR_TO_JSON(operateType, operateType_);
          };
          friend void from_json(const Darabonba::Json& j, Operations& obj) { 
            DARABONBA_PTR_FROM_JSON(operateTime, operateTime_);
            DARABONBA_PTR_FROM_JSON(operateType, operateType_);
          };
          Operations() = default ;
          Operations(const Operations &) = default ;
          Operations(Operations &&) = default ;
          Operations(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Operations() = default ;
          Operations& operator=(const Operations &) = default ;
          Operations& operator=(Operations &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->operateTime_ == nullptr
        && this->operateType_ == nullptr; };
          // operateTime Field Functions 
          bool hasOperateTime() const { return this->operateTime_ != nullptr;};
          void deleteOperateTime() { this->operateTime_ = nullptr;};
          inline string getOperateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
          inline Operations& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


          // operateType Field Functions 
          bool hasOperateType() const { return this->operateType_ != nullptr;};
          void deleteOperateType() { this->operateType_ = nullptr;};
          inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
          inline Operations& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


        protected:
          // Operation time.
          shared_ptr<string> operateTime_ {};
          // Operation type.
          shared_ptr<string> operateType_ {};
        };

        virtual bool empty() const override { return this->delayStatus_ == nullptr
        && this->operations_ == nullptr && this->presetDelayTime_ == nullptr && this->recallResult_ == nullptr; };
        // delayStatus Field Functions 
        bool hasDelayStatus() const { return this->delayStatus_ != nullptr;};
        void deleteDelayStatus() { this->delayStatus_ = nullptr;};
        inline string getDelayStatus() const { DARABONBA_PTR_GET_DEFAULT(delayStatus_, "") };
        inline BrokerInfo& setDelayStatus(string delayStatus) { DARABONBA_PTR_SET_VALUE(delayStatus_, delayStatus) };


        // operations Field Functions 
        bool hasOperations() const { return this->operations_ != nullptr;};
        void deleteOperations() { this->operations_ = nullptr;};
        inline const vector<BrokerInfo::Operations> & getOperations() const { DARABONBA_PTR_GET_CONST(operations_, vector<BrokerInfo::Operations>) };
        inline vector<BrokerInfo::Operations> getOperations() { DARABONBA_PTR_GET(operations_, vector<BrokerInfo::Operations>) };
        inline BrokerInfo& setOperations(const vector<BrokerInfo::Operations> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
        inline BrokerInfo& setOperations(vector<BrokerInfo::Operations> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


        // presetDelayTime Field Functions 
        bool hasPresetDelayTime() const { return this->presetDelayTime_ != nullptr;};
        void deletePresetDelayTime() { this->presetDelayTime_ = nullptr;};
        inline string getPresetDelayTime() const { DARABONBA_PTR_GET_DEFAULT(presetDelayTime_, "") };
        inline BrokerInfo& setPresetDelayTime(string presetDelayTime) { DARABONBA_PTR_SET_VALUE(presetDelayTime_, presetDelayTime) };


        // recallResult Field Functions 
        bool hasRecallResult() const { return this->recallResult_ != nullptr;};
        void deleteRecallResult() { this->recallResult_ = nullptr;};
        inline string getRecallResult() const { DARABONBA_PTR_GET_DEFAULT(recallResult_, "") };
        inline BrokerInfo& setRecallResult(string recallResult) { DARABONBA_PTR_SET_VALUE(recallResult_, recallResult) };


      protected:
        // Delay status.
        shared_ptr<string> delayStatus_ {};
        // Operation list.
        shared_ptr<vector<BrokerInfo::Operations>> operations_ {};
        // Preset delivery time.
        shared_ptr<string> presetDelayTime_ {};
        // Withdraw scheduled message request result
        shared_ptr<string> recallResult_ {};
      };

      virtual bool empty() const override { return this->brokerInfo_ == nullptr
        && this->consumerInfos_ == nullptr && this->instanceId_ == nullptr && this->messageInfo_ == nullptr && this->producerInfo_ == nullptr && this->regionId_ == nullptr
        && this->topicName_ == nullptr; };
      // brokerInfo Field Functions 
      bool hasBrokerInfo() const { return this->brokerInfo_ != nullptr;};
      void deleteBrokerInfo() { this->brokerInfo_ = nullptr;};
      inline const Data::BrokerInfo & getBrokerInfo() const { DARABONBA_PTR_GET_CONST(brokerInfo_, Data::BrokerInfo) };
      inline Data::BrokerInfo getBrokerInfo() { DARABONBA_PTR_GET(brokerInfo_, Data::BrokerInfo) };
      inline Data& setBrokerInfo(const Data::BrokerInfo & brokerInfo) { DARABONBA_PTR_SET_VALUE(brokerInfo_, brokerInfo) };
      inline Data& setBrokerInfo(Data::BrokerInfo && brokerInfo) { DARABONBA_PTR_SET_RVALUE(brokerInfo_, brokerInfo) };


      // consumerInfos Field Functions 
      bool hasConsumerInfos() const { return this->consumerInfos_ != nullptr;};
      void deleteConsumerInfos() { this->consumerInfos_ = nullptr;};
      inline const vector<Data::ConsumerInfos> & getConsumerInfos() const { DARABONBA_PTR_GET_CONST(consumerInfos_, vector<Data::ConsumerInfos>) };
      inline vector<Data::ConsumerInfos> getConsumerInfos() { DARABONBA_PTR_GET(consumerInfos_, vector<Data::ConsumerInfos>) };
      inline Data& setConsumerInfos(const vector<Data::ConsumerInfos> & consumerInfos) { DARABONBA_PTR_SET_VALUE(consumerInfos_, consumerInfos) };
      inline Data& setConsumerInfos(vector<Data::ConsumerInfos> && consumerInfos) { DARABONBA_PTR_SET_RVALUE(consumerInfos_, consumerInfos) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // messageInfo Field Functions 
      bool hasMessageInfo() const { return this->messageInfo_ != nullptr;};
      void deleteMessageInfo() { this->messageInfo_ = nullptr;};
      inline const Data::MessageInfo & getMessageInfo() const { DARABONBA_PTR_GET_CONST(messageInfo_, Data::MessageInfo) };
      inline Data::MessageInfo getMessageInfo() { DARABONBA_PTR_GET(messageInfo_, Data::MessageInfo) };
      inline Data& setMessageInfo(const Data::MessageInfo & messageInfo) { DARABONBA_PTR_SET_VALUE(messageInfo_, messageInfo) };
      inline Data& setMessageInfo(Data::MessageInfo && messageInfo) { DARABONBA_PTR_SET_RVALUE(messageInfo_, messageInfo) };


      // producerInfo Field Functions 
      bool hasProducerInfo() const { return this->producerInfo_ != nullptr;};
      void deleteProducerInfo() { this->producerInfo_ = nullptr;};
      inline const Data::ProducerInfo & getProducerInfo() const { DARABONBA_PTR_GET_CONST(producerInfo_, Data::ProducerInfo) };
      inline Data::ProducerInfo getProducerInfo() { DARABONBA_PTR_GET(producerInfo_, Data::ProducerInfo) };
      inline Data& setProducerInfo(const Data::ProducerInfo & producerInfo) { DARABONBA_PTR_SET_VALUE(producerInfo_, producerInfo) };
      inline Data& setProducerInfo(Data::ProducerInfo && producerInfo) { DARABONBA_PTR_SET_RVALUE(producerInfo_, producerInfo) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // topicName Field Functions 
      bool hasTopicName() const { return this->topicName_ != nullptr;};
      void deleteTopicName() { this->topicName_ = nullptr;};
      inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
      inline Data& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    protected:
      // The broker trace.
      shared_ptr<Data::BrokerInfo> brokerInfo_ {};
      // Consumer trace info.
      shared_ptr<vector<Data::ConsumerInfos>> consumerInfos_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The message information.
      shared_ptr<Data::MessageInfo> messageInfo_ {};
      // The producer trace.
      shared_ptr<Data::ProducerInfo> producerInfo_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The topic name.
      shared_ptr<string> topicName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTraceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTraceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTraceResponseBody::Data) };
    inline GetTraceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTraceResponseBody::Data) };
    inline GetTraceResponseBody& setData(const GetTraceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTraceResponseBody& setData(GetTraceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetTraceResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetTraceResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTraceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTraceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTraceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTraceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetTraceResponseBody::Data> data_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message.
    shared_ptr<string> dynamicMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The ID of the request. The system generates a unique ID for each request. You can troubleshoot issues based on the request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
