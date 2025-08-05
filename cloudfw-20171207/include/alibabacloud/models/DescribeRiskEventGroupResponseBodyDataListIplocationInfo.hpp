// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTGROUPRESPONSEBODYDATALISTIPLOCATIONINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTGROUPRESPONSEBODYDATALISTIPLOCATIONINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskEventGroupResponseBodyDataListIPLocationInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventGroupResponseBodyDataListIPLocationInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CityId, cityId_);
      DARABONBA_PTR_TO_JSON(CityName, cityName_);
      DARABONBA_PTR_TO_JSON(CountryId, countryId_);
      DARABONBA_PTR_TO_JSON(CountryName, countryName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventGroupResponseBodyDataListIPLocationInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CityId, cityId_);
      DARABONBA_PTR_FROM_JSON(CityName, cityName_);
      DARABONBA_PTR_FROM_JSON(CountryId, countryId_);
      DARABONBA_PTR_FROM_JSON(CountryName, countryName_);
    };
    DescribeRiskEventGroupResponseBodyDataListIPLocationInfo() = default ;
    DescribeRiskEventGroupResponseBodyDataListIPLocationInfo(const DescribeRiskEventGroupResponseBodyDataListIPLocationInfo &) = default ;
    DescribeRiskEventGroupResponseBodyDataListIPLocationInfo(DescribeRiskEventGroupResponseBodyDataListIPLocationInfo &&) = default ;
    DescribeRiskEventGroupResponseBodyDataListIPLocationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventGroupResponseBodyDataListIPLocationInfo() = default ;
    DescribeRiskEventGroupResponseBodyDataListIPLocationInfo& operator=(const DescribeRiskEventGroupResponseBodyDataListIPLocationInfo &) = default ;
    DescribeRiskEventGroupResponseBodyDataListIPLocationInfo& operator=(DescribeRiskEventGroupResponseBodyDataListIPLocationInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cityId_ != nullptr
        && this->cityName_ != nullptr && this->countryId_ != nullptr && this->countryName_ != nullptr; };
    // cityId Field Functions 
    bool hasCityId() const { return this->cityId_ != nullptr;};
    void deleteCityId() { this->cityId_ = nullptr;};
    inline string cityId() const { DARABONBA_PTR_GET_DEFAULT(cityId_, "") };
    inline DescribeRiskEventGroupResponseBodyDataListIPLocationInfo& setCityId(string cityId) { DARABONBA_PTR_SET_VALUE(cityId_, cityId) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline DescribeRiskEventGroupResponseBodyDataListIPLocationInfo& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // countryId Field Functions 
    bool hasCountryId() const { return this->countryId_ != nullptr;};
    void deleteCountryId() { this->countryId_ = nullptr;};
    inline string countryId() const { DARABONBA_PTR_GET_DEFAULT(countryId_, "") };
    inline DescribeRiskEventGroupResponseBodyDataListIPLocationInfo& setCountryId(string countryId) { DARABONBA_PTR_SET_VALUE(countryId_, countryId) };


    // countryName Field Functions 
    bool hasCountryName() const { return this->countryName_ != nullptr;};
    void deleteCountryName() { this->countryName_ = nullptr;};
    inline string countryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
    inline DescribeRiskEventGroupResponseBodyDataListIPLocationInfo& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


  protected:
    // The ID of the city to which the IP address belongs.
    std::shared_ptr<string> cityId_ = nullptr;
    // The name of the city to which the IP address belongs.
    std::shared_ptr<string> cityName_ = nullptr;
    // The ID of the country to which the IP address belongs.
    std::shared_ptr<string> countryId_ = nullptr;
    // The name of the country to which the IP address belongs.
    std::shared_ptr<string> countryName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
