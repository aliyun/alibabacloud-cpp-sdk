// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSSLOWSQLSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSSLOWSQLSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrdsSlowSqlsResponseBodyItemsItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsSlowSqlsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsSlowSqlsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsSlowSqlsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
    };
    DescribeDrdsSlowSqlsResponseBodyItems() = default ;
    DescribeDrdsSlowSqlsResponseBodyItems(const DescribeDrdsSlowSqlsResponseBodyItems &) = default ;
    DescribeDrdsSlowSqlsResponseBodyItems(DescribeDrdsSlowSqlsResponseBodyItems &&) = default ;
    DescribeDrdsSlowSqlsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsSlowSqlsResponseBodyItems() = default ;
    DescribeDrdsSlowSqlsResponseBodyItems& operator=(const DescribeDrdsSlowSqlsResponseBodyItems &) = default ;
    DescribeDrdsSlowSqlsResponseBodyItems& operator=(DescribeDrdsSlowSqlsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->item_ != nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<Models::DescribeDrdsSlowSqlsResponseBodyItemsItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<Models::DescribeDrdsSlowSqlsResponseBodyItemsItem>) };
    inline vector<Models::DescribeDrdsSlowSqlsResponseBodyItemsItem> item() { DARABONBA_PTR_GET(item_, vector<Models::DescribeDrdsSlowSqlsResponseBodyItemsItem>) };
    inline DescribeDrdsSlowSqlsResponseBodyItems& setItem(const vector<Models::DescribeDrdsSlowSqlsResponseBodyItemsItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline DescribeDrdsSlowSqlsResponseBodyItems& setItem(vector<Models::DescribeDrdsSlowSqlsResponseBodyItemsItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


  protected:
    std::shared_ptr<vector<Models::DescribeDrdsSlowSqlsResponseBodyItemsItem>> item_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
