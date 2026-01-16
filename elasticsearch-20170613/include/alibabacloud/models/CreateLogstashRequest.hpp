// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOGSTASHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOGSTASHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CreateLogstashRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLogstashRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(paymentInfo, paymentInfo_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLogstashRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(paymentInfo, paymentInfo_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateLogstashRequest() = default ;
    CreateLogstashRequest(const CreateLogstashRequest &) = default ;
    CreateLogstashRequest(CreateLogstashRequest &&) = default ;
    CreateLogstashRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLogstashRequest() = default ;
    CreateLogstashRequest& operator=(const CreateLogstashRequest &) = default ;
    CreateLogstashRequest& operator=(CreateLogstashRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PaymentInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PaymentInfo& obj) { 
        DARABONBA_PTR_TO_JSON(autoRenewDuration, autoRenewDuration_);
        DARABONBA_PTR_TO_JSON(duration, duration_);
        DARABONBA_PTR_TO_JSON(isAutoRenew, isAutoRenew_);
        DARABONBA_PTR_TO_JSON(pricingCycle, pricingCycle_);
      };
      friend void from_json(const Darabonba::Json& j, PaymentInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(autoRenewDuration, autoRenewDuration_);
        DARABONBA_PTR_FROM_JSON(duration, duration_);
        DARABONBA_PTR_FROM_JSON(isAutoRenew, isAutoRenew_);
        DARABONBA_PTR_FROM_JSON(pricingCycle, pricingCycle_);
      };
      PaymentInfo() = default ;
      PaymentInfo(const PaymentInfo &) = default ;
      PaymentInfo(PaymentInfo &&) = default ;
      PaymentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PaymentInfo() = default ;
      PaymentInfo& operator=(const PaymentInfo &) = default ;
      PaymentInfo& operator=(PaymentInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoRenewDuration_ == nullptr
        && this->duration_ == nullptr && this->isAutoRenew_ == nullptr && this->pricingCycle_ == nullptr; };
      // autoRenewDuration Field Functions 
      bool hasAutoRenewDuration() const { return this->autoRenewDuration_ != nullptr;};
      void deleteAutoRenewDuration() { this->autoRenewDuration_ = nullptr;};
      inline int64_t getAutoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDuration_, 0L) };
      inline PaymentInfo& setAutoRenewDuration(int64_t autoRenewDuration) { DARABONBA_PTR_SET_VALUE(autoRenewDuration_, autoRenewDuration) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline PaymentInfo& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // isAutoRenew Field Functions 
      bool hasIsAutoRenew() const { return this->isAutoRenew_ != nullptr;};
      void deleteIsAutoRenew() { this->isAutoRenew_ = nullptr;};
      inline bool getIsAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(isAutoRenew_, false) };
      inline PaymentInfo& setIsAutoRenew(bool isAutoRenew) { DARABONBA_PTR_SET_VALUE(isAutoRenew_, isAutoRenew) };


      // pricingCycle Field Functions 
      bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
      void deletePricingCycle() { this->pricingCycle_ = nullptr;};
      inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
      inline PaymentInfo& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    protected:
      shared_ptr<int64_t> autoRenewDuration_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<bool> isAutoRenew_ {};
      shared_ptr<string> pricingCycle_ {};
    };

    class NodeSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeSpec& obj) { 
        DARABONBA_PTR_TO_JSON(disk, disk_);
        DARABONBA_PTR_TO_JSON(diskType, diskType_);
        DARABONBA_PTR_TO_JSON(spec, spec_);
      };
      friend void from_json(const Darabonba::Json& j, NodeSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(disk, disk_);
        DARABONBA_PTR_FROM_JSON(diskType, diskType_);
        DARABONBA_PTR_FROM_JSON(spec, spec_);
      };
      NodeSpec() = default ;
      NodeSpec(const NodeSpec &) = default ;
      NodeSpec(NodeSpec &&) = default ;
      NodeSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeSpec() = default ;
      NodeSpec& operator=(const NodeSpec &) = default ;
      NodeSpec& operator=(NodeSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->disk_ == nullptr
        && this->diskType_ == nullptr && this->spec_ == nullptr; };
      // disk Field Functions 
      bool hasDisk() const { return this->disk_ != nullptr;};
      void deleteDisk() { this->disk_ = nullptr;};
      inline int64_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0L) };
      inline NodeSpec& setDisk(int64_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


      // diskType Field Functions 
      bool hasDiskType() const { return this->diskType_ != nullptr;};
      void deleteDiskType() { this->diskType_ = nullptr;};
      inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
      inline NodeSpec& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline NodeSpec& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    protected:
      shared_ptr<int64_t> disk_ {};
      shared_ptr<string> diskType_ {};
      // This parameter is required.
      shared_ptr<string> spec_ {};
    };

    class NetworkConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkConfig& obj) { 
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(vsArea, vsArea_);
        DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(vsArea, vsArea_);
        DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
      };
      NetworkConfig() = default ;
      NetworkConfig(const NetworkConfig &) = default ;
      NetworkConfig(NetworkConfig &&) = default ;
      NetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkConfig() = default ;
      NetworkConfig& operator=(const NetworkConfig &) = default ;
      NetworkConfig& operator=(NetworkConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->vpcId_ == nullptr && this->vsArea_ == nullptr && this->vswitchId_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline NetworkConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline NetworkConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vsArea Field Functions 
      bool hasVsArea() const { return this->vsArea_ != nullptr;};
      void deleteVsArea() { this->vsArea_ = nullptr;};
      inline string getVsArea() const { DARABONBA_PTR_GET_DEFAULT(vsArea_, "") };
      inline NetworkConfig& setVsArea(string vsArea) { DARABONBA_PTR_SET_VALUE(vsArea_, vsArea) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline NetworkConfig& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    protected:
      shared_ptr<string> type_ {};
      // This parameter is required.
      shared_ptr<string> vpcId_ {};
      // This parameter is required.
      shared_ptr<string> vsArea_ {};
      // This parameter is required.
      shared_ptr<string> vswitchId_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->networkConfig_ == nullptr && this->nodeAmount_ == nullptr && this->nodeSpec_ == nullptr && this->paymentInfo_ == nullptr && this->paymentType_ == nullptr
        && this->resourceGroupId_ == nullptr && this->version_ == nullptr && this->clientToken_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLogstashRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const CreateLogstashRequest::NetworkConfig & getNetworkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, CreateLogstashRequest::NetworkConfig) };
    inline CreateLogstashRequest::NetworkConfig getNetworkConfig() { DARABONBA_PTR_GET(networkConfig_, CreateLogstashRequest::NetworkConfig) };
    inline CreateLogstashRequest& setNetworkConfig(const CreateLogstashRequest::NetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline CreateLogstashRequest& setNetworkConfig(CreateLogstashRequest::NetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int32_t getNodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
    inline CreateLogstashRequest& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline const CreateLogstashRequest::NodeSpec & getNodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, CreateLogstashRequest::NodeSpec) };
    inline CreateLogstashRequest::NodeSpec getNodeSpec() { DARABONBA_PTR_GET(nodeSpec_, CreateLogstashRequest::NodeSpec) };
    inline CreateLogstashRequest& setNodeSpec(const CreateLogstashRequest::NodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
    inline CreateLogstashRequest& setNodeSpec(CreateLogstashRequest::NodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


    // paymentInfo Field Functions 
    bool hasPaymentInfo() const { return this->paymentInfo_ != nullptr;};
    void deletePaymentInfo() { this->paymentInfo_ = nullptr;};
    inline const CreateLogstashRequest::PaymentInfo & getPaymentInfo() const { DARABONBA_PTR_GET_CONST(paymentInfo_, CreateLogstashRequest::PaymentInfo) };
    inline CreateLogstashRequest::PaymentInfo getPaymentInfo() { DARABONBA_PTR_GET(paymentInfo_, CreateLogstashRequest::PaymentInfo) };
    inline CreateLogstashRequest& setPaymentInfo(const CreateLogstashRequest::PaymentInfo & paymentInfo) { DARABONBA_PTR_SET_VALUE(paymentInfo_, paymentInfo) };
    inline CreateLogstashRequest& setPaymentInfo(CreateLogstashRequest::PaymentInfo && paymentInfo) { DARABONBA_PTR_SET_RVALUE(paymentInfo_, paymentInfo) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateLogstashRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateLogstashRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateLogstashRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateLogstashRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<CreateLogstashRequest::NetworkConfig> networkConfig_ {};
    // This parameter is required.
    shared_ptr<int32_t> nodeAmount_ {};
    // This parameter is required.
    shared_ptr<CreateLogstashRequest::NodeSpec> nodeSpec_ {};
    shared_ptr<CreateLogstashRequest::PaymentInfo> paymentInfo_ {};
    shared_ptr<string> paymentType_ {};
    shared_ptr<string> resourceGroupId_ {};
    // This parameter is required.
    shared_ptr<string> version_ {};
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
