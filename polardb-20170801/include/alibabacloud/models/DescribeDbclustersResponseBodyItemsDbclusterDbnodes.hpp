// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYITEMSDBCLUSTERDBNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYITEMSDBCLUSTERDBNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClustersResponseBodyItemsDBClusterDBNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersResponseBodyItemsDBClusterDBNodes& obj) { 
      DARABONBA_PTR_TO_JSON(DBNode, DBNode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersResponseBodyItemsDBClusterDBNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNode, DBNode_);
    };
    DescribeDBClustersResponseBodyItemsDBClusterDBNodes() = default ;
    DescribeDBClustersResponseBodyItemsDBClusterDBNodes(const DescribeDBClustersResponseBodyItemsDBClusterDBNodes &) = default ;
    DescribeDBClustersResponseBodyItemsDBClusterDBNodes(DescribeDBClustersResponseBodyItemsDBClusterDBNodes &&) = default ;
    DescribeDBClustersResponseBodyItemsDBClusterDBNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersResponseBodyItemsDBClusterDBNodes() = default ;
    DescribeDBClustersResponseBodyItemsDBClusterDBNodes& operator=(const DescribeDBClustersResponseBodyItemsDBClusterDBNodes &) = default ;
    DescribeDBClustersResponseBodyItemsDBClusterDBNodes& operator=(DescribeDBClustersResponseBodyItemsDBClusterDBNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBNode_ != nullptr; };
    // DBNode Field Functions 
    bool hasDBNode() const { return this->DBNode_ != nullptr;};
    void deleteDBNode() { this->DBNode_ = nullptr;};
    inline const vector<Models::DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode> & DBNode() const { DARABONBA_PTR_GET_CONST(DBNode_, vector<Models::DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode>) };
    inline vector<Models::DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode> DBNode() { DARABONBA_PTR_GET(DBNode_, vector<Models::DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode>) };
    inline DescribeDBClustersResponseBodyItemsDBClusterDBNodes& setDBNode(const vector<Models::DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode> & DBNode) { DARABONBA_PTR_SET_VALUE(DBNode_, DBNode) };
    inline DescribeDBClustersResponseBodyItemsDBClusterDBNodes& setDBNode(vector<Models::DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode> && DBNode) { DARABONBA_PTR_SET_RVALUE(DBNode_, DBNode) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode>> DBNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
