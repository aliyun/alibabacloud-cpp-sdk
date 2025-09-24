// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSPLITITEMBILLRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYSPLITITEMBILLRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySplitItemBillResponseBodyDataItemsItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySplitItemBillResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySplitItemBillResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySplitItemBillResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
    };
    QuerySplitItemBillResponseBodyDataItems() = default ;
    QuerySplitItemBillResponseBodyDataItems(const QuerySplitItemBillResponseBodyDataItems &) = default ;
    QuerySplitItemBillResponseBodyDataItems(QuerySplitItemBillResponseBodyDataItems &&) = default ;
    QuerySplitItemBillResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySplitItemBillResponseBodyDataItems() = default ;
    QuerySplitItemBillResponseBodyDataItems& operator=(const QuerySplitItemBillResponseBodyDataItems &) = default ;
    QuerySplitItemBillResponseBodyDataItems& operator=(QuerySplitItemBillResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->item_ != nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<Models::QuerySplitItemBillResponseBodyDataItemsItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<Models::QuerySplitItemBillResponseBodyDataItemsItem>) };
    inline vector<Models::QuerySplitItemBillResponseBodyDataItemsItem> item() { DARABONBA_PTR_GET(item_, vector<Models::QuerySplitItemBillResponseBodyDataItemsItem>) };
    inline QuerySplitItemBillResponseBodyDataItems& setItem(const vector<Models::QuerySplitItemBillResponseBodyDataItemsItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline QuerySplitItemBillResponseBodyDataItems& setItem(vector<Models::QuerySplitItemBillResponseBodyDataItemsItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


  protected:
    std::shared_ptr<vector<Models::QuerySplitItemBillResponseBodyDataItemsItem>> item_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
