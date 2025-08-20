// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClustersResponseBodyItemsDBCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClustersResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBCluster, DBCluster_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBCluster, DBCluster_);
    };
    DescribeDBClustersResponseBodyItems() = default ;
    DescribeDBClustersResponseBodyItems(const DescribeDBClustersResponseBodyItems &) = default ;
    DescribeDBClustersResponseBodyItems(DescribeDBClustersResponseBodyItems &&) = default ;
    DescribeDBClustersResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersResponseBodyItems() = default ;
    DescribeDBClustersResponseBodyItems& operator=(const DescribeDBClustersResponseBodyItems &) = default ;
    DescribeDBClustersResponseBodyItems& operator=(DescribeDBClustersResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBCluster_ != nullptr; };
    // DBCluster Field Functions 
    bool hasDBCluster() const { return this->DBCluster_ != nullptr;};
    void deleteDBCluster() { this->DBCluster_ = nullptr;};
    inline const vector<Models::DescribeDBClustersResponseBodyItemsDBCluster> & DBCluster() const { DARABONBA_PTR_GET_CONST(DBCluster_, vector<Models::DescribeDBClustersResponseBodyItemsDBCluster>) };
    inline vector<Models::DescribeDBClustersResponseBodyItemsDBCluster> DBCluster() { DARABONBA_PTR_GET(DBCluster_, vector<Models::DescribeDBClustersResponseBodyItemsDBCluster>) };
    inline DescribeDBClustersResponseBodyItems& setDBCluster(const vector<Models::DescribeDBClustersResponseBodyItemsDBCluster> & DBCluster) { DARABONBA_PTR_SET_VALUE(DBCluster_, DBCluster) };
    inline DescribeDBClustersResponseBodyItems& setDBCluster(vector<Models::DescribeDBClustersResponseBodyItemsDBCluster> && DBCluster) { DARABONBA_PTR_SET_RVALUE(DBCluster_, DBCluster) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClustersResponseBodyItemsDBCluster>> DBCluster_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
