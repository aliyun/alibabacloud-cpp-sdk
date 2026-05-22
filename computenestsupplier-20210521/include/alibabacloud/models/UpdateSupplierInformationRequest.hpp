// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUPPLIERINFORMATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUPPLIERINFORMATIONREQUEST_HPP_
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
  class UpdateSupplierInformationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSupplierInformationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliverySettings, deliverySettings_);
      DARABONBA_PTR_TO_JSON(OperationIp, operationIp_);
      DARABONBA_PTR_TO_JSON(OperationMfaPresent, operationMfaPresent_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_TO_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_TO_JSON(SupportContacts, supportContacts_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSupplierInformationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliverySettings, deliverySettings_);
      DARABONBA_PTR_FROM_JSON(OperationIp, operationIp_);
      DARABONBA_PTR_FROM_JSON(OperationMfaPresent, operationMfaPresent_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_FROM_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_FROM_JSON(SupportContacts, supportContacts_);
    };
    UpdateSupplierInformationRequest() = default ;
    UpdateSupplierInformationRequest(const UpdateSupplierInformationRequest &) = default ;
    UpdateSupplierInformationRequest(UpdateSupplierInformationRequest &&) = default ;
    UpdateSupplierInformationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSupplierInformationRequest() = default ;
    UpdateSupplierInformationRequest& operator=(const UpdateSupplierInformationRequest &) = default ;
    UpdateSupplierInformationRequest& operator=(UpdateSupplierInformationRequest &&) = default ;
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
      // The type of  contact information
      shared_ptr<string> type_ {};
      // The value of contact information
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
      // Specifies whether to enable screencast delivery to Object Storage Service (OSS). Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> ossEnabled_ {};
      // The number of days for which the screencasts are saved.
      shared_ptr<int64_t> ossExpirationDays_ {};
      // The OSS path.
      shared_ptr<string> ossPath_ {};
    };

    virtual bool empty() const override { return this->deliverySettings_ == nullptr
        && this->operationIp_ == nullptr && this->operationMfaPresent_ == nullptr && this->regionId_ == nullptr && this->supplierDesc_ == nullptr && this->supplierLogo_ == nullptr
        && this->supplierUrl_ == nullptr && this->supportContacts_ == nullptr; };
    // deliverySettings Field Functions 
    bool hasDeliverySettings() const { return this->deliverySettings_ != nullptr;};
    void deleteDeliverySettings() { this->deliverySettings_ = nullptr;};
    inline const UpdateSupplierInformationRequest::DeliverySettings & getDeliverySettings() const { DARABONBA_PTR_GET_CONST(deliverySettings_, UpdateSupplierInformationRequest::DeliverySettings) };
    inline UpdateSupplierInformationRequest::DeliverySettings getDeliverySettings() { DARABONBA_PTR_GET(deliverySettings_, UpdateSupplierInformationRequest::DeliverySettings) };
    inline UpdateSupplierInformationRequest& setDeliverySettings(const UpdateSupplierInformationRequest::DeliverySettings & deliverySettings) { DARABONBA_PTR_SET_VALUE(deliverySettings_, deliverySettings) };
    inline UpdateSupplierInformationRequest& setDeliverySettings(UpdateSupplierInformationRequest::DeliverySettings && deliverySettings) { DARABONBA_PTR_SET_RVALUE(deliverySettings_, deliverySettings) };


    // operationIp Field Functions 
    bool hasOperationIp() const { return this->operationIp_ != nullptr;};
    void deleteOperationIp() { this->operationIp_ = nullptr;};
    inline string getOperationIp() const { DARABONBA_PTR_GET_DEFAULT(operationIp_, "") };
    inline UpdateSupplierInformationRequest& setOperationIp(string operationIp) { DARABONBA_PTR_SET_VALUE(operationIp_, operationIp) };


    // operationMfaPresent Field Functions 
    bool hasOperationMfaPresent() const { return this->operationMfaPresent_ != nullptr;};
    void deleteOperationMfaPresent() { this->operationMfaPresent_ = nullptr;};
    inline bool getOperationMfaPresent() const { DARABONBA_PTR_GET_DEFAULT(operationMfaPresent_, false) };
    inline UpdateSupplierInformationRequest& setOperationMfaPresent(bool operationMfaPresent) { DARABONBA_PTR_SET_VALUE(operationMfaPresent_, operationMfaPresent) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateSupplierInformationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // supplierDesc Field Functions 
    bool hasSupplierDesc() const { return this->supplierDesc_ != nullptr;};
    void deleteSupplierDesc() { this->supplierDesc_ = nullptr;};
    inline string getSupplierDesc() const { DARABONBA_PTR_GET_DEFAULT(supplierDesc_, "") };
    inline UpdateSupplierInformationRequest& setSupplierDesc(string supplierDesc) { DARABONBA_PTR_SET_VALUE(supplierDesc_, supplierDesc) };


    // supplierLogo Field Functions 
    bool hasSupplierLogo() const { return this->supplierLogo_ != nullptr;};
    void deleteSupplierLogo() { this->supplierLogo_ = nullptr;};
    inline string getSupplierLogo() const { DARABONBA_PTR_GET_DEFAULT(supplierLogo_, "") };
    inline UpdateSupplierInformationRequest& setSupplierLogo(string supplierLogo) { DARABONBA_PTR_SET_VALUE(supplierLogo_, supplierLogo) };


    // supplierUrl Field Functions 
    bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
    void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
    inline string getSupplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
    inline UpdateSupplierInformationRequest& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


    // supportContacts Field Functions 
    bool hasSupportContacts() const { return this->supportContacts_ != nullptr;};
    void deleteSupportContacts() { this->supportContacts_ = nullptr;};
    inline const vector<UpdateSupplierInformationRequest::SupportContacts> & getSupportContacts() const { DARABONBA_PTR_GET_CONST(supportContacts_, vector<UpdateSupplierInformationRequest::SupportContacts>) };
    inline vector<UpdateSupplierInformationRequest::SupportContacts> getSupportContacts() { DARABONBA_PTR_GET(supportContacts_, vector<UpdateSupplierInformationRequest::SupportContacts>) };
    inline UpdateSupplierInformationRequest& setSupportContacts(const vector<UpdateSupplierInformationRequest::SupportContacts> & supportContacts) { DARABONBA_PTR_SET_VALUE(supportContacts_, supportContacts) };
    inline UpdateSupplierInformationRequest& setSupportContacts(vector<UpdateSupplierInformationRequest::SupportContacts> && supportContacts) { DARABONBA_PTR_SET_RVALUE(supportContacts_, supportContacts) };


  protected:
    // The delivery settings.
    shared_ptr<UpdateSupplierInformationRequest::DeliverySettings> deliverySettings_ {};
    // The Ip of operation.
    shared_ptr<string> operationIp_ {};
    // The MFA of operation.
    shared_ptr<bool> operationMfaPresent_ {};
    // Region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The description of service provider.
    shared_ptr<string> supplierDesc_ {};
    // The Logo of service provider.
    shared_ptr<string> supplierLogo_ {};
    // The URL of the service provider.
    shared_ptr<string> supplierUrl_ {};
    // Contact information of the service provider
    shared_ptr<vector<UpdateSupplierInformationRequest::SupportContacts>> supportContacts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
