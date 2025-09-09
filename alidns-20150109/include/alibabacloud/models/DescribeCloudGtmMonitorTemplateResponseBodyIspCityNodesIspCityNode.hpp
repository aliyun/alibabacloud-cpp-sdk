// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMMONITORTEMPLATERESPONSEBODYISPCITYNODESISPCITYNODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMMONITORTEMPLATERESPONSEBODYISPCITYNODESISPCITYNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode& obj) { 
      DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
      DARABONBA_PTR_TO_JSON(CityName, cityName_);
      DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_TO_JSON(CountryName, countryName_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode& obj) { 
      DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
      DARABONBA_PTR_FROM_JSON(CityName, cityName_);
      DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_FROM_JSON(CountryName, countryName_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
    };
    DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode() = default ;
    DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode(const DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode &) = default ;
    DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode(DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode &&) = default ;
    DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode() = default ;
    DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode& operator=(const DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode &) = default ;
    DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode& operator=(DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cityCode_ != nullptr
        && this->cityName_ != nullptr && this->countryCode_ != nullptr && this->countryName_ != nullptr && this->groupName_ != nullptr && this->groupType_ != nullptr
        && this->ispCode_ != nullptr && this->ispName_ != nullptr; };
    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // countryName Field Functions 
    bool hasCountryName() const { return this->countryName_ != nullptr;};
    void deleteCountryName() { this->countryName_ = nullptr;};
    inline string countryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
    inline DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // ispCode Field Functions 
    bool hasIspCode() const { return this->ispCode_ != nullptr;};
    void deleteIspCode() { this->ispCode_ = nullptr;};
    inline string ispCode() const { DARABONBA_PTR_GET_DEFAULT(ispCode_, "") };
    inline DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode& setIspCode(string ispCode) { DARABONBA_PTR_SET_VALUE(ispCode_, ispCode) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


  protected:
    // City code
    std::shared_ptr<string> cityCode_ = nullptr;
    // City name
    std::shared_ptr<string> cityName_ = nullptr;
    // Country Code
    std::shared_ptr<string> countryCode_ = nullptr;
    // Country Name
    std::shared_ptr<string> countryName_ = nullptr;
    // Probe node group type name
    std::shared_ptr<string> groupName_ = nullptr;
    // Probe node group types:
    // - BGP: BGP nodes
    // - OVERSEAS: International nodes
    // - ISP: Carrier nodes
    std::shared_ptr<string> groupType_ = nullptr;
    // Operator Code
    std::shared_ptr<string> ispCode_ = nullptr;
    // Operator Name
    std::shared_ptr<string> ispName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
