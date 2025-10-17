// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSWITHBACKUPSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSWITHBACKUPSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClustersWithBackupsResponseBodyItemsDBCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClustersWithBackupsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersWithBackupsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBCluster, DBCluster_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersWithBackupsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBCluster, DBCluster_);
    };
    DescribeDBClustersWithBackupsResponseBodyItems() = default ;
    DescribeDBClustersWithBackupsResponseBodyItems(const DescribeDBClustersWithBackupsResponseBodyItems &) = default ;
    DescribeDBClustersWithBackupsResponseBodyItems(DescribeDBClustersWithBackupsResponseBodyItems &&) = default ;
    DescribeDBClustersWithBackupsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersWithBackupsResponseBodyItems() = default ;
    DescribeDBClustersWithBackupsResponseBodyItems& operator=(const DescribeDBClustersWithBackupsResponseBodyItems &) = default ;
    DescribeDBClustersWithBackupsResponseBodyItems& operator=(DescribeDBClustersWithBackupsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBCluster_ == nullptr; };
    // DBCluster Field Functions 
    bool hasDBCluster() const { return this->DBCluster_ != nullptr;};
    void deleteDBCluster() { this->DBCluster_ = nullptr;};
    inline const vector<Models::DescribeDBClustersWithBackupsResponseBodyItemsDBCluster> & DBCluster() const { DARABONBA_PTR_GET_CONST(DBCluster_, vector<Models::DescribeDBClustersWithBackupsResponseBodyItemsDBCluster>) };
    inline vector<Models::DescribeDBClustersWithBackupsResponseBodyItemsDBCluster> DBCluster() { DARABONBA_PTR_GET(DBCluster_, vector<Models::DescribeDBClustersWithBackupsResponseBodyItemsDBCluster>) };
    inline DescribeDBClustersWithBackupsResponseBodyItems& setDBCluster(const vector<Models::DescribeDBClustersWithBackupsResponseBodyItemsDBCluster> & DBCluster) { DARABONBA_PTR_SET_VALUE(DBCluster_, DBCluster) };
    inline DescribeDBClustersWithBackupsResponseBodyItems& setDBCluster(vector<Models::DescribeDBClustersWithBackupsResponseBodyItemsDBCluster> && DBCluster) { DARABONBA_PTR_SET_RVALUE(DBCluster_, DBCluster) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClustersWithBackupsResponseBodyItemsDBCluster>> DBCluster_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
