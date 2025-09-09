// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPLIERREGISTRATIONSRESPONSEBODYSUPPLIERREGISTRATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPLIERREGISTRATIONSRESPONSEBODYSUPPLIERREGISTRATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListSupplierRegistrationsResponseBodySupplierRegistrations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupplierRegistrationsResponseBodySupplierRegistrations& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
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
      DARABONBA_PTR_TO_JSON(RegistrationId, registrationId_);
      DARABONBA_PTR_TO_JSON(ResellBusinessDesc, resellBusinessDesc_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_TO_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_TO_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_TO_JSON(SupplierNameEn, supplierNameEn_);
      DARABONBA_PTR_TO_JSON(SupplierUid, supplierUid_);
      DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupplierRegistrationsResponseBodySupplierRegistrations& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
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
      DARABONBA_PTR_FROM_JSON(RegistrationId, registrationId_);
      DARABONBA_PTR_FROM_JSON(ResellBusinessDesc, resellBusinessDesc_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_FROM_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_FROM_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_FROM_JSON(SupplierNameEn, supplierNameEn_);
      DARABONBA_PTR_FROM_JSON(SupplierUid, supplierUid_);
      DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
    };
    ListSupplierRegistrationsResponseBodySupplierRegistrations() = default ;
    ListSupplierRegistrationsResponseBodySupplierRegistrations(const ListSupplierRegistrationsResponseBodySupplierRegistrations &) = default ;
    ListSupplierRegistrationsResponseBodySupplierRegistrations(ListSupplierRegistrationsResponseBodySupplierRegistrations &&) = default ;
    ListSupplierRegistrationsResponseBodySupplierRegistrations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupplierRegistrationsResponseBodySupplierRegistrations() = default ;
    ListSupplierRegistrationsResponseBodySupplierRegistrations& operator=(const ListSupplierRegistrationsResponseBodySupplierRegistrations &) = default ;
    ListSupplierRegistrationsResponseBodySupplierRegistrations& operator=(ListSupplierRegistrationsResponseBodySupplierRegistrations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->contactEmail_ != nullptr && this->contactNumber_ != nullptr && this->contactPerson_ != nullptr && this->contactPersonTitle_ != nullptr && this->enableResellerMode_ != nullptr
        && this->productAnnualRevenue_ != nullptr && this->productBusiness_ != nullptr && this->productDeliveryTypes_ != nullptr && this->productPublishTime_ != nullptr && this->productSellTypes_ != nullptr
        && this->registrationId_ != nullptr && this->resellBusinessDesc_ != nullptr && this->status_ != nullptr && this->submitTime_ != nullptr && this->supplierDesc_ != nullptr
        && this->supplierLogo_ != nullptr && this->supplierName_ != nullptr && this->supplierNameEn_ != nullptr && this->supplierUid_ != nullptr && this->supplierUrl_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // contactEmail Field Functions 
    bool hasContactEmail() const { return this->contactEmail_ != nullptr;};
    void deleteContactEmail() { this->contactEmail_ = nullptr;};
    inline string contactEmail() const { DARABONBA_PTR_GET_DEFAULT(contactEmail_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setContactEmail(string contactEmail) { DARABONBA_PTR_SET_VALUE(contactEmail_, contactEmail) };


    // contactNumber Field Functions 
    bool hasContactNumber() const { return this->contactNumber_ != nullptr;};
    void deleteContactNumber() { this->contactNumber_ = nullptr;};
    inline string contactNumber() const { DARABONBA_PTR_GET_DEFAULT(contactNumber_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setContactNumber(string contactNumber) { DARABONBA_PTR_SET_VALUE(contactNumber_, contactNumber) };


    // contactPerson Field Functions 
    bool hasContactPerson() const { return this->contactPerson_ != nullptr;};
    void deleteContactPerson() { this->contactPerson_ = nullptr;};
    inline string contactPerson() const { DARABONBA_PTR_GET_DEFAULT(contactPerson_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setContactPerson(string contactPerson) { DARABONBA_PTR_SET_VALUE(contactPerson_, contactPerson) };


    // contactPersonTitle Field Functions 
    bool hasContactPersonTitle() const { return this->contactPersonTitle_ != nullptr;};
    void deleteContactPersonTitle() { this->contactPersonTitle_ = nullptr;};
    inline string contactPersonTitle() const { DARABONBA_PTR_GET_DEFAULT(contactPersonTitle_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setContactPersonTitle(string contactPersonTitle) { DARABONBA_PTR_SET_VALUE(contactPersonTitle_, contactPersonTitle) };


    // enableResellerMode Field Functions 
    bool hasEnableResellerMode() const { return this->enableResellerMode_ != nullptr;};
    void deleteEnableResellerMode() { this->enableResellerMode_ = nullptr;};
    inline bool enableResellerMode() const { DARABONBA_PTR_GET_DEFAULT(enableResellerMode_, false) };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setEnableResellerMode(bool enableResellerMode) { DARABONBA_PTR_SET_VALUE(enableResellerMode_, enableResellerMode) };


    // productAnnualRevenue Field Functions 
    bool hasProductAnnualRevenue() const { return this->productAnnualRevenue_ != nullptr;};
    void deleteProductAnnualRevenue() { this->productAnnualRevenue_ = nullptr;};
    inline string productAnnualRevenue() const { DARABONBA_PTR_GET_DEFAULT(productAnnualRevenue_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setProductAnnualRevenue(string productAnnualRevenue) { DARABONBA_PTR_SET_VALUE(productAnnualRevenue_, productAnnualRevenue) };


    // productBusiness Field Functions 
    bool hasProductBusiness() const { return this->productBusiness_ != nullptr;};
    void deleteProductBusiness() { this->productBusiness_ = nullptr;};
    inline string productBusiness() const { DARABONBA_PTR_GET_DEFAULT(productBusiness_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setProductBusiness(string productBusiness) { DARABONBA_PTR_SET_VALUE(productBusiness_, productBusiness) };


    // productDeliveryTypes Field Functions 
    bool hasProductDeliveryTypes() const { return this->productDeliveryTypes_ != nullptr;};
    void deleteProductDeliveryTypes() { this->productDeliveryTypes_ = nullptr;};
    inline string productDeliveryTypes() const { DARABONBA_PTR_GET_DEFAULT(productDeliveryTypes_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setProductDeliveryTypes(string productDeliveryTypes) { DARABONBA_PTR_SET_VALUE(productDeliveryTypes_, productDeliveryTypes) };


    // productPublishTime Field Functions 
    bool hasProductPublishTime() const { return this->productPublishTime_ != nullptr;};
    void deleteProductPublishTime() { this->productPublishTime_ = nullptr;};
    inline string productPublishTime() const { DARABONBA_PTR_GET_DEFAULT(productPublishTime_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setProductPublishTime(string productPublishTime) { DARABONBA_PTR_SET_VALUE(productPublishTime_, productPublishTime) };


    // productSellTypes Field Functions 
    bool hasProductSellTypes() const { return this->productSellTypes_ != nullptr;};
    void deleteProductSellTypes() { this->productSellTypes_ = nullptr;};
    inline string productSellTypes() const { DARABONBA_PTR_GET_DEFAULT(productSellTypes_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setProductSellTypes(string productSellTypes) { DARABONBA_PTR_SET_VALUE(productSellTypes_, productSellTypes) };


    // registrationId Field Functions 
    bool hasRegistrationId() const { return this->registrationId_ != nullptr;};
    void deleteRegistrationId() { this->registrationId_ = nullptr;};
    inline string registrationId() const { DARABONBA_PTR_GET_DEFAULT(registrationId_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setRegistrationId(string registrationId) { DARABONBA_PTR_SET_VALUE(registrationId_, registrationId) };


    // resellBusinessDesc Field Functions 
    bool hasResellBusinessDesc() const { return this->resellBusinessDesc_ != nullptr;};
    void deleteResellBusinessDesc() { this->resellBusinessDesc_ = nullptr;};
    inline string resellBusinessDesc() const { DARABONBA_PTR_GET_DEFAULT(resellBusinessDesc_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setResellBusinessDesc(string resellBusinessDesc) { DARABONBA_PTR_SET_VALUE(resellBusinessDesc_, resellBusinessDesc) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // supplierDesc Field Functions 
    bool hasSupplierDesc() const { return this->supplierDesc_ != nullptr;};
    void deleteSupplierDesc() { this->supplierDesc_ = nullptr;};
    inline string supplierDesc() const { DARABONBA_PTR_GET_DEFAULT(supplierDesc_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setSupplierDesc(string supplierDesc) { DARABONBA_PTR_SET_VALUE(supplierDesc_, supplierDesc) };


    // supplierLogo Field Functions 
    bool hasSupplierLogo() const { return this->supplierLogo_ != nullptr;};
    void deleteSupplierLogo() { this->supplierLogo_ = nullptr;};
    inline string supplierLogo() const { DARABONBA_PTR_GET_DEFAULT(supplierLogo_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setSupplierLogo(string supplierLogo) { DARABONBA_PTR_SET_VALUE(supplierLogo_, supplierLogo) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string supplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    // supplierNameEn Field Functions 
    bool hasSupplierNameEn() const { return this->supplierNameEn_ != nullptr;};
    void deleteSupplierNameEn() { this->supplierNameEn_ = nullptr;};
    inline string supplierNameEn() const { DARABONBA_PTR_GET_DEFAULT(supplierNameEn_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setSupplierNameEn(string supplierNameEn) { DARABONBA_PTR_SET_VALUE(supplierNameEn_, supplierNameEn) };


    // supplierUid Field Functions 
    bool hasSupplierUid() const { return this->supplierUid_ != nullptr;};
    void deleteSupplierUid() { this->supplierUid_ = nullptr;};
    inline string supplierUid() const { DARABONBA_PTR_GET_DEFAULT(supplierUid_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setSupplierUid(string supplierUid) { DARABONBA_PTR_SET_VALUE(supplierUid_, supplierUid) };


    // supplierUrl Field Functions 
    bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
    void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
    inline string supplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
    inline ListSupplierRegistrationsResponseBodySupplierRegistrations& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


  protected:
    // The comment of this registration.
    std::shared_ptr<string> comment_ = nullptr;
    // Contact email
    std::shared_ptr<string> contactEmail_ = nullptr;
    // Contact number
    std::shared_ptr<string> contactNumber_ = nullptr;
    // Contact person
    std::shared_ptr<string> contactPerson_ = nullptr;
    // Contact person tiltle.
    std::shared_ptr<string> contactPersonTitle_ = nullptr;
    // Whether to enable the resell mode.
    std::shared_ptr<bool> enableResellerMode_ = nullptr;
    // Annual product revenue
    std::shared_ptr<string> productAnnualRevenue_ = nullptr;
    // The business of product.
    std::shared_ptr<string> productBusiness_ = nullptr;
    // Product delivery type，Valid values:
    // 
    // SaaS
    // License
    // API
    // DesktopSoftware
    // Others
    std::shared_ptr<string> productDeliveryTypes_ = nullptr;
    // The publish time of product.
    std::shared_ptr<string> productPublishTime_ = nullptr;
    // Product sell type, Valid values:
    // 
    // - Direct
    // - Channel
    std::shared_ptr<string> productSellTypes_ = nullptr;
    // The registration ID.
    std::shared_ptr<string> registrationId_ = nullptr;
    // The description of resell business.
    std::shared_ptr<string> resellBusinessDesc_ = nullptr;
    // The deployment state of the registration. Valid values:
    // 
    // - Submitted
    // - Approved
    // - Rejected
    std::shared_ptr<string> status_ = nullptr;
    // The submit time of this registration.
    std::shared_ptr<string> submitTime_ = nullptr;
    // The description of service provider.
    std::shared_ptr<string> supplierDesc_ = nullptr;
    // The Logo of service provider.
    std::shared_ptr<string> supplierLogo_ = nullptr;
    // The name of the service provider.
    std::shared_ptr<string> supplierName_ = nullptr;
    // The english name of the service provider.
    std::shared_ptr<string> supplierNameEn_ = nullptr;
    // The Alibaba Cloud account ID of the service provider.
    std::shared_ptr<string> supplierUid_ = nullptr;
    // The URL of the service provider.
    std::shared_ptr<string> supplierUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
