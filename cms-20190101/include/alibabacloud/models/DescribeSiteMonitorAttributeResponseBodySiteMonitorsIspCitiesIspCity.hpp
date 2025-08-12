// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSISPCITIESISPCITY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSISPCITIESISPCITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity& obj) { 
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(CityName, cityName_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity& obj) { 
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(CityName, cityName_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity(DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->city_ != nullptr
        && this->cityName_ != nullptr && this->isp_ != nullptr && this->ispName_ != nullptr && this->type_ != nullptr; };
    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The city ID.
    std::shared_ptr<string> city_ = nullptr;
    // The city name.
    std::shared_ptr<string> cityName_ = nullptr;
    // The carrier ID.
    std::shared_ptr<string> isp_ = nullptr;
    // The carrier name.
    std::shared_ptr<string> ispName_ = nullptr;
    // The network type of the detection point. Valid values: IDC, LASTMILE, and MOBILE.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
