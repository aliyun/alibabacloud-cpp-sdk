// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBCLUSTERRESPONSEBODYDBINSTANCEDBNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBCLUSTERRESPONSEBODYDBINSTANCEDBNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes& obj) { 
      DARABONBA_PTR_TO_JSON(DBNode, DBNode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNode, DBNode_);
    };
    DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes() = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes(const DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes &) = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes(DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes &&) = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes() = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes& operator=(const DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes &) = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes& operator=(DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBNode_ != nullptr; };
    // DBNode Field Functions 
    bool hasDBNode() const { return this->DBNode_ != nullptr;};
    void deleteDBNode() { this->DBNode_ = nullptr;};
    inline const vector<Models::DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode> & DBNode() const { DARABONBA_PTR_GET_CONST(DBNode_, vector<Models::DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode>) };
    inline vector<Models::DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode> DBNode() { DARABONBA_PTR_GET(DBNode_, vector<Models::DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode>) };
    inline DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes& setDBNode(const vector<Models::DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode> & DBNode) { DARABONBA_PTR_SET_VALUE(DBNode_, DBNode) };
    inline DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes& setDBNode(vector<Models::DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode> && DBNode) { DARABONBA_PTR_SET_RVALUE(DBNode_, DBNode) };


  protected:
    std::shared_ptr<vector<Models::DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode>> DBNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
