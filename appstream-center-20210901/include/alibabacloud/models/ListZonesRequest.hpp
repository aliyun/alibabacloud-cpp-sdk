// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, ListZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    ListZonesRequest() = default ;
    ListZonesRequest(const ListZonesRequest &) = default ;
    ListZonesRequest(ListZonesRequest &&) = default ;
    ListZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListZonesRequest() = default ;
    ListZonesRequest& operator=(const ListZonesRequest &) = default ;
    ListZonesRequest& operator=(ListZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizRegionId_ == nullptr
        && this->osType_ == nullptr && this->productType_ == nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ListZonesRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline ListZonesRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListZonesRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The region ID. Required. Specifies the region for which to query available zones. All returned zones are within this region.
    // 
    // The value must be a region ID supported by WUYING Cloud Application. Call [ListRegions](~~ListRegions~~) to obtain the supported region IDs. If an unsupported region is specified, the error code `InvalidParameter.ValueInvalid` is returned.
    // 
    // This parameter is required.
    shared_ptr<string> bizRegionId_ {};
    // The operating system type. Required. Specifies the operating system used by the resource. This parameter, together with `ProductType`, determines the available zones. The value is case-insensitive. Use the following recommended values.
    // 
    // Valid values:
    // 
    // - `Windows`: Windows operating system.
    // - `Linux`: Linux operating system.
    // - `Android`: Android operating system.
    // 
    // This parameter is required.
    shared_ptr<string> osType_ {};
    // The product type. Required. Specifies the product for which to query available zones. The zone list is returned based on the available resources of this product in the specified region. The value is case-insensitive. Use the following recommended values.
    // 
    // Valid values:
    // 
    // - `CloudApp`: WUYING Cloud Application.
    // - `CloudBrowser`: Cloud Browser.
    // - `WuyingServer`: Enterprise Edition Workstation.
    // - `WuyingWorkstation`: Personal Edition Lingou Container Workstation.
    // - `WuyingWorkstationTeam`: Lingou Team Edition Container Workstation.
    // - `WuyingWorkstationBusiness`: Lingou Dedicated Edition Container Workstation.
    // - `AndroidCloud`: Cloud Phone.
    // - `AIAgent`: AgentBay (AI agent).
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
