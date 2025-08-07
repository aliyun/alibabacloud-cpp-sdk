// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPARAMETERSRESPONSEBODYRUNNINGPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPARAMETERSRESPONSEBODYRUNNINGPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterParametersResponseBodyRunningParametersParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterParametersResponseBodyRunningParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterParametersResponseBodyRunningParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Parameter, parameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterParametersResponseBodyRunningParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Parameter, parameter_);
    };
    DescribeDBClusterParametersResponseBodyRunningParameters() = default ;
    DescribeDBClusterParametersResponseBodyRunningParameters(const DescribeDBClusterParametersResponseBodyRunningParameters &) = default ;
    DescribeDBClusterParametersResponseBodyRunningParameters(DescribeDBClusterParametersResponseBodyRunningParameters &&) = default ;
    DescribeDBClusterParametersResponseBodyRunningParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterParametersResponseBodyRunningParameters() = default ;
    DescribeDBClusterParametersResponseBodyRunningParameters& operator=(const DescribeDBClusterParametersResponseBodyRunningParameters &) = default ;
    DescribeDBClusterParametersResponseBodyRunningParameters& operator=(DescribeDBClusterParametersResponseBodyRunningParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameter_ != nullptr; };
    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline const vector<Models::DescribeDBClusterParametersResponseBodyRunningParametersParameter> & parameter() const { DARABONBA_PTR_GET_CONST(parameter_, vector<Models::DescribeDBClusterParametersResponseBodyRunningParametersParameter>) };
    inline vector<Models::DescribeDBClusterParametersResponseBodyRunningParametersParameter> parameter() { DARABONBA_PTR_GET(parameter_, vector<Models::DescribeDBClusterParametersResponseBodyRunningParametersParameter>) };
    inline DescribeDBClusterParametersResponseBodyRunningParameters& setParameter(const vector<Models::DescribeDBClusterParametersResponseBodyRunningParametersParameter> & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
    inline DescribeDBClusterParametersResponseBodyRunningParameters& setParameter(vector<Models::DescribeDBClusterParametersResponseBodyRunningParametersParameter> && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterParametersResponseBodyRunningParametersParameter>> parameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
