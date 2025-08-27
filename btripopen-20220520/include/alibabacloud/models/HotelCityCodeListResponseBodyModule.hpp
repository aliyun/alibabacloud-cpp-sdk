// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELCITYCODELISTRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_HOTELCITYCODELISTRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelCityCodeListResponseBodyModuleCitys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelCityCodeListResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelCityCodeListResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(citys, citys_);
      DARABONBA_PTR_TO_JSON(provice_code, proviceCode_);
      DARABONBA_PTR_TO_JSON(province_name, provinceName_);
    };
    friend void from_json(const Darabonba::Json& j, HotelCityCodeListResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(citys, citys_);
      DARABONBA_PTR_FROM_JSON(provice_code, proviceCode_);
      DARABONBA_PTR_FROM_JSON(province_name, provinceName_);
    };
    HotelCityCodeListResponseBodyModule() = default ;
    HotelCityCodeListResponseBodyModule(const HotelCityCodeListResponseBodyModule &) = default ;
    HotelCityCodeListResponseBodyModule(HotelCityCodeListResponseBodyModule &&) = default ;
    HotelCityCodeListResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelCityCodeListResponseBodyModule() = default ;
    HotelCityCodeListResponseBodyModule& operator=(const HotelCityCodeListResponseBodyModule &) = default ;
    HotelCityCodeListResponseBodyModule& operator=(HotelCityCodeListResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->citys_ != nullptr
        && this->proviceCode_ != nullptr && this->provinceName_ != nullptr; };
    // citys Field Functions 
    bool hasCitys() const { return this->citys_ != nullptr;};
    void deleteCitys() { this->citys_ = nullptr;};
    inline const vector<Models::HotelCityCodeListResponseBodyModuleCitys> & citys() const { DARABONBA_PTR_GET_CONST(citys_, vector<Models::HotelCityCodeListResponseBodyModuleCitys>) };
    inline vector<Models::HotelCityCodeListResponseBodyModuleCitys> citys() { DARABONBA_PTR_GET(citys_, vector<Models::HotelCityCodeListResponseBodyModuleCitys>) };
    inline HotelCityCodeListResponseBodyModule& setCitys(const vector<Models::HotelCityCodeListResponseBodyModuleCitys> & citys) { DARABONBA_PTR_SET_VALUE(citys_, citys) };
    inline HotelCityCodeListResponseBodyModule& setCitys(vector<Models::HotelCityCodeListResponseBodyModuleCitys> && citys) { DARABONBA_PTR_SET_RVALUE(citys_, citys) };


    // proviceCode Field Functions 
    bool hasProviceCode() const { return this->proviceCode_ != nullptr;};
    void deleteProviceCode() { this->proviceCode_ = nullptr;};
    inline string proviceCode() const { DARABONBA_PTR_GET_DEFAULT(proviceCode_, "") };
    inline HotelCityCodeListResponseBodyModule& setProviceCode(string proviceCode) { DARABONBA_PTR_SET_VALUE(proviceCode_, proviceCode) };


    // provinceName Field Functions 
    bool hasProvinceName() const { return this->provinceName_ != nullptr;};
    void deleteProvinceName() { this->provinceName_ = nullptr;};
    inline string provinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
    inline HotelCityCodeListResponseBodyModule& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


  protected:
    std::shared_ptr<vector<Models::HotelCityCodeListResponseBodyModuleCitys>> citys_ = nullptr;
    std::shared_ptr<string> proviceCode_ = nullptr;
    std::shared_ptr<string> provinceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
