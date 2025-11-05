// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDAILYBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDAILYBILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetDailyBillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDailyBillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwner, billOwner_);
      DARABONBA_PTR_TO_JSON(BillType, billType_);
      DARABONBA_PTR_TO_JSON(Date, date_);
    };
    friend void from_json(const Darabonba::Json& j, GetDailyBillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwner, billOwner_);
      DARABONBA_PTR_FROM_JSON(BillType, billType_);
      DARABONBA_PTR_FROM_JSON(Date, date_);
    };
    GetDailyBillRequest() = default ;
    GetDailyBillRequest(const GetDailyBillRequest &) = default ;
    GetDailyBillRequest(GetDailyBillRequest &&) = default ;
    GetDailyBillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDailyBillRequest() = default ;
    GetDailyBillRequest& operator=(const GetDailyBillRequest &) = default ;
    GetDailyBillRequest& operator=(GetDailyBillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billOwner_ == nullptr
        && return this->billType_ == nullptr && return this->date_ == nullptr; };
    // billOwner Field Functions 
    bool hasBillOwner() const { return this->billOwner_ != nullptr;};
    void deleteBillOwner() { this->billOwner_ = nullptr;};
    inline string billOwner() const { DARABONBA_PTR_GET_DEFAULT(billOwner_, "") };
    inline GetDailyBillRequest& setBillOwner(string billOwner) { DARABONBA_PTR_SET_VALUE(billOwner_, billOwner) };


    // billType Field Functions 
    bool hasBillType() const { return this->billType_ != nullptr;};
    void deleteBillType() { this->billType_ = nullptr;};
    inline string billType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
    inline GetDailyBillRequest& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetDailyBillRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


  protected:
    // Bill Owner type. Value Range:</br>
    // 1: Master account</br>
    // 2: Sub account</br>
    // 
    // This parameter is required.
    std::shared_ptr<string> billOwner_ = nullptr;
    // BillType. Value Range:</br>
    // 
    // - DailyOrder(Deprecated)
    // - DailyBill (Deprecated)
    // - DailyInstanceBill (Deprecated)
    // - DailyInstanceBillV2
    // 
    // This parameter is required.
    std::shared_ptr<string> billType_ = nullptr;
    // Billing date. Format YYYY-MM-DD
    // 
    // This parameter is required.
    std::shared_ptr<string> date_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
