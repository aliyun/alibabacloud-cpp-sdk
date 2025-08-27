// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightRefundPreCalResponseBodyModuleMultiRefundCalList.hpp>
#include <alibabacloud/models/FlightRefundPreCalResponseBodyModuleReturnReason.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundPreCalResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundPreCalResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(flight_change, flightChange_);
      DARABONBA_PTR_TO_JSON(item_unit_id, itemUnitId_);
      DARABONBA_PTR_TO_JSON(multi_refund_cal_list, multiRefundCalList_);
      DARABONBA_PTR_TO_JSON(pre_refund_money, preRefundMoney_);
      DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
      DARABONBA_PTR_TO_JSON(return_reason, returnReason_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(tips, tips_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundPreCalResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_change, flightChange_);
      DARABONBA_PTR_FROM_JSON(item_unit_id, itemUnitId_);
      DARABONBA_PTR_FROM_JSON(multi_refund_cal_list, multiRefundCalList_);
      DARABONBA_PTR_FROM_JSON(pre_refund_money, preRefundMoney_);
      DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
      DARABONBA_PTR_FROM_JSON(return_reason, returnReason_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(tips, tips_);
    };
    FlightRefundPreCalResponseBodyModule() = default ;
    FlightRefundPreCalResponseBodyModule(const FlightRefundPreCalResponseBodyModule &) = default ;
    FlightRefundPreCalResponseBodyModule(FlightRefundPreCalResponseBodyModule &&) = default ;
    FlightRefundPreCalResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundPreCalResponseBodyModule() = default ;
    FlightRefundPreCalResponseBodyModule& operator=(const FlightRefundPreCalResponseBodyModule &) = default ;
    FlightRefundPreCalResponseBodyModule& operator=(FlightRefundPreCalResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightChange_ != nullptr
        && this->itemUnitId_ != nullptr && this->multiRefundCalList_ != nullptr && this->preRefundMoney_ != nullptr && this->refundFee_ != nullptr && this->returnReason_ != nullptr
        && this->sessionId_ != nullptr && this->tips_ != nullptr; };
    // flightChange Field Functions 
    bool hasFlightChange() const { return this->flightChange_ != nullptr;};
    void deleteFlightChange() { this->flightChange_ = nullptr;};
    inline bool flightChange() const { DARABONBA_PTR_GET_DEFAULT(flightChange_, false) };
    inline FlightRefundPreCalResponseBodyModule& setFlightChange(bool flightChange) { DARABONBA_PTR_SET_VALUE(flightChange_, flightChange) };


    // itemUnitId Field Functions 
    bool hasItemUnitId() const { return this->itemUnitId_ != nullptr;};
    void deleteItemUnitId() { this->itemUnitId_ = nullptr;};
    inline string itemUnitId() const { DARABONBA_PTR_GET_DEFAULT(itemUnitId_, "") };
    inline FlightRefundPreCalResponseBodyModule& setItemUnitId(string itemUnitId) { DARABONBA_PTR_SET_VALUE(itemUnitId_, itemUnitId) };


    // multiRefundCalList Field Functions 
    bool hasMultiRefundCalList() const { return this->multiRefundCalList_ != nullptr;};
    void deleteMultiRefundCalList() { this->multiRefundCalList_ = nullptr;};
    inline const vector<Models::FlightRefundPreCalResponseBodyModuleMultiRefundCalList> & multiRefundCalList() const { DARABONBA_PTR_GET_CONST(multiRefundCalList_, vector<Models::FlightRefundPreCalResponseBodyModuleMultiRefundCalList>) };
    inline vector<Models::FlightRefundPreCalResponseBodyModuleMultiRefundCalList> multiRefundCalList() { DARABONBA_PTR_GET(multiRefundCalList_, vector<Models::FlightRefundPreCalResponseBodyModuleMultiRefundCalList>) };
    inline FlightRefundPreCalResponseBodyModule& setMultiRefundCalList(const vector<Models::FlightRefundPreCalResponseBodyModuleMultiRefundCalList> & multiRefundCalList) { DARABONBA_PTR_SET_VALUE(multiRefundCalList_, multiRefundCalList) };
    inline FlightRefundPreCalResponseBodyModule& setMultiRefundCalList(vector<Models::FlightRefundPreCalResponseBodyModuleMultiRefundCalList> && multiRefundCalList) { DARABONBA_PTR_SET_RVALUE(multiRefundCalList_, multiRefundCalList) };


    // preRefundMoney Field Functions 
    bool hasPreRefundMoney() const { return this->preRefundMoney_ != nullptr;};
    void deletePreRefundMoney() { this->preRefundMoney_ = nullptr;};
    inline int64_t preRefundMoney() const { DARABONBA_PTR_GET_DEFAULT(preRefundMoney_, 0L) };
    inline FlightRefundPreCalResponseBodyModule& setPreRefundMoney(int64_t preRefundMoney) { DARABONBA_PTR_SET_VALUE(preRefundMoney_, preRefundMoney) };


    // refundFee Field Functions 
    bool hasRefundFee() const { return this->refundFee_ != nullptr;};
    void deleteRefundFee() { this->refundFee_ = nullptr;};
    inline int64_t refundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0L) };
    inline FlightRefundPreCalResponseBodyModule& setRefundFee(int64_t refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


    // returnReason Field Functions 
    bool hasReturnReason() const { return this->returnReason_ != nullptr;};
    void deleteReturnReason() { this->returnReason_ = nullptr;};
    inline const vector<Models::FlightRefundPreCalResponseBodyModuleReturnReason> & returnReason() const { DARABONBA_PTR_GET_CONST(returnReason_, vector<Models::FlightRefundPreCalResponseBodyModuleReturnReason>) };
    inline vector<Models::FlightRefundPreCalResponseBodyModuleReturnReason> returnReason() { DARABONBA_PTR_GET(returnReason_, vector<Models::FlightRefundPreCalResponseBodyModuleReturnReason>) };
    inline FlightRefundPreCalResponseBodyModule& setReturnReason(const vector<Models::FlightRefundPreCalResponseBodyModuleReturnReason> & returnReason) { DARABONBA_PTR_SET_VALUE(returnReason_, returnReason) };
    inline FlightRefundPreCalResponseBodyModule& setReturnReason(vector<Models::FlightRefundPreCalResponseBodyModuleReturnReason> && returnReason) { DARABONBA_PTR_SET_RVALUE(returnReason_, returnReason) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline FlightRefundPreCalResponseBodyModule& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // tips Field Functions 
    bool hasTips() const { return this->tips_ != nullptr;};
    void deleteTips() { this->tips_ = nullptr;};
    inline string tips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
    inline FlightRefundPreCalResponseBodyModule& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


  protected:
    std::shared_ptr<bool> flightChange_ = nullptr;
    std::shared_ptr<string> itemUnitId_ = nullptr;
    std::shared_ptr<vector<Models::FlightRefundPreCalResponseBodyModuleMultiRefundCalList>> multiRefundCalList_ = nullptr;
    std::shared_ptr<int64_t> preRefundMoney_ = nullptr;
    std::shared_ptr<int64_t> refundFee_ = nullptr;
    std::shared_ptr<vector<Models::FlightRefundPreCalResponseBodyModuleReturnReason>> returnReason_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> tips_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
