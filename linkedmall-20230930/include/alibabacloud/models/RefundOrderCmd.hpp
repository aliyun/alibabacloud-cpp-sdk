// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDORDERCMD_HPP_
#define ALIBABACLOUD_MODELS_REFUNDORDERCMD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LeavePictureList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class RefundOrderCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundOrderCmd& obj) { 
      DARABONBA_PTR_TO_JSON(applyReasonTextId, applyReasonTextId_);
      DARABONBA_PTR_TO_JSON(applyReasonTips, applyReasonTips_);
      DARABONBA_PTR_TO_JSON(applyRefundCount, applyRefundCount_);
      DARABONBA_PTR_TO_JSON(applyRefundFee, applyRefundFee_);
      DARABONBA_PTR_TO_JSON(bizClaimType, bizClaimType_);
      DARABONBA_PTR_TO_JSON(goodsStatus, goodsStatus_);
      DARABONBA_PTR_TO_JSON(leaveMessage, leaveMessage_);
      DARABONBA_PTR_TO_JSON(leavePictureLists, leavePictureLists_);
      DARABONBA_PTR_TO_JSON(orderLineId, orderLineId_);
    };
    friend void from_json(const Darabonba::Json& j, RefundOrderCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(applyReasonTextId, applyReasonTextId_);
      DARABONBA_PTR_FROM_JSON(applyReasonTips, applyReasonTips_);
      DARABONBA_PTR_FROM_JSON(applyRefundCount, applyRefundCount_);
      DARABONBA_PTR_FROM_JSON(applyRefundFee, applyRefundFee_);
      DARABONBA_PTR_FROM_JSON(bizClaimType, bizClaimType_);
      DARABONBA_PTR_FROM_JSON(goodsStatus, goodsStatus_);
      DARABONBA_PTR_FROM_JSON(leaveMessage, leaveMessage_);
      DARABONBA_PTR_FROM_JSON(leavePictureLists, leavePictureLists_);
      DARABONBA_PTR_FROM_JSON(orderLineId, orderLineId_);
    };
    RefundOrderCmd() = default ;
    RefundOrderCmd(const RefundOrderCmd &) = default ;
    RefundOrderCmd(RefundOrderCmd &&) = default ;
    RefundOrderCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundOrderCmd() = default ;
    RefundOrderCmd& operator=(const RefundOrderCmd &) = default ;
    RefundOrderCmd& operator=(RefundOrderCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applyReasonTextId_ == nullptr
        && this->applyReasonTips_ == nullptr && this->applyRefundCount_ == nullptr && this->applyRefundFee_ == nullptr && this->bizClaimType_ == nullptr && this->goodsStatus_ == nullptr
        && this->leaveMessage_ == nullptr && this->leavePictureLists_ == nullptr && this->orderLineId_ == nullptr; };
    // applyReasonTextId Field Functions 
    bool hasApplyReasonTextId() const { return this->applyReasonTextId_ != nullptr;};
    void deleteApplyReasonTextId() { this->applyReasonTextId_ = nullptr;};
    inline int64_t getApplyReasonTextId() const { DARABONBA_PTR_GET_DEFAULT(applyReasonTextId_, 0L) };
    inline RefundOrderCmd& setApplyReasonTextId(int64_t applyReasonTextId) { DARABONBA_PTR_SET_VALUE(applyReasonTextId_, applyReasonTextId) };


    // applyReasonTips Field Functions 
    bool hasApplyReasonTips() const { return this->applyReasonTips_ != nullptr;};
    void deleteApplyReasonTips() { this->applyReasonTips_ = nullptr;};
    inline string getApplyReasonTips() const { DARABONBA_PTR_GET_DEFAULT(applyReasonTips_, "") };
    inline RefundOrderCmd& setApplyReasonTips(string applyReasonTips) { DARABONBA_PTR_SET_VALUE(applyReasonTips_, applyReasonTips) };


    // applyRefundCount Field Functions 
    bool hasApplyRefundCount() const { return this->applyRefundCount_ != nullptr;};
    void deleteApplyRefundCount() { this->applyRefundCount_ = nullptr;};
    inline int32_t getApplyRefundCount() const { DARABONBA_PTR_GET_DEFAULT(applyRefundCount_, 0) };
    inline RefundOrderCmd& setApplyRefundCount(int32_t applyRefundCount) { DARABONBA_PTR_SET_VALUE(applyRefundCount_, applyRefundCount) };


    // applyRefundFee Field Functions 
    bool hasApplyRefundFee() const { return this->applyRefundFee_ != nullptr;};
    void deleteApplyRefundFee() { this->applyRefundFee_ = nullptr;};
    inline int64_t getApplyRefundFee() const { DARABONBA_PTR_GET_DEFAULT(applyRefundFee_, 0L) };
    inline RefundOrderCmd& setApplyRefundFee(int64_t applyRefundFee) { DARABONBA_PTR_SET_VALUE(applyRefundFee_, applyRefundFee) };


    // bizClaimType Field Functions 
    bool hasBizClaimType() const { return this->bizClaimType_ != nullptr;};
    void deleteBizClaimType() { this->bizClaimType_ = nullptr;};
    inline int32_t getBizClaimType() const { DARABONBA_PTR_GET_DEFAULT(bizClaimType_, 0) };
    inline RefundOrderCmd& setBizClaimType(int32_t bizClaimType) { DARABONBA_PTR_SET_VALUE(bizClaimType_, bizClaimType) };


    // goodsStatus Field Functions 
    bool hasGoodsStatus() const { return this->goodsStatus_ != nullptr;};
    void deleteGoodsStatus() { this->goodsStatus_ = nullptr;};
    inline int32_t getGoodsStatus() const { DARABONBA_PTR_GET_DEFAULT(goodsStatus_, 0) };
    inline RefundOrderCmd& setGoodsStatus(int32_t goodsStatus) { DARABONBA_PTR_SET_VALUE(goodsStatus_, goodsStatus) };


    // leaveMessage Field Functions 
    bool hasLeaveMessage() const { return this->leaveMessage_ != nullptr;};
    void deleteLeaveMessage() { this->leaveMessage_ = nullptr;};
    inline string getLeaveMessage() const { DARABONBA_PTR_GET_DEFAULT(leaveMessage_, "") };
    inline RefundOrderCmd& setLeaveMessage(string leaveMessage) { DARABONBA_PTR_SET_VALUE(leaveMessage_, leaveMessage) };


    // leavePictureLists Field Functions 
    bool hasLeavePictureLists() const { return this->leavePictureLists_ != nullptr;};
    void deleteLeavePictureLists() { this->leavePictureLists_ = nullptr;};
    inline const vector<LeavePictureList> & getLeavePictureLists() const { DARABONBA_PTR_GET_CONST(leavePictureLists_, vector<LeavePictureList>) };
    inline vector<LeavePictureList> getLeavePictureLists() { DARABONBA_PTR_GET(leavePictureLists_, vector<LeavePictureList>) };
    inline RefundOrderCmd& setLeavePictureLists(const vector<LeavePictureList> & leavePictureLists) { DARABONBA_PTR_SET_VALUE(leavePictureLists_, leavePictureLists) };
    inline RefundOrderCmd& setLeavePictureLists(vector<LeavePictureList> && leavePictureLists) { DARABONBA_PTR_SET_RVALUE(leavePictureLists_, leavePictureLists) };


    // orderLineId Field Functions 
    bool hasOrderLineId() const { return this->orderLineId_ != nullptr;};
    void deleteOrderLineId() { this->orderLineId_ = nullptr;};
    inline string getOrderLineId() const { DARABONBA_PTR_GET_DEFAULT(orderLineId_, "") };
    inline RefundOrderCmd& setOrderLineId(string orderLineId) { DARABONBA_PTR_SET_VALUE(orderLineId_, orderLineId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> applyReasonTextId_ {};
    shared_ptr<string> applyReasonTips_ {};
    // This parameter is required.
    shared_ptr<int32_t> applyRefundCount_ {};
    // This parameter is required.
    shared_ptr<int64_t> applyRefundFee_ {};
    // This parameter is required.
    shared_ptr<int32_t> bizClaimType_ {};
    // This parameter is required.
    shared_ptr<int32_t> goodsStatus_ {};
    shared_ptr<string> leaveMessage_ {};
    shared_ptr<vector<LeavePictureList>> leavePictureLists_ {};
    // This parameter is required.
    shared_ptr<string> orderLineId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
