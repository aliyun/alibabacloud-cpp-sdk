// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
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
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aclInfo, aclInfo_);
      DARABONBA_PTR_TO_JSON(autoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(autoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(networkInfo, networkInfo_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(period, period_);
      DARABONBA_PTR_TO_JSON(periodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(productInfo, productInfo_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(seriesCode, seriesCode_);
      DARABONBA_PTR_TO_JSON(serviceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(subSeriesCode, subSeriesCode_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aclInfo, aclInfo_);
      DARABONBA_PTR_FROM_JSON(autoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(autoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(networkInfo, networkInfo_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(period, period_);
      DARABONBA_PTR_FROM_JSON(periodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(productInfo, productInfo_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(seriesCode, seriesCode_);
      DARABONBA_PTR_FROM_JSON(serviceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(subSeriesCode, subSeriesCode_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateInstanceRequest() = default ;
    CreateInstanceRequest(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest(CreateInstanceRequest &&) = default ;
    CreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequest() = default ;
    CreateInstanceRequest& operator=(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest& operator=(CreateInstanceRequest &&) = default ;
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
      // The key of the resource tag.
      shared_ptr<string> key_ {};
      // The value of the resource tag.
      shared_ptr<string> value_ {};
    };

    class ProductInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductInfo& obj) { 
        DARABONBA_PTR_TO_JSON(adaptiveElasticity, adaptiveElasticity_);
        DARABONBA_PTR_TO_JSON(autoScaling, autoScaling_);
        DARABONBA_PTR_TO_JSON(capacityType, capacityType_);
        DARABONBA_PTR_TO_JSON(drReplicationMode, drReplicationMode_);
        DARABONBA_PTR_TO_JSON(messageRetentionTime, messageRetentionTime_);
        DARABONBA_PTR_TO_JSON(msgProcessSpec, msgProcessSpec_);
        DARABONBA_PTR_TO_JSON(provisionedCapacity, provisionedCapacity_);
        DARABONBA_PTR_TO_JSON(sendReceiveRatio, sendReceiveRatio_);
        DARABONBA_PTR_TO_JSON(storageEncryption, storageEncryption_);
        DARABONBA_PTR_TO_JSON(storageSecretKey, storageSecretKey_);
        DARABONBA_PTR_TO_JSON(traceOn, traceOn_);
      };
      friend void from_json(const Darabonba::Json& j, ProductInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(adaptiveElasticity, adaptiveElasticity_);
        DARABONBA_PTR_FROM_JSON(autoScaling, autoScaling_);
        DARABONBA_PTR_FROM_JSON(capacityType, capacityType_);
        DARABONBA_PTR_FROM_JSON(drReplicationMode, drReplicationMode_);
        DARABONBA_PTR_FROM_JSON(messageRetentionTime, messageRetentionTime_);
        DARABONBA_PTR_FROM_JSON(msgProcessSpec, msgProcessSpec_);
        DARABONBA_PTR_FROM_JSON(provisionedCapacity, provisionedCapacity_);
        DARABONBA_PTR_FROM_JSON(sendReceiveRatio, sendReceiveRatio_);
        DARABONBA_PTR_FROM_JSON(storageEncryption, storageEncryption_);
        DARABONBA_PTR_FROM_JSON(storageSecretKey, storageSecretKey_);
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
      virtual bool empty() const override { return this->adaptiveElasticity_ == nullptr
        && this->autoScaling_ == nullptr && this->capacityType_ == nullptr && this->drReplicationMode_ == nullptr && this->messageRetentionTime_ == nullptr && this->msgProcessSpec_ == nullptr
        && this->provisionedCapacity_ == nullptr && this->sendReceiveRatio_ == nullptr && this->storageEncryption_ == nullptr && this->storageSecretKey_ == nullptr && this->traceOn_ == nullptr; };
      // adaptiveElasticity Field Functions 
      bool hasAdaptiveElasticity() const { return this->adaptiveElasticity_ != nullptr;};
      void deleteAdaptiveElasticity() { this->adaptiveElasticity_ = nullptr;};
      inline bool getAdaptiveElasticity() const { DARABONBA_PTR_GET_DEFAULT(adaptiveElasticity_, false) };
      inline ProductInfo& setAdaptiveElasticity(bool adaptiveElasticity) { DARABONBA_PTR_SET_VALUE(adaptiveElasticity_, adaptiveElasticity) };


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


      // drReplicationMode Field Functions 
      bool hasDrReplicationMode() const { return this->drReplicationMode_ != nullptr;};
      void deleteDrReplicationMode() { this->drReplicationMode_ = nullptr;};
      inline string getDrReplicationMode() const { DARABONBA_PTR_GET_DEFAULT(drReplicationMode_, "") };
      inline ProductInfo& setDrReplicationMode(string drReplicationMode) { DARABONBA_PTR_SET_VALUE(drReplicationMode_, drReplicationMode) };


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


      // traceOn Field Functions 
      bool hasTraceOn() const { return this->traceOn_ != nullptr;};
      void deleteTraceOn() { this->traceOn_ = nullptr;};
      inline bool getTraceOn() const { DARABONBA_PTR_GET_DEFAULT(traceOn_, false) };
      inline ProductInfo& setTraceOn(bool traceOn) { DARABONBA_PTR_SET_VALUE(traceOn_, traceOn) };


    protected:
      // Specifies whether to enable adaptive elasticity. A value of true indicates that adaptive elasticity is enabled. A value of false indicates that adaptive elasticity is shutdown.
      shared_ptr<bool> adaptiveElasticity_ {};
      // Specifies whether to enable burstable elastic capacity beyond the specification.
      // 
      // After burstable elastic capacity is enabled, MSMQ for RocketMQ allows the instance to exceed the TPS limit of the base specification within a certain range. The portion that exceeds the base specification incurs additional elastic specification fees. For more information about billing, see [Computing fees](https://help.aliyun.com/document_detail/427237.html).
      // 
      // 
      // > Only instances of certain specifications support burstable elastic capacity. For more information about supported instances, see [Instance specifications](https://help.aliyun.com/document_detail/444715.html).
      shared_ptr<bool> autoScaling_ {};
      // The capacity pattern.
      shared_ptr<string> capacityType_ {};
      // The cross-region replication pattern.
      shared_ptr<string> drReplicationMode_ {};
      // The message retention period. Unit: hours.
      // 
      // For the valid value range, see [Limits](https://help.aliyun.com/document_detail/440347.html) > Resource Quotas > Message Retention Period.
      // 
      // The log broker in MSMQ for RocketMQ is fully serverless and elastic. Fees are charged based on the actual storage space used. You can control the storage capacity by adjusting the message retention period. For more information, see [Storage fees](https://help.aliyun.com/document_detail/427238.html).
      shared_ptr<int32_t> messageRetentionTime_ {};
      // The message sending and receiving computing specification. For more information about the TPS upper limit for message sending and receiving, see [Instance specifications](https://help.aliyun.com/document_detail/444715.html).
      shared_ptr<string> msgProcessSpec_ {};
      // The provisioned capacity.
      shared_ptr<int64_t> provisionedCapacity_ {};
      // The ratio of message sending TPS to the total message sending and accepting TPS of the instance.
      // 
      // For example, if the TPS upper limit for message sending and accepting of the instance is 1000 per second and the message sending ratio is 0.8, the TPS upper limit for message sending is 800 per second and the TPS upper limit for message accepting is 200 per second.
      // 
      // Valid values: [0.05, 0.95]. Default value: 0.5.
      shared_ptr<float> sendReceiveRatio_ {};
      // Indicates whether storage encryption is enabled.
      shared_ptr<bool> storageEncryption_ {};
      // The key for storage encryption.
      shared_ptr<string> storageSecretKey_ {};
      // Specifies whether to enable the message trace feature.
      // 
      // true: Enable the message trace feature.
      // false: Shutdown the message trace feature.
      // This parameter takes effect only for Serverless instances. If the message trace feature is enabled, message trace fees are incurred. For more information about billing, see the Serverless billing description. For pay-as-you-go and subscription instances, this parameter does not take effect. The message trace feature is supported by default regardless of whether this parameter is enabled.
      shared_ptr<bool> traceOn_ {};
    };

    class NetworkInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkInfo& obj) { 
        DARABONBA_PTR_TO_JSON(internetInfo, internetInfo_);
        DARABONBA_PTR_TO_JSON(vpcInfo, vpcInfo_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkInfo& obj) { 
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
          };
          friend void from_json(const Darabonba::Json& j, VSwitches& obj) { 
            DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
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
          virtual bool empty() const override { return this->vSwitchId_ == nullptr; };
          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
          inline VSwitches& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        protected:
          // The ID of the vSwitch associated with the instance.
          shared_ptr<string> vSwitchId_ {};
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
        // The ID of the vSwitch associated with the instance. If multiple vSwitches exist, separate them with vertical bars (|).
        // 
        // > After an ApsaraMQ for RocketMQ instance is created, the selected vSwitch cannot be changed. To modify the associated vSwitch, release the existing ApsaraMQ for RocketMQ instance and purchase a new one.
        // 
        // <notice>This field is not recommended. Use the vSwitches field instead.</notice>
        shared_ptr<string> vSwitchId_ {};
        // The list of vSwitches.
        // 
        // > After an ApsaraMQ for RocketMQ instance is created, the selected vSwitch cannot be changed. To modify the associated vSwitch, release the existing ApsaraMQ for RocketMQ instance and purchase a new one.
        // 
        // <notice>This is a required field. Because the vSwitchId field is no longer recommended, use this field to configure vSwitches.</notice>
        shared_ptr<vector<VpcInfo::VSwitches>> vSwitches_ {};
        // The ID of the VPC to associate with the instance.
        // 
        // > After an ApsaraMQ for RocketMQ instance is created, the selected VPC cannot be changed. To modify the associated VPC, release the existing ApsaraMQ for RocketMQ instance and purchase a new one.
        // 
        // This parameter is required.
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
        // The Internet bandwidth specification. Unit: Mb/s.
        // 
        // This parameter is required only when the Internet billing type is set to fixed bandwidth billing.
        // 
        // Valid values: 1 to 1000.
        shared_ptr<int32_t> flowOutBandwidth_ {};
        // The Internet billing type.
        // 
        // This parameter is required.
        shared_ptr<string> flowOutType_ {};
        // Specifies whether to enable public network access.
        // 
        // By default, instances support VPC access. If you enable public network access, ApsaraMQ for RocketMQ charges fees for public network downstream bandwidth. For more information about billing, see [Public network access fees](https://help.aliyun.com/document_detail/427240.html).
        // 
        // This parameter is required.
        shared_ptr<string> internetSpec_ {};
        // The public network access IP whitelist. Only public endpoints support IP whitelist configuration. VPC endpoints do not support this feature.
        // 
        // - If no IP whitelist is configured, all IP address ranges are allowed to access the ApsaraMQ for RocketMQ server over the Internet by default.
        // - If an IP whitelist is configured, only the IP addresses in the whitelist are allowed to access the ApsaraMQ for RocketMQ server over the Internet.
        shared_ptr<vector<string>> ipWhitelist_ {};
      };

      virtual bool empty() const override { return this->internetInfo_ == nullptr
        && this->vpcInfo_ == nullptr; };
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
      // The Internet configuration information.
      // 
      // This parameter is required.
      shared_ptr<NetworkInfo::InternetInfo> internetInfo_ {};
      // The VPC configuration information.
      // 
      // This parameter is required.
      shared_ptr<NetworkInfo::VpcInfo> vpcInfo_ {};
    };

    class AclInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AclInfo& obj) { 
        DARABONBA_PTR_TO_JSON(defaultVpcAuthFree, defaultVpcAuthFree_);
      };
      friend void from_json(const Darabonba::Json& j, AclInfo& obj) { 
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
      virtual bool empty() const override { return this->defaultVpcAuthFree_ == nullptr; };
      // defaultVpcAuthFree Field Functions 
      bool hasDefaultVpcAuthFree() const { return this->defaultVpcAuthFree_ != nullptr;};
      void deleteDefaultVpcAuthFree() { this->defaultVpcAuthFree_ = nullptr;};
      inline bool getDefaultVpcAuthFree() const { DARABONBA_PTR_GET_DEFAULT(defaultVpcAuthFree_, false) };
      inline AclInfo& setDefaultVpcAuthFree(bool defaultVpcAuthFree) { DARABONBA_PTR_SET_VALUE(defaultVpcAuthFree_, defaultVpcAuthFree) };


    protected:
      // Specifies whether to enable authentication-free access for VPC endpoints when the intelligent identity recognition type is used. Valid values:
      // - true: Enable authentication-free access.
      // - false: Disable authentication-free access.
      shared_ptr<bool> defaultVpcAuthFree_ {};
    };

    virtual bool empty() const override { return this->aclInfo_ == nullptr
        && this->autoRenew_ == nullptr && this->autoRenewPeriod_ == nullptr && this->commodityCode_ == nullptr && this->instanceName_ == nullptr && this->networkInfo_ == nullptr
        && this->paymentType_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->productInfo_ == nullptr && this->remark_ == nullptr
        && this->resourceGroupId_ == nullptr && this->seriesCode_ == nullptr && this->serviceCode_ == nullptr && this->subSeriesCode_ == nullptr && this->tags_ == nullptr
        && this->clientToken_ == nullptr; };
    // aclInfo Field Functions 
    bool hasAclInfo() const { return this->aclInfo_ != nullptr;};
    void deleteAclInfo() { this->aclInfo_ = nullptr;};
    inline const CreateInstanceRequest::AclInfo & getAclInfo() const { DARABONBA_PTR_GET_CONST(aclInfo_, CreateInstanceRequest::AclInfo) };
    inline CreateInstanceRequest::AclInfo getAclInfo() { DARABONBA_PTR_GET(aclInfo_, CreateInstanceRequest::AclInfo) };
    inline CreateInstanceRequest& setAclInfo(const CreateInstanceRequest::AclInfo & aclInfo) { DARABONBA_PTR_SET_VALUE(aclInfo_, aclInfo) };
    inline CreateInstanceRequest& setAclInfo(CreateInstanceRequest::AclInfo && aclInfo) { DARABONBA_PTR_SET_RVALUE(aclInfo_, aclInfo) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateInstanceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline CreateInstanceRequest& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline CreateInstanceRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // networkInfo Field Functions 
    bool hasNetworkInfo() const { return this->networkInfo_ != nullptr;};
    void deleteNetworkInfo() { this->networkInfo_ = nullptr;};
    inline const CreateInstanceRequest::NetworkInfo & getNetworkInfo() const { DARABONBA_PTR_GET_CONST(networkInfo_, CreateInstanceRequest::NetworkInfo) };
    inline CreateInstanceRequest::NetworkInfo getNetworkInfo() { DARABONBA_PTR_GET(networkInfo_, CreateInstanceRequest::NetworkInfo) };
    inline CreateInstanceRequest& setNetworkInfo(const CreateInstanceRequest::NetworkInfo & networkInfo) { DARABONBA_PTR_SET_VALUE(networkInfo_, networkInfo) };
    inline CreateInstanceRequest& setNetworkInfo(CreateInstanceRequest::NetworkInfo && networkInfo) { DARABONBA_PTR_SET_RVALUE(networkInfo_, networkInfo) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateInstanceRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateInstanceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateInstanceRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // productInfo Field Functions 
    bool hasProductInfo() const { return this->productInfo_ != nullptr;};
    void deleteProductInfo() { this->productInfo_ = nullptr;};
    inline const CreateInstanceRequest::ProductInfo & getProductInfo() const { DARABONBA_PTR_GET_CONST(productInfo_, CreateInstanceRequest::ProductInfo) };
    inline CreateInstanceRequest::ProductInfo getProductInfo() { DARABONBA_PTR_GET(productInfo_, CreateInstanceRequest::ProductInfo) };
    inline CreateInstanceRequest& setProductInfo(const CreateInstanceRequest::ProductInfo & productInfo) { DARABONBA_PTR_SET_VALUE(productInfo_, productInfo) };
    inline CreateInstanceRequest& setProductInfo(CreateInstanceRequest::ProductInfo && productInfo) { DARABONBA_PTR_SET_RVALUE(productInfo_, productInfo) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateInstanceRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // seriesCode Field Functions 
    bool hasSeriesCode() const { return this->seriesCode_ != nullptr;};
    void deleteSeriesCode() { this->seriesCode_ = nullptr;};
    inline string getSeriesCode() const { DARABONBA_PTR_GET_DEFAULT(seriesCode_, "") };
    inline CreateInstanceRequest& setSeriesCode(string seriesCode) { DARABONBA_PTR_SET_VALUE(seriesCode_, seriesCode) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline CreateInstanceRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // subSeriesCode Field Functions 
    bool hasSubSeriesCode() const { return this->subSeriesCode_ != nullptr;};
    void deleteSubSeriesCode() { this->subSeriesCode_ = nullptr;};
    inline string getSubSeriesCode() const { DARABONBA_PTR_GET_DEFAULT(subSeriesCode_, "") };
    inline CreateInstanceRequest& setSubSeriesCode(string subSeriesCode) { DARABONBA_PTR_SET_VALUE(subSeriesCode_, subSeriesCode) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateInstanceRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateInstanceRequest::Tags>) };
    inline vector<CreateInstanceRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateInstanceRequest::Tags>) };
    inline CreateInstanceRequest& setTags(const vector<CreateInstanceRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateInstanceRequest& setTags(vector<CreateInstanceRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The access control information.
    shared_ptr<CreateInstanceRequest::AclInfo> aclInfo_ {};
    // Specifies whether to enable auto-renewal. This parameter takes effect only when the billing method of the instance is set to Subscription.
    shared_ptr<bool> autoRenew_ {};
    // The Unified Auto Renewal Cycle. This parameter takes effect only when auto-renewal is enabled. Unit: months.
    // 
    // Valid values:
    // 
    // - Monthly renewal: 1, 2, 3, 6, 12
    shared_ptr<int32_t> autoRenewPeriod_ {};
    // The commodity code.
    // 
    // <props="china">- ons_rmqsub_public_cn: subscription instance.
    // 
    // <props="china">- ons_rmqpost_public_cn: pay-as-you-go instance.
    // 
    // <props="china">- ons_rmqsrvlesspost_public_cn: serverless instance.
    // 
    // <props="intl">- ons_rmqpost_public_intl: pay-as-you-go.
    // 
    // <props="intl">- ons_rmqsub_public_intl: subscription.
    // <props="intl">- ons_rmqsrvlesspost_public_intl: serverless instance.
    // This parameter is required for serverless instances.
    shared_ptr<string> commodityCode_ {};
    // The name of the instance to be created.
    // 
    // If you do not specify this parameter, the instance ID is used as the instance name.
    shared_ptr<string> instanceName_ {};
    // The network configuration information.
    // 
    // This parameter is required.
    shared_ptr<CreateInstanceRequest::NetworkInfo> networkInfo_ {};
    // The billing method of the instance. ApsaraMQ for RocketMQ supports subscription and pay-as-you-go billing methods.
    // 
    // For more information, see [Billable methods](https://help.aliyun.com/document_detail/427234.html).
    // 
    // This parameter is required.
    shared_ptr<string> paymentType_ {};
    // The subscription duration. This parameter takes effect only when the billing method of the instance is set to Subscription.
    // 
    // Valid values:
    // 
    // - Monthly subscription: 1, 2, 3, 4, 5, 6
    // 
    // - Yearly subscription: 1, 2, 3
    shared_ptr<int32_t> period_ {};
    // The minimum epoch unit of the subscription duration.
    shared_ptr<string> periodUnit_ {};
    // The instance specification information.
    shared_ptr<CreateInstanceRequest::ProductInfo> productInfo_ {};
    // The remarks of the instance.
    shared_ptr<string> remark_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The primary series encoding of the instance. For more information about the differences between primary series, see [Product selection](https://help.aliyun.com/document_detail/444722.html).
    // 
    // This parameter is required.
    shared_ptr<string> seriesCode_ {};
    // The service encoding of the instance. The service encoding for MSMQ for RocketMQ is rmq.
    // 
    // This parameter is required.
    shared_ptr<string> serviceCode_ {};
    // The sub-series encoding of the instance. For more information about the differences between sub-series, see [Product selection](https://help.aliyun.com/document_detail/444722.html).
    // 
    // If the primary series is set to ultimate (Platinum Edition), the sub-series can only be set to cluster_ha (Cluster High Availability Edition).
    // >Notice: After the instance is created, the sub-series cannot be changed.
    // 
    // This parameter is required.
    shared_ptr<string> subSeriesCode_ {};
    // The list of resource tags.
    shared_ptr<vector<CreateInstanceRequest::Tags>> tags_ {};
    // The client token that is used to ensure the idempotence of the request. The client generates the value of this parameter, which must be unique among different requests. The token can be up to 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
