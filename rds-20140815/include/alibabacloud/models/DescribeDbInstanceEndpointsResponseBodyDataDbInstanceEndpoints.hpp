// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEENDPOINTSRESPONSEBODYDATADBINSTANCEENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEENDPOINTSRESPONSEBODYDATADBINSTANCEENDPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceEndpoint, DBInstanceEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceEndpoint, DBInstanceEndpoint_);
    };
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints() = default ;
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints(const DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints &) = default ;
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints(DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints &&) = default ;
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints() = default ;
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints& operator=(const DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints &) = default ;
    DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints& operator=(DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceEndpoint_ == nullptr; };
    // DBInstanceEndpoint Field Functions 
    bool hasDBInstanceEndpoint() const { return this->DBInstanceEndpoint_ != nullptr;};
    void deleteDBInstanceEndpoint() { this->DBInstanceEndpoint_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint> & DBInstanceEndpoint() const { DARABONBA_PTR_GET_CONST(DBInstanceEndpoint_, vector<Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint>) };
    inline vector<Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint> DBInstanceEndpoint() { DARABONBA_PTR_GET(DBInstanceEndpoint_, vector<Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint>) };
    inline DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints& setDBInstanceEndpoint(const vector<Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint> & DBInstanceEndpoint) { DARABONBA_PTR_SET_VALUE(DBInstanceEndpoint_, DBInstanceEndpoint) };
    inline DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints& setDBInstanceEndpoint(vector<Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint> && DBInstanceEndpoint) { DARABONBA_PTR_SET_RVALUE(DBInstanceEndpoint_, DBInstanceEndpoint) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpointsDBInstanceEndpoint>> DBInstanceEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
