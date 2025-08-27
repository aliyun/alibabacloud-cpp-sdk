// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREREFUNDDETAILRESPONSEBODYMODULESUBORDERREFUNDLISTINSURESEGMENT_HPP_
#define ALIBABACLOUD_MODELS_INSUREREFUNDDETAILRESPONSEBODYMODULESUBORDERREFUNDLISTINSURESEGMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment& obj) { 
      DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
    };
    friend void from_json(const Darabonba::Json& j, InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
    };
    InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment() = default ;
    InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment(const InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment &) = default ;
    InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment(InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment &&) = default ;
    InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment() = default ;
    InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment& operator=(const InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment &) = default ;
    InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment& operator=(InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrAirportCode_ != nullptr
        && this->arrCity_ != nullptr && this->arrCityCode_ != nullptr && this->arrTime_ != nullptr && this->depAirportCode_ != nullptr && this->depCity_ != nullptr
        && this->depCityCode_ != nullptr && this->depTime_ != nullptr && this->flightNo_ != nullptr; };
    // arrAirportCode Field Functions 
    bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
    void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
    inline string arrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // depAirportCode Field Functions 
    bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
    void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
    inline string depAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


  protected:
    std::shared_ptr<string> arrAirportCode_ = nullptr;
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> depAirportCode_ = nullptr;
    std::shared_ptr<string> depCity_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
