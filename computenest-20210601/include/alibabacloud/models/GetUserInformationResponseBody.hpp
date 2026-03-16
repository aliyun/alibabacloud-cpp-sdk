// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERINFORMATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERINFORMATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetUserInformationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserInformationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliverySettings, deliverySettings_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserInformationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliverySettings, deliverySettings_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetUserInformationResponseBody() = default ;
    GetUserInformationResponseBody(const GetUserInformationResponseBody &) = default ;
    GetUserInformationResponseBody(GetUserInformationResponseBody &&) = default ;
    GetUserInformationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserInformationResponseBody() = default ;
    GetUserInformationResponseBody& operator=(const GetUserInformationResponseBody &) = default ;
    GetUserInformationResponseBody& operator=(GetUserInformationResponseBody &&) = default ;
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
      // Indicates whether screencast delivery to OSS is enabled. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> actiontrailDeliveryToOssEnabled_ {};
      // The name of the OSS bucket.
      shared_ptr<string> ossBucketName_ {};
      // Indicates whether screencast delivery to Object Storage Service (OSS) is enabled. Valid values:
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
        && this->requestId_ == nullptr; };
    // deliverySettings Field Functions 
    bool hasDeliverySettings() const { return this->deliverySettings_ != nullptr;};
    void deleteDeliverySettings() { this->deliverySettings_ = nullptr;};
    inline const GetUserInformationResponseBody::DeliverySettings & getDeliverySettings() const { DARABONBA_PTR_GET_CONST(deliverySettings_, GetUserInformationResponseBody::DeliverySettings) };
    inline GetUserInformationResponseBody::DeliverySettings getDeliverySettings() { DARABONBA_PTR_GET(deliverySettings_, GetUserInformationResponseBody::DeliverySettings) };
    inline GetUserInformationResponseBody& setDeliverySettings(const GetUserInformationResponseBody::DeliverySettings & deliverySettings) { DARABONBA_PTR_SET_VALUE(deliverySettings_, deliverySettings) };
    inline GetUserInformationResponseBody& setDeliverySettings(GetUserInformationResponseBody::DeliverySettings && deliverySettings) { DARABONBA_PTR_SET_RVALUE(deliverySettings_, deliverySettings) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserInformationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The delivery settings.
    shared_ptr<GetUserInformationResponseBody::DeliverySettings> deliverySettings_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
