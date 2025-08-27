// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARORDERQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_CARORDERQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CarOrderQueryResponseBodyModuleCarInfo.hpp>
#include <alibabacloud/models/CarOrderQueryResponseBodyModuleInvoiceInfo.hpp>
#include <alibabacloud/models/CarOrderQueryResponseBodyModuleOrderBaseInfo.hpp>
#include <vector>
#include <alibabacloud/models/CarOrderQueryResponseBodyModulePassengerList.hpp>
#include <alibabacloud/models/CarOrderQueryResponseBodyModulePriceInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarOrderQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarOrderQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(car_info, carInfo_);
      DARABONBA_PTR_TO_JSON(invoice_info, invoiceInfo_);
      DARABONBA_PTR_TO_JSON(order_base_info, orderBaseInfo_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, CarOrderQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(car_info, carInfo_);
      DARABONBA_PTR_FROM_JSON(invoice_info, invoiceInfo_);
      DARABONBA_PTR_FROM_JSON(order_base_info, orderBaseInfo_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(price_info_list, priceInfoList_);
    };
    CarOrderQueryResponseBodyModule() = default ;
    CarOrderQueryResponseBodyModule(const CarOrderQueryResponseBodyModule &) = default ;
    CarOrderQueryResponseBodyModule(CarOrderQueryResponseBodyModule &&) = default ;
    CarOrderQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarOrderQueryResponseBodyModule() = default ;
    CarOrderQueryResponseBodyModule& operator=(const CarOrderQueryResponseBodyModule &) = default ;
    CarOrderQueryResponseBodyModule& operator=(CarOrderQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->carInfo_ != nullptr
        && this->invoiceInfo_ != nullptr && this->orderBaseInfo_ != nullptr && this->passengerList_ != nullptr && this->priceInfoList_ != nullptr; };
    // carInfo Field Functions 
    bool hasCarInfo() const { return this->carInfo_ != nullptr;};
    void deleteCarInfo() { this->carInfo_ = nullptr;};
    inline const Models::CarOrderQueryResponseBodyModuleCarInfo & carInfo() const { DARABONBA_PTR_GET_CONST(carInfo_, Models::CarOrderQueryResponseBodyModuleCarInfo) };
    inline Models::CarOrderQueryResponseBodyModuleCarInfo carInfo() { DARABONBA_PTR_GET(carInfo_, Models::CarOrderQueryResponseBodyModuleCarInfo) };
    inline CarOrderQueryResponseBodyModule& setCarInfo(const Models::CarOrderQueryResponseBodyModuleCarInfo & carInfo) { DARABONBA_PTR_SET_VALUE(carInfo_, carInfo) };
    inline CarOrderQueryResponseBodyModule& setCarInfo(Models::CarOrderQueryResponseBodyModuleCarInfo && carInfo) { DARABONBA_PTR_SET_RVALUE(carInfo_, carInfo) };


    // invoiceInfo Field Functions 
    bool hasInvoiceInfo() const { return this->invoiceInfo_ != nullptr;};
    void deleteInvoiceInfo() { this->invoiceInfo_ = nullptr;};
    inline const Models::CarOrderQueryResponseBodyModuleInvoiceInfo & invoiceInfo() const { DARABONBA_PTR_GET_CONST(invoiceInfo_, Models::CarOrderQueryResponseBodyModuleInvoiceInfo) };
    inline Models::CarOrderQueryResponseBodyModuleInvoiceInfo invoiceInfo() { DARABONBA_PTR_GET(invoiceInfo_, Models::CarOrderQueryResponseBodyModuleInvoiceInfo) };
    inline CarOrderQueryResponseBodyModule& setInvoiceInfo(const Models::CarOrderQueryResponseBodyModuleInvoiceInfo & invoiceInfo) { DARABONBA_PTR_SET_VALUE(invoiceInfo_, invoiceInfo) };
    inline CarOrderQueryResponseBodyModule& setInvoiceInfo(Models::CarOrderQueryResponseBodyModuleInvoiceInfo && invoiceInfo) { DARABONBA_PTR_SET_RVALUE(invoiceInfo_, invoiceInfo) };


    // orderBaseInfo Field Functions 
    bool hasOrderBaseInfo() const { return this->orderBaseInfo_ != nullptr;};
    void deleteOrderBaseInfo() { this->orderBaseInfo_ = nullptr;};
    inline const Models::CarOrderQueryResponseBodyModuleOrderBaseInfo & orderBaseInfo() const { DARABONBA_PTR_GET_CONST(orderBaseInfo_, Models::CarOrderQueryResponseBodyModuleOrderBaseInfo) };
    inline Models::CarOrderQueryResponseBodyModuleOrderBaseInfo orderBaseInfo() { DARABONBA_PTR_GET(orderBaseInfo_, Models::CarOrderQueryResponseBodyModuleOrderBaseInfo) };
    inline CarOrderQueryResponseBodyModule& setOrderBaseInfo(const Models::CarOrderQueryResponseBodyModuleOrderBaseInfo & orderBaseInfo) { DARABONBA_PTR_SET_VALUE(orderBaseInfo_, orderBaseInfo) };
    inline CarOrderQueryResponseBodyModule& setOrderBaseInfo(Models::CarOrderQueryResponseBodyModuleOrderBaseInfo && orderBaseInfo) { DARABONBA_PTR_SET_RVALUE(orderBaseInfo_, orderBaseInfo) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<Models::CarOrderQueryResponseBodyModulePassengerList> & passengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<Models::CarOrderQueryResponseBodyModulePassengerList>) };
    inline vector<Models::CarOrderQueryResponseBodyModulePassengerList> passengerList() { DARABONBA_PTR_GET(passengerList_, vector<Models::CarOrderQueryResponseBodyModulePassengerList>) };
    inline CarOrderQueryResponseBodyModule& setPassengerList(const vector<Models::CarOrderQueryResponseBodyModulePassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline CarOrderQueryResponseBodyModule& setPassengerList(vector<Models::CarOrderQueryResponseBodyModulePassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // priceInfoList Field Functions 
    bool hasPriceInfoList() const { return this->priceInfoList_ != nullptr;};
    void deletePriceInfoList() { this->priceInfoList_ = nullptr;};
    inline const vector<Models::CarOrderQueryResponseBodyModulePriceInfoList> & priceInfoList() const { DARABONBA_PTR_GET_CONST(priceInfoList_, vector<Models::CarOrderQueryResponseBodyModulePriceInfoList>) };
    inline vector<Models::CarOrderQueryResponseBodyModulePriceInfoList> priceInfoList() { DARABONBA_PTR_GET(priceInfoList_, vector<Models::CarOrderQueryResponseBodyModulePriceInfoList>) };
    inline CarOrderQueryResponseBodyModule& setPriceInfoList(const vector<Models::CarOrderQueryResponseBodyModulePriceInfoList> & priceInfoList) { DARABONBA_PTR_SET_VALUE(priceInfoList_, priceInfoList) };
    inline CarOrderQueryResponseBodyModule& setPriceInfoList(vector<Models::CarOrderQueryResponseBodyModulePriceInfoList> && priceInfoList) { DARABONBA_PTR_SET_RVALUE(priceInfoList_, priceInfoList) };


  protected:
    std::shared_ptr<Models::CarOrderQueryResponseBodyModuleCarInfo> carInfo_ = nullptr;
    std::shared_ptr<Models::CarOrderQueryResponseBodyModuleInvoiceInfo> invoiceInfo_ = nullptr;
    std::shared_ptr<Models::CarOrderQueryResponseBodyModuleOrderBaseInfo> orderBaseInfo_ = nullptr;
    std::shared_ptr<vector<Models::CarOrderQueryResponseBodyModulePassengerList>> passengerList_ = nullptr;
    std::shared_ptr<vector<Models::CarOrderQueryResponseBodyModulePriceInfoList>> priceInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
