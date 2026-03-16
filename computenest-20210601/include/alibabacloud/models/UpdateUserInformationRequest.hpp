// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERINFORMATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERINFORMATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class UpdateUserInformationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserInformationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliverySettings, deliverySettings_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserInformationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliverySettings, deliverySettings_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateUserInformationRequest() = default ;
    UpdateUserInformationRequest(const UpdateUserInformationRequest &) = default ;
    UpdateUserInformationRequest(UpdateUserInformationRequest &&) = default ;
    UpdateUserInformationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserInformationRequest() = default ;
    UpdateUserInformationRequest& operator=(const UpdateUserInformationRequest &) = default ;
    UpdateUserInformationRequest& operator=(UpdateUserInformationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeliverySettings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeliverySettings& obj) { 
        DARABONBA_PTR_TO_JSON(ActiontrailDeliveryToOssEnabled, actiontrailDeliveryToOssEnabled_);
        DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
        DARABONBA_PTR_TO_JSON(OssEnabled, ossEnabled_);
        DARABONBA_PTR_TO_JSON(OssExpirationDays, ossExpirationDays_);
        DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
      };
      friend void from_json(const Darabonba::Json& j, DeliverySettings& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiontrailDeliveryToOssEnabled, actiontrailDeliveryToOssEnabled_);
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
      virtual bool empty() const override { return this->actiontrailDeliveryToOssEnabled_ == nullptr
        && this->ossBucketName_ == nullptr && this->ossEnabled_ == nullptr && this->ossExpirationDays_ == nullptr && this->ossPath_ == nullptr; };
      // actiontrailDeliveryToOssEnabled Field Functions 
      bool hasActiontrailDeliveryToOssEnabled() const { return this->actiontrailDeliveryToOssEnabled_ != nullptr;};
      void deleteActiontrailDeliveryToOssEnabled() { this->actiontrailDeliveryToOssEnabled_ = nullptr;};
      inline bool getActiontrailDeliveryToOssEnabled() const { DARABONBA_PTR_GET_DEFAULT(actiontrailDeliveryToOssEnabled_, false) };
      inline DeliverySettings& setActiontrailDeliveryToOssEnabled(bool actiontrailDeliveryToOssEnabled) { DARABONBA_PTR_SET_VALUE(actiontrailDeliveryToOssEnabled_, actiontrailDeliveryToOssEnabled) };


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
      // Specifies whether to enable screencast delivery to OSS. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> actiontrailDeliveryToOssEnabled_ {};
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
        && this->regionId_ == nullptr; };
    // deliverySettings Field Functions 
    bool hasDeliverySettings() const { return this->deliverySettings_ != nullptr;};
    void deleteDeliverySettings() { this->deliverySettings_ = nullptr;};
    inline const UpdateUserInformationRequest::DeliverySettings & getDeliverySettings() const { DARABONBA_PTR_GET_CONST(deliverySettings_, UpdateUserInformationRequest::DeliverySettings) };
    inline UpdateUserInformationRequest::DeliverySettings getDeliverySettings() { DARABONBA_PTR_GET(deliverySettings_, UpdateUserInformationRequest::DeliverySettings) };
    inline UpdateUserInformationRequest& setDeliverySettings(const UpdateUserInformationRequest::DeliverySettings & deliverySettings) { DARABONBA_PTR_SET_VALUE(deliverySettings_, deliverySettings) };
    inline UpdateUserInformationRequest& setDeliverySettings(UpdateUserInformationRequest::DeliverySettings && deliverySettings) { DARABONBA_PTR_SET_RVALUE(deliverySettings_, deliverySettings) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateUserInformationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The modified delivery settings.
    shared_ptr<UpdateUserInformationRequest::DeliverySettings> deliverySettings_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
