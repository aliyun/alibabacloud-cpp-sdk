// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HotelOrderQueryResponseBodyModuleHotelInfo.hpp>
#include <alibabacloud/models/HotelOrderQueryResponseBodyModuleInvoiceInfo.hpp>
#include <alibabacloud/models/HotelOrderQueryResponseBodyModuleOrderBaseInfo.hpp>
#include <vector>
#include <alibabacloud/models/HotelOrderQueryResponseBodyModulePassengerList.hpp>
#include <alibabacloud/models/HotelOrderQueryResponseBodyModulePriceInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(hotel_info, hotelInfo_);
      DARABONBA_PTR_TO_JSON(invoice_info, invoiceInfo_);
      DARABONBA_PTR_TO_JSON(order_base_info, orderBaseInfo_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(hotel_info, hotelInfo_);
      DARABONBA_PTR_FROM_JSON(invoice_info, invoiceInfo_);
      DARABONBA_PTR_FROM_JSON(order_base_info, orderBaseInfo_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(price_info_list, priceInfoList_);
    };
    HotelOrderQueryResponseBodyModule() = default ;
    HotelOrderQueryResponseBodyModule(const HotelOrderQueryResponseBodyModule &) = default ;
    HotelOrderQueryResponseBodyModule(HotelOrderQueryResponseBodyModule &&) = default ;
    HotelOrderQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderQueryResponseBodyModule() = default ;
    HotelOrderQueryResponseBodyModule& operator=(const HotelOrderQueryResponseBodyModule &) = default ;
    HotelOrderQueryResponseBodyModule& operator=(HotelOrderQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotelInfo_ != nullptr
        && this->invoiceInfo_ != nullptr && this->orderBaseInfo_ != nullptr && this->passengerList_ != nullptr && this->priceInfoList_ != nullptr; };
    // hotelInfo Field Functions 
    bool hasHotelInfo() const { return this->hotelInfo_ != nullptr;};
    void deleteHotelInfo() { this->hotelInfo_ = nullptr;};
    inline const Models::HotelOrderQueryResponseBodyModuleHotelInfo & hotelInfo() const { DARABONBA_PTR_GET_CONST(hotelInfo_, Models::HotelOrderQueryResponseBodyModuleHotelInfo) };
    inline Models::HotelOrderQueryResponseBodyModuleHotelInfo hotelInfo() { DARABONBA_PTR_GET(hotelInfo_, Models::HotelOrderQueryResponseBodyModuleHotelInfo) };
    inline HotelOrderQueryResponseBodyModule& setHotelInfo(const Models::HotelOrderQueryResponseBodyModuleHotelInfo & hotelInfo) { DARABONBA_PTR_SET_VALUE(hotelInfo_, hotelInfo) };
    inline HotelOrderQueryResponseBodyModule& setHotelInfo(Models::HotelOrderQueryResponseBodyModuleHotelInfo && hotelInfo) { DARABONBA_PTR_SET_RVALUE(hotelInfo_, hotelInfo) };


    // invoiceInfo Field Functions 
    bool hasInvoiceInfo() const { return this->invoiceInfo_ != nullptr;};
    void deleteInvoiceInfo() { this->invoiceInfo_ = nullptr;};
    inline const Models::HotelOrderQueryResponseBodyModuleInvoiceInfo & invoiceInfo() const { DARABONBA_PTR_GET_CONST(invoiceInfo_, Models::HotelOrderQueryResponseBodyModuleInvoiceInfo) };
    inline Models::HotelOrderQueryResponseBodyModuleInvoiceInfo invoiceInfo() { DARABONBA_PTR_GET(invoiceInfo_, Models::HotelOrderQueryResponseBodyModuleInvoiceInfo) };
    inline HotelOrderQueryResponseBodyModule& setInvoiceInfo(const Models::HotelOrderQueryResponseBodyModuleInvoiceInfo & invoiceInfo) { DARABONBA_PTR_SET_VALUE(invoiceInfo_, invoiceInfo) };
    inline HotelOrderQueryResponseBodyModule& setInvoiceInfo(Models::HotelOrderQueryResponseBodyModuleInvoiceInfo && invoiceInfo) { DARABONBA_PTR_SET_RVALUE(invoiceInfo_, invoiceInfo) };


    // orderBaseInfo Field Functions 
    bool hasOrderBaseInfo() const { return this->orderBaseInfo_ != nullptr;};
    void deleteOrderBaseInfo() { this->orderBaseInfo_ = nullptr;};
    inline const Models::HotelOrderQueryResponseBodyModuleOrderBaseInfo & orderBaseInfo() const { DARABONBA_PTR_GET_CONST(orderBaseInfo_, Models::HotelOrderQueryResponseBodyModuleOrderBaseInfo) };
    inline Models::HotelOrderQueryResponseBodyModuleOrderBaseInfo orderBaseInfo() { DARABONBA_PTR_GET(orderBaseInfo_, Models::HotelOrderQueryResponseBodyModuleOrderBaseInfo) };
    inline HotelOrderQueryResponseBodyModule& setOrderBaseInfo(const Models::HotelOrderQueryResponseBodyModuleOrderBaseInfo & orderBaseInfo) { DARABONBA_PTR_SET_VALUE(orderBaseInfo_, orderBaseInfo) };
    inline HotelOrderQueryResponseBodyModule& setOrderBaseInfo(Models::HotelOrderQueryResponseBodyModuleOrderBaseInfo && orderBaseInfo) { DARABONBA_PTR_SET_RVALUE(orderBaseInfo_, orderBaseInfo) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<Models::HotelOrderQueryResponseBodyModulePassengerList> & passengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<Models::HotelOrderQueryResponseBodyModulePassengerList>) };
    inline vector<Models::HotelOrderQueryResponseBodyModulePassengerList> passengerList() { DARABONBA_PTR_GET(passengerList_, vector<Models::HotelOrderQueryResponseBodyModulePassengerList>) };
    inline HotelOrderQueryResponseBodyModule& setPassengerList(const vector<Models::HotelOrderQueryResponseBodyModulePassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline HotelOrderQueryResponseBodyModule& setPassengerList(vector<Models::HotelOrderQueryResponseBodyModulePassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // priceInfoList Field Functions 
    bool hasPriceInfoList() const { return this->priceInfoList_ != nullptr;};
    void deletePriceInfoList() { this->priceInfoList_ = nullptr;};
    inline const vector<Models::HotelOrderQueryResponseBodyModulePriceInfoList> & priceInfoList() const { DARABONBA_PTR_GET_CONST(priceInfoList_, vector<Models::HotelOrderQueryResponseBodyModulePriceInfoList>) };
    inline vector<Models::HotelOrderQueryResponseBodyModulePriceInfoList> priceInfoList() { DARABONBA_PTR_GET(priceInfoList_, vector<Models::HotelOrderQueryResponseBodyModulePriceInfoList>) };
    inline HotelOrderQueryResponseBodyModule& setPriceInfoList(const vector<Models::HotelOrderQueryResponseBodyModulePriceInfoList> & priceInfoList) { DARABONBA_PTR_SET_VALUE(priceInfoList_, priceInfoList) };
    inline HotelOrderQueryResponseBodyModule& setPriceInfoList(vector<Models::HotelOrderQueryResponseBodyModulePriceInfoList> && priceInfoList) { DARABONBA_PTR_SET_RVALUE(priceInfoList_, priceInfoList) };


  protected:
    std::shared_ptr<Models::HotelOrderQueryResponseBodyModuleHotelInfo> hotelInfo_ = nullptr;
    std::shared_ptr<Models::HotelOrderQueryResponseBodyModuleInvoiceInfo> invoiceInfo_ = nullptr;
    std::shared_ptr<Models::HotelOrderQueryResponseBodyModuleOrderBaseInfo> orderBaseInfo_ = nullptr;
    std::shared_ptr<vector<Models::HotelOrderQueryResponseBodyModulePassengerList>> passengerList_ = nullptr;
    std::shared_ptr<vector<Models::HotelOrderQueryResponseBodyModulePriceInfoList>> priceInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
