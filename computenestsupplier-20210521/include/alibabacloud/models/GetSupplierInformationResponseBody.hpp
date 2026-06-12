// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPPLIERINFORMATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUPPLIERINFORMATIONRESPONSEBODY_HPP_
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
  class GetSupplierInformationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupplierInformationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcrNamespace, acrNamespace_);
      DARABONBA_PTR_TO_JSON(DeliverySettings, deliverySettings_);
      DARABONBA_PTR_TO_JSON(EnableReseller, enableReseller_);
      DARABONBA_PTR_TO_JSON(OperationIp, operationIp_);
      DARABONBA_PTR_TO_JSON(OperationMfaPresent, operationMfaPresent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_TO_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_TO_JSON(SupportContacts, supportContacts_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupplierInformationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrNamespace, acrNamespace_);
      DARABONBA_PTR_FROM_JSON(DeliverySettings, deliverySettings_);
      DARABONBA_PTR_FROM_JSON(EnableReseller, enableReseller_);
      DARABONBA_PTR_FROM_JSON(OperationIp, operationIp_);
      DARABONBA_PTR_FROM_JSON(OperationMfaPresent, operationMfaPresent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_FROM_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_FROM_JSON(SupportContacts, supportContacts_);
    };
    GetSupplierInformationResponseBody() = default ;
    GetSupplierInformationResponseBody(const GetSupplierInformationResponseBody &) = default ;
    GetSupplierInformationResponseBody(GetSupplierInformationResponseBody &&) = default ;
    GetSupplierInformationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupplierInformationResponseBody() = default ;
    GetSupplierInformationResponseBody& operator=(const GetSupplierInformationResponseBody &) = default ;
    GetSupplierInformationResponseBody& operator=(GetSupplierInformationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SupportContacts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupportContacts& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, SupportContacts& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      SupportContacts() = default ;
      SupportContacts(const SupportContacts &) = default ;
      SupportContacts(SupportContacts &&) = default ;
      SupportContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupportContacts() = default ;
      SupportContacts& operator=(const SupportContacts &) = default ;
      SupportContacts& operator=(SupportContacts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SupportContacts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline SupportContacts& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The type of the contact method.
      shared_ptr<string> type_ {};
      // The contact method.
      shared_ptr<string> value_ {};
    };

    class DeliverySettings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeliverySettings& obj) { 
        DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
        DARABONBA_PTR_TO_JSON(OssEnabled, ossEnabled_);
        DARABONBA_PTR_TO_JSON(OssExpirationDays, ossExpirationDays_);
        DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
      };
      friend void from_json(const Darabonba::Json& j, DeliverySettings& obj) { 
        DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
        DARABONBA_PTR_FROM_JSON(OssEnabled, ossEnabled_);
        DARABONBA_PTR_FROM_JSON(OssExpirationDays, ossExpirationDays_);
        DARABONBA_PTR_FROM_JSON(OssPath, ossPath_);
      };
      DeliverySettings() = default ;
      DeliverySettings(const DeliverySettings &) = default ;
      DeliverySettings(DeliverySettings &&) = default ;
      DeliverySettings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeliverySettings() = default ;
      DeliverySettings& operator=(const DeliverySettings &) = default ;
      DeliverySettings& operator=(DeliverySettings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ossBucketName_ == nullptr
        && this->ossEnabled_ == nullptr && this->ossExpirationDays_ == nullptr && this->ossPath_ == nullptr; };
      // ossBucketName Field Functions 
      bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
      void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
      inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
      inline DeliverySettings& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


      // ossEnabled Field Functions 
      bool hasOssEnabled() const { return this->ossEnabled_ != nullptr;};
      void deleteOssEnabled() { this->ossEnabled_ = nullptr;};
      inline bool getOssEnabled() const { DARABONBA_PTR_GET_DEFAULT(ossEnabled_, false) };
      inline DeliverySettings& setOssEnabled(bool ossEnabled) { DARABONBA_PTR_SET_VALUE(ossEnabled_, ossEnabled) };


      // ossExpirationDays Field Functions 
      bool hasOssExpirationDays() const { return this->ossExpirationDays_ != nullptr;};
      void deleteOssExpirationDays() { this->ossExpirationDays_ = nullptr;};
      inline int64_t getOssExpirationDays() const { DARABONBA_PTR_GET_DEFAULT(ossExpirationDays_, 0L) };
      inline DeliverySettings& setOssExpirationDays(int64_t ossExpirationDays) { DARABONBA_PTR_SET_VALUE(ossExpirationDays_, ossExpirationDays) };


      // ossPath Field Functions 
      bool hasOssPath() const { return this->ossPath_ != nullptr;};
      void deleteOssPath() { this->ossPath_ = nullptr;};
      inline string getOssPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
      inline DeliverySettings& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    protected:
      // The name of the OSS bucket.
      shared_ptr<string> ossBucketName_ {};
      // Indicates whether the feature that delivers the execution results of Cloud Assistant O\\&M tasks to Object Storage Service (OSS) is enabled. Valid values:
      // 
      // - true: Enabled.
      // 
      // - false (default): Disabled.
      shared_ptr<bool> ossEnabled_ {};
      // The expiration period for objects in OSS, in days.
      shared_ptr<int64_t> ossExpirationDays_ {};
      // The OSS path.
      shared_ptr<string> ossPath_ {};
    };

    virtual bool empty() const override { return this->acrNamespace_ == nullptr
        && this->deliverySettings_ == nullptr && this->enableReseller_ == nullptr && this->operationIp_ == nullptr && this->operationMfaPresent_ == nullptr && this->requestId_ == nullptr
        && this->supplierDesc_ == nullptr && this->supplierLogo_ == nullptr && this->supplierName_ == nullptr && this->supplierUrl_ == nullptr && this->supportContacts_ == nullptr; };
    // acrNamespace Field Functions 
    bool hasAcrNamespace() const { return this->acrNamespace_ != nullptr;};
    void deleteAcrNamespace() { this->acrNamespace_ = nullptr;};
    inline string getAcrNamespace() const { DARABONBA_PTR_GET_DEFAULT(acrNamespace_, "") };
    inline GetSupplierInformationResponseBody& setAcrNamespace(string acrNamespace) { DARABONBA_PTR_SET_VALUE(acrNamespace_, acrNamespace) };


    // deliverySettings Field Functions 
    bool hasDeliverySettings() const { return this->deliverySettings_ != nullptr;};
    void deleteDeliverySettings() { this->deliverySettings_ = nullptr;};
    inline const GetSupplierInformationResponseBody::DeliverySettings & getDeliverySettings() const { DARABONBA_PTR_GET_CONST(deliverySettings_, GetSupplierInformationResponseBody::DeliverySettings) };
    inline GetSupplierInformationResponseBody::DeliverySettings getDeliverySettings() { DARABONBA_PTR_GET(deliverySettings_, GetSupplierInformationResponseBody::DeliverySettings) };
    inline GetSupplierInformationResponseBody& setDeliverySettings(const GetSupplierInformationResponseBody::DeliverySettings & deliverySettings) { DARABONBA_PTR_SET_VALUE(deliverySettings_, deliverySettings) };
    inline GetSupplierInformationResponseBody& setDeliverySettings(GetSupplierInformationResponseBody::DeliverySettings && deliverySettings) { DARABONBA_PTR_SET_RVALUE(deliverySettings_, deliverySettings) };


    // enableReseller Field Functions 
    bool hasEnableReseller() const { return this->enableReseller_ != nullptr;};
    void deleteEnableReseller() { this->enableReseller_ = nullptr;};
    inline bool getEnableReseller() const { DARABONBA_PTR_GET_DEFAULT(enableReseller_, false) };
    inline GetSupplierInformationResponseBody& setEnableReseller(bool enableReseller) { DARABONBA_PTR_SET_VALUE(enableReseller_, enableReseller) };


    // operationIp Field Functions 
    bool hasOperationIp() const { return this->operationIp_ != nullptr;};
    void deleteOperationIp() { this->operationIp_ = nullptr;};
    inline string getOperationIp() const { DARABONBA_PTR_GET_DEFAULT(operationIp_, "") };
    inline GetSupplierInformationResponseBody& setOperationIp(string operationIp) { DARABONBA_PTR_SET_VALUE(operationIp_, operationIp) };


    // operationMfaPresent Field Functions 
    bool hasOperationMfaPresent() const { return this->operationMfaPresent_ != nullptr;};
    void deleteOperationMfaPresent() { this->operationMfaPresent_ = nullptr;};
    inline bool getOperationMfaPresent() const { DARABONBA_PTR_GET_DEFAULT(operationMfaPresent_, false) };
    inline GetSupplierInformationResponseBody& setOperationMfaPresent(bool operationMfaPresent) { DARABONBA_PTR_SET_VALUE(operationMfaPresent_, operationMfaPresent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSupplierInformationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supplierDesc Field Functions 
    bool hasSupplierDesc() const { return this->supplierDesc_ != nullptr;};
    void deleteSupplierDesc() { this->supplierDesc_ = nullptr;};
    inline string getSupplierDesc() const { DARABONBA_PTR_GET_DEFAULT(supplierDesc_, "") };
    inline GetSupplierInformationResponseBody& setSupplierDesc(string supplierDesc) { DARABONBA_PTR_SET_VALUE(supplierDesc_, supplierDesc) };


    // supplierLogo Field Functions 
    bool hasSupplierLogo() const { return this->supplierLogo_ != nullptr;};
    void deleteSupplierLogo() { this->supplierLogo_ = nullptr;};
    inline string getSupplierLogo() const { DARABONBA_PTR_GET_DEFAULT(supplierLogo_, "") };
    inline GetSupplierInformationResponseBody& setSupplierLogo(string supplierLogo) { DARABONBA_PTR_SET_VALUE(supplierLogo_, supplierLogo) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline GetSupplierInformationResponseBody& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    // supplierUrl Field Functions 
    bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
    void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
    inline string getSupplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
    inline GetSupplierInformationResponseBody& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


    // supportContacts Field Functions 
    bool hasSupportContacts() const { return this->supportContacts_ != nullptr;};
    void deleteSupportContacts() { this->supportContacts_ = nullptr;};
    inline const vector<GetSupplierInformationResponseBody::SupportContacts> & getSupportContacts() const { DARABONBA_PTR_GET_CONST(supportContacts_, vector<GetSupplierInformationResponseBody::SupportContacts>) };
    inline vector<GetSupplierInformationResponseBody::SupportContacts> getSupportContacts() { DARABONBA_PTR_GET(supportContacts_, vector<GetSupplierInformationResponseBody::SupportContacts>) };
    inline GetSupplierInformationResponseBody& setSupportContacts(const vector<GetSupplierInformationResponseBody::SupportContacts> & supportContacts) { DARABONBA_PTR_SET_VALUE(supportContacts_, supportContacts) };
    inline GetSupplierInformationResponseBody& setSupportContacts(vector<GetSupplierInformationResponseBody::SupportContacts> && supportContacts) { DARABONBA_PTR_SET_RVALUE(supportContacts_, supportContacts) };


  protected:
    // The namespace for the container image deployment.
    shared_ptr<string> acrNamespace_ {};
    // The computing resource configuration.
    shared_ptr<GetSupplierInformationResponseBody::DeliverySettings> deliverySettings_ {};
    // Indicates whether to enable resellers. Valid values:
    // 
    // - true: Enabled.
    // 
    // - false: Disabled.
    shared_ptr<bool> enableReseller_ {};
    // The IP address for the operation.
    shared_ptr<string> operationIp_ {};
    // Indicates whether a multi-factor authentication (MFA) device is used. Valid values:
    // 
    // - true: Yes.
    // 
    // - false: No.
    shared_ptr<bool> operationMfaPresent_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The description of the service provider.
    shared_ptr<string> supplierDesc_ {};
    // The icon of the service provider.
    shared_ptr<string> supplierLogo_ {};
    // The name of the service provider.
    shared_ptr<string> supplierName_ {};
    // The URL of the service provider.
    shared_ptr<string> supplierUrl_ {};
    // The contact information of the service provider.
    shared_ptr<vector<GetSupplierInformationResponseBody::SupportContacts>> supportContacts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
