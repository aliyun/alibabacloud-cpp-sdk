// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEPREIVEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEPREIVEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class InstancePreivewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstancePreivewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, InstancePreivewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    InstancePreivewResponseBody() = default ;
    InstancePreivewResponseBody(const InstancePreivewResponseBody &) = default ;
    InstancePreivewResponseBody(InstancePreivewResponseBody &&) = default ;
    InstancePreivewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstancePreivewResponseBody() = default ;
    InstancePreivewResponseBody& operator=(const InstancePreivewResponseBody &) = default ;
    InstancePreivewResponseBody& operator=(InstancePreivewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ExchangeNum, exchangeNum_);
        DARABONBA_PTR_TO_JSON(InstanceNum, instanceNum_);
        DARABONBA_PTR_TO_JSON(Instances, instances_);
        DARABONBA_PTR_TO_JSON(QueueNum, queueNum_);
        DARABONBA_PTR_TO_JSON(VhostNum, vhostNum_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ExchangeNum, exchangeNum_);
        DARABONBA_PTR_FROM_JSON(InstanceNum, instanceNum_);
        DARABONBA_PTR_FROM_JSON(Instances, instances_);
        DARABONBA_PTR_FROM_JSON(QueueNum, queueNum_);
        DARABONBA_PTR_FROM_JSON(VhostNum, vhostNum_);
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
      class Instances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instances& obj) { 
          DARABONBA_PTR_TO_JSON(InstancesVO, instancesVO_);
        };
        friend void from_json(const Darabonba::Json& j, Instances& obj) { 
          DARABONBA_PTR_FROM_JSON(InstancesVO, instancesVO_);
        };
        Instances() = default ;
        Instances(const Instances &) = default ;
        Instances(Instances &&) = default ;
        Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instances() = default ;
        Instances& operator=(const Instances &) = default ;
        Instances& operator=(Instances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InstancesVO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstancesVO& obj) { 
            DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
            DARABONBA_PTR_TO_JSON(CeaseStatus, ceaseStatus_);
            DARABONBA_PTR_TO_JSON(ClassicEndpoint, classicEndpoint_);
            DARABONBA_PTR_TO_JSON(EnableDlqTtl, enableDlqTtl_);
            DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
            DARABONBA_PTR_TO_JSON(Expire, expire_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
            DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_TO_JSON(InvisibleTime, invisibleTime_);
            DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
            DARABONBA_PTR_TO_JSON(ListenerMode, listenerMode_);
            DARABONBA_PTR_TO_JSON(MaxBindingCount, maxBindingCount_);
            DARABONBA_PTR_TO_JSON(MaxConnectionChannelCount, maxConnectionChannelCount_);
            DARABONBA_PTR_TO_JSON(MaxConnectionCount, maxConnectionCount_);
            DARABONBA_PTR_TO_JSON(MaxConsumeRetryTime, maxConsumeRetryTime_);
            DARABONBA_PTR_TO_JSON(MaxEIPTPS, maxEIPTPS_);
            DARABONBA_PTR_TO_JSON(MaxExchangeCount, maxExchangeCount_);
            DARABONBA_PTR_TO_JSON(MaxMsgBodyByte, maxMsgBodyByte_);
            DARABONBA_PTR_TO_JSON(MaxMsgDelayHour, maxMsgDelayHour_);
            DARABONBA_PTR_TO_JSON(MaxMsgTraceTime, maxMsgTraceTime_);
            DARABONBA_PTR_TO_JSON(MaxQueue, maxQueue_);
            DARABONBA_PTR_TO_JSON(MaxQueueConsumerCount, maxQueueConsumerCount_);
            DARABONBA_PTR_TO_JSON(MaxRetryInterval, maxRetryInterval_);
            DARABONBA_PTR_TO_JSON(MaxRetryTimes, maxRetryTimes_);
            DARABONBA_PTR_TO_JSON(MaxTPS, maxTPS_);
            DARABONBA_PTR_TO_JSON(MaxVhost, maxVhost_);
            DARABONBA_PTR_TO_JSON(OrderCreate, orderCreate_);
            DARABONBA_PTR_TO_JSON(OrderType, orderType_);
            DARABONBA_PTR_TO_JSON(PrivateEndpoint, privateEndpoint_);
            DARABONBA_PTR_TO_JSON(PrivateEndpointType, privateEndpointType_);
            DARABONBA_PTR_TO_JSON(PublicEndpoint, publicEndpoint_);
            DARABONBA_PTR_TO_JSON(PvlParams, pvlParams_);
            DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
            DARABONBA_PTR_TO_JSON(ServerlessRate, serverlessRate_);
            DARABONBA_PTR_TO_JSON(ServerlessSwitch, serverlessSwitch_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
            DARABONBA_PTR_TO_JSON(SupportEIP, supportEIP_);
            DARABONBA_PTR_TO_JSON(SupportMsgTrace, supportMsgTrace_);
            DARABONBA_PTR_TO_JSON(SupportOpenSourceAuth, supportOpenSourceAuth_);
            DARABONBA_PTR_TO_JSON(Tags, tags_);
            DARABONBA_PTR_TO_JSON(UsedQueue, usedQueue_);
            DARABONBA_PTR_TO_JSON(UsedVhost, usedVhost_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, InstancesVO& obj) { 
            DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
            DARABONBA_PTR_FROM_JSON(CeaseStatus, ceaseStatus_);
            DARABONBA_PTR_FROM_JSON(ClassicEndpoint, classicEndpoint_);
            DARABONBA_PTR_FROM_JSON(EnableDlqTtl, enableDlqTtl_);
            DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
            DARABONBA_PTR_FROM_JSON(Expire, expire_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
            DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_FROM_JSON(InvisibleTime, invisibleTime_);
            DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
            DARABONBA_PTR_FROM_JSON(ListenerMode, listenerMode_);
            DARABONBA_PTR_FROM_JSON(MaxBindingCount, maxBindingCount_);
            DARABONBA_PTR_FROM_JSON(MaxConnectionChannelCount, maxConnectionChannelCount_);
            DARABONBA_PTR_FROM_JSON(MaxConnectionCount, maxConnectionCount_);
            DARABONBA_PTR_FROM_JSON(MaxConsumeRetryTime, maxConsumeRetryTime_);
            DARABONBA_PTR_FROM_JSON(MaxEIPTPS, maxEIPTPS_);
            DARABONBA_PTR_FROM_JSON(MaxExchangeCount, maxExchangeCount_);
            DARABONBA_PTR_FROM_JSON(MaxMsgBodyByte, maxMsgBodyByte_);
            DARABONBA_PTR_FROM_JSON(MaxMsgDelayHour, maxMsgDelayHour_);
            DARABONBA_PTR_FROM_JSON(MaxMsgTraceTime, maxMsgTraceTime_);
            DARABONBA_PTR_FROM_JSON(MaxQueue, maxQueue_);
            DARABONBA_PTR_FROM_JSON(MaxQueueConsumerCount, maxQueueConsumerCount_);
            DARABONBA_PTR_FROM_JSON(MaxRetryInterval, maxRetryInterval_);
            DARABONBA_PTR_FROM_JSON(MaxRetryTimes, maxRetryTimes_);
            DARABONBA_PTR_FROM_JSON(MaxTPS, maxTPS_);
            DARABONBA_PTR_FROM_JSON(MaxVhost, maxVhost_);
            DARABONBA_PTR_FROM_JSON(OrderCreate, orderCreate_);
            DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
            DARABONBA_PTR_FROM_JSON(PrivateEndpoint, privateEndpoint_);
            DARABONBA_PTR_FROM_JSON(PrivateEndpointType, privateEndpointType_);
            DARABONBA_PTR_FROM_JSON(PublicEndpoint, publicEndpoint_);
            DARABONBA_PTR_FROM_JSON(PvlParams, pvlParams_);
            DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
            DARABONBA_PTR_FROM_JSON(ServerlessRate, serverlessRate_);
            DARABONBA_PTR_FROM_JSON(ServerlessSwitch, serverlessSwitch_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
            DARABONBA_PTR_FROM_JSON(SupportEIP, supportEIP_);
            DARABONBA_PTR_FROM_JSON(SupportMsgTrace, supportMsgTrace_);
            DARABONBA_PTR_FROM_JSON(SupportOpenSourceAuth, supportOpenSourceAuth_);
            DARABONBA_PTR_FROM_JSON(Tags, tags_);
            DARABONBA_PTR_FROM_JSON(UsedQueue, usedQueue_);
            DARABONBA_PTR_FROM_JSON(UsedVhost, usedVhost_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          InstancesVO() = default ;
          InstancesVO(const InstancesVO &) = default ;
          InstancesVO(InstancesVO &&) = default ;
          InstancesVO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstancesVO() = default ;
          InstancesVO& operator=(const InstancesVO &) = default ;
          InstancesVO& operator=(InstancesVO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tags : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tags& obj) { 
              DARABONBA_PTR_TO_JSON(TagsVO, tagsVO_);
            };
            friend void from_json(const Darabonba::Json& j, Tags& obj) { 
              DARABONBA_PTR_FROM_JSON(TagsVO, tagsVO_);
            };
            Tags() = default ;
            Tags(const Tags &) = default ;
            Tags(Tags &&) = default ;
            Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tags() = default ;
            Tags& operator=(const Tags &) = default ;
            Tags& operator=(Tags &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class TagsVO : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const TagsVO& obj) { 
                DARABONBA_PTR_TO_JSON(Key, key_);
                DARABONBA_PTR_TO_JSON(Value, value_);
              };
              friend void from_json(const Darabonba::Json& j, TagsVO& obj) { 
                DARABONBA_PTR_FROM_JSON(Key, key_);
                DARABONBA_PTR_FROM_JSON(Value, value_);
              };
              TagsVO() = default ;
              TagsVO(const TagsVO &) = default ;
              TagsVO(TagsVO &&) = default ;
              TagsVO(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~TagsVO() = default ;
              TagsVO& operator=(const TagsVO &) = default ;
              TagsVO& operator=(TagsVO &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
              // key Field Functions 
              bool hasKey() const { return this->key_ != nullptr;};
              void deleteKey() { this->key_ = nullptr;};
              inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
              inline TagsVO& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
              inline TagsVO& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


            protected:
              shared_ptr<string> key_ {};
              shared_ptr<string> value_ {};
            };

            virtual bool empty() const override { return this->tagsVO_ == nullptr; };
            // tagsVO Field Functions 
            bool hasTagsVO() const { return this->tagsVO_ != nullptr;};
            void deleteTagsVO() { this->tagsVO_ = nullptr;};
            inline const vector<Tags::TagsVO> & getTagsVO() const { DARABONBA_PTR_GET_CONST(tagsVO_, vector<Tags::TagsVO>) };
            inline vector<Tags::TagsVO> getTagsVO() { DARABONBA_PTR_GET(tagsVO_, vector<Tags::TagsVO>) };
            inline Tags& setTagsVO(const vector<Tags::TagsVO> & tagsVO) { DARABONBA_PTR_SET_VALUE(tagsVO_, tagsVO) };
            inline Tags& setTagsVO(vector<Tags::TagsVO> && tagsVO) { DARABONBA_PTR_SET_RVALUE(tagsVO_, tagsVO) };


          protected:
            shared_ptr<vector<Tags::TagsVO>> tagsVO_ {};
          };

          class PvlParams : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PvlParams& obj) { 
              DARABONBA_PTR_TO_JSON(PvlVO, pvlVO_);
            };
            friend void from_json(const Darabonba::Json& j, PvlParams& obj) { 
              DARABONBA_PTR_FROM_JSON(PvlVO, pvlVO_);
            };
            PvlParams() = default ;
            PvlParams(const PvlParams &) = default ;
            PvlParams(PvlParams &&) = default ;
            PvlParams(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PvlParams() = default ;
            PvlParams& operator=(const PvlParams &) = default ;
            PvlParams& operator=(PvlParams &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class PvlVO : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const PvlVO& obj) { 
                DARABONBA_PTR_TO_JSON(Key, key_);
                DARABONBA_PTR_TO_JSON(Value, value_);
              };
              friend void from_json(const Darabonba::Json& j, PvlVO& obj) { 
                DARABONBA_PTR_FROM_JSON(Key, key_);
                DARABONBA_PTR_FROM_JSON(Value, value_);
              };
              PvlVO() = default ;
              PvlVO(const PvlVO &) = default ;
              PvlVO(PvlVO &&) = default ;
              PvlVO(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~PvlVO() = default ;
              PvlVO& operator=(const PvlVO &) = default ;
              PvlVO& operator=(PvlVO &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
              // key Field Functions 
              bool hasKey() const { return this->key_ != nullptr;};
              void deleteKey() { this->key_ = nullptr;};
              inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
              inline PvlVO& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
              inline PvlVO& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


            protected:
              shared_ptr<string> key_ {};
              shared_ptr<string> value_ {};
            };

            virtual bool empty() const override { return this->pvlVO_ == nullptr; };
            // pvlVO Field Functions 
            bool hasPvlVO() const { return this->pvlVO_ != nullptr;};
            void deletePvlVO() { this->pvlVO_ = nullptr;};
            inline const vector<PvlParams::PvlVO> & getPvlVO() const { DARABONBA_PTR_GET_CONST(pvlVO_, vector<PvlParams::PvlVO>) };
            inline vector<PvlParams::PvlVO> getPvlVO() { DARABONBA_PTR_GET(pvlVO_, vector<PvlParams::PvlVO>) };
            inline PvlParams& setPvlVO(const vector<PvlParams::PvlVO> & pvlVO) { DARABONBA_PTR_SET_VALUE(pvlVO_, pvlVO) };
            inline PvlParams& setPvlVO(vector<PvlParams::PvlVO> && pvlVO) { DARABONBA_PTR_SET_RVALUE(pvlVO_, pvlVO) };


          protected:
            shared_ptr<vector<PvlParams::PvlVO>> pvlVO_ {};
          };

          virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->ceaseStatus_ == nullptr && this->classicEndpoint_ == nullptr && this->enableDlqTtl_ == nullptr && this->encrypted_ == nullptr && this->expire_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr && this->invisibleTime_ == nullptr && this->kmsKeyId_ == nullptr
        && this->listenerMode_ == nullptr && this->maxBindingCount_ == nullptr && this->maxConnectionChannelCount_ == nullptr && this->maxConnectionCount_ == nullptr && this->maxConsumeRetryTime_ == nullptr
        && this->maxEIPTPS_ == nullptr && this->maxExchangeCount_ == nullptr && this->maxMsgBodyByte_ == nullptr && this->maxMsgDelayHour_ == nullptr && this->maxMsgTraceTime_ == nullptr
        && this->maxQueue_ == nullptr && this->maxQueueConsumerCount_ == nullptr && this->maxRetryInterval_ == nullptr && this->maxRetryTimes_ == nullptr && this->maxTPS_ == nullptr
        && this->maxVhost_ == nullptr && this->orderCreate_ == nullptr && this->orderType_ == nullptr && this->privateEndpoint_ == nullptr && this->privateEndpointType_ == nullptr
        && this->publicEndpoint_ == nullptr && this->pvlParams_ == nullptr && this->resourceGroupId_ == nullptr && this->serverlessRate_ == nullptr && this->serverlessSwitch_ == nullptr
        && this->status_ == nullptr && this->storageSize_ == nullptr && this->supportEIP_ == nullptr && this->supportMsgTrace_ == nullptr && this->supportOpenSourceAuth_ == nullptr
        && this->tags_ == nullptr && this->usedQueue_ == nullptr && this->usedVhost_ == nullptr && this->version_ == nullptr; };
          // autoRenew Field Functions 
          bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
          void deleteAutoRenew() { this->autoRenew_ = nullptr;};
          inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
          inline InstancesVO& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


          // ceaseStatus Field Functions 
          bool hasCeaseStatus() const { return this->ceaseStatus_ != nullptr;};
          void deleteCeaseStatus() { this->ceaseStatus_ = nullptr;};
          inline bool getCeaseStatus() const { DARABONBA_PTR_GET_DEFAULT(ceaseStatus_, false) };
          inline InstancesVO& setCeaseStatus(bool ceaseStatus) { DARABONBA_PTR_SET_VALUE(ceaseStatus_, ceaseStatus) };


          // classicEndpoint Field Functions 
          bool hasClassicEndpoint() const { return this->classicEndpoint_ != nullptr;};
          void deleteClassicEndpoint() { this->classicEndpoint_ = nullptr;};
          inline string getClassicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(classicEndpoint_, "") };
          inline InstancesVO& setClassicEndpoint(string classicEndpoint) { DARABONBA_PTR_SET_VALUE(classicEndpoint_, classicEndpoint) };


          // enableDlqTtl Field Functions 
          bool hasEnableDlqTtl() const { return this->enableDlqTtl_ != nullptr;};
          void deleteEnableDlqTtl() { this->enableDlqTtl_ = nullptr;};
          inline bool getEnableDlqTtl() const { DARABONBA_PTR_GET_DEFAULT(enableDlqTtl_, false) };
          inline InstancesVO& setEnableDlqTtl(bool enableDlqTtl) { DARABONBA_PTR_SET_VALUE(enableDlqTtl_, enableDlqTtl) };


          // encrypted Field Functions 
          bool hasEncrypted() const { return this->encrypted_ != nullptr;};
          void deleteEncrypted() { this->encrypted_ = nullptr;};
          inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
          inline InstancesVO& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


          // expire Field Functions 
          bool hasExpire() const { return this->expire_ != nullptr;};
          void deleteExpire() { this->expire_ = nullptr;};
          inline int64_t getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
          inline InstancesVO& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline InstancesVO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // instanceName Field Functions 
          bool hasInstanceName() const { return this->instanceName_ != nullptr;};
          void deleteInstanceName() { this->instanceName_ = nullptr;};
          inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
          inline InstancesVO& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


          // instanceType Field Functions 
          bool hasInstanceType() const { return this->instanceType_ != nullptr;};
          void deleteInstanceType() { this->instanceType_ = nullptr;};
          inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
          inline InstancesVO& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


          // invisibleTime Field Functions 
          bool hasInvisibleTime() const { return this->invisibleTime_ != nullptr;};
          void deleteInvisibleTime() { this->invisibleTime_ = nullptr;};
          inline int32_t getInvisibleTime() const { DARABONBA_PTR_GET_DEFAULT(invisibleTime_, 0) };
          inline InstancesVO& setInvisibleTime(int32_t invisibleTime) { DARABONBA_PTR_SET_VALUE(invisibleTime_, invisibleTime) };


          // kmsKeyId Field Functions 
          bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
          void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
          inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
          inline InstancesVO& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


          // listenerMode Field Functions 
          bool hasListenerMode() const { return this->listenerMode_ != nullptr;};
          void deleteListenerMode() { this->listenerMode_ = nullptr;};
          inline string getListenerMode() const { DARABONBA_PTR_GET_DEFAULT(listenerMode_, "") };
          inline InstancesVO& setListenerMode(string listenerMode) { DARABONBA_PTR_SET_VALUE(listenerMode_, listenerMode) };


          // maxBindingCount Field Functions 
          bool hasMaxBindingCount() const { return this->maxBindingCount_ != nullptr;};
          void deleteMaxBindingCount() { this->maxBindingCount_ = nullptr;};
          inline int32_t getMaxBindingCount() const { DARABONBA_PTR_GET_DEFAULT(maxBindingCount_, 0) };
          inline InstancesVO& setMaxBindingCount(int32_t maxBindingCount) { DARABONBA_PTR_SET_VALUE(maxBindingCount_, maxBindingCount) };


          // maxConnectionChannelCount Field Functions 
          bool hasMaxConnectionChannelCount() const { return this->maxConnectionChannelCount_ != nullptr;};
          void deleteMaxConnectionChannelCount() { this->maxConnectionChannelCount_ = nullptr;};
          inline int32_t getMaxConnectionChannelCount() const { DARABONBA_PTR_GET_DEFAULT(maxConnectionChannelCount_, 0) };
          inline InstancesVO& setMaxConnectionChannelCount(int32_t maxConnectionChannelCount) { DARABONBA_PTR_SET_VALUE(maxConnectionChannelCount_, maxConnectionChannelCount) };


          // maxConnectionCount Field Functions 
          bool hasMaxConnectionCount() const { return this->maxConnectionCount_ != nullptr;};
          void deleteMaxConnectionCount() { this->maxConnectionCount_ = nullptr;};
          inline int32_t getMaxConnectionCount() const { DARABONBA_PTR_GET_DEFAULT(maxConnectionCount_, 0) };
          inline InstancesVO& setMaxConnectionCount(int32_t maxConnectionCount) { DARABONBA_PTR_SET_VALUE(maxConnectionCount_, maxConnectionCount) };


          // maxConsumeRetryTime Field Functions 
          bool hasMaxConsumeRetryTime() const { return this->maxConsumeRetryTime_ != nullptr;};
          void deleteMaxConsumeRetryTime() { this->maxConsumeRetryTime_ = nullptr;};
          inline int32_t getMaxConsumeRetryTime() const { DARABONBA_PTR_GET_DEFAULT(maxConsumeRetryTime_, 0) };
          inline InstancesVO& setMaxConsumeRetryTime(int32_t maxConsumeRetryTime) { DARABONBA_PTR_SET_VALUE(maxConsumeRetryTime_, maxConsumeRetryTime) };


          // maxEIPTPS Field Functions 
          bool hasMaxEIPTPS() const { return this->maxEIPTPS_ != nullptr;};
          void deleteMaxEIPTPS() { this->maxEIPTPS_ = nullptr;};
          inline int32_t getMaxEIPTPS() const { DARABONBA_PTR_GET_DEFAULT(maxEIPTPS_, 0) };
          inline InstancesVO& setMaxEIPTPS(int32_t maxEIPTPS) { DARABONBA_PTR_SET_VALUE(maxEIPTPS_, maxEIPTPS) };


          // maxExchangeCount Field Functions 
          bool hasMaxExchangeCount() const { return this->maxExchangeCount_ != nullptr;};
          void deleteMaxExchangeCount() { this->maxExchangeCount_ = nullptr;};
          inline int32_t getMaxExchangeCount() const { DARABONBA_PTR_GET_DEFAULT(maxExchangeCount_, 0) };
          inline InstancesVO& setMaxExchangeCount(int32_t maxExchangeCount) { DARABONBA_PTR_SET_VALUE(maxExchangeCount_, maxExchangeCount) };


          // maxMsgBodyByte Field Functions 
          bool hasMaxMsgBodyByte() const { return this->maxMsgBodyByte_ != nullptr;};
          void deleteMaxMsgBodyByte() { this->maxMsgBodyByte_ = nullptr;};
          inline int32_t getMaxMsgBodyByte() const { DARABONBA_PTR_GET_DEFAULT(maxMsgBodyByte_, 0) };
          inline InstancesVO& setMaxMsgBodyByte(int32_t maxMsgBodyByte) { DARABONBA_PTR_SET_VALUE(maxMsgBodyByte_, maxMsgBodyByte) };


          // maxMsgDelayHour Field Functions 
          bool hasMaxMsgDelayHour() const { return this->maxMsgDelayHour_ != nullptr;};
          void deleteMaxMsgDelayHour() { this->maxMsgDelayHour_ = nullptr;};
          inline int32_t getMaxMsgDelayHour() const { DARABONBA_PTR_GET_DEFAULT(maxMsgDelayHour_, 0) };
          inline InstancesVO& setMaxMsgDelayHour(int32_t maxMsgDelayHour) { DARABONBA_PTR_SET_VALUE(maxMsgDelayHour_, maxMsgDelayHour) };


          // maxMsgTraceTime Field Functions 
          bool hasMaxMsgTraceTime() const { return this->maxMsgTraceTime_ != nullptr;};
          void deleteMaxMsgTraceTime() { this->maxMsgTraceTime_ = nullptr;};
          inline int32_t getMaxMsgTraceTime() const { DARABONBA_PTR_GET_DEFAULT(maxMsgTraceTime_, 0) };
          inline InstancesVO& setMaxMsgTraceTime(int32_t maxMsgTraceTime) { DARABONBA_PTR_SET_VALUE(maxMsgTraceTime_, maxMsgTraceTime) };


          // maxQueue Field Functions 
          bool hasMaxQueue() const { return this->maxQueue_ != nullptr;};
          void deleteMaxQueue() { this->maxQueue_ = nullptr;};
          inline int32_t getMaxQueue() const { DARABONBA_PTR_GET_DEFAULT(maxQueue_, 0) };
          inline InstancesVO& setMaxQueue(int32_t maxQueue) { DARABONBA_PTR_SET_VALUE(maxQueue_, maxQueue) };


          // maxQueueConsumerCount Field Functions 
          bool hasMaxQueueConsumerCount() const { return this->maxQueueConsumerCount_ != nullptr;};
          void deleteMaxQueueConsumerCount() { this->maxQueueConsumerCount_ = nullptr;};
          inline int32_t getMaxQueueConsumerCount() const { DARABONBA_PTR_GET_DEFAULT(maxQueueConsumerCount_, 0) };
          inline InstancesVO& setMaxQueueConsumerCount(int32_t maxQueueConsumerCount) { DARABONBA_PTR_SET_VALUE(maxQueueConsumerCount_, maxQueueConsumerCount) };


          // maxRetryInterval Field Functions 
          bool hasMaxRetryInterval() const { return this->maxRetryInterval_ != nullptr;};
          void deleteMaxRetryInterval() { this->maxRetryInterval_ = nullptr;};
          inline int32_t getMaxRetryInterval() const { DARABONBA_PTR_GET_DEFAULT(maxRetryInterval_, 0) };
          inline InstancesVO& setMaxRetryInterval(int32_t maxRetryInterval) { DARABONBA_PTR_SET_VALUE(maxRetryInterval_, maxRetryInterval) };


          // maxRetryTimes Field Functions 
          bool hasMaxRetryTimes() const { return this->maxRetryTimes_ != nullptr;};
          void deleteMaxRetryTimes() { this->maxRetryTimes_ = nullptr;};
          inline int32_t getMaxRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(maxRetryTimes_, 0) };
          inline InstancesVO& setMaxRetryTimes(int32_t maxRetryTimes) { DARABONBA_PTR_SET_VALUE(maxRetryTimes_, maxRetryTimes) };


          // maxTPS Field Functions 
          bool hasMaxTPS() const { return this->maxTPS_ != nullptr;};
          void deleteMaxTPS() { this->maxTPS_ = nullptr;};
          inline int32_t getMaxTPS() const { DARABONBA_PTR_GET_DEFAULT(maxTPS_, 0) };
          inline InstancesVO& setMaxTPS(int32_t maxTPS) { DARABONBA_PTR_SET_VALUE(maxTPS_, maxTPS) };


          // maxVhost Field Functions 
          bool hasMaxVhost() const { return this->maxVhost_ != nullptr;};
          void deleteMaxVhost() { this->maxVhost_ = nullptr;};
          inline int32_t getMaxVhost() const { DARABONBA_PTR_GET_DEFAULT(maxVhost_, 0) };
          inline InstancesVO& setMaxVhost(int32_t maxVhost) { DARABONBA_PTR_SET_VALUE(maxVhost_, maxVhost) };


          // orderCreate Field Functions 
          bool hasOrderCreate() const { return this->orderCreate_ != nullptr;};
          void deleteOrderCreate() { this->orderCreate_ = nullptr;};
          inline int64_t getOrderCreate() const { DARABONBA_PTR_GET_DEFAULT(orderCreate_, 0L) };
          inline InstancesVO& setOrderCreate(int64_t orderCreate) { DARABONBA_PTR_SET_VALUE(orderCreate_, orderCreate) };


          // orderType Field Functions 
          bool hasOrderType() const { return this->orderType_ != nullptr;};
          void deleteOrderType() { this->orderType_ = nullptr;};
          inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
          inline InstancesVO& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


          // privateEndpoint Field Functions 
          bool hasPrivateEndpoint() const { return this->privateEndpoint_ != nullptr;};
          void deletePrivateEndpoint() { this->privateEndpoint_ = nullptr;};
          inline string getPrivateEndpoint() const { DARABONBA_PTR_GET_DEFAULT(privateEndpoint_, "") };
          inline InstancesVO& setPrivateEndpoint(string privateEndpoint) { DARABONBA_PTR_SET_VALUE(privateEndpoint_, privateEndpoint) };


          // privateEndpointType Field Functions 
          bool hasPrivateEndpointType() const { return this->privateEndpointType_ != nullptr;};
          void deletePrivateEndpointType() { this->privateEndpointType_ = nullptr;};
          inline string getPrivateEndpointType() const { DARABONBA_PTR_GET_DEFAULT(privateEndpointType_, "") };
          inline InstancesVO& setPrivateEndpointType(string privateEndpointType) { DARABONBA_PTR_SET_VALUE(privateEndpointType_, privateEndpointType) };


          // publicEndpoint Field Functions 
          bool hasPublicEndpoint() const { return this->publicEndpoint_ != nullptr;};
          void deletePublicEndpoint() { this->publicEndpoint_ = nullptr;};
          inline string getPublicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(publicEndpoint_, "") };
          inline InstancesVO& setPublicEndpoint(string publicEndpoint) { DARABONBA_PTR_SET_VALUE(publicEndpoint_, publicEndpoint) };


          // pvlParams Field Functions 
          bool hasPvlParams() const { return this->pvlParams_ != nullptr;};
          void deletePvlParams() { this->pvlParams_ = nullptr;};
          inline const InstancesVO::PvlParams & getPvlParams() const { DARABONBA_PTR_GET_CONST(pvlParams_, InstancesVO::PvlParams) };
          inline InstancesVO::PvlParams getPvlParams() { DARABONBA_PTR_GET(pvlParams_, InstancesVO::PvlParams) };
          inline InstancesVO& setPvlParams(const InstancesVO::PvlParams & pvlParams) { DARABONBA_PTR_SET_VALUE(pvlParams_, pvlParams) };
          inline InstancesVO& setPvlParams(InstancesVO::PvlParams && pvlParams) { DARABONBA_PTR_SET_RVALUE(pvlParams_, pvlParams) };


          // resourceGroupId Field Functions 
          bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
          void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
          inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
          inline InstancesVO& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


          // serverlessRate Field Functions 
          bool hasServerlessRate() const { return this->serverlessRate_ != nullptr;};
          void deleteServerlessRate() { this->serverlessRate_ = nullptr;};
          inline double getServerlessRate() const { DARABONBA_PTR_GET_DEFAULT(serverlessRate_, 0.0) };
          inline InstancesVO& setServerlessRate(double serverlessRate) { DARABONBA_PTR_SET_VALUE(serverlessRate_, serverlessRate) };


          // serverlessSwitch Field Functions 
          bool hasServerlessSwitch() const { return this->serverlessSwitch_ != nullptr;};
          void deleteServerlessSwitch() { this->serverlessSwitch_ = nullptr;};
          inline bool getServerlessSwitch() const { DARABONBA_PTR_GET_DEFAULT(serverlessSwitch_, false) };
          inline InstancesVO& setServerlessSwitch(bool serverlessSwitch) { DARABONBA_PTR_SET_VALUE(serverlessSwitch_, serverlessSwitch) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline InstancesVO& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // storageSize Field Functions 
          bool hasStorageSize() const { return this->storageSize_ != nullptr;};
          void deleteStorageSize() { this->storageSize_ = nullptr;};
          inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
          inline InstancesVO& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


          // supportEIP Field Functions 
          bool hasSupportEIP() const { return this->supportEIP_ != nullptr;};
          void deleteSupportEIP() { this->supportEIP_ = nullptr;};
          inline bool getSupportEIP() const { DARABONBA_PTR_GET_DEFAULT(supportEIP_, false) };
          inline InstancesVO& setSupportEIP(bool supportEIP) { DARABONBA_PTR_SET_VALUE(supportEIP_, supportEIP) };


          // supportMsgTrace Field Functions 
          bool hasSupportMsgTrace() const { return this->supportMsgTrace_ != nullptr;};
          void deleteSupportMsgTrace() { this->supportMsgTrace_ = nullptr;};
          inline bool getSupportMsgTrace() const { DARABONBA_PTR_GET_DEFAULT(supportMsgTrace_, false) };
          inline InstancesVO& setSupportMsgTrace(bool supportMsgTrace) { DARABONBA_PTR_SET_VALUE(supportMsgTrace_, supportMsgTrace) };


          // supportOpenSourceAuth Field Functions 
          bool hasSupportOpenSourceAuth() const { return this->supportOpenSourceAuth_ != nullptr;};
          void deleteSupportOpenSourceAuth() { this->supportOpenSourceAuth_ = nullptr;};
          inline bool getSupportOpenSourceAuth() const { DARABONBA_PTR_GET_DEFAULT(supportOpenSourceAuth_, false) };
          inline InstancesVO& setSupportOpenSourceAuth(bool supportOpenSourceAuth) { DARABONBA_PTR_SET_VALUE(supportOpenSourceAuth_, supportOpenSourceAuth) };


          // tags Field Functions 
          bool hasTags() const { return this->tags_ != nullptr;};
          void deleteTags() { this->tags_ = nullptr;};
          inline const InstancesVO::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, InstancesVO::Tags) };
          inline InstancesVO::Tags getTags() { DARABONBA_PTR_GET(tags_, InstancesVO::Tags) };
          inline InstancesVO& setTags(const InstancesVO::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
          inline InstancesVO& setTags(InstancesVO::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


          // usedQueue Field Functions 
          bool hasUsedQueue() const { return this->usedQueue_ != nullptr;};
          void deleteUsedQueue() { this->usedQueue_ = nullptr;};
          inline int32_t getUsedQueue() const { DARABONBA_PTR_GET_DEFAULT(usedQueue_, 0) };
          inline InstancesVO& setUsedQueue(int32_t usedQueue) { DARABONBA_PTR_SET_VALUE(usedQueue_, usedQueue) };


          // usedVhost Field Functions 
          bool hasUsedVhost() const { return this->usedVhost_ != nullptr;};
          void deleteUsedVhost() { this->usedVhost_ = nullptr;};
          inline int32_t getUsedVhost() const { DARABONBA_PTR_GET_DEFAULT(usedVhost_, 0) };
          inline InstancesVO& setUsedVhost(int32_t usedVhost) { DARABONBA_PTR_SET_VALUE(usedVhost_, usedVhost) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
          inline InstancesVO& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          shared_ptr<bool> autoRenew_ {};
          shared_ptr<bool> ceaseStatus_ {};
          shared_ptr<string> classicEndpoint_ {};
          shared_ptr<bool> enableDlqTtl_ {};
          shared_ptr<bool> encrypted_ {};
          shared_ptr<int64_t> expire_ {};
          shared_ptr<string> instanceId_ {};
          shared_ptr<string> instanceName_ {};
          shared_ptr<string> instanceType_ {};
          shared_ptr<int32_t> invisibleTime_ {};
          shared_ptr<string> kmsKeyId_ {};
          shared_ptr<string> listenerMode_ {};
          shared_ptr<int32_t> maxBindingCount_ {};
          shared_ptr<int32_t> maxConnectionChannelCount_ {};
          shared_ptr<int32_t> maxConnectionCount_ {};
          shared_ptr<int32_t> maxConsumeRetryTime_ {};
          shared_ptr<int32_t> maxEIPTPS_ {};
          shared_ptr<int32_t> maxExchangeCount_ {};
          shared_ptr<int32_t> maxMsgBodyByte_ {};
          shared_ptr<int32_t> maxMsgDelayHour_ {};
          shared_ptr<int32_t> maxMsgTraceTime_ {};
          shared_ptr<int32_t> maxQueue_ {};
          shared_ptr<int32_t> maxQueueConsumerCount_ {};
          shared_ptr<int32_t> maxRetryInterval_ {};
          shared_ptr<int32_t> maxRetryTimes_ {};
          shared_ptr<int32_t> maxTPS_ {};
          shared_ptr<int32_t> maxVhost_ {};
          shared_ptr<int64_t> orderCreate_ {};
          shared_ptr<string> orderType_ {};
          shared_ptr<string> privateEndpoint_ {};
          shared_ptr<string> privateEndpointType_ {};
          shared_ptr<string> publicEndpoint_ {};
          shared_ptr<InstancesVO::PvlParams> pvlParams_ {};
          shared_ptr<string> resourceGroupId_ {};
          shared_ptr<double> serverlessRate_ {};
          shared_ptr<bool> serverlessSwitch_ {};
          shared_ptr<string> status_ {};
          shared_ptr<int32_t> storageSize_ {};
          shared_ptr<bool> supportEIP_ {};
          shared_ptr<bool> supportMsgTrace_ {};
          shared_ptr<bool> supportOpenSourceAuth_ {};
          shared_ptr<InstancesVO::Tags> tags_ {};
          shared_ptr<int32_t> usedQueue_ {};
          shared_ptr<int32_t> usedVhost_ {};
          shared_ptr<int32_t> version_ {};
        };

        virtual bool empty() const override { return this->instancesVO_ == nullptr; };
        // instancesVO Field Functions 
        bool hasInstancesVO() const { return this->instancesVO_ != nullptr;};
        void deleteInstancesVO() { this->instancesVO_ = nullptr;};
        inline const vector<Instances::InstancesVO> & getInstancesVO() const { DARABONBA_PTR_GET_CONST(instancesVO_, vector<Instances::InstancesVO>) };
        inline vector<Instances::InstancesVO> getInstancesVO() { DARABONBA_PTR_GET(instancesVO_, vector<Instances::InstancesVO>) };
        inline Instances& setInstancesVO(const vector<Instances::InstancesVO> & instancesVO) { DARABONBA_PTR_SET_VALUE(instancesVO_, instancesVO) };
        inline Instances& setInstancesVO(vector<Instances::InstancesVO> && instancesVO) { DARABONBA_PTR_SET_RVALUE(instancesVO_, instancesVO) };


      protected:
        shared_ptr<vector<Instances::InstancesVO>> instancesVO_ {};
      };

      virtual bool empty() const override { return this->exchangeNum_ == nullptr
        && this->instanceNum_ == nullptr && this->instances_ == nullptr && this->queueNum_ == nullptr && this->vhostNum_ == nullptr; };
      // exchangeNum Field Functions 
      bool hasExchangeNum() const { return this->exchangeNum_ != nullptr;};
      void deleteExchangeNum() { this->exchangeNum_ = nullptr;};
      inline int32_t getExchangeNum() const { DARABONBA_PTR_GET_DEFAULT(exchangeNum_, 0) };
      inline Data& setExchangeNum(int32_t exchangeNum) { DARABONBA_PTR_SET_VALUE(exchangeNum_, exchangeNum) };


      // instanceNum Field Functions 
      bool hasInstanceNum() const { return this->instanceNum_ != nullptr;};
      void deleteInstanceNum() { this->instanceNum_ = nullptr;};
      inline int32_t getInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(instanceNum_, 0) };
      inline Data& setInstanceNum(int32_t instanceNum) { DARABONBA_PTR_SET_VALUE(instanceNum_, instanceNum) };


      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline const Data::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, Data::Instances) };
      inline Data::Instances getInstances() { DARABONBA_PTR_GET(instances_, Data::Instances) };
      inline Data& setInstances(const Data::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
      inline Data& setInstances(Data::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


      // queueNum Field Functions 
      bool hasQueueNum() const { return this->queueNum_ != nullptr;};
      void deleteQueueNum() { this->queueNum_ = nullptr;};
      inline int32_t getQueueNum() const { DARABONBA_PTR_GET_DEFAULT(queueNum_, 0) };
      inline Data& setQueueNum(int32_t queueNum) { DARABONBA_PTR_SET_VALUE(queueNum_, queueNum) };


      // vhostNum Field Functions 
      bool hasVhostNum() const { return this->vhostNum_ != nullptr;};
      void deleteVhostNum() { this->vhostNum_ = nullptr;};
      inline int32_t getVhostNum() const { DARABONBA_PTR_GET_DEFAULT(vhostNum_, 0) };
      inline Data& setVhostNum(int32_t vhostNum) { DARABONBA_PTR_SET_VALUE(vhostNum_, vhostNum) };


    protected:
      shared_ptr<int32_t> exchangeNum_ {};
      shared_ptr<int32_t> instanceNum_ {};
      shared_ptr<Data::Instances> instances_ {};
      shared_ptr<int32_t> queueNum_ {};
      shared_ptr<int32_t> vhostNum_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline InstancePreivewResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const InstancePreivewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, InstancePreivewResponseBody::Data) };
    inline InstancePreivewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, InstancePreivewResponseBody::Data) };
    inline InstancePreivewResponseBody& setData(const InstancePreivewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline InstancePreivewResponseBody& setData(InstancePreivewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InstancePreivewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InstancePreivewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline InstancePreivewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<InstancePreivewResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
