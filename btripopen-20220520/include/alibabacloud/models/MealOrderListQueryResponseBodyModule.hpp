// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEALORDERLISTQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_MEALORDERLISTQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MealOrderListQueryResponseBodyModuleOrderList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MealOrderListQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MealOrderListQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(order_list, orderList_);
    };
    friend void from_json(const Darabonba::Json& j, MealOrderListQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(order_list, orderList_);
    };
    MealOrderListQueryResponseBodyModule() = default ;
    MealOrderListQueryResponseBodyModule(const MealOrderListQueryResponseBodyModule &) = default ;
    MealOrderListQueryResponseBodyModule(MealOrderListQueryResponseBodyModule &&) = default ;
    MealOrderListQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MealOrderListQueryResponseBodyModule() = default ;
    MealOrderListQueryResponseBodyModule& operator=(const MealOrderListQueryResponseBodyModule &) = default ;
    MealOrderListQueryResponseBodyModule& operator=(MealOrderListQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderList_ != nullptr; };
    // orderList Field Functions 
    bool hasOrderList() const { return this->orderList_ != nullptr;};
    void deleteOrderList() { this->orderList_ = nullptr;};
    inline const vector<Models::MealOrderListQueryResponseBodyModuleOrderList> & orderList() const { DARABONBA_PTR_GET_CONST(orderList_, vector<Models::MealOrderListQueryResponseBodyModuleOrderList>) };
    inline vector<Models::MealOrderListQueryResponseBodyModuleOrderList> orderList() { DARABONBA_PTR_GET(orderList_, vector<Models::MealOrderListQueryResponseBodyModuleOrderList>) };
    inline MealOrderListQueryResponseBodyModule& setOrderList(const vector<Models::MealOrderListQueryResponseBodyModuleOrderList> & orderList) { DARABONBA_PTR_SET_VALUE(orderList_, orderList) };
    inline MealOrderListQueryResponseBodyModule& setOrderList(vector<Models::MealOrderListQueryResponseBodyModuleOrderList> && orderList) { DARABONBA_PTR_SET_RVALUE(orderList_, orderList) };


  protected:
    std::shared_ptr<vector<Models::MealOrderListQueryResponseBodyModuleOrderList>> orderList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
