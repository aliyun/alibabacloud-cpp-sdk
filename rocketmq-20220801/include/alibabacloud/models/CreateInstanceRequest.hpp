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
      // The `key` of the tag.
      shared_ptr<string> key_ {};
      // The `value` of the tag.
      shared_ptr<string> value_ {};
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
        && this->storageEncryption_ == nullptr && this->storageSecretKey_ == nullptr && this->traceOn_ == nullptr; };
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
      // *   true
      // *   false
      // 
      // After you enable the elastic TPS feature for an ApsaraMQ for RocketMQ instance, you can use a specific amount of TPS that exceeds the specification limit. You are charged for the elastic TPS feature. For more information, see [Computing fees](https://help.aliyun.com/document_detail/427237.html).
      // 
      // >  The elastic TPS feature is supported only by instances of specific editions. For more information, see [Instance editions](https://help.aliyun.com/document_detail/444715.html).
      shared_ptr<bool> autoScaling_ {};
      shared_ptr<string> capacityType_ {};
      // The retention period of messages. Unit: hours.
      // 
      // For information about the valid values of this parameter, see the "Limits on resource quotas" section of the [Limits](https://help.aliyun.com/document_detail/440347.html) topic.
      // 
      // ApsaraMQ for RocketMQ supports serverless scaling of message storage. You are charged storage fees based on your actual storage usage. You can change the retention period of messages to manage storage capacity. For more information, see [Storage fees](https://help.aliyun.com/document_detail/427238.html).
      shared_ptr<int32_t> messageRetentionTime_ {};
      // The computing specification that specifies the messaging transactions per second (TPS) of the instance. For more information, see [Instance editions](https://help.aliyun.com/document_detail/444715.html).
      shared_ptr<string> msgProcessSpec_ {};
      shared_ptr<int64_t> provisionedCapacity_ {};
      // The ratio of the message sending TPS to the messaging TPS of the instance.
      // 
      // For example, if the maximum messaging TPS of an instance is 1,000 and the ratio of the message sending TPS to the messaging TPS of the instance is 0.8, the maximum message sending TPS of the instance is 800 and the maximum message receiving TPS is 200.
      // 
      // Valid values: 0 to 1. Default value: 0.5.
      shared_ptr<float> sendReceiveRatio_ {};
      // Specifies whether to enable the encryption at rest feature.
      shared_ptr<bool> storageEncryption_ {};
      // The key for encryption at rest.
      shared_ptr<string> storageSecretKey_ {};
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
          // The ID of the vSwitch with which the instance is associated.
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
        // The ID of the security group to which the instance belongs.
        shared_ptr<string> securityGroupIds_ {};
        // The ID of the vSwitch with which the instance is associated. If you want to specify multiple vSwitches, separate the vSwitches with vertical bars (|).
        // 
        // >  After you create an ApsaraMQ for RocketMQ instance, you cannot change the vSwitch with which the instance is associated. If you want to change the vSwitch with which the instance is associated, you must release the instance and purchase a new instance.
        // 
        // >  We recommend that you configure vSwitches instead of this parameter.
        shared_ptr<string> vSwitchId_ {};
        // The vSwitches.
        // 
        // >  After you create an ApsaraMQ for RocketMQ instance, you cannot change the vSwitch with which the instance is associated. If you want to change the vSwitch with which the instance is associated, you must release the instance and purchase a new instance.
        // 
        // >  This parameter is required. We recommend that you configure this parameter instead of vSwitchId.
        shared_ptr<vector<VpcInfo::VSwitches>> vSwitches_ {};
        // The ID of the VPC with which the instance to be created is associated.
        // 
        // >  After you create an ApsaraMQ for RocketMQ instance, you cannot change the VPC with which the instance is associated. If you want to change the VPC with which the instance is associated, you must release the instance and create a new instance.
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
        // The Internet bandwidth. Unit: MB/s.
        // 
        // This parameter is required only if you set flowOutType to payByBandwidth.
        // 
        // Valid values: 1 to 1000.
        shared_ptr<int32_t> flowOutBandwidth_ {};
        // The metering method of Internet usage.
        // 
        // Valid values:
        // 
        // *   payByBandwidth: pay-by-bandwidth. This value is valid only if you enable Internet access.
        // *   payByTraffic: pay-by-traffic. This value is valid only if you enable Internet access.
        // *   uninvolved: No metering method is involved. This value is valid only if you disable Internet access.
        // 
        // This parameter is required.
        shared_ptr<string> flowOutType_ {};
        // Specifies whether to enable the Internet access feature.
        // 
        // Valid values:
        // 
        // *   enable
        // *   disable
        // 
        // By default, ApsaraMQ for RocketMQ allows you to access instances in VPCs. If you enable Internet access for an instance, you can access the instance over the Internet. After you enable this feature, you are charged for outbound Internet traffic. For more information, see [Internet access fees](https://help.aliyun.com/document_detail/427240.html).
        // 
        // This parameter is required.
        shared_ptr<string> internetSpec_ {};
        // The whitelist that includes the CIDR blocks that are allowed to access the ApsaraMQ for RocketMQ broker over the Internet. This parameter can be configured only if you use the public endpoint to access the instance.
        // 
        // *   If you do not configure an IP address whitelist, all CIDR blocks are allowed to access the ApsaraMQ for RocketMQ broker over the Internet.
        // *   If you configure an IP address whitelist, only the CIDR blocks in the whitelist are allowed to access the ApsaraMQ for RocketMQ broker over the Internet.
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
      // The Internet-related configurations.
      // 
      // This parameter is required.
      shared_ptr<NetworkInfo::InternetInfo> internetInfo_ {};
      // The virtual private cloud (VPC)-related configurations.
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
    shared_ptr<CreateInstanceRequest::AclInfo> aclInfo_ {};
    // Specifies whether to enable auto-renewal for the instance. This parameter takes effect only if you set paymentType to Subscription. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> autoRenew_ {};
    // The auto-renewal cycle of the instance. This parameter takes effect only if you set autoRenew to true. Unit: months.
    // 
    // Valid values:
    // 
    // *   Monthly renewal: 1, 2, 3, 6, and 12
    shared_ptr<int32_t> autoRenewPeriod_ {};
    // The commodity code. Valid values:
    // 
    // *   ons_rmqpost_public_intl: pay-as-you-go
    // *   ons_rmqsub_public_intl: subscription
    // *   ons_rmqsrvlesspost_public_intl: serverless instance
    // serverless instance requires this parameter
    shared_ptr<string> commodityCode_ {};
    // The name of the instance that you want to create.
    // 
    // If you leave this parameter empty, the instance ID is used as the instance name.
    shared_ptr<string> instanceName_ {};
    // The information about the network.
    // 
    // This parameter is required.
    shared_ptr<CreateInstanceRequest::NetworkInfo> networkInfo_ {};
    // The billing method of the instance. ApsaraMQ for RocketMQ supports the subscription and pay-as-you-go billing methods.
    // 
    // Valid values:
    // 
    // *   PayAsYouGo: This billing method allows you to use resources before you pay for the resources.
    // *   Subscription: This billing method allows you to use resources after you pay for the resources.
    // 
    // For more information, see [Billing methods](https://help.aliyun.com/document_detail/427234.html).
    // 
    // This parameter is required.
    shared_ptr<string> paymentType_ {};
    // The subscription duration of the instance. This parameter takes effect only if you set paymentType to Subscription.
    // 
    // Valid values:
    // 
    // *   Monthly subscription: 1, 2, 3, 4, 5, and 6
    // *   Yearly subscription: 1, 2, and 3
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration.
    // 
    // Valid values:
    // 
    // *   Month
    // *   Year
    shared_ptr<string> periodUnit_ {};
    // The information about instance specifications.
    shared_ptr<CreateInstanceRequest::ProductInfo> productInfo_ {};
    // The instance description.
    shared_ptr<string> remark_ {};
    // The ID of the resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The primary edition of the instance. For information about the differences among primary edition instances, see [Instance selection](https://help.aliyun.com/document_detail/444722.html).
    // 
    // Valid values:
    // 
    // *   standard: Standard Edition
    // *   ultimate: Enterprise Platinum Edition
    // *   professional: Professional Edition
    // 
    // >  After you create an instance, you can only upgrade the primary edition of the instance. The following editions are sorted in ascending order: Standard Edition, Professional Edition, Enterprise Platinum Edition. For example, you can upgrade an instance from Standard Edition to Professional Edition, but you cannot downgrade an instance from Professional Edition to Standard Edition.
    // 
    // This parameter is required.
    shared_ptr<string> seriesCode_ {};
    // The code of the service to which the instance belongs. The service code of ApsaraMQ for RocketMQ is rmq.
    // 
    // This parameter is required.
    shared_ptr<string> serviceCode_ {};
    // The sub-category edition of the instance. For information about the differences among sub-category edition instances, see [Instance selection](https://help.aliyun.com/document_detail/444722.html).
    // 
    // Valid values:
    // 
    // *   cluster_ha: Cluster High-availability Edition
    // *   single_node: Standalone Edition
    // *   serverless: serverless
    // 
    // If you set seriesCode to ultimate, you can set this parameter only to cluster_ha.
    // 
    // >  After you create an instance, you cannot change the sub-category edition of the instance.
    // 
    // Valid values:
    // 
    // *   serverless: serverless
    // *   cluster_ha: Cluster High-availability Edition
    // *   single_node: Standalone Edition
    // 
    // This parameter is required.
    shared_ptr<string> subSeriesCode_ {};
    // The tags that you want to add to the instance.
    shared_ptr<vector<CreateInstanceRequest::Tags>> tags_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value of this parameter, but you must ensure that the value is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
