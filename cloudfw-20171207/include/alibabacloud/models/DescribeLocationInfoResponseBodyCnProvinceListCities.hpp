// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOCATIONINFORESPONSEBODYCNPROVINCELISTCITIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOCATIONINFORESPONSEBODYCNPROVINCELISTCITIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeLocationInfoResponseBodyCnProvinceListCities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLocationInfoResponseBodyCnProvinceListCities& obj) { 
      DARABONBA_PTR_TO_JSON(LocId, locId_);
      DARABONBA_PTR_TO_JSON(LocName, locName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLocationInfoResponseBodyCnProvinceListCities& obj) { 
      DARABONBA_PTR_FROM_JSON(LocId, locId_);
      DARABONBA_PTR_FROM_JSON(LocName, locName_);
    };
    DescribeLocationInfoResponseBodyCnProvinceListCities() = default ;
    DescribeLocationInfoResponseBodyCnProvinceListCities(const DescribeLocationInfoResponseBodyCnProvinceListCities &) = default ;
    DescribeLocationInfoResponseBodyCnProvinceListCities(DescribeLocationInfoResponseBodyCnProvinceListCities &&) = default ;
    DescribeLocationInfoResponseBodyCnProvinceListCities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLocationInfoResponseBodyCnProvinceListCities() = default ;
    DescribeLocationInfoResponseBodyCnProvinceListCities& operator=(const DescribeLocationInfoResponseBodyCnProvinceListCities &) = default ;
    DescribeLocationInfoResponseBodyCnProvinceListCities& operator=(DescribeLocationInfoResponseBodyCnProvinceListCities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->locId_ == nullptr
        && return this->locName_ == nullptr; };
    // locId Field Functions 
    bool hasLocId() const { return this->locId_ != nullptr;};
    void deleteLocId() { this->locId_ = nullptr;};
    inline string locId() const { DARABONBA_PTR_GET_DEFAULT(locId_, "") };
    inline DescribeLocationInfoResponseBodyCnProvinceListCities& setLocId(string locId) { DARABONBA_PTR_SET_VALUE(locId_, locId) };


    // locName Field Functions 
    bool hasLocName() const { return this->locName_ != nullptr;};
    void deleteLocName() { this->locName_ = nullptr;};
    inline string locName() const { DARABONBA_PTR_GET_DEFAULT(locName_, "") };
    inline DescribeLocationInfoResponseBodyCnProvinceListCities& setLocName(string locName) { DARABONBA_PTR_SET_VALUE(locName_, locName) };


  protected:
    std::shared_ptr<string> locId_ = nullptr;
    std::shared_ptr<string> locName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
