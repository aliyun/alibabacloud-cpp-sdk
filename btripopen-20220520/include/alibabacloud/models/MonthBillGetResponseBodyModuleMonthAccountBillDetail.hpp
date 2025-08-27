// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONTHBILLGETRESPONSEBODYMODULEMONTHACCOUNTBILLDETAIL_HPP_
#define ALIBABACLOUD_MODELS_MONTHBILLGETRESPONSEBODYMODULEMONTHACCOUNTBILLDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MonthBillGetResponseBodyModuleMonthAccountBillDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonthBillGetResponseBodyModuleMonthAccountBillDetail& obj) { 
      DARABONBA_PTR_TO_JSON(billConfirmed, billConfirmed_);
      DARABONBA_PTR_TO_JSON(carAmount, carAmount_);
      DARABONBA_PTR_TO_JSON(damageAmount, damageAmount_);
      DARABONBA_PTR_TO_JSON(flightAmount, flightAmount_);
      DARABONBA_PTR_TO_JSON(fuPoint, fuPoint_);
      DARABONBA_PTR_TO_JSON(hotelAmount, hotelAmount_);
      DARABONBA_PTR_TO_JSON(ieFlightAmount, ieFlightAmount_);
      DARABONBA_PTR_TO_JSON(ieHotelAmount, ieHotelAmount_);
      DARABONBA_PTR_TO_JSON(mailBillDate, mailBillDate_);
      DARABONBA_PTR_TO_JSON(mealAmount, mealAmount_);
      DARABONBA_PTR_TO_JSON(serviceAmount, serviceAmount_);
      DARABONBA_PTR_TO_JSON(trainAmount, trainAmount_);
      DARABONBA_PTR_TO_JSON(vasAmount, vasAmount_);
    };
    friend void from_json(const Darabonba::Json& j, MonthBillGetResponseBodyModuleMonthAccountBillDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(billConfirmed, billConfirmed_);
      DARABONBA_PTR_FROM_JSON(carAmount, carAmount_);
      DARABONBA_PTR_FROM_JSON(damageAmount, damageAmount_);
      DARABONBA_PTR_FROM_JSON(flightAmount, flightAmount_);
      DARABONBA_PTR_FROM_JSON(fuPoint, fuPoint_);
      DARABONBA_PTR_FROM_JSON(hotelAmount, hotelAmount_);
      DARABONBA_PTR_FROM_JSON(ieFlightAmount, ieFlightAmount_);
      DARABONBA_PTR_FROM_JSON(ieHotelAmount, ieHotelAmount_);
      DARABONBA_PTR_FROM_JSON(mailBillDate, mailBillDate_);
      DARABONBA_PTR_FROM_JSON(mealAmount, mealAmount_);
      DARABONBA_PTR_FROM_JSON(serviceAmount, serviceAmount_);
      DARABONBA_PTR_FROM_JSON(trainAmount, trainAmount_);
      DARABONBA_PTR_FROM_JSON(vasAmount, vasAmount_);
    };
    MonthBillGetResponseBodyModuleMonthAccountBillDetail() = default ;
    MonthBillGetResponseBodyModuleMonthAccountBillDetail(const MonthBillGetResponseBodyModuleMonthAccountBillDetail &) = default ;
    MonthBillGetResponseBodyModuleMonthAccountBillDetail(MonthBillGetResponseBodyModuleMonthAccountBillDetail &&) = default ;
    MonthBillGetResponseBodyModuleMonthAccountBillDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonthBillGetResponseBodyModuleMonthAccountBillDetail() = default ;
    MonthBillGetResponseBodyModuleMonthAccountBillDetail& operator=(const MonthBillGetResponseBodyModuleMonthAccountBillDetail &) = default ;
    MonthBillGetResponseBodyModuleMonthAccountBillDetail& operator=(MonthBillGetResponseBodyModuleMonthAccountBillDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billConfirmed_ != nullptr
        && this->carAmount_ != nullptr && this->damageAmount_ != nullptr && this->flightAmount_ != nullptr && this->fuPoint_ != nullptr && this->hotelAmount_ != nullptr
        && this->ieFlightAmount_ != nullptr && this->ieHotelAmount_ != nullptr && this->mailBillDate_ != nullptr && this->mealAmount_ != nullptr && this->serviceAmount_ != nullptr
        && this->trainAmount_ != nullptr && this->vasAmount_ != nullptr; };
    // billConfirmed Field Functions 
    bool hasBillConfirmed() const { return this->billConfirmed_ != nullptr;};
    void deleteBillConfirmed() { this->billConfirmed_ = nullptr;};
    inline int32_t billConfirmed() const { DARABONBA_PTR_GET_DEFAULT(billConfirmed_, 0) };
    inline MonthBillGetResponseBodyModuleMonthAccountBillDetail& setBillConfirmed(int32_t billConfirmed) { DARABONBA_PTR_SET_VALUE(billConfirmed_, billConfirmed) };


    // carAmount Field Functions 
    bool hasCarAmount() const { return this->carAmount_ != nullptr;};
    void deleteCarAmount() { this->carAmount_ = nullptr;};
    inline double carAmount() const { DARABONBA_PTR_GET_DEFAULT(carAmount_, 0.0) };
    inline MonthBillGetResponseBodyModuleMonthAccountBillDetail& setCarAmount(double carAmount) { DARABONBA_PTR_SET_VALUE(carAmount_, carAmount) };


    // damageAmount Field Functions 
    bool hasDamageAmount() const { return this->damageAmount_ != nullptr;};
    void deleteDamageAmount() { this->damageAmount_ = nullptr;};
    inline double damageAmount() const { DARABONBA_PTR_GET_DEFAULT(damageAmount_, 0.0) };
    inline MonthBillGetResponseBodyModuleMonthAccountBillDetail& setDamageAmount(double damageAmount) { DARABONBA_PTR_SET_VALUE(damageAmount_, damageAmount) };


    // flightAmount Field Functions 
    bool hasFlightAmount() const { return this->flightAmount_ != nullptr;};
    void deleteFlightAmount() { this->flightAmount_ = nullptr;};
    inline double flightAmount() const { DARABONBA_PTR_GET_DEFAULT(flightAmount_, 0.0) };
    inline MonthBillGetResponseBodyModuleMonthAccountBillDetail& setFlightAmount(double flightAmount) { DARABONBA_PTR_SET_VALUE(flightAmount_, flightAmount) };


    // fuPoint Field Functions 
    bool hasFuPoint() const { return this->fuPoint_ != nullptr;};
    void deleteFuPoint() { this->fuPoint_ = nullptr;};
    inline double fuPoint() const { DARABONBA_PTR_GET_DEFAULT(fuPoint_, 0.0) };
    inline MonthBillGetResponseBodyModuleMonthAccountBillDetail& setFuPoint(double fuPoint) { DARABONBA_PTR_SET_VALUE(fuPoint_, fuPoint) };


    // hotelAmount Field Functions 
    bool hasHotelAmount() const { return this->hotelAmount_ != nullptr;};
    void deleteHotelAmount() { this->hotelAmount_ = nullptr;};
    inline double hotelAmount() const { DARABONBA_PTR_GET_DEFAULT(hotelAmount_, 0.0) };
    inline MonthBillGetResponseBodyModuleMonthAccountBillDetail& setHotelAmount(double hotelAmount) { DARABONBA_PTR_SET_VALUE(hotelAmount_, hotelAmount) };


    // ieFlightAmount Field Functions 
    bool hasIeFlightAmount() const { return this->ieFlightAmount_ != nullptr;};
    void deleteIeFlightAmount() { this->ieFlightAmount_ = nullptr;};
    inline double ieFlightAmount() const { DARABONBA_PTR_GET_DEFAULT(ieFlightAmount_, 0.0) };
    inline MonthBillGetResponseBodyModuleMonthAccountBillDetail& setIeFlightAmount(double ieFlightAmount) { DARABONBA_PTR_SET_VALUE(ieFlightAmount_, ieFlightAmount) };


    // ieHotelAmount Field Functions 
    bool hasIeHotelAmount() const { return this->ieHotelAmount_ != nullptr;};
    void deleteIeHotelAmount() { this->ieHotelAmount_ = nullptr;};
    inline double ieHotelAmount() const { DARABONBA_PTR_GET_DEFAULT(ieHotelAmount_, 0.0) };
    inline MonthBillGetResponseBodyModuleMonthAccountBillDetail& setIeHotelAmount(double ieHotelAmount) { DARABONBA_PTR_SET_VALUE(ieHotelAmount_, ieHotelAmount) };


    // mailBillDate Field Functions 
    bool hasMailBillDate() const { return this->mailBillDate_ != nullptr;};
    void deleteMailBillDate() { this->mailBillDate_ = nullptr;};
    inline int64_t mailBillDate() const { DARABONBA_PTR_GET_DEFAULT(mailBillDate_, 0L) };
    inline MonthBillGetResponseBodyModuleMonthAccountBillDetail& setMailBillDate(int64_t mailBillDate) { DARABONBA_PTR_SET_VALUE(mailBillDate_, mailBillDate) };


    // mealAmount Field Functions 
    bool hasMealAmount() const { return this->mealAmount_ != nullptr;};
    void deleteMealAmount() { this->mealAmount_ = nullptr;};
    inline double mealAmount() const { DARABONBA_PTR_GET_DEFAULT(mealAmount_, 0.0) };
    inline MonthBillGetResponseBodyModuleMonthAccountBillDetail& setMealAmount(double mealAmount) { DARABONBA_PTR_SET_VALUE(mealAmount_, mealAmount) };


    // serviceAmount Field Functions 
    bool hasServiceAmount() const { return this->serviceAmount_ != nullptr;};
    void deleteServiceAmount() { this->serviceAmount_ = nullptr;};
    inline double serviceAmount() const { DARABONBA_PTR_GET_DEFAULT(serviceAmount_, 0.0) };
    inline MonthBillGetResponseBodyModuleMonthAccountBillDetail& setServiceAmount(double serviceAmount) { DARABONBA_PTR_SET_VALUE(serviceAmount_, serviceAmount) };


    // trainAmount Field Functions 
    bool hasTrainAmount() const { return this->trainAmount_ != nullptr;};
    void deleteTrainAmount() { this->trainAmount_ = nullptr;};
    inline double trainAmount() const { DARABONBA_PTR_GET_DEFAULT(trainAmount_, 0.0) };
    inline MonthBillGetResponseBodyModuleMonthAccountBillDetail& setTrainAmount(double trainAmount) { DARABONBA_PTR_SET_VALUE(trainAmount_, trainAmount) };


    // vasAmount Field Functions 
    bool hasVasAmount() const { return this->vasAmount_ != nullptr;};
    void deleteVasAmount() { this->vasAmount_ = nullptr;};
    inline double vasAmount() const { DARABONBA_PTR_GET_DEFAULT(vasAmount_, 0.0) };
    inline MonthBillGetResponseBodyModuleMonthAccountBillDetail& setVasAmount(double vasAmount) { DARABONBA_PTR_SET_VALUE(vasAmount_, vasAmount) };


  protected:
    std::shared_ptr<int32_t> billConfirmed_ = nullptr;
    // 用车金额（单位：元）
    std::shared_ptr<double> carAmount_ = nullptr;
    // 违约金金额（单位：元）
    std::shared_ptr<double> damageAmount_ = nullptr;
    // 机票金额（单位：元）
    std::shared_ptr<double> flightAmount_ = nullptr;
    // 福豆金额（单位：元）
    std::shared_ptr<double> fuPoint_ = nullptr;
    // 酒店金额（单位：元）
    std::shared_ptr<double> hotelAmount_ = nullptr;
    // 国际机票金额（单位：元）
    std::shared_ptr<double> ieFlightAmount_ = nullptr;
    std::shared_ptr<double> ieHotelAmount_ = nullptr;
    // 账期日：YYYYMMDD
    std::shared_ptr<int64_t> mailBillDate_ = nullptr;
    std::shared_ptr<double> mealAmount_ = nullptr;
    // 服务费金额（单位：元）
    std::shared_ptr<double> serviceAmount_ = nullptr;
    // 火车票金额（单位：元）
    std::shared_ptr<double> trainAmount_ = nullptr;
    std::shared_ptr<double> vasAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
