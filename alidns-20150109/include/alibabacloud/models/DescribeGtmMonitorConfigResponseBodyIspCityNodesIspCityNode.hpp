// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMMONITORCONFIGRESPONSEBODYISPCITYNODESISPCITYNODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMMONITORCONFIGRESPONSEBODYISPCITYNODESISPCITYNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode& obj) { 
      DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
      DARABONBA_PTR_TO_JSON(CityName, cityName_);
      DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_TO_JSON(CountryName, countryName_);
      DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode& obj) { 
      DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
      DARABONBA_PTR_FROM_JSON(CityName, cityName_);
      DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_FROM_JSON(CountryName, countryName_);
      DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
    };
    DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode() = default ;
    DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode(const DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode &) = default ;
    DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode(DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode &&) = default ;
    DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode() = default ;
    DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode& operator=(const DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode &) = default ;
    DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode& operator=(DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cityCode_ == nullptr
        && return this->cityName_ == nullptr && return this->countryCode_ == nullptr && return this->countryName_ == nullptr && return this->ispCode_ == nullptr && return this->ispName_ == nullptr; };
    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // countryName Field Functions 
    bool hasCountryName() const { return this->countryName_ != nullptr;};
    void deleteCountryName() { this->countryName_ = nullptr;};
    inline string countryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
    inline DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


    // ispCode Field Functions 
    bool hasIspCode() const { return this->ispCode_ != nullptr;};
    void deleteIspCode() { this->ispCode_ = nullptr;};
    inline string ispCode() const { DARABONBA_PTR_GET_DEFAULT(ispCode_, "") };
    inline DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode& setIspCode(string ispCode) { DARABONBA_PTR_SET_VALUE(ispCode_, ispCode) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


  protected:
    // The code of the city where the monitored node is deployed.
    std::shared_ptr<string> cityCode_ = nullptr;
    // The display name of the city where the monitored node is deployed.
    std::shared_ptr<string> cityName_ = nullptr;
    // The code of the country where the monitored node is deployed.
    std::shared_ptr<string> countryCode_ = nullptr;
    // The display name of the country where the monitored node is deployed.
    std::shared_ptr<string> countryName_ = nullptr;
    // The code of the Internet service provider (ISP) to which the monitored node belongs.
    std::shared_ptr<string> ispCode_ = nullptr;
    // The display name of the ISP to which the monitored node belongs.
    std::shared_ptr<string> ispName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
