// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDVENDORREGIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDVENDORREGIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCloudVendorRegionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudVendorRegionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(Disable, disable_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Selected, selected_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudVendorRegionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(Disable, disable_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Selected, selected_);
    };
    ListCloudVendorRegionsResponseBodyData() = default ;
    ListCloudVendorRegionsResponseBodyData(const ListCloudVendorRegionsResponseBodyData &) = default ;
    ListCloudVendorRegionsResponseBodyData(ListCloudVendorRegionsResponseBodyData &&) = default ;
    ListCloudVendorRegionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudVendorRegionsResponseBodyData() = default ;
    ListCloudVendorRegionsResponseBodyData& operator=(const ListCloudVendorRegionsResponseBodyData &) = default ;
    ListCloudVendorRegionsResponseBodyData& operator=(ListCloudVendorRegionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->area_ != nullptr
        && this->disable_ != nullptr && this->regionId_ != nullptr && this->selected_ != nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline ListCloudVendorRegionsResponseBodyData& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // disable Field Functions 
    bool hasDisable() const { return this->disable_ != nullptr;};
    void deleteDisable() { this->disable_ = nullptr;};
    inline int32_t disable() const { DARABONBA_PTR_GET_DEFAULT(disable_, 0) };
    inline ListCloudVendorRegionsResponseBodyData& setDisable(int32_t disable) { DARABONBA_PTR_SET_VALUE(disable_, disable) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCloudVendorRegionsResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // selected Field Functions 
    bool hasSelected() const { return this->selected_ != nullptr;};
    void deleteSelected() { this->selected_ = nullptr;};
    inline int32_t selected() const { DARABONBA_PTR_GET_DEFAULT(selected_, 0) };
    inline ListCloudVendorRegionsResponseBodyData& setSelected(int32_t selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


  protected:
    // The area to which the region belongs. The valid values vary based on the value of the Vendor parameter.
    // 
    // *   Valid values if **Vendor** is set to Tencent:
    // *   **cn**: China
    // *   **southeast_asia**: Southeast Asia Pacific
    // *   **northeast_asia**: Northeast Asia Pacific
    // *   **southern_asia**: South Asia Pacific
    // *   **north_America**: North America
    // *   **south_America**: South America
    // *   **western_America**: Western United States
    // *   **eastern_America**: Eastern United States
    // *   **european**: Europe
    // *   Valid values if **Vendor** is set to HUAWEICLOUD:
    // *   **cn**: China
    // *   **africa**: Africa
    // *   **latin_america**: Latin America
    // *   **asia**: Asia Pacific
    // *   Valid values if **Vendor** is set to Azure:
    // *   **middle_east**: Middle East
    // *   **south_america**: South America
    // *   **canada**: Canada
    // *   **asia-pacific**: Asia Pacific
    // *   **europe**: Europe
    // *   **africa**: Africa
    // *   **us**: United States
    // *   **other**: other regions
    // *   Valid values if **Vendor** is set to AWS:
    // *   **cn**: China
    // *   **us**: United States
    // *   **eu**: Europe
    // *   **asia**: Asia Pacific
    // *   **south_america**: South America
    // *   **me**: Middle East
    // *   **ca**: Canada
    // *   **af**: Africa
    std::shared_ptr<string> area_ = nullptr;
    // Indicates whether the region is configured as a synchronization region on another site. Valid values:
    // 
    // *   **0**: The region is not configured as a synchronization region on another site.
    // *   **1**: The region is configured as a synchronization region on another site.
    std::shared_ptr<int32_t> disable_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Indicates whether the region is configured as a synchronization region on this site. Valid values:
    // 
    // *   **0**: The region is not configured as a synchronization region on this site.
    // *   **1**: The region is configured as a synchronization region on this site.
    std::shared_ptr<int32_t> selected_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
