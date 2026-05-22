// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPLIERREGISTRATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPLIERREGISTRATIONSRESPONSEBODY_HPP_
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
  class ListSupplierRegistrationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupplierRegistrationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupplierRegistrations, supplierRegistrations_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupplierRegistrationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupplierRegistrations, supplierRegistrations_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSupplierRegistrationsResponseBody() = default ;
    ListSupplierRegistrationsResponseBody(const ListSupplierRegistrationsResponseBody &) = default ;
    ListSupplierRegistrationsResponseBody(ListSupplierRegistrationsResponseBody &&) = default ;
    ListSupplierRegistrationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupplierRegistrationsResponseBody() = default ;
    ListSupplierRegistrationsResponseBody& operator=(const ListSupplierRegistrationsResponseBody &) = default ;
    ListSupplierRegistrationsResponseBody& operator=(ListSupplierRegistrationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SupplierRegistrations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupplierRegistrations& obj) { 
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
      friend void from_json(const Darabonba::Json& j, SupplierRegistrations& obj) { 
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
      SupplierRegistrations() = default ;
      SupplierRegistrations(const SupplierRegistrations &) = default ;
      SupplierRegistrations(SupplierRegistrations &&) = default ;
      SupplierRegistrations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupplierRegistrations() = default ;
      SupplierRegistrations& operator=(const SupplierRegistrations &) = default ;
      SupplierRegistrations& operator=(SupplierRegistrations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->contactEmail_ == nullptr && this->contactNumber_ == nullptr && this->contactPerson_ == nullptr && this->contactPersonTitle_ == nullptr && this->enableResellerMode_ == nullptr
        && this->productAnnualRevenue_ == nullptr && this->productBusiness_ == nullptr && this->productDeliveryTypes_ == nullptr && this->productPublishTime_ == nullptr && this->productSellTypes_ == nullptr
        && this->registrationId_ == nullptr && this->resellBusinessDesc_ == nullptr && this->status_ == nullptr && this->submitTime_ == nullptr && this->supplierDesc_ == nullptr
        && this->supplierLogo_ == nullptr && this->supplierName_ == nullptr && this->supplierNameEn_ == nullptr && this->supplierUid_ == nullptr && this->supplierUrl_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline SupplierRegistrations& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // contactEmail Field Functions 
      bool hasContactEmail() const { return this->contactEmail_ != nullptr;};
      void deleteContactEmail() { this->contactEmail_ = nullptr;};
      inline string getContactEmail() const { DARABONBA_PTR_GET_DEFAULT(contactEmail_, "") };
      inline SupplierRegistrations& setContactEmail(string contactEmail) { DARABONBA_PTR_SET_VALUE(contactEmail_, contactEmail) };


      // contactNumber Field Functions 
      bool hasContactNumber() const { return this->contactNumber_ != nullptr;};
      void deleteContactNumber() { this->contactNumber_ = nullptr;};
      inline string getContactNumber() const { DARABONBA_PTR_GET_DEFAULT(contactNumber_, "") };
      inline SupplierRegistrations& setContactNumber(string contactNumber) { DARABONBA_PTR_SET_VALUE(contactNumber_, contactNumber) };


      // contactPerson Field Functions 
      bool hasContactPerson() const { return this->contactPerson_ != nullptr;};
      void deleteContactPerson() { this->contactPerson_ = nullptr;};
      inline string getContactPerson() const { DARABONBA_PTR_GET_DEFAULT(contactPerson_, "") };
      inline SupplierRegistrations& setContactPerson(string contactPerson) { DARABONBA_PTR_SET_VALUE(contactPerson_, contactPerson) };


      // contactPersonTitle Field Functions 
      bool hasContactPersonTitle() const { return this->contactPersonTitle_ != nullptr;};
      void deleteContactPersonTitle() { this->contactPersonTitle_ = nullptr;};
      inline string getContactPersonTitle() const { DARABONBA_PTR_GET_DEFAULT(contactPersonTitle_, "") };
      inline SupplierRegistrations& setContactPersonTitle(string contactPersonTitle) { DARABONBA_PTR_SET_VALUE(contactPersonTitle_, contactPersonTitle) };


      // enableResellerMode Field Functions 
      bool hasEnableResellerMode() const { return this->enableResellerMode_ != nullptr;};
      void deleteEnableResellerMode() { this->enableResellerMode_ = nullptr;};
      inline bool getEnableResellerMode() const { DARABONBA_PTR_GET_DEFAULT(enableResellerMode_, false) };
      inline SupplierRegistrations& setEnableResellerMode(bool enableResellerMode) { DARABONBA_PTR_SET_VALUE(enableResellerMode_, enableResellerMode) };


      // productAnnualRevenue Field Functions 
      bool hasProductAnnualRevenue() const { return this->productAnnualRevenue_ != nullptr;};
      void deleteProductAnnualRevenue() { this->productAnnualRevenue_ = nullptr;};
      inline string getProductAnnualRevenue() const { DARABONBA_PTR_GET_DEFAULT(productAnnualRevenue_, "") };
      inline SupplierRegistrations& setProductAnnualRevenue(string productAnnualRevenue) { DARABONBA_PTR_SET_VALUE(productAnnualRevenue_, productAnnualRevenue) };


      // productBusiness Field Functions 
      bool hasProductBusiness() const { return this->productBusiness_ != nullptr;};
      void deleteProductBusiness() { this->productBusiness_ = nullptr;};
      inline string getProductBusiness() const { DARABONBA_PTR_GET_DEFAULT(productBusiness_, "") };
      inline SupplierRegistrations& setProductBusiness(string productBusiness) { DARABONBA_PTR_SET_VALUE(productBusiness_, productBusiness) };


      // productDeliveryTypes Field Functions 
      bool hasProductDeliveryTypes() const { return this->productDeliveryTypes_ != nullptr;};
      void deleteProductDeliveryTypes() { this->productDeliveryTypes_ = nullptr;};
      inline string getProductDeliveryTypes() const { DARABONBA_PTR_GET_DEFAULT(productDeliveryTypes_, "") };
      inline SupplierRegistrations& setProductDeliveryTypes(string productDeliveryTypes) { DARABONBA_PTR_SET_VALUE(productDeliveryTypes_, productDeliveryTypes) };


      // productPublishTime Field Functions 
      bool hasProductPublishTime() const { return this->productPublishTime_ != nullptr;};
      void deleteProductPublishTime() { this->productPublishTime_ = nullptr;};
      inline string getProductPublishTime() const { DARABONBA_PTR_GET_DEFAULT(productPublishTime_, "") };
      inline SupplierRegistrations& setProductPublishTime(string productPublishTime) { DARABONBA_PTR_SET_VALUE(productPublishTime_, productPublishTime) };


      // productSellTypes Field Functions 
      bool hasProductSellTypes() const { return this->productSellTypes_ != nullptr;};
      void deleteProductSellTypes() { this->productSellTypes_ = nullptr;};
      inline string getProductSellTypes() const { DARABONBA_PTR_GET_DEFAULT(productSellTypes_, "") };
      inline SupplierRegistrations& setProductSellTypes(string productSellTypes) { DARABONBA_PTR_SET_VALUE(productSellTypes_, productSellTypes) };


      // registrationId Field Functions 
      bool hasRegistrationId() const { return this->registrationId_ != nullptr;};
      void deleteRegistrationId() { this->registrationId_ = nullptr;};
      inline string getRegistrationId() const { DARABONBA_PTR_GET_DEFAULT(registrationId_, "") };
      inline SupplierRegistrations& setRegistrationId(string registrationId) { DARABONBA_PTR_SET_VALUE(registrationId_, registrationId) };


      // resellBusinessDesc Field Functions 
      bool hasResellBusinessDesc() const { return this->resellBusinessDesc_ != nullptr;};
      void deleteResellBusinessDesc() { this->resellBusinessDesc_ = nullptr;};
      inline string getResellBusinessDesc() const { DARABONBA_PTR_GET_DEFAULT(resellBusinessDesc_, "") };
      inline SupplierRegistrations& setResellBusinessDesc(string resellBusinessDesc) { DARABONBA_PTR_SET_VALUE(resellBusinessDesc_, resellBusinessDesc) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SupplierRegistrations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // submitTime Field Functions 
      bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
      void deleteSubmitTime() { this->submitTime_ = nullptr;};
      inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
      inline SupplierRegistrations& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


      // supplierDesc Field Functions 
      bool hasSupplierDesc() const { return this->supplierDesc_ != nullptr;};
      void deleteSupplierDesc() { this->supplierDesc_ = nullptr;};
      inline string getSupplierDesc() const { DARABONBA_PTR_GET_DEFAULT(supplierDesc_, "") };
      inline SupplierRegistrations& setSupplierDesc(string supplierDesc) { DARABONBA_PTR_SET_VALUE(supplierDesc_, supplierDesc) };


      // supplierLogo Field Functions 
      bool hasSupplierLogo() const { return this->supplierLogo_ != nullptr;};
      void deleteSupplierLogo() { this->supplierLogo_ = nullptr;};
      inline string getSupplierLogo() const { DARABONBA_PTR_GET_DEFAULT(supplierLogo_, "") };
      inline SupplierRegistrations& setSupplierLogo(string supplierLogo) { DARABONBA_PTR_SET_VALUE(supplierLogo_, supplierLogo) };


      // supplierName Field Functions 
      bool hasSupplierName() const { return this->supplierName_ != nullptr;};
      void deleteSupplierName() { this->supplierName_ = nullptr;};
      inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
      inline SupplierRegistrations& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


      // supplierNameEn Field Functions 
      bool hasSupplierNameEn() const { return this->supplierNameEn_ != nullptr;};
      void deleteSupplierNameEn() { this->supplierNameEn_ = nullptr;};
      inline string getSupplierNameEn() const { DARABONBA_PTR_GET_DEFAULT(supplierNameEn_, "") };
      inline SupplierRegistrations& setSupplierNameEn(string supplierNameEn) { DARABONBA_PTR_SET_VALUE(supplierNameEn_, supplierNameEn) };


      // supplierUid Field Functions 
      bool hasSupplierUid() const { return this->supplierUid_ != nullptr;};
      void deleteSupplierUid() { this->supplierUid_ = nullptr;};
      inline string getSupplierUid() const { DARABONBA_PTR_GET_DEFAULT(supplierUid_, "") };
      inline SupplierRegistrations& setSupplierUid(string supplierUid) { DARABONBA_PTR_SET_VALUE(supplierUid_, supplierUid) };


      // supplierUrl Field Functions 
      bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
      void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
      inline string getSupplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
      inline SupplierRegistrations& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


    protected:
      // The comment of this registration.
      shared_ptr<string> comment_ {};
      // Contact email
      shared_ptr<string> contactEmail_ {};
      // Contact number
      shared_ptr<string> contactNumber_ {};
      // Contact person
      shared_ptr<string> contactPerson_ {};
      // Contact person tiltle.
      shared_ptr<string> contactPersonTitle_ {};
      // Whether to enable the resell mode.
      shared_ptr<bool> enableResellerMode_ {};
      // Annual product revenue
      shared_ptr<string> productAnnualRevenue_ {};
      // The business of product.
      shared_ptr<string> productBusiness_ {};
      // Product delivery type，Valid values:
      // 
      // SaaS
      // License
      // API
      // DesktopSoftware
      // Others
      shared_ptr<string> productDeliveryTypes_ {};
      // The publish time of product.
      shared_ptr<string> productPublishTime_ {};
      // Product sell type, Valid values:
      // 
      // - Direct
      // - Channel
      shared_ptr<string> productSellTypes_ {};
      // The registration ID.
      shared_ptr<string> registrationId_ {};
      // The description of resell business.
      shared_ptr<string> resellBusinessDesc_ {};
      // The deployment state of the registration. Valid values:
      // 
      // - Submitted
      // - Approved
      // - Rejected
      shared_ptr<string> status_ {};
      // The submit time of this registration.
      shared_ptr<string> submitTime_ {};
      // The description of service provider.
      shared_ptr<string> supplierDesc_ {};
      // The Logo of service provider.
      shared_ptr<string> supplierLogo_ {};
      // The name of the service provider.
      shared_ptr<string> supplierName_ {};
      // The english name of the service provider.
      shared_ptr<string> supplierNameEn_ {};
      // The Alibaba Cloud account ID of the service provider.
      shared_ptr<string> supplierUid_ {};
      // The URL of the service provider.
      shared_ptr<string> supplierUrl_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->supplierRegistrations_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSupplierRegistrationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSupplierRegistrationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSupplierRegistrationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supplierRegistrations Field Functions 
    bool hasSupplierRegistrations() const { return this->supplierRegistrations_ != nullptr;};
    void deleteSupplierRegistrations() { this->supplierRegistrations_ = nullptr;};
    inline const vector<ListSupplierRegistrationsResponseBody::SupplierRegistrations> & getSupplierRegistrations() const { DARABONBA_PTR_GET_CONST(supplierRegistrations_, vector<ListSupplierRegistrationsResponseBody::SupplierRegistrations>) };
    inline vector<ListSupplierRegistrationsResponseBody::SupplierRegistrations> getSupplierRegistrations() { DARABONBA_PTR_GET(supplierRegistrations_, vector<ListSupplierRegistrationsResponseBody::SupplierRegistrations>) };
    inline ListSupplierRegistrationsResponseBody& setSupplierRegistrations(const vector<ListSupplierRegistrationsResponseBody::SupplierRegistrations> & supplierRegistrations) { DARABONBA_PTR_SET_VALUE(supplierRegistrations_, supplierRegistrations) };
    inline ListSupplierRegistrationsResponseBody& setSupplierRegistrations(vector<ListSupplierRegistrationsResponseBody::SupplierRegistrations> && supplierRegistrations) { DARABONBA_PTR_SET_RVALUE(supplierRegistrations_, supplierRegistrations) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSupplierRegistrationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The supplier registrations
    shared_ptr<vector<ListSupplierRegistrationsResponseBody::SupplierRegistrations>> supplierRegistrations_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
