// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERLISTQUERYRESPONSEBODYMODULEPRICEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERLISTQUERYRESPONSEBODYMODULEPRICEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderListQueryResponseBodyModulePriceInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderListQueryResponseBodyModulePriceInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(category_code, categoryCode_);
      DARABONBA_PTR_TO_JSON(category_type, categoryType_);
      DARABONBA_PTR_TO_JSON(end_city, endCity_);
      DARABONBA_PTR_TO_JSON(end_time, endTime_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(original_train_no, originalTrainNo_);
      DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_TO_JSON(pay_type, payType_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(seat_type, seatType_);
      DARABONBA_PTR_TO_JSON(start_city, startCity_);
      DARABONBA_PTR_TO_JSON(start_time, startTime_);
      DARABONBA_PTR_TO_JSON(trade_id, tradeId_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderListQueryResponseBodyModulePriceInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(category_code, categoryCode_);
      DARABONBA_PTR_FROM_JSON(category_type, categoryType_);
      DARABONBA_PTR_FROM_JSON(end_city, endCity_);
      DARABONBA_PTR_FROM_JSON(end_time, endTime_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(original_train_no, originalTrainNo_);
      DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_FROM_JSON(pay_type, payType_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(seat_type, seatType_);
      DARABONBA_PTR_FROM_JSON(start_city, startCity_);
      DARABONBA_PTR_FROM_JSON(start_time, startTime_);
      DARABONBA_PTR_FROM_JSON(trade_id, tradeId_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    TrainOrderListQueryResponseBodyModulePriceInfoList() = default ;
    TrainOrderListQueryResponseBodyModulePriceInfoList(const TrainOrderListQueryResponseBodyModulePriceInfoList &) = default ;
    TrainOrderListQueryResponseBodyModulePriceInfoList(TrainOrderListQueryResponseBodyModulePriceInfoList &&) = default ;
    TrainOrderListQueryResponseBodyModulePriceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderListQueryResponseBodyModulePriceInfoList() = default ;
    TrainOrderListQueryResponseBodyModulePriceInfoList& operator=(const TrainOrderListQueryResponseBodyModulePriceInfoList &) = default ;
    TrainOrderListQueryResponseBodyModulePriceInfoList& operator=(TrainOrderListQueryResponseBodyModulePriceInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryCode_ != nullptr
        && this->categoryType_ != nullptr && this->endCity_ != nullptr && this->endTime_ != nullptr && this->gmtCreate_ != nullptr && this->originalTrainNo_ != nullptr
        && this->passengerName_ != nullptr && this->payType_ != nullptr && this->price_ != nullptr && this->seatType_ != nullptr && this->startCity_ != nullptr
        && this->startTime_ != nullptr && this->tradeId_ != nullptr && this->trainNo_ != nullptr && this->type_ != nullptr; };
    // categoryCode Field Functions 
    bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
    void deleteCategoryCode() { this->categoryCode_ = nullptr;};
    inline int32_t categoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, 0) };
    inline TrainOrderListQueryResponseBodyModulePriceInfoList& setCategoryCode(int32_t categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline int32_t categoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, 0) };
    inline TrainOrderListQueryResponseBodyModulePriceInfoList& setCategoryType(int32_t categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // endCity Field Functions 
    bool hasEndCity() const { return this->endCity_ != nullptr;};
    void deleteEndCity() { this->endCity_ = nullptr;};
    inline string endCity() const { DARABONBA_PTR_GET_DEFAULT(endCity_, "") };
    inline TrainOrderListQueryResponseBodyModulePriceInfoList& setEndCity(string endCity) { DARABONBA_PTR_SET_VALUE(endCity_, endCity) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline TrainOrderListQueryResponseBodyModulePriceInfoList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline TrainOrderListQueryResponseBodyModulePriceInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // originalTrainNo Field Functions 
    bool hasOriginalTrainNo() const { return this->originalTrainNo_ != nullptr;};
    void deleteOriginalTrainNo() { this->originalTrainNo_ = nullptr;};
    inline string originalTrainNo() const { DARABONBA_PTR_GET_DEFAULT(originalTrainNo_, "") };
    inline TrainOrderListQueryResponseBodyModulePriceInfoList& setOriginalTrainNo(string originalTrainNo) { DARABONBA_PTR_SET_VALUE(originalTrainNo_, originalTrainNo) };


    // passengerName Field Functions 
    bool hasPassengerName() const { return this->passengerName_ != nullptr;};
    void deletePassengerName() { this->passengerName_ = nullptr;};
    inline string passengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
    inline TrainOrderListQueryResponseBodyModulePriceInfoList& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline int32_t payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
    inline TrainOrderListQueryResponseBodyModulePriceInfoList& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline double price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
    inline TrainOrderListQueryResponseBodyModulePriceInfoList& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // seatType Field Functions 
    bool hasSeatType() const { return this->seatType_ != nullptr;};
    void deleteSeatType() { this->seatType_ = nullptr;};
    inline string seatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
    inline TrainOrderListQueryResponseBodyModulePriceInfoList& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


    // startCity Field Functions 
    bool hasStartCity() const { return this->startCity_ != nullptr;};
    void deleteStartCity() { this->startCity_ = nullptr;};
    inline string startCity() const { DARABONBA_PTR_GET_DEFAULT(startCity_, "") };
    inline TrainOrderListQueryResponseBodyModulePriceInfoList& setStartCity(string startCity) { DARABONBA_PTR_SET_VALUE(startCity_, startCity) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline TrainOrderListQueryResponseBodyModulePriceInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tradeId Field Functions 
    bool hasTradeId() const { return this->tradeId_ != nullptr;};
    void deleteTradeId() { this->tradeId_ = nullptr;};
    inline string tradeId() const { DARABONBA_PTR_GET_DEFAULT(tradeId_, "") };
    inline TrainOrderListQueryResponseBodyModulePriceInfoList& setTradeId(string tradeId) { DARABONBA_PTR_SET_VALUE(tradeId_, tradeId) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainOrderListQueryResponseBodyModulePriceInfoList& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline TrainOrderListQueryResponseBodyModulePriceInfoList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> categoryCode_ = nullptr;
    std::shared_ptr<int32_t> categoryType_ = nullptr;
    std::shared_ptr<string> endCity_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> originalTrainNo_ = nullptr;
    std::shared_ptr<string> passengerName_ = nullptr;
    std::shared_ptr<int32_t> payType_ = nullptr;
    std::shared_ptr<double> price_ = nullptr;
    std::shared_ptr<string> seatType_ = nullptr;
    std::shared_ptr<string> startCity_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> tradeId_ = nullptr;
    std::shared_ptr<string> trainNo_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
