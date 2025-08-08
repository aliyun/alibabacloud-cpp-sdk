// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyModules.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyRelationalData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveAddress, activeAddress_);
      DARABONBA_PTR_TO_JSON(AppJson, appJson_);
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(BeganOn, beganOn_);
      DARABONBA_PTR_TO_JSON(ComponentJson, componentJson_);
      DARABONBA_PTR_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(CreatedOn, createdOn_);
      DARABONBA_PTR_TO_JSON(EndOn, endOn_);
      DARABONBA_PTR_TO_JSON(ExtendJson, extendJson_);
      DARABONBA_PTR_TO_JSON(HostJson, hostJson_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsTrial, isTrial_);
      DARABONBA_PTR_TO_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_TO_JSON(Modules, modules_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ProductSkuCode, productSkuCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RelationalData, relationalData_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveAddress, activeAddress_);
      DARABONBA_PTR_FROM_JSON(AppJson, appJson_);
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(BeganOn, beganOn_);
      DARABONBA_PTR_FROM_JSON(ComponentJson, componentJson_);
      DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(CreatedOn, createdOn_);
      DARABONBA_PTR_FROM_JSON(EndOn, endOn_);
      DARABONBA_PTR_FROM_JSON(ExtendJson, extendJson_);
      DARABONBA_PTR_FROM_JSON(HostJson, hostJson_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsTrial, isTrial_);
      DARABONBA_PTR_FROM_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_FROM_JSON(Modules, modules_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ProductSkuCode, productSkuCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RelationalData, relationalData_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
    };
    DescribeInstanceResponseBody() = default ;
    DescribeInstanceResponseBody(const DescribeInstanceResponseBody &) = default ;
    DescribeInstanceResponseBody(DescribeInstanceResponseBody &&) = default ;
    DescribeInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBody() = default ;
    DescribeInstanceResponseBody& operator=(const DescribeInstanceResponseBody &) = default ;
    DescribeInstanceResponseBody& operator=(DescribeInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activeAddress_ != nullptr
        && this->appJson_ != nullptr && this->autoRenewal_ != nullptr && this->beganOn_ != nullptr && this->componentJson_ != nullptr && this->constraints_ != nullptr
        && this->createdOn_ != nullptr && this->endOn_ != nullptr && this->extendJson_ != nullptr && this->hostJson_ != nullptr && this->instanceId_ != nullptr
        && this->isTrial_ != nullptr && this->licenseCode_ != nullptr && this->modules_ != nullptr && this->orderId_ != nullptr && this->productCode_ != nullptr
        && this->productName_ != nullptr && this->productSkuCode_ != nullptr && this->productType_ != nullptr && this->relationalData_ != nullptr && this->status_ != nullptr
        && this->supplierName_ != nullptr; };
    // activeAddress Field Functions 
    bool hasActiveAddress() const { return this->activeAddress_ != nullptr;};
    void deleteActiveAddress() { this->activeAddress_ = nullptr;};
    inline string activeAddress() const { DARABONBA_PTR_GET_DEFAULT(activeAddress_, "") };
    inline DescribeInstanceResponseBody& setActiveAddress(string activeAddress) { DARABONBA_PTR_SET_VALUE(activeAddress_, activeAddress) };


    // appJson Field Functions 
    bool hasAppJson() const { return this->appJson_ != nullptr;};
    void deleteAppJson() { this->appJson_ = nullptr;};
    inline string appJson() const { DARABONBA_PTR_GET_DEFAULT(appJson_, "") };
    inline DescribeInstanceResponseBody& setAppJson(string appJson) { DARABONBA_PTR_SET_VALUE(appJson_, appJson) };


    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline string autoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, "") };
    inline DescribeInstanceResponseBody& setAutoRenewal(string autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // beganOn Field Functions 
    bool hasBeganOn() const { return this->beganOn_ != nullptr;};
    void deleteBeganOn() { this->beganOn_ = nullptr;};
    inline int64_t beganOn() const { DARABONBA_PTR_GET_DEFAULT(beganOn_, 0L) };
    inline DescribeInstanceResponseBody& setBeganOn(int64_t beganOn) { DARABONBA_PTR_SET_VALUE(beganOn_, beganOn) };


    // componentJson Field Functions 
    bool hasComponentJson() const { return this->componentJson_ != nullptr;};
    void deleteComponentJson() { this->componentJson_ = nullptr;};
    inline string componentJson() const { DARABONBA_PTR_GET_DEFAULT(componentJson_, "") };
    inline DescribeInstanceResponseBody& setComponentJson(string componentJson) { DARABONBA_PTR_SET_VALUE(componentJson_, componentJson) };


    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline string constraints() const { DARABONBA_PTR_GET_DEFAULT(constraints_, "") };
    inline DescribeInstanceResponseBody& setConstraints(string constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };


    // createdOn Field Functions 
    bool hasCreatedOn() const { return this->createdOn_ != nullptr;};
    void deleteCreatedOn() { this->createdOn_ = nullptr;};
    inline int64_t createdOn() const { DARABONBA_PTR_GET_DEFAULT(createdOn_, 0L) };
    inline DescribeInstanceResponseBody& setCreatedOn(int64_t createdOn) { DARABONBA_PTR_SET_VALUE(createdOn_, createdOn) };


    // endOn Field Functions 
    bool hasEndOn() const { return this->endOn_ != nullptr;};
    void deleteEndOn() { this->endOn_ = nullptr;};
    inline int64_t endOn() const { DARABONBA_PTR_GET_DEFAULT(endOn_, 0L) };
    inline DescribeInstanceResponseBody& setEndOn(int64_t endOn) { DARABONBA_PTR_SET_VALUE(endOn_, endOn) };


    // extendJson Field Functions 
    bool hasExtendJson() const { return this->extendJson_ != nullptr;};
    void deleteExtendJson() { this->extendJson_ = nullptr;};
    inline string extendJson() const { DARABONBA_PTR_GET_DEFAULT(extendJson_, "") };
    inline DescribeInstanceResponseBody& setExtendJson(string extendJson) { DARABONBA_PTR_SET_VALUE(extendJson_, extendJson) };


    // hostJson Field Functions 
    bool hasHostJson() const { return this->hostJson_ != nullptr;};
    void deleteHostJson() { this->hostJson_ = nullptr;};
    inline string hostJson() const { DARABONBA_PTR_GET_DEFAULT(hostJson_, "") };
    inline DescribeInstanceResponseBody& setHostJson(string hostJson) { DARABONBA_PTR_SET_VALUE(hostJson_, hostJson) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline DescribeInstanceResponseBody& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isTrial Field Functions 
    bool hasIsTrial() const { return this->isTrial_ != nullptr;};
    void deleteIsTrial() { this->isTrial_ = nullptr;};
    inline bool isTrial() const { DARABONBA_PTR_GET_DEFAULT(isTrial_, false) };
    inline DescribeInstanceResponseBody& setIsTrial(bool isTrial) { DARABONBA_PTR_SET_VALUE(isTrial_, isTrial) };


    // licenseCode Field Functions 
    bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
    void deleteLicenseCode() { this->licenseCode_ = nullptr;};
    inline string licenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
    inline DescribeInstanceResponseBody& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


    // modules Field Functions 
    bool hasModules() const { return this->modules_ != nullptr;};
    void deleteModules() { this->modules_ = nullptr;};
    inline const DescribeInstanceResponseBodyModules & modules() const { DARABONBA_PTR_GET_CONST(modules_, DescribeInstanceResponseBodyModules) };
    inline DescribeInstanceResponseBodyModules modules() { DARABONBA_PTR_GET(modules_, DescribeInstanceResponseBodyModules) };
    inline DescribeInstanceResponseBody& setModules(const DescribeInstanceResponseBodyModules & modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };
    inline DescribeInstanceResponseBody& setModules(DescribeInstanceResponseBodyModules && modules) { DARABONBA_PTR_SET_RVALUE(modules_, modules) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline DescribeInstanceResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeInstanceResponseBody& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeInstanceResponseBody& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productSkuCode Field Functions 
    bool hasProductSkuCode() const { return this->productSkuCode_ != nullptr;};
    void deleteProductSkuCode() { this->productSkuCode_ = nullptr;};
    inline string productSkuCode() const { DARABONBA_PTR_GET_DEFAULT(productSkuCode_, "") };
    inline DescribeInstanceResponseBody& setProductSkuCode(string productSkuCode) { DARABONBA_PTR_SET_VALUE(productSkuCode_, productSkuCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeInstanceResponseBody& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // relationalData Field Functions 
    bool hasRelationalData() const { return this->relationalData_ != nullptr;};
    void deleteRelationalData() { this->relationalData_ = nullptr;};
    inline const DescribeInstanceResponseBodyRelationalData & relationalData() const { DARABONBA_PTR_GET_CONST(relationalData_, DescribeInstanceResponseBodyRelationalData) };
    inline DescribeInstanceResponseBodyRelationalData relationalData() { DARABONBA_PTR_GET(relationalData_, DescribeInstanceResponseBodyRelationalData) };
    inline DescribeInstanceResponseBody& setRelationalData(const DescribeInstanceResponseBodyRelationalData & relationalData) { DARABONBA_PTR_SET_VALUE(relationalData_, relationalData) };
    inline DescribeInstanceResponseBody& setRelationalData(DescribeInstanceResponseBodyRelationalData && relationalData) { DARABONBA_PTR_SET_RVALUE(relationalData_, relationalData) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string supplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline DescribeInstanceResponseBody& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


  protected:
    std::shared_ptr<string> activeAddress_ = nullptr;
    std::shared_ptr<string> appJson_ = nullptr;
    std::shared_ptr<string> autoRenewal_ = nullptr;
    std::shared_ptr<int64_t> beganOn_ = nullptr;
    std::shared_ptr<string> componentJson_ = nullptr;
    std::shared_ptr<string> constraints_ = nullptr;
    std::shared_ptr<int64_t> createdOn_ = nullptr;
    std::shared_ptr<int64_t> endOn_ = nullptr;
    std::shared_ptr<string> extendJson_ = nullptr;
    std::shared_ptr<string> hostJson_ = nullptr;
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    std::shared_ptr<bool> isTrial_ = nullptr;
    std::shared_ptr<string> licenseCode_ = nullptr;
    std::shared_ptr<DescribeInstanceResponseBodyModules> modules_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> productSkuCode_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<DescribeInstanceResponseBodyRelationalData> relationalData_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> supplierName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
