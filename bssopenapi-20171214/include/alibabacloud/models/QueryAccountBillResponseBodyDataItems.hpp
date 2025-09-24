// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTBILLRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTBILLRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAccountBillResponseBodyDataItemsItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryAccountBillResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountBillResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountBillResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
    };
    QueryAccountBillResponseBodyDataItems() = default ;
    QueryAccountBillResponseBodyDataItems(const QueryAccountBillResponseBodyDataItems &) = default ;
    QueryAccountBillResponseBodyDataItems(QueryAccountBillResponseBodyDataItems &&) = default ;
    QueryAccountBillResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountBillResponseBodyDataItems() = default ;
    QueryAccountBillResponseBodyDataItems& operator=(const QueryAccountBillResponseBodyDataItems &) = default ;
    QueryAccountBillResponseBodyDataItems& operator=(QueryAccountBillResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->item_ != nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<Models::QueryAccountBillResponseBodyDataItemsItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<Models::QueryAccountBillResponseBodyDataItemsItem>) };
    inline vector<Models::QueryAccountBillResponseBodyDataItemsItem> item() { DARABONBA_PTR_GET(item_, vector<Models::QueryAccountBillResponseBodyDataItemsItem>) };
    inline QueryAccountBillResponseBodyDataItems& setItem(const vector<Models::QueryAccountBillResponseBodyDataItemsItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline QueryAccountBillResponseBodyDataItems& setItem(vector<Models::QueryAccountBillResponseBodyDataItemsItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


  protected:
    std::shared_ptr<vector<Models::QueryAccountBillResponseBodyDataItemsItem>> item_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
