// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMONTHLYBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMONTHLYBILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetMonthlyBillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMonthlyBillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwner, billOwner_);
      DARABONBA_PTR_TO_JSON(BillType, billType_);
      DARABONBA_PTR_TO_JSON(Month, month_);
    };
    friend void from_json(const Darabonba::Json& j, GetMonthlyBillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwner, billOwner_);
      DARABONBA_PTR_FROM_JSON(BillType, billType_);
      DARABONBA_PTR_FROM_JSON(Month, month_);
    };
    GetMonthlyBillRequest() = default ;
    GetMonthlyBillRequest(const GetMonthlyBillRequest &) = default ;
    GetMonthlyBillRequest(GetMonthlyBillRequest &&) = default ;
    GetMonthlyBillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMonthlyBillRequest() = default ;
    GetMonthlyBillRequest& operator=(const GetMonthlyBillRequest &) = default ;
    GetMonthlyBillRequest& operator=(GetMonthlyBillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billOwner_ == nullptr
        && this->billType_ == nullptr && this->month_ == nullptr; };
    // billOwner Field Functions 
    bool hasBillOwner() const { return this->billOwner_ != nullptr;};
    void deleteBillOwner() { this->billOwner_ = nullptr;};
    inline string getBillOwner() const { DARABONBA_PTR_GET_DEFAULT(billOwner_, "") };
    inline GetMonthlyBillRequest& setBillOwner(string billOwner) { DARABONBA_PTR_SET_VALUE(billOwner_, billOwner) };


    // billType Field Functions 
    bool hasBillType() const { return this->billType_ != nullptr;};
    void deleteBillType() { this->billType_ = nullptr;};
    inline string getBillType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
    inline GetMonthlyBillRequest& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


    // month Field Functions 
    bool hasMonth() const { return this->month_ != nullptr;};
    void deleteMonth() { this->month_ = nullptr;};
    inline string getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, "") };
    inline GetMonthlyBillRequest& setMonth(string month) { DARABONBA_PTR_SET_VALUE(month_, month) };


  protected:
    // Bill Owner type. Value Range:</br>
    // 1: Master account</br>
    // 2: Sub account</br>
    // 
    // This parameter is required.
    shared_ptr<string> billOwner_ {};
    // Value Range:
    // 
    // - MonthlyInvoice
    // - MonthRefundInvoice
    // - MonthlySummary (Deprecated)
    // - MonthlyInstanceAddAdjustBill 
    // - MonthlyInstanceRefundBill
    // - MonthlyAddAdjustInvoce
    // - MonthlyRefundAdjustInvoce 
    // - MonthlyInstanceConsumeV2 
    // - MarginReportV2
    // 
    // This parameter is required.
    shared_ptr<string> billType_ {};
    // Billing Month, Format is YYYY-MM
    // 
    // This parameter is required.
    shared_ptr<string> month_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
