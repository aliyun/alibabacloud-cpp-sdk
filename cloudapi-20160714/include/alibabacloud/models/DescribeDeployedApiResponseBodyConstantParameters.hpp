// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYCONSTANTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYCONSTANTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyConstantParametersConstantParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployedApiResponseBodyConstantParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApiResponseBodyConstantParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ConstantParameter, constantParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApiResponseBodyConstantParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ConstantParameter, constantParameter_);
    };
    DescribeDeployedApiResponseBodyConstantParameters() = default ;
    DescribeDeployedApiResponseBodyConstantParameters(const DescribeDeployedApiResponseBodyConstantParameters &) = default ;
    DescribeDeployedApiResponseBodyConstantParameters(DescribeDeployedApiResponseBodyConstantParameters &&) = default ;
    DescribeDeployedApiResponseBodyConstantParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApiResponseBodyConstantParameters() = default ;
    DescribeDeployedApiResponseBodyConstantParameters& operator=(const DescribeDeployedApiResponseBodyConstantParameters &) = default ;
    DescribeDeployedApiResponseBodyConstantParameters& operator=(DescribeDeployedApiResponseBodyConstantParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->constantParameter_ == nullptr; };
    // constantParameter Field Functions 
    bool hasConstantParameter() const { return this->constantParameter_ != nullptr;};
    void deleteConstantParameter() { this->constantParameter_ = nullptr;};
    inline const vector<Models::DescribeDeployedApiResponseBodyConstantParametersConstantParameter> & constantParameter() const { DARABONBA_PTR_GET_CONST(constantParameter_, vector<Models::DescribeDeployedApiResponseBodyConstantParametersConstantParameter>) };
    inline vector<Models::DescribeDeployedApiResponseBodyConstantParametersConstantParameter> constantParameter() { DARABONBA_PTR_GET(constantParameter_, vector<Models::DescribeDeployedApiResponseBodyConstantParametersConstantParameter>) };
    inline DescribeDeployedApiResponseBodyConstantParameters& setConstantParameter(const vector<Models::DescribeDeployedApiResponseBodyConstantParametersConstantParameter> & constantParameter) { DARABONBA_PTR_SET_VALUE(constantParameter_, constantParameter) };
    inline DescribeDeployedApiResponseBodyConstantParameters& setConstantParameter(vector<Models::DescribeDeployedApiResponseBodyConstantParametersConstantParameter> && constantParameter) { DARABONBA_PTR_SET_RVALUE(constantParameter_, constantParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeDeployedApiResponseBodyConstantParametersConstantParameter>> constantParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
