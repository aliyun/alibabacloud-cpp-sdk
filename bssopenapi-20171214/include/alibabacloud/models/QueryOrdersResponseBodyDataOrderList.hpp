// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORDERSRESPONSEBODYDATAORDERLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYORDERSRESPONSEBODYDATAORDERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryOrdersResponseBodyDataOrderListOrder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryOrdersResponseBodyDataOrderList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrdersResponseBodyDataOrderList& obj) { 
      DARABONBA_PTR_TO_JSON(Order, order_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrdersResponseBodyDataOrderList& obj) { 
      DARABONBA_PTR_FROM_JSON(Order, order_);
    };
    QueryOrdersResponseBodyDataOrderList() = default ;
    QueryOrdersResponseBodyDataOrderList(const QueryOrdersResponseBodyDataOrderList &) = default ;
    QueryOrdersResponseBodyDataOrderList(QueryOrdersResponseBodyDataOrderList &&) = default ;
    QueryOrdersResponseBodyDataOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrdersResponseBodyDataOrderList() = default ;
    QueryOrdersResponseBodyDataOrderList& operator=(const QueryOrdersResponseBodyDataOrderList &) = default ;
    QueryOrdersResponseBodyDataOrderList& operator=(QueryOrdersResponseBodyDataOrderList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->order_ != nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline const vector<Models::QueryOrdersResponseBodyDataOrderListOrder> & order() const { DARABONBA_PTR_GET_CONST(order_, vector<Models::QueryOrdersResponseBodyDataOrderListOrder>) };
    inline vector<Models::QueryOrdersResponseBodyDataOrderListOrder> order() { DARABONBA_PTR_GET(order_, vector<Models::QueryOrdersResponseBodyDataOrderListOrder>) };
    inline QueryOrdersResponseBodyDataOrderList& setOrder(const vector<Models::QueryOrdersResponseBodyDataOrderListOrder> & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
    inline QueryOrdersResponseBodyDataOrderList& setOrder(vector<Models::QueryOrdersResponseBodyDataOrderListOrder> && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


  protected:
    std::shared_ptr<vector<Models::QueryOrdersResponseBodyDataOrderListOrder>> order_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
