// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREIMBURSEMENTORDERRESPONSEBODYMODULEEXPENSES_HPP_
#define ALIBABACLOUD_MODELS_QUERYREIMBURSEMENTORDERRESPONSEBODYMODULEEXPENSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions.hpp>
#include <alibabacloud/models/QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class QueryReimbursementOrderResponseBodyModuleExpenses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReimbursementOrderResponseBodyModuleExpenses& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(currency, currency_);
      DARABONBA_PTR_TO_JSON(expense_city, expenseCity_);
      DARABONBA_PTR_TO_JSON(expense_compositions, expenseCompositions_);
      DARABONBA_PTR_TO_JSON(expense_time, expenseTime_);
      DARABONBA_PTR_TO_JSON(expense_type, expenseType_);
      DARABONBA_PTR_TO_JSON(expense_type_code, expenseTypeCode_);
      DARABONBA_PTR_TO_JSON(invoice_infos, invoiceInfos_);
      DARABONBA_PTR_TO_JSON(reimb_expense_id, reimbExpenseId_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(settlement_type, settlementType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReimbursementOrderResponseBodyModuleExpenses& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(currency, currency_);
      DARABONBA_PTR_FROM_JSON(expense_city, expenseCity_);
      DARABONBA_PTR_FROM_JSON(expense_compositions, expenseCompositions_);
      DARABONBA_PTR_FROM_JSON(expense_time, expenseTime_);
      DARABONBA_PTR_FROM_JSON(expense_type, expenseType_);
      DARABONBA_PTR_FROM_JSON(expense_type_code, expenseTypeCode_);
      DARABONBA_PTR_FROM_JSON(invoice_infos, invoiceInfos_);
      DARABONBA_PTR_FROM_JSON(reimb_expense_id, reimbExpenseId_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(settlement_type, settlementType_);
    };
    QueryReimbursementOrderResponseBodyModuleExpenses() = default ;
    QueryReimbursementOrderResponseBodyModuleExpenses(const QueryReimbursementOrderResponseBodyModuleExpenses &) = default ;
    QueryReimbursementOrderResponseBodyModuleExpenses(QueryReimbursementOrderResponseBodyModuleExpenses &&) = default ;
    QueryReimbursementOrderResponseBodyModuleExpenses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReimbursementOrderResponseBodyModuleExpenses() = default ;
    QueryReimbursementOrderResponseBodyModuleExpenses& operator=(const QueryReimbursementOrderResponseBodyModuleExpenses &) = default ;
    QueryReimbursementOrderResponseBodyModuleExpenses& operator=(QueryReimbursementOrderResponseBodyModuleExpenses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->currency_ != nullptr && this->expenseCity_ != nullptr && this->expenseCompositions_ != nullptr && this->expenseTime_ != nullptr && this->expenseType_ != nullptr
        && this->expenseTypeCode_ != nullptr && this->invoiceInfos_ != nullptr && this->reimbExpenseId_ != nullptr && this->remark_ != nullptr && this->settlementType_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpenses& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpenses& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // expenseCity Field Functions 
    bool hasExpenseCity() const { return this->expenseCity_ != nullptr;};
    void deleteExpenseCity() { this->expenseCity_ = nullptr;};
    inline string expenseCity() const { DARABONBA_PTR_GET_DEFAULT(expenseCity_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpenses& setExpenseCity(string expenseCity) { DARABONBA_PTR_SET_VALUE(expenseCity_, expenseCity) };


    // expenseCompositions Field Functions 
    bool hasExpenseCompositions() const { return this->expenseCompositions_ != nullptr;};
    void deleteExpenseCompositions() { this->expenseCompositions_ = nullptr;};
    inline const vector<Models::QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions> & expenseCompositions() const { DARABONBA_PTR_GET_CONST(expenseCompositions_, vector<Models::QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions>) };
    inline vector<Models::QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions> expenseCompositions() { DARABONBA_PTR_GET(expenseCompositions_, vector<Models::QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions>) };
    inline QueryReimbursementOrderResponseBodyModuleExpenses& setExpenseCompositions(const vector<Models::QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions> & expenseCompositions) { DARABONBA_PTR_SET_VALUE(expenseCompositions_, expenseCompositions) };
    inline QueryReimbursementOrderResponseBodyModuleExpenses& setExpenseCompositions(vector<Models::QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions> && expenseCompositions) { DARABONBA_PTR_SET_RVALUE(expenseCompositions_, expenseCompositions) };


    // expenseTime Field Functions 
    bool hasExpenseTime() const { return this->expenseTime_ != nullptr;};
    void deleteExpenseTime() { this->expenseTime_ = nullptr;};
    inline string expenseTime() const { DARABONBA_PTR_GET_DEFAULT(expenseTime_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpenses& setExpenseTime(string expenseTime) { DARABONBA_PTR_SET_VALUE(expenseTime_, expenseTime) };


    // expenseType Field Functions 
    bool hasExpenseType() const { return this->expenseType_ != nullptr;};
    void deleteExpenseType() { this->expenseType_ = nullptr;};
    inline string expenseType() const { DARABONBA_PTR_GET_DEFAULT(expenseType_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpenses& setExpenseType(string expenseType) { DARABONBA_PTR_SET_VALUE(expenseType_, expenseType) };


    // expenseTypeCode Field Functions 
    bool hasExpenseTypeCode() const { return this->expenseTypeCode_ != nullptr;};
    void deleteExpenseTypeCode() { this->expenseTypeCode_ = nullptr;};
    inline string expenseTypeCode() const { DARABONBA_PTR_GET_DEFAULT(expenseTypeCode_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpenses& setExpenseTypeCode(string expenseTypeCode) { DARABONBA_PTR_SET_VALUE(expenseTypeCode_, expenseTypeCode) };


    // invoiceInfos Field Functions 
    bool hasInvoiceInfos() const { return this->invoiceInfos_ != nullptr;};
    void deleteInvoiceInfos() { this->invoiceInfos_ = nullptr;};
    inline const vector<Models::QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos> & invoiceInfos() const { DARABONBA_PTR_GET_CONST(invoiceInfos_, vector<Models::QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos>) };
    inline vector<Models::QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos> invoiceInfos() { DARABONBA_PTR_GET(invoiceInfos_, vector<Models::QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos>) };
    inline QueryReimbursementOrderResponseBodyModuleExpenses& setInvoiceInfos(const vector<Models::QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos> & invoiceInfos) { DARABONBA_PTR_SET_VALUE(invoiceInfos_, invoiceInfos) };
    inline QueryReimbursementOrderResponseBodyModuleExpenses& setInvoiceInfos(vector<Models::QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos> && invoiceInfos) { DARABONBA_PTR_SET_RVALUE(invoiceInfos_, invoiceInfos) };


    // reimbExpenseId Field Functions 
    bool hasReimbExpenseId() const { return this->reimbExpenseId_ != nullptr;};
    void deleteReimbExpenseId() { this->reimbExpenseId_ = nullptr;};
    inline int64_t reimbExpenseId() const { DARABONBA_PTR_GET_DEFAULT(reimbExpenseId_, 0L) };
    inline QueryReimbursementOrderResponseBodyModuleExpenses& setReimbExpenseId(int64_t reimbExpenseId) { DARABONBA_PTR_SET_VALUE(reimbExpenseId_, reimbExpenseId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpenses& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // settlementType Field Functions 
    bool hasSettlementType() const { return this->settlementType_ != nullptr;};
    void deleteSettlementType() { this->settlementType_ = nullptr;};
    inline string settlementType() const { DARABONBA_PTR_GET_DEFAULT(settlementType_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpenses& setSettlementType(string settlementType) { DARABONBA_PTR_SET_VALUE(settlementType_, settlementType) };


  protected:
    std::shared_ptr<string> amount_ = nullptr;
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<string> expenseCity_ = nullptr;
    std::shared_ptr<vector<Models::QueryReimbursementOrderResponseBodyModuleExpensesExpenseCompositions>> expenseCompositions_ = nullptr;
    std::shared_ptr<string> expenseTime_ = nullptr;
    std::shared_ptr<string> expenseType_ = nullptr;
    std::shared_ptr<string> expenseTypeCode_ = nullptr;
    std::shared_ptr<vector<Models::QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos>> invoiceInfos_ = nullptr;
    std::shared_ptr<int64_t> reimbExpenseId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> settlementType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
