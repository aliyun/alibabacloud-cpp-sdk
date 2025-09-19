// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTACKPATHEVENTREQUESTATTACKPATHASSETLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTATTACKPATHEVENTREQUESTATTACKPATHASSETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAttackPathEventRequestAttackPathAssetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttackPathEventRequestAttackPathAssetList& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttackPathEventRequestAttackPathAssetList& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    ListAttackPathEventRequestAttackPathAssetList() = default ;
    ListAttackPathEventRequestAttackPathAssetList(const ListAttackPathEventRequestAttackPathAssetList &) = default ;
    ListAttackPathEventRequestAttackPathAssetList(ListAttackPathEventRequestAttackPathAssetList &&) = default ;
    ListAttackPathEventRequestAttackPathAssetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttackPathEventRequestAttackPathAssetList() = default ;
    ListAttackPathEventRequestAttackPathAssetList& operator=(const ListAttackPathEventRequestAttackPathAssetList &) = default ;
    ListAttackPathEventRequestAttackPathAssetList& operator=(ListAttackPathEventRequestAttackPathAssetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetSubType_ != nullptr
        && this->assetType_ != nullptr && this->nodeType_ != nullptr && this->vendor_ != nullptr; };
    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline int32_t assetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
    inline ListAttackPathEventRequestAttackPathAssetList& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline ListAttackPathEventRequestAttackPathAssetList& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ListAttackPathEventRequestAttackPathAssetList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline ListAttackPathEventRequestAttackPathAssetList& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Subtype of the cloud product asset.
    // 
    // > You can call [ListSupportAttackPathAsset](~~ListSupportAttackPathAsset~~) to query the subtype of the cloud product asset.
    std::shared_ptr<int32_t> assetSubType_ = nullptr;
    // Type of the cloud product asset.
    // 
    // > You can call [ListSupportAttackPathAsset](~~ListSupportAttackPathAsset~~) to query the type of the cloud product asset.
    std::shared_ptr<int32_t> assetType_ = nullptr;
    // Node type, values:
    // - **start**: start point.
    // - **end**: end point.
    std::shared_ptr<string> nodeType_ = nullptr;
    // Vendor of the cloud product asset.
    // > You can call [ListSupportAttackPathAsset](~~ListSupportAttackPathAsset~~) to query the vendor of the cloud product asset.
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
