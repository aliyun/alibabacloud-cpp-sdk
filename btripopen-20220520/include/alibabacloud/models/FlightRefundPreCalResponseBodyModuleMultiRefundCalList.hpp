// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALRESPONSEBODYMODULEMULTIREFUNDCALLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALRESPONSEBODYMODULEMULTIREFUNDCALLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundPreCalResponseBodyModuleMultiRefundCalList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundPreCalResponseBodyModuleMultiRefundCalList& obj) { 
      DARABONBA_PTR_TO_JSON(can_apply_refund, canApplyRefund_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pre_refund_money, preRefundMoney_);
      DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundPreCalResponseBodyModuleMultiRefundCalList& obj) { 
      DARABONBA_PTR_FROM_JSON(can_apply_refund, canApplyRefund_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pre_refund_money, preRefundMoney_);
      DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    FlightRefundPreCalResponseBodyModuleMultiRefundCalList() = default ;
    FlightRefundPreCalResponseBodyModuleMultiRefundCalList(const FlightRefundPreCalResponseBodyModuleMultiRefundCalList &) = default ;
    FlightRefundPreCalResponseBodyModuleMultiRefundCalList(FlightRefundPreCalResponseBodyModuleMultiRefundCalList &&) = default ;
    FlightRefundPreCalResponseBodyModuleMultiRefundCalList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundPreCalResponseBodyModuleMultiRefundCalList() = default ;
    FlightRefundPreCalResponseBodyModuleMultiRefundCalList& operator=(const FlightRefundPreCalResponseBodyModuleMultiRefundCalList &) = default ;
    FlightRefundPreCalResponseBodyModuleMultiRefundCalList& operator=(FlightRefundPreCalResponseBodyModuleMultiRefundCalList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canApplyRefund_ != nullptr
        && this->name_ != nullptr && this->preRefundMoney_ != nullptr && this->refundFee_ != nullptr && this->userId_ != nullptr; };
    // canApplyRefund Field Functions 
    bool hasCanApplyRefund() const { return this->canApplyRefund_ != nullptr;};
    void deleteCanApplyRefund() { this->canApplyRefund_ = nullptr;};
    inline bool canApplyRefund() const { DARABONBA_PTR_GET_DEFAULT(canApplyRefund_, false) };
    inline FlightRefundPreCalResponseBodyModuleMultiRefundCalList& setCanApplyRefund(bool canApplyRefund) { DARABONBA_PTR_SET_VALUE(canApplyRefund_, canApplyRefund) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FlightRefundPreCalResponseBodyModuleMultiRefundCalList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // preRefundMoney Field Functions 
    bool hasPreRefundMoney() const { return this->preRefundMoney_ != nullptr;};
    void deletePreRefundMoney() { this->preRefundMoney_ = nullptr;};
    inline int64_t preRefundMoney() const { DARABONBA_PTR_GET_DEFAULT(preRefundMoney_, 0L) };
    inline FlightRefundPreCalResponseBodyModuleMultiRefundCalList& setPreRefundMoney(int64_t preRefundMoney) { DARABONBA_PTR_SET_VALUE(preRefundMoney_, preRefundMoney) };


    // refundFee Field Functions 
    bool hasRefundFee() const { return this->refundFee_ != nullptr;};
    void deleteRefundFee() { this->refundFee_ = nullptr;};
    inline int64_t refundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0L) };
    inline FlightRefundPreCalResponseBodyModuleMultiRefundCalList& setRefundFee(int64_t refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline FlightRefundPreCalResponseBodyModuleMultiRefundCalList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<bool> canApplyRefund_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> preRefundMoney_ = nullptr;
    std::shared_ptr<int64_t> refundFee_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
