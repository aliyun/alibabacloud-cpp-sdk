// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORDERDETAILRESPONSEBODYDATAORDERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETORDERDETAILRESPONSEBODYDATAORDERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOrderDetailResponseBodyDataOrderListOrder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetOrderDetailResponseBodyDataOrderList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrderDetailResponseBodyDataOrderList& obj) { 
      DARABONBA_PTR_TO_JSON(Order, order_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrderDetailResponseBodyDataOrderList& obj) { 
      DARABONBA_PTR_FROM_JSON(Order, order_);
    };
    GetOrderDetailResponseBodyDataOrderList() = default ;
    GetOrderDetailResponseBodyDataOrderList(const GetOrderDetailResponseBodyDataOrderList &) = default ;
    GetOrderDetailResponseBodyDataOrderList(GetOrderDetailResponseBodyDataOrderList &&) = default ;
    GetOrderDetailResponseBodyDataOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrderDetailResponseBodyDataOrderList() = default ;
    GetOrderDetailResponseBodyDataOrderList& operator=(const GetOrderDetailResponseBodyDataOrderList &) = default ;
    GetOrderDetailResponseBodyDataOrderList& operator=(GetOrderDetailResponseBodyDataOrderList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->order_ != nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline const vector<Models::GetOrderDetailResponseBodyDataOrderListOrder> & order() const { DARABONBA_PTR_GET_CONST(order_, vector<Models::GetOrderDetailResponseBodyDataOrderListOrder>) };
    inline vector<Models::GetOrderDetailResponseBodyDataOrderListOrder> order() { DARABONBA_PTR_GET(order_, vector<Models::GetOrderDetailResponseBodyDataOrderListOrder>) };
    inline GetOrderDetailResponseBodyDataOrderList& setOrder(const vector<Models::GetOrderDetailResponseBodyDataOrderListOrder> & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
    inline GetOrderDetailResponseBodyDataOrderList& setOrder(vector<Models::GetOrderDetailResponseBodyDataOrderListOrder> && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


  protected:
    std::shared_ptr<vector<Models::GetOrderDetailResponseBodyDataOrderListOrder>> order_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
