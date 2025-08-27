// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGAPPLYREQUESTMODIFYFLIGHTINFOLISTPASSENGERINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGAPPLYREQUESTMODIFYFLIGHTINFOLISTPASSENGERINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(origin_flight_no, originFlightNo_);
      DARABONBA_PTR_TO_JSON(out_user_id, outUserId_);
      DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(origin_flight_no, originFlightNo_);
      DARABONBA_PTR_FROM_JSON(out_user_id, outUserId_);
      DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
    };
    TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList() = default ;
    TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList(const TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList &) = default ;
    TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList(TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList &&) = default ;
    TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList() = default ;
    TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList& operator=(const TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList &) = default ;
    TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList& operator=(TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->originFlightNo_ != nullptr
        && this->outUserId_ != nullptr && this->passengerName_ != nullptr; };
    // originFlightNo Field Functions 
    bool hasOriginFlightNo() const { return this->originFlightNo_ != nullptr;};
    void deleteOriginFlightNo() { this->originFlightNo_ = nullptr;};
    inline string originFlightNo() const { DARABONBA_PTR_GET_DEFAULT(originFlightNo_, "") };
    inline TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList& setOriginFlightNo(string originFlightNo) { DARABONBA_PTR_SET_VALUE(originFlightNo_, originFlightNo) };


    // outUserId Field Functions 
    bool hasOutUserId() const { return this->outUserId_ != nullptr;};
    void deleteOutUserId() { this->outUserId_ = nullptr;};
    inline string outUserId() const { DARABONBA_PTR_GET_DEFAULT(outUserId_, "") };
    inline TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList& setOutUserId(string outUserId) { DARABONBA_PTR_SET_VALUE(outUserId_, outUserId) };


    // passengerName Field Functions 
    bool hasPassengerName() const { return this->passengerName_ != nullptr;};
    void deletePassengerName() { this->passengerName_ = nullptr;};
    inline string passengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
    inline TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> originFlightNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> passengerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
