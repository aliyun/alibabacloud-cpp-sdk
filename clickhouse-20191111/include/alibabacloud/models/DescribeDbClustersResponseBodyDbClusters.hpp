// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYDBCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYDBCLUSTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClustersResponseBodyDBClustersDBCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClustersResponseBodyDBClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersResponseBodyDBClusters& obj) { 
      DARABONBA_PTR_TO_JSON(DBCluster, DBCluster_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersResponseBodyDBClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(DBCluster, DBCluster_);
    };
    DescribeDBClustersResponseBodyDBClusters() = default ;
    DescribeDBClustersResponseBodyDBClusters(const DescribeDBClustersResponseBodyDBClusters &) = default ;
    DescribeDBClustersResponseBodyDBClusters(DescribeDBClustersResponseBodyDBClusters &&) = default ;
    DescribeDBClustersResponseBodyDBClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersResponseBodyDBClusters() = default ;
    DescribeDBClustersResponseBodyDBClusters& operator=(const DescribeDBClustersResponseBodyDBClusters &) = default ;
    DescribeDBClustersResponseBodyDBClusters& operator=(DescribeDBClustersResponseBodyDBClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBCluster_ == nullptr; };
    // DBCluster Field Functions 
    bool hasDBCluster() const { return this->DBCluster_ != nullptr;};
    void deleteDBCluster() { this->DBCluster_ = nullptr;};
    inline const vector<Models::DescribeDBClustersResponseBodyDBClustersDBCluster> & DBCluster() const { DARABONBA_PTR_GET_CONST(DBCluster_, vector<Models::DescribeDBClustersResponseBodyDBClustersDBCluster>) };
    inline vector<Models::DescribeDBClustersResponseBodyDBClustersDBCluster> DBCluster() { DARABONBA_PTR_GET(DBCluster_, vector<Models::DescribeDBClustersResponseBodyDBClustersDBCluster>) };
    inline DescribeDBClustersResponseBodyDBClusters& setDBCluster(const vector<Models::DescribeDBClustersResponseBodyDBClustersDBCluster> & DBCluster) { DARABONBA_PTR_SET_VALUE(DBCluster_, DBCluster) };
    inline DescribeDBClustersResponseBodyDBClusters& setDBCluster(vector<Models::DescribeDBClustersResponseBodyDBClustersDBCluster> && DBCluster) { DARABONBA_PTR_SET_RVALUE(DBCluster_, DBCluster) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClustersResponseBodyDBClustersDBCluster>> DBCluster_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
