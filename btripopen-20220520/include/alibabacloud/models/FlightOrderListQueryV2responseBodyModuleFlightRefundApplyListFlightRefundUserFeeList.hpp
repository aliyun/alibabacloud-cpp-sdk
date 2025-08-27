// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTREFUNDAPPLYLISTFLIGHTREFUNDUSERFEELIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTREFUNDAPPLYLISTFLIGHTREFUNDUSERFEELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList& obj) { 
      DARABONBA_PTR_TO_JSON(already_use_amount, alreadyUseAmount_);
      DARABONBA_PTR_TO_JSON(non_refundable_reshop_change_amount, nonRefundableReshopChangeAmount_);
      DARABONBA_PTR_TO_JSON(non_refundable_reshop_upgrade_amount, nonRefundableReshopUpgradeAmount_);
      DARABONBA_PTR_TO_JSON(refund_amount, refundAmount_);
      DARABONBA_PTR_TO_JSON(refund_corp_amount, refundCorpAmount_);
      DARABONBA_PTR_TO_JSON(refund_hand_fee, refundHandFee_);
      DARABONBA_PTR_TO_JSON(refund_person_amount, refundPersonAmount_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList& obj) { 
      DARABONBA_PTR_FROM_JSON(already_use_amount, alreadyUseAmount_);
      DARABONBA_PTR_FROM_JSON(non_refundable_reshop_change_amount, nonRefundableReshopChangeAmount_);
      DARABONBA_PTR_FROM_JSON(non_refundable_reshop_upgrade_amount, nonRefundableReshopUpgradeAmount_);
      DARABONBA_PTR_FROM_JSON(refund_amount, refundAmount_);
      DARABONBA_PTR_FROM_JSON(refund_corp_amount, refundCorpAmount_);
      DARABONBA_PTR_FROM_JSON(refund_hand_fee, refundHandFee_);
      DARABONBA_PTR_FROM_JSON(refund_person_amount, refundPersonAmount_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList(const FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList(FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList &&) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList& operator=(const FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList& operator=(FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alreadyUseAmount_ != nullptr
        && this->nonRefundableReshopChangeAmount_ != nullptr && this->nonRefundableReshopUpgradeAmount_ != nullptr && this->refundAmount_ != nullptr && this->refundCorpAmount_ != nullptr && this->refundHandFee_ != nullptr
        && this->refundPersonAmount_ != nullptr && this->userId_ != nullptr; };
    // alreadyUseAmount Field Functions 
    bool hasAlreadyUseAmount() const { return this->alreadyUseAmount_ != nullptr;};
    void deleteAlreadyUseAmount() { this->alreadyUseAmount_ = nullptr;};
    inline double alreadyUseAmount() const { DARABONBA_PTR_GET_DEFAULT(alreadyUseAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList& setAlreadyUseAmount(double alreadyUseAmount) { DARABONBA_PTR_SET_VALUE(alreadyUseAmount_, alreadyUseAmount) };


    // nonRefundableReshopChangeAmount Field Functions 
    bool hasNonRefundableReshopChangeAmount() const { return this->nonRefundableReshopChangeAmount_ != nullptr;};
    void deleteNonRefundableReshopChangeAmount() { this->nonRefundableReshopChangeAmount_ = nullptr;};
    inline double nonRefundableReshopChangeAmount() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableReshopChangeAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList& setNonRefundableReshopChangeAmount(double nonRefundableReshopChangeAmount) { DARABONBA_PTR_SET_VALUE(nonRefundableReshopChangeAmount_, nonRefundableReshopChangeAmount) };


    // nonRefundableReshopUpgradeAmount Field Functions 
    bool hasNonRefundableReshopUpgradeAmount() const { return this->nonRefundableReshopUpgradeAmount_ != nullptr;};
    void deleteNonRefundableReshopUpgradeAmount() { this->nonRefundableReshopUpgradeAmount_ = nullptr;};
    inline double nonRefundableReshopUpgradeAmount() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableReshopUpgradeAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList& setNonRefundableReshopUpgradeAmount(double nonRefundableReshopUpgradeAmount) { DARABONBA_PTR_SET_VALUE(nonRefundableReshopUpgradeAmount_, nonRefundableReshopUpgradeAmount) };


    // refundAmount Field Functions 
    bool hasRefundAmount() const { return this->refundAmount_ != nullptr;};
    void deleteRefundAmount() { this->refundAmount_ = nullptr;};
    inline double refundAmount() const { DARABONBA_PTR_GET_DEFAULT(refundAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList& setRefundAmount(double refundAmount) { DARABONBA_PTR_SET_VALUE(refundAmount_, refundAmount) };


    // refundCorpAmount Field Functions 
    bool hasRefundCorpAmount() const { return this->refundCorpAmount_ != nullptr;};
    void deleteRefundCorpAmount() { this->refundCorpAmount_ = nullptr;};
    inline double refundCorpAmount() const { DARABONBA_PTR_GET_DEFAULT(refundCorpAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList& setRefundCorpAmount(double refundCorpAmount) { DARABONBA_PTR_SET_VALUE(refundCorpAmount_, refundCorpAmount) };


    // refundHandFee Field Functions 
    bool hasRefundHandFee() const { return this->refundHandFee_ != nullptr;};
    void deleteRefundHandFee() { this->refundHandFee_ = nullptr;};
    inline double refundHandFee() const { DARABONBA_PTR_GET_DEFAULT(refundHandFee_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList& setRefundHandFee(double refundHandFee) { DARABONBA_PTR_SET_VALUE(refundHandFee_, refundHandFee) };


    // refundPersonAmount Field Functions 
    bool hasRefundPersonAmount() const { return this->refundPersonAmount_ != nullptr;};
    void deleteRefundPersonAmount() { this->refundPersonAmount_ = nullptr;};
    inline double refundPersonAmount() const { DARABONBA_PTR_GET_DEFAULT(refundPersonAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList& setRefundPersonAmount(double refundPersonAmount) { DARABONBA_PTR_SET_VALUE(refundPersonAmount_, refundPersonAmount) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<double> alreadyUseAmount_ = nullptr;
    std::shared_ptr<double> nonRefundableReshopChangeAmount_ = nullptr;
    std::shared_ptr<double> nonRefundableReshopUpgradeAmount_ = nullptr;
    std::shared_ptr<double> refundAmount_ = nullptr;
    std::shared_ptr<double> refundCorpAmount_ = nullptr;
    std::shared_ptr<double> refundHandFee_ = nullptr;
    std::shared_ptr<double> refundPersonAmount_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
