// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORDERSRESPONSEBODYORDERS_HPP_
#define ALIBABACLOUD_MODELS_LISTORDERSRESPONSEBODYORDERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOrdersResponseBodyOrdersOrder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListOrdersResponseBodyOrders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrdersResponseBodyOrders& obj) { 
      DARABONBA_PTR_TO_JSON(Order, order_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrdersResponseBodyOrders& obj) { 
      DARABONBA_PTR_FROM_JSON(Order, order_);
    };
    ListOrdersResponseBodyOrders() = default ;
    ListOrdersResponseBodyOrders(const ListOrdersResponseBodyOrders &) = default ;
    ListOrdersResponseBodyOrders(ListOrdersResponseBodyOrders &&) = default ;
    ListOrdersResponseBodyOrders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrdersResponseBodyOrders() = default ;
    ListOrdersResponseBodyOrders& operator=(const ListOrdersResponseBodyOrders &) = default ;
    ListOrdersResponseBodyOrders& operator=(ListOrdersResponseBodyOrders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->order_ != nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline const vector<Models::ListOrdersResponseBodyOrdersOrder> & order() const { DARABONBA_PTR_GET_CONST(order_, vector<Models::ListOrdersResponseBodyOrdersOrder>) };
    inline vector<Models::ListOrdersResponseBodyOrdersOrder> order() { DARABONBA_PTR_GET(order_, vector<Models::ListOrdersResponseBodyOrdersOrder>) };
    inline ListOrdersResponseBodyOrders& setOrder(const vector<Models::ListOrdersResponseBodyOrdersOrder> & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
    inline ListOrdersResponseBodyOrders& setOrder(vector<Models::ListOrdersResponseBodyOrdersOrder> && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


  protected:
    std::shared_ptr<vector<Models::ListOrdersResponseBodyOrdersOrder>> order_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
