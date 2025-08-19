// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nodepools, nodepools_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nodepools, nodepools_);
    };
    DescribeClusterNodePoolsResponseBody() = default ;
    DescribeClusterNodePoolsResponseBody(const DescribeClusterNodePoolsResponseBody &) = default ;
    DescribeClusterNodePoolsResponseBody(DescribeClusterNodePoolsResponseBody &&) = default ;
    DescribeClusterNodePoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBody() = default ;
    DescribeClusterNodePoolsResponseBody& operator=(const DescribeClusterNodePoolsResponseBody &) = default ;
    DescribeClusterNodePoolsResponseBody& operator=(DescribeClusterNodePoolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodepools_ != nullptr; };
    // nodepools Field Functions 
    bool hasNodepools() const { return this->nodepools_ != nullptr;};
    void deleteNodepools() { this->nodepools_ = nullptr;};
    inline const vector<DescribeClusterNodePoolsResponseBodyNodepools> & nodepools() const { DARABONBA_PTR_GET_CONST(nodepools_, vector<DescribeClusterNodePoolsResponseBodyNodepools>) };
    inline vector<DescribeClusterNodePoolsResponseBodyNodepools> nodepools() { DARABONBA_PTR_GET(nodepools_, vector<DescribeClusterNodePoolsResponseBodyNodepools>) };
    inline DescribeClusterNodePoolsResponseBody& setNodepools(const vector<DescribeClusterNodePoolsResponseBodyNodepools> & nodepools) { DARABONBA_PTR_SET_VALUE(nodepools_, nodepools) };
    inline DescribeClusterNodePoolsResponseBody& setNodepools(vector<DescribeClusterNodePoolsResponseBodyNodepools> && nodepools) { DARABONBA_PTR_SET_RVALUE(nodepools_, nodepools) };


  protected:
    // The node pools.
    std::shared_ptr<vector<DescribeClusterNodePoolsResponseBodyNodepools>> nodepools_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
