// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMMONITORNODESRESPONSEBODYIPV6ISPCITYNODESIPV6ISPCITYNODE_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMMONITORNODESRESPONSEBODYIPV6ISPCITYNODESIPV6ISPCITYNODE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNodeIps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode& obj) { 
      DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
      DARABONBA_PTR_TO_JSON(CityName, cityName_);
      DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_TO_JSON(CountryName, countryName_);
      DARABONBA_PTR_TO_JSON(DefaultSelected, defaultSelected_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode& obj) { 
      DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
      DARABONBA_PTR_FROM_JSON(CityName, cityName_);
      DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_FROM_JSON(CountryName, countryName_);
      DARABONBA_PTR_FROM_JSON(DefaultSelected, defaultSelected_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode() = default ;
    ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode(const ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode &) = default ;
    ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode(ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode &&) = default ;
    ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode() = default ;
    ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode& operator=(const ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode &) = default ;
    ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode& operator=(ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cityCode_ == nullptr
        && return this->cityName_ == nullptr && return this->countryCode_ == nullptr && return this->countryName_ == nullptr && return this->defaultSelected_ == nullptr && return this->groupName_ == nullptr
        && return this->groupType_ == nullptr && return this->ips_ == nullptr && return this->ispCode_ == nullptr && return this->ispName_ == nullptr && return this->nodeId_ == nullptr; };
    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // countryName Field Functions 
    bool hasCountryName() const { return this->countryName_ != nullptr;};
    void deleteCountryName() { this->countryName_ = nullptr;};
    inline string countryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
    inline ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


    // defaultSelected Field Functions 
    bool hasDefaultSelected() const { return this->defaultSelected_ != nullptr;};
    void deleteDefaultSelected() { this->defaultSelected_ = nullptr;};
    inline bool defaultSelected() const { DARABONBA_PTR_GET_DEFAULT(defaultSelected_, false) };
    inline ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode& setDefaultSelected(bool defaultSelected) { DARABONBA_PTR_SET_VALUE(defaultSelected_, defaultSelected) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const Models::ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNodeIps & ips() const { DARABONBA_PTR_GET_CONST(ips_, Models::ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNodeIps) };
    inline Models::ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNodeIps ips() { DARABONBA_PTR_GET(ips_, Models::ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNodeIps) };
    inline ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode& setIps(const Models::ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNodeIps & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode& setIps(Models::ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNodeIps && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // ispCode Field Functions 
    bool hasIspCode() const { return this->ispCode_ != nullptr;};
    void deleteIspCode() { this->ispCode_ = nullptr;};
    inline string ispCode() const { DARABONBA_PTR_GET_DEFAULT(ispCode_, "") };
    inline ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode& setIspCode(string ispCode) { DARABONBA_PTR_SET_VALUE(ispCode_, ispCode) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // City code.
    std::shared_ptr<string> cityCode_ = nullptr;
    // City name.
    std::shared_ptr<string> cityName_ = nullptr;
    // Country code.
    std::shared_ptr<string> countryCode_ = nullptr;
    // Country name.
    std::shared_ptr<string> countryName_ = nullptr;
    // Monitor node default selection:
    // - true: Selected by default
    // - false: Not selected by default
    std::shared_ptr<bool> defaultSelected_ = nullptr;
    // Monitoring probe group name.
    std::shared_ptr<string> groupName_ = nullptr;
    // Monitoring node group type, currently supported:
    // - BGP: BGP node
    // - OVERSEAS: International node
    // - ISP: Carrier node
    std::shared_ptr<string> groupType_ = nullptr;
    // List of node IP addresses.
    std::shared_ptr<Models::ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNodeIps> ips_ = nullptr;
    // Operator code.
    std::shared_ptr<string> ispCode_ = nullptr;
    // Operator name.
    std::shared_ptr<string> ispName_ = nullptr;
    // Unique identifier ID of the probe node.
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
