// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPPLIERINFORMATIONRESPONSEBODYDELIVERYSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETSUPPLIERINFORMATIONRESPONSEBODYDELIVERYSETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetSupplierInformationResponseBodyDeliverySettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupplierInformationResponseBodyDeliverySettings& obj) { 
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssEnabled, ossEnabled_);
      DARABONBA_PTR_TO_JSON(OssExpirationDays, ossExpirationDays_);
      DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupplierInformationResponseBodyDeliverySettings& obj) { 
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssEnabled, ossEnabled_);
      DARABONBA_PTR_FROM_JSON(OssExpirationDays, ossExpirationDays_);
      DARABONBA_PTR_FROM_JSON(OssPath, ossPath_);
    };
    GetSupplierInformationResponseBodyDeliverySettings() = default ;
    GetSupplierInformationResponseBodyDeliverySettings(const GetSupplierInformationResponseBodyDeliverySettings &) = default ;
    GetSupplierInformationResponseBodyDeliverySettings(GetSupplierInformationResponseBodyDeliverySettings &&) = default ;
    GetSupplierInformationResponseBodyDeliverySettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupplierInformationResponseBodyDeliverySettings() = default ;
    GetSupplierInformationResponseBodyDeliverySettings& operator=(const GetSupplierInformationResponseBodyDeliverySettings &) = default ;
    GetSupplierInformationResponseBodyDeliverySettings& operator=(GetSupplierInformationResponseBodyDeliverySettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ossBucketName_ != nullptr
        && this->ossEnabled_ != nullptr && this->ossExpirationDays_ != nullptr && this->ossPath_ != nullptr; };
    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline GetSupplierInformationResponseBodyDeliverySettings& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossEnabled Field Functions 
    bool hasOssEnabled() const { return this->ossEnabled_ != nullptr;};
    void deleteOssEnabled() { this->ossEnabled_ = nullptr;};
    inline bool ossEnabled() const { DARABONBA_PTR_GET_DEFAULT(ossEnabled_, false) };
    inline GetSupplierInformationResponseBodyDeliverySettings& setOssEnabled(bool ossEnabled) { DARABONBA_PTR_SET_VALUE(ossEnabled_, ossEnabled) };


    // ossExpirationDays Field Functions 
    bool hasOssExpirationDays() const { return this->ossExpirationDays_ != nullptr;};
    void deleteOssExpirationDays() { this->ossExpirationDays_ = nullptr;};
    inline int64_t ossExpirationDays() const { DARABONBA_PTR_GET_DEFAULT(ossExpirationDays_, 0L) };
    inline GetSupplierInformationResponseBodyDeliverySettings& setOssExpirationDays(int64_t ossExpirationDays) { DARABONBA_PTR_SET_VALUE(ossExpirationDays_, ossExpirationDays) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string ossPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline GetSupplierInformationResponseBodyDeliverySettings& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


  protected:
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
} // namespace ComputeNestSupplier20210521
#endif
