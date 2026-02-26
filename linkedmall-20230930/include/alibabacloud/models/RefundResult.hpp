// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDRESULT_HPP_
#define ALIBABACLOUD_MODELS_REFUNDRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ApplyReason.hpp>
#include <alibabacloud/models/RefundFeeData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class RefundResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundResult& obj) { 
      DARABONBA_PTR_TO_JSON(applyDisputeDesc, applyDisputeDesc_);
      DARABONBA_PTR_TO_JSON(applyReason, applyReason_);
      DARABONBA_PTR_TO_JSON(bizClaimType, bizClaimType_);
      DARABONBA_PTR_TO_JSON(disputeCreateTime, disputeCreateTime_);
      DARABONBA_PTR_TO_JSON(disputeDesc, disputeDesc_);
      DARABONBA_PTR_TO_JSON(disputeEndTime, disputeEndTime_);
      DARABONBA_PTR_TO_JSON(disputeId, disputeId_);
      DARABONBA_PTR_TO_JSON(disputeStatus, disputeStatus_);
      DARABONBA_PTR_TO_JSON(orderId, orderId_);
      DARABONBA_PTR_TO_JSON(orderLineId, orderLineId_);
      DARABONBA_PTR_TO_JSON(orderLogisticsStatus, orderLogisticsStatus_);
      DARABONBA_PTR_TO_JSON(refundFee, refundFee_);
      DARABONBA_PTR_TO_JSON(refundFeeData, refundFeeData_);
      DARABONBA_PTR_TO_JSON(refunderAddress, refunderAddress_);
      DARABONBA_PTR_TO_JSON(refunderName, refunderName_);
      DARABONBA_PTR_TO_JSON(refunderTel, refunderTel_);
      DARABONBA_PTR_TO_JSON(refunderZipCode, refunderZipCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(returnGoodLogisticsStatus, returnGoodLogisticsStatus_);
      DARABONBA_PTR_TO_JSON(sellerAgreeMsg, sellerAgreeMsg_);
      DARABONBA_PTR_TO_JSON(sellerRefuseAgreementMessage, sellerRefuseAgreementMessage_);
      DARABONBA_PTR_TO_JSON(sellerRefuseReason, sellerRefuseReason_);
    };
    friend void from_json(const Darabonba::Json& j, RefundResult& obj) { 
      DARABONBA_PTR_FROM_JSON(applyDisputeDesc, applyDisputeDesc_);
      DARABONBA_PTR_FROM_JSON(applyReason, applyReason_);
      DARABONBA_PTR_FROM_JSON(bizClaimType, bizClaimType_);
      DARABONBA_PTR_FROM_JSON(disputeCreateTime, disputeCreateTime_);
      DARABONBA_PTR_FROM_JSON(disputeDesc, disputeDesc_);
      DARABONBA_PTR_FROM_JSON(disputeEndTime, disputeEndTime_);
      DARABONBA_PTR_FROM_JSON(disputeId, disputeId_);
      DARABONBA_PTR_FROM_JSON(disputeStatus, disputeStatus_);
      DARABONBA_PTR_FROM_JSON(orderId, orderId_);
      DARABONBA_PTR_FROM_JSON(orderLineId, orderLineId_);
      DARABONBA_PTR_FROM_JSON(orderLogisticsStatus, orderLogisticsStatus_);
      DARABONBA_PTR_FROM_JSON(refundFee, refundFee_);
      DARABONBA_PTR_FROM_JSON(refundFeeData, refundFeeData_);
      DARABONBA_PTR_FROM_JSON(refunderAddress, refunderAddress_);
      DARABONBA_PTR_FROM_JSON(refunderName, refunderName_);
      DARABONBA_PTR_FROM_JSON(refunderTel, refunderTel_);
      DARABONBA_PTR_FROM_JSON(refunderZipCode, refunderZipCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(returnGoodLogisticsStatus, returnGoodLogisticsStatus_);
      DARABONBA_PTR_FROM_JSON(sellerAgreeMsg, sellerAgreeMsg_);
      DARABONBA_PTR_FROM_JSON(sellerRefuseAgreementMessage, sellerRefuseAgreementMessage_);
      DARABONBA_PTR_FROM_JSON(sellerRefuseReason, sellerRefuseReason_);
    };
    RefundResult() = default ;
    RefundResult(const RefundResult &) = default ;
    RefundResult(RefundResult &&) = default ;
    RefundResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundResult() = default ;
    RefundResult& operator=(const RefundResult &) = default ;
    RefundResult& operator=(RefundResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applyDisputeDesc_ == nullptr
        && this->applyReason_ == nullptr && this->bizClaimType_ == nullptr && this->disputeCreateTime_ == nullptr && this->disputeDesc_ == nullptr && this->disputeEndTime_ == nullptr
        && this->disputeId_ == nullptr && this->disputeStatus_ == nullptr && this->orderId_ == nullptr && this->orderLineId_ == nullptr && this->orderLogisticsStatus_ == nullptr
        && this->refundFee_ == nullptr && this->refundFeeData_ == nullptr && this->refunderAddress_ == nullptr && this->refunderName_ == nullptr && this->refunderTel_ == nullptr
        && this->refunderZipCode_ == nullptr && this->requestId_ == nullptr && this->returnGoodLogisticsStatus_ == nullptr && this->sellerAgreeMsg_ == nullptr && this->sellerRefuseAgreementMessage_ == nullptr
        && this->sellerRefuseReason_ == nullptr; };
    // applyDisputeDesc Field Functions 
    bool hasApplyDisputeDesc() const { return this->applyDisputeDesc_ != nullptr;};
    void deleteApplyDisputeDesc() { this->applyDisputeDesc_ = nullptr;};
    inline string getApplyDisputeDesc() const { DARABONBA_PTR_GET_DEFAULT(applyDisputeDesc_, "") };
    inline RefundResult& setApplyDisputeDesc(string applyDisputeDesc) { DARABONBA_PTR_SET_VALUE(applyDisputeDesc_, applyDisputeDesc) };


    // applyReason Field Functions 
    bool hasApplyReason() const { return this->applyReason_ != nullptr;};
    void deleteApplyReason() { this->applyReason_ = nullptr;};
    inline const ApplyReason & getApplyReason() const { DARABONBA_PTR_GET_CONST(applyReason_, ApplyReason) };
    inline ApplyReason getApplyReason() { DARABONBA_PTR_GET(applyReason_, ApplyReason) };
    inline RefundResult& setApplyReason(const ApplyReason & applyReason) { DARABONBA_PTR_SET_VALUE(applyReason_, applyReason) };
    inline RefundResult& setApplyReason(ApplyReason && applyReason) { DARABONBA_PTR_SET_RVALUE(applyReason_, applyReason) };


    // bizClaimType Field Functions 
    bool hasBizClaimType() const { return this->bizClaimType_ != nullptr;};
    void deleteBizClaimType() { this->bizClaimType_ = nullptr;};
    inline int32_t getBizClaimType() const { DARABONBA_PTR_GET_DEFAULT(bizClaimType_, 0) };
    inline RefundResult& setBizClaimType(int32_t bizClaimType) { DARABONBA_PTR_SET_VALUE(bizClaimType_, bizClaimType) };


    // disputeCreateTime Field Functions 
    bool hasDisputeCreateTime() const { return this->disputeCreateTime_ != nullptr;};
    void deleteDisputeCreateTime() { this->disputeCreateTime_ = nullptr;};
    inline string getDisputeCreateTime() const { DARABONBA_PTR_GET_DEFAULT(disputeCreateTime_, "") };
    inline RefundResult& setDisputeCreateTime(string disputeCreateTime) { DARABONBA_PTR_SET_VALUE(disputeCreateTime_, disputeCreateTime) };


    // disputeDesc Field Functions 
    bool hasDisputeDesc() const { return this->disputeDesc_ != nullptr;};
    void deleteDisputeDesc() { this->disputeDesc_ = nullptr;};
    inline string getDisputeDesc() const { DARABONBA_PTR_GET_DEFAULT(disputeDesc_, "") };
    inline RefundResult& setDisputeDesc(string disputeDesc) { DARABONBA_PTR_SET_VALUE(disputeDesc_, disputeDesc) };


    // disputeEndTime Field Functions 
    bool hasDisputeEndTime() const { return this->disputeEndTime_ != nullptr;};
    void deleteDisputeEndTime() { this->disputeEndTime_ = nullptr;};
    inline string getDisputeEndTime() const { DARABONBA_PTR_GET_DEFAULT(disputeEndTime_, "") };
    inline RefundResult& setDisputeEndTime(string disputeEndTime) { DARABONBA_PTR_SET_VALUE(disputeEndTime_, disputeEndTime) };


    // disputeId Field Functions 
    bool hasDisputeId() const { return this->disputeId_ != nullptr;};
    void deleteDisputeId() { this->disputeId_ = nullptr;};
    inline string getDisputeId() const { DARABONBA_PTR_GET_DEFAULT(disputeId_, "") };
    inline RefundResult& setDisputeId(string disputeId) { DARABONBA_PTR_SET_VALUE(disputeId_, disputeId) };


    // disputeStatus Field Functions 
    bool hasDisputeStatus() const { return this->disputeStatus_ != nullptr;};
    void deleteDisputeStatus() { this->disputeStatus_ = nullptr;};
    inline int32_t getDisputeStatus() const { DARABONBA_PTR_GET_DEFAULT(disputeStatus_, 0) };
    inline RefundResult& setDisputeStatus(int32_t disputeStatus) { DARABONBA_PTR_SET_VALUE(disputeStatus_, disputeStatus) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline RefundResult& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderLineId Field Functions 
    bool hasOrderLineId() const { return this->orderLineId_ != nullptr;};
    void deleteOrderLineId() { this->orderLineId_ = nullptr;};
    inline string getOrderLineId() const { DARABONBA_PTR_GET_DEFAULT(orderLineId_, "") };
    inline RefundResult& setOrderLineId(string orderLineId) { DARABONBA_PTR_SET_VALUE(orderLineId_, orderLineId) };


    // orderLogisticsStatus Field Functions 
    bool hasOrderLogisticsStatus() const { return this->orderLogisticsStatus_ != nullptr;};
    void deleteOrderLogisticsStatus() { this->orderLogisticsStatus_ = nullptr;};
    inline int32_t getOrderLogisticsStatus() const { DARABONBA_PTR_GET_DEFAULT(orderLogisticsStatus_, 0) };
    inline RefundResult& setOrderLogisticsStatus(int32_t orderLogisticsStatus) { DARABONBA_PTR_SET_VALUE(orderLogisticsStatus_, orderLogisticsStatus) };


    // refundFee Field Functions 
    bool hasRefundFee() const { return this->refundFee_ != nullptr;};
    void deleteRefundFee() { this->refundFee_ = nullptr;};
    inline int64_t getRefundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0L) };
    inline RefundResult& setRefundFee(int64_t refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


    // refundFeeData Field Functions 
    bool hasRefundFeeData() const { return this->refundFeeData_ != nullptr;};
    void deleteRefundFeeData() { this->refundFeeData_ = nullptr;};
    inline const RefundFeeData & getRefundFeeData() const { DARABONBA_PTR_GET_CONST(refundFeeData_, RefundFeeData) };
    inline RefundFeeData getRefundFeeData() { DARABONBA_PTR_GET(refundFeeData_, RefundFeeData) };
    inline RefundResult& setRefundFeeData(const RefundFeeData & refundFeeData) { DARABONBA_PTR_SET_VALUE(refundFeeData_, refundFeeData) };
    inline RefundResult& setRefundFeeData(RefundFeeData && refundFeeData) { DARABONBA_PTR_SET_RVALUE(refundFeeData_, refundFeeData) };


    // refunderAddress Field Functions 
    bool hasRefunderAddress() const { return this->refunderAddress_ != nullptr;};
    void deleteRefunderAddress() { this->refunderAddress_ = nullptr;};
    inline string getRefunderAddress() const { DARABONBA_PTR_GET_DEFAULT(refunderAddress_, "") };
    inline RefundResult& setRefunderAddress(string refunderAddress) { DARABONBA_PTR_SET_VALUE(refunderAddress_, refunderAddress) };


    // refunderName Field Functions 
    bool hasRefunderName() const { return this->refunderName_ != nullptr;};
    void deleteRefunderName() { this->refunderName_ = nullptr;};
    inline string getRefunderName() const { DARABONBA_PTR_GET_DEFAULT(refunderName_, "") };
    inline RefundResult& setRefunderName(string refunderName) { DARABONBA_PTR_SET_VALUE(refunderName_, refunderName) };


    // refunderTel Field Functions 
    bool hasRefunderTel() const { return this->refunderTel_ != nullptr;};
    void deleteRefunderTel() { this->refunderTel_ = nullptr;};
    inline string getRefunderTel() const { DARABONBA_PTR_GET_DEFAULT(refunderTel_, "") };
    inline RefundResult& setRefunderTel(string refunderTel) { DARABONBA_PTR_SET_VALUE(refunderTel_, refunderTel) };


    // refunderZipCode Field Functions 
    bool hasRefunderZipCode() const { return this->refunderZipCode_ != nullptr;};
    void deleteRefunderZipCode() { this->refunderZipCode_ = nullptr;};
    inline string getRefunderZipCode() const { DARABONBA_PTR_GET_DEFAULT(refunderZipCode_, "") };
    inline RefundResult& setRefunderZipCode(string refunderZipCode) { DARABONBA_PTR_SET_VALUE(refunderZipCode_, refunderZipCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefundResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // returnGoodLogisticsStatus Field Functions 
    bool hasReturnGoodLogisticsStatus() const { return this->returnGoodLogisticsStatus_ != nullptr;};
    void deleteReturnGoodLogisticsStatus() { this->returnGoodLogisticsStatus_ = nullptr;};
    inline int32_t getReturnGoodLogisticsStatus() const { DARABONBA_PTR_GET_DEFAULT(returnGoodLogisticsStatus_, 0) };
    inline RefundResult& setReturnGoodLogisticsStatus(int32_t returnGoodLogisticsStatus) { DARABONBA_PTR_SET_VALUE(returnGoodLogisticsStatus_, returnGoodLogisticsStatus) };


    // sellerAgreeMsg Field Functions 
    bool hasSellerAgreeMsg() const { return this->sellerAgreeMsg_ != nullptr;};
    void deleteSellerAgreeMsg() { this->sellerAgreeMsg_ = nullptr;};
    inline string getSellerAgreeMsg() const { DARABONBA_PTR_GET_DEFAULT(sellerAgreeMsg_, "") };
    inline RefundResult& setSellerAgreeMsg(string sellerAgreeMsg) { DARABONBA_PTR_SET_VALUE(sellerAgreeMsg_, sellerAgreeMsg) };


    // sellerRefuseAgreementMessage Field Functions 
    bool hasSellerRefuseAgreementMessage() const { return this->sellerRefuseAgreementMessage_ != nullptr;};
    void deleteSellerRefuseAgreementMessage() { this->sellerRefuseAgreementMessage_ = nullptr;};
    inline string getSellerRefuseAgreementMessage() const { DARABONBA_PTR_GET_DEFAULT(sellerRefuseAgreementMessage_, "") };
    inline RefundResult& setSellerRefuseAgreementMessage(string sellerRefuseAgreementMessage) { DARABONBA_PTR_SET_VALUE(sellerRefuseAgreementMessage_, sellerRefuseAgreementMessage) };


    // sellerRefuseReason Field Functions 
    bool hasSellerRefuseReason() const { return this->sellerRefuseReason_ != nullptr;};
    void deleteSellerRefuseReason() { this->sellerRefuseReason_ = nullptr;};
    inline string getSellerRefuseReason() const { DARABONBA_PTR_GET_DEFAULT(sellerRefuseReason_, "") };
    inline RefundResult& setSellerRefuseReason(string sellerRefuseReason) { DARABONBA_PTR_SET_VALUE(sellerRefuseReason_, sellerRefuseReason) };


  protected:
    shared_ptr<string> applyDisputeDesc_ {};
    shared_ptr<ApplyReason> applyReason_ {};
    shared_ptr<int32_t> bizClaimType_ {};
    shared_ptr<string> disputeCreateTime_ {};
    shared_ptr<string> disputeDesc_ {};
    shared_ptr<string> disputeEndTime_ {};
    shared_ptr<string> disputeId_ {};
    shared_ptr<int32_t> disputeStatus_ {};
    shared_ptr<string> orderId_ {};
    shared_ptr<string> orderLineId_ {};
    shared_ptr<int32_t> orderLogisticsStatus_ {};
    shared_ptr<int64_t> refundFee_ {};
    shared_ptr<RefundFeeData> refundFeeData_ {};
    shared_ptr<string> refunderAddress_ {};
    shared_ptr<string> refunderName_ {};
    shared_ptr<string> refunderTel_ {};
    shared_ptr<string> refunderZipCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> returnGoodLogisticsStatus_ {};
    shared_ptr<string> sellerAgreeMsg_ {};
    shared_ptr<string> sellerRefuseAgreementMessage_ {};
    shared_ptr<string> sellerRefuseReason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
