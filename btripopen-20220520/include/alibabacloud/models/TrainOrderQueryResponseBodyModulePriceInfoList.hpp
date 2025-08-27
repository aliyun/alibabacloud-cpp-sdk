// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERQUERYRESPONSEBODYMODULEPRICEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERQUERYRESPONSEBODYMODULEPRICEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderQueryResponseBodyModulePriceInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderQueryResponseBodyModulePriceInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(category_code, categoryCode_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_TO_JSON(pay_type, payType_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(trade_id, tradeId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderQueryResponseBodyModulePriceInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(category_code, categoryCode_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_FROM_JSON(pay_type, payType_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(trade_id, tradeId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    TrainOrderQueryResponseBodyModulePriceInfoList() = default ;
    TrainOrderQueryResponseBodyModulePriceInfoList(const TrainOrderQueryResponseBodyModulePriceInfoList &) = default ;
    TrainOrderQueryResponseBodyModulePriceInfoList(TrainOrderQueryResponseBodyModulePriceInfoList &&) = default ;
    TrainOrderQueryResponseBodyModulePriceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderQueryResponseBodyModulePriceInfoList() = default ;
    TrainOrderQueryResponseBodyModulePriceInfoList& operator=(const TrainOrderQueryResponseBodyModulePriceInfoList &) = default ;
    TrainOrderQueryResponseBodyModulePriceInfoList& operator=(TrainOrderQueryResponseBodyModulePriceInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryCode_ != nullptr
        && this->gmtCreate_ != nullptr && this->passengerName_ != nullptr && this->payType_ != nullptr && this->price_ != nullptr && this->tradeId_ != nullptr
        && this->type_ != nullptr; };
    // categoryCode Field Functions 
    bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
    void deleteCategoryCode() { this->categoryCode_ = nullptr;};
    inline int32_t categoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, 0) };
    inline TrainOrderQueryResponseBodyModulePriceInfoList& setCategoryCode(int32_t categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline TrainOrderQueryResponseBodyModulePriceInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // passengerName Field Functions 
    bool hasPassengerName() const { return this->passengerName_ != nullptr;};
    void deletePassengerName() { this->passengerName_ = nullptr;};
    inline string passengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
    inline TrainOrderQueryResponseBodyModulePriceInfoList& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline int32_t payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
    inline TrainOrderQueryResponseBodyModulePriceInfoList& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline double price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
    inline TrainOrderQueryResponseBodyModulePriceInfoList& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // tradeId Field Functions 
    bool hasTradeId() const { return this->tradeId_ != nullptr;};
    void deleteTradeId() { this->tradeId_ = nullptr;};
    inline string tradeId() const { DARABONBA_PTR_GET_DEFAULT(tradeId_, "") };
    inline TrainOrderQueryResponseBodyModulePriceInfoList& setTradeId(string tradeId) { DARABONBA_PTR_SET_VALUE(tradeId_, tradeId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline TrainOrderQueryResponseBodyModulePriceInfoList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> categoryCode_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> passengerName_ = nullptr;
    std::shared_ptr<int32_t> payType_ = nullptr;
    std::shared_ptr<double> price_ = nullptr;
    std::shared_ptr<string> tradeId_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
