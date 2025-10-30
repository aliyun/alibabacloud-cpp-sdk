// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODYRESOURCEGROUPITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODYRESOURCEGROUPITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBResourceGroupResponseBodyResourceGroupItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBResourceGroupResponseBodyResourceGroupItems& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupItem, resourceGroupItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBResourceGroupResponseBodyResourceGroupItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupItem, resourceGroupItem_);
    };
    DescribeDBResourceGroupResponseBodyResourceGroupItems() = default ;
    DescribeDBResourceGroupResponseBodyResourceGroupItems(const DescribeDBResourceGroupResponseBodyResourceGroupItems &) = default ;
    DescribeDBResourceGroupResponseBodyResourceGroupItems(DescribeDBResourceGroupResponseBodyResourceGroupItems &&) = default ;
    DescribeDBResourceGroupResponseBodyResourceGroupItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBResourceGroupResponseBodyResourceGroupItems() = default ;
    DescribeDBResourceGroupResponseBodyResourceGroupItems& operator=(const DescribeDBResourceGroupResponseBodyResourceGroupItems &) = default ;
    DescribeDBResourceGroupResponseBodyResourceGroupItems& operator=(DescribeDBResourceGroupResponseBodyResourceGroupItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceGroupItem_ == nullptr; };
    // resourceGroupItem Field Functions 
    bool hasResourceGroupItem() const { return this->resourceGroupItem_ != nullptr;};
    void deleteResourceGroupItem() { this->resourceGroupItem_ = nullptr;};
    inline const vector<Models::DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem> & resourceGroupItem() const { DARABONBA_PTR_GET_CONST(resourceGroupItem_, vector<Models::DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem>) };
    inline vector<Models::DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem> resourceGroupItem() { DARABONBA_PTR_GET(resourceGroupItem_, vector<Models::DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem>) };
    inline DescribeDBResourceGroupResponseBodyResourceGroupItems& setResourceGroupItem(const vector<Models::DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem> & resourceGroupItem) { DARABONBA_PTR_SET_VALUE(resourceGroupItem_, resourceGroupItem) };
    inline DescribeDBResourceGroupResponseBodyResourceGroupItems& setResourceGroupItem(vector<Models::DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem> && resourceGroupItem) { DARABONBA_PTR_SET_RVALUE(resourceGroupItem_, resourceGroupItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem>> resourceGroupItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
