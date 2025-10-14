// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNTHETICPROBELISTRESPONSEBODYISPCITYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNTHETICPROBELISTRESPONSEBODYISPCITYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSyntheticProbeListResponseBodyIspCityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyntheticProbeListResponseBodyIspCityList& obj) { 
      DARABONBA_PTR_TO_JSON(AreaCn, areaCn_);
      DARABONBA_PTR_TO_JSON(AreaEn, areaEn_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(CityCn, cityCn_);
      DARABONBA_PTR_TO_JSON(CityEn, cityEn_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(CountryCn, countryCn_);
      DARABONBA_PTR_TO_JSON(CountryEn, countryEn_);
      DARABONBA_PTR_TO_JSON(IdcV4ProbeCount, idcV4ProbeCount_);
      DARABONBA_PTR_TO_JSON(IdcV6ProbeCount, idcV6ProbeCount_);
      DARABONBA_PTR_TO_JSON(IpPool, ipPool_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(IspCn, ispCn_);
      DARABONBA_PTR_TO_JSON(IspEn, ispEn_);
      DARABONBA_PTR_TO_JSON(LmProbeCount, lmProbeCount_);
      DARABONBA_PTR_TO_JSON(MbProbeCount, mbProbeCount_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionCn, regionCn_);
      DARABONBA_PTR_TO_JSON(RegionEn, regionEn_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyntheticProbeListResponseBodyIspCityList& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaCn, areaCn_);
      DARABONBA_PTR_FROM_JSON(AreaEn, areaEn_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(CityCn, cityCn_);
      DARABONBA_PTR_FROM_JSON(CityEn, cityEn_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(CountryCn, countryCn_);
      DARABONBA_PTR_FROM_JSON(CountryEn, countryEn_);
      DARABONBA_PTR_FROM_JSON(IdcV4ProbeCount, idcV4ProbeCount_);
      DARABONBA_PTR_FROM_JSON(IdcV6ProbeCount, idcV6ProbeCount_);
      DARABONBA_PTR_FROM_JSON(IpPool, ipPool_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(IspCn, ispCn_);
      DARABONBA_PTR_FROM_JSON(IspEn, ispEn_);
      DARABONBA_PTR_FROM_JSON(LmProbeCount, lmProbeCount_);
      DARABONBA_PTR_FROM_JSON(MbProbeCount, mbProbeCount_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionCn, regionCn_);
      DARABONBA_PTR_FROM_JSON(RegionEn, regionEn_);
    };
    DescribeSyntheticProbeListResponseBodyIspCityList() = default ;
    DescribeSyntheticProbeListResponseBodyIspCityList(const DescribeSyntheticProbeListResponseBodyIspCityList &) = default ;
    DescribeSyntheticProbeListResponseBodyIspCityList(DescribeSyntheticProbeListResponseBodyIspCityList &&) = default ;
    DescribeSyntheticProbeListResponseBodyIspCityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyntheticProbeListResponseBodyIspCityList() = default ;
    DescribeSyntheticProbeListResponseBodyIspCityList& operator=(const DescribeSyntheticProbeListResponseBodyIspCityList &) = default ;
    DescribeSyntheticProbeListResponseBodyIspCityList& operator=(DescribeSyntheticProbeListResponseBodyIspCityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->areaCn_ == nullptr
        && return this->areaEn_ == nullptr && return this->city_ == nullptr && return this->cityCn_ == nullptr && return this->cityEn_ == nullptr && return this->country_ == nullptr
        && return this->countryCn_ == nullptr && return this->countryEn_ == nullptr && return this->idcV4ProbeCount_ == nullptr && return this->idcV6ProbeCount_ == nullptr && return this->ipPool_ == nullptr
        && return this->isp_ == nullptr && return this->ispCn_ == nullptr && return this->ispEn_ == nullptr && return this->lmProbeCount_ == nullptr && return this->mbProbeCount_ == nullptr
        && return this->region_ == nullptr && return this->regionCn_ == nullptr && return this->regionEn_ == nullptr; };
    // areaCn Field Functions 
    bool hasAreaCn() const { return this->areaCn_ != nullptr;};
    void deleteAreaCn() { this->areaCn_ = nullptr;};
    inline string areaCn() const { DARABONBA_PTR_GET_DEFAULT(areaCn_, "") };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setAreaCn(string areaCn) { DARABONBA_PTR_SET_VALUE(areaCn_, areaCn) };


    // areaEn Field Functions 
    bool hasAreaEn() const { return this->areaEn_ != nullptr;};
    void deleteAreaEn() { this->areaEn_ = nullptr;};
    inline string areaEn() const { DARABONBA_PTR_GET_DEFAULT(areaEn_, "") };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setAreaEn(string areaEn) { DARABONBA_PTR_SET_VALUE(areaEn_, areaEn) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // cityCn Field Functions 
    bool hasCityCn() const { return this->cityCn_ != nullptr;};
    void deleteCityCn() { this->cityCn_ = nullptr;};
    inline string cityCn() const { DARABONBA_PTR_GET_DEFAULT(cityCn_, "") };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setCityCn(string cityCn) { DARABONBA_PTR_SET_VALUE(cityCn_, cityCn) };


    // cityEn Field Functions 
    bool hasCityEn() const { return this->cityEn_ != nullptr;};
    void deleteCityEn() { this->cityEn_ = nullptr;};
    inline string cityEn() const { DARABONBA_PTR_GET_DEFAULT(cityEn_, "") };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setCityEn(string cityEn) { DARABONBA_PTR_SET_VALUE(cityEn_, cityEn) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // countryCn Field Functions 
    bool hasCountryCn() const { return this->countryCn_ != nullptr;};
    void deleteCountryCn() { this->countryCn_ = nullptr;};
    inline string countryCn() const { DARABONBA_PTR_GET_DEFAULT(countryCn_, "") };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setCountryCn(string countryCn) { DARABONBA_PTR_SET_VALUE(countryCn_, countryCn) };


    // countryEn Field Functions 
    bool hasCountryEn() const { return this->countryEn_ != nullptr;};
    void deleteCountryEn() { this->countryEn_ = nullptr;};
    inline string countryEn() const { DARABONBA_PTR_GET_DEFAULT(countryEn_, "") };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setCountryEn(string countryEn) { DARABONBA_PTR_SET_VALUE(countryEn_, countryEn) };


    // idcV4ProbeCount Field Functions 
    bool hasIdcV4ProbeCount() const { return this->idcV4ProbeCount_ != nullptr;};
    void deleteIdcV4ProbeCount() { this->idcV4ProbeCount_ = nullptr;};
    inline int32_t idcV4ProbeCount() const { DARABONBA_PTR_GET_DEFAULT(idcV4ProbeCount_, 0) };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setIdcV4ProbeCount(int32_t idcV4ProbeCount) { DARABONBA_PTR_SET_VALUE(idcV4ProbeCount_, idcV4ProbeCount) };


    // idcV6ProbeCount Field Functions 
    bool hasIdcV6ProbeCount() const { return this->idcV6ProbeCount_ != nullptr;};
    void deleteIdcV6ProbeCount() { this->idcV6ProbeCount_ = nullptr;};
    inline int32_t idcV6ProbeCount() const { DARABONBA_PTR_GET_DEFAULT(idcV6ProbeCount_, 0) };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setIdcV6ProbeCount(int32_t idcV6ProbeCount) { DARABONBA_PTR_SET_VALUE(idcV6ProbeCount_, idcV6ProbeCount) };


    // ipPool Field Functions 
    bool hasIpPool() const { return this->ipPool_ != nullptr;};
    void deleteIpPool() { this->ipPool_ = nullptr;};
    inline const vector<string> & ipPool() const { DARABONBA_PTR_GET_CONST(ipPool_, vector<string>) };
    inline vector<string> ipPool() { DARABONBA_PTR_GET(ipPool_, vector<string>) };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setIpPool(const vector<string> & ipPool) { DARABONBA_PTR_SET_VALUE(ipPool_, ipPool) };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setIpPool(vector<string> && ipPool) { DARABONBA_PTR_SET_RVALUE(ipPool_, ipPool) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // ispCn Field Functions 
    bool hasIspCn() const { return this->ispCn_ != nullptr;};
    void deleteIspCn() { this->ispCn_ = nullptr;};
    inline string ispCn() const { DARABONBA_PTR_GET_DEFAULT(ispCn_, "") };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setIspCn(string ispCn) { DARABONBA_PTR_SET_VALUE(ispCn_, ispCn) };


    // ispEn Field Functions 
    bool hasIspEn() const { return this->ispEn_ != nullptr;};
    void deleteIspEn() { this->ispEn_ = nullptr;};
    inline string ispEn() const { DARABONBA_PTR_GET_DEFAULT(ispEn_, "") };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setIspEn(string ispEn) { DARABONBA_PTR_SET_VALUE(ispEn_, ispEn) };


    // lmProbeCount Field Functions 
    bool hasLmProbeCount() const { return this->lmProbeCount_ != nullptr;};
    void deleteLmProbeCount() { this->lmProbeCount_ = nullptr;};
    inline int32_t lmProbeCount() const { DARABONBA_PTR_GET_DEFAULT(lmProbeCount_, 0) };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setLmProbeCount(int32_t lmProbeCount) { DARABONBA_PTR_SET_VALUE(lmProbeCount_, lmProbeCount) };


    // mbProbeCount Field Functions 
    bool hasMbProbeCount() const { return this->mbProbeCount_ != nullptr;};
    void deleteMbProbeCount() { this->mbProbeCount_ = nullptr;};
    inline int32_t mbProbeCount() const { DARABONBA_PTR_GET_DEFAULT(mbProbeCount_, 0) };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setMbProbeCount(int32_t mbProbeCount) { DARABONBA_PTR_SET_VALUE(mbProbeCount_, mbProbeCount) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionCn Field Functions 
    bool hasRegionCn() const { return this->regionCn_ != nullptr;};
    void deleteRegionCn() { this->regionCn_ = nullptr;};
    inline string regionCn() const { DARABONBA_PTR_GET_DEFAULT(regionCn_, "") };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setRegionCn(string regionCn) { DARABONBA_PTR_SET_VALUE(regionCn_, regionCn) };


    // regionEn Field Functions 
    bool hasRegionEn() const { return this->regionEn_ != nullptr;};
    void deleteRegionEn() { this->regionEn_ = nullptr;};
    inline string regionEn() const { DARABONBA_PTR_GET_DEFAULT(regionEn_, "") };
    inline DescribeSyntheticProbeListResponseBodyIspCityList& setRegionEn(string regionEn) { DARABONBA_PTR_SET_VALUE(regionEn_, regionEn) };


  protected:
    std::shared_ptr<string> areaCn_ = nullptr;
    std::shared_ptr<string> areaEn_ = nullptr;
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> cityCn_ = nullptr;
    std::shared_ptr<string> cityEn_ = nullptr;
    std::shared_ptr<string> country_ = nullptr;
    std::shared_ptr<string> countryCn_ = nullptr;
    std::shared_ptr<string> countryEn_ = nullptr;
    std::shared_ptr<int32_t> idcV4ProbeCount_ = nullptr;
    // The number of IPv6 nodes in data centers.
    std::shared_ptr<int32_t> idcV6ProbeCount_ = nullptr;
    // The IP addresses of the monitored nodes.
    std::shared_ptr<vector<string>> ipPool_ = nullptr;
    std::shared_ptr<string> isp_ = nullptr;
    std::shared_ptr<string> ispCn_ = nullptr;
    std::shared_ptr<string> ispEn_ = nullptr;
    std::shared_ptr<int32_t> lmProbeCount_ = nullptr;
    std::shared_ptr<int32_t> mbProbeCount_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> regionCn_ = nullptr;
    std::shared_ptr<string> regionEn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
