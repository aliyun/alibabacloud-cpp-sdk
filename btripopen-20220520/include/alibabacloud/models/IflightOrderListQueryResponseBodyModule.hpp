// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList.hpp>
#include <alibabacloud/models/IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList.hpp>
#include <alibabacloud/models/IFlightOrderListQueryResponseBodyModuleFlightSaleOrder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderListQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderListQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(flight_modify_order_list, flightModifyOrderList_);
      DARABONBA_PTR_TO_JSON(flight_refund_order_list, flightRefundOrderList_);
      DARABONBA_PTR_TO_JSON(flight_sale_order, flightSaleOrder_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderListQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_modify_order_list, flightModifyOrderList_);
      DARABONBA_PTR_FROM_JSON(flight_refund_order_list, flightRefundOrderList_);
      DARABONBA_PTR_FROM_JSON(flight_sale_order, flightSaleOrder_);
    };
    IFlightOrderListQueryResponseBodyModule() = default ;
    IFlightOrderListQueryResponseBodyModule(const IFlightOrderListQueryResponseBodyModule &) = default ;
    IFlightOrderListQueryResponseBodyModule(IFlightOrderListQueryResponseBodyModule &&) = default ;
    IFlightOrderListQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderListQueryResponseBodyModule() = default ;
    IFlightOrderListQueryResponseBodyModule& operator=(const IFlightOrderListQueryResponseBodyModule &) = default ;
    IFlightOrderListQueryResponseBodyModule& operator=(IFlightOrderListQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightModifyOrderList_ != nullptr
        && this->flightRefundOrderList_ != nullptr && this->flightSaleOrder_ != nullptr; };
    // flightModifyOrderList Field Functions 
    bool hasFlightModifyOrderList() const { return this->flightModifyOrderList_ != nullptr;};
    void deleteFlightModifyOrderList() { this->flightModifyOrderList_ = nullptr;};
    inline const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList> & flightModifyOrderList() const { DARABONBA_PTR_GET_CONST(flightModifyOrderList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList>) };
    inline vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList> flightModifyOrderList() { DARABONBA_PTR_GET(flightModifyOrderList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList>) };
    inline IFlightOrderListQueryResponseBodyModule& setFlightModifyOrderList(const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList> & flightModifyOrderList) { DARABONBA_PTR_SET_VALUE(flightModifyOrderList_, flightModifyOrderList) };
    inline IFlightOrderListQueryResponseBodyModule& setFlightModifyOrderList(vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList> && flightModifyOrderList) { DARABONBA_PTR_SET_RVALUE(flightModifyOrderList_, flightModifyOrderList) };


    // flightRefundOrderList Field Functions 
    bool hasFlightRefundOrderList() const { return this->flightRefundOrderList_ != nullptr;};
    void deleteFlightRefundOrderList() { this->flightRefundOrderList_ = nullptr;};
    inline const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList> & flightRefundOrderList() const { DARABONBA_PTR_GET_CONST(flightRefundOrderList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList>) };
    inline vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList> flightRefundOrderList() { DARABONBA_PTR_GET(flightRefundOrderList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList>) };
    inline IFlightOrderListQueryResponseBodyModule& setFlightRefundOrderList(const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList> & flightRefundOrderList) { DARABONBA_PTR_SET_VALUE(flightRefundOrderList_, flightRefundOrderList) };
    inline IFlightOrderListQueryResponseBodyModule& setFlightRefundOrderList(vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList> && flightRefundOrderList) { DARABONBA_PTR_SET_RVALUE(flightRefundOrderList_, flightRefundOrderList) };


    // flightSaleOrder Field Functions 
    bool hasFlightSaleOrder() const { return this->flightSaleOrder_ != nullptr;};
    void deleteFlightSaleOrder() { this->flightSaleOrder_ = nullptr;};
    inline const Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrder & flightSaleOrder() const { DARABONBA_PTR_GET_CONST(flightSaleOrder_, Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrder) };
    inline Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrder flightSaleOrder() { DARABONBA_PTR_GET(flightSaleOrder_, Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrder) };
    inline IFlightOrderListQueryResponseBodyModule& setFlightSaleOrder(const Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrder & flightSaleOrder) { DARABONBA_PTR_SET_VALUE(flightSaleOrder_, flightSaleOrder) };
    inline IFlightOrderListQueryResponseBodyModule& setFlightSaleOrder(Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrder && flightSaleOrder) { DARABONBA_PTR_SET_RVALUE(flightSaleOrder_, flightSaleOrder) };


  protected:
    std::shared_ptr<vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList>> flightModifyOrderList_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList>> flightRefundOrderList_ = nullptr;
    std::shared_ptr<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrder> flightSaleOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
