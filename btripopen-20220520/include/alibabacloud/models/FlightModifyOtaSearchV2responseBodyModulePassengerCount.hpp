// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULEPASSENGERCOUNT_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULEPASSENGERCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOtaSearchV2ResponseBodyModulePassengerCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOtaSearchV2ResponseBodyModulePassengerCount& obj) { 
      DARABONBA_PTR_TO_JSON(adult_passenger_num, adultPassengerNum_);
      DARABONBA_PTR_TO_JSON(child_passenger_num, childPassengerNum_);
      DARABONBA_PTR_TO_JSON(infant_passenger_num, infantPassengerNum_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOtaSearchV2ResponseBodyModulePassengerCount& obj) { 
      DARABONBA_PTR_FROM_JSON(adult_passenger_num, adultPassengerNum_);
      DARABONBA_PTR_FROM_JSON(child_passenger_num, childPassengerNum_);
      DARABONBA_PTR_FROM_JSON(infant_passenger_num, infantPassengerNum_);
    };
    FlightModifyOtaSearchV2ResponseBodyModulePassengerCount() = default ;
    FlightModifyOtaSearchV2ResponseBodyModulePassengerCount(const FlightModifyOtaSearchV2ResponseBodyModulePassengerCount &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModulePassengerCount(FlightModifyOtaSearchV2ResponseBodyModulePassengerCount &&) = default ;
    FlightModifyOtaSearchV2ResponseBodyModulePassengerCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOtaSearchV2ResponseBodyModulePassengerCount() = default ;
    FlightModifyOtaSearchV2ResponseBodyModulePassengerCount& operator=(const FlightModifyOtaSearchV2ResponseBodyModulePassengerCount &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModulePassengerCount& operator=(FlightModifyOtaSearchV2ResponseBodyModulePassengerCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adultPassengerNum_ != nullptr
        && this->childPassengerNum_ != nullptr && this->infantPassengerNum_ != nullptr; };
    // adultPassengerNum Field Functions 
    bool hasAdultPassengerNum() const { return this->adultPassengerNum_ != nullptr;};
    void deleteAdultPassengerNum() { this->adultPassengerNum_ = nullptr;};
    inline int32_t adultPassengerNum() const { DARABONBA_PTR_GET_DEFAULT(adultPassengerNum_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModulePassengerCount& setAdultPassengerNum(int32_t adultPassengerNum) { DARABONBA_PTR_SET_VALUE(adultPassengerNum_, adultPassengerNum) };


    // childPassengerNum Field Functions 
    bool hasChildPassengerNum() const { return this->childPassengerNum_ != nullptr;};
    void deleteChildPassengerNum() { this->childPassengerNum_ = nullptr;};
    inline int32_t childPassengerNum() const { DARABONBA_PTR_GET_DEFAULT(childPassengerNum_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModulePassengerCount& setChildPassengerNum(int32_t childPassengerNum) { DARABONBA_PTR_SET_VALUE(childPassengerNum_, childPassengerNum) };


    // infantPassengerNum Field Functions 
    bool hasInfantPassengerNum() const { return this->infantPassengerNum_ != nullptr;};
    void deleteInfantPassengerNum() { this->infantPassengerNum_ = nullptr;};
    inline int32_t infantPassengerNum() const { DARABONBA_PTR_GET_DEFAULT(infantPassengerNum_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModulePassengerCount& setInfantPassengerNum(int32_t infantPassengerNum) { DARABONBA_PTR_SET_VALUE(infantPassengerNum_, infantPassengerNum) };


  protected:
    std::shared_ptr<int32_t> adultPassengerNum_ = nullptr;
    std::shared_ptr<int32_t> childPassengerNum_ = nullptr;
    std::shared_ptr<int32_t> infantPassengerNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
