// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERDETAILQUERYRESPONSEBODYMODULEFLIGHTREFUNDORDERLISTFLIGHTPASSENGERFEE_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERDETAILQUERYRESPONSEBODYMODULEFLIGHTREFUNDORDERLISTFLIGHTPASSENGERFEE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee& obj) { 
      DARABONBA_PTR_TO_JSON(no_refund_modify_hand_fee, noRefundModifyHandFee_);
      DARABONBA_PTR_TO_JSON(no_refund_modify_upgrade_fee, noRefundModifyUpgradeFee_);
      DARABONBA_PTR_TO_JSON(refund_amount, refundAmount_);
      DARABONBA_PTR_TO_JSON(refund_hand_fee, refundHandFee_);
      DARABONBA_PTR_TO_JSON(refund_modify_amount, refundModifyAmount_);
      DARABONBA_PTR_TO_JSON(refund_modify_hand_amount, refundModifyHandAmount_);
      DARABONBA_PTR_TO_JSON(refund_modify_upgrade_amount, refundModifyUpgradeAmount_);
      DARABONBA_PTR_TO_JSON(refund_tax_hand_fee, refundTaxHandFee_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee& obj) { 
      DARABONBA_PTR_FROM_JSON(no_refund_modify_hand_fee, noRefundModifyHandFee_);
      DARABONBA_PTR_FROM_JSON(no_refund_modify_upgrade_fee, noRefundModifyUpgradeFee_);
      DARABONBA_PTR_FROM_JSON(refund_amount, refundAmount_);
      DARABONBA_PTR_FROM_JSON(refund_hand_fee, refundHandFee_);
      DARABONBA_PTR_FROM_JSON(refund_modify_amount, refundModifyAmount_);
      DARABONBA_PTR_FROM_JSON(refund_modify_hand_amount, refundModifyHandAmount_);
      DARABONBA_PTR_FROM_JSON(refund_modify_upgrade_amount, refundModifyUpgradeAmount_);
      DARABONBA_PTR_FROM_JSON(refund_tax_hand_fee, refundTaxHandFee_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee() = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee(const IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee &) = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee(IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee &&) = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee() = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee& operator=(const IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee &) = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee& operator=(IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->noRefundModifyHandFee_ != nullptr
        && this->noRefundModifyUpgradeFee_ != nullptr && this->refundAmount_ != nullptr && this->refundHandFee_ != nullptr && this->refundModifyAmount_ != nullptr && this->refundModifyHandAmount_ != nullptr
        && this->refundModifyUpgradeAmount_ != nullptr && this->refundTaxHandFee_ != nullptr && this->userId_ != nullptr; };
    // noRefundModifyHandFee Field Functions 
    bool hasNoRefundModifyHandFee() const { return this->noRefundModifyHandFee_ != nullptr;};
    void deleteNoRefundModifyHandFee() { this->noRefundModifyHandFee_ = nullptr;};
    inline int64_t noRefundModifyHandFee() const { DARABONBA_PTR_GET_DEFAULT(noRefundModifyHandFee_, 0L) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee& setNoRefundModifyHandFee(int64_t noRefundModifyHandFee) { DARABONBA_PTR_SET_VALUE(noRefundModifyHandFee_, noRefundModifyHandFee) };


    // noRefundModifyUpgradeFee Field Functions 
    bool hasNoRefundModifyUpgradeFee() const { return this->noRefundModifyUpgradeFee_ != nullptr;};
    void deleteNoRefundModifyUpgradeFee() { this->noRefundModifyUpgradeFee_ = nullptr;};
    inline int64_t noRefundModifyUpgradeFee() const { DARABONBA_PTR_GET_DEFAULT(noRefundModifyUpgradeFee_, 0L) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee& setNoRefundModifyUpgradeFee(int64_t noRefundModifyUpgradeFee) { DARABONBA_PTR_SET_VALUE(noRefundModifyUpgradeFee_, noRefundModifyUpgradeFee) };


    // refundAmount Field Functions 
    bool hasRefundAmount() const { return this->refundAmount_ != nullptr;};
    void deleteRefundAmount() { this->refundAmount_ = nullptr;};
    inline int64_t refundAmount() const { DARABONBA_PTR_GET_DEFAULT(refundAmount_, 0L) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee& setRefundAmount(int64_t refundAmount) { DARABONBA_PTR_SET_VALUE(refundAmount_, refundAmount) };


    // refundHandFee Field Functions 
    bool hasRefundHandFee() const { return this->refundHandFee_ != nullptr;};
    void deleteRefundHandFee() { this->refundHandFee_ = nullptr;};
    inline int64_t refundHandFee() const { DARABONBA_PTR_GET_DEFAULT(refundHandFee_, 0L) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee& setRefundHandFee(int64_t refundHandFee) { DARABONBA_PTR_SET_VALUE(refundHandFee_, refundHandFee) };


    // refundModifyAmount Field Functions 
    bool hasRefundModifyAmount() const { return this->refundModifyAmount_ != nullptr;};
    void deleteRefundModifyAmount() { this->refundModifyAmount_ = nullptr;};
    inline int64_t refundModifyAmount() const { DARABONBA_PTR_GET_DEFAULT(refundModifyAmount_, 0L) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee& setRefundModifyAmount(int64_t refundModifyAmount) { DARABONBA_PTR_SET_VALUE(refundModifyAmount_, refundModifyAmount) };


    // refundModifyHandAmount Field Functions 
    bool hasRefundModifyHandAmount() const { return this->refundModifyHandAmount_ != nullptr;};
    void deleteRefundModifyHandAmount() { this->refundModifyHandAmount_ = nullptr;};
    inline int64_t refundModifyHandAmount() const { DARABONBA_PTR_GET_DEFAULT(refundModifyHandAmount_, 0L) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee& setRefundModifyHandAmount(int64_t refundModifyHandAmount) { DARABONBA_PTR_SET_VALUE(refundModifyHandAmount_, refundModifyHandAmount) };


    // refundModifyUpgradeAmount Field Functions 
    bool hasRefundModifyUpgradeAmount() const { return this->refundModifyUpgradeAmount_ != nullptr;};
    void deleteRefundModifyUpgradeAmount() { this->refundModifyUpgradeAmount_ = nullptr;};
    inline int64_t refundModifyUpgradeAmount() const { DARABONBA_PTR_GET_DEFAULT(refundModifyUpgradeAmount_, 0L) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee& setRefundModifyUpgradeAmount(int64_t refundModifyUpgradeAmount) { DARABONBA_PTR_SET_VALUE(refundModifyUpgradeAmount_, refundModifyUpgradeAmount) };


    // refundTaxHandFee Field Functions 
    bool hasRefundTaxHandFee() const { return this->refundTaxHandFee_ != nullptr;};
    void deleteRefundTaxHandFee() { this->refundTaxHandFee_ = nullptr;};
    inline int64_t refundTaxHandFee() const { DARABONBA_PTR_GET_DEFAULT(refundTaxHandFee_, 0L) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee& setRefundTaxHandFee(int64_t refundTaxHandFee) { DARABONBA_PTR_SET_VALUE(refundTaxHandFee_, refundTaxHandFee) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> noRefundModifyHandFee_ = nullptr;
    std::shared_ptr<int64_t> noRefundModifyUpgradeFee_ = nullptr;
    std::shared_ptr<int64_t> refundAmount_ = nullptr;
    std::shared_ptr<int64_t> refundHandFee_ = nullptr;
    std::shared_ptr<int64_t> refundModifyAmount_ = nullptr;
    std::shared_ptr<int64_t> refundModifyHandAmount_ = nullptr;
    std::shared_ptr<int64_t> refundModifyUpgradeAmount_ = nullptr;
    std::shared_ptr<int64_t> refundTaxHandFee_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
