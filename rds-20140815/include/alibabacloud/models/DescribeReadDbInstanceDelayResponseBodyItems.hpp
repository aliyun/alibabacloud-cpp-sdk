// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREADDBINSTANCEDELAYRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREADDBINSTANCEDELAYRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReadDBInstanceDelayResponseBodyItemsItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeReadDBInstanceDelayResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReadDBInstanceDelayResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReadDBInstanceDelayResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
    };
    DescribeReadDBInstanceDelayResponseBodyItems() = default ;
    DescribeReadDBInstanceDelayResponseBodyItems(const DescribeReadDBInstanceDelayResponseBodyItems &) = default ;
    DescribeReadDBInstanceDelayResponseBodyItems(DescribeReadDBInstanceDelayResponseBodyItems &&) = default ;
    DescribeReadDBInstanceDelayResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReadDBInstanceDelayResponseBodyItems() = default ;
    DescribeReadDBInstanceDelayResponseBodyItems& operator=(const DescribeReadDBInstanceDelayResponseBodyItems &) = default ;
    DescribeReadDBInstanceDelayResponseBodyItems& operator=(DescribeReadDBInstanceDelayResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::DescribeReadDBInstanceDelayResponseBodyItemsItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::DescribeReadDBInstanceDelayResponseBodyItemsItems>) };
    inline vector<Models::DescribeReadDBInstanceDelayResponseBodyItemsItems> items() { DARABONBA_PTR_GET(items_, vector<Models::DescribeReadDBInstanceDelayResponseBodyItemsItems>) };
    inline DescribeReadDBInstanceDelayResponseBodyItems& setItems(const vector<Models::DescribeReadDBInstanceDelayResponseBodyItemsItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeReadDBInstanceDelayResponseBodyItems& setItems(vector<Models::DescribeReadDBInstanceDelayResponseBodyItemsItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    std::shared_ptr<vector<Models::DescribeReadDBInstanceDelayResponseBodyItemsItems>> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
