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
    virtual bool empty() const override { return this->contactEmail_ == nullptr
        && this->contactNumber_ == nullptr && this->contactPerson_ == nullptr && this->contactPersonTitle_ == nullptr && this->enableResellerMode_ == nullptr && this->productAnnualRevenue_ == nullptr
        && this->productBusiness_ == nullptr && this->productDeliveryTypes_ == nullptr && this->productPublishTime_ == nullptr && this->productSellTypes_ == nullptr && this->regionId_ == nullptr
        && this->resellBusinessDesc_ == nullptr && this->suggestion_ == nullptr && this->supplierDesc_ == nullptr && this->supplierLogo_ == nullptr && this->supplierName_ == nullptr
        && this->supplierNameEn_ == nullptr && this->supplierUrl_ == nullptr; };
    // contactEmail Field Functions 
    bool hasContactEmail() const { return this->contactEmail_ != nullptr;};
    void deleteContactEmail() { this->contactEmail_ = nullptr;};
    inline string getContactEmail() const { DARABONBA_PTR_GET_DEFAULT(contactEmail_, "") };
    inline CreateSupplierRegistrationRequest& setContactEmail(string contactEmail) { DARABONBA_PTR_SET_VALUE(contactEmail_, contactEmail) };


    // contactNumber Field Functions 
    bool hasContactNumber() const { return this->contactNumber_ != nullptr;};
    void deleteContactNumber() { this->contactNumber_ = nullptr;};
    inline string getContactNumber() const { DARABONBA_PTR_GET_DEFAULT(contactNumber_, "") };
    inline CreateSupplierRegistrationRequest& setContactNumber(string contactNumber) { DARABONBA_PTR_SET_VALUE(contactNumber_, contactNumber) };


    // contactPerson Field Functions 
    bool hasContactPerson() const { return this->contactPerson_ != nullptr;};
    void deleteContactPerson() { this->contactPerson_ = nullptr;};
    inline string getContactPerson() const { DARABONBA_PTR_GET_DEFAULT(contactPerson_, "") };
    inline CreateSupplierRegistrationRequest& setContactPerson(string contactPerson) { DARABONBA_PTR_SET_VALUE(contactPerson_, contactPerson) };


    // contactPersonTitle Field Functions 
    bool hasContactPersonTitle() const { return this->contactPersonTitle_ != nullptr;};
    void deleteContactPersonTitle() { this->contactPersonTitle_ = nullptr;};
    inline string getContactPersonTitle() const { DARABONBA_PTR_GET_DEFAULT(contactPersonTitle_, "") };
    inline CreateSupplierRegistrationRequest& setContactPersonTitle(string contactPersonTitle) { DARABONBA_PTR_SET_VALUE(contactPersonTitle_, contactPersonTitle) };


    // enableResellerMode Field Functions 
    bool hasEnableResellerMode() const { return this->enableResellerMode_ != nullptr;};
    void deleteEnableResellerMode() { this->enableResellerMode_ = nullptr;};
    inline bool getEnableResellerMode() const { DARABONBA_PTR_GET_DEFAULT(enableResellerMode_, false) };
    inline CreateSupplierRegistrationRequest& setEnableResellerMode(bool enableResellerMode) { DARABONBA_PTR_SET_VALUE(enableResellerMode_, enableResellerMode) };


    // productAnnualRevenue Field Functions 
    bool hasProductAnnualRevenue() const { return this->productAnnualRevenue_ != nullptr;};
    void deleteProductAnnualRevenue() { this->productAnnualRevenue_ = nullptr;};
    inline string getProductAnnualRevenue() const { DARABONBA_PTR_GET_DEFAULT(productAnnualRevenue_, "") };
    inline CreateSupplierRegistrationRequest& setProductAnnualRevenue(string productAnnualRevenue) { DARABONBA_PTR_SET_VALUE(productAnnualRevenue_, productAnnualRevenue) };


    // productBusiness Field Functions 
    bool hasProductBusiness() const { return this->productBusiness_ != nullptr;};
    void deleteProductBusiness() { this->productBusiness_ = nullptr;};
    inline string getProductBusiness() const { DARABONBA_PTR_GET_DEFAULT(productBusiness_, "") };
    inline CreateSupplierRegistrationRequest& setProductBusiness(string productBusiness) { DARABONBA_PTR_SET_VALUE(productBusiness_, productBusiness) };


    // productDeliveryTypes Field Functions 
    bool hasProductDeliveryTypes() const { return this->productDeliveryTypes_ != nullptr;};
    void deleteProductDeliveryTypes() { this->productDeliveryTypes_ = nullptr;};
    inline const vector<string> & getProductDeliveryTypes() const { DARABONBA_PTR_GET_CONST(productDeliveryTypes_, vector<string>) };
    inline vector<string> getProductDeliveryTypes() { DARABONBA_PTR_GET(productDeliveryTypes_, vector<string>) };
    inline CreateSupplierRegistrationRequest& setProductDeliveryTypes(const vector<string> & productDeliveryTypes) { DARABONBA_PTR_SET_VALUE(productDeliveryTypes_, productDeliveryTypes) };
    inline CreateSupplierRegistrationRequest& setProductDeliveryTypes(vector<string> && productDeliveryTypes) { DARABONBA_PTR_SET_RVALUE(productDeliveryTypes_, productDeliveryTypes) };


    // productPublishTime Field Functions 
    bool hasProductPublishTime() const { return this->productPublishTime_ != nullptr;};
    void deleteProductPublishTime() { this->productPublishTime_ = nullptr;};
    inline string getProductPublishTime() const { DARABONBA_PTR_GET_DEFAULT(productPublishTime_, "") };
    inline CreateSupplierRegistrationRequest& setProductPublishTime(string productPublishTime) { DARABONBA_PTR_SET_VALUE(productPublishTime_, productPublishTime) };


    // productSellTypes Field Functions 
    bool hasProductSellTypes() const { return this->productSellTypes_ != nullptr;};
    void deleteProductSellTypes() { this->productSellTypes_ = nullptr;};
    inline const vector<string> & getProductSellTypes() const { DARABONBA_PTR_GET_CONST(productSellTypes_, vector<string>) };
    inline vector<string> getProductSellTypes() { DARABONBA_PTR_GET(productSellTypes_, vector<string>) };
    inline CreateSupplierRegistrationRequest& setProductSellTypes(const vector<string> & productSellTypes) { DARABONBA_PTR_SET_VALUE(productSellTypes_, productSellTypes) };
    inline CreateSupplierRegistrationRequest& setProductSellTypes(vector<string> && productSellTypes) { DARABONBA_PTR_SET_RVALUE(productSellTypes_, productSellTypes) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSupplierRegistrationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellBusinessDesc Field Functions 
    bool hasResellBusinessDesc() const { return this->resellBusinessDesc_ != nullptr;};
    void deleteResellBusinessDesc() { this->resellBusinessDesc_ = nullptr;};
    inline string getResellBusinessDesc() const { DARABONBA_PTR_GET_DEFAULT(resellBusinessDesc_, "") };
    inline CreateSupplierRegistrationRequest& setResellBusinessDesc(string resellBusinessDesc) { DARABONBA_PTR_SET_VALUE(resellBusinessDesc_, resellBusinessDesc) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline CreateSupplierRegistrationRequest& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // supplierDesc Field Functions 
    bool hasSupplierDesc() const { return this->supplierDesc_ != nullptr;};
    void deleteSupplierDesc() { this->supplierDesc_ = nullptr;};
    inline string getSupplierDesc() const { DARABONBA_PTR_GET_DEFAULT(supplierDesc_, "") };
    inline CreateSupplierRegistrationRequest& setSupplierDesc(string supplierDesc) { DARABONBA_PTR_SET_VALUE(supplierDesc_, supplierDesc) };


    // supplierLogo Field Functions 
    bool hasSupplierLogo() const { return this->supplierLogo_ != nullptr;};
    void deleteSupplierLogo() { this->supplierLogo_ = nullptr;};
    inline string getSupplierLogo() const { DARABONBA_PTR_GET_DEFAULT(supplierLogo_, "") };
    inline CreateSupplierRegistrationRequest& setSupplierLogo(string supplierLogo) { DARABONBA_PTR_SET_VALUE(supplierLogo_, supplierLogo) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline CreateSupplierRegistrationRequest& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    // supplierNameEn Field Functions 
    bool hasSupplierNameEn() const { return this->supplierNameEn_ != nullptr;};
    void deleteSupplierNameEn() { this->supplierNameEn_ = nullptr;};
    inline string getSupplierNameEn() const { DARABONBA_PTR_GET_DEFAULT(supplierNameEn_, "") };
    inline CreateSupplierRegistrationRequest& setSupplierNameEn(string supplierNameEn) { DARABONBA_PTR_SET_VALUE(supplierNameEn_, supplierNameEn) };


    // supplierUrl Field Functions 
    bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
    void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
    inline string getSupplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
    inline CreateSupplierRegistrationRequest& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


  protected:
    // The email address of the contact person.
    // 
    // This parameter is required.
    shared_ptr<string> contactEmail_ {};
    // The phone number of the contact person.
    // 
    // This parameter is required.
    shared_ptr<string> contactNumber_ {};
    // The contact person.
    // 
    // This parameter is required.
    shared_ptr<string> contactPerson_ {};
    // The title of the contact person.
    // 
    // This parameter is required.
    shared_ptr<string> contactPersonTitle_ {};
    // Specifies whether to enable distribution.
    shared_ptr<bool> enableResellerMode_ {};
    // The annual revenue of the product.
    shared_ptr<string> productAnnualRevenue_ {};
    // The industry of the service provider\\"s product.
    shared_ptr<string> productBusiness_ {};
    // The delivery methods of the service provider\\"s product. Valid values:
    // 
    // - SaaS
    // 
    // - License
    // 
    // - API
    // 
    // - DesktopSoftware
    // 
    // - Others
    // 
    // This parameter is required.
    shared_ptr<vector<string>> productDeliveryTypes_ {};
    // The launch date of the product.
    shared_ptr<string> productPublishTime_ {};
    // The sales models of the service provider\\"s product. Valid values:
    // 
    // - Direct: Direct sales
    // 
    // - Channel: Channel sales
    // 
    // This parameter is required.
    shared_ptr<vector<string>> productSellTypes_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The description of the distribution business.
    shared_ptr<string> resellBusinessDesc_ {};
    // The suggestions from the service provider.
    shared_ptr<string> suggestion_ {};
    // The description of the service provider.
    // 
    // This parameter is required.
    shared_ptr<string> supplierDesc_ {};
    // The icon of the service provider.
    shared_ptr<string> supplierLogo_ {};
    // The name of the service provider.
    // 
    // This parameter is required.
    shared_ptr<string> supplierName_ {};
    // The English name of the service provider.
    // 
    // This parameter is required.
    shared_ptr<string> supplierNameEn_ {};
    // The supplier\\"s address.
    // 
    // This parameter is required.
    shared_ptr<string> supplierUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
