// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELICENSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELICENSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeLicenseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLicenseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(License, license_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLicenseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(License, license_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLicenseResponseBody() = default ;
    DescribeLicenseResponseBody(const DescribeLicenseResponseBody &) = default ;
    DescribeLicenseResponseBody(DescribeLicenseResponseBody &&) = default ;
    DescribeLicenseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLicenseResponseBody() = default ;
    DescribeLicenseResponseBody& operator=(const DescribeLicenseResponseBody &) = default ;
    DescribeLicenseResponseBody& operator=(DescribeLicenseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class License : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const License& obj) { 
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
      friend void from_json(const Darabonba::Json& j, License& obj) { 
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
      License() = default ;
      License(const License &) = default ;
      License(License &&) = default ;
      License(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~License() = default ;
      License& operator=(const License &) = default ;
      License& operator=(License &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ExtendInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtendInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AccountQuantity, accountQuantity_);
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(Mobile, mobile_);
        };
        friend void from_json(const Darabonba::Json& j, ExtendInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountQuantity, accountQuantity_);
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
        };
        ExtendInfo() = default ;
        ExtendInfo(const ExtendInfo &) = default ;
        ExtendInfo(ExtendInfo &&) = default ;
        ExtendInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtendInfo() = default ;
        ExtendInfo& operator=(const ExtendInfo &) = default ;
        ExtendInfo& operator=(ExtendInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountQuantity_ == nullptr
        && this->aliUid_ == nullptr && this->email_ == nullptr && this->mobile_ == nullptr; };
        // accountQuantity Field Functions 
        bool hasAccountQuantity() const { return this->accountQuantity_ != nullptr;};
        void deleteAccountQuantity() { this->accountQuantity_ = nullptr;};
        inline int64_t getAccountQuantity() const { DARABONBA_PTR_GET_DEFAULT(accountQuantity_, 0L) };
        inline ExtendInfo& setAccountQuantity(int64_t accountQuantity) { DARABONBA_PTR_SET_VALUE(accountQuantity_, accountQuantity) };


        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
        inline ExtendInfo& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline ExtendInfo& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // mobile Field Functions 
        bool hasMobile() const { return this->mobile_ != nullptr;};
        void deleteMobile() { this->mobile_ = nullptr;};
        inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
        inline ExtendInfo& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      protected:
        shared_ptr<int64_t> accountQuantity_ {};
        shared_ptr<int64_t> aliUid_ {};
        shared_ptr<string> email_ {};
        shared_ptr<string> mobile_ {};
      };

      class ExtendArray : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtendArray& obj) { 
          DARABONBA_PTR_TO_JSON(LicenseAttribute, licenseAttribute_);
        };
        friend void from_json(const Darabonba::Json& j, ExtendArray& obj) { 
          DARABONBA_PTR_FROM_JSON(LicenseAttribute, licenseAttribute_);
        };
        ExtendArray() = default ;
        ExtendArray(const ExtendArray &) = default ;
        ExtendArray(ExtendArray &&) = default ;
        ExtendArray(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtendArray() = default ;
        ExtendArray& operator=(const ExtendArray &) = default ;
        ExtendArray& operator=(ExtendArray &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LicenseAttribute : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LicenseAttribute& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, LicenseAttribute& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          LicenseAttribute() = default ;
          LicenseAttribute(const LicenseAttribute &) = default ;
          LicenseAttribute(LicenseAttribute &&) = default ;
          LicenseAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LicenseAttribute() = default ;
          LicenseAttribute& operator=(const LicenseAttribute &) = default ;
          LicenseAttribute& operator=(LicenseAttribute &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->value_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline LicenseAttribute& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline LicenseAttribute& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> code_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->licenseAttribute_ == nullptr; };
        // licenseAttribute Field Functions 
        bool hasLicenseAttribute() const { return this->licenseAttribute_ != nullptr;};
        void deleteLicenseAttribute() { this->licenseAttribute_ = nullptr;};
        inline const vector<ExtendArray::LicenseAttribute> & getLicenseAttribute() const { DARABONBA_PTR_GET_CONST(licenseAttribute_, vector<ExtendArray::LicenseAttribute>) };
        inline vector<ExtendArray::LicenseAttribute> getLicenseAttribute() { DARABONBA_PTR_GET(licenseAttribute_, vector<ExtendArray::LicenseAttribute>) };
        inline ExtendArray& setLicenseAttribute(const vector<ExtendArray::LicenseAttribute> & licenseAttribute) { DARABONBA_PTR_SET_VALUE(licenseAttribute_, licenseAttribute) };
        inline ExtendArray& setLicenseAttribute(vector<ExtendArray::LicenseAttribute> && licenseAttribute) { DARABONBA_PTR_SET_RVALUE(licenseAttribute_, licenseAttribute) };


      protected:
        shared_ptr<vector<ExtendArray::LicenseAttribute>> licenseAttribute_ {};
      };

      virtual bool empty() const override { return this->activateTime_ == nullptr
        && this->createTime_ == nullptr && this->expiredTime_ == nullptr && this->extendArray_ == nullptr && this->extendInfo_ == nullptr && this->instanceId_ == nullptr
        && this->licenseCode_ == nullptr && this->licenseStatus_ == nullptr && this->productCode_ == nullptr && this->productName_ == nullptr && this->productSkuId_ == nullptr
        && this->supplierName_ == nullptr; };
      // activateTime Field Functions 
      bool hasActivateTime() const { return this->activateTime_ != nullptr;};
      void deleteActivateTime() { this->activateTime_ = nullptr;};
      inline string getActivateTime() const { DARABONBA_PTR_GET_DEFAULT(activateTime_, "") };
      inline License& setActivateTime(string activateTime) { DARABONBA_PTR_SET_VALUE(activateTime_, activateTime) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline License& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline License& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // extendArray Field Functions 
      bool hasExtendArray() const { return this->extendArray_ != nullptr;};
      void deleteExtendArray() { this->extendArray_ = nullptr;};
      inline const License::ExtendArray & getExtendArray() const { DARABONBA_PTR_GET_CONST(extendArray_, License::ExtendArray) };
      inline License::ExtendArray getExtendArray() { DARABONBA_PTR_GET(extendArray_, License::ExtendArray) };
      inline License& setExtendArray(const License::ExtendArray & extendArray) { DARABONBA_PTR_SET_VALUE(extendArray_, extendArray) };
      inline License& setExtendArray(License::ExtendArray && extendArray) { DARABONBA_PTR_SET_RVALUE(extendArray_, extendArray) };


      // extendInfo Field Functions 
      bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
      void deleteExtendInfo() { this->extendInfo_ = nullptr;};
      inline const License::ExtendInfo & getExtendInfo() const { DARABONBA_PTR_GET_CONST(extendInfo_, License::ExtendInfo) };
      inline License::ExtendInfo getExtendInfo() { DARABONBA_PTR_GET(extendInfo_, License::ExtendInfo) };
      inline License& setExtendInfo(const License::ExtendInfo & extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };
      inline License& setExtendInfo(License::ExtendInfo && extendInfo) { DARABONBA_PTR_SET_RVALUE(extendInfo_, extendInfo) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline License& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // licenseCode Field Functions 
      bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
      void deleteLicenseCode() { this->licenseCode_ = nullptr;};
      inline string getLicenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
      inline License& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


      // licenseStatus Field Functions 
      bool hasLicenseStatus() const { return this->licenseStatus_ != nullptr;};
      void deleteLicenseStatus() { this->licenseStatus_ = nullptr;};
      inline string getLicenseStatus() const { DARABONBA_PTR_GET_DEFAULT(licenseStatus_, "") };
      inline License& setLicenseStatus(string licenseStatus) { DARABONBA_PTR_SET_VALUE(licenseStatus_, licenseStatus) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline License& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline License& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // productSkuId Field Functions 
      bool hasProductSkuId() const { return this->productSkuId_ != nullptr;};
      void deleteProductSkuId() { this->productSkuId_ = nullptr;};
      inline string getProductSkuId() const { DARABONBA_PTR_GET_DEFAULT(productSkuId_, "") };
      inline License& setProductSkuId(string productSkuId) { DARABONBA_PTR_SET_VALUE(productSkuId_, productSkuId) };


      // supplierName Field Functions 
      bool hasSupplierName() const { return this->supplierName_ != nullptr;};
      void deleteSupplierName() { this->supplierName_ = nullptr;};
      inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
      inline License& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    protected:
      shared_ptr<string> activateTime_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> expiredTime_ {};
      shared_ptr<License::ExtendArray> extendArray_ {};
      shared_ptr<License::ExtendInfo> extendInfo_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> licenseCode_ {};
      shared_ptr<string> licenseStatus_ {};
      shared_ptr<string> productCode_ {};
      shared_ptr<string> productName_ {};
      shared_ptr<string> productSkuId_ {};
      shared_ptr<string> supplierName_ {};
    };

    virtual bool empty() const override { return this->license_ == nullptr
        && this->requestId_ == nullptr; };
    // license Field Functions 
    bool hasLicense() const { return this->license_ != nullptr;};
    void deleteLicense() { this->license_ = nullptr;};
    inline const DescribeLicenseResponseBody::License & getLicense() const { DARABONBA_PTR_GET_CONST(license_, DescribeLicenseResponseBody::License) };
    inline DescribeLicenseResponseBody::License getLicense() { DARABONBA_PTR_GET(license_, DescribeLicenseResponseBody::License) };
    inline DescribeLicenseResponseBody& setLicense(const DescribeLicenseResponseBody::License & license) { DARABONBA_PTR_SET_VALUE(license_, license) };
    inline DescribeLicenseResponseBody& setLicense(DescribeLicenseResponseBody::License && license) { DARABONBA_PTR_SET_RVALUE(license_, license) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLicenseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeLicenseResponseBody::License> license_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
