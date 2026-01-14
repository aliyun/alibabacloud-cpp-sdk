// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetInstanceResponseBody() = default ;
    GetInstanceResponseBody(const GetInstanceResponseBody &) = default ;
    GetInstanceResponseBody(GetInstanceResponseBody &&) = default ;
    GetInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBody() = default ;
    GetInstanceResponseBody& operator=(const GetInstanceResponseBody &) = default ;
    GetInstanceResponseBody& operator=(GetInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(accountInfo, accountInfo_);
        DARABONBA_PTR_TO_JSON(aclInfo, aclInfo_);
        DARABONBA_PTR_TO_JSON(bid, bid_);
        DARABONBA_PTR_TO_JSON(commodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(extConfig, extConfig_);
        DARABONBA_PTR_TO_JSON(groupCount, groupCount_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(instanceQuotas, instanceQuotas_);
        DARABONBA_PTR_TO_JSON(networkInfo, networkInfo_);
        DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
        DARABONBA_PTR_TO_JSON(productInfo, productInfo_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(releaseTime, releaseTime_);
        DARABONBA_PTR_TO_JSON(remark, remark_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(seriesCode, seriesCode_);
        DARABONBA_PTR_TO_JSON(serviceCode, serviceCode_);
        DARABONBA_PTR_TO_JSON(software, software_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(subSeriesCode, subSeriesCode_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(topicCount, topicCount_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(accountInfo, accountInfo_);
        DARABONBA_PTR_FROM_JSON(aclInfo, aclInfo_);
        DARABONBA_PTR_FROM_JSON(bid, bid_);
        DARABONBA_PTR_FROM_JSON(commodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(extConfig, extConfig_);
        DARABONBA_PTR_FROM_JSON(groupCount, groupCount_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(instanceQuotas, instanceQuotas_);
        DARABONBA_PTR_FROM_JSON(networkInfo, networkInfo_);
        DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
        DARABONBA_PTR_FROM_JSON(productInfo, productInfo_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(releaseTime, releaseTime_);
        DARABONBA_PTR_FROM_JSON(remark, remark_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(seriesCode, seriesCode_);
        DARABONBA_PTR_FROM_JSON(serviceCode, serviceCode_);
        DARABONBA_PTR_FROM_JSON(software, software_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(subSeriesCode, subSeriesCode_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(topicCount, topicCount_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
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
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(value, value_);
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
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key of the resource.
        shared_ptr<string> key_ {};
        // The tag value of the resource.
        shared_ptr<string> value_ {};
      };

      class Software : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Software& obj) { 
          DARABONBA_PTR_TO_JSON(maintainTime, maintainTime_);
          DARABONBA_PTR_TO_JSON(softwareVersion, softwareVersion_);
          DARABONBA_PTR_TO_JSON(upgradeMethod, upgradeMethod_);
        };
        friend void from_json(const Darabonba::Json& j, Software& obj) { 
          DARABONBA_PTR_FROM_JSON(maintainTime, maintainTime_);
          DARABONBA_PTR_FROM_JSON(softwareVersion, softwareVersion_);
          DARABONBA_PTR_FROM_JSON(upgradeMethod, upgradeMethod_);
        };
        Software() = default ;
        Software(const Software &) = default ;
        Software(Software &&) = default ;
        Software(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Software() = default ;
        Software& operator=(const Software &) = default ;
        Software& operator=(Software &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maintainTime_ == nullptr
        && this->softwareVersion_ == nullptr && this->upgradeMethod_ == nullptr; };
        // maintainTime Field Functions 
        bool hasMaintainTime() const { return this->maintainTime_ != nullptr;};
        void deleteMaintainTime() { this->maintainTime_ = nullptr;};
        inline string getMaintainTime() const { DARABONBA_PTR_GET_DEFAULT(maintainTime_, "") };
        inline Software& setMaintainTime(string maintainTime) { DARABONBA_PTR_SET_VALUE(maintainTime_, maintainTime) };


        // softwareVersion Field Functions 
        bool hasSoftwareVersion() const { return this->softwareVersion_ != nullptr;};
        void deleteSoftwareVersion() { this->softwareVersion_ = nullptr;};
        inline string getSoftwareVersion() const { DARABONBA_PTR_GET_DEFAULT(softwareVersion_, "") };
        inline Software& setSoftwareVersion(string softwareVersion) { DARABONBA_PTR_SET_VALUE(softwareVersion_, softwareVersion) };


        // upgradeMethod Field Functions 
        bool hasUpgradeMethod() const { return this->upgradeMethod_ != nullptr;};
        void deleteUpgradeMethod() { this->upgradeMethod_ = nullptr;};
        inline string getUpgradeMethod() const { DARABONBA_PTR_GET_DEFAULT(upgradeMethod_, "") };
        inline Software& setUpgradeMethod(string upgradeMethod) { DARABONBA_PTR_SET_VALUE(upgradeMethod_, upgradeMethod) };


      protected:
        // The period of upgrade time.
        shared_ptr<string> maintainTime_ {};
        // The version of software.
        shared_ptr<string> softwareVersion_ {};
        // The upgrade method.
        // 
        // Valid values:
        // 
        // - Auto: automatic upgrade
        // 
        // - Manual: manual upgrade
        shared_ptr<string> upgradeMethod_ {};
      };

      class ProductInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProductInfo& obj) { 
          DARABONBA_PTR_TO_JSON(autoScaling, autoScaling_);
          DARABONBA_PTR_TO_JSON(capacityType, capacityType_);
          DARABONBA_PTR_TO_JSON(messageRetentionTime, messageRetentionTime_);
          DARABONBA_PTR_TO_JSON(msgProcessSpec, msgProcessSpec_);
          DARABONBA_PTR_TO_JSON(provisionedCapacity, provisionedCapacity_);
          DARABONBA_PTR_TO_JSON(sendReceiveRatio, sendReceiveRatio_);
          DARABONBA_PTR_TO_JSON(storageEncryption, storageEncryption_);
          DARABONBA_PTR_TO_JSON(storageSecretKey, storageSecretKey_);
          DARABONBA_PTR_TO_JSON(supportAutoScaling, supportAutoScaling_);
          DARABONBA_PTR_TO_JSON(traceOn, traceOn_);
        };
        friend void from_json(const Darabonba::Json& j, ProductInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(autoScaling, autoScaling_);
          DARABONBA_PTR_FROM_JSON(capacityType, capacityType_);
          DARABONBA_PTR_FROM_JSON(messageRetentionTime, messageRetentionTime_);
          DARABONBA_PTR_FROM_JSON(msgProcessSpec, msgProcessSpec_);
          DARABONBA_PTR_FROM_JSON(provisionedCapacity, provisionedCapacity_);
          DARABONBA_PTR_FROM_JSON(sendReceiveRatio, sendReceiveRatio_);
          DARABONBA_PTR_FROM_JSON(storageEncryption, storageEncryption_);
          DARABONBA_PTR_FROM_JSON(storageSecretKey, storageSecretKey_);
          DARABONBA_PTR_FROM_JSON(supportAutoScaling, supportAutoScaling_);
          DARABONBA_PTR_FROM_JSON(traceOn, traceOn_);
        };
        ProductInfo() = default ;
        ProductInfo(const ProductInfo &) = default ;
        ProductInfo(ProductInfo &&) = default ;
        ProductInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProductInfo() = default ;
        ProductInfo& operator=(const ProductInfo &) = default ;
        ProductInfo& operator=(ProductInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoScaling_ == nullptr
        && this->capacityType_ == nullptr && this->messageRetentionTime_ == nullptr && this->msgProcessSpec_ == nullptr && this->provisionedCapacity_ == nullptr && this->sendReceiveRatio_ == nullptr
        && this->storageEncryption_ == nullptr && this->storageSecretKey_ == nullptr && this->supportAutoScaling_ == nullptr && this->traceOn_ == nullptr; };
        // autoScaling Field Functions 
        bool hasAutoScaling() const { return this->autoScaling_ != nullptr;};
        void deleteAutoScaling() { this->autoScaling_ = nullptr;};
        inline bool getAutoScaling() const { DARABONBA_PTR_GET_DEFAULT(autoScaling_, false) };
        inline ProductInfo& setAutoScaling(bool autoScaling) { DARABONBA_PTR_SET_VALUE(autoScaling_, autoScaling) };


        // capacityType Field Functions 
        bool hasCapacityType() const { return this->capacityType_ != nullptr;};
        void deleteCapacityType() { this->capacityType_ = nullptr;};
        inline string getCapacityType() const { DARABONBA_PTR_GET_DEFAULT(capacityType_, "") };
        inline ProductInfo& setCapacityType(string capacityType) { DARABONBA_PTR_SET_VALUE(capacityType_, capacityType) };


        // messageRetentionTime Field Functions 
        bool hasMessageRetentionTime() const { return this->messageRetentionTime_ != nullptr;};
        void deleteMessageRetentionTime() { this->messageRetentionTime_ = nullptr;};
        inline int32_t getMessageRetentionTime() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionTime_, 0) };
        inline ProductInfo& setMessageRetentionTime(int32_t messageRetentionTime) { DARABONBA_PTR_SET_VALUE(messageRetentionTime_, messageRetentionTime) };


        // msgProcessSpec Field Functions 
        bool hasMsgProcessSpec() const { return this->msgProcessSpec_ != nullptr;};
        void deleteMsgProcessSpec() { this->msgProcessSpec_ = nullptr;};
        inline string getMsgProcessSpec() const { DARABONBA_PTR_GET_DEFAULT(msgProcessSpec_, "") };
        inline ProductInfo& setMsgProcessSpec(string msgProcessSpec) { DARABONBA_PTR_SET_VALUE(msgProcessSpec_, msgProcessSpec) };


        // provisionedCapacity Field Functions 
        bool hasProvisionedCapacity() const { return this->provisionedCapacity_ != nullptr;};
        void deleteProvisionedCapacity() { this->provisionedCapacity_ = nullptr;};
        inline int64_t getProvisionedCapacity() const { DARABONBA_PTR_GET_DEFAULT(provisionedCapacity_, 0L) };
        inline ProductInfo& setProvisionedCapacity(int64_t provisionedCapacity) { DARABONBA_PTR_SET_VALUE(provisionedCapacity_, provisionedCapacity) };


        // sendReceiveRatio Field Functions 
        bool hasSendReceiveRatio() const { return this->sendReceiveRatio_ != nullptr;};
        void deleteSendReceiveRatio() { this->sendReceiveRatio_ = nullptr;};
        inline float getSendReceiveRatio() const { DARABONBA_PTR_GET_DEFAULT(sendReceiveRatio_, 0.0) };
        inline ProductInfo& setSendReceiveRatio(float sendReceiveRatio) { DARABONBA_PTR_SET_VALUE(sendReceiveRatio_, sendReceiveRatio) };


        // storageEncryption Field Functions 
        bool hasStorageEncryption() const { return this->storageEncryption_ != nullptr;};
        void deleteStorageEncryption() { this->storageEncryption_ = nullptr;};
        inline bool getStorageEncryption() const { DARABONBA_PTR_GET_DEFAULT(storageEncryption_, false) };
        inline ProductInfo& setStorageEncryption(bool storageEncryption) { DARABONBA_PTR_SET_VALUE(storageEncryption_, storageEncryption) };


        // storageSecretKey Field Functions 
        bool hasStorageSecretKey() const { return this->storageSecretKey_ != nullptr;};
        void deleteStorageSecretKey() { this->storageSecretKey_ = nullptr;};
        inline string getStorageSecretKey() const { DARABONBA_PTR_GET_DEFAULT(storageSecretKey_, "") };
        inline ProductInfo& setStorageSecretKey(string storageSecretKey) { DARABONBA_PTR_SET_VALUE(storageSecretKey_, storageSecretKey) };


        // supportAutoScaling Field Functions 
        bool hasSupportAutoScaling() const { return this->supportAutoScaling_ != nullptr;};
        void deleteSupportAutoScaling() { this->supportAutoScaling_ = nullptr;};
        inline bool getSupportAutoScaling() const { DARABONBA_PTR_GET_DEFAULT(supportAutoScaling_, false) };
        inline ProductInfo& setSupportAutoScaling(bool supportAutoScaling) { DARABONBA_PTR_SET_VALUE(supportAutoScaling_, supportAutoScaling) };


        // traceOn Field Functions 
        bool hasTraceOn() const { return this->traceOn_ != nullptr;};
        void deleteTraceOn() { this->traceOn_ = nullptr;};
        inline bool getTraceOn() const { DARABONBA_PTR_GET_DEFAULT(traceOn_, false) };
        inline ProductInfo& setTraceOn(bool traceOn) { DARABONBA_PTR_SET_VALUE(traceOn_, traceOn) };


      protected:
        // Specifies whether to enable the elastic TPS feature for the instance.
        // 
        // Valid values:
        // 
        // *   true: enable
        // *   false: disable
        // 
        // This parameter is valid only when the supportAutoScaling parameter is set to enable.
        shared_ptr<bool> autoScaling_ {};
        shared_ptr<string> capacityType_ {};
        // The retention period of messages. Unit: hours.
        // 
        // For information about the valid values of this parameter, see the "Limits on resource quotas" section in [Usage limits](https://help.aliyun.com/document_detail/440347.html).
        // 
        // The storage of messages in ApsaraMQ for RocketMQ is serverless and scalable. You are charged for message storage based on your actual usage. You can change the retention period of messages to adjust storage capacity. For more information, see [Storage fee](https://help.aliyun.com/document_detail/427238.html).
        shared_ptr<int32_t> messageRetentionTime_ {};
        // The computing specification that is used to send and receive messages. For information about the upper limit of TPS, see [Instance specifications](https://help.aliyun.com/document_detail/444715.html).
        shared_ptr<string> msgProcessSpec_ {};
        shared_ptr<int64_t> provisionedCapacity_ {};
        // The ratio between sent messages and received messages in the instance.
        shared_ptr<float> sendReceiveRatio_ {};
        // Indicates whether storage encryption is enabled.
        shared_ptr<bool> storageEncryption_ {};
        // The storage encryption key.
        shared_ptr<string> storageSecretKey_ {};
        // Specifies whether to enable the elastic TPS feature for the instance.
        // 
        // Valid values:
        // 
        // *   true: enable
        // *   false: disable
        // 
        // After you enable the elastic TPS feature for a ApsaraMQ for RocketMQ instance, you can use a specific amount of TPS that exceeds the specification limit. You are charged for the elastic TPS feature. For more information, see [Computing fee](https://help.aliyun.com/document_detail/427237.html).
        // 
        // > The elastic TPS feature is supported by only specific instance editions. For more information, see [Instance specifications](https://help.aliyun.com/document_detail/444715.html).
        shared_ptr<bool> supportAutoScaling_ {};
        // Indicates whether the message trace feature is enabled. Valid values:
        // 
        // *   true
        // *   false
        // 
        // This parameter is not in use. By default, the message trace feature is enabled for ApsaraMQ for RocketMQ instances, regardless of whether this parameter is configured.
        shared_ptr<bool> traceOn_ {};
      };

      class NetworkInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkInfo& obj) { 
          DARABONBA_PTR_TO_JSON(endpoints, endpoints_);
          DARABONBA_PTR_TO_JSON(internetInfo, internetInfo_);
          DARABONBA_PTR_TO_JSON(vpcInfo, vpcInfo_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(endpoints, endpoints_);
          DARABONBA_PTR_FROM_JSON(internetInfo, internetInfo_);
          DARABONBA_PTR_FROM_JSON(vpcInfo, vpcInfo_);
        };
        NetworkInfo() = default ;
        NetworkInfo(const NetworkInfo &) = default ;
        NetworkInfo(NetworkInfo &&) = default ;
        NetworkInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetworkInfo() = default ;
        NetworkInfo& operator=(const NetworkInfo &) = default ;
        NetworkInfo& operator=(NetworkInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VpcInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VpcInfo& obj) { 
            DARABONBA_PTR_TO_JSON(securityGroupIds, securityGroupIds_);
            DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
            DARABONBA_PTR_TO_JSON(vSwitches, vSwitches_);
            DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
          };
          friend void from_json(const Darabonba::Json& j, VpcInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(securityGroupIds, securityGroupIds_);
            DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
            DARABONBA_PTR_FROM_JSON(vSwitches, vSwitches_);
            DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
          };
          VpcInfo() = default ;
          VpcInfo(const VpcInfo &) = default ;
          VpcInfo(VpcInfo &&) = default ;
          VpcInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VpcInfo() = default ;
          VpcInfo& operator=(const VpcInfo &) = default ;
          VpcInfo& operator=(VpcInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class VSwitches : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VSwitches& obj) { 
              DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
              DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
            };
            friend void from_json(const Darabonba::Json& j, VSwitches& obj) { 
              DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
              DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
            };
            VSwitches() = default ;
            VSwitches(const VSwitches &) = default ;
            VSwitches(VSwitches &&) = default ;
            VSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VSwitches() = default ;
            VSwitches& operator=(const VSwitches &) = default ;
            VSwitches& operator=(VSwitches &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->vSwitchId_ == nullptr
        && this->zoneId_ == nullptr; };
            // vSwitchId Field Functions 
            bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
            void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
            inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
            inline VSwitches& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


            // zoneId Field Functions 
            bool hasZoneId() const { return this->zoneId_ != nullptr;};
            void deleteZoneId() { this->zoneId_ = nullptr;};
            inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
            inline VSwitches& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


          protected:
            // The vSwitch ID.
            shared_ptr<string> vSwitchId_ {};
            // The zone ID.
            shared_ptr<string> zoneId_ {};
          };

          virtual bool empty() const override { return this->securityGroupIds_ == nullptr
        && this->vSwitchId_ == nullptr && this->vSwitches_ == nullptr && this->vpcId_ == nullptr; };
          // securityGroupIds Field Functions 
          bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
          void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
          inline string getSecurityGroupIds() const { DARABONBA_PTR_GET_DEFAULT(securityGroupIds_, "") };
          inline VpcInfo& setSecurityGroupIds(string securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };


          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
          inline VpcInfo& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


          // vSwitches Field Functions 
          bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
          void deleteVSwitches() { this->vSwitches_ = nullptr;};
          inline const vector<VpcInfo::VSwitches> & getVSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<VpcInfo::VSwitches>) };
          inline vector<VpcInfo::VSwitches> getVSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<VpcInfo::VSwitches>) };
          inline VpcInfo& setVSwitches(const vector<VpcInfo::VSwitches> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
          inline VpcInfo& setVSwitches(vector<VpcInfo::VSwitches> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline VpcInfo& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        protected:
          // The security group ID.
          shared_ptr<string> securityGroupIds_ {};
          // The ID of the vSwitch with which the instance is associated.
          shared_ptr<string> vSwitchId_ {};
          // The vSwitches.
          shared_ptr<vector<VpcInfo::VSwitches>> vSwitches_ {};
          // The ID of the VPC with which the instance is associated.
          shared_ptr<string> vpcId_ {};
        };

        class InternetInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InternetInfo& obj) { 
            DARABONBA_PTR_TO_JSON(flowOutBandwidth, flowOutBandwidth_);
            DARABONBA_PTR_TO_JSON(flowOutType, flowOutType_);
            DARABONBA_PTR_TO_JSON(internetSpec, internetSpec_);
            DARABONBA_PTR_TO_JSON(ipWhitelist, ipWhitelist_);
          };
          friend void from_json(const Darabonba::Json& j, InternetInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(flowOutBandwidth, flowOutBandwidth_);
            DARABONBA_PTR_FROM_JSON(flowOutType, flowOutType_);
            DARABONBA_PTR_FROM_JSON(internetSpec, internetSpec_);
            DARABONBA_PTR_FROM_JSON(ipWhitelist, ipWhitelist_);
          };
          InternetInfo() = default ;
          InternetInfo(const InternetInfo &) = default ;
          InternetInfo(InternetInfo &&) = default ;
          InternetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InternetInfo() = default ;
          InternetInfo& operator=(const InternetInfo &) = default ;
          InternetInfo& operator=(InternetInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->flowOutBandwidth_ == nullptr
        && this->flowOutType_ == nullptr && this->internetSpec_ == nullptr && this->ipWhitelist_ == nullptr; };
          // flowOutBandwidth Field Functions 
          bool hasFlowOutBandwidth() const { return this->flowOutBandwidth_ != nullptr;};
          void deleteFlowOutBandwidth() { this->flowOutBandwidth_ = nullptr;};
          inline int32_t getFlowOutBandwidth() const { DARABONBA_PTR_GET_DEFAULT(flowOutBandwidth_, 0) };
          inline InternetInfo& setFlowOutBandwidth(int32_t flowOutBandwidth) { DARABONBA_PTR_SET_VALUE(flowOutBandwidth_, flowOutBandwidth) };


          // flowOutType Field Functions 
          bool hasFlowOutType() const { return this->flowOutType_ != nullptr;};
          void deleteFlowOutType() { this->flowOutType_ = nullptr;};
          inline string getFlowOutType() const { DARABONBA_PTR_GET_DEFAULT(flowOutType_, "") };
          inline InternetInfo& setFlowOutType(string flowOutType) { DARABONBA_PTR_SET_VALUE(flowOutType_, flowOutType) };


          // internetSpec Field Functions 
          bool hasInternetSpec() const { return this->internetSpec_ != nullptr;};
          void deleteInternetSpec() { this->internetSpec_ = nullptr;};
          inline string getInternetSpec() const { DARABONBA_PTR_GET_DEFAULT(internetSpec_, "") };
          inline InternetInfo& setInternetSpec(string internetSpec) { DARABONBA_PTR_SET_VALUE(internetSpec_, internetSpec) };


          // ipWhitelist Field Functions 
          bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
          void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
          inline const vector<string> & getIpWhitelist() const { DARABONBA_PTR_GET_CONST(ipWhitelist_, vector<string>) };
          inline vector<string> getIpWhitelist() { DARABONBA_PTR_GET(ipWhitelist_, vector<string>) };
          inline InternetInfo& setIpWhitelist(const vector<string> & ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };
          inline InternetInfo& setIpWhitelist(vector<string> && ipWhitelist) { DARABONBA_PTR_SET_RVALUE(ipWhitelist_, ipWhitelist) };


        protected:
          // The Internet bandwidth. Unit: MB/s.
          shared_ptr<int32_t> flowOutBandwidth_ {};
          // The metering method for Internet usage.
          // 
          // Valid values:
          // 
          // *   PayByBandwidth: pay-by-bandwidth. If the Internet access feature is enabled, specify this value for the parameter.
          // *   uninvolved: N/A. If the Internet access feature is not enabled, specify this value for the parameter.
          shared_ptr<string> flowOutType_ {};
          // Specifies whether to enable the Internet access feature.
          // 
          // Valid values:
          // 
          // *   enable
          // *   disable
          // 
          // By default, ApsaraMQ for RocketMQ instances are accessed in virtual private clouds (VPCs). If you enable the Internet access feature, you are charged for Internet outbound bandwidth. For more information, see [Internet access fee](https://help.aliyun.com/document_detail/427240.html).
          shared_ptr<string> internetSpec_ {};
          // The whitelist that includes the IP addresses that are allowed to access the ApsaraMQ for RocketMQ broker.
          // 
          // *   If this parameter is not configured, all IP addresses are allowed to access the ApsaraMQ for RocketMQ broker over the Internet.
          // *   If this parameter is configured, only the IP addresses that are included in the whitelist can access the ApsaraMQ for RocketMQ broker over the Internet.
          shared_ptr<vector<string>> ipWhitelist_ {};
        };

        class Endpoints : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
            DARABONBA_PTR_TO_JSON(endpointId, endpointId_);
            DARABONBA_PTR_TO_JSON(endpointType, endpointType_);
            DARABONBA_PTR_TO_JSON(endpointUrl, endpointUrl_);
            DARABONBA_PTR_TO_JSON(ipWhitelist, ipWhitelist_);
          };
          friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
            DARABONBA_PTR_FROM_JSON(endpointId, endpointId_);
            DARABONBA_PTR_FROM_JSON(endpointType, endpointType_);
            DARABONBA_PTR_FROM_JSON(endpointUrl, endpointUrl_);
            DARABONBA_PTR_FROM_JSON(ipWhitelist, ipWhitelist_);
          };
          Endpoints() = default ;
          Endpoints(const Endpoints &) = default ;
          Endpoints(Endpoints &&) = default ;
          Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Endpoints() = default ;
          Endpoints& operator=(const Endpoints &) = default ;
          Endpoints& operator=(Endpoints &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endpointId_ == nullptr
        && this->endpointType_ == nullptr && this->endpointUrl_ == nullptr && this->ipWhitelist_ == nullptr; };
          // endpointId Field Functions 
          bool hasEndpointId() const { return this->endpointId_ != nullptr;};
          void deleteEndpointId() { this->endpointId_ = nullptr;};
          inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
          inline Endpoints& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


          // endpointType Field Functions 
          bool hasEndpointType() const { return this->endpointType_ != nullptr;};
          void deleteEndpointType() { this->endpointType_ = nullptr;};
          inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
          inline Endpoints& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


          // endpointUrl Field Functions 
          bool hasEndpointUrl() const { return this->endpointUrl_ != nullptr;};
          void deleteEndpointUrl() { this->endpointUrl_ = nullptr;};
          inline string getEndpointUrl() const { DARABONBA_PTR_GET_DEFAULT(endpointUrl_, "") };
          inline Endpoints& setEndpointUrl(string endpointUrl) { DARABONBA_PTR_SET_VALUE(endpointUrl_, endpointUrl) };


          // ipWhitelist Field Functions 
          bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
          void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
          inline const vector<string> & getIpWhitelist() const { DARABONBA_PTR_GET_CONST(ipWhitelist_, vector<string>) };
          inline vector<string> getIpWhitelist() { DARABONBA_PTR_GET(ipWhitelist_, vector<string>) };
          inline Endpoints& setIpWhitelist(const vector<string> & ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };
          inline Endpoints& setIpWhitelist(vector<string> && ipWhitelist) { DARABONBA_PTR_SET_RVALUE(ipWhitelist_, ipWhitelist) };


        protected:
          shared_ptr<string> endpointId_ {};
          // The type of the endpoint that is used to access the instance.
          // 
          // Valid values:
          // 
          // *   TCP_VPC: VPC endpoint
          // *   TCP_INTERNET: public endpoint
          shared_ptr<string> endpointType_ {};
          // The endpoint that is used to access the instance.
          shared_ptr<string> endpointUrl_ {};
          // The whitelist that includes the IP addresses that are allowed to access the ApsaraMQ for RocketMQ broker over the Internet. This parameter can be configured only if you use the public endpoint to access the instance.
          // 
          // *   If you do not configure an IP address whitelist, all CIDR blocks are allowed to access the ApsaraMQ for RocketMQ broker over the Internet.
          // *   If you configure an IP address whitelist, only the IP addresses in the whitelist are allowed to access the ApsaraMQ for RocketMQ broker over the Internet.
          // 
          // We recommend that you configure internetInfo.ipWhitelist instead of this parameter.
          shared_ptr<vector<string>> ipWhitelist_ {};
        };

        virtual bool empty() const override { return this->endpoints_ == nullptr
        && this->internetInfo_ == nullptr && this->vpcInfo_ == nullptr; };
        // endpoints Field Functions 
        bool hasEndpoints() const { return this->endpoints_ != nullptr;};
        void deleteEndpoints() { this->endpoints_ = nullptr;};
        inline const vector<NetworkInfo::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<NetworkInfo::Endpoints>) };
        inline vector<NetworkInfo::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<NetworkInfo::Endpoints>) };
        inline NetworkInfo& setEndpoints(const vector<NetworkInfo::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
        inline NetworkInfo& setEndpoints(vector<NetworkInfo::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


        // internetInfo Field Functions 
        bool hasInternetInfo() const { return this->internetInfo_ != nullptr;};
        void deleteInternetInfo() { this->internetInfo_ = nullptr;};
        inline const NetworkInfo::InternetInfo & getInternetInfo() const { DARABONBA_PTR_GET_CONST(internetInfo_, NetworkInfo::InternetInfo) };
        inline NetworkInfo::InternetInfo getInternetInfo() { DARABONBA_PTR_GET(internetInfo_, NetworkInfo::InternetInfo) };
        inline NetworkInfo& setInternetInfo(const NetworkInfo::InternetInfo & internetInfo) { DARABONBA_PTR_SET_VALUE(internetInfo_, internetInfo) };
        inline NetworkInfo& setInternetInfo(NetworkInfo::InternetInfo && internetInfo) { DARABONBA_PTR_SET_RVALUE(internetInfo_, internetInfo) };


        // vpcInfo Field Functions 
        bool hasVpcInfo() const { return this->vpcInfo_ != nullptr;};
        void deleteVpcInfo() { this->vpcInfo_ = nullptr;};
        inline const NetworkInfo::VpcInfo & getVpcInfo() const { DARABONBA_PTR_GET_CONST(vpcInfo_, NetworkInfo::VpcInfo) };
        inline NetworkInfo::VpcInfo getVpcInfo() { DARABONBA_PTR_GET(vpcInfo_, NetworkInfo::VpcInfo) };
        inline NetworkInfo& setVpcInfo(const NetworkInfo::VpcInfo & vpcInfo) { DARABONBA_PTR_SET_VALUE(vpcInfo_, vpcInfo) };
        inline NetworkInfo& setVpcInfo(NetworkInfo::VpcInfo && vpcInfo) { DARABONBA_PTR_SET_RVALUE(vpcInfo_, vpcInfo) };


      protected:
        // The endpoints.
        shared_ptr<vector<NetworkInfo::Endpoints>> endpoints_ {};
        // The information about the Internet.
        shared_ptr<NetworkInfo::InternetInfo> internetInfo_ {};
        // The virtual private cloud (VPC) information.
        shared_ptr<NetworkInfo::VpcInfo> vpcInfo_ {};
      };

      class InstanceQuotas : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceQuotas& obj) { 
          DARABONBA_PTR_TO_JSON(freeCount, freeCount_);
          DARABONBA_PTR_TO_JSON(quotaName, quotaName_);
          DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
          DARABONBA_PTR_TO_JSON(usedCount, usedCount_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceQuotas& obj) { 
          DARABONBA_PTR_FROM_JSON(freeCount, freeCount_);
          DARABONBA_PTR_FROM_JSON(quotaName, quotaName_);
          DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
          DARABONBA_PTR_FROM_JSON(usedCount, usedCount_);
        };
        InstanceQuotas() = default ;
        InstanceQuotas(const InstanceQuotas &) = default ;
        InstanceQuotas(InstanceQuotas &&) = default ;
        InstanceQuotas(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceQuotas() = default ;
        InstanceQuotas& operator=(const InstanceQuotas &) = default ;
        InstanceQuotas& operator=(InstanceQuotas &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->freeCount_ == nullptr
        && this->quotaName_ == nullptr && this->totalCount_ == nullptr && this->usedCount_ == nullptr; };
        // freeCount Field Functions 
        bool hasFreeCount() const { return this->freeCount_ != nullptr;};
        void deleteFreeCount() { this->freeCount_ = nullptr;};
        inline double getFreeCount() const { DARABONBA_PTR_GET_DEFAULT(freeCount_, 0.0) };
        inline InstanceQuotas& setFreeCount(double freeCount) { DARABONBA_PTR_SET_VALUE(freeCount_, freeCount) };


        // quotaName Field Functions 
        bool hasQuotaName() const { return this->quotaName_ != nullptr;};
        void deleteQuotaName() { this->quotaName_ = nullptr;};
        inline string getQuotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
        inline InstanceQuotas& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline double getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0.0) };
        inline InstanceQuotas& setTotalCount(double totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


        // usedCount Field Functions 
        bool hasUsedCount() const { return this->usedCount_ != nullptr;};
        void deleteUsedCount() { this->usedCount_ = nullptr;};
        inline double getUsedCount() const { DARABONBA_PTR_GET_DEFAULT(usedCount_, 0.0) };
        inline InstanceQuotas& setUsedCount(double usedCount) { DARABONBA_PTR_SET_VALUE(usedCount_, usedCount) };


      protected:
        // The number of topics that are free of charge on the instance.
        shared_ptr<double> freeCount_ {};
        // The quota name.
        // 
        // Valid value:
        // 
        // *   TOPIC_COUNT: the number of topics that can be created on the instance
        shared_ptr<string> quotaName_ {};
        // The total number of topics on the instance.
        shared_ptr<double> totalCount_ {};
        // The number of used topics on the instance.
        shared_ptr<double> usedCount_ {};
      };

      class ExtConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtConfig& obj) { 
          DARABONBA_PTR_TO_JSON(aclType, aclType_);
          DARABONBA_PTR_TO_JSON(autoScaling, autoScaling_);
          DARABONBA_PTR_TO_JSON(flowOutBandwidth, flowOutBandwidth_);
          DARABONBA_PTR_TO_JSON(flowOutType, flowOutType_);
          DARABONBA_PTR_TO_JSON(internetSpec, internetSpec_);
          DARABONBA_PTR_TO_JSON(messageRetentionTime, messageRetentionTime_);
          DARABONBA_PTR_TO_JSON(msgProcessSpec, msgProcessSpec_);
          DARABONBA_PTR_TO_JSON(sendReceiveRatio, sendReceiveRatio_);
          DARABONBA_PTR_TO_JSON(supportAutoScaling, supportAutoScaling_);
        };
        friend void from_json(const Darabonba::Json& j, ExtConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(aclType, aclType_);
          DARABONBA_PTR_FROM_JSON(autoScaling, autoScaling_);
          DARABONBA_PTR_FROM_JSON(flowOutBandwidth, flowOutBandwidth_);
          DARABONBA_PTR_FROM_JSON(flowOutType, flowOutType_);
          DARABONBA_PTR_FROM_JSON(internetSpec, internetSpec_);
          DARABONBA_PTR_FROM_JSON(messageRetentionTime, messageRetentionTime_);
          DARABONBA_PTR_FROM_JSON(msgProcessSpec, msgProcessSpec_);
          DARABONBA_PTR_FROM_JSON(sendReceiveRatio, sendReceiveRatio_);
          DARABONBA_PTR_FROM_JSON(supportAutoScaling, supportAutoScaling_);
        };
        ExtConfig() = default ;
        ExtConfig(const ExtConfig &) = default ;
        ExtConfig(ExtConfig &&) = default ;
        ExtConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtConfig() = default ;
        ExtConfig& operator=(const ExtConfig &) = default ;
        ExtConfig& operator=(ExtConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aclType_ == nullptr
        && this->autoScaling_ == nullptr && this->flowOutBandwidth_ == nullptr && this->flowOutType_ == nullptr && this->internetSpec_ == nullptr && this->messageRetentionTime_ == nullptr
        && this->msgProcessSpec_ == nullptr && this->sendReceiveRatio_ == nullptr && this->supportAutoScaling_ == nullptr; };
        // aclType Field Functions 
        bool hasAclType() const { return this->aclType_ != nullptr;};
        void deleteAclType() { this->aclType_ = nullptr;};
        inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
        inline ExtConfig& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


        // autoScaling Field Functions 
        bool hasAutoScaling() const { return this->autoScaling_ != nullptr;};
        void deleteAutoScaling() { this->autoScaling_ = nullptr;};
        inline bool getAutoScaling() const { DARABONBA_PTR_GET_DEFAULT(autoScaling_, false) };
        inline ExtConfig& setAutoScaling(bool autoScaling) { DARABONBA_PTR_SET_VALUE(autoScaling_, autoScaling) };


        // flowOutBandwidth Field Functions 
        bool hasFlowOutBandwidth() const { return this->flowOutBandwidth_ != nullptr;};
        void deleteFlowOutBandwidth() { this->flowOutBandwidth_ = nullptr;};
        inline int32_t getFlowOutBandwidth() const { DARABONBA_PTR_GET_DEFAULT(flowOutBandwidth_, 0) };
        inline ExtConfig& setFlowOutBandwidth(int32_t flowOutBandwidth) { DARABONBA_PTR_SET_VALUE(flowOutBandwidth_, flowOutBandwidth) };


        // flowOutType Field Functions 
        bool hasFlowOutType() const { return this->flowOutType_ != nullptr;};
        void deleteFlowOutType() { this->flowOutType_ = nullptr;};
        inline string getFlowOutType() const { DARABONBA_PTR_GET_DEFAULT(flowOutType_, "") };
        inline ExtConfig& setFlowOutType(string flowOutType) { DARABONBA_PTR_SET_VALUE(flowOutType_, flowOutType) };


        // internetSpec Field Functions 
        bool hasInternetSpec() const { return this->internetSpec_ != nullptr;};
        void deleteInternetSpec() { this->internetSpec_ = nullptr;};
        inline string getInternetSpec() const { DARABONBA_PTR_GET_DEFAULT(internetSpec_, "") };
        inline ExtConfig& setInternetSpec(string internetSpec) { DARABONBA_PTR_SET_VALUE(internetSpec_, internetSpec) };


        // messageRetentionTime Field Functions 
        bool hasMessageRetentionTime() const { return this->messageRetentionTime_ != nullptr;};
        void deleteMessageRetentionTime() { this->messageRetentionTime_ = nullptr;};
        inline int32_t getMessageRetentionTime() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionTime_, 0) };
        inline ExtConfig& setMessageRetentionTime(int32_t messageRetentionTime) { DARABONBA_PTR_SET_VALUE(messageRetentionTime_, messageRetentionTime) };


        // msgProcessSpec Field Functions 
        bool hasMsgProcessSpec() const { return this->msgProcessSpec_ != nullptr;};
        void deleteMsgProcessSpec() { this->msgProcessSpec_ = nullptr;};
        inline string getMsgProcessSpec() const { DARABONBA_PTR_GET_DEFAULT(msgProcessSpec_, "") };
        inline ExtConfig& setMsgProcessSpec(string msgProcessSpec) { DARABONBA_PTR_SET_VALUE(msgProcessSpec_, msgProcessSpec) };


        // sendReceiveRatio Field Functions 
        bool hasSendReceiveRatio() const { return this->sendReceiveRatio_ != nullptr;};
        void deleteSendReceiveRatio() { this->sendReceiveRatio_ = nullptr;};
        inline float getSendReceiveRatio() const { DARABONBA_PTR_GET_DEFAULT(sendReceiveRatio_, 0.0) };
        inline ExtConfig& setSendReceiveRatio(float sendReceiveRatio) { DARABONBA_PTR_SET_VALUE(sendReceiveRatio_, sendReceiveRatio) };


        // supportAutoScaling Field Functions 
        bool hasSupportAutoScaling() const { return this->supportAutoScaling_ != nullptr;};
        void deleteSupportAutoScaling() { this->supportAutoScaling_ = nullptr;};
        inline bool getSupportAutoScaling() const { DARABONBA_PTR_GET_DEFAULT(supportAutoScaling_, false) };
        inline ExtConfig& setSupportAutoScaling(bool supportAutoScaling) { DARABONBA_PTR_SET_VALUE(supportAutoScaling_, supportAutoScaling) };


      protected:
        // The authentication type of the instance.
        // 
        // Valid value:
        // 
        // *   default: intelligent authentication
        shared_ptr<string> aclType_ {};
        // Specifies whether to enable the elastic TPS feature for the instance.
        // 
        // Valid values:
        // 
        // *   true: enable
        // *   false: disable
        // 
        // This parameter is valid only when the supportAutoScaling parameter is set to enable.
        shared_ptr<bool> autoScaling_ {};
        // The Internet bandwidth. Unit: MB/s.
        shared_ptr<int32_t> flowOutBandwidth_ {};
        // The metering method of Internet usage.
        // 
        // Valid values:
        // 
        // *   PayByTraffic: pay-by-traffic
        // *   paybybandwidth: pay-by-bandwidth
        // *   uninvolved: N/A
        shared_ptr<string> flowOutType_ {};
        // Indicates whether Internet access is enabled.
        // 
        // Valid values:
        // 
        // *   enable
        // *   disable
        // 
        // By default, you can access ApsaraMQ for RocketMQ instances in virtual private clouds (VPCs). If you enable the Internet access feature, you are charged for Internet outbound bandwidth. For more information, see [Internet access fees](https://help.aliyun.com/document_detail/427240.html).
        shared_ptr<string> internetSpec_ {};
        // The retention period of messages. Unit: hours.
        // 
        // For information about the valid values of this parameter, see the "Limits on resource quotas" section in [Usage limits](https://help.aliyun.com/document_detail/440347.html).
        // 
        // The storage of messages in ApsaraMQ for RocketMQ is serverless and scalable. You are charged for message storage based on your actual usage. You can change the retention period of messages to adjust storage capacity. For more information, see [Storage fee](https://help.aliyun.com/document_detail/427238.html).
        shared_ptr<int32_t> messageRetentionTime_ {};
        // The computing specification that is used to send and receive messages. For information about the upper limit of TPS, see [Instance specifications](https://help.aliyun.com/document_detail/444715.html).
        shared_ptr<string> msgProcessSpec_ {};
        // The ratio between sent messages and received messages in the instance.
        shared_ptr<float> sendReceiveRatio_ {};
        // Specifies whether the elastic TPS feature is supported by the instance.
        // 
        // Valid values:
        // 
        // *   true: enable
        // *   false: disable
        // 
        // After you enable the elastic TPS feature for a ApsaraMQ for RocketMQ instance, you can use a specific amount of TPS that exceeds the specification limit. You are charged for the elastic TPS feature. For more information, see [Computing fee](https://help.aliyun.com/document_detail/427237.html).
        // 
        // > The elastic TPS feature is supported only by specific instance editions. For more information, see [Instance specifications](https://help.aliyun.com/document_detail/444715.html).
        shared_ptr<bool> supportAutoScaling_ {};
      };

      class AclInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AclInfo& obj) { 
          DARABONBA_PTR_TO_JSON(aclType, aclType_);
          DARABONBA_PTR_TO_JSON(aclTypes, aclTypes_);
          DARABONBA_PTR_TO_JSON(defaultVpcAuthFree, defaultVpcAuthFree_);
        };
        friend void from_json(const Darabonba::Json& j, AclInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(aclType, aclType_);
          DARABONBA_PTR_FROM_JSON(aclTypes, aclTypes_);
          DARABONBA_PTR_FROM_JSON(defaultVpcAuthFree, defaultVpcAuthFree_);
        };
        AclInfo() = default ;
        AclInfo(const AclInfo &) = default ;
        AclInfo(AclInfo &&) = default ;
        AclInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AclInfo() = default ;
        AclInfo& operator=(const AclInfo &) = default ;
        AclInfo& operator=(AclInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aclType_ == nullptr
        && this->aclTypes_ == nullptr && this->defaultVpcAuthFree_ == nullptr; };
        // aclType Field Functions 
        bool hasAclType() const { return this->aclType_ != nullptr;};
        void deleteAclType() { this->aclType_ = nullptr;};
        inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
        inline AclInfo& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


        // aclTypes Field Functions 
        bool hasAclTypes() const { return this->aclTypes_ != nullptr;};
        void deleteAclTypes() { this->aclTypes_ = nullptr;};
        inline const vector<string> & getAclTypes() const { DARABONBA_PTR_GET_CONST(aclTypes_, vector<string>) };
        inline vector<string> getAclTypes() { DARABONBA_PTR_GET(aclTypes_, vector<string>) };
        inline AclInfo& setAclTypes(const vector<string> & aclTypes) { DARABONBA_PTR_SET_VALUE(aclTypes_, aclTypes) };
        inline AclInfo& setAclTypes(vector<string> && aclTypes) { DARABONBA_PTR_SET_RVALUE(aclTypes_, aclTypes) };


        // defaultVpcAuthFree Field Functions 
        bool hasDefaultVpcAuthFree() const { return this->defaultVpcAuthFree_ != nullptr;};
        void deleteDefaultVpcAuthFree() { this->defaultVpcAuthFree_ = nullptr;};
        inline bool getDefaultVpcAuthFree() const { DARABONBA_PTR_GET_DEFAULT(defaultVpcAuthFree_, false) };
        inline AclInfo& setDefaultVpcAuthFree(bool defaultVpcAuthFree) { DARABONBA_PTR_SET_VALUE(defaultVpcAuthFree_, defaultVpcAuthFree) };


      protected:
        // The authentication type of the instance. This parameter is no longer in use. We recommend that you configure aclTypes.
        // 
        // Valid values:
        // 
        // - default: intelligent identity authentication
        // 
        // - apache_acl:access control list (ACL) identity authentication**
        shared_ptr<string> aclType_ {};
        // The authentication types of the instance.
        shared_ptr<vector<string>> aclTypes_ {};
        // Indicates whether the authentication-free in VPCs feature is enabled.
        // 
        // Valid values:
        // 
        // *   true
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        // *   false
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        shared_ptr<bool> defaultVpcAuthFree_ {};
      };

      class AccountInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccountInfo& obj) { 
          DARABONBA_PTR_TO_JSON(username, username_);
        };
        friend void from_json(const Darabonba::Json& j, AccountInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(username, username_);
        };
        AccountInfo() = default ;
        AccountInfo(const AccountInfo &) = default ;
        AccountInfo(AccountInfo &&) = default ;
        AccountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccountInfo() = default ;
        AccountInfo& operator=(const AccountInfo &) = default ;
        AccountInfo& operator=(AccountInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->username_ == nullptr; };
        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline AccountInfo& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      protected:
        // The username of the instance. If you access a ApsaraMQ for RocketMQ instance over the Internet, you must configure the username and password of the instance in the SDK code for authentication.
        shared_ptr<string> username_ {};
      };

      virtual bool empty() const override { return this->accountInfo_ == nullptr
        && this->aclInfo_ == nullptr && this->bid_ == nullptr && this->commodityCode_ == nullptr && this->createTime_ == nullptr && this->expireTime_ == nullptr
        && this->extConfig_ == nullptr && this->groupCount_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceQuotas_ == nullptr
        && this->networkInfo_ == nullptr && this->paymentType_ == nullptr && this->productInfo_ == nullptr && this->regionId_ == nullptr && this->releaseTime_ == nullptr
        && this->remark_ == nullptr && this->resourceGroupId_ == nullptr && this->seriesCode_ == nullptr && this->serviceCode_ == nullptr && this->software_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->subSeriesCode_ == nullptr && this->tags_ == nullptr && this->topicCount_ == nullptr
        && this->updateTime_ == nullptr && this->userId_ == nullptr; };
      // accountInfo Field Functions 
      bool hasAccountInfo() const { return this->accountInfo_ != nullptr;};
      void deleteAccountInfo() { this->accountInfo_ = nullptr;};
      inline const Data::AccountInfo & getAccountInfo() const { DARABONBA_PTR_GET_CONST(accountInfo_, Data::AccountInfo) };
      inline Data::AccountInfo getAccountInfo() { DARABONBA_PTR_GET(accountInfo_, Data::AccountInfo) };
      inline Data& setAccountInfo(const Data::AccountInfo & accountInfo) { DARABONBA_PTR_SET_VALUE(accountInfo_, accountInfo) };
      inline Data& setAccountInfo(Data::AccountInfo && accountInfo) { DARABONBA_PTR_SET_RVALUE(accountInfo_, accountInfo) };


      // aclInfo Field Functions 
      bool hasAclInfo() const { return this->aclInfo_ != nullptr;};
      void deleteAclInfo() { this->aclInfo_ = nullptr;};
      inline const Data::AclInfo & getAclInfo() const { DARABONBA_PTR_GET_CONST(aclInfo_, Data::AclInfo) };
      inline Data::AclInfo getAclInfo() { DARABONBA_PTR_GET(aclInfo_, Data::AclInfo) };
      inline Data& setAclInfo(const Data::AclInfo & aclInfo) { DARABONBA_PTR_SET_VALUE(aclInfo_, aclInfo) };
      inline Data& setAclInfo(Data::AclInfo && aclInfo) { DARABONBA_PTR_SET_RVALUE(aclInfo_, aclInfo) };


      // bid Field Functions 
      bool hasBid() const { return this->bid_ != nullptr;};
      void deleteBid() { this->bid_ = nullptr;};
      inline string getBid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
      inline Data& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Data& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // extConfig Field Functions 
      bool hasExtConfig() const { return this->extConfig_ != nullptr;};
      void deleteExtConfig() { this->extConfig_ = nullptr;};
      inline const Data::ExtConfig & getExtConfig() const { DARABONBA_PTR_GET_CONST(extConfig_, Data::ExtConfig) };
      inline Data::ExtConfig getExtConfig() { DARABONBA_PTR_GET(extConfig_, Data::ExtConfig) };
      inline Data& setExtConfig(const Data::ExtConfig & extConfig) { DARABONBA_PTR_SET_VALUE(extConfig_, extConfig) };
      inline Data& setExtConfig(Data::ExtConfig && extConfig) { DARABONBA_PTR_SET_RVALUE(extConfig_, extConfig) };


      // groupCount Field Functions 
      bool hasGroupCount() const { return this->groupCount_ != nullptr;};
      void deleteGroupCount() { this->groupCount_ = nullptr;};
      inline int64_t getGroupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0L) };
      inline Data& setGroupCount(int64_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceQuotas Field Functions 
      bool hasInstanceQuotas() const { return this->instanceQuotas_ != nullptr;};
      void deleteInstanceQuotas() { this->instanceQuotas_ = nullptr;};
      inline const vector<Data::InstanceQuotas> & getInstanceQuotas() const { DARABONBA_PTR_GET_CONST(instanceQuotas_, vector<Data::InstanceQuotas>) };
      inline vector<Data::InstanceQuotas> getInstanceQuotas() { DARABONBA_PTR_GET(instanceQuotas_, vector<Data::InstanceQuotas>) };
      inline Data& setInstanceQuotas(const vector<Data::InstanceQuotas> & instanceQuotas) { DARABONBA_PTR_SET_VALUE(instanceQuotas_, instanceQuotas) };
      inline Data& setInstanceQuotas(vector<Data::InstanceQuotas> && instanceQuotas) { DARABONBA_PTR_SET_RVALUE(instanceQuotas_, instanceQuotas) };


      // networkInfo Field Functions 
      bool hasNetworkInfo() const { return this->networkInfo_ != nullptr;};
      void deleteNetworkInfo() { this->networkInfo_ = nullptr;};
      inline const Data::NetworkInfo & getNetworkInfo() const { DARABONBA_PTR_GET_CONST(networkInfo_, Data::NetworkInfo) };
      inline Data::NetworkInfo getNetworkInfo() { DARABONBA_PTR_GET(networkInfo_, Data::NetworkInfo) };
      inline Data& setNetworkInfo(const Data::NetworkInfo & networkInfo) { DARABONBA_PTR_SET_VALUE(networkInfo_, networkInfo) };
      inline Data& setNetworkInfo(Data::NetworkInfo && networkInfo) { DARABONBA_PTR_SET_RVALUE(networkInfo_, networkInfo) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
      inline Data& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // productInfo Field Functions 
      bool hasProductInfo() const { return this->productInfo_ != nullptr;};
      void deleteProductInfo() { this->productInfo_ = nullptr;};
      inline const Data::ProductInfo & getProductInfo() const { DARABONBA_PTR_GET_CONST(productInfo_, Data::ProductInfo) };
      inline Data::ProductInfo getProductInfo() { DARABONBA_PTR_GET(productInfo_, Data::ProductInfo) };
      inline Data& setProductInfo(const Data::ProductInfo & productInfo) { DARABONBA_PTR_SET_VALUE(productInfo_, productInfo) };
      inline Data& setProductInfo(Data::ProductInfo && productInfo) { DARABONBA_PTR_SET_RVALUE(productInfo_, productInfo) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // releaseTime Field Functions 
      bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
      void deleteReleaseTime() { this->releaseTime_ = nullptr;};
      inline string getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
      inline Data& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Data& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // seriesCode Field Functions 
      bool hasSeriesCode() const { return this->seriesCode_ != nullptr;};
      void deleteSeriesCode() { this->seriesCode_ = nullptr;};
      inline string getSeriesCode() const { DARABONBA_PTR_GET_DEFAULT(seriesCode_, "") };
      inline Data& setSeriesCode(string seriesCode) { DARABONBA_PTR_SET_VALUE(seriesCode_, seriesCode) };


      // serviceCode Field Functions 
      bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
      void deleteServiceCode() { this->serviceCode_ = nullptr;};
      inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
      inline Data& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


      // software Field Functions 
      bool hasSoftware() const { return this->software_ != nullptr;};
      void deleteSoftware() { this->software_ = nullptr;};
      inline const Data::Software & getSoftware() const { DARABONBA_PTR_GET_CONST(software_, Data::Software) };
      inline Data::Software getSoftware() { DARABONBA_PTR_GET(software_, Data::Software) };
      inline Data& setSoftware(const Data::Software & software) { DARABONBA_PTR_SET_VALUE(software_, software) };
      inline Data& setSoftware(Data::Software && software) { DARABONBA_PTR_SET_RVALUE(software_, software) };


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


      // subSeriesCode Field Functions 
      bool hasSubSeriesCode() const { return this->subSeriesCode_ != nullptr;};
      void deleteSubSeriesCode() { this->subSeriesCode_ = nullptr;};
      inline string getSubSeriesCode() const { DARABONBA_PTR_GET_DEFAULT(subSeriesCode_, "") };
      inline Data& setSubSeriesCode(string subSeriesCode) { DARABONBA_PTR_SET_VALUE(subSeriesCode_, subSeriesCode) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
      inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
      inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // topicCount Field Functions 
      bool hasTopicCount() const { return this->topicCount_ != nullptr;};
      void deleteTopicCount() { this->topicCount_ = nullptr;};
      inline int64_t getTopicCount() const { DARABONBA_PTR_GET_DEFAULT(topicCount_, 0L) };
      inline Data& setTopicCount(int64_t topicCount) { DARABONBA_PTR_SET_VALUE(topicCount_, topicCount) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The account information.
      shared_ptr<Data::AccountInfo> accountInfo_ {};
      // The information about access control.
      shared_ptr<Data::AclInfo> aclInfo_ {};
      // The business ID (BID) of the commodity.
      shared_ptr<string> bid_ {};
      // The commodity code of the instance. The commodity code of a ApsaraMQ for RocketMQ 5.0 instance has a similar format as ons_rmqsub_public_cn.
      shared_ptr<string> commodityCode_ {};
      // The time when the instance was created.
      shared_ptr<string> createTime_ {};
      // The time when the instance expires.
      shared_ptr<string> expireTime_ {};
      // The extended configurations. We recommend you configure productInfo, internetInfo, or aclInfo instead of this parameter.
      shared_ptr<Data::ExtConfig> extConfig_ {};
      // The number of groups.
      shared_ptr<int64_t> groupCount_ {};
      // The ID of the instance
      shared_ptr<string> instanceId_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The instance quotas.
      shared_ptr<vector<Data::InstanceQuotas>> instanceQuotas_ {};
      // The network information.
      shared_ptr<Data::NetworkInfo> networkInfo_ {};
      // The billing method of the instance.
      // 
      // Valid values:
      // 
      // *   PayAsYouGo
      // *   Subscription
      shared_ptr<string> paymentType_ {};
      // The extended configurations of the instance.
      shared_ptr<Data::ProductInfo> productInfo_ {};
      // The ID of the region in which the instance resides.
      shared_ptr<string> regionId_ {};
      // The time when the instance was released.
      shared_ptr<string> releaseTime_ {};
      // The description of the instance.
      shared_ptr<string> remark_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The primary edition of the instance. For information about the differences between primary edition instances, see [Instance selection](https://help.aliyun.com/document_detail/444722.html).
      // 
      // Valid values:
      // 
      // *   standard: Standard Edition
      // *   ultimate: Enterprise Platinum Edition
      // *   professional: Professional Edition
      shared_ptr<string> seriesCode_ {};
      // The code of the service to which the instance belongs. The service code of ApsaraMQ for RocketMQ is rmq.
      shared_ptr<string> serviceCode_ {};
      // The instance software information.
      shared_ptr<Data::Software> software_ {};
      // The time when the instance was started.
      shared_ptr<string> startTime_ {};
      // The status of the instance.
      // 
      // Valid values:
      // 
      // *   RELEASED
      // *   RUNNING
      // *   STOPPED
      // *   CHANGING
      // *   CREATING
      shared_ptr<string> status_ {};
      // The sub-category edition of the instance. For information about the differences between sub-category edition instances, see [Instance selection](https://help.aliyun.com/document_detail/444722.html).
      // 
      // Valid values:
      // 
      // *   cluster_ha: Cluster High-availability Edition
      // *   single_node: Standalone Edition
      shared_ptr<string> subSeriesCode_ {};
      // The resource tags.
      shared_ptr<vector<Data::Tags>> tags_ {};
      // The number of topics.
      shared_ptr<int64_t> topicCount_ {};
      // The time when the instance was last modified.
      shared_ptr<string> updateTime_ {};
      // The ID of the user who owns the instance.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInstanceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetInstanceResponseBody::Data) };
    inline GetInstanceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetInstanceResponseBody::Data) };
    inline GetInstanceResponseBody& setData(const GetInstanceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInstanceResponseBody& setData(GetInstanceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetInstanceResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetInstanceResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetInstanceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the call failed.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<GetInstanceResponseBody::Data> data_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message.
    shared_ptr<string> dynamicMessage_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The ID of the request. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
