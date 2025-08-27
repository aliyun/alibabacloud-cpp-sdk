// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYMODIFYREQUESTTRAVELERSTANDARDHOTELINTLCITYS_HPP_
#define ALIBABACLOUD_MODELS_APPLYMODIFYREQUESTTRAVELERSTANDARDHOTELINTLCITYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyModifyRequestTravelerStandardHotelIntlCitys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyModifyRequestTravelerStandardHotelIntlCitys& obj) { 
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(city_name, cityName_);
      DARABONBA_PTR_TO_JSON(fee, fee_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyModifyRequestTravelerStandardHotelIntlCitys& obj) { 
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(city_name, cityName_);
      DARABONBA_PTR_FROM_JSON(fee, fee_);
    };
    ApplyModifyRequestTravelerStandardHotelIntlCitys() = default ;
    ApplyModifyRequestTravelerStandardHotelIntlCitys(const ApplyModifyRequestTravelerStandardHotelIntlCitys &) = default ;
    ApplyModifyRequestTravelerStandardHotelIntlCitys(ApplyModifyRequestTravelerStandardHotelIntlCitys &&) = default ;
    ApplyModifyRequestTravelerStandardHotelIntlCitys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyModifyRequestTravelerStandardHotelIntlCitys() = default ;
    ApplyModifyRequestTravelerStandardHotelIntlCitys& operator=(const ApplyModifyRequestTravelerStandardHotelIntlCitys &) = default ;
    ApplyModifyRequestTravelerStandardHotelIntlCitys& operator=(ApplyModifyRequestTravelerStandardHotelIntlCitys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cityCode_ != nullptr
        && this->cityName_ != nullptr && this->fee_ != nullptr; };
    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline ApplyModifyRequestTravelerStandardHotelIntlCitys& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline ApplyModifyRequestTravelerStandardHotelIntlCitys& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // fee Field Functions 
    bool hasFee() const { return this->fee_ != nullptr;};
    void deleteFee() { this->fee_ = nullptr;};
    inline int64_t fee() const { DARABONBA_PTR_GET_DEFAULT(fee_, 0L) };
    inline ApplyModifyRequestTravelerStandardHotelIntlCitys& setFee(int64_t fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


  protected:
    std::shared_ptr<string> cityCode_ = nullptr;
    std::shared_ptr<string> cityName_ = nullptr;
    std::shared_ptr<int64_t> fee_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
