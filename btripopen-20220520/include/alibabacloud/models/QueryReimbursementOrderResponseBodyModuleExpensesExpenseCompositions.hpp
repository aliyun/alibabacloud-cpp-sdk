// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREIMBURSEMENTORDERRESPONSEBODYMODULEEXPENSESEXPENSECOMPOSITIONS_HPP_
#define ALIBABACLOUD_MODELS_QUERYREIMBURSEMENTORDERRESPONSEBODYMODULEEXPENSESEXPENSECOMPOSITIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions& obj) { 
      DARABONBA_PTR_TO_JSON(bill_settlement_id, billSettlementId_);
      DARABONBA_PTR_TO_JSON(capital_direction, capitalDirection_);
      DARABONBA_PTR_TO_JSON(fee_type, feeType_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(remind_tag_list, remindTagList_);
      DARABONBA_PTR_TO_JSON(settlement_amount, settlementAmount_);
      DARABONBA_PTR_TO_JSON(settlement_time, settlementTime_);
      DARABONBA_PTR_TO_JSON(voucher_type, voucherType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions& obj) { 
      DARABONBA_PTR_FROM_JSON(bill_settlement_id, billSettlementId_);
      DARABONBA_PTR_FROM_JSON(capital_direction, capitalDirection_);
      DARABONBA_PTR_FROM_JSON(fee_type, feeType_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(remind_tag_list, remindTagList_);
      DARABONBA_PTR_FROM_JSON(settlement_amount, settlementAmount_);
      DARABONBA_PTR_FROM_JSON(settlement_time, settlementTime_);
      DARABONBA_PTR_FROM_JSON(voucher_type, voucherType_);
    };
    QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions() = default ;
    QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions(const QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions &) = default ;
    QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions(QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions &&) = default ;
    QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions() = default ;
    QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions& operator=(const QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions &) = default ;
    QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions& operator=(QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billSettlementId_ != nullptr
        && this->capitalDirection_ != nullptr && this->feeType_ != nullptr && this->orderId_ != nullptr && this->remark_ != nullptr && this->remindTagList_ != nullptr
        && this->settlementAmount_ != nullptr && this->settlementTime_ != nullptr && this->voucherType_ != nullptr; };
    // billSettlementId Field Functions 
    bool hasBillSettlementId() const { return this->billSettlementId_ != nullptr;};
    void deleteBillSettlementId() { this->billSettlementId_ = nullptr;};
    inline int64_t billSettlementId() const { DARABONBA_PTR_GET_DEFAULT(billSettlementId_, 0L) };
    inline QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions& setBillSettlementId(int64_t billSettlementId) { DARABONBA_PTR_SET_VALUE(billSettlementId_, billSettlementId) };


    // capitalDirection Field Functions 
    bool hasCapitalDirection() const { return this->capitalDirection_ != nullptr;};
    void deleteCapitalDirection() { this->capitalDirection_ = nullptr;};
    inline string capitalDirection() const { DARABONBA_PTR_GET_DEFAULT(capitalDirection_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions& setCapitalDirection(string capitalDirection) { DARABONBA_PTR_SET_VALUE(capitalDirection_, capitalDirection) };


    // feeType Field Functions 
    bool hasFeeType() const { return this->feeType_ != nullptr;};
    void deleteFeeType() { this->feeType_ = nullptr;};
    inline string feeType() const { DARABONBA_PTR_GET_DEFAULT(feeType_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions& setFeeType(string feeType) { DARABONBA_PTR_SET_VALUE(feeType_, feeType) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // remindTagList Field Functions 
    bool hasRemindTagList() const { return this->remindTagList_ != nullptr;};
    void deleteRemindTagList() { this->remindTagList_ = nullptr;};
    inline const vector<string> & remindTagList() const { DARABONBA_PTR_GET_CONST(remindTagList_, vector<string>) };
    inline vector<string> remindTagList() { DARABONBA_PTR_GET(remindTagList_, vector<string>) };
    inline QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions& setRemindTagList(const vector<string> & remindTagList) { DARABONBA_PTR_SET_VALUE(remindTagList_, remindTagList) };
    inline QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions& setRemindTagList(vector<string> && remindTagList) { DARABONBA_PTR_SET_RVALUE(remindTagList_, remindTagList) };


    // settlementAmount Field Functions 
    bool hasSettlementAmount() const { return this->settlementAmount_ != nullptr;};
    void deleteSettlementAmount() { this->settlementAmount_ = nullptr;};
    inline string settlementAmount() const { DARABONBA_PTR_GET_DEFAULT(settlementAmount_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions& setSettlementAmount(string settlementAmount) { DARABONBA_PTR_SET_VALUE(settlementAmount_, settlementAmount) };


    // settlementTime Field Functions 
    bool hasSettlementTime() const { return this->settlementTime_ != nullptr;};
    void deleteSettlementTime() { this->settlementTime_ = nullptr;};
    inline string settlementTime() const { DARABONBA_PTR_GET_DEFAULT(settlementTime_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions& setSettlementTime(string settlementTime) { DARABONBA_PTR_SET_VALUE(settlementTime_, settlementTime) };


    // voucherType Field Functions 
    bool hasVoucherType() const { return this->voucherType_ != nullptr;};
    void deleteVoucherType() { this->voucherType_ = nullptr;};
    inline int32_t voucherType() const { DARABONBA_PTR_GET_DEFAULT(voucherType_, 0) };
    inline QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions& setVoucherType(int32_t voucherType) { DARABONBA_PTR_SET_VALUE(voucherType_, voucherType) };


  protected:
    std::shared_ptr<int64_t> billSettlementId_ = nullptr;
    std::shared_ptr<string> capitalDirection_ = nullptr;
    std::shared_ptr<string> feeType_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<vector<string>> remindTagList_ = nullptr;
    std::shared_ptr<string> settlementAmount_ = nullptr;
    std::shared_ptr<string> settlementTime_ = nullptr;
    std::shared_ptr<int32_t> voucherType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
