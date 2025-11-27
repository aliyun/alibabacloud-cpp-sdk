// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODYCONFIGPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODYCONFIGPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeParametersResponseBodyConfigParametersDBInstanceParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeParametersResponseBodyConfigParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParametersResponseBodyConfigParameters& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceParameter, DBInstanceParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParametersResponseBodyConfigParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceParameter, DBInstanceParameter_);
    };
    DescribeParametersResponseBodyConfigParameters() = default ;
    DescribeParametersResponseBodyConfigParameters(const DescribeParametersResponseBodyConfigParameters &) = default ;
    DescribeParametersResponseBodyConfigParameters(DescribeParametersResponseBodyConfigParameters &&) = default ;
    DescribeParametersResponseBodyConfigParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParametersResponseBodyConfigParameters() = default ;
    DescribeParametersResponseBodyConfigParameters& operator=(const DescribeParametersResponseBodyConfigParameters &) = default ;
    DescribeParametersResponseBodyConfigParameters& operator=(DescribeParametersResponseBodyConfigParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceParameter_ == nullptr; };
    // DBInstanceParameter Field Functions 
    bool hasDBInstanceParameter() const { return this->DBInstanceParameter_ != nullptr;};
    void deleteDBInstanceParameter() { this->DBInstanceParameter_ = nullptr;};
    inline const vector<Models::DescribeParametersResponseBodyConfigParametersDBInstanceParameter> & DBInstanceParameter() const { DARABONBA_PTR_GET_CONST(DBInstanceParameter_, vector<Models::DescribeParametersResponseBodyConfigParametersDBInstanceParameter>) };
    inline vector<Models::DescribeParametersResponseBodyConfigParametersDBInstanceParameter> DBInstanceParameter() { DARABONBA_PTR_GET(DBInstanceParameter_, vector<Models::DescribeParametersResponseBodyConfigParametersDBInstanceParameter>) };
    inline DescribeParametersResponseBodyConfigParameters& setDBInstanceParameter(const vector<Models::DescribeParametersResponseBodyConfigParametersDBInstanceParameter> & DBInstanceParameter) { DARABONBA_PTR_SET_VALUE(DBInstanceParameter_, DBInstanceParameter) };
    inline DescribeParametersResponseBodyConfigParameters& setDBInstanceParameter(vector<Models::DescribeParametersResponseBodyConfigParametersDBInstanceParameter> && DBInstanceParameter) { DARABONBA_PTR_SET_RVALUE(DBInstanceParameter_, DBInstanceParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeParametersResponseBodyConfigParametersDBInstanceParameter>> DBInstanceParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
