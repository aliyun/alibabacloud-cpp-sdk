// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYENDPOINTRESPONSEBODYDBPROXYNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYENDPOINTRESPONSEBODYDBPROXYNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBProxyEndpointResponseBodyDBProxyNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyEndpointResponseBodyDBProxyNodes& obj) { 
      DARABONBA_PTR_TO_JSON(DBProxyNodes, DBProxyNodes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyEndpointResponseBodyDBProxyNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(DBProxyNodes, DBProxyNodes_);
    };
    DescribeDBProxyEndpointResponseBodyDBProxyNodes() = default ;
    DescribeDBProxyEndpointResponseBodyDBProxyNodes(const DescribeDBProxyEndpointResponseBodyDBProxyNodes &) = default ;
    DescribeDBProxyEndpointResponseBodyDBProxyNodes(DescribeDBProxyEndpointResponseBodyDBProxyNodes &&) = default ;
    DescribeDBProxyEndpointResponseBodyDBProxyNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyEndpointResponseBodyDBProxyNodes() = default ;
    DescribeDBProxyEndpointResponseBodyDBProxyNodes& operator=(const DescribeDBProxyEndpointResponseBodyDBProxyNodes &) = default ;
    DescribeDBProxyEndpointResponseBodyDBProxyNodes& operator=(DescribeDBProxyEndpointResponseBodyDBProxyNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBProxyNodes_ == nullptr; };
    // DBProxyNodes Field Functions 
    bool hasDBProxyNodes() const { return this->DBProxyNodes_ != nullptr;};
    void deleteDBProxyNodes() { this->DBProxyNodes_ = nullptr;};
    inline const vector<Models::DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes> & DBProxyNodes() const { DARABONBA_PTR_GET_CONST(DBProxyNodes_, vector<Models::DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes>) };
    inline vector<Models::DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes> DBProxyNodes() { DARABONBA_PTR_GET(DBProxyNodes_, vector<Models::DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes>) };
    inline DescribeDBProxyEndpointResponseBodyDBProxyNodes& setDBProxyNodes(const vector<Models::DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes> & DBProxyNodes) { DARABONBA_PTR_SET_VALUE(DBProxyNodes_, DBProxyNodes) };
    inline DescribeDBProxyEndpointResponseBodyDBProxyNodes& setDBProxyNodes(vector<Models::DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes> && DBProxyNodes) { DARABONBA_PTR_SET_RVALUE(DBProxyNodes_, DBProxyNodes) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes>> DBProxyNodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
