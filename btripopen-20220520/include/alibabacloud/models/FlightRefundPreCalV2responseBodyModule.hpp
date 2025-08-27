// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALV2RESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALV2RESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS.hpp>
#include <alibabacloud/models/FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundPreCalV2ResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundPreCalV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(multi_refund_fee_d_t_o_s, multiRefundFeeDTOS_);
      DARABONBA_PTR_TO_JSON(pre_refund_money, preRefundMoney_);
      DARABONBA_PTR_TO_JSON(refund_charge_fee, refundChargeFee_);
      DARABONBA_PTR_TO_JSON(refund_reason_option_d_t_o_s, refundReasonOptionDTOS_);
      DARABONBA_PTR_TO_JSON(service_charge_fee, serviceChargeFee_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundPreCalV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(multi_refund_fee_d_t_o_s, multiRefundFeeDTOS_);
      DARABONBA_PTR_FROM_JSON(pre_refund_money, preRefundMoney_);
      DARABONBA_PTR_FROM_JSON(refund_charge_fee, refundChargeFee_);
      DARABONBA_PTR_FROM_JSON(refund_reason_option_d_t_o_s, refundReasonOptionDTOS_);
      DARABONBA_PTR_FROM_JSON(service_charge_fee, serviceChargeFee_);
    };
    FlightRefundPreCalV2ResponseBodyModule() = default ;
    FlightRefundPreCalV2ResponseBodyModule(const FlightRefundPreCalV2ResponseBodyModule &) = default ;
    FlightRefundPreCalV2ResponseBodyModule(FlightRefundPreCalV2ResponseBodyModule &&) = default ;
    FlightRefundPreCalV2ResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundPreCalV2ResponseBodyModule() = default ;
    FlightRefundPreCalV2ResponseBodyModule& operator=(const FlightRefundPreCalV2ResponseBodyModule &) = default ;
    FlightRefundPreCalV2ResponseBodyModule& operator=(FlightRefundPreCalV2ResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->multiRefundFeeDTOS_ != nullptr
        && this->preRefundMoney_ != nullptr && this->refundChargeFee_ != nullptr && this->refundReasonOptionDTOS_ != nullptr && this->serviceChargeFee_ != nullptr; };
    // multiRefundFeeDTOS Field Functions 
    bool hasMultiRefundFeeDTOS() const { return this->multiRefundFeeDTOS_ != nullptr;};
    void deleteMultiRefundFeeDTOS() { this->multiRefundFeeDTOS_ = nullptr;};
    inline const vector<Models::FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS> & multiRefundFeeDTOS() const { DARABONBA_PTR_GET_CONST(multiRefundFeeDTOS_, vector<Models::FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS>) };
    inline vector<Models::FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS> multiRefundFeeDTOS() { DARABONBA_PTR_GET(multiRefundFeeDTOS_, vector<Models::FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS>) };
    inline FlightRefundPreCalV2ResponseBodyModule& setMultiRefundFeeDTOS(const vector<Models::FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS> & multiRefundFeeDTOS) { DARABONBA_PTR_SET_VALUE(multiRefundFeeDTOS_, multiRefundFeeDTOS) };
    inline FlightRefundPreCalV2ResponseBodyModule& setMultiRefundFeeDTOS(vector<Models::FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS> && multiRefundFeeDTOS) { DARABONBA_PTR_SET_RVALUE(multiRefundFeeDTOS_, multiRefundFeeDTOS) };


    // preRefundMoney Field Functions 
    bool hasPreRefundMoney() const { return this->preRefundMoney_ != nullptr;};
    void deletePreRefundMoney() { this->preRefundMoney_ = nullptr;};
    inline int64_t preRefundMoney() const { DARABONBA_PTR_GET_DEFAULT(preRefundMoney_, 0L) };
    inline FlightRefundPreCalV2ResponseBodyModule& setPreRefundMoney(int64_t preRefundMoney) { DARABONBA_PTR_SET_VALUE(preRefundMoney_, preRefundMoney) };


    // refundChargeFee Field Functions 
    bool hasRefundChargeFee() const { return this->refundChargeFee_ != nullptr;};
    void deleteRefundChargeFee() { this->refundChargeFee_ = nullptr;};
    inline int64_t refundChargeFee() const { DARABONBA_PTR_GET_DEFAULT(refundChargeFee_, 0L) };
    inline FlightRefundPreCalV2ResponseBodyModule& setRefundChargeFee(int64_t refundChargeFee) { DARABONBA_PTR_SET_VALUE(refundChargeFee_, refundChargeFee) };


    // refundReasonOptionDTOS Field Functions 
    bool hasRefundReasonOptionDTOS() const { return this->refundReasonOptionDTOS_ != nullptr;};
    void deleteRefundReasonOptionDTOS() { this->refundReasonOptionDTOS_ = nullptr;};
    inline const vector<Models::FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS> & refundReasonOptionDTOS() const { DARABONBA_PTR_GET_CONST(refundReasonOptionDTOS_, vector<Models::FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS>) };
    inline vector<Models::FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS> refundReasonOptionDTOS() { DARABONBA_PTR_GET(refundReasonOptionDTOS_, vector<Models::FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS>) };
    inline FlightRefundPreCalV2ResponseBodyModule& setRefundReasonOptionDTOS(const vector<Models::FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS> & refundReasonOptionDTOS) { DARABONBA_PTR_SET_VALUE(refundReasonOptionDTOS_, refundReasonOptionDTOS) };
    inline FlightRefundPreCalV2ResponseBodyModule& setRefundReasonOptionDTOS(vector<Models::FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS> && refundReasonOptionDTOS) { DARABONBA_PTR_SET_RVALUE(refundReasonOptionDTOS_, refundReasonOptionDTOS) };


    // serviceChargeFee Field Functions 
    bool hasServiceChargeFee() const { return this->serviceChargeFee_ != nullptr;};
    void deleteServiceChargeFee() { this->serviceChargeFee_ = nullptr;};
    inline int64_t serviceChargeFee() const { DARABONBA_PTR_GET_DEFAULT(serviceChargeFee_, 0L) };
    inline FlightRefundPreCalV2ResponseBodyModule& setServiceChargeFee(int64_t serviceChargeFee) { DARABONBA_PTR_SET_VALUE(serviceChargeFee_, serviceChargeFee) };


  protected:
    std::shared_ptr<vector<Models::FlightRefundPreCalV2ResponseBodyModuleMultiRefundFeeDTOS>> multiRefundFeeDTOS_ = nullptr;
    std::shared_ptr<int64_t> preRefundMoney_ = nullptr;
    std::shared_ptr<int64_t> refundChargeFee_ = nullptr;
    std::shared_ptr<vector<Models::FlightRefundPreCalV2ResponseBodyModuleRefundReasonOptionDTOS>> refundReasonOptionDTOS_ = nullptr;
    std::shared_ptr<int64_t> serviceChargeFee_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
