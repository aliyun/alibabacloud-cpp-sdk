// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORISPCITYLISTRESPONSEBODYISPCITYLISTISPCITY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORISPCITYLISTRESPONSEBODYISPCITYLISTISPCITY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& obj) { 
      DARABONBA_PTR_TO_JSON(Area.en, area_en_);
      DARABONBA_PTR_TO_JSON(Area.zh_CN, area_zh_cN_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(CityName.en, cityName_en_);
      DARABONBA_PTR_TO_JSON(CityName.zh_CN, cityName_zh_cN_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(Country.en, country_en_);
      DARABONBA_PTR_TO_JSON(Country.zh_CN, country_zh_cN_);
      DARABONBA_PTR_TO_JSON(IPPool, IPPool_);
      DARABONBA_PTR_TO_JSON(IPV4ProbeCount, IPV4ProbeCount_);
      DARABONBA_PTR_TO_JSON(IPV6ProbeCount, IPV6ProbeCount_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(IspName.en, ispName_en_);
      DARABONBA_PTR_TO_JSON(IspName.zh_CN, ispName_zh_cN_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Region.en, region_en_);
      DARABONBA_PTR_TO_JSON(Region.zh_CN, region_zh_cN_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& obj) { 
      DARABONBA_PTR_FROM_JSON(Area.en, area_en_);
      DARABONBA_PTR_FROM_JSON(Area.zh_CN, area_zh_cN_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(CityName.en, cityName_en_);
      DARABONBA_PTR_FROM_JSON(CityName.zh_CN, cityName_zh_cN_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(Country.en, country_en_);
      DARABONBA_PTR_FROM_JSON(Country.zh_CN, country_zh_cN_);
      DARABONBA_PTR_FROM_JSON(IPPool, IPPool_);
      DARABONBA_PTR_FROM_JSON(IPV4ProbeCount, IPV4ProbeCount_);
      DARABONBA_PTR_FROM_JSON(IPV6ProbeCount, IPV6ProbeCount_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(IspName.en, ispName_en_);
      DARABONBA_PTR_FROM_JSON(IspName.zh_CN, ispName_zh_cN_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Region.en, region_en_);
      DARABONBA_PTR_FROM_JSON(Region.zh_CN, region_zh_cN_);
    };
    DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity() = default ;
    DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity(const DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity &) = default ;
    DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity(DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity &&) = default ;
    DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity() = default ;
    DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& operator=(const DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity &) = default ;
    DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& operator=(DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->area_en_ != nullptr
        && this->area_zh_cN_ != nullptr && this->city_ != nullptr && this->cityName_en_ != nullptr && this->cityName_zh_cN_ != nullptr && this->country_ != nullptr
        && this->country_en_ != nullptr && this->country_zh_cN_ != nullptr && this->IPPool_ != nullptr && this->IPV4ProbeCount_ != nullptr && this->IPV6ProbeCount_ != nullptr
        && this->isp_ != nullptr && this->ispName_en_ != nullptr && this->ispName_zh_cN_ != nullptr && this->region_ != nullptr && this->region_en_ != nullptr
        && this->region_zh_cN_ != nullptr; };
    // area_en Field Functions 
    bool hasArea_en() const { return this->area_en_ != nullptr;};
    void deleteArea_en() { this->area_en_ = nullptr;};
    inline string area_en() const { DARABONBA_PTR_GET_DEFAULT(area_en_, "") };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setArea_en(string area_en) { DARABONBA_PTR_SET_VALUE(area_en_, area_en) };


    // area_zh_cN Field Functions 
    bool hasArea_zh_cN() const { return this->area_zh_cN_ != nullptr;};
    void deleteArea_zh_cN() { this->area_zh_cN_ = nullptr;};
    inline string area_zh_cN() const { DARABONBA_PTR_GET_DEFAULT(area_zh_cN_, "") };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setArea_zh_cN(string area_zh_cN) { DARABONBA_PTR_SET_VALUE(area_zh_cN_, area_zh_cN) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // cityName_en Field Functions 
    bool hasCityName_en() const { return this->cityName_en_ != nullptr;};
    void deleteCityName_en() { this->cityName_en_ = nullptr;};
    inline string cityName_en() const { DARABONBA_PTR_GET_DEFAULT(cityName_en_, "") };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setCityName_en(string cityName_en) { DARABONBA_PTR_SET_VALUE(cityName_en_, cityName_en) };


    // cityName_zh_cN Field Functions 
    bool hasCityName_zh_cN() const { return this->cityName_zh_cN_ != nullptr;};
    void deleteCityName_zh_cN() { this->cityName_zh_cN_ = nullptr;};
    inline string cityName_zh_cN() const { DARABONBA_PTR_GET_DEFAULT(cityName_zh_cN_, "") };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setCityName_zh_cN(string cityName_zh_cN) { DARABONBA_PTR_SET_VALUE(cityName_zh_cN_, cityName_zh_cN) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // country_en Field Functions 
    bool hasCountry_en() const { return this->country_en_ != nullptr;};
    void deleteCountry_en() { this->country_en_ = nullptr;};
    inline string country_en() const { DARABONBA_PTR_GET_DEFAULT(country_en_, "") };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setCountry_en(string country_en) { DARABONBA_PTR_SET_VALUE(country_en_, country_en) };


    // country_zh_cN Field Functions 
    bool hasCountry_zh_cN() const { return this->country_zh_cN_ != nullptr;};
    void deleteCountry_zh_cN() { this->country_zh_cN_ = nullptr;};
    inline string country_zh_cN() const { DARABONBA_PTR_GET_DEFAULT(country_zh_cN_, "") };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setCountry_zh_cN(string country_zh_cN) { DARABONBA_PTR_SET_VALUE(country_zh_cN_, country_zh_cN) };


    // IPPool Field Functions 
    bool hasIPPool() const { return this->IPPool_ != nullptr;};
    void deleteIPPool() { this->IPPool_ = nullptr;};
    inline const Models::DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool & IPPool() const { DARABONBA_PTR_GET_CONST(IPPool_, Models::DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool) };
    inline Models::DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool IPPool() { DARABONBA_PTR_GET(IPPool_, Models::DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool) };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setIPPool(const Models::DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool & IPPool) { DARABONBA_PTR_SET_VALUE(IPPool_, IPPool) };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setIPPool(Models::DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool && IPPool) { DARABONBA_PTR_SET_RVALUE(IPPool_, IPPool) };


    // IPV4ProbeCount Field Functions 
    bool hasIPV4ProbeCount() const { return this->IPV4ProbeCount_ != nullptr;};
    void deleteIPV4ProbeCount() { this->IPV4ProbeCount_ = nullptr;};
    inline string IPV4ProbeCount() const { DARABONBA_PTR_GET_DEFAULT(IPV4ProbeCount_, "") };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setIPV4ProbeCount(string IPV4ProbeCount) { DARABONBA_PTR_SET_VALUE(IPV4ProbeCount_, IPV4ProbeCount) };


    // IPV6ProbeCount Field Functions 
    bool hasIPV6ProbeCount() const { return this->IPV6ProbeCount_ != nullptr;};
    void deleteIPV6ProbeCount() { this->IPV6ProbeCount_ = nullptr;};
    inline string IPV6ProbeCount() const { DARABONBA_PTR_GET_DEFAULT(IPV6ProbeCount_, "") };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setIPV6ProbeCount(string IPV6ProbeCount) { DARABONBA_PTR_SET_VALUE(IPV6ProbeCount_, IPV6ProbeCount) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // ispName_en Field Functions 
    bool hasIspName_en() const { return this->ispName_en_ != nullptr;};
    void deleteIspName_en() { this->ispName_en_ = nullptr;};
    inline string ispName_en() const { DARABONBA_PTR_GET_DEFAULT(ispName_en_, "") };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setIspName_en(string ispName_en) { DARABONBA_PTR_SET_VALUE(ispName_en_, ispName_en) };


    // ispName_zh_cN Field Functions 
    bool hasIspName_zh_cN() const { return this->ispName_zh_cN_ != nullptr;};
    void deleteIspName_zh_cN() { this->ispName_zh_cN_ = nullptr;};
    inline string ispName_zh_cN() const { DARABONBA_PTR_GET_DEFAULT(ispName_zh_cN_, "") };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setIspName_zh_cN(string ispName_zh_cN) { DARABONBA_PTR_SET_VALUE(ispName_zh_cN_, ispName_zh_cN) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // region_en Field Functions 
    bool hasRegion_en() const { return this->region_en_ != nullptr;};
    void deleteRegion_en() { this->region_en_ = nullptr;};
    inline string region_en() const { DARABONBA_PTR_GET_DEFAULT(region_en_, "") };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setRegion_en(string region_en) { DARABONBA_PTR_SET_VALUE(region_en_, region_en) };


    // region_zh_cN Field Functions 
    bool hasRegion_zh_cN() const { return this->region_zh_cN_ != nullptr;};
    void deleteRegion_zh_cN() { this->region_zh_cN_ = nullptr;};
    inline string region_zh_cN() const { DARABONBA_PTR_GET_DEFAULT(region_zh_cN_, "") };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity& setRegion_zh_cN(string region_zh_cN) { DARABONBA_PTR_SET_VALUE(region_zh_cN_, region_zh_cN) };


  protected:
    std::shared_ptr<string> area_en_ = nullptr;
    std::shared_ptr<string> area_zh_cN_ = nullptr;
    // The city ID.
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> cityName_en_ = nullptr;
    std::shared_ptr<string> cityName_zh_cN_ = nullptr;
    // The country name.
    // 
    // > This parameter is valid only on the China site (aliyun.com).
    std::shared_ptr<string> country_ = nullptr;
    std::shared_ptr<string> country_en_ = nullptr;
    std::shared_ptr<string> country_zh_cN_ = nullptr;
    // The IP address pool.
    std::shared_ptr<Models::DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool> IPPool_ = nullptr;
    // The number of IPv4 probes.
    std::shared_ptr<string> IPV4ProbeCount_ = nullptr;
    // The number of IPv6 probes.
    std::shared_ptr<string> IPV6ProbeCount_ = nullptr;
    // The carrier ID.
    std::shared_ptr<string> isp_ = nullptr;
    std::shared_ptr<string> ispName_en_ = nullptr;
    std::shared_ptr<string> ispName_zh_cN_ = nullptr;
    // The province name.
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> region_en_ = nullptr;
    std::shared_ptr<string> region_zh_cN_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
