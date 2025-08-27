// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALV2RESPONSEBODYMODULEMULTIREFUNDFEEDTOS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALV2RESPONSEBODYMODULEMULTIREFUNDFEEDTOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_TO_JSON(pre_refund_money, preRefundMoney_);
      DARABONBA_PTR_TO_JSON(refund_charge_fee, refundChargeFee_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_FROM_JSON(pre_refund_money, preRefundMoney_);
      DARABONBA_PTR_FROM_JSON(refund_charge_fee, refundChargeFee_);
    };
    FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS() = default ;
    FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS(const FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS &) = default ;
    FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS(FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS &&) = default ;
    FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS() = default ;
    FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS& operator=(const FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS &) = default ;
    FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS& operator=(FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passengerId_ != nullptr
        && this->passengerName_ != nullptr && this->preRefundMoney_ != nullptr && this->refundChargeFee_ != nullptr; };
    // passengerId Field Functions 
    bool hasPassengerId() const { return this->passengerId_ != nullptr;};
    void deletePassengerId() { this->passengerId_ = nullptr;};
    inline string passengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
    inline FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    // passengerName Field Functions 
    bool hasPassengerName() const { return this->passengerName_ != nullptr;};
    void deletePassengerName() { this->passengerName_ = nullptr;};
    inline string passengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
    inline FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


    // preRefundMoney Field Functions 
    bool hasPreRefundMoney() const { return this->preRefundMoney_ != nullptr;};
    void deletePreRefundMoney() { this->preRefundMoney_ = nullptr;};
    inline int64_t preRefundMoney() const { DARABONBA_PTR_GET_DEFAULT(preRefundMoney_, 0L) };
    inline FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS& setPreRefundMoney(int64_t preRefundMoney) { DARABONBA_PTR_SET_VALUE(preRefundMoney_, preRefundMoney) };


    // refundChargeFee Field Functions 
    bool hasRefundChargeFee() const { return this->refundChargeFee_ != nullptr;};
    void deleteRefundChargeFee() { this->refundChargeFee_ = nullptr;};
    inline int64_t refundChargeFee() const { DARABONBA_PTR_GET_DEFAULT(refundChargeFee_, 0L) };
    inline FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS& setRefundChargeFee(int64_t refundChargeFee) { DARABONBA_PTR_SET_VALUE(refundChargeFee_, refundChargeFee) };


  protected:
    std::shared_ptr<string> passengerId_ = nullptr;
    std::shared_ptr<string> passengerName_ = nullptr;
    std::shared_ptr<int64_t> preRefundMoney_ = nullptr;
    std::shared_ptr<int64_t> refundChargeFee_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
