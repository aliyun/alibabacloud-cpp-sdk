// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREIMBURSEMENTORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYREIMBURSEMENTORDERRESPONSEBODY_HPP_
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
  class QueryReimbursementOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReimbursementOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReimbursementOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    QueryReimbursementOrderResponseBody() = default ;
    QueryReimbursementOrderResponseBody(const QueryReimbursementOrderResponseBody &) = default ;
    QueryReimbursementOrderResponseBody(QueryReimbursementOrderResponseBody &&) = default ;
    QueryReimbursementOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReimbursementOrderResponseBody() = default ;
    QueryReimbursementOrderResponseBody& operator=(const QueryReimbursementOrderResponseBody &) = default ;
    QueryReimbursementOrderResponseBody& operator=(QueryReimbursementOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(company_amount, companyAmount_);
        DARABONBA_PTR_TO_JSON(company_pay_amount, companyPayAmount_);
        DARABONBA_PTR_TO_JSON(corp_id, corpId_);
        DARABONBA_PTR_TO_JSON(cost_center_code, costCenterCode_);
        DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
        DARABONBA_PTR_TO_JSON(expenses, expenses_);
        DARABONBA_PTR_TO_JSON(expenses_cover_dept_id, expensesCoverDeptId_);
        DARABONBA_PTR_TO_JSON(expenses_cover_dept_name, expensesCoverDeptName_);
        DARABONBA_PTR_TO_JSON(expenses_cover_invoice_title, expensesCoverInvoiceTitle_);
        DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_TO_JSON(is_deleted, isDeleted_);
        DARABONBA_PTR_TO_JSON(itineraries, itineraries_);
        DARABONBA_PTR_TO_JSON(payment_finish_time, paymentFinishTime_);
        DARABONBA_PTR_TO_JSON(payment_infos, paymentInfos_);
        DARABONBA_PTR_TO_JSON(personal_amount, personalAmount_);
        DARABONBA_PTR_TO_JSON(process_end_time, processEndTime_);
        DARABONBA_PTR_TO_JSON(project_code, projectCode_);
        DARABONBA_PTR_TO_JSON(project_name, projectName_);
        DARABONBA_PTR_TO_JSON(reason, reason_);
        DARABONBA_PTR_TO_JSON(reimbursement_no, reimbursementNo_);
        DARABONBA_PTR_TO_JSON(remark, remark_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(travel_third_apply_id, travelThirdApplyId_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
        DARABONBA_PTR_TO_JSON(user_name, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(company_amount, companyAmount_);
        DARABONBA_PTR_FROM_JSON(company_pay_amount, companyPayAmount_);
        DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
        DARABONBA_PTR_FROM_JSON(cost_center_code, costCenterCode_);
        DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
        DARABONBA_PTR_FROM_JSON(expenses, expenses_);
        DARABONBA_PTR_FROM_JSON(expenses_cover_dept_id, expensesCoverDeptId_);
        DARABONBA_PTR_FROM_JSON(expenses_cover_dept_name, expensesCoverDeptName_);
        DARABONBA_PTR_FROM_JSON(expenses_cover_invoice_title, expensesCoverInvoiceTitle_);
        DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(is_deleted, isDeleted_);
        DARABONBA_PTR_FROM_JSON(itineraries, itineraries_);
        DARABONBA_PTR_FROM_JSON(payment_finish_time, paymentFinishTime_);
        DARABONBA_PTR_FROM_JSON(payment_infos, paymentInfos_);
        DARABONBA_PTR_FROM_JSON(personal_amount, personalAmount_);
        DARABONBA_PTR_FROM_JSON(process_end_time, processEndTime_);
        DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
        DARABONBA_PTR_FROM_JSON(project_name, projectName_);
        DARABONBA_PTR_FROM_JSON(reason, reason_);
        DARABONBA_PTR_FROM_JSON(reimbursement_no, reimbursementNo_);
        DARABONBA_PTR_FROM_JSON(remark, remark_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(travel_third_apply_id, travelThirdApplyId_);
        DARABONBA_PTR_FROM_JSON(user_id, userId_);
        DARABONBA_PTR_FROM_JSON(user_name, userName_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PaymentInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PaymentInfos& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(payee_account_number, payeeAccountNumber_);
          DARABONBA_PTR_TO_JSON(payee_user_id, payeeUserId_);
        };
        friend void from_json(const Darabonba::Json& j, PaymentInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(payee_account_number, payeeAccountNumber_);
          DARABONBA_PTR_FROM_JSON(payee_user_id, payeeUserId_);
        };
        PaymentInfos() = default ;
        PaymentInfos(const PaymentInfos &) = default ;
        PaymentInfos(PaymentInfos &&) = default ;
        PaymentInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PaymentInfos() = default ;
        PaymentInfos& operator=(const PaymentInfos &) = default ;
        PaymentInfos& operator=(PaymentInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->payeeAccountNumber_ == nullptr && this->payeeUserId_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
        inline PaymentInfos& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // payeeAccountNumber Field Functions 
        bool hasPayeeAccountNumber() const { return this->payeeAccountNumber_ != nullptr;};
        void deletePayeeAccountNumber() { this->payeeAccountNumber_ = nullptr;};
        inline string getPayeeAccountNumber() const { DARABONBA_PTR_GET_DEFAULT(payeeAccountNumber_, "") };
        inline PaymentInfos& setPayeeAccountNumber(string payeeAccountNumber) { DARABONBA_PTR_SET_VALUE(payeeAccountNumber_, payeeAccountNumber) };


        // payeeUserId Field Functions 
        bool hasPayeeUserId() const { return this->payeeUserId_ != nullptr;};
        void deletePayeeUserId() { this->payeeUserId_ = nullptr;};
        inline string getPayeeUserId() const { DARABONBA_PTR_GET_DEFAULT(payeeUserId_, "") };
        inline PaymentInfos& setPayeeUserId(string payeeUserId) { DARABONBA_PTR_SET_VALUE(payeeUserId_, payeeUserId) };


      protected:
        shared_ptr<string> amount_ {};
        shared_ptr<string> payeeAccountNumber_ {};
        shared_ptr<string> payeeUserId_ {};
      };

      class Itineraries : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Itineraries& obj) { 
          DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
          DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
          DARABONBA_PTR_TO_JSON(dep_city, depCity_);
          DARABONBA_PTR_TO_JSON(dep_date, depDate_);
          DARABONBA_PTR_TO_JSON(traffic_way, trafficWay_);
          DARABONBA_PTR_TO_JSON(trip_way, tripWay_);
        };
        friend void from_json(const Darabonba::Json& j, Itineraries& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
          DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
          DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
          DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
          DARABONBA_PTR_FROM_JSON(traffic_way, trafficWay_);
          DARABONBA_PTR_FROM_JSON(trip_way, tripWay_);
        };
        Itineraries() = default ;
        Itineraries(const Itineraries &) = default ;
        Itineraries(Itineraries &&) = default ;
        Itineraries(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Itineraries() = default ;
        Itineraries& operator=(const Itineraries &) = default ;
        Itineraries& operator=(Itineraries &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arrCity_ == nullptr
        && this->arrDate_ == nullptr && this->depCity_ == nullptr && this->depDate_ == nullptr && this->trafficWay_ == nullptr && this->tripWay_ == nullptr; };
        // arrCity Field Functions 
        bool hasArrCity() const { return this->arrCity_ != nullptr;};
        void deleteArrCity() { this->arrCity_ = nullptr;};
        inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
        inline Itineraries& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


        // arrDate Field Functions 
        bool hasArrDate() const { return this->arrDate_ != nullptr;};
        void deleteArrDate() { this->arrDate_ = nullptr;};
        inline string getArrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
        inline Itineraries& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


        // depCity Field Functions 
        bool hasDepCity() const { return this->depCity_ != nullptr;};
        void deleteDepCity() { this->depCity_ = nullptr;};
        inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
        inline Itineraries& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


        // depDate Field Functions 
        bool hasDepDate() const { return this->depDate_ != nullptr;};
        void deleteDepDate() { this->depDate_ = nullptr;};
        inline string getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
        inline Itineraries& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


        // trafficWay Field Functions 
        bool hasTrafficWay() const { return this->trafficWay_ != nullptr;};
        void deleteTrafficWay() { this->trafficWay_ = nullptr;};
        inline string getTrafficWay() const { DARABONBA_PTR_GET_DEFAULT(trafficWay_, "") };
        inline Itineraries& setTrafficWay(string trafficWay) { DARABONBA_PTR_SET_VALUE(trafficWay_, trafficWay) };


        // tripWay Field Functions 
        bool hasTripWay() const { return this->tripWay_ != nullptr;};
        void deleteTripWay() { this->tripWay_ = nullptr;};
        inline string getTripWay() const { DARABONBA_PTR_GET_DEFAULT(tripWay_, "") };
        inline Itineraries& setTripWay(string tripWay) { DARABONBA_PTR_SET_VALUE(tripWay_, tripWay) };


      protected:
        shared_ptr<string> arrCity_ {};
        shared_ptr<string> arrDate_ {};
        shared_ptr<string> depCity_ {};
        shared_ptr<string> depDate_ {};
        shared_ptr<string> trafficWay_ {};
        shared_ptr<string> tripWay_ {};
      };

      class Expenses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Expenses& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Expenses& obj) { 
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
        Expenses() = default ;
        Expenses(const Expenses &) = default ;
        Expenses(Expenses &&) = default ;
        Expenses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Expenses() = default ;
        Expenses& operator=(const Expenses &) = default ;
        Expenses& operator=(Expenses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InvoiceInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InvoiceInfos& obj) { 
            DARABONBA_PTR_TO_JSON(amount, amount_);
            DARABONBA_PTR_TO_JSON(invoice_code, invoiceCode_);
            DARABONBA_PTR_TO_JSON(invoice_data, invoiceData_);
            DARABONBA_PTR_TO_JSON(invoice_date, invoiceDate_);
            DARABONBA_PTR_TO_JSON(invoice_number, invoiceNumber_);
            DARABONBA_PTR_TO_JSON(invoice_type, invoiceType_);
          };
          friend void from_json(const Darabonba::Json& j, InvoiceInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(amount, amount_);
            DARABONBA_PTR_FROM_JSON(invoice_code, invoiceCode_);
            DARABONBA_PTR_FROM_JSON(invoice_data, invoiceData_);
            DARABONBA_PTR_FROM_JSON(invoice_date, invoiceDate_);
            DARABONBA_PTR_FROM_JSON(invoice_number, invoiceNumber_);
            DARABONBA_PTR_FROM_JSON(invoice_type, invoiceType_);
          };
          InvoiceInfos() = default ;
          InvoiceInfos(const InvoiceInfos &) = default ;
          InvoiceInfos(InvoiceInfos &&) = default ;
          InvoiceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InvoiceInfos() = default ;
          InvoiceInfos& operator=(const InvoiceInfos &) = default ;
          InvoiceInfos& operator=(InvoiceInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->amount_ == nullptr
        && this->invoiceCode_ == nullptr && this->invoiceData_ == nullptr && this->invoiceDate_ == nullptr && this->invoiceNumber_ == nullptr && this->invoiceType_ == nullptr; };
          // amount Field Functions 
          bool hasAmount() const { return this->amount_ != nullptr;};
          void deleteAmount() { this->amount_ = nullptr;};
          inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
          inline InvoiceInfos& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // invoiceCode Field Functions 
          bool hasInvoiceCode() const { return this->invoiceCode_ != nullptr;};
          void deleteInvoiceCode() { this->invoiceCode_ = nullptr;};
          inline string getInvoiceCode() const { DARABONBA_PTR_GET_DEFAULT(invoiceCode_, "") };
          inline InvoiceInfos& setInvoiceCode(string invoiceCode) { DARABONBA_PTR_SET_VALUE(invoiceCode_, invoiceCode) };


          // invoiceData Field Functions 
          bool hasInvoiceData() const { return this->invoiceData_ != nullptr;};
          void deleteInvoiceData() { this->invoiceData_ = nullptr;};
          inline string getInvoiceData() const { DARABONBA_PTR_GET_DEFAULT(invoiceData_, "") };
          inline InvoiceInfos& setInvoiceData(string invoiceData) { DARABONBA_PTR_SET_VALUE(invoiceData_, invoiceData) };


          // invoiceDate Field Functions 
          bool hasInvoiceDate() const { return this->invoiceDate_ != nullptr;};
          void deleteInvoiceDate() { this->invoiceDate_ = nullptr;};
          inline string getInvoiceDate() const { DARABONBA_PTR_GET_DEFAULT(invoiceDate_, "") };
          inline InvoiceInfos& setInvoiceDate(string invoiceDate) { DARABONBA_PTR_SET_VALUE(invoiceDate_, invoiceDate) };


          // invoiceNumber Field Functions 
          bool hasInvoiceNumber() const { return this->invoiceNumber_ != nullptr;};
          void deleteInvoiceNumber() { this->invoiceNumber_ = nullptr;};
          inline string getInvoiceNumber() const { DARABONBA_PTR_GET_DEFAULT(invoiceNumber_, "") };
          inline InvoiceInfos& setInvoiceNumber(string invoiceNumber) { DARABONBA_PTR_SET_VALUE(invoiceNumber_, invoiceNumber) };


          // invoiceType Field Functions 
          bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
          void deleteInvoiceType() { this->invoiceType_ = nullptr;};
          inline string getInvoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, "") };
          inline InvoiceInfos& setInvoiceType(string invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


        protected:
          shared_ptr<string> amount_ {};
          shared_ptr<string> invoiceCode_ {};
          shared_ptr<string> invoiceData_ {};
          shared_ptr<string> invoiceDate_ {};
          shared_ptr<string> invoiceNumber_ {};
          shared_ptr<string> invoiceType_ {};
        };

        class ExpenseCompositions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExpenseCompositions& obj) { 
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
          friend void from_json(const Darabonba::Json& j, ExpenseCompositions& obj) { 
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
          ExpenseCompositions() = default ;
          ExpenseCompositions(const ExpenseCompositions &) = default ;
          ExpenseCompositions(ExpenseCompositions &&) = default ;
          ExpenseCompositions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExpenseCompositions() = default ;
          ExpenseCompositions& operator=(const ExpenseCompositions &) = default ;
          ExpenseCompositions& operator=(ExpenseCompositions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->billSettlementId_ == nullptr
        && this->capitalDirection_ == nullptr && this->feeType_ == nullptr && this->orderId_ == nullptr && this->remark_ == nullptr && this->remindTagList_ == nullptr
        && this->settlementAmount_ == nullptr && this->settlementTime_ == nullptr && this->voucherType_ == nullptr; };
          // billSettlementId Field Functions 
          bool hasBillSettlementId() const { return this->billSettlementId_ != nullptr;};
          void deleteBillSettlementId() { this->billSettlementId_ = nullptr;};
          inline int64_t getBillSettlementId() const { DARABONBA_PTR_GET_DEFAULT(billSettlementId_, 0L) };
          inline ExpenseCompositions& setBillSettlementId(int64_t billSettlementId) { DARABONBA_PTR_SET_VALUE(billSettlementId_, billSettlementId) };


          // capitalDirection Field Functions 
          bool hasCapitalDirection() const { return this->capitalDirection_ != nullptr;};
          void deleteCapitalDirection() { this->capitalDirection_ = nullptr;};
          inline string getCapitalDirection() const { DARABONBA_PTR_GET_DEFAULT(capitalDirection_, "") };
          inline ExpenseCompositions& setCapitalDirection(string capitalDirection) { DARABONBA_PTR_SET_VALUE(capitalDirection_, capitalDirection) };


          // feeType Field Functions 
          bool hasFeeType() const { return this->feeType_ != nullptr;};
          void deleteFeeType() { this->feeType_ = nullptr;};
          inline string getFeeType() const { DARABONBA_PTR_GET_DEFAULT(feeType_, "") };
          inline ExpenseCompositions& setFeeType(string feeType) { DARABONBA_PTR_SET_VALUE(feeType_, feeType) };


          // orderId Field Functions 
          bool hasOrderId() const { return this->orderId_ != nullptr;};
          void deleteOrderId() { this->orderId_ = nullptr;};
          inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
          inline ExpenseCompositions& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


          // remark Field Functions 
          bool hasRemark() const { return this->remark_ != nullptr;};
          void deleteRemark() { this->remark_ = nullptr;};
          inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
          inline ExpenseCompositions& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


          // remindTagList Field Functions 
          bool hasRemindTagList() const { return this->remindTagList_ != nullptr;};
          void deleteRemindTagList() { this->remindTagList_ = nullptr;};
          inline const vector<string> & getRemindTagList() const { DARABONBA_PTR_GET_CONST(remindTagList_, vector<string>) };
          inline vector<string> getRemindTagList() { DARABONBA_PTR_GET(remindTagList_, vector<string>) };
          inline ExpenseCompositions& setRemindTagList(const vector<string> & remindTagList) { DARABONBA_PTR_SET_VALUE(remindTagList_, remindTagList) };
          inline ExpenseCompositions& setRemindTagList(vector<string> && remindTagList) { DARABONBA_PTR_SET_RVALUE(remindTagList_, remindTagList) };


          // settlementAmount Field Functions 
          bool hasSettlementAmount() const { return this->settlementAmount_ != nullptr;};
          void deleteSettlementAmount() { this->settlementAmount_ = nullptr;};
          inline string getSettlementAmount() const { DARABONBA_PTR_GET_DEFAULT(settlementAmount_, "") };
          inline ExpenseCompositions& setSettlementAmount(string settlementAmount) { DARABONBA_PTR_SET_VALUE(settlementAmount_, settlementAmount) };


          // settlementTime Field Functions 
          bool hasSettlementTime() const { return this->settlementTime_ != nullptr;};
          void deleteSettlementTime() { this->settlementTime_ = nullptr;};
          inline string getSettlementTime() const { DARABONBA_PTR_GET_DEFAULT(settlementTime_, "") };
          inline ExpenseCompositions& setSettlementTime(string settlementTime) { DARABONBA_PTR_SET_VALUE(settlementTime_, settlementTime) };


          // voucherType Field Functions 
          bool hasVoucherType() const { return this->voucherType_ != nullptr;};
          void deleteVoucherType() { this->voucherType_ = nullptr;};
          inline int32_t getVoucherType() const { DARABONBA_PTR_GET_DEFAULT(voucherType_, 0) };
          inline ExpenseCompositions& setVoucherType(int32_t voucherType) { DARABONBA_PTR_SET_VALUE(voucherType_, voucherType) };


        protected:
          shared_ptr<int64_t> billSettlementId_ {};
          shared_ptr<string> capitalDirection_ {};
          shared_ptr<string> feeType_ {};
          shared_ptr<string> orderId_ {};
          shared_ptr<string> remark_ {};
          shared_ptr<vector<string>> remindTagList_ {};
          shared_ptr<string> settlementAmount_ {};
          shared_ptr<string> settlementTime_ {};
          shared_ptr<int32_t> voucherType_ {};
        };

        virtual bool empty() const override { return this->amount_ == nullptr
        && this->currency_ == nullptr && this->expenseCity_ == nullptr && this->expenseCompositions_ == nullptr && this->expenseTime_ == nullptr && this->expenseType_ == nullptr
        && this->expenseTypeCode_ == nullptr && this->invoiceInfos_ == nullptr && this->reimbExpenseId_ == nullptr && this->remark_ == nullptr && this->settlementType_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
        inline Expenses& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline Expenses& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // expenseCity Field Functions 
        bool hasExpenseCity() const { return this->expenseCity_ != nullptr;};
        void deleteExpenseCity() { this->expenseCity_ = nullptr;};
        inline string getExpenseCity() const { DARABONBA_PTR_GET_DEFAULT(expenseCity_, "") };
        inline Expenses& setExpenseCity(string expenseCity) { DARABONBA_PTR_SET_VALUE(expenseCity_, expenseCity) };


        // expenseCompositions Field Functions 
        bool hasExpenseCompositions() const { return this->expenseCompositions_ != nullptr;};
        void deleteExpenseCompositions() { this->expenseCompositions_ = nullptr;};
        inline const vector<Expenses::ExpenseCompositions> & getExpenseCompositions() const { DARABONBA_PTR_GET_CONST(expenseCompositions_, vector<Expenses::ExpenseCompositions>) };
        inline vector<Expenses::ExpenseCompositions> getExpenseCompositions() { DARABONBA_PTR_GET(expenseCompositions_, vector<Expenses::ExpenseCompositions>) };
        inline Expenses& setExpenseCompositions(const vector<Expenses::ExpenseCompositions> & expenseCompositions) { DARABONBA_PTR_SET_VALUE(expenseCompositions_, expenseCompositions) };
        inline Expenses& setExpenseCompositions(vector<Expenses::ExpenseCompositions> && expenseCompositions) { DARABONBA_PTR_SET_RVALUE(expenseCompositions_, expenseCompositions) };


        // expenseTime Field Functions 
        bool hasExpenseTime() const { return this->expenseTime_ != nullptr;};
        void deleteExpenseTime() { this->expenseTime_ = nullptr;};
        inline string getExpenseTime() const { DARABONBA_PTR_GET_DEFAULT(expenseTime_, "") };
        inline Expenses& setExpenseTime(string expenseTime) { DARABONBA_PTR_SET_VALUE(expenseTime_, expenseTime) };


        // expenseType Field Functions 
        bool hasExpenseType() const { return this->expenseType_ != nullptr;};
        void deleteExpenseType() { this->expenseType_ = nullptr;};
        inline string getExpenseType() const { DARABONBA_PTR_GET_DEFAULT(expenseType_, "") };
        inline Expenses& setExpenseType(string expenseType) { DARABONBA_PTR_SET_VALUE(expenseType_, expenseType) };


        // expenseTypeCode Field Functions 
        bool hasExpenseTypeCode() const { return this->expenseTypeCode_ != nullptr;};
        void deleteExpenseTypeCode() { this->expenseTypeCode_ = nullptr;};
        inline string getExpenseTypeCode() const { DARABONBA_PTR_GET_DEFAULT(expenseTypeCode_, "") };
        inline Expenses& setExpenseTypeCode(string expenseTypeCode) { DARABONBA_PTR_SET_VALUE(expenseTypeCode_, expenseTypeCode) };


        // invoiceInfos Field Functions 
        bool hasInvoiceInfos() const { return this->invoiceInfos_ != nullptr;};
        void deleteInvoiceInfos() { this->invoiceInfos_ = nullptr;};
        inline const vector<Expenses::InvoiceInfos> & getInvoiceInfos() const { DARABONBA_PTR_GET_CONST(invoiceInfos_, vector<Expenses::InvoiceInfos>) };
        inline vector<Expenses::InvoiceInfos> getInvoiceInfos() { DARABONBA_PTR_GET(invoiceInfos_, vector<Expenses::InvoiceInfos>) };
        inline Expenses& setInvoiceInfos(const vector<Expenses::InvoiceInfos> & invoiceInfos) { DARABONBA_PTR_SET_VALUE(invoiceInfos_, invoiceInfos) };
        inline Expenses& setInvoiceInfos(vector<Expenses::InvoiceInfos> && invoiceInfos) { DARABONBA_PTR_SET_RVALUE(invoiceInfos_, invoiceInfos) };


        // reimbExpenseId Field Functions 
        bool hasReimbExpenseId() const { return this->reimbExpenseId_ != nullptr;};
        void deleteReimbExpenseId() { this->reimbExpenseId_ = nullptr;};
        inline int64_t getReimbExpenseId() const { DARABONBA_PTR_GET_DEFAULT(reimbExpenseId_, 0L) };
        inline Expenses& setReimbExpenseId(int64_t reimbExpenseId) { DARABONBA_PTR_SET_VALUE(reimbExpenseId_, reimbExpenseId) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline Expenses& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // settlementType Field Functions 
        bool hasSettlementType() const { return this->settlementType_ != nullptr;};
        void deleteSettlementType() { this->settlementType_ = nullptr;};
        inline string getSettlementType() const { DARABONBA_PTR_GET_DEFAULT(settlementType_, "") };
        inline Expenses& setSettlementType(string settlementType) { DARABONBA_PTR_SET_VALUE(settlementType_, settlementType) };


      protected:
        shared_ptr<string> amount_ {};
        shared_ptr<string> currency_ {};
        shared_ptr<string> expenseCity_ {};
        shared_ptr<vector<Expenses::ExpenseCompositions>> expenseCompositions_ {};
        shared_ptr<string> expenseTime_ {};
        shared_ptr<string> expenseType_ {};
        shared_ptr<string> expenseTypeCode_ {};
        shared_ptr<vector<Expenses::InvoiceInfos>> invoiceInfos_ {};
        shared_ptr<int64_t> reimbExpenseId_ {};
        shared_ptr<string> remark_ {};
        shared_ptr<string> settlementType_ {};
      };

      virtual bool empty() const override { return this->companyAmount_ == nullptr
        && this->companyPayAmount_ == nullptr && this->corpId_ == nullptr && this->costCenterCode_ == nullptr && this->costCenterName_ == nullptr && this->expenses_ == nullptr
        && this->expensesCoverDeptId_ == nullptr && this->expensesCoverDeptName_ == nullptr && this->expensesCoverInvoiceTitle_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->isDeleted_ == nullptr && this->itineraries_ == nullptr && this->paymentFinishTime_ == nullptr && this->paymentInfos_ == nullptr && this->personalAmount_ == nullptr
        && this->processEndTime_ == nullptr && this->projectCode_ == nullptr && this->projectName_ == nullptr && this->reason_ == nullptr && this->reimbursementNo_ == nullptr
        && this->remark_ == nullptr && this->status_ == nullptr && this->travelThirdApplyId_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
      // companyAmount Field Functions 
      bool hasCompanyAmount() const { return this->companyAmount_ != nullptr;};
      void deleteCompanyAmount() { this->companyAmount_ = nullptr;};
      inline string getCompanyAmount() const { DARABONBA_PTR_GET_DEFAULT(companyAmount_, "") };
      inline Module& setCompanyAmount(string companyAmount) { DARABONBA_PTR_SET_VALUE(companyAmount_, companyAmount) };


      // companyPayAmount Field Functions 
      bool hasCompanyPayAmount() const { return this->companyPayAmount_ != nullptr;};
      void deleteCompanyPayAmount() { this->companyPayAmount_ = nullptr;};
      inline string getCompanyPayAmount() const { DARABONBA_PTR_GET_DEFAULT(companyPayAmount_, "") };
      inline Module& setCompanyPayAmount(string companyPayAmount) { DARABONBA_PTR_SET_VALUE(companyPayAmount_, companyPayAmount) };


      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Module& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // costCenterCode Field Functions 
      bool hasCostCenterCode() const { return this->costCenterCode_ != nullptr;};
      void deleteCostCenterCode() { this->costCenterCode_ = nullptr;};
      inline string getCostCenterCode() const { DARABONBA_PTR_GET_DEFAULT(costCenterCode_, "") };
      inline Module& setCostCenterCode(string costCenterCode) { DARABONBA_PTR_SET_VALUE(costCenterCode_, costCenterCode) };


      // costCenterName Field Functions 
      bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
      void deleteCostCenterName() { this->costCenterName_ = nullptr;};
      inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
      inline Module& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


      // expenses Field Functions 
      bool hasExpenses() const { return this->expenses_ != nullptr;};
      void deleteExpenses() { this->expenses_ = nullptr;};
      inline const vector<Module::Expenses> & getExpenses() const { DARABONBA_PTR_GET_CONST(expenses_, vector<Module::Expenses>) };
      inline vector<Module::Expenses> getExpenses() { DARABONBA_PTR_GET(expenses_, vector<Module::Expenses>) };
      inline Module& setExpenses(const vector<Module::Expenses> & expenses) { DARABONBA_PTR_SET_VALUE(expenses_, expenses) };
      inline Module& setExpenses(vector<Module::Expenses> && expenses) { DARABONBA_PTR_SET_RVALUE(expenses_, expenses) };


      // expensesCoverDeptId Field Functions 
      bool hasExpensesCoverDeptId() const { return this->expensesCoverDeptId_ != nullptr;};
      void deleteExpensesCoverDeptId() { this->expensesCoverDeptId_ = nullptr;};
      inline string getExpensesCoverDeptId() const { DARABONBA_PTR_GET_DEFAULT(expensesCoverDeptId_, "") };
      inline Module& setExpensesCoverDeptId(string expensesCoverDeptId) { DARABONBA_PTR_SET_VALUE(expensesCoverDeptId_, expensesCoverDeptId) };


      // expensesCoverDeptName Field Functions 
      bool hasExpensesCoverDeptName() const { return this->expensesCoverDeptName_ != nullptr;};
      void deleteExpensesCoverDeptName() { this->expensesCoverDeptName_ = nullptr;};
      inline string getExpensesCoverDeptName() const { DARABONBA_PTR_GET_DEFAULT(expensesCoverDeptName_, "") };
      inline Module& setExpensesCoverDeptName(string expensesCoverDeptName) { DARABONBA_PTR_SET_VALUE(expensesCoverDeptName_, expensesCoverDeptName) };


      // expensesCoverInvoiceTitle Field Functions 
      bool hasExpensesCoverInvoiceTitle() const { return this->expensesCoverInvoiceTitle_ != nullptr;};
      void deleteExpensesCoverInvoiceTitle() { this->expensesCoverInvoiceTitle_ = nullptr;};
      inline string getExpensesCoverInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(expensesCoverInvoiceTitle_, "") };
      inline Module& setExpensesCoverInvoiceTitle(string expensesCoverInvoiceTitle) { DARABONBA_PTR_SET_VALUE(expensesCoverInvoiceTitle_, expensesCoverInvoiceTitle) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Module& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Module& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // isDeleted Field Functions 
      bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
      void deleteIsDeleted() { this->isDeleted_ = nullptr;};
      inline string getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, "") };
      inline Module& setIsDeleted(string isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


      // itineraries Field Functions 
      bool hasItineraries() const { return this->itineraries_ != nullptr;};
      void deleteItineraries() { this->itineraries_ = nullptr;};
      inline const vector<Module::Itineraries> & getItineraries() const { DARABONBA_PTR_GET_CONST(itineraries_, vector<Module::Itineraries>) };
      inline vector<Module::Itineraries> getItineraries() { DARABONBA_PTR_GET(itineraries_, vector<Module::Itineraries>) };
      inline Module& setItineraries(const vector<Module::Itineraries> & itineraries) { DARABONBA_PTR_SET_VALUE(itineraries_, itineraries) };
      inline Module& setItineraries(vector<Module::Itineraries> && itineraries) { DARABONBA_PTR_SET_RVALUE(itineraries_, itineraries) };


      // paymentFinishTime Field Functions 
      bool hasPaymentFinishTime() const { return this->paymentFinishTime_ != nullptr;};
      void deletePaymentFinishTime() { this->paymentFinishTime_ = nullptr;};
      inline string getPaymentFinishTime() const { DARABONBA_PTR_GET_DEFAULT(paymentFinishTime_, "") };
      inline Module& setPaymentFinishTime(string paymentFinishTime) { DARABONBA_PTR_SET_VALUE(paymentFinishTime_, paymentFinishTime) };


      // paymentInfos Field Functions 
      bool hasPaymentInfos() const { return this->paymentInfos_ != nullptr;};
      void deletePaymentInfos() { this->paymentInfos_ = nullptr;};
      inline const vector<Module::PaymentInfos> & getPaymentInfos() const { DARABONBA_PTR_GET_CONST(paymentInfos_, vector<Module::PaymentInfos>) };
      inline vector<Module::PaymentInfos> getPaymentInfos() { DARABONBA_PTR_GET(paymentInfos_, vector<Module::PaymentInfos>) };
      inline Module& setPaymentInfos(const vector<Module::PaymentInfos> & paymentInfos) { DARABONBA_PTR_SET_VALUE(paymentInfos_, paymentInfos) };
      inline Module& setPaymentInfos(vector<Module::PaymentInfos> && paymentInfos) { DARABONBA_PTR_SET_RVALUE(paymentInfos_, paymentInfos) };


      // personalAmount Field Functions 
      bool hasPersonalAmount() const { return this->personalAmount_ != nullptr;};
      void deletePersonalAmount() { this->personalAmount_ = nullptr;};
      inline string getPersonalAmount() const { DARABONBA_PTR_GET_DEFAULT(personalAmount_, "") };
      inline Module& setPersonalAmount(string personalAmount) { DARABONBA_PTR_SET_VALUE(personalAmount_, personalAmount) };


      // processEndTime Field Functions 
      bool hasProcessEndTime() const { return this->processEndTime_ != nullptr;};
      void deleteProcessEndTime() { this->processEndTime_ = nullptr;};
      inline string getProcessEndTime() const { DARABONBA_PTR_GET_DEFAULT(processEndTime_, "") };
      inline Module& setProcessEndTime(string processEndTime) { DARABONBA_PTR_SET_VALUE(processEndTime_, processEndTime) };


      // projectCode Field Functions 
      bool hasProjectCode() const { return this->projectCode_ != nullptr;};
      void deleteProjectCode() { this->projectCode_ = nullptr;};
      inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
      inline Module& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Module& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Module& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // reimbursementNo Field Functions 
      bool hasReimbursementNo() const { return this->reimbursementNo_ != nullptr;};
      void deleteReimbursementNo() { this->reimbursementNo_ = nullptr;};
      inline string getReimbursementNo() const { DARABONBA_PTR_GET_DEFAULT(reimbursementNo_, "") };
      inline Module& setReimbursementNo(string reimbursementNo) { DARABONBA_PTR_SET_VALUE(reimbursementNo_, reimbursementNo) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Module& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Module& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // travelThirdApplyId Field Functions 
      bool hasTravelThirdApplyId() const { return this->travelThirdApplyId_ != nullptr;};
      void deleteTravelThirdApplyId() { this->travelThirdApplyId_ = nullptr;};
      inline string getTravelThirdApplyId() const { DARABONBA_PTR_GET_DEFAULT(travelThirdApplyId_, "") };
      inline Module& setTravelThirdApplyId(string travelThirdApplyId) { DARABONBA_PTR_SET_VALUE(travelThirdApplyId_, travelThirdApplyId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Module& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Module& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      shared_ptr<string> companyAmount_ {};
      shared_ptr<string> companyPayAmount_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<string> costCenterCode_ {};
      shared_ptr<string> costCenterName_ {};
      shared_ptr<vector<Module::Expenses>> expenses_ {};
      shared_ptr<string> expensesCoverDeptId_ {};
      shared_ptr<string> expensesCoverDeptName_ {};
      shared_ptr<string> expensesCoverInvoiceTitle_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> isDeleted_ {};
      shared_ptr<vector<Module::Itineraries>> itineraries_ {};
      shared_ptr<string> paymentFinishTime_ {};
      shared_ptr<vector<Module::PaymentInfos>> paymentInfos_ {};
      shared_ptr<string> personalAmount_ {};
      shared_ptr<string> processEndTime_ {};
      shared_ptr<string> projectCode_ {};
      shared_ptr<string> projectName_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> reimbursementNo_ {};
      shared_ptr<string> remark_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> travelThirdApplyId_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryReimbursementOrderResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryReimbursementOrderResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const QueryReimbursementOrderResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, QueryReimbursementOrderResponseBody::Module) };
    inline QueryReimbursementOrderResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, QueryReimbursementOrderResponseBody::Module) };
    inline QueryReimbursementOrderResponseBody& setModule(const QueryReimbursementOrderResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline QueryReimbursementOrderResponseBody& setModule(QueryReimbursementOrderResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryReimbursementOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryReimbursementOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline QueryReimbursementOrderResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<QueryReimbursementOrderResponseBody::Module> module_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
