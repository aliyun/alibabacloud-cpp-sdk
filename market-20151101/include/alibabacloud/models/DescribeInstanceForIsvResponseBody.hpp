// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEFORISVRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEFORISVRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeInstanceForIsvResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceForIsvResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveAddress, activeAddress_);
      DARABONBA_PTR_TO_JSON(AppJson, appJson_);
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(BeganOn, beganOn_);
      DARABONBA_PTR_TO_JSON(ComponentJson, componentJson_);
      DARABONBA_PTR_TO_JSON(CreatedOn, createdOn_);
      DARABONBA_PTR_TO_JSON(EndOn, endOn_);
      DARABONBA_PTR_TO_JSON(ExtendJson, extendJson_);
      DARABONBA_PTR_TO_JSON(HostJson, hostJson_);
      DARABONBA_PTR_TO_JSON(ImageJson, imageJson_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsTrial, isTrial_);
      DARABONBA_PTR_TO_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ProductSkuCode, productSkuCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RelationalData, relationalData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceForIsvResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveAddress, activeAddress_);
      DARABONBA_PTR_FROM_JSON(AppJson, appJson_);
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(BeganOn, beganOn_);
      DARABONBA_PTR_FROM_JSON(ComponentJson, componentJson_);
      DARABONBA_PTR_FROM_JSON(CreatedOn, createdOn_);
      DARABONBA_PTR_FROM_JSON(EndOn, endOn_);
      DARABONBA_PTR_FROM_JSON(ExtendJson, extendJson_);
      DARABONBA_PTR_FROM_JSON(HostJson, hostJson_);
      DARABONBA_PTR_FROM_JSON(ImageJson, imageJson_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsTrial, isTrial_);
      DARABONBA_PTR_FROM_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ProductSkuCode, productSkuCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RelationalData, relationalData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
    };
    DescribeInstanceForIsvResponseBody() = default ;
    DescribeInstanceForIsvResponseBody(const DescribeInstanceForIsvResponseBody &) = default ;
    DescribeInstanceForIsvResponseBody(DescribeInstanceForIsvResponseBody &&) = default ;
    DescribeInstanceForIsvResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceForIsvResponseBody() = default ;
    DescribeInstanceForIsvResponseBody& operator=(const DescribeInstanceForIsvResponseBody &) = default ;
    DescribeInstanceForIsvResponseBody& operator=(DescribeInstanceForIsvResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RelationalData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RelationalData& obj) { 
        DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
      };
      friend void from_json(const Darabonba::Json& j, RelationalData& obj) { 
        DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
      };
      RelationalData() = default ;
      RelationalData(const RelationalData &) = default ;
      RelationalData(RelationalData &&) = default ;
      RelationalData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RelationalData() = default ;
      RelationalData& operator=(const RelationalData &) = default ;
      RelationalData& operator=(RelationalData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->serviceStatus_ == nullptr; };
      // serviceStatus Field Functions 
      bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
      void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
      inline string getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
      inline RelationalData& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    protected:
      // The service status. Valid values:
      // *   READYING: not started.
      // *   STARTED: in service.
      // *   CONFIRM: completed.
      // *   EXPIRED: expired.
      // *   CLOSED: released.
      shared_ptr<string> serviceStatus_ {};
    };

    virtual bool empty() const override { return this->activeAddress_ == nullptr
        && this->appJson_ == nullptr && this->autoRenewal_ == nullptr && this->beganOn_ == nullptr && this->componentJson_ == nullptr && this->createdOn_ == nullptr
        && this->endOn_ == nullptr && this->extendJson_ == nullptr && this->hostJson_ == nullptr && this->imageJson_ == nullptr && this->instanceId_ == nullptr
        && this->isTrial_ == nullptr && this->licenseCode_ == nullptr && this->orderId_ == nullptr && this->productCode_ == nullptr && this->productName_ == nullptr
        && this->productSkuCode_ == nullptr && this->productType_ == nullptr && this->relationalData_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr
        && this->supplierName_ == nullptr; };
    // activeAddress Field Functions 
    bool hasActiveAddress() const { return this->activeAddress_ != nullptr;};
    void deleteActiveAddress() { this->activeAddress_ = nullptr;};
    inline string getActiveAddress() const { DARABONBA_PTR_GET_DEFAULT(activeAddress_, "") };
    inline DescribeInstanceForIsvResponseBody& setActiveAddress(string activeAddress) { DARABONBA_PTR_SET_VALUE(activeAddress_, activeAddress) };


    // appJson Field Functions 
    bool hasAppJson() const { return this->appJson_ != nullptr;};
    void deleteAppJson() { this->appJson_ = nullptr;};
    inline string getAppJson() const { DARABONBA_PTR_GET_DEFAULT(appJson_, "") };
    inline DescribeInstanceForIsvResponseBody& setAppJson(string appJson) { DARABONBA_PTR_SET_VALUE(appJson_, appJson) };


    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline string getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, "") };
    inline DescribeInstanceForIsvResponseBody& setAutoRenewal(string autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // beganOn Field Functions 
    bool hasBeganOn() const { return this->beganOn_ != nullptr;};
    void deleteBeganOn() { this->beganOn_ = nullptr;};
    inline int64_t getBeganOn() const { DARABONBA_PTR_GET_DEFAULT(beganOn_, 0L) };
    inline DescribeInstanceForIsvResponseBody& setBeganOn(int64_t beganOn) { DARABONBA_PTR_SET_VALUE(beganOn_, beganOn) };


    // componentJson Field Functions 
    bool hasComponentJson() const { return this->componentJson_ != nullptr;};
    void deleteComponentJson() { this->componentJson_ = nullptr;};
    inline string getComponentJson() const { DARABONBA_PTR_GET_DEFAULT(componentJson_, "") };
    inline DescribeInstanceForIsvResponseBody& setComponentJson(string componentJson) { DARABONBA_PTR_SET_VALUE(componentJson_, componentJson) };


    // createdOn Field Functions 
    bool hasCreatedOn() const { return this->createdOn_ != nullptr;};
    void deleteCreatedOn() { this->createdOn_ = nullptr;};
    inline int64_t getCreatedOn() const { DARABONBA_PTR_GET_DEFAULT(createdOn_, 0L) };
    inline DescribeInstanceForIsvResponseBody& setCreatedOn(int64_t createdOn) { DARABONBA_PTR_SET_VALUE(createdOn_, createdOn) };


    // endOn Field Functions 
    bool hasEndOn() const { return this->endOn_ != nullptr;};
    void deleteEndOn() { this->endOn_ = nullptr;};
    inline int64_t getEndOn() const { DARABONBA_PTR_GET_DEFAULT(endOn_, 0L) };
    inline DescribeInstanceForIsvResponseBody& setEndOn(int64_t endOn) { DARABONBA_PTR_SET_VALUE(endOn_, endOn) };


    // extendJson Field Functions 
    bool hasExtendJson() const { return this->extendJson_ != nullptr;};
    void deleteExtendJson() { this->extendJson_ = nullptr;};
    inline string getExtendJson() const { DARABONBA_PTR_GET_DEFAULT(extendJson_, "") };
    inline DescribeInstanceForIsvResponseBody& setExtendJson(string extendJson) { DARABONBA_PTR_SET_VALUE(extendJson_, extendJson) };


    // hostJson Field Functions 
    bool hasHostJson() const { return this->hostJson_ != nullptr;};
    void deleteHostJson() { this->hostJson_ = nullptr;};
    inline string getHostJson() const { DARABONBA_PTR_GET_DEFAULT(hostJson_, "") };
    inline DescribeInstanceForIsvResponseBody& setHostJson(string hostJson) { DARABONBA_PTR_SET_VALUE(hostJson_, hostJson) };


    // imageJson Field Functions 
    bool hasImageJson() const { return this->imageJson_ != nullptr;};
    void deleteImageJson() { this->imageJson_ = nullptr;};
    inline string getImageJson() const { DARABONBA_PTR_GET_DEFAULT(imageJson_, "") };
    inline DescribeInstanceForIsvResponseBody& setImageJson(string imageJson) { DARABONBA_PTR_SET_VALUE(imageJson_, imageJson) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline DescribeInstanceForIsvResponseBody& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isTrial Field Functions 
    bool hasIsTrial() const { return this->isTrial_ != nullptr;};
    void deleteIsTrial() { this->isTrial_ = nullptr;};
    inline bool getIsTrial() const { DARABONBA_PTR_GET_DEFAULT(isTrial_, false) };
    inline DescribeInstanceForIsvResponseBody& setIsTrial(bool isTrial) { DARABONBA_PTR_SET_VALUE(isTrial_, isTrial) };


    // licenseCode Field Functions 
    bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
    void deleteLicenseCode() { this->licenseCode_ = nullptr;};
    inline string getLicenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
    inline DescribeInstanceForIsvResponseBody& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline DescribeInstanceForIsvResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeInstanceForIsvResponseBody& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeInstanceForIsvResponseBody& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productSkuCode Field Functions 
    bool hasProductSkuCode() const { return this->productSkuCode_ != nullptr;};
    void deleteProductSkuCode() { this->productSkuCode_ = nullptr;};
    inline string getProductSkuCode() const { DARABONBA_PTR_GET_DEFAULT(productSkuCode_, "") };
    inline DescribeInstanceForIsvResponseBody& setProductSkuCode(string productSkuCode) { DARABONBA_PTR_SET_VALUE(productSkuCode_, productSkuCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeInstanceForIsvResponseBody& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // relationalData Field Functions 
    bool hasRelationalData() const { return this->relationalData_ != nullptr;};
    void deleteRelationalData() { this->relationalData_ = nullptr;};
    inline const DescribeInstanceForIsvResponseBody::RelationalData & getRelationalData() const { DARABONBA_PTR_GET_CONST(relationalData_, DescribeInstanceForIsvResponseBody::RelationalData) };
    inline DescribeInstanceForIsvResponseBody::RelationalData getRelationalData() { DARABONBA_PTR_GET(relationalData_, DescribeInstanceForIsvResponseBody::RelationalData) };
    inline DescribeInstanceForIsvResponseBody& setRelationalData(const DescribeInstanceForIsvResponseBody::RelationalData & relationalData) { DARABONBA_PTR_SET_VALUE(relationalData_, relationalData) };
    inline DescribeInstanceForIsvResponseBody& setRelationalData(DescribeInstanceForIsvResponseBody::RelationalData && relationalData) { DARABONBA_PTR_SET_RVALUE(relationalData_, relationalData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceForIsvResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstanceForIsvResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline DescribeInstanceForIsvResponseBody& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


  protected:
    // The activation URL.
    shared_ptr<string> activeAddress_ {};
    // The application information. The metric description of the parameters in the example is as follows:
    // 
    // username: the username.
    // passowrd: the password.
    // frontEndUrl: the frontend URL.
    // adminUrl: the administration URL.
    shared_ptr<string> appJson_ {};
    // The automatic payment information for epoch-based products. A non-empty value indicates that you enable auto-renewal.
    // autoRenewCycle: Day, Month, or Year.
    // autoRenewDuration: the renewal epoch.
    shared_ptr<string> autoRenewal_ {};
    // The time when the instance was activated (timestamp).
    shared_ptr<int64_t> beganOn_ {};
    // The business module. The metric description of the parameters in the example is as follows:
    // *   package_version: the version.
    shared_ptr<string> componentJson_ {};
    // The creation time (timestamp).
    shared_ptr<int64_t> createdOn_ {};
    // The expiration time (timestamp).
    shared_ptr<int64_t> endOn_ {};
    // The extended information.
    shared_ptr<string> extendJson_ {};
    // The host information. The metric description of the parameters in the example is as follows:
    // 
    // username: the username.
    // passowrd: the password.
    // ip: the host IP address.
    // innerIp: the internal network IP address of the host.
    shared_ptr<string> hostJson_ {};
    // The image instance information.
    // imageId: the image ID.
    // instanceId: the instance ID.
    // ecsInstanceId: the ECS instance ID.
    shared_ptr<string> imageJson_ {};
    // The instance ID.
    shared_ptr<int64_t> instanceId_ {};
    // Indicates whether the instance is a trial instance.
    shared_ptr<bool> isTrial_ {};
    // The activation code.
    shared_ptr<string> licenseCode_ {};
    // The order ID.
    shared_ptr<int64_t> orderId_ {};
    // The commodity code.
    shared_ptr<string> productCode_ {};
    // The product name.
    shared_ptr<string> productName_ {};
    // The SKU code.
    shared_ptr<string> productSkuCode_ {};
    // The product type. Valid values:
    // *   APP: application.
    // *   SERVIC: service.
    // *   MIRROR: image.
    // *   DOWNLOAD: download.
    // *   API_SERVICE: API.
    // *   DOCKER: Docker.
    shared_ptr<string> productType_ {};
    // The relational information.
    shared_ptr<DescribeInstanceForIsvResponseBody::RelationalData> relationalData_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The business status. Different values are set based on the product type.
    // 
    // When ProductType is set to MIRROR:
    // *   PRODUCE: being provisioned.
    // *   USING: in use.
    // *   UNUSED: not in use.
    // *   EXPIRED: expired.
    // *   CLOSED: released.
    // 
    // When ProductType is set to SERVICE:
    // *   READYING: not started.
    // *   STARTED: in service.
    // *   CONFIRM: completed.
    // *   EXPIRED: expired.
    // *   CLOSED: released.
    // 
    // When ProductType is set to APP, DOWNLOAD, API_SERVICE, or DOCKER:
    // *   OPENING: being activated.
    // *   OPENED: activated.
    // *   EXPIRED: expired.
    // *   CLOSED: released.
    shared_ptr<string> status_ {};
    // The service provider name.
    shared_ptr<string> supplierName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
