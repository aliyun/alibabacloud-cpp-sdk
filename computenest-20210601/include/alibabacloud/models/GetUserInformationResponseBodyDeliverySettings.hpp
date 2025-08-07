// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERINFORMATIONRESPONSEBODYDELIVERYSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETUSERINFORMATIONRESPONSEBODYDELIVERYSETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetUserInformationResponseBodyDeliverySettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserInformationResponseBodyDeliverySettings& obj) { 
      DARABONBA_PTR_TO_JSON(ActiontrailDeliveryToOssEnabled, actiontrailDeliveryToOssEnabled_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssEnabled, ossEnabled_);
      DARABONBA_PTR_TO_JSON(OssExpirationDays, ossExpirationDays_);
      DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserInformationResponseBodyDeliverySettings& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiontrailDeliveryToOssEnabled, actiontrailDeliveryToOssEnabled_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssEnabled, ossEnabled_);
      DARABONBA_PTR_FROM_JSON(OssExpirationDays, ossExpirationDays_);
      DARABONBA_PTR_FROM_JSON(OssPath, ossPath_);
    };
    GetUserInformationResponseBodyDeliverySettings() = default ;
    GetUserInformationResponseBodyDeliverySettings(const GetUserInformationResponseBodyDeliverySettings &) = default ;
    GetUserInformationResponseBodyDeliverySettings(GetUserInformationResponseBodyDeliverySettings &&) = default ;
    GetUserInformationResponseBodyDeliverySettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserInformationResponseBodyDeliverySettings() = default ;
    GetUserInformationResponseBodyDeliverySettings& operator=(const GetUserInformationResponseBodyDeliverySettings &) = default ;
    GetUserInformationResponseBodyDeliverySettings& operator=(GetUserInformationResponseBodyDeliverySettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actiontrailDeliveryToOssEnabled_ != nullptr
        && this->ossBucketName_ != nullptr && this->ossEnabled_ != nullptr && this->ossExpirationDays_ != nullptr && this->ossPath_ != nullptr; };
    // actiontrailDeliveryToOssEnabled Field Functions 
    bool hasActiontrailDeliveryToOssEnabled() const { return this->actiontrailDeliveryToOssEnabled_ != nullptr;};
    void deleteActiontrailDeliveryToOssEnabled() { this->actiontrailDeliveryToOssEnabled_ = nullptr;};
    inline bool actiontrailDeliveryToOssEnabled() const { DARABONBA_PTR_GET_DEFAULT(actiontrailDeliveryToOssEnabled_, false) };
    inline GetUserInformationResponseBodyDeliverySettings& setActiontrailDeliveryToOssEnabled(bool actiontrailDeliveryToOssEnabled) { DARABONBA_PTR_SET_VALUE(actiontrailDeliveryToOssEnabled_, actiontrailDeliveryToOssEnabled) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline GetUserInformationResponseBodyDeliverySettings& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossEnabled Field Functions 
    bool hasOssEnabled() const { return this->ossEnabled_ != nullptr;};
    void deleteOssEnabled() { this->ossEnabled_ = nullptr;};
    inline bool ossEnabled() const { DARABONBA_PTR_GET_DEFAULT(ossEnabled_, false) };
    inline GetUserInformationResponseBodyDeliverySettings& setOssEnabled(bool ossEnabled) { DARABONBA_PTR_SET_VALUE(ossEnabled_, ossEnabled) };


    // ossExpirationDays Field Functions 
    bool hasOssExpirationDays() const { return this->ossExpirationDays_ != nullptr;};
    void deleteOssExpirationDays() { this->ossExpirationDays_ = nullptr;};
    inline int64_t ossExpirationDays() const { DARABONBA_PTR_GET_DEFAULT(ossExpirationDays_, 0L) };
    inline GetUserInformationResponseBodyDeliverySettings& setOssExpirationDays(int64_t ossExpirationDays) { DARABONBA_PTR_SET_VALUE(ossExpirationDays_, ossExpirationDays) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string ossPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline GetUserInformationResponseBodyDeliverySettings& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


  protected:
    // Indicates whether screencast delivery to OSS is enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> actiontrailDeliveryToOssEnabled_ = nullptr;
    // The name of the OSS bucket.
    std::shared_ptr<string> ossBucketName_ = nullptr;
    // Indicates whether screencast delivery to Object Storage Service (OSS) is enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> ossEnabled_ = nullptr;
    // The number of days for which the screencasts are saved.
    std::shared_ptr<int64_t> ossExpirationDays_ = nullptr;
    // The OSS path.
    std::shared_ptr<string> ossPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
