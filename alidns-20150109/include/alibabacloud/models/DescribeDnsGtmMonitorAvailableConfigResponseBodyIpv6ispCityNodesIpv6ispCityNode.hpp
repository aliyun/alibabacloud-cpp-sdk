// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORAVAILABLECONFIGRESPONSEBODYIPV6ISPCITYNODESIPV6ISPCITYNODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORAVAILABLECONFIGRESPONSEBODYIPV6ISPCITYNODESIPV6ISPCITYNODE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNodeIps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode& obj) { 
      DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
      DARABONBA_PTR_TO_JSON(CityName, cityName_);
      DARABONBA_PTR_TO_JSON(DefaultSelected, defaultSelected_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode& obj) { 
      DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
      DARABONBA_PTR_FROM_JSON(CityName, cityName_);
      DARABONBA_PTR_FROM_JSON(DefaultSelected, defaultSelected_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
    };
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode() = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode(const DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode &) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode(DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode &&) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode() = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode& operator=(const DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode &) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode& operator=(DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cityCode_ != nullptr
        && this->cityName_ != nullptr && this->defaultSelected_ != nullptr && this->groupName_ != nullptr && this->groupType_ != nullptr && this->ips_ != nullptr
        && this->ispCode_ != nullptr && this->ispName_ != nullptr; };
    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // defaultSelected Field Functions 
    bool hasDefaultSelected() const { return this->defaultSelected_ != nullptr;};
    void deleteDefaultSelected() { this->defaultSelected_ = nullptr;};
    inline bool defaultSelected() const { DARABONBA_PTR_GET_DEFAULT(defaultSelected_, false) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode& setDefaultSelected(bool defaultSelected) { DARABONBA_PTR_SET_VALUE(defaultSelected_, defaultSelected) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNodeIps & ips() const { DARABONBA_PTR_GET_CONST(ips_, Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNodeIps) };
    inline Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNodeIps ips() { DARABONBA_PTR_GET(ips_, Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNodeIps) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode& setIps(const Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNodeIps & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode& setIps(Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNodeIps && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // ispCode Field Functions 
    bool hasIspCode() const { return this->ispCode_ != nullptr;};
    void deleteIspCode() { this->ispCode_ = nullptr;};
    inline string ispCode() const { DARABONBA_PTR_GET_DEFAULT(ispCode_, "") };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode& setIspCode(string ispCode) { DARABONBA_PTR_SET_VALUE(ispCode_, ispCode) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


  protected:
    // The city code.
    std::shared_ptr<string> cityCode_ = nullptr;
    // The display name of the city.
    std::shared_ptr<string> cityName_ = nullptr;
    // Indicates whether the health check node is selected by default.
    std::shared_ptr<bool> defaultSelected_ = nullptr;
    // The name of the node group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The type of the node group. Valid values:
    // 
    // *   BGP: BGP node
    // *   OVERSEAS: node outside the Chinese mainland
    // *   ISP: ISP node
    std::shared_ptr<string> groupType_ = nullptr;
    // This parameter is not returned.
    std::shared_ptr<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNodeIps> ips_ = nullptr;
    // The ISP code.
    std::shared_ptr<string> ispCode_ = nullptr;
    // The display name of the ISP.
    std::shared_ptr<string> ispName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
