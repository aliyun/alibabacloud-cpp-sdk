// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTEDBCLUSTERNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTEDBCLUSTERNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterNode, DBClusterNode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterNode, DBClusterNode_);
    };
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes &&) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes& operator=(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes& operator=(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterNode_ == nullptr; };
    // DBClusterNode Field Functions 
    bool hasDBClusterNode() const { return this->DBClusterNode_ != nullptr;};
    void deleteDBClusterNode() { this->DBClusterNode_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode> & DBClusterNode() const { DARABONBA_PTR_GET_CONST(DBClusterNode_, vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode>) };
    inline vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode> DBClusterNode() { DARABONBA_PTR_GET(DBClusterNode_, vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode>) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes& setDBClusterNode(const vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode> & DBClusterNode) { DARABONBA_PTR_SET_VALUE(DBClusterNode_, DBClusterNode) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes& setDBClusterNode(vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode> && DBClusterNode) { DARABONBA_PTR_SET_RVALUE(DBClusterNode_, DBClusterNode) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode>> DBClusterNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
