// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUPPLIERREGISTRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUPPLIERREGISTRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class CreateSupplierRegistrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSupplierRegistrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactEmail, contactEmail_);
      DARABONBA_PTR_TO_JSON(ContactNumber, contactNumber_);
      DARABONBA_PTR_TO_JSON(ContactPerson, contactPerson_);
      DARABONBA_PTR_TO_JSON(ContactPersonTitle, contactPersonTitle_);
      DARABONBA_PTR_TO_JSON(EnableResellerMode, enableResellerMode_);
      DARABONBA_PTR_TO_JSON(ProductAnnualRevenue, productAnnualRevenue_);
      DARABONBA_PTR_TO_JSON(ProductBusiness, productBusiness_);
      DARABONBA_PTR_TO_JSON(ProductDeliveryTypes, productDeliveryTypes_);
      DARABONBA_PTR_TO_JSON(ProductPublishTime, productPublishTime_);
      DARABONBA_PTR_TO_JSON(ProductSellTypes, productSellTypes_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellBusinessDesc, resellBusinessDesc_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_TO_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_TO_JSON(SupplierNameEn, supplierNameEn_);
      DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSupplierRegistrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactEmail, contactEmail_);
      DARABONBA_PTR_FROM_JSON(ContactNumber, contactNumber_);
      DARABONBA_PTR_FROM_JSON(ContactPerson, contactPerson_);
      DARABONBA_PTR_FROM_JSON(ContactPersonTitle, contactPersonTitle_);
      DARABONBA_PTR_FROM_JSON(EnableResellerMode, enableResellerMode_);
      DARABONBA_PTR_FROM_JSON(ProductAnnualRevenue, productAnnualRevenue_);
      DARABONBA_PTR_FROM_JSON(ProductBusiness, productBusiness_);
      DARABONBA_PTR_FROM_JSON(ProductDeliveryTypes, productDeliveryTypes_);
      DARABONBA_PTR_FROM_JSON(ProductPublishTime, productPublishTime_);
      DARABONBA_PTR_FROM_JSON(ProductSellTypes, productSellTypes_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellBusinessDesc, resellBusinessDesc_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_FROM_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_FROM_JSON(SupplierNameEn, supplierNameEn_);
      DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
    };
    CreateSupplierRegistrationRequest() = default ;
    CreateSupplierRegistrationRequest(const CreateSupplierRegistrationRequest &) = default ;
    CreateSupplierRegistrationRequest(CreateSupplierRegistrationRequest &&) = default ;
    CreateSupplierRegistrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSupplierRegistrationRequest() = default ;
    CreateSupplierRegistrationRequest& operator=(const CreateSupplierRegistrationRequest &) = default ;
    CreateSupplierRegistrationRequest& operator=(CreateSupplierRegistrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactEmail_ != nullptr
        && this->contactNumber_ != nullptr && this->contactPerson_ != nullptr && this->contactPersonTitle_ != nullptr && this->enableResellerMode_ != nullptr && this->productAnnualRevenue_ != nullptr
        && this->productBusiness_ != nullptr && this->productDeliveryTypes_ != nullptr && this->productPublishTime_ != nullptr && this->productSellTypes_ != nullptr && this->regionId_ != nullptr
        && this->resellBusinessDesc_ != nullptr && this->suggestion_ != nullptr && this->supplierDesc_ != nullptr && this->supplierLogo_ != nullptr && this->supplierName_ != nullptr
        && this->supplierNameEn_ != nullptr && this->supplierUrl_ != nullptr; };
    // contactEmail Field Functions 
    bool hasContactEmail() const { return this->contactEmail_ != nullptr;};
    void deleteContactEmail() { this->contactEmail_ = nullptr;};
    inline string contactEmail() const { DARABONBA_PTR_GET_DEFAULT(contactEmail_, "") };
    inline CreateSupplierRegistrationRequest& setContactEmail(string contactEmail) { DARABONBA_PTR_SET_VALUE(contactEmail_, contactEmail) };


    // contactNumber Field Functions 
    bool hasContactNumber() const { return this->contactNumber_ != nullptr;};
    void deleteContactNumber() { this->contactNumber_ = nullptr;};
    inline string contactNumber() const { DARABONBA_PTR_GET_DEFAULT(contactNumber_, "") };
    inline CreateSupplierRegistrationRequest& setContactNumber(string contactNumber) { DARABONBA_PTR_SET_VALUE(contactNumber_, contactNumber) };


    // contactPerson Field Functions 
    bool hasContactPerson() const { return this->contactPerson_ != nullptr;};
    void deleteContactPerson() { this->contactPerson_ = nullptr;};
    inline string contactPerson() const { DARABONBA_PTR_GET_DEFAULT(contactPerson_, "") };
    inline CreateSupplierRegistrationRequest& setContactPerson(string contactPerson) { DARABONBA_PTR_SET_VALUE(contactPerson_, contactPerson) };


    // contactPersonTitle Field Functions 
    bool hasContactPersonTitle() const { return this->contactPersonTitle_ != nullptr;};
    void deleteContactPersonTitle() { this->contactPersonTitle_ = nullptr;};
    inline string contactPersonTitle() const { DARABONBA_PTR_GET_DEFAULT(contactPersonTitle_, "") };
    inline CreateSupplierRegistrationRequest& setContactPersonTitle(string contactPersonTitle) { DARABONBA_PTR_SET_VALUE(contactPersonTitle_, contactPersonTitle) };


    // enableResellerMode Field Functions 
    bool hasEnableResellerMode() const { return this->enableResellerMode_ != nullptr;};
    void deleteEnableResellerMode() { this->enableResellerMode_ = nullptr;};
    inline bool enableResellerMode() const { DARABONBA_PTR_GET_DEFAULT(enableResellerMode_, false) };
    inline CreateSupplierRegistrationRequest& setEnableResellerMode(bool enableResellerMode) { DARABONBA_PTR_SET_VALUE(enableResellerMode_, enableResellerMode) };


    // productAnnualRevenue Field Functions 
    bool hasProductAnnualRevenue() const { return this->productAnnualRevenue_ != nullptr;};
    void deleteProductAnnualRevenue() { this->productAnnualRevenue_ = nullptr;};
    inline string productAnnualRevenue() const { DARABONBA_PTR_GET_DEFAULT(productAnnualRevenue_, "") };
    inline CreateSupplierRegistrationRequest& setProductAnnualRevenue(string productAnnualRevenue) { DARABONBA_PTR_SET_VALUE(productAnnualRevenue_, productAnnualRevenue) };


    // productBusiness Field Functions 
    bool hasProductBusiness() const { return this->productBusiness_ != nullptr;};
    void deleteProductBusiness() { this->productBusiness_ = nullptr;};
    inline string productBusiness() const { DARABONBA_PTR_GET_DEFAULT(productBusiness_, "") };
    inline CreateSupplierRegistrationRequest& setProductBusiness(string productBusiness) { DARABONBA_PTR_SET_VALUE(productBusiness_, productBusiness) };


    // productDeliveryTypes Field Functions 
    bool hasProductDeliveryTypes() const { return this->productDeliveryTypes_ != nullptr;};
    void deleteProductDeliveryTypes() { this->productDeliveryTypes_ = nullptr;};
    inline const vector<string> & productDeliveryTypes() const { DARABONBA_PTR_GET_CONST(productDeliveryTypes_, vector<string>) };
    inline vector<string> productDeliveryTypes() { DARABONBA_PTR_GET(productDeliveryTypes_, vector<string>) };
    inline CreateSupplierRegistrationRequest& setProductDeliveryTypes(const vector<string> & productDeliveryTypes) { DARABONBA_PTR_SET_VALUE(productDeliveryTypes_, productDeliveryTypes) };
    inline CreateSupplierRegistrationRequest& setProductDeliveryTypes(vector<string> && productDeliveryTypes) { DARABONBA_PTR_SET_RVALUE(productDeliveryTypes_, productDeliveryTypes) };


    // productPublishTime Field Functions 
    bool hasProductPublishTime() const { return this->productPublishTime_ != nullptr;};
    void deleteProductPublishTime() { this->productPublishTime_ = nullptr;};
    inline string productPublishTime() const { DARABONBA_PTR_GET_DEFAULT(productPublishTime_, "") };
    inline CreateSupplierRegistrationRequest& setProductPublishTime(string productPublishTime) { DARABONBA_PTR_SET_VALUE(productPublishTime_, productPublishTime) };


    // productSellTypes Field Functions 
    bool hasProductSellTypes() const { return this->productSellTypes_ != nullptr;};
    void deleteProductSellTypes() { this->productSellTypes_ = nullptr;};
    inline const vector<string> & productSellTypes() const { DARABONBA_PTR_GET_CONST(productSellTypes_, vector<string>) };
    inline vector<string> productSellTypes() { DARABONBA_PTR_GET(productSellTypes_, vector<string>) };
    inline CreateSupplierRegistrationRequest& setProductSellTypes(const vector<string> & productSellTypes) { DARABONBA_PTR_SET_VALUE(productSellTypes_, productSellTypes) };
    inline CreateSupplierRegistrationRequest& setProductSellTypes(vector<string> && productSellTypes) { DARABONBA_PTR_SET_RVALUE(productSellTypes_, productSellTypes) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSupplierRegistrationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellBusinessDesc Field Functions 
    bool hasResellBusinessDesc() const { return this->resellBusinessDesc_ != nullptr;};
    void deleteResellBusinessDesc() { this->resellBusinessDesc_ = nullptr;};
    inline string resellBusinessDesc() const { DARABONBA_PTR_GET_DEFAULT(resellBusinessDesc_, "") };
    inline CreateSupplierRegistrationRequest& setResellBusinessDesc(string resellBusinessDesc) { DARABONBA_PTR_SET_VALUE(resellBusinessDesc_, resellBusinessDesc) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline CreateSupplierRegistrationRequest& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // supplierDesc Field Functions 
    bool hasSupplierDesc() const { return this->supplierDesc_ != nullptr;};
    void deleteSupplierDesc() { this->supplierDesc_ = nullptr;};
    inline string supplierDesc() const { DARABONBA_PTR_GET_DEFAULT(supplierDesc_, "") };
    inline CreateSupplierRegistrationRequest& setSupplierDesc(string supplierDesc) { DARABONBA_PTR_SET_VALUE(supplierDesc_, supplierDesc) };


    // supplierLogo Field Functions 
    bool hasSupplierLogo() const { return this->supplierLogo_ != nullptr;};
    void deleteSupplierLogo() { this->supplierLogo_ = nullptr;};
    inline string supplierLogo() const { DARABONBA_PTR_GET_DEFAULT(supplierLogo_, "") };
    inline CreateSupplierRegistrationRequest& setSupplierLogo(string supplierLogo) { DARABONBA_PTR_SET_VALUE(supplierLogo_, supplierLogo) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string supplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline CreateSupplierRegistrationRequest& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    // supplierNameEn Field Functions 
    bool hasSupplierNameEn() const { return this->supplierNameEn_ != nullptr;};
    void deleteSupplierNameEn() { this->supplierNameEn_ = nullptr;};
    inline string supplierNameEn() const { DARABONBA_PTR_GET_DEFAULT(supplierNameEn_, "") };
    inline CreateSupplierRegistrationRequest& setSupplierNameEn(string supplierNameEn) { DARABONBA_PTR_SET_VALUE(supplierNameEn_, supplierNameEn) };


    // supplierUrl Field Functions 
    bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
    void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
    inline string supplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
    inline CreateSupplierRegistrationRequest& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


  protected:
    // Contact email
    // 
    // This parameter is required.
    std::shared_ptr<string> contactEmail_ = nullptr;
    // Contact number
    // 
    // This parameter is required.
    std::shared_ptr<string> contactNumber_ = nullptr;
    // Contact person
    // 
    // This parameter is required.
    std::shared_ptr<string> contactPerson_ = nullptr;
    // Contact person tiltle
    // 
    // This parameter is required.
    std::shared_ptr<string> contactPersonTitle_ = nullptr;
    // Whether to enable the resell mode
    std::shared_ptr<bool> enableResellerMode_ = nullptr;
    // Annual product revenue
    std::shared_ptr<string> productAnnualRevenue_ = nullptr;
    // The business of product
    std::shared_ptr<string> productBusiness_ = nullptr;
    // Product delivery type
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> productDeliveryTypes_ = nullptr;
    // The publish time of product
    std::shared_ptr<string> productPublishTime_ = nullptr;
    // Product sell type
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> productSellTypes_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The description of resell business.
    std::shared_ptr<string> resellBusinessDesc_ = nullptr;
    // The demands of service providers.
    std::shared_ptr<string> suggestion_ = nullptr;
    // The description of service provider.
    // 
    // This parameter is required.
    std::shared_ptr<string> supplierDesc_ = nullptr;
    // The Logo of service provider.
    std::shared_ptr<string> supplierLogo_ = nullptr;
    // The name of the service provider.
    // 
    // This parameter is required.
    std::shared_ptr<string> supplierName_ = nullptr;
    // The english name of the service provider.
    // 
    // This parameter is required.
    std::shared_ptr<string> supplierNameEn_ = nullptr;
    // The URL of the service provider.
    // 
    // This parameter is required.
    std::shared_ptr<string> supplierUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
