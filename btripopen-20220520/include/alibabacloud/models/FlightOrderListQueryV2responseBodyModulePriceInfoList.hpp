// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEPRICEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEPRICEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2ResponseBodyModulePriceInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBodyModulePriceInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(category_code, categoryCode_);
      DARABONBA_PTR_TO_JSON(category_type, categoryType_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(pay_type, payType_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
      DARABONBA_PTR_TO_JSON(trade_id, tradeId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBodyModulePriceInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(category_code, categoryCode_);
      DARABONBA_PTR_FROM_JSON(category_type, categoryType_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(pay_type, payType_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
      DARABONBA_PTR_FROM_JSON(trade_id, tradeId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    FlightOrderListQueryV2ResponseBodyModulePriceInfoList() = default ;
    FlightOrderListQueryV2ResponseBodyModulePriceInfoList(const FlightOrderListQueryV2ResponseBodyModulePriceInfoList &) = default ;
    FlightOrderListQueryV2ResponseBodyModulePriceInfoList(FlightOrderListQueryV2ResponseBodyModulePriceInfoList &&) = default ;
    FlightOrderListQueryV2ResponseBodyModulePriceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBodyModulePriceInfoList() = default ;
    FlightOrderListQueryV2ResponseBodyModulePriceInfoList& operator=(const FlightOrderListQueryV2ResponseBodyModulePriceInfoList &) = default ;
    FlightOrderListQueryV2ResponseBodyModulePriceInfoList& operator=(FlightOrderListQueryV2ResponseBodyModulePriceInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryCode_ != nullptr
        && this->categoryType_ != nullptr && this->gmtCreate_ != nullptr && this->payType_ != nullptr && this->price_ != nullptr && this->subOrderId_ != nullptr
        && this->tradeId_ != nullptr && this->type_ != nullptr; };
    // categoryCode Field Functions 
    bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
    void deleteCategoryCode() { this->categoryCode_ = nullptr;};
    inline int32_t categoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, 0) };
    inline FlightOrderListQueryV2ResponseBodyModulePriceInfoList& setCategoryCode(int32_t categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline int32_t categoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, 0) };
    inline FlightOrderListQueryV2ResponseBodyModulePriceInfoList& setCategoryType(int32_t categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline FlightOrderListQueryV2ResponseBodyModulePriceInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline int32_t payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
    inline FlightOrderListQueryV2ResponseBodyModulePriceInfoList& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline double price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModulePriceInfoList& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // subOrderId Field Functions 
    bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
    void deleteSubOrderId() { this->subOrderId_ = nullptr;};
    inline string subOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModulePriceInfoList& setSubOrderId(string subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


    // tradeId Field Functions 
    bool hasTradeId() const { return this->tradeId_ != nullptr;};
    void deleteTradeId() { this->tradeId_ = nullptr;};
    inline string tradeId() const { DARABONBA_PTR_GET_DEFAULT(tradeId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModulePriceInfoList& setTradeId(string tradeId) { DARABONBA_PTR_SET_VALUE(tradeId_, tradeId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline FlightOrderListQueryV2ResponseBodyModulePriceInfoList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> categoryCode_ = nullptr;
    std::shared_ptr<int32_t> categoryType_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<int32_t> payType_ = nullptr;
    std::shared_ptr<double> price_ = nullptr;
    std::shared_ptr<string> subOrderId_ = nullptr;
    std::shared_ptr<string> tradeId_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
