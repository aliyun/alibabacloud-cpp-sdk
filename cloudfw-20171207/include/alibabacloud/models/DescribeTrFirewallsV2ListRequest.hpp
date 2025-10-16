// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2LISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2LISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrFirewallsV2ListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallsV2ListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(FirewallName, firewallName_);
      DARABONBA_PTR_TO_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(RouteMode, routeMode_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallsV2ListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(FirewallName, firewallName_);
      DARABONBA_PTR_FROM_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(RouteMode, routeMode_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
    };
    DescribeTrFirewallsV2ListRequest() = default ;
    DescribeTrFirewallsV2ListRequest(const DescribeTrFirewallsV2ListRequest &) = default ;
    DescribeTrFirewallsV2ListRequest(DescribeTrFirewallsV2ListRequest &&) = default ;
    DescribeTrFirewallsV2ListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallsV2ListRequest() = default ;
    DescribeTrFirewallsV2ListRequest& operator=(const DescribeTrFirewallsV2ListRequest &) = default ;
    DescribeTrFirewallsV2ListRequest& operator=(DescribeTrFirewallsV2ListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cenId_ == nullptr
        && return this->currentPage_ == nullptr && return this->firewallId_ == nullptr && return this->firewallName_ == nullptr && return this->firewallSwitchStatus_ == nullptr && return this->lang_ == nullptr
        && return this->ownerId_ == nullptr && return this->pageSize_ == nullptr && return this->regionNo_ == nullptr && return this->routeMode_ == nullptr && return this->transitRouterId_ == nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeTrFirewallsV2ListRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeTrFirewallsV2ListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string firewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline DescribeTrFirewallsV2ListRequest& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // firewallName Field Functions 
    bool hasFirewallName() const { return this->firewallName_ != nullptr;};
    void deleteFirewallName() { this->firewallName_ = nullptr;};
    inline string firewallName() const { DARABONBA_PTR_GET_DEFAULT(firewallName_, "") };
    inline DescribeTrFirewallsV2ListRequest& setFirewallName(string firewallName) { DARABONBA_PTR_SET_VALUE(firewallName_, firewallName) };


    // firewallSwitchStatus Field Functions 
    bool hasFirewallSwitchStatus() const { return this->firewallSwitchStatus_ != nullptr;};
    void deleteFirewallSwitchStatus() { this->firewallSwitchStatus_ = nullptr;};
    inline string firewallSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitchStatus_, "") };
    inline DescribeTrFirewallsV2ListRequest& setFirewallSwitchStatus(string firewallSwitchStatus) { DARABONBA_PTR_SET_VALUE(firewallSwitchStatus_, firewallSwitchStatus) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeTrFirewallsV2ListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeTrFirewallsV2ListRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTrFirewallsV2ListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeTrFirewallsV2ListRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // routeMode Field Functions 
    bool hasRouteMode() const { return this->routeMode_ != nullptr;};
    void deleteRouteMode() { this->routeMode_ = nullptr;};
    inline string routeMode() const { DARABONBA_PTR_GET_DEFAULT(routeMode_, "") };
    inline DescribeTrFirewallsV2ListRequest& setRouteMode(string routeMode) { DARABONBA_PTR_SET_VALUE(routeMode_, routeMode) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline DescribeTrFirewallsV2ListRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The ID of the Cloud Enterprise Network (CEN) instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The instance ID of the VPC firewall.
    std::shared_ptr<string> firewallId_ = nullptr;
    // The name of the VPC firewall.
    std::shared_ptr<string> firewallName_ = nullptr;
    // The status of the VPC firewall. Valid values:
    // 
    // *   **opened**: The VPC firewall is enabled.
    // *   **closed**: The VPC firewall is disabled.
    // *   **notconfigured**: The VPC firewall is not created.
    // *   **configured**: The VPC firewall is created but is not enabled.
    // *   **creating**: The VPC firewall is being created.
    // *   **opening**: The VPC firewall is being enabled.
    // *   **deleting**: The VPC firewall is being deleted.
    // 
    // >  If you do not specify this parameter, VPC firewalls in all states are queried.
    std::shared_ptr<string> firewallSwitchStatus_ = nullptr;
    // The language of the content within the response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the transit router.
    std::shared_ptr<string> regionNo_ = nullptr;
    // The routing mode of the VPC firewall. Valid values:
    // 
    // *   **managed**: automatic mode
    // *   **manual**: manual mode
    // 
    // >  If you do not specify this parameter, VPC firewalls in all routing modes are queried.
    std::shared_ptr<string> routeMode_ = nullptr;
    // The ID of the transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
