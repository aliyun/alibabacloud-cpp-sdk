// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBILLOVERVIEWRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYBILLOVERVIEWRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryBillOverviewResponseBodyDataItemsItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryBillOverviewResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBillOverviewResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBillOverviewResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
    };
    QueryBillOverviewResponseBodyDataItems() = default ;
    QueryBillOverviewResponseBodyDataItems(const QueryBillOverviewResponseBodyDataItems &) = default ;
    QueryBillOverviewResponseBodyDataItems(QueryBillOverviewResponseBodyDataItems &&) = default ;
    QueryBillOverviewResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBillOverviewResponseBodyDataItems() = default ;
    QueryBillOverviewResponseBodyDataItems& operator=(const QueryBillOverviewResponseBodyDataItems &) = default ;
    QueryBillOverviewResponseBodyDataItems& operator=(QueryBillOverviewResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->item_ != nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<Models::QueryBillOverviewResponseBodyDataItemsItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<Models::QueryBillOverviewResponseBodyDataItemsItem>) };
    inline vector<Models::QueryBillOverviewResponseBodyDataItemsItem> item() { DARABONBA_PTR_GET(item_, vector<Models::QueryBillOverviewResponseBodyDataItemsItem>) };
    inline QueryBillOverviewResponseBodyDataItems& setItem(const vector<Models::QueryBillOverviewResponseBodyDataItemsItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline QueryBillOverviewResponseBodyDataItems& setItem(vector<Models::QueryBillOverviewResponseBodyDataItemsItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


  protected:
    std::shared_ptr<vector<Models::QueryBillOverviewResponseBodyDataItemsItem>> item_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
