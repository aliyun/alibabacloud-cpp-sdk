// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEENDPOINTSRESPONSEBODYDATADBINSTANCEENDPOINTSDBINSTANCEENDPOINTNODEITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEENDPOINTSRESPONSEBODYDATADBINSTANCEENDPOINTSDBINSTANCEENDPOINTNODEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItemsNodeItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems& obj) { 
      DARABONBA_PTR_TO_JSON(NodeItem, nodeItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeItem, nodeItem_);
    };
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems() = default ;
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems(const DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems &) = default ;
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems(DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems &&) = default ;
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems() = default ;
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems& operator=(const DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems &) = default ;
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems& operator=(DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeItem_ == nullptr; };
    // nodeItem Field Functions 
    bool hasNodeItem() const { return this->nodeItem_ != nullptr;};
    void deleteNodeItem() { this->nodeItem_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItemsNodeItem> & nodeItem() const { DARABONBA_PTR_GET_CONST(nodeItem_, vector<Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItemsNodeItem>) };
    inline vector<Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItemsNodeItem> nodeItem() { DARABONBA_PTR_GET(nodeItem_, vector<Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItemsNodeItem>) };
    inline DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems& setNodeItem(const vector<Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItemsNodeItem> & nodeItem) { DARABONBA_PTR_SET_VALUE(nodeItem_, nodeItem) };
    inline DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItems& setNodeItem(vector<Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItemsNodeItem> && nodeItem) { DARABONBA_PTR_SET_RVALUE(nodeItem_, nodeItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpointNodeItemsNodeItem>> nodeItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
