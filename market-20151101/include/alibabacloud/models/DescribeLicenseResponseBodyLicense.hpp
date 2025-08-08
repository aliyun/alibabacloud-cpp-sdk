// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELICENSERESPONSEBODYLICENSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELICENSERESPONSEBODYLICENSE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLicenseResponseBodyLicenseExtendArray.hpp>
#include <alibabacloud/models/DescribeLicenseResponseBodyLicenseExtendInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeLicenseResponseBodyLicense : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLicenseResponseBodyLicense& obj) { 
      DARABONBA_PTR_TO_JSON(ActivateTime, activateTime_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(ExtendArray, extendArray_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_TO_JSON(LicenseStatus, licenseStatus_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ProductSkuId, productSkuId_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLicenseResponseBodyLicense& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivateTime, activateTime_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(ExtendArray, extendArray_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_FROM_JSON(LicenseStatus, licenseStatus_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ProductSkuId, productSkuId_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
    };
    DescribeLicenseResponseBodyLicense() = default ;
    DescribeLicenseResponseBodyLicense(const DescribeLicenseResponseBodyLicense &) = default ;
    DescribeLicenseResponseBodyLicense(DescribeLicenseResponseBodyLicense &&) = default ;
    DescribeLicenseResponseBodyLicense(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLicenseResponseBodyLicense() = default ;
    DescribeLicenseResponseBodyLicense& operator=(const DescribeLicenseResponseBodyLicense &) = default ;
    DescribeLicenseResponseBodyLicense& operator=(DescribeLicenseResponseBodyLicense &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activateTime_ != nullptr
        && this->createTime_ != nullptr && this->expiredTime_ != nullptr && this->extendArray_ != nullptr && this->extendInfo_ != nullptr && this->instanceId_ != nullptr
        && this->licenseCode_ != nullptr && this->licenseStatus_ != nullptr && this->productCode_ != nullptr && this->productName_ != nullptr && this->productSkuId_ != nullptr
        && this->supplierName_ != nullptr; };
    // activateTime Field Functions 
    bool hasActivateTime() const { return this->activateTime_ != nullptr;};
    void deleteActivateTime() { this->activateTime_ = nullptr;};
    inline string activateTime() const { DARABONBA_PTR_GET_DEFAULT(activateTime_, "") };
    inline DescribeLicenseResponseBodyLicense& setActivateTime(string activateTime) { DARABONBA_PTR_SET_VALUE(activateTime_, activateTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeLicenseResponseBodyLicense& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeLicenseResponseBodyLicense& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // extendArray Field Functions 
    bool hasExtendArray() const { return this->extendArray_ != nullptr;};
    void deleteExtendArray() { this->extendArray_ = nullptr;};
    inline const Models::DescribeLicenseResponseBodyLicenseExtendArray & extendArray() const { DARABONBA_PTR_GET_CONST(extendArray_, Models::DescribeLicenseResponseBodyLicenseExtendArray) };
    inline Models::DescribeLicenseResponseBodyLicenseExtendArray extendArray() { DARABONBA_PTR_GET(extendArray_, Models::DescribeLicenseResponseBodyLicenseExtendArray) };
    inline DescribeLicenseResponseBodyLicense& setExtendArray(const Models::DescribeLicenseResponseBodyLicenseExtendArray & extendArray) { DARABONBA_PTR_SET_VALUE(extendArray_, extendArray) };
    inline DescribeLicenseResponseBodyLicense& setExtendArray(Models::DescribeLicenseResponseBodyLicenseExtendArray && extendArray) { DARABONBA_PTR_SET_RVALUE(extendArray_, extendArray) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline const Models::DescribeLicenseResponseBodyLicenseExtendInfo & extendInfo() const { DARABONBA_PTR_GET_CONST(extendInfo_, Models::DescribeLicenseResponseBodyLicenseExtendInfo) };
    inline Models::DescribeLicenseResponseBodyLicenseExtendInfo extendInfo() { DARABONBA_PTR_GET(extendInfo_, Models::DescribeLicenseResponseBodyLicenseExtendInfo) };
    inline DescribeLicenseResponseBodyLicense& setExtendInfo(const Models::DescribeLicenseResponseBodyLicenseExtendInfo & extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };
    inline DescribeLicenseResponseBodyLicense& setExtendInfo(Models::DescribeLicenseResponseBodyLicenseExtendInfo && extendInfo) { DARABONBA_PTR_SET_RVALUE(extendInfo_, extendInfo) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeLicenseResponseBodyLicense& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // licenseCode Field Functions 
    bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
    void deleteLicenseCode() { this->licenseCode_ = nullptr;};
    inline string licenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
    inline DescribeLicenseResponseBodyLicense& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


    // licenseStatus Field Functions 
    bool hasLicenseStatus() const { return this->licenseStatus_ != nullptr;};
    void deleteLicenseStatus() { this->licenseStatus_ = nullptr;};
    inline string licenseStatus() const { DARABONBA_PTR_GET_DEFAULT(licenseStatus_, "") };
    inline DescribeLicenseResponseBodyLicense& setLicenseStatus(string licenseStatus) { DARABONBA_PTR_SET_VALUE(licenseStatus_, licenseStatus) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeLicenseResponseBodyLicense& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeLicenseResponseBodyLicense& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productSkuId Field Functions 
    bool hasProductSkuId() const { return this->productSkuId_ != nullptr;};
    void deleteProductSkuId() { this->productSkuId_ = nullptr;};
    inline string productSkuId() const { DARABONBA_PTR_GET_DEFAULT(productSkuId_, "") };
    inline DescribeLicenseResponseBodyLicense& setProductSkuId(string productSkuId) { DARABONBA_PTR_SET_VALUE(productSkuId_, productSkuId) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string supplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline DescribeLicenseResponseBodyLicense& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


  protected:
    std::shared_ptr<string> activateTime_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> expiredTime_ = nullptr;
    std::shared_ptr<Models::DescribeLicenseResponseBodyLicenseExtendArray> extendArray_ = nullptr;
    std::shared_ptr<Models::DescribeLicenseResponseBodyLicenseExtendInfo> extendInfo_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> licenseCode_ = nullptr;
    std::shared_ptr<string> licenseStatus_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> productSkuId_ = nullptr;
    std::shared_ptr<string> supplierName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
