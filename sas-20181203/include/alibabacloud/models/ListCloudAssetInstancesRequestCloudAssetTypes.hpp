// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDASSETINSTANCESREQUESTCLOUDASSETTYPES_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDASSETINSTANCESREQUESTCLOUDASSETTYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCloudAssetInstancesRequestCloudAssetTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAssetInstancesRequestCloudAssetTypes& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAssetInstancesRequestCloudAssetTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    ListCloudAssetInstancesRequestCloudAssetTypes() = default ;
    ListCloudAssetInstancesRequestCloudAssetTypes(const ListCloudAssetInstancesRequestCloudAssetTypes &) = default ;
    ListCloudAssetInstancesRequestCloudAssetTypes(ListCloudAssetInstancesRequestCloudAssetTypes &&) = default ;
    ListCloudAssetInstancesRequestCloudAssetTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAssetInstancesRequestCloudAssetTypes() = default ;
    ListCloudAssetInstancesRequestCloudAssetTypes& operator=(const ListCloudAssetInstancesRequestCloudAssetTypes &) = default ;
    ListCloudAssetInstancesRequestCloudAssetTypes& operator=(ListCloudAssetInstancesRequestCloudAssetTypes &&) = default ;
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
    inline ListCloudAssetInstancesRequestCloudAssetTypes& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline ListCloudAssetInstancesRequestCloudAssetTypes& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline ListCloudAssetInstancesRequestCloudAssetTypes& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The subtype of the cloud asset.
    // 
    // You can call the [GetCloudAssetCriteria](~~GetCloudAssetCriteria~~) operation to query the subtype of the cloud asset.
    std::shared_ptr<int32_t> assetSubType_ = nullptr;
    // The type of the cloud asset.
    // 
    // You can call the [GetCloudAssetCriteria](~~GetCloudAssetCriteria~~) operation to query the cloud asset type.
    std::shared_ptr<int32_t> assetType_ = nullptr;
    // The server type. Valid values:
    // 
    // *   **0**: a cloud asset provided by Alibaba Cloud
    // *   **1**: a cloud asset outside Alibaba Cloud
    // *   **2**: a cloud asset in a data center
    // *   **3**, **4**, **5**, and **7**: a cloud asset provided by a third-party service provider
    // *   **8**: a lightweight cloud asset
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
