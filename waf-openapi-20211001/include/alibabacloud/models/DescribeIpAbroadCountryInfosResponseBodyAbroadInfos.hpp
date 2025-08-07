// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPABROADCOUNTRYINFOSRESPONSEBODYABROADINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPABROADCOUNTRYINFOSRESPONSEBODYABROADINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeIpAbroadCountryInfosResponseBodyAbroadInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpAbroadCountryInfosResponseBodyAbroadInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Continent, continent_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(CountryName, countryName_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpAbroadCountryInfosResponseBodyAbroadInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Continent, continent_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(CountryName, countryName_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
    };
    DescribeIpAbroadCountryInfosResponseBodyAbroadInfos() = default ;
    DescribeIpAbroadCountryInfosResponseBodyAbroadInfos(const DescribeIpAbroadCountryInfosResponseBodyAbroadInfos &) = default ;
    DescribeIpAbroadCountryInfosResponseBodyAbroadInfos(DescribeIpAbroadCountryInfosResponseBodyAbroadInfos &&) = default ;
    DescribeIpAbroadCountryInfosResponseBodyAbroadInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpAbroadCountryInfosResponseBodyAbroadInfos() = default ;
    DescribeIpAbroadCountryInfosResponseBodyAbroadInfos& operator=(const DescribeIpAbroadCountryInfosResponseBodyAbroadInfos &) = default ;
    DescribeIpAbroadCountryInfosResponseBodyAbroadInfos& operator=(DescribeIpAbroadCountryInfosResponseBodyAbroadInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->continent_ != nullptr
        && this->country_ != nullptr && this->countryName_ != nullptr && this->regions_ != nullptr; };
    // continent Field Functions 
    bool hasContinent() const { return this->continent_ != nullptr;};
    void deleteContinent() { this->continent_ = nullptr;};
    inline string continent() const { DARABONBA_PTR_GET_DEFAULT(continent_, "") };
    inline DescribeIpAbroadCountryInfosResponseBodyAbroadInfos& setContinent(string continent) { DARABONBA_PTR_SET_VALUE(continent_, continent) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline DescribeIpAbroadCountryInfosResponseBodyAbroadInfos& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // countryName Field Functions 
    bool hasCountryName() const { return this->countryName_ != nullptr;};
    void deleteCountryName() { this->countryName_ = nullptr;};
    inline string countryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
    inline DescribeIpAbroadCountryInfosResponseBodyAbroadInfos& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<Models::DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<Models::DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions>) };
    inline vector<Models::DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions> regions() { DARABONBA_PTR_GET(regions_, vector<Models::DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions>) };
    inline DescribeIpAbroadCountryInfosResponseBodyAbroadInfos& setRegions(const vector<Models::DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeIpAbroadCountryInfosResponseBodyAbroadInfos& setRegions(vector<Models::DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


  protected:
    std::shared_ptr<string> continent_ = nullptr;
    std::shared_ptr<string> country_ = nullptr;
    std::shared_ptr<string> countryName_ = nullptr;
    std::shared_ptr<vector<Models::DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions>> regions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
