// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCEITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstanceItemsInstanceItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeInstancesResponseBodyInstanceItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstanceItems& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceItem, instanceItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstanceItems& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceItem, instanceItem_);
    };
    DescribeInstancesResponseBodyInstanceItems() = default ;
    DescribeInstancesResponseBodyInstanceItems(const DescribeInstancesResponseBodyInstanceItems &) = default ;
    DescribeInstancesResponseBodyInstanceItems(DescribeInstancesResponseBodyInstanceItems &&) = default ;
    DescribeInstancesResponseBodyInstanceItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstanceItems() = default ;
    DescribeInstancesResponseBodyInstanceItems& operator=(const DescribeInstancesResponseBodyInstanceItems &) = default ;
    DescribeInstancesResponseBodyInstanceItems& operator=(DescribeInstancesResponseBodyInstanceItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceItem_ != nullptr; };
    // instanceItem Field Functions 
    bool hasInstanceItem() const { return this->instanceItem_ != nullptr;};
    void deleteInstanceItem() { this->instanceItem_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyInstanceItemsInstanceItem> & instanceItem() const { DARABONBA_PTR_GET_CONST(instanceItem_, vector<Models::DescribeInstancesResponseBodyInstanceItemsInstanceItem>) };
    inline vector<Models::DescribeInstancesResponseBodyInstanceItemsInstanceItem> instanceItem() { DARABONBA_PTR_GET(instanceItem_, vector<Models::DescribeInstancesResponseBodyInstanceItemsInstanceItem>) };
    inline DescribeInstancesResponseBodyInstanceItems& setInstanceItem(const vector<Models::DescribeInstancesResponseBodyInstanceItemsInstanceItem> & instanceItem) { DARABONBA_PTR_SET_VALUE(instanceItem_, instanceItem) };
    inline DescribeInstancesResponseBodyInstanceItems& setInstanceItem(vector<Models::DescribeInstancesResponseBodyInstanceItemsInstanceItem> && instanceItem) { DARABONBA_PTR_SET_RVALUE(instanceItem_, instanceItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyInstanceItemsInstanceItem>> instanceItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
