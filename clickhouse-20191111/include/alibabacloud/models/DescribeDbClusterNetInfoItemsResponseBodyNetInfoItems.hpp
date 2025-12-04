// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFOITEMSRESPONSEBODYNETINFOITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFOITEMSRESPONSEBODYNETINFOITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems& obj) { 
      DARABONBA_PTR_TO_JSON(NetInfoItem, netInfoItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems& obj) { 
      DARABONBA_PTR_FROM_JSON(NetInfoItem, netInfoItem_);
    };
    DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems() = default ;
    DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems(const DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems &) = default ;
    DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems(DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems &&) = default ;
    DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems() = default ;
    DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems& operator=(const DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems &) = default ;
    DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems& operator=(DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->netInfoItem_ == nullptr; };
    // netInfoItem Field Functions 
    bool hasNetInfoItem() const { return this->netInfoItem_ != nullptr;};
    void deleteNetInfoItem() { this->netInfoItem_ = nullptr;};
    inline const vector<Models::DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem> & netInfoItem() const { DARABONBA_PTR_GET_CONST(netInfoItem_, vector<Models::DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem>) };
    inline vector<Models::DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem> netInfoItem() { DARABONBA_PTR_GET(netInfoItem_, vector<Models::DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem>) };
    inline DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems& setNetInfoItem(const vector<Models::DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem> & netInfoItem) { DARABONBA_PTR_SET_VALUE(netInfoItem_, netInfoItem) };
    inline DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems& setNetInfoItem(vector<Models::DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem> && netInfoItem) { DARABONBA_PTR_SET_RVALUE(netInfoItem_, netInfoItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem>> netInfoItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
