// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDNOTESHRINKREQUESTSTORAGECONFIG_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDNOTESHRINKREQUESTSTORAGECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudNoteShrinkRequestStorageConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudNoteShrinkRequestStorageConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudNoteShrinkRequestStorageConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    StartCloudNoteShrinkRequestStorageConfig() = default ;
    StartCloudNoteShrinkRequestStorageConfig(const StartCloudNoteShrinkRequestStorageConfig &) = default ;
    StartCloudNoteShrinkRequestStorageConfig(StartCloudNoteShrinkRequestStorageConfig &&) = default ;
    StartCloudNoteShrinkRequestStorageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudNoteShrinkRequestStorageConfig() = default ;
    StartCloudNoteShrinkRequestStorageConfig& operator=(const StartCloudNoteShrinkRequestStorageConfig &) = default ;
    StartCloudNoteShrinkRequestStorageConfig& operator=(StartCloudNoteShrinkRequestStorageConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKey_ != nullptr
        && this->bucket_ != nullptr && this->region_ != nullptr && this->secretKey_ != nullptr && this->vendor_ != nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string accessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline StartCloudNoteShrinkRequestStorageConfig& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline StartCloudNoteShrinkRequestStorageConfig& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline int32_t region() const { DARABONBA_PTR_GET_DEFAULT(region_, 0) };
    inline StartCloudNoteShrinkRequestStorageConfig& setRegion(int32_t region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string secretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline StartCloudNoteShrinkRequestStorageConfig& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline StartCloudNoteShrinkRequestStorageConfig& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // accessKey。
    // 
    // This parameter is required.
    std::shared_ptr<string> accessKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bucket_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> region_ = nullptr;
    // secretKey。
    // 
    // This parameter is required.
    std::shared_ptr<string> secretKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
