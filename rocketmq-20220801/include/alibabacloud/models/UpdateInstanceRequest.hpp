// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
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
  class UpdateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aclInfo, aclInfo_);
      DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(networkInfo, networkInfo_);
      DARABONBA_PTR_TO_JSON(productInfo, productInfo_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aclInfo, aclInfo_);
      DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(networkInfo, networkInfo_);
      DARABONBA_PTR_FROM_JSON(productInfo, productInfo_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
    };
    UpdateInstanceRequest() = default ;
    UpdateInstanceRequest(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest(UpdateInstanceRequest &&) = default ;
    UpdateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequest() = default ;
    UpdateInstanceRequest& operator=(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest& operator=(UpdateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProductInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductInfo& obj) { 
        DARABONBA_PTR_TO_JSON(adaptiveElasticity, adaptiveElasticity_);
        DARABONBA_PTR_TO_JSON(autoScaling, autoScaling_);
        DARABONBA_PTR_TO_JSON(messageRetentionTime, messageRetentionTime_);
        DARABONBA_PTR_TO_JSON(sendReceiveRatio, sendReceiveRatio_);
        DARABONBA_PTR_TO_JSON(traceOn, traceOn_);
      };
      friend void from_json(const Darabonba::Json& j, ProductInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(adaptiveElasticity, adaptiveElasticity_);
        DARABONBA_PTR_FROM_JSON(autoScaling, autoScaling_);
        DARABONBA_PTR_FROM_JSON(messageRetentionTime, messageRetentionTime_);
        DARABONBA_PTR_FROM_JSON(sendReceiveRatio, sendReceiveRatio_);
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
        && this->autoScaling_ == nullptr && this->messageRetentionTime_ == nullptr && this->sendReceiveRatio_ == nullptr && this->traceOn_ == nullptr; };
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


      // messageRetentionTime Field Functions 
      bool hasMessageRetentionTime() const { return this->messageRetentionTime_ != nullptr;};
      void deleteMessageRetentionTime() { this->messageRetentionTime_ = nullptr;};
      inline int32_t getMessageRetentionTime() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionTime_, 0) };
      inline ProductInfo& setMessageRetentionTime(int32_t messageRetentionTime) { DARABONBA_PTR_SET_VALUE(messageRetentionTime_, messageRetentionTime) };


      // sendReceiveRatio Field Functions 
      bool hasSendReceiveRatio() const { return this->sendReceiveRatio_ != nullptr;};
      void deleteSendReceiveRatio() { this->sendReceiveRatio_ = nullptr;};
      inline float getSendReceiveRatio() const { DARABONBA_PTR_GET_DEFAULT(sendReceiveRatio_, 0.0) };
      inline ProductInfo& setSendReceiveRatio(float sendReceiveRatio) { DARABONBA_PTR_SET_VALUE(sendReceiveRatio_, sendReceiveRatio) };


      // traceOn Field Functions 
      bool hasTraceOn() const { return this->traceOn_ != nullptr;};
      void deleteTraceOn() { this->traceOn_ = nullptr;};
      inline bool getTraceOn() const { DARABONBA_PTR_GET_DEFAULT(traceOn_, false) };
      inline ProductInfo& setTraceOn(bool traceOn) { DARABONBA_PTR_SET_VALUE(traceOn_, traceOn) };


    protected:
      // Specifies whether to enable the adaptive elasticity capability. A value of true indicates enabled, and a value of false indicates shutdown.
      shared_ptr<bool> adaptiveElasticity_ {};
      // Specifies whether to enable the burstable elastic capacity beyond the specification.
      // 
      // After the burstable elastic capacity is enabled, ApsaraMQ for RocketMQ allows the instance to exceed the TPS limit of the base specification within a certain range. The portion that exceeds the base specification incurs additional elastic specification fees. For more information about billing, see [Computing fee](https://help.aliyun.com/document_detail/427237.html).
      // 
      // 
      // > Only instances of specific specifications support the burstable elastic specification capability. For more information about supported instances, see [Instance specifications](https://help.aliyun.com/document_detail/444715.html).
      shared_ptr<bool> autoScaling_ {};
      // The message retention period. Unit: hours.
      // 
      // For the valid values, see [Limits](https://help.aliyun.com/document_detail/440347.html) > Resource Quotas > Message retention period limit.
      // 
      // The log broker in ApsaraMQ for RocketMQ is fully serverless and elastic. Fees are charged based on the actual storage space used. You can control the storage capacity of messages by adjusting the message retention period. For more information, see [Storage fee](https://help.aliyun.com/document_detail/427238.html).
      shared_ptr<int32_t> messageRetentionTime_ {};
      // The ratio of messages sent to messages accepted.
      // 
      // Valid values: [0.25, 1]
      shared_ptr<float> sendReceiveRatio_ {};
      // Specifies whether to enable the message trace feature.
      // 
      // <props="intl">This parameter does not take effect. Regardless of whether this parameter is enabled, the instance supports the message trace feature by default.
      // <props="china">This parameter takes effect only for Serverless instances. If the message trace feature is enabled, message trace fees are incurred. For more information about billing, see [Serverless billing](https://help.aliyun.com/document_detail/2586280.html).
      // <props="china">For pay-as-you-go and subscription instances, this parameter does not take effect. The message trace feature is supported by default regardless of whether this parameter is enabled.
      shared_ptr<bool> traceOn_ {};
    };

    class NetworkInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkInfo& obj) { 
        DARABONBA_PTR_TO_JSON(internetInfo, internetInfo_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(internetInfo, internetInfo_);
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
      class InternetInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InternetInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ipWhitelist, ipWhitelist_);
        };
        friend void from_json(const Darabonba::Json& j, InternetInfo& obj) { 
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
        virtual bool empty() const override { return this->ipWhitelist_ == nullptr; };
        // ipWhitelist Field Functions 
        bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
        void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
        inline const vector<string> & getIpWhitelist() const { DARABONBA_PTR_GET_CONST(ipWhitelist_, vector<string>) };
        inline vector<string> getIpWhitelist() { DARABONBA_PTR_GET(ipWhitelist_, vector<string>) };
        inline InternetInfo& setIpWhitelist(const vector<string> & ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };
        inline InternetInfo& setIpWhitelist(vector<string> && ipWhitelist) { DARABONBA_PTR_SET_RVALUE(ipWhitelist_, ipWhitelist) };


      protected:
        // The public network access IP whitelist.
        // 
        // - If no IP whitelist is configured, all IP address ranges are allowed to access the ApsaraMQ for RocketMQ server over the public network by default.
        // - If an IP whitelist is configured, only the IP addresses in the whitelist are allowed to access the ApsaraMQ for RocketMQ server over the public network.
        shared_ptr<vector<string>> ipWhitelist_ {};
      };

      virtual bool empty() const override { return this->internetInfo_ == nullptr; };
      // internetInfo Field Functions 
      bool hasInternetInfo() const { return this->internetInfo_ != nullptr;};
      void deleteInternetInfo() { this->internetInfo_ = nullptr;};
      inline const NetworkInfo::InternetInfo & getInternetInfo() const { DARABONBA_PTR_GET_CONST(internetInfo_, NetworkInfo::InternetInfo) };
      inline NetworkInfo::InternetInfo getInternetInfo() { DARABONBA_PTR_GET(internetInfo_, NetworkInfo::InternetInfo) };
      inline NetworkInfo& setInternetInfo(const NetworkInfo::InternetInfo & internetInfo) { DARABONBA_PTR_SET_VALUE(internetInfo_, internetInfo) };
      inline NetworkInfo& setInternetInfo(NetworkInfo::InternetInfo && internetInfo) { DARABONBA_PTR_SET_RVALUE(internetInfo_, internetInfo) };


    protected:
      // The public network information. This parameter is valid only when the public network access feature is enabled for the instance.
      shared_ptr<NetworkInfo::InternetInfo> internetInfo_ {};
    };

    class AclInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AclInfo& obj) { 
        DARABONBA_PTR_TO_JSON(aclTypes, aclTypes_);
        DARABONBA_PTR_TO_JSON(defaultVpcAuthFree, defaultVpcAuthFree_);
      };
      friend void from_json(const Darabonba::Json& j, AclInfo& obj) { 
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
      virtual bool empty() const override { return this->aclTypes_ == nullptr
        && this->defaultVpcAuthFree_ == nullptr; };
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
      // The authentication type of the instance.
      shared_ptr<vector<string>> aclTypes_ {};
      // Indicates whether password-free access is enabled for VPC connections under the intelligent identity recognition type.
      shared_ptr<bool> defaultVpcAuthFree_ {};
    };

    virtual bool empty() const override { return this->aclInfo_ == nullptr
        && this->instanceName_ == nullptr && this->networkInfo_ == nullptr && this->productInfo_ == nullptr && this->remark_ == nullptr; };
    // aclInfo Field Functions 
    bool hasAclInfo() const { return this->aclInfo_ != nullptr;};
    void deleteAclInfo() { this->aclInfo_ = nullptr;};
    inline const UpdateInstanceRequest::AclInfo & getAclInfo() const { DARABONBA_PTR_GET_CONST(aclInfo_, UpdateInstanceRequest::AclInfo) };
    inline UpdateInstanceRequest::AclInfo getAclInfo() { DARABONBA_PTR_GET(aclInfo_, UpdateInstanceRequest::AclInfo) };
    inline UpdateInstanceRequest& setAclInfo(const UpdateInstanceRequest::AclInfo & aclInfo) { DARABONBA_PTR_SET_VALUE(aclInfo_, aclInfo) };
    inline UpdateInstanceRequest& setAclInfo(UpdateInstanceRequest::AclInfo && aclInfo) { DARABONBA_PTR_SET_RVALUE(aclInfo_, aclInfo) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // networkInfo Field Functions 
    bool hasNetworkInfo() const { return this->networkInfo_ != nullptr;};
    void deleteNetworkInfo() { this->networkInfo_ = nullptr;};
    inline const UpdateInstanceRequest::NetworkInfo & getNetworkInfo() const { DARABONBA_PTR_GET_CONST(networkInfo_, UpdateInstanceRequest::NetworkInfo) };
    inline UpdateInstanceRequest::NetworkInfo getNetworkInfo() { DARABONBA_PTR_GET(networkInfo_, UpdateInstanceRequest::NetworkInfo) };
    inline UpdateInstanceRequest& setNetworkInfo(const UpdateInstanceRequest::NetworkInfo & networkInfo) { DARABONBA_PTR_SET_VALUE(networkInfo_, networkInfo) };
    inline UpdateInstanceRequest& setNetworkInfo(UpdateInstanceRequest::NetworkInfo && networkInfo) { DARABONBA_PTR_SET_RVALUE(networkInfo_, networkInfo) };


    // productInfo Field Functions 
    bool hasProductInfo() const { return this->productInfo_ != nullptr;};
    void deleteProductInfo() { this->productInfo_ = nullptr;};
    inline const UpdateInstanceRequest::ProductInfo & getProductInfo() const { DARABONBA_PTR_GET_CONST(productInfo_, UpdateInstanceRequest::ProductInfo) };
    inline UpdateInstanceRequest::ProductInfo getProductInfo() { DARABONBA_PTR_GET(productInfo_, UpdateInstanceRequest::ProductInfo) };
    inline UpdateInstanceRequest& setProductInfo(const UpdateInstanceRequest::ProductInfo & productInfo) { DARABONBA_PTR_SET_VALUE(productInfo_, productInfo) };
    inline UpdateInstanceRequest& setProductInfo(UpdateInstanceRequest::ProductInfo && productInfo) { DARABONBA_PTR_SET_RVALUE(productInfo_, productInfo) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateInstanceRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The access control information.
    shared_ptr<UpdateInstanceRequest::AclInfo> aclInfo_ {};
    // The updated instance name.
    shared_ptr<string> instanceName_ {};
    // The updated network information of the instance.
    shared_ptr<UpdateInstanceRequest::NetworkInfo> networkInfo_ {};
    // The extension configurations of the instance.
    shared_ptr<UpdateInstanceRequest::ProductInfo> productInfo_ {};
    // The updated remarks for the instance.
    shared_ptr<string> remark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
