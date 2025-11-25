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
        && return this->bandwidth_ == nullptr && return this->baseBandwidth_ == nullptr && return this->domainCount_ == nullptr && return this->editionSale_ == nullptr && return this->functionVersion_ == nullptr
        && return this->instanceId_ == nullptr && return this->modifyType_ == nullptr && return this->normalBandwidth_ == nullptr && return this->normalQps_ == nullptr && return this->portCount_ == nullptr
        && return this->productPlan_ == nullptr && return this->productType_ == nullptr && return this->serviceBandwidth_ == nullptr && return this->servicePartner_ == nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline ModifyInstanceRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline ModifyInstanceRequest& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // baseBandwidth Field Functions 
    bool hasBaseBandwidth() const { return this->baseBandwidth_ != nullptr;};
    void deleteBaseBandwidth() { this->baseBandwidth_ = nullptr;};
    inline string baseBandwidth() const { DARABONBA_PTR_GET_DEFAULT(baseBandwidth_, "") };
    inline ModifyInstanceRequest& setBaseBandwidth(string baseBandwidth) { DARABONBA_PTR_SET_VALUE(baseBandwidth_, baseBandwidth) };


    // domainCount Field Functions 
    bool hasDomainCount() const { return this->domainCount_ != nullptr;};
    void deleteDomainCount() { this->domainCount_ = nullptr;};
    inline string domainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, "") };
    inline ModifyInstanceRequest& setDomainCount(string domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


    // editionSale Field Functions 
    bool hasEditionSale() const { return this->editionSale_ != nullptr;};
    void deleteEditionSale() { this->editionSale_ = nullptr;};
    inline string editionSale() const { DARABONBA_PTR_GET_DEFAULT(editionSale_, "") };
    inline ModifyInstanceRequest& setEditionSale(string editionSale) { DARABONBA_PTR_SET_VALUE(editionSale_, editionSale) };


    // functionVersion Field Functions 
    bool hasFunctionVersion() const { return this->functionVersion_ != nullptr;};
    void deleteFunctionVersion() { this->functionVersion_ = nullptr;};
    inline string functionVersion() const { DARABONBA_PTR_GET_DEFAULT(functionVersion_, "") };
    inline ModifyInstanceRequest& setFunctionVersion(string functionVersion) { DARABONBA_PTR_SET_VALUE(functionVersion_, functionVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string modifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline ModifyInstanceRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // normalBandwidth Field Functions 
    bool hasNormalBandwidth() const { return this->normalBandwidth_ != nullptr;};
    void deleteNormalBandwidth() { this->normalBandwidth_ = nullptr;};
    inline string normalBandwidth() const { DARABONBA_PTR_GET_DEFAULT(normalBandwidth_, "") };
    inline ModifyInstanceRequest& setNormalBandwidth(string normalBandwidth) { DARABONBA_PTR_SET_VALUE(normalBandwidth_, normalBandwidth) };


    // normalQps Field Functions 
    bool hasNormalQps() const { return this->normalQps_ != nullptr;};
    void deleteNormalQps() { this->normalQps_ = nullptr;};
    inline string normalQps() const { DARABONBA_PTR_GET_DEFAULT(normalQps_, "") };
    inline ModifyInstanceRequest& setNormalQps(string normalQps) { DARABONBA_PTR_SET_VALUE(normalQps_, normalQps) };


    // portCount Field Functions 
    bool hasPortCount() const { return this->portCount_ != nullptr;};
    void deletePortCount() { this->portCount_ = nullptr;};
    inline string portCount() const { DARABONBA_PTR_GET_DEFAULT(portCount_, "") };
    inline ModifyInstanceRequest& setPortCount(string portCount) { DARABONBA_PTR_SET_VALUE(portCount_, portCount) };


    // productPlan Field Functions 
    bool hasProductPlan() const { return this->productPlan_ != nullptr;};
    void deleteProductPlan() { this->productPlan_ = nullptr;};
    inline string productPlan() const { DARABONBA_PTR_GET_DEFAULT(productPlan_, "") };
    inline ModifyInstanceRequest& setProductPlan(string productPlan) { DARABONBA_PTR_SET_VALUE(productPlan_, productPlan) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyInstanceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // serviceBandwidth Field Functions 
    bool hasServiceBandwidth() const { return this->serviceBandwidth_ != nullptr;};
    void deleteServiceBandwidth() { this->serviceBandwidth_ = nullptr;};
    inline string serviceBandwidth() const { DARABONBA_PTR_GET_DEFAULT(serviceBandwidth_, "") };
    inline ModifyInstanceRequest& setServiceBandwidth(string serviceBandwidth) { DARABONBA_PTR_SET_VALUE(serviceBandwidth_, serviceBandwidth) };


    // servicePartner Field Functions 
    bool hasServicePartner() const { return this->servicePartner_ != nullptr;};
    void deleteServicePartner() { this->servicePartner_ = nullptr;};
    inline string servicePartner() const { DARABONBA_PTR_GET_DEFAULT(servicePartner_, "") };
    inline ModifyInstanceRequest& setServicePartner(string servicePartner) { DARABONBA_PTR_SET_VALUE(servicePartner_, servicePartner) };


  protected:
    // Address type. Values:
    // - **Ipv4**: IPv4.
    // - **Ipv6**: IPv6.
    std::shared_ptr<string> addressType_ = nullptr;
    // Elastic protection bandwidth (Mainland China). Unit: Gbps.
    std::shared_ptr<string> bandwidth_ = nullptr;
    // Guaranteed protection bandwidth (Mainland China). Unit: Gbps.
    std::shared_ptr<string> baseBandwidth_ = nullptr;
    // Number of protected domains.
    std::shared_ptr<string> domainCount_ = nullptr;
    // Protection package (Mainland China). Values:
    // 
    // - **coop**: Indicates the DDoS High Defense (Mainland China) Professional Edition.
    // - **advance**: Indicates the DDoS High Defense (Mainland China) Professional Edition.
    std::shared_ptr<string> editionSale_ = nullptr;
    // Function version, with values:
    // 
    // - **0**: Standard function.
    // - **1**: Enhanced function.
    std::shared_ptr<string> functionVersion_ = nullptr;
    // The ID of the DDoS High Defense instance.
    // > You can call [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) to query the ID information of all DDoS High Defense instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Adjustment type, with values
    // - UPGRADE: Upgrade.
    // - DOWNGRADE: Downgrade.
    // 
    // This parameter is required.
    std::shared_ptr<string> modifyType_ = nullptr;
    // Business bandwidth (outside Mainland China). Unit: Mbps.
    std::shared_ptr<string> normalBandwidth_ = nullptr;
    // Business QPS. Unit: Mbps.
    std::shared_ptr<string> normalQps_ = nullptr;
    // Number of protected ports.
    std::shared_ptr<string> portCount_ = nullptr;
    // Protection package (outside Mainland China). Values:
    // 
    // - **0**: Indicates the DDoS High Defense (outside Mainland China) Insurance Edition.
    // - **1**: Indicates the DDoS High Defense (outside Mainland China) Worry-Free Edition.
    // - **2**: Indicates the DDoS High Defense (outside Mainland China) Acceleration Line.
    // - **3**: Indicates the DDoS High Defense (outside Mainland China) Secure Acceleration Line.
    std::shared_ptr<string> productPlan_ = nullptr;
    // Product type.
    // Values:
    // 
    // - **ddoscoo**: Indicates that the DDoS High Defense (Mainland China) instance is being adjusted for a China site account.
    // - **ddoscoo_intl**: Indicates that the DDoS High Defense (Mainland China) instance is being adjusted for an international site account.
    // - **ddosDip**: Indicates that the DDoS High Defense (outside Mainland China) instance is being adjusted for either a China or international site account.
    // 
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
    // Business bandwidth (Mainland China). Unit: Mbps.
    std::shared_ptr<string> serviceBandwidth_ = nullptr;
    // Line resources of the instance (Mainland China). Values:
    // 
    // - **coop-line-001**: Indicates the DDoS High Defense (Mainland China) 8-line BGP line.
    std::shared_ptr<string> servicePartner_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
