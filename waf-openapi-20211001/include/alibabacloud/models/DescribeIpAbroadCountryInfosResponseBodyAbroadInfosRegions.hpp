// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPABROADCOUNTRYINFOSRESPONSEBODYABROADINFOSREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPABROADCOUNTRYINFOSRESPONSEBODYABROADINFOSREGIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions& obj) { 
      DARABONBA_PTR_TO_JSON(AbroadRegionId, abroadRegionId_);
      DARABONBA_PTR_TO_JSON(AbroadRegionName, abroadRegionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(AbroadRegionId, abroadRegionId_);
      DARABONBA_PTR_FROM_JSON(AbroadRegionName, abroadRegionName_);
    };
    DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions() = default ;
    DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions(const DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions &) = default ;
    DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions(DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions &&) = default ;
    DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions() = default ;
    DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions& operator=(const DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions &) = default ;
    DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions& operator=(DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abroadRegionId_ == nullptr
        && return this->abroadRegionName_ == nullptr; };
    // abroadRegionId Field Functions 
    bool hasAbroadRegionId() const { return this->abroadRegionId_ != nullptr;};
    void deleteAbroadRegionId() { this->abroadRegionId_ = nullptr;};
    inline string abroadRegionId() const { DARABONBA_PTR_GET_DEFAULT(abroadRegionId_, "") };
    inline DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions& setAbroadRegionId(string abroadRegionId) { DARABONBA_PTR_SET_VALUE(abroadRegionId_, abroadRegionId) };


    // abroadRegionName Field Functions 
    bool hasAbroadRegionName() const { return this->abroadRegionName_ != nullptr;};
    void deleteAbroadRegionName() { this->abroadRegionName_ = nullptr;};
    inline string abroadRegionName() const { DARABONBA_PTR_GET_DEFAULT(abroadRegionName_, "") };
    inline DescribeIpAbroadCountryInfosResponseBodyAbroadInfosRegions& setAbroadRegionName(string abroadRegionName) { DARABONBA_PTR_SET_VALUE(abroadRegionName_, abroadRegionName) };


  protected:
    std::shared_ptr<string> abroadRegionId_ = nullptr;
    std::shared_ptr<string> abroadRegionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
