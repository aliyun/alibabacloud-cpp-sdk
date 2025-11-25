// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOCATIONINFORESPONSEBODYCNPROVINCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOCATIONINFORESPONSEBODYCNPROVINCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLocationInfoResponseBodyCnProvinceListCities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeLocationInfoResponseBodyCnProvinceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLocationInfoResponseBodyCnProvinceList& obj) { 
      DARABONBA_PTR_TO_JSON(Cities, cities_);
      DARABONBA_PTR_TO_JSON(ProvinceName, provinceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLocationInfoResponseBodyCnProvinceList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cities, cities_);
      DARABONBA_PTR_FROM_JSON(ProvinceName, provinceName_);
    };
    DescribeLocationInfoResponseBodyCnProvinceList() = default ;
    DescribeLocationInfoResponseBodyCnProvinceList(const DescribeLocationInfoResponseBodyCnProvinceList &) = default ;
    DescribeLocationInfoResponseBodyCnProvinceList(DescribeLocationInfoResponseBodyCnProvinceList &&) = default ;
    DescribeLocationInfoResponseBodyCnProvinceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLocationInfoResponseBodyCnProvinceList() = default ;
    DescribeLocationInfoResponseBodyCnProvinceList& operator=(const DescribeLocationInfoResponseBodyCnProvinceList &) = default ;
    DescribeLocationInfoResponseBodyCnProvinceList& operator=(DescribeLocationInfoResponseBodyCnProvinceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cities_ == nullptr
        && return this->provinceName_ == nullptr; };
    // cities Field Functions 
    bool hasCities() const { return this->cities_ != nullptr;};
    void deleteCities() { this->cities_ = nullptr;};
    inline const vector<Models::DescribeLocationInfoResponseBodyCnProvinceListCities> & cities() const { DARABONBA_PTR_GET_CONST(cities_, vector<Models::DescribeLocationInfoResponseBodyCnProvinceListCities>) };
    inline vector<Models::DescribeLocationInfoResponseBodyCnProvinceListCities> cities() { DARABONBA_PTR_GET(cities_, vector<Models::DescribeLocationInfoResponseBodyCnProvinceListCities>) };
    inline DescribeLocationInfoResponseBodyCnProvinceList& setCities(const vector<Models::DescribeLocationInfoResponseBodyCnProvinceListCities> & cities) { DARABONBA_PTR_SET_VALUE(cities_, cities) };
    inline DescribeLocationInfoResponseBodyCnProvinceList& setCities(vector<Models::DescribeLocationInfoResponseBodyCnProvinceListCities> && cities) { DARABONBA_PTR_SET_RVALUE(cities_, cities) };


    // provinceName Field Functions 
    bool hasProvinceName() const { return this->provinceName_ != nullptr;};
    void deleteProvinceName() { this->provinceName_ = nullptr;};
    inline string provinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
    inline DescribeLocationInfoResponseBodyCnProvinceList& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


  protected:
    std::shared_ptr<vector<Models::DescribeLocationInfoResponseBodyCnProvinceListCities>> cities_ = nullptr;
    std::shared_ptr<string> provinceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
