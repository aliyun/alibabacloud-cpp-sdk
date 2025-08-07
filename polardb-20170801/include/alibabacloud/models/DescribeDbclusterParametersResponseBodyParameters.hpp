// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPARAMETERSRESPONSEBODYPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPARAMETERSRESPONSEBODYPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterParametersResponseBodyParametersParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterParametersResponseBodyParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterParametersResponseBodyParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterParametersResponseBodyParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
    };
    DescribeDBClusterParametersResponseBodyParameters() = default ;
    DescribeDBClusterParametersResponseBodyParameters(const DescribeDBClusterParametersResponseBodyParameters &) = default ;
    DescribeDBClusterParametersResponseBodyParameters(DescribeDBClusterParametersResponseBodyParameters &&) = default ;
    DescribeDBClusterParametersResponseBodyParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterParametersResponseBodyParameters() = default ;
    DescribeDBClusterParametersResponseBodyParameters& operator=(const DescribeDBClusterParametersResponseBodyParameters &) = default ;
    DescribeDBClusterParametersResponseBodyParameters& operator=(DescribeDBClusterParametersResponseBodyParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameters_ != nullptr; };
    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Models::DescribeDBClusterParametersResponseBodyParametersParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Models::DescribeDBClusterParametersResponseBodyParametersParameters>) };
    inline vector<Models::DescribeDBClusterParametersResponseBodyParametersParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<Models::DescribeDBClusterParametersResponseBodyParametersParameters>) };
    inline DescribeDBClusterParametersResponseBodyParameters& setParameters(const vector<Models::DescribeDBClusterParametersResponseBodyParametersParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeDBClusterParametersResponseBodyParameters& setParameters(vector<Models::DescribeDBClusterParametersResponseBodyParametersParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterParametersResponseBodyParametersParameters>> parameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
