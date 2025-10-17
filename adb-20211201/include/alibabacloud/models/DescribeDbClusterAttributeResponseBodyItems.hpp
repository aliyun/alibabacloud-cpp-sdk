// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterAttributeResponseBodyItemsDBCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClusterAttributeResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAttributeResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBCluster, DBCluster_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAttributeResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBCluster, DBCluster_);
    };
    DescribeDBClusterAttributeResponseBodyItems() = default ;
    DescribeDBClusterAttributeResponseBodyItems(const DescribeDBClusterAttributeResponseBodyItems &) = default ;
    DescribeDBClusterAttributeResponseBodyItems(DescribeDBClusterAttributeResponseBodyItems &&) = default ;
    DescribeDBClusterAttributeResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAttributeResponseBodyItems() = default ;
    DescribeDBClusterAttributeResponseBodyItems& operator=(const DescribeDBClusterAttributeResponseBodyItems &) = default ;
    DescribeDBClusterAttributeResponseBodyItems& operator=(DescribeDBClusterAttributeResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBCluster_ == nullptr; };
    // DBCluster Field Functions 
    bool hasDBCluster() const { return this->DBCluster_ != nullptr;};
    void deleteDBCluster() { this->DBCluster_ = nullptr;};
    inline const vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBCluster> & DBCluster() const { DARABONBA_PTR_GET_CONST(DBCluster_, vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBCluster>) };
    inline vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBCluster> DBCluster() { DARABONBA_PTR_GET(DBCluster_, vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBCluster>) };
    inline DescribeDBClusterAttributeResponseBodyItems& setDBCluster(const vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBCluster> & DBCluster) { DARABONBA_PTR_SET_VALUE(DBCluster_, DBCluster) };
    inline DescribeDBClusterAttributeResponseBodyItems& setDBCluster(vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBCluster> && DBCluster) { DARABONBA_PTR_SET_RVALUE(DBCluster_, DBCluster) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBCluster>> DBCluster_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
