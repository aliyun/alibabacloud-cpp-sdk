// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDAILYBILLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDAILYBILLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetDailyBillResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDailyBillResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BillLinkCSV, billLinkCSV_);
      DARABONBA_PTR_TO_JSON(BillLinkXLSX, billLinkXLSX_);
      DARABONBA_PTR_TO_JSON(BillOwner, billOwner_);
      DARABONBA_PTR_TO_JSON(BillType, billType_);
      DARABONBA_PTR_TO_JSON(SpendingTime, spendingTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetDailyBillResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BillLinkCSV, billLinkCSV_);
      DARABONBA_PTR_FROM_JSON(BillLinkXLSX, billLinkXLSX_);
      DARABONBA_PTR_FROM_JSON(BillOwner, billOwner_);
      DARABONBA_PTR_FROM_JSON(BillType, billType_);
      DARABONBA_PTR_FROM_JSON(SpendingTime, spendingTime_);
    };
    GetDailyBillResponseBodyData() = default ;
    GetDailyBillResponseBodyData(const GetDailyBillResponseBodyData &) = default ;
    GetDailyBillResponseBodyData(GetDailyBillResponseBodyData &&) = default ;
    GetDailyBillResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDailyBillResponseBodyData() = default ;
    GetDailyBillResponseBodyData& operator=(const GetDailyBillResponseBodyData &) = default ;
    GetDailyBillResponseBodyData& operator=(GetDailyBillResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billLinkCSV_ == nullptr
        && return this->billLinkXLSX_ == nullptr && return this->billOwner_ == nullptr && return this->billType_ == nullptr && return this->spendingTime_ == nullptr; };
    // billLinkCSV Field Functions 
    bool hasBillLinkCSV() const { return this->billLinkCSV_ != nullptr;};
    void deleteBillLinkCSV() { this->billLinkCSV_ = nullptr;};
    inline string billLinkCSV() const { DARABONBA_PTR_GET_DEFAULT(billLinkCSV_, "") };
    inline GetDailyBillResponseBodyData& setBillLinkCSV(string billLinkCSV) { DARABONBA_PTR_SET_VALUE(billLinkCSV_, billLinkCSV) };


    // billLinkXLSX Field Functions 
    bool hasBillLinkXLSX() const { return this->billLinkXLSX_ != nullptr;};
    void deleteBillLinkXLSX() { this->billLinkXLSX_ = nullptr;};
    inline string billLinkXLSX() const { DARABONBA_PTR_GET_DEFAULT(billLinkXLSX_, "") };
    inline GetDailyBillResponseBodyData& setBillLinkXLSX(string billLinkXLSX) { DARABONBA_PTR_SET_VALUE(billLinkXLSX_, billLinkXLSX) };


    // billOwner Field Functions 
    bool hasBillOwner() const { return this->billOwner_ != nullptr;};
    void deleteBillOwner() { this->billOwner_ = nullptr;};
    inline string billOwner() const { DARABONBA_PTR_GET_DEFAULT(billOwner_, "") };
    inline GetDailyBillResponseBodyData& setBillOwner(string billOwner) { DARABONBA_PTR_SET_VALUE(billOwner_, billOwner) };


    // billType Field Functions 
    bool hasBillType() const { return this->billType_ != nullptr;};
    void deleteBillType() { this->billType_ = nullptr;};
    inline string billType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
    inline GetDailyBillResponseBodyData& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


    // spendingTime Field Functions 
    bool hasSpendingTime() const { return this->spendingTime_ != nullptr;};
    void deleteSpendingTime() { this->spendingTime_ = nullptr;};
    inline string spendingTime() const { DARABONBA_PTR_GET_DEFAULT(spendingTime_, "") };
    inline GetDailyBillResponseBodyData& setSpendingTime(string spendingTime) { DARABONBA_PTR_SET_VALUE(spendingTime_, spendingTime) };


  protected:
    // The link to download CSV file, please use HTTP Protocol.
    std::shared_ptr<string> billLinkCSV_ = nullptr;
    // The link to download XLSX file, please use HTTP Protocol.
    std::shared_ptr<string> billLinkXLSX_ = nullptr;
    // Same as inserted parameter BillOwner.
    std::shared_ptr<string> billOwner_ = nullptr;
    // Same as inserted parameter BillType.
    std::shared_ptr<string> billType_ = nullptr;
    // Spending Time, refer to the exact time of costuming.
    std::shared_ptr<string> spendingTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
