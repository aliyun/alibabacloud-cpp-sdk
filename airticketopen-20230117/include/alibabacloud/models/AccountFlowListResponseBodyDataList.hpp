// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCOUNTFLOWLISTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_ACCOUNTFLOWLISTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class AccountFlowListResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AccountFlowListResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(after_available_amount, afterAvailableAmount_);
      DARABONBA_PTR_TO_JSON(before_available_amount, beforeAvailableAmount_);
      DARABONBA_PTR_TO_JSON(change_order_num, changeOrderNum_);
      DARABONBA_PTR_TO_JSON(flow_id, flowId_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_TO_JSON(op_amount, opAmount_);
      DARABONBA_PTR_TO_JSON(op_type, opType_);
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      DARABONBA_PTR_TO_JSON(order_type, orderType_);
      DARABONBA_PTR_TO_JSON(out_order_num, outOrderNum_);
      DARABONBA_PTR_TO_JSON(refund_order_num, refundOrderNum_);
    };
    friend void from_json(const Darabonba::Json& j, AccountFlowListResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(after_available_amount, afterAvailableAmount_);
      DARABONBA_PTR_FROM_JSON(before_available_amount, beforeAvailableAmount_);
      DARABONBA_PTR_FROM_JSON(change_order_num, changeOrderNum_);
      DARABONBA_PTR_FROM_JSON(flow_id, flowId_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(op_amount, opAmount_);
      DARABONBA_PTR_FROM_JSON(op_type, opType_);
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      DARABONBA_PTR_FROM_JSON(order_type, orderType_);
      DARABONBA_PTR_FROM_JSON(out_order_num, outOrderNum_);
      DARABONBA_PTR_FROM_JSON(refund_order_num, refundOrderNum_);
    };
    AccountFlowListResponseBodyDataList() = default ;
    AccountFlowListResponseBodyDataList(const AccountFlowListResponseBodyDataList &) = default ;
    AccountFlowListResponseBodyDataList(AccountFlowListResponseBodyDataList &&) = default ;
    AccountFlowListResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AccountFlowListResponseBodyDataList() = default ;
    AccountFlowListResponseBodyDataList& operator=(const AccountFlowListResponseBodyDataList &) = default ;
    AccountFlowListResponseBodyDataList& operator=(AccountFlowListResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->afterAvailableAmount_ == nullptr
        && return this->beforeAvailableAmount_ == nullptr && return this->changeOrderNum_ == nullptr && return this->flowId_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->opAmount_ == nullptr && return this->opType_ == nullptr && return this->orderNum_ == nullptr && return this->orderType_ == nullptr && return this->outOrderNum_ == nullptr
        && return this->refundOrderNum_ == nullptr; };
    // afterAvailableAmount Field Functions 
    bool hasAfterAvailableAmount() const { return this->afterAvailableAmount_ != nullptr;};
    void deleteAfterAvailableAmount() { this->afterAvailableAmount_ = nullptr;};
    inline double afterAvailableAmount() const { DARABONBA_PTR_GET_DEFAULT(afterAvailableAmount_, 0.0) };
    inline AccountFlowListResponseBodyDataList& setAfterAvailableAmount(double afterAvailableAmount) { DARABONBA_PTR_SET_VALUE(afterAvailableAmount_, afterAvailableAmount) };


    // beforeAvailableAmount Field Functions 
    bool hasBeforeAvailableAmount() const { return this->beforeAvailableAmount_ != nullptr;};
    void deleteBeforeAvailableAmount() { this->beforeAvailableAmount_ = nullptr;};
    inline double beforeAvailableAmount() const { DARABONBA_PTR_GET_DEFAULT(beforeAvailableAmount_, 0.0) };
    inline AccountFlowListResponseBodyDataList& setBeforeAvailableAmount(double beforeAvailableAmount) { DARABONBA_PTR_SET_VALUE(beforeAvailableAmount_, beforeAvailableAmount) };


    // changeOrderNum Field Functions 
    bool hasChangeOrderNum() const { return this->changeOrderNum_ != nullptr;};
    void deleteChangeOrderNum() { this->changeOrderNum_ = nullptr;};
    inline int64_t changeOrderNum() const { DARABONBA_PTR_GET_DEFAULT(changeOrderNum_, 0L) };
    inline AccountFlowListResponseBodyDataList& setChangeOrderNum(int64_t changeOrderNum) { DARABONBA_PTR_SET_VALUE(changeOrderNum_, changeOrderNum) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline int64_t flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, 0L) };
    inline AccountFlowListResponseBodyDataList& setFlowId(int64_t flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline AccountFlowListResponseBodyDataList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline AccountFlowListResponseBodyDataList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // opAmount Field Functions 
    bool hasOpAmount() const { return this->opAmount_ != nullptr;};
    void deleteOpAmount() { this->opAmount_ = nullptr;};
    inline double opAmount() const { DARABONBA_PTR_GET_DEFAULT(opAmount_, 0.0) };
    inline AccountFlowListResponseBodyDataList& setOpAmount(double opAmount) { DARABONBA_PTR_SET_VALUE(opAmount_, opAmount) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline int32_t opType() const { DARABONBA_PTR_GET_DEFAULT(opType_, 0) };
    inline AccountFlowListResponseBodyDataList& setOpType(int32_t opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline AccountFlowListResponseBodyDataList& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline int32_t orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
    inline AccountFlowListResponseBodyDataList& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // outOrderNum Field Functions 
    bool hasOutOrderNum() const { return this->outOrderNum_ != nullptr;};
    void deleteOutOrderNum() { this->outOrderNum_ = nullptr;};
    inline string outOrderNum() const { DARABONBA_PTR_GET_DEFAULT(outOrderNum_, "") };
    inline AccountFlowListResponseBodyDataList& setOutOrderNum(string outOrderNum) { DARABONBA_PTR_SET_VALUE(outOrderNum_, outOrderNum) };


    // refundOrderNum Field Functions 
    bool hasRefundOrderNum() const { return this->refundOrderNum_ != nullptr;};
    void deleteRefundOrderNum() { this->refundOrderNum_ = nullptr;};
    inline int64_t refundOrderNum() const { DARABONBA_PTR_GET_DEFAULT(refundOrderNum_, 0L) };
    inline AccountFlowListResponseBodyDataList& setRefundOrderNum(int64_t refundOrderNum) { DARABONBA_PTR_SET_VALUE(refundOrderNum_, refundOrderNum) };


  protected:
    std::shared_ptr<double> afterAvailableAmount_ = nullptr;
    std::shared_ptr<double> beforeAvailableAmount_ = nullptr;
    std::shared_ptr<int64_t> changeOrderNum_ = nullptr;
    std::shared_ptr<int64_t> flowId_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<double> opAmount_ = nullptr;
    std::shared_ptr<int32_t> opType_ = nullptr;
    std::shared_ptr<int64_t> orderNum_ = nullptr;
    std::shared_ptr<int32_t> orderType_ = nullptr;
    std::shared_ptr<string> outOrderNum_ = nullptr;
    std::shared_ptr<int64_t> refundOrderNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
