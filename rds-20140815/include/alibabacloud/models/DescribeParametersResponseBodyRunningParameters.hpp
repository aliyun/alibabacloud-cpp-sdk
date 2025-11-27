// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODYRUNNINGPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODYRUNNINGPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeParametersResponseBodyRunningParametersDBInstanceParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeParametersResponseBodyRunningParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParametersResponseBodyRunningParameters& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceParameter, DBInstanceParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParametersResponseBodyRunningParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceParameter, DBInstanceParameter_);
    };
    DescribeParametersResponseBodyRunningParameters() = default ;
    DescribeParametersResponseBodyRunningParameters(const DescribeParametersResponseBodyRunningParameters &) = default ;
    DescribeParametersResponseBodyRunningParameters(DescribeParametersResponseBodyRunningParameters &&) = default ;
    DescribeParametersResponseBodyRunningParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParametersResponseBodyRunningParameters() = default ;
    DescribeParametersResponseBodyRunningParameters& operator=(const DescribeParametersResponseBodyRunningParameters &) = default ;
    DescribeParametersResponseBodyRunningParameters& operator=(DescribeParametersResponseBodyRunningParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceParameter_ == nullptr; };
    // DBInstanceParameter Field Functions 
    bool hasDBInstanceParameter() const { return this->DBInstanceParameter_ != nullptr;};
    void deleteDBInstanceParameter() { this->DBInstanceParameter_ = nullptr;};
    inline const vector<Models::DescribeParametersResponseBodyRunningParametersDBInstanceParameter> & DBInstanceParameter() const { DARABONBA_PTR_GET_CONST(DBInstanceParameter_, vector<Models::DescribeParametersResponseBodyRunningParametersDBInstanceParameter>) };
    inline vector<Models::DescribeParametersResponseBodyRunningParametersDBInstanceParameter> DBInstanceParameter() { DARABONBA_PTR_GET(DBInstanceParameter_, vector<Models::DescribeParametersResponseBodyRunningParametersDBInstanceParameter>) };
    inline DescribeParametersResponseBodyRunningParameters& setDBInstanceParameter(const vector<Models::DescribeParametersResponseBodyRunningParametersDBInstanceParameter> & DBInstanceParameter) { DARABONBA_PTR_SET_VALUE(DBInstanceParameter_, DBInstanceParameter) };
    inline DescribeParametersResponseBodyRunningParameters& setDBInstanceParameter(vector<Models::DescribeParametersResponseBodyRunningParametersDBInstanceParameter> && DBInstanceParameter) { DARABONBA_PTR_SET_RVALUE(DBInstanceParameter_, DBInstanceParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeParametersResponseBodyRunningParametersDBInstanceParameter>> DBInstanceParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
