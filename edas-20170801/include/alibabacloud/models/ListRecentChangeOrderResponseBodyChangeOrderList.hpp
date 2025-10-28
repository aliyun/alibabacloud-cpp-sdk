// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTCHANGEORDERRESPONSEBODYCHANGEORDERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTCHANGEORDERRESPONSEBODYCHANGEORDERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListRecentChangeOrderResponseBodyChangeOrderList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentChangeOrderResponseBodyChangeOrderList& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeOrder, changeOrder_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentChangeOrderResponseBodyChangeOrderList& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeOrder, changeOrder_);
    };
    ListRecentChangeOrderResponseBodyChangeOrderList() = default ;
    ListRecentChangeOrderResponseBodyChangeOrderList(const ListRecentChangeOrderResponseBodyChangeOrderList &) = default ;
    ListRecentChangeOrderResponseBodyChangeOrderList(ListRecentChangeOrderResponseBodyChangeOrderList &&) = default ;
    ListRecentChangeOrderResponseBodyChangeOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentChangeOrderResponseBodyChangeOrderList() = default ;
    ListRecentChangeOrderResponseBodyChangeOrderList& operator=(const ListRecentChangeOrderResponseBodyChangeOrderList &) = default ;
    ListRecentChangeOrderResponseBodyChangeOrderList& operator=(ListRecentChangeOrderResponseBodyChangeOrderList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeOrder_ == nullptr; };
    // changeOrder Field Functions 
    bool hasChangeOrder() const { return this->changeOrder_ != nullptr;};
    void deleteChangeOrder() { this->changeOrder_ = nullptr;};
    inline const vector<Models::ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder> & changeOrder() const { DARABONBA_PTR_GET_CONST(changeOrder_, vector<Models::ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder>) };
    inline vector<Models::ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder> changeOrder() { DARABONBA_PTR_GET(changeOrder_, vector<Models::ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder>) };
    inline ListRecentChangeOrderResponseBodyChangeOrderList& setChangeOrder(const vector<Models::ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder> & changeOrder) { DARABONBA_PTR_SET_VALUE(changeOrder_, changeOrder) };
    inline ListRecentChangeOrderResponseBodyChangeOrderList& setChangeOrder(vector<Models::ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder> && changeOrder) { DARABONBA_PTR_SET_RVALUE(changeOrder_, changeOrder) };


  protected:
    std::shared_ptr<vector<Models::ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder>> changeOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
