// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BaseBandwidth, baseBandwidth_);
      DARABONBA_PTR_TO_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_TO_JSON(EditionSale, editionSale_);
      DARABONBA_PTR_TO_JSON(FunctionVersion, functionVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_TO_JSON(NormalBandwidth, normalBandwidth_);
      DARABONBA_PTR_TO_JSON(NormalQps, normalQps_);
      DARABONBA_PTR_TO_JSON(PortCount, portCount_);
      DARABONBA_PTR_TO_JSON(ProductPlan, productPlan_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ServiceBandwidth, serviceBandwidth_);
      DARABONBA_PTR_TO_JSON(ServicePartner, servicePartner_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BaseBandwidth, baseBandwidth_);
      DARABONBA_PTR_FROM_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_FROM_JSON(EditionSale, editionSale_);
      DARABONBA_PTR_FROM_JSON(FunctionVersion, functionVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_FROM_JSON(NormalBandwidth, normalBandwidth_);
      DARABONBA_PTR_FROM_JSON(NormalQps, normalQps_);
      DARABONBA_PTR_FROM_JSON(PortCount, portCount_);
      DARABONBA_PTR_FROM_JSON(ProductPlan, productPlan_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ServiceBandwidth, serviceBandwidth_);
      DARABONBA_PTR_FROM_JSON(ServicePartner, servicePartner_);
    };
    ModifyInstanceRequest() = default ;
    ModifyInstanceRequest(const ModifyInstanceRequest &) = default ;
    ModifyInstanceRequest(ModifyInstanceRequest &&) = default ;
    ModifyInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceRequest() = default ;
    ModifyInstanceRequest& operator=(const ModifyInstanceRequest &) = default ;
    ModifyInstanceRequest& operator=(ModifyInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressType_ == nullptr
        && this->bandwidth_ == nullptr && this->baseBandwidth_ == nullptr && this->domainCount_ == nullptr && this->editionSale_ == nullptr && this->functionVersion_ == nullptr
        && this->instanceId_ == nullptr && this->modifyType_ == nullptr && this->normalBandwidth_ == nullptr && this->normalQps_ == nullptr && this->portCount_ == nullptr
        && this->productPlan_ == nullptr && this->productType_ == nullptr && this->serviceBandwidth_ == nullptr && this->servicePartner_ == nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline ModifyInstanceRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline ModifyInstanceRequest& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // baseBandwidth Field Functions 
    bool hasBaseBandwidth() const { return this->baseBandwidth_ != nullptr;};
    void deleteBaseBandwidth() { this->baseBandwidth_ = nullptr;};
    inline string getBaseBandwidth() const { DARABONBA_PTR_GET_DEFAULT(baseBandwidth_, "") };
    inline ModifyInstanceRequest& setBaseBandwidth(string baseBandwidth) { DARABONBA_PTR_SET_VALUE(baseBandwidth_, baseBandwidth) };


    // domainCount Field Functions 
    bool hasDomainCount() const { return this->domainCount_ != nullptr;};
    void deleteDomainCount() { this->domainCount_ = nullptr;};
    inline string getDomainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, "") };
    inline ModifyInstanceRequest& setDomainCount(string domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


    // editionSale Field Functions 
    bool hasEditionSale() const { return this->editionSale_ != nullptr;};
    void deleteEditionSale() { this->editionSale_ = nullptr;};
    inline string getEditionSale() const { DARABONBA_PTR_GET_DEFAULT(editionSale_, "") };
    inline ModifyInstanceRequest& setEditionSale(string editionSale) { DARABONBA_PTR_SET_VALUE(editionSale_, editionSale) };


    // functionVersion Field Functions 
    bool hasFunctionVersion() const { return this->functionVersion_ != nullptr;};
    void deleteFunctionVersion() { this->functionVersion_ = nullptr;};
    inline string getFunctionVersion() const { DARABONBA_PTR_GET_DEFAULT(functionVersion_, "") };
    inline ModifyInstanceRequest& setFunctionVersion(string functionVersion) { DARABONBA_PTR_SET_VALUE(functionVersion_, functionVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string getModifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline ModifyInstanceRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // normalBandwidth Field Functions 
    bool hasNormalBandwidth() const { return this->normalBandwidth_ != nullptr;};
    void deleteNormalBandwidth() { this->normalBandwidth_ = nullptr;};
    inline string getNormalBandwidth() const { DARABONBA_PTR_GET_DEFAULT(normalBandwidth_, "") };
    inline ModifyInstanceRequest& setNormalBandwidth(string normalBandwidth) { DARABONBA_PTR_SET_VALUE(normalBandwidth_, normalBandwidth) };


    // normalQps Field Functions 
    bool hasNormalQps() const { return this->normalQps_ != nullptr;};
    void deleteNormalQps() { this->normalQps_ = nullptr;};
    inline string getNormalQps() const { DARABONBA_PTR_GET_DEFAULT(normalQps_, "") };
    inline ModifyInstanceRequest& setNormalQps(string normalQps) { DARABONBA_PTR_SET_VALUE(normalQps_, normalQps) };


    // portCount Field Functions 
    bool hasPortCount() const { return this->portCount_ != nullptr;};
    void deletePortCount() { this->portCount_ = nullptr;};
    inline string getPortCount() const { DARABONBA_PTR_GET_DEFAULT(portCount_, "") };
    inline ModifyInstanceRequest& setPortCount(string portCount) { DARABONBA_PTR_SET_VALUE(portCount_, portCount) };


    // productPlan Field Functions 
    bool hasProductPlan() const { return this->productPlan_ != nullptr;};
    void deleteProductPlan() { this->productPlan_ = nullptr;};
    inline string getProductPlan() const { DARABONBA_PTR_GET_DEFAULT(productPlan_, "") };
    inline ModifyInstanceRequest& setProductPlan(string productPlan) { DARABONBA_PTR_SET_VALUE(productPlan_, productPlan) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyInstanceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // serviceBandwidth Field Functions 
    bool hasServiceBandwidth() const { return this->serviceBandwidth_ != nullptr;};
    void deleteServiceBandwidth() { this->serviceBandwidth_ = nullptr;};
    inline string getServiceBandwidth() const { DARABONBA_PTR_GET_DEFAULT(serviceBandwidth_, "") };
    inline ModifyInstanceRequest& setServiceBandwidth(string serviceBandwidth) { DARABONBA_PTR_SET_VALUE(serviceBandwidth_, serviceBandwidth) };


    // servicePartner Field Functions 
    bool hasServicePartner() const { return this->servicePartner_ != nullptr;};
    void deleteServicePartner() { this->servicePartner_ = nullptr;};
    inline string getServicePartner() const { DARABONBA_PTR_GET_DEFAULT(servicePartner_, "") };
    inline ModifyInstanceRequest& setServicePartner(string servicePartner) { DARABONBA_PTR_SET_VALUE(servicePartner_, servicePartner) };


  protected:
    // The address type. Valid values:
    // - **Ipv4**: IPv4.
    // - **Ipv6**: IPv6.
    shared_ptr<string> addressType_ {};
    // The burstable protection bandwidth (the Chinese mainland). Unit: Gbit/s.
    shared_ptr<string> bandwidth_ {};
    // The basic protection bandwidth (the Chinese mainland). Unit: Gbit/s.
    shared_ptr<string> baseBandwidth_ {};
    // The number of protected domain names.
    shared_ptr<string> domainCount_ {};
    // The mitigation plan (the Chinese mainland). Valid values:
    // 
    // - **coop**: Professional Edition of Anti-DDoS Pro or Anti-DDoS Premium (Chinese mainland).
    // - **advance**: Professional Edition of Anti-DDoS Pro or Anti-DDoS Premium (Chinese mainland).
    shared_ptr<string> editionSale_ {};
    // The function version. Valid values:
    // 
    // - **0**: standard features.
    // - **1**: enhanced features.
    shared_ptr<string> functionVersion_ {};
    // The ID of the Anti-DDoS Pro or Anti-DDoS Premium instance.
    // > You can invoke [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) to query the IDs of all Anti-DDoS Pro or Anti-DDoS Premium instances.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The type of specification change. Valid values:
    // - UPGRADE: Upgrade.
    // - DOWNGRADE: Downgrade.
    // 
    // This parameter is required.
    shared_ptr<string> modifyType_ {};
    // The clean bandwidth (outside the Chinese mainland). Unit: Mbit/s.
    shared_ptr<string> normalBandwidth_ {};
    // The clean queries per second (QPS). Unit: Mbit/s.
    shared_ptr<string> normalQps_ {};
    // The number of protected ports.
    shared_ptr<string> portCount_ {};
    // The mitigation plan (outside the Chinese mainland). Valid values:
    // 
    // - **0**: Insurance mitigation plan for Anti-DDoS Pro or Anti-DDoS Premium (outside the Chinese mainland).
    // - **1**: Unlimited mitigation plan for Anti-DDoS Pro or Anti-DDoS Premium (outside the Chinese mainland).
    // - **2**: acceleration line for Anti-DDoS Pro or Anti-DDoS Premium (outside the Chinese mainland).
    // - **3**: secure acceleration line for Anti-DDoS Pro or Anti-DDoS Premium (outside the Chinese mainland).
    shared_ptr<string> productPlan_ {};
    // The product type.
    // 
    // Valid values:
    // 
    // - **ddoscoo**: indicates that the China site account is used for specification changes of an Anti-DDoS Pro or Anti-DDoS Premium (Chinese mainland) instance.
    // - **ddoscoo_intl**: indicates that the international site account is used for specification changes of an Anti-DDoS Pro or Anti-DDoS Premium (Chinese mainland) instance.
    // - **ddosDip**: indicates that the China site account or international site account is used for specification changes of an Anti-DDoS Pro or Anti-DDoS Premium (outside the Chinese mainland) instance.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // The clean bandwidth (the Chinese mainland). Unit: Mbit/s.
    shared_ptr<string> serviceBandwidth_ {};
    // The line resource of the instance (the Chinese mainland). Valid values:
    // 
    // - **coop-line-001**: eight-line BGP line for Anti-DDoS Pro or Anti-DDoS Premium (Chinese mainland).
    shared_ptr<string> servicePartner_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
