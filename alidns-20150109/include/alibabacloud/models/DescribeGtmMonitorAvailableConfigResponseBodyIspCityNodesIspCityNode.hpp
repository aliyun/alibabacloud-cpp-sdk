// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMMONITORAVAILABLECONFIGRESPONSEBODYISPCITYNODESISPCITYNODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMMONITORAVAILABLECONFIGRESPONSEBODYISPCITYNODESISPCITYNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode& obj) { 
      DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
      DARABONBA_PTR_TO_JSON(CityName, cityName_);
      DARABONBA_PTR_TO_JSON(DefaultSelected, defaultSelected_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
      DARABONBA_PTR_TO_JSON(Mainland, mainland_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode& obj) { 
      DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
      DARABONBA_PTR_FROM_JSON(CityName, cityName_);
      DARABONBA_PTR_FROM_JSON(DefaultSelected, defaultSelected_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
      DARABONBA_PTR_FROM_JSON(Mainland, mainland_);
    };
    DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode() = default ;
    DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode(const DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode &) = default ;
    DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode(DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode &&) = default ;
    DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode() = default ;
    DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode& operator=(const DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode &) = default ;
    DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode& operator=(DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cityCode_ != nullptr
        && this->cityName_ != nullptr && this->defaultSelected_ != nullptr && this->groupName_ != nullptr && this->groupType_ != nullptr && this->ispCode_ != nullptr
        && this->ispName_ != nullptr && this->mainland_ != nullptr; };
    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // defaultSelected Field Functions 
    bool hasDefaultSelected() const { return this->defaultSelected_ != nullptr;};
    void deleteDefaultSelected() { this->defaultSelected_ = nullptr;};
    inline bool defaultSelected() const { DARABONBA_PTR_GET_DEFAULT(defaultSelected_, false) };
    inline DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode& setDefaultSelected(bool defaultSelected) { DARABONBA_PTR_SET_VALUE(defaultSelected_, defaultSelected) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // ispCode Field Functions 
    bool hasIspCode() const { return this->ispCode_ != nullptr;};
    void deleteIspCode() { this->ispCode_ = nullptr;};
    inline string ispCode() const { DARABONBA_PTR_GET_DEFAULT(ispCode_, "") };
    inline DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode& setIspCode(string ispCode) { DARABONBA_PTR_SET_VALUE(ispCode_, ispCode) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    // mainland Field Functions 
    bool hasMainland() const { return this->mainland_ != nullptr;};
    void deleteMainland() { this->mainland_ = nullptr;};
    inline bool mainland() const { DARABONBA_PTR_GET_DEFAULT(mainland_, false) };
    inline DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode& setMainland(bool mainland) { DARABONBA_PTR_SET_VALUE(mainland_, mainland) };


  protected:
    // The code of the city where the monitored node is deployed.
    std::shared_ptr<string> cityCode_ = nullptr;
    // The display name of the city where the monitored node is deployed.
    std::shared_ptr<string> cityName_ = nullptr;
    // Indicates whether the monitored node is selected for the health check by default.
    std::shared_ptr<bool> defaultSelected_ = nullptr;
    // The name of the group to which the monitored node belongs.
    // 
    // Valid values: Overseas Nodes, BGP Nodes, and ISP Nodes.
    std::shared_ptr<string> groupName_ = nullptr;
    // The type of the group to which the monitored node belongs.
    // 
    // Valid values: BGP, OVERSEAS, and ISP.
    std::shared_ptr<string> groupType_ = nullptr;
    // The code of the Internet service provider (ISP) to which the monitored node belongs.
    // 
    // *   If the value of the GroupType parameter is BGP or OVERSEAS, the value of IspCode is 465 by default.
    // *   If the value of the GroupType parameter is not BGP or OVERSEAS, valid values of IspCode are 232, 132, and 5. and is used together with CityCode.
    std::shared_ptr<string> ispCode_ = nullptr;
    // The display name of the ISP to which the monitored node belongs.
    std::shared_ptr<string> ispName_ = nullptr;
    // Indicates whether the monitored node is deployed in the Chinese mainland.
    std::shared_ptr<bool> mainland_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
