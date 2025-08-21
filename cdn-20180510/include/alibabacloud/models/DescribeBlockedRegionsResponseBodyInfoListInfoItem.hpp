// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBLOCKEDREGIONSRESPONSEBODYINFOLISTINFOITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBLOCKEDREGIONSRESPONSEBODYINFOLISTINFOITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeBlockedRegionsResponseBodyInfoListInfoItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBlockedRegionsResponseBodyInfoListInfoItem& obj) { 
      DARABONBA_PTR_TO_JSON(Continent, continent_);
      DARABONBA_PTR_TO_JSON(CountriesAndRegions, countriesAndRegions_);
      DARABONBA_PTR_TO_JSON(CountriesAndRegionsName, countriesAndRegionsName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBlockedRegionsResponseBodyInfoListInfoItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Continent, continent_);
      DARABONBA_PTR_FROM_JSON(CountriesAndRegions, countriesAndRegions_);
      DARABONBA_PTR_FROM_JSON(CountriesAndRegionsName, countriesAndRegionsName_);
    };
    DescribeBlockedRegionsResponseBodyInfoListInfoItem() = default ;
    DescribeBlockedRegionsResponseBodyInfoListInfoItem(const DescribeBlockedRegionsResponseBodyInfoListInfoItem &) = default ;
    DescribeBlockedRegionsResponseBodyInfoListInfoItem(DescribeBlockedRegionsResponseBodyInfoListInfoItem &&) = default ;
    DescribeBlockedRegionsResponseBodyInfoListInfoItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBlockedRegionsResponseBodyInfoListInfoItem() = default ;
    DescribeBlockedRegionsResponseBodyInfoListInfoItem& operator=(const DescribeBlockedRegionsResponseBodyInfoListInfoItem &) = default ;
    DescribeBlockedRegionsResponseBodyInfoListInfoItem& operator=(DescribeBlockedRegionsResponseBodyInfoListInfoItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->continent_ != nullptr
        && this->countriesAndRegions_ != nullptr && this->countriesAndRegionsName_ != nullptr; };
    // continent Field Functions 
    bool hasContinent() const { return this->continent_ != nullptr;};
    void deleteContinent() { this->continent_ = nullptr;};
    inline string continent() const { DARABONBA_PTR_GET_DEFAULT(continent_, "") };
    inline DescribeBlockedRegionsResponseBodyInfoListInfoItem& setContinent(string continent) { DARABONBA_PTR_SET_VALUE(continent_, continent) };


    // countriesAndRegions Field Functions 
    bool hasCountriesAndRegions() const { return this->countriesAndRegions_ != nullptr;};
    void deleteCountriesAndRegions() { this->countriesAndRegions_ = nullptr;};
    inline string countriesAndRegions() const { DARABONBA_PTR_GET_DEFAULT(countriesAndRegions_, "") };
    inline DescribeBlockedRegionsResponseBodyInfoListInfoItem& setCountriesAndRegions(string countriesAndRegions) { DARABONBA_PTR_SET_VALUE(countriesAndRegions_, countriesAndRegions) };


    // countriesAndRegionsName Field Functions 
    bool hasCountriesAndRegionsName() const { return this->countriesAndRegionsName_ != nullptr;};
    void deleteCountriesAndRegionsName() { this->countriesAndRegionsName_ = nullptr;};
    inline string countriesAndRegionsName() const { DARABONBA_PTR_GET_DEFAULT(countriesAndRegionsName_, "") };
    inline DescribeBlockedRegionsResponseBodyInfoListInfoItem& setCountriesAndRegionsName(string countriesAndRegionsName) { DARABONBA_PTR_SET_VALUE(countriesAndRegionsName_, countriesAndRegionsName) };


  protected:
    // The district to which the country or region belongs.
    std::shared_ptr<string> continent_ = nullptr;
    // The abbreviation of the name of the country or region.
    std::shared_ptr<string> countriesAndRegions_ = nullptr;
    // The name of the country or region.
    std::shared_ptr<string> countriesAndRegionsName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
