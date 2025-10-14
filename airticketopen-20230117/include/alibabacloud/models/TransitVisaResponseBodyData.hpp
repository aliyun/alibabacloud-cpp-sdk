// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSITVISARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TRANSITVISARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TransitVisaResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransitVisaResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(visa_type, visaType_);
    };
    friend void from_json(const Darabonba::Json& j, TransitVisaResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(visa_type, visaType_);
    };
    TransitVisaResponseBodyData() = default ;
    TransitVisaResponseBodyData(const TransitVisaResponseBodyData &) = default ;
    TransitVisaResponseBodyData(TransitVisaResponseBodyData &&) = default ;
    TransitVisaResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransitVisaResponseBodyData() = default ;
    TransitVisaResponseBodyData& operator=(const TransitVisaResponseBodyData &) = default ;
    TransitVisaResponseBodyData& operator=(TransitVisaResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cityCode_ == nullptr
        && return this->visaType_ == nullptr; };
    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline TransitVisaResponseBodyData& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // visaType Field Functions 
    bool hasVisaType() const { return this->visaType_ != nullptr;};
    void deleteVisaType() { this->visaType_ = nullptr;};
    inline int32_t visaType() const { DARABONBA_PTR_GET_DEFAULT(visaType_, 0) };
    inline TransitVisaResponseBodyData& setVisaType(int32_t visaType) { DARABONBA_PTR_SET_VALUE(visaType_, visaType) };


  protected:
    std::shared_ptr<string> cityCode_ = nullptr;
    std::shared_ptr<int32_t> visaType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
