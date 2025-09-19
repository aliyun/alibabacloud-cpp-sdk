// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTATTACKPATHASSETRESPONSEBODYATTACKPATHASSETTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTATTACKPATHASSETRESPONSEBODYATTACKPATHASSETTYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListSupportAttackPathAssetResponseBodyAttackPathAssetTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportAttackPathAssetResponseBodyAttackPathAssetTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportAttackPathAssetResponseBodyAttackPathAssetTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    ListSupportAttackPathAssetResponseBodyAttackPathAssetTypeList() = default ;
    ListSupportAttackPathAssetResponseBodyAttackPathAssetTypeList(const ListSupportAttackPathAssetResponseBodyAttackPathAssetTypeList &) = default ;
    ListSupportAttackPathAssetResponseBodyAttackPathAssetTypeList(ListSupportAttackPathAssetResponseBodyAttackPathAssetTypeList &&) = default ;
    ListSupportAttackPathAssetResponseBodyAttackPathAssetTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportAttackPathAssetResponseBodyAttackPathAssetTypeList() = default ;
    ListSupportAttackPathAssetResponseBodyAttackPathAssetTypeList& operator=(const ListSupportAttackPathAssetResponseBodyAttackPathAssetTypeList &) = default ;
    ListSupportAttackPathAssetResponseBodyAttackPathAssetTypeList& operator=(ListSupportAttackPathAssetResponseBodyAttackPathAssetTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetSubType_ != nullptr
        && this->assetType_ != nullptr && this->vendor_ != nullptr; };
    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline int64_t assetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0L) };
    inline ListSupportAttackPathAssetResponseBodyAttackPathAssetTypeList& setAssetSubType(int64_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int64_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0L) };
    inline ListSupportAttackPathAssetResponseBodyAttackPathAssetTypeList& setAssetType(int64_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int64_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0L) };
    inline ListSupportAttackPathAssetResponseBodyAttackPathAssetTypeList& setVendor(int64_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Subtype of the cloud product asset.
    std::shared_ptr<int64_t> assetSubType_ = nullptr;
    // Type of the cloud product asset.
    std::shared_ptr<int64_t> assetType_ = nullptr;
    // Vendor of the cloud product asset.
    std::shared_ptr<int64_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
