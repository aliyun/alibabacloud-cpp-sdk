// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYREQUESTCLOUDASSETTYPES_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYREQUESTCLOUDASSETTYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCloudAssetSummaryRequestCloudAssetTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAssetSummaryRequestCloudAssetTypes& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetSummaryRequestCloudAssetTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    GetCloudAssetSummaryRequestCloudAssetTypes() = default ;
    GetCloudAssetSummaryRequestCloudAssetTypes(const GetCloudAssetSummaryRequestCloudAssetTypes &) = default ;
    GetCloudAssetSummaryRequestCloudAssetTypes(GetCloudAssetSummaryRequestCloudAssetTypes &&) = default ;
    GetCloudAssetSummaryRequestCloudAssetTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAssetSummaryRequestCloudAssetTypes() = default ;
    GetCloudAssetSummaryRequestCloudAssetTypes& operator=(const GetCloudAssetSummaryRequestCloudAssetTypes &) = default ;
    GetCloudAssetSummaryRequestCloudAssetTypes& operator=(GetCloudAssetSummaryRequestCloudAssetTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetSubType_ != nullptr
        && this->assetType_ != nullptr && this->vendor_ != nullptr; };
    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline int32_t assetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
    inline GetCloudAssetSummaryRequestCloudAssetTypes& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline GetCloudAssetSummaryRequestCloudAssetTypes& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline GetCloudAssetSummaryRequestCloudAssetTypes& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    std::shared_ptr<int32_t> assetSubType_ = nullptr;
    std::shared_ptr<int32_t> assetType_ = nullptr;
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
