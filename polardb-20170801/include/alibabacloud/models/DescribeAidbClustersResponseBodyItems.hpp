// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAIDBClustersResponseBodyItemsDBCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClustersResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClustersResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBCluster, DBCluster_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClustersResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBCluster, DBCluster_);
    };
    DescribeAIDBClustersResponseBodyItems() = default ;
    DescribeAIDBClustersResponseBodyItems(const DescribeAIDBClustersResponseBodyItems &) = default ;
    DescribeAIDBClustersResponseBodyItems(DescribeAIDBClustersResponseBodyItems &&) = default ;
    DescribeAIDBClustersResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClustersResponseBodyItems() = default ;
    DescribeAIDBClustersResponseBodyItems& operator=(const DescribeAIDBClustersResponseBodyItems &) = default ;
    DescribeAIDBClustersResponseBodyItems& operator=(DescribeAIDBClustersResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBCluster_ == nullptr; };
    // DBCluster Field Functions 
    bool hasDBCluster() const { return this->DBCluster_ != nullptr;};
    void deleteDBCluster() { this->DBCluster_ = nullptr;};
    inline const vector<Models::DescribeAIDBClustersResponseBodyItemsDBCluster> & DBCluster() const { DARABONBA_PTR_GET_CONST(DBCluster_, vector<Models::DescribeAIDBClustersResponseBodyItemsDBCluster>) };
    inline vector<Models::DescribeAIDBClustersResponseBodyItemsDBCluster> DBCluster() { DARABONBA_PTR_GET(DBCluster_, vector<Models::DescribeAIDBClustersResponseBodyItemsDBCluster>) };
    inline DescribeAIDBClustersResponseBodyItems& setDBCluster(const vector<Models::DescribeAIDBClustersResponseBodyItemsDBCluster> & DBCluster) { DARABONBA_PTR_SET_VALUE(DBCluster_, DBCluster) };
    inline DescribeAIDBClustersResponseBodyItems& setDBCluster(vector<Models::DescribeAIDBClustersResponseBodyItemsDBCluster> && DBCluster) { DARABONBA_PTR_SET_RVALUE(DBCluster_, DBCluster) };


  protected:
    std::shared_ptr<vector<Models::DescribeAIDBClustersResponseBodyItemsDBCluster>> DBCluster_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
