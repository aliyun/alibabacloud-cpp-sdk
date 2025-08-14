// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORDERSRESPONSEBODYDATAORDERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETORDERSRESPONSEBODYDATAORDERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOrdersResponseBodyDataOrderListOrder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetOrdersResponseBodyDataOrderList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrdersResponseBodyDataOrderList& obj) { 
      DARABONBA_PTR_TO_JSON(Order, order_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrdersResponseBodyDataOrderList& obj) { 
      DARABONBA_PTR_FROM_JSON(Order, order_);
    };
    GetOrdersResponseBodyDataOrderList() = default ;
    GetOrdersResponseBodyDataOrderList(const GetOrdersResponseBodyDataOrderList &) = default ;
    GetOrdersResponseBodyDataOrderList(GetOrdersResponseBodyDataOrderList &&) = default ;
    GetOrdersResponseBodyDataOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrdersResponseBodyDataOrderList() = default ;
    GetOrdersResponseBodyDataOrderList& operator=(const GetOrdersResponseBodyDataOrderList &) = default ;
    GetOrdersResponseBodyDataOrderList& operator=(GetOrdersResponseBodyDataOrderList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->order_ != nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline const vector<Models::GetOrdersResponseBodyDataOrderListOrder> & order() const { DARABONBA_PTR_GET_CONST(order_, vector<Models::GetOrdersResponseBodyDataOrderListOrder>) };
    inline vector<Models::GetOrdersResponseBodyDataOrderListOrder> order() { DARABONBA_PTR_GET(order_, vector<Models::GetOrdersResponseBodyDataOrderListOrder>) };
    inline GetOrdersResponseBodyDataOrderList& setOrder(const vector<Models::GetOrdersResponseBodyDataOrderListOrder> & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
    inline GetOrdersResponseBodyDataOrderList& setOrder(vector<Models::GetOrdersResponseBodyDataOrderListOrder> && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


  protected:
    std::shared_ptr<vector<Models::GetOrdersResponseBodyDataOrderListOrder>> order_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
