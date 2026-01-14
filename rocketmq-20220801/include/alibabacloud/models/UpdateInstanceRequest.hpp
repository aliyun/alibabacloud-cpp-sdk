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
        DARABONBA_PTR_TO_JSON(autoScaling, autoScaling_);
        DARABONBA_PTR_TO_JSON(messageRetentionTime, messageRetentionTime_);
        DARABONBA_PTR_TO_JSON(sendReceiveRatio, sendReceiveRatio_);
        DARABONBA_PTR_TO_JSON(traceOn, traceOn_);
      };
      friend void from_json(const Darabonba::Json& j, ProductInfo& obj) { 
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
      virtual bool empty() const override { return this->autoScaling_ == nullptr
        && this->messageRetentionTime_ == nullptr && this->sendReceiveRatio_ == nullptr && this->traceOn_ == nullptr; };
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
      // Specifies whether to enable the elastic transactions per second (TPS) feature for the instance.
      // 
      // Valid values:
      // 
      // *   true
      // *   false
      // 
      // After you enable the elastic TPS feature for an ApsaraMQ for RocketMQ instance, you can use a specific number of TPS that exceeds the specification limit. You are charged for using the elastic TPS feature. For more information, see [Computing fees](https://help.aliyun.com/document_detail/427237.html).
      // 
      // >  The elastic TPS feature is supported only by specific instance editions. For more information, see [Instance editions](https://help.aliyun.com/document_detail/444715.html).
      shared_ptr<bool> autoScaling_ {};
      // The retention period of messages. Unit: hours.
      // 
      // For information about the valid values of this parameter, see the "Limits on resource quotas" section of the [Limits](https://help.aliyun.com/document_detail/440347.html) topic.
      // 
      // ApsaraMQ for RocketMQ supports serverless scaling of message storage. You are charged storage fees based on your actual storage usage. You can change the retention period of messages to manage storage capacity. For more information, see [Storage fees](https://help.aliyun.com/document_detail/427238.html).
      shared_ptr<int32_t> messageRetentionTime_ {};
      // The ratio of the number of messages that you can send to the number of messages that you can receive on the instance.
      // 
      // Value values: 0.25 to 1.
      shared_ptr<float> sendReceiveRatio_ {};
      // Specifies whether to enable the message trace feature.
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
        // The whitelist that includes the IP addresses that are allowed to access the ApsaraMQ for RocketMQ broker over the Internet.
        // 
        // *   If you do not configure an IP address whitelist, all CIDR blocks are allowed to access the ApsaraMQ for RocketMQ broker over the Internet.
        // *   If you configure an IP address whitelist, only the IP addresses in the whitelist are allowed to access the ApsaraMQ for RocketMQ broker over the Internet.
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
      // The information about the Internet over which the instance is accessed. This parameter takes effect only if the Internet access feature is enabled for the instance.
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
      // Indicates whether the authentication-free in VPCs feature is enabled.
      // Indicates whether the authentication-free in VPCs feature is enabled.
      // Valid values:
      // - true
      // - false
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
    // The access control list for the instance.
    shared_ptr<UpdateInstanceRequest::AclInfo> aclInfo_ {};
    // The updated name of the instance.
    shared_ptr<string> instanceName_ {};
    // The updated network information about the instance.
    shared_ptr<UpdateInstanceRequest::NetworkInfo> networkInfo_ {};
    // Additional configurations of the instance.
    shared_ptr<UpdateInstanceRequest::ProductInfo> productInfo_ {};
    // The updated description of the instance.
    shared_ptr<string> remark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
