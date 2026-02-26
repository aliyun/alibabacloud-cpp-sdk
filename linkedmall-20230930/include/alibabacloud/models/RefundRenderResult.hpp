// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDRENDERRESULT_HPP_
#define ALIBABACLOUD_MODELS_REFUNDRENDERRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DistributionMaxRefundFee.hpp>
#include <vector>
#include <alibabacloud/models/RefundReason.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class RefundRenderResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundRenderResult& obj) { 
      DARABONBA_PTR_TO_JSON(bizClaimType, bizClaimType_);
      DARABONBA_PTR_TO_JSON(maxRefundFeeData, maxRefundFeeData_);
      DARABONBA_PTR_TO_JSON(orderLineId, orderLineId_);
      DARABONBA_PTR_TO_JSON(refundReasonList, refundReasonList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RefundRenderResult& obj) { 
      DARABONBA_PTR_FROM_JSON(bizClaimType, bizClaimType_);
      DARABONBA_PTR_FROM_JSON(maxRefundFeeData, maxRefundFeeData_);
      DARABONBA_PTR_FROM_JSON(orderLineId, orderLineId_);
      DARABONBA_PTR_FROM_JSON(refundReasonList, refundReasonList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RefundRenderResult() = default ;
    RefundRenderResult(const RefundRenderResult &) = default ;
    RefundRenderResult(RefundRenderResult &&) = default ;
    RefundRenderResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundRenderResult() = default ;
    RefundRenderResult& operator=(const RefundRenderResult &) = default ;
    RefundRenderResult& operator=(RefundRenderResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizClaimType_ == nullptr
        && this->maxRefundFeeData_ == nullptr && this->orderLineId_ == nullptr && this->refundReasonList_ == nullptr && this->requestId_ == nullptr; };
    // bizClaimType Field Functions 
    bool hasBizClaimType() const { return this->bizClaimType_ != nullptr;};
    void deleteBizClaimType() { this->bizClaimType_ = nullptr;};
    inline int32_t getBizClaimType() const { DARABONBA_PTR_GET_DEFAULT(bizClaimType_, 0) };
    inline RefundRenderResult& setBizClaimType(int32_t bizClaimType) { DARABONBA_PTR_SET_VALUE(bizClaimType_, bizClaimType) };


    // maxRefundFeeData Field Functions 
    bool hasMaxRefundFeeData() const { return this->maxRefundFeeData_ != nullptr;};
    void deleteMaxRefundFeeData() { this->maxRefundFeeData_ = nullptr;};
    inline const DistributionMaxRefundFee & getMaxRefundFeeData() const { DARABONBA_PTR_GET_CONST(maxRefundFeeData_, DistributionMaxRefundFee) };
    inline DistributionMaxRefundFee getMaxRefundFeeData() { DARABONBA_PTR_GET(maxRefundFeeData_, DistributionMaxRefundFee) };
    inline RefundRenderResult& setMaxRefundFeeData(const DistributionMaxRefundFee & maxRefundFeeData) { DARABONBA_PTR_SET_VALUE(maxRefundFeeData_, maxRefundFeeData) };
    inline RefundRenderResult& setMaxRefundFeeData(DistributionMaxRefundFee && maxRefundFeeData) { DARABONBA_PTR_SET_RVALUE(maxRefundFeeData_, maxRefundFeeData) };


    // orderLineId Field Functions 
    bool hasOrderLineId() const { return this->orderLineId_ != nullptr;};
    void deleteOrderLineId() { this->orderLineId_ = nullptr;};
    inline string getOrderLineId() const { DARABONBA_PTR_GET_DEFAULT(orderLineId_, "") };
    inline RefundRenderResult& setOrderLineId(string orderLineId) { DARABONBA_PTR_SET_VALUE(orderLineId_, orderLineId) };


    // refundReasonList Field Functions 
    bool hasRefundReasonList() const { return this->refundReasonList_ != nullptr;};
    void deleteRefundReasonList() { this->refundReasonList_ = nullptr;};
    inline const vector<RefundReason> & getRefundReasonList() const { DARABONBA_PTR_GET_CONST(refundReasonList_, vector<RefundReason>) };
    inline vector<RefundReason> getRefundReasonList() { DARABONBA_PTR_GET(refundReasonList_, vector<RefundReason>) };
    inline RefundRenderResult& setRefundReasonList(const vector<RefundReason> & refundReasonList) { DARABONBA_PTR_SET_VALUE(refundReasonList_, refundReasonList) };
    inline RefundRenderResult& setRefundReasonList(vector<RefundReason> && refundReasonList) { DARABONBA_PTR_SET_RVALUE(refundReasonList_, refundReasonList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefundRenderResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> bizClaimType_ {};
    shared_ptr<DistributionMaxRefundFee> maxRefundFeeData_ {};
    shared_ptr<string> orderLineId_ {};
    shared_ptr<vector<RefundReason>> refundReasonList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
