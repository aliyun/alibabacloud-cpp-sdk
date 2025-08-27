// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALV2RESPONSEBODYMODULEREFUNDREASONOPTIONDTOS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALV2RESPONSEBODYMODULEREFUNDREASONOPTIONDTOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS& obj) { 
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(reason_type, reasonType_);
      DARABONBA_PTR_TO_JSON(volunteer, volunteer_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS& obj) { 
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(reason_type, reasonType_);
      DARABONBA_PTR_FROM_JSON(volunteer, volunteer_);
    };
    FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS() = default ;
    FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS(const FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS &) = default ;
    FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS(FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS &&) = default ;
    FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS() = default ;
    FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS& operator=(const FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS &) = default ;
    FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS& operator=(FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reason_ != nullptr
        && this->reasonType_ != nullptr && this->volunteer_ != nullptr; };
    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // reasonType Field Functions 
    bool hasReasonType() const { return this->reasonType_ != nullptr;};
    void deleteReasonType() { this->reasonType_ = nullptr;};
    inline int32_t reasonType() const { DARABONBA_PTR_GET_DEFAULT(reasonType_, 0) };
    inline FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS& setReasonType(int32_t reasonType) { DARABONBA_PTR_SET_VALUE(reasonType_, reasonType) };


    // volunteer Field Functions 
    bool hasVolunteer() const { return this->volunteer_ != nullptr;};
    void deleteVolunteer() { this->volunteer_ = nullptr;};
    inline bool volunteer() const { DARABONBA_PTR_GET_DEFAULT(volunteer_, false) };
    inline FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS& setVolunteer(bool volunteer) { DARABONBA_PTR_SET_VALUE(volunteer_, volunteer) };


  protected:
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<int32_t> reasonType_ = nullptr;
    std::shared_ptr<bool> volunteer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
