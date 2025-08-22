// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGEOINFORESPONSEBODYCONTENTCONTINENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGEOINFORESPONSEBODYCONTENTCONTINENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnWafGeoInfoResponseBodyContentContinentsRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafGeoInfoResponseBodyContentContinents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafGeoInfoResponseBodyContentContinents& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafGeoInfoResponseBodyContentContinents& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
    };
    DescribeDcdnWafGeoInfoResponseBodyContentContinents() = default ;
    DescribeDcdnWafGeoInfoResponseBodyContentContinents(const DescribeDcdnWafGeoInfoResponseBodyContentContinents &) = default ;
    DescribeDcdnWafGeoInfoResponseBodyContentContinents(DescribeDcdnWafGeoInfoResponseBodyContentContinents &&) = default ;
    DescribeDcdnWafGeoInfoResponseBodyContentContinents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafGeoInfoResponseBodyContentContinents() = default ;
    DescribeDcdnWafGeoInfoResponseBodyContentContinents& operator=(const DescribeDcdnWafGeoInfoResponseBodyContentContinents &) = default ;
    DescribeDcdnWafGeoInfoResponseBodyContentContinents& operator=(DescribeDcdnWafGeoInfoResponseBodyContentContinents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->regions_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDcdnWafGeoInfoResponseBodyContentContinents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<Models::DescribeDcdnWafGeoInfoResponseBodyContentContinentsRegions> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<Models::DescribeDcdnWafGeoInfoResponseBodyContentContinentsRegions>) };
    inline vector<Models::DescribeDcdnWafGeoInfoResponseBodyContentContinentsRegions> regions() { DARABONBA_PTR_GET(regions_, vector<Models::DescribeDcdnWafGeoInfoResponseBodyContentContinentsRegions>) };
    inline DescribeDcdnWafGeoInfoResponseBodyContentContinents& setRegions(const vector<Models::DescribeDcdnWafGeoInfoResponseBodyContentContinentsRegions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeDcdnWafGeoInfoResponseBodyContentContinents& setRegions(vector<Models::DescribeDcdnWafGeoInfoResponseBodyContentContinentsRegions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


  protected:
    // The district to which the country or region belongs.
    std::shared_ptr<string> name_ = nullptr;
    // The region information.
    std::shared_ptr<vector<Models::DescribeDcdnWafGeoInfoResponseBodyContentContinentsRegions>> regions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
