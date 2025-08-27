// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERDETAILQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERDETAILQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList.hpp>
#include <alibabacloud/models/IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList.hpp>
#include <alibabacloud/models/IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderDetailQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderDetailQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(flight_modify_order_list, flightModifyOrderList_);
      DARABONBA_PTR_TO_JSON(flight_refund_order_list, flightRefundOrderList_);
      DARABONBA_PTR_TO_JSON(flight_sale_order, flightSaleOrder_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderDetailQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_modify_order_list, flightModifyOrderList_);
      DARABONBA_PTR_FROM_JSON(flight_refund_order_list, flightRefundOrderList_);
      DARABONBA_PTR_FROM_JSON(flight_sale_order, flightSaleOrder_);
    };
    IFlightOrderDetailQueryResponseBodyModule() = default ;
    IFlightOrderDetailQueryResponseBodyModule(const IFlightOrderDetailQueryResponseBodyModule &) = default ;
    IFlightOrderDetailQueryResponseBodyModule(IFlightOrderDetailQueryResponseBodyModule &&) = default ;
    IFlightOrderDetailQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderDetailQueryResponseBodyModule() = default ;
    IFlightOrderDetailQueryResponseBodyModule& operator=(const IFlightOrderDetailQueryResponseBodyModule &) = default ;
    IFlightOrderDetailQueryResponseBodyModule& operator=(IFlightOrderDetailQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightModifyOrderList_ != nullptr
        && this->flightRefundOrderList_ != nullptr && this->flightSaleOrder_ != nullptr; };
    // flightModifyOrderList Field Functions 
    bool hasFlightModifyOrderList() const { return this->flightModifyOrderList_ != nullptr;};
    void deleteFlightModifyOrderList() { this->flightModifyOrderList_ = nullptr;};
    inline const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList> & flightModifyOrderList() const { DARABONBA_PTR_GET_CONST(flightModifyOrderList_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList>) };
    inline vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList> flightModifyOrderList() { DARABONBA_PTR_GET(flightModifyOrderList_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList>) };
    inline IFlightOrderDetailQueryResponseBodyModule& setFlightModifyOrderList(const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList> & flightModifyOrderList) { DARABONBA_PTR_SET_VALUE(flightModifyOrderList_, flightModifyOrderList) };
    inline IFlightOrderDetailQueryResponseBodyModule& setFlightModifyOrderList(vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList> && flightModifyOrderList) { DARABONBA_PTR_SET_RVALUE(flightModifyOrderList_, flightModifyOrderList) };


    // flightRefundOrderList Field Functions 
    bool hasFlightRefundOrderList() const { return this->flightRefundOrderList_ != nullptr;};
    void deleteFlightRefundOrderList() { this->flightRefundOrderList_ = nullptr;};
    inline const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList> & flightRefundOrderList() const { DARABONBA_PTR_GET_CONST(flightRefundOrderList_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList>) };
    inline vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList> flightRefundOrderList() { DARABONBA_PTR_GET(flightRefundOrderList_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList>) };
    inline IFlightOrderDetailQueryResponseBodyModule& setFlightRefundOrderList(const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList> & flightRefundOrderList) { DARABONBA_PTR_SET_VALUE(flightRefundOrderList_, flightRefundOrderList) };
    inline IFlightOrderDetailQueryResponseBodyModule& setFlightRefundOrderList(vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList> && flightRefundOrderList) { DARABONBA_PTR_SET_RVALUE(flightRefundOrderList_, flightRefundOrderList) };


    // flightSaleOrder Field Functions 
    bool hasFlightSaleOrder() const { return this->flightSaleOrder_ != nullptr;};
    void deleteFlightSaleOrder() { this->flightSaleOrder_ = nullptr;};
    inline const Models::IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrder & flightSaleOrder() const { DARABONBA_PTR_GET_CONST(flightSaleOrder_, Models::IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrder) };
    inline Models::IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrder flightSaleOrder() { DARABONBA_PTR_GET(flightSaleOrder_, Models::IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrder) };
    inline IFlightOrderDetailQueryResponseBodyModule& setFlightSaleOrder(const Models::IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrder & flightSaleOrder) { DARABONBA_PTR_SET_VALUE(flightSaleOrder_, flightSaleOrder) };
    inline IFlightOrderDetailQueryResponseBodyModule& setFlightSaleOrder(Models::IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrder && flightSaleOrder) { DARABONBA_PTR_SET_RVALUE(flightSaleOrder_, flightSaleOrder) };


  protected:
    std::shared_ptr<vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList>> flightModifyOrderList_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList>> flightRefundOrderList_ = nullptr;
    std::shared_ptr<Models::IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrder> flightSaleOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
