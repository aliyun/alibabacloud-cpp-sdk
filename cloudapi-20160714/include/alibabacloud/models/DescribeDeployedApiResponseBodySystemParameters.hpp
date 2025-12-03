// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYSYSTEMPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYSYSTEMPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeployedApiResponseBodySystemParametersSystemParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployedApiResponseBodySystemParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApiResponseBodySystemParameters& obj) { 
      DARABONBA_PTR_TO_JSON(SystemParameter, systemParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApiResponseBodySystemParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(SystemParameter, systemParameter_);
    };
    DescribeDeployedApiResponseBodySystemParameters() = default ;
    DescribeDeployedApiResponseBodySystemParameters(const DescribeDeployedApiResponseBodySystemParameters &) = default ;
    DescribeDeployedApiResponseBodySystemParameters(DescribeDeployedApiResponseBodySystemParameters &&) = default ;
    DescribeDeployedApiResponseBodySystemParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApiResponseBodySystemParameters() = default ;
    DescribeDeployedApiResponseBodySystemParameters& operator=(const DescribeDeployedApiResponseBodySystemParameters &) = default ;
    DescribeDeployedApiResponseBodySystemParameters& operator=(DescribeDeployedApiResponseBodySystemParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->systemParameter_ == nullptr; };
    // systemParameter Field Functions 
    bool hasSystemParameter() const { return this->systemParameter_ != nullptr;};
    void deleteSystemParameter() { this->systemParameter_ = nullptr;};
    inline const vector<Models::DescribeDeployedApiResponseBodySystemParametersSystemParameter> & systemParameter() const { DARABONBA_PTR_GET_CONST(systemParameter_, vector<Models::DescribeDeployedApiResponseBodySystemParametersSystemParameter>) };
    inline vector<Models::DescribeDeployedApiResponseBodySystemParametersSystemParameter> systemParameter() { DARABONBA_PTR_GET(systemParameter_, vector<Models::DescribeDeployedApiResponseBodySystemParametersSystemParameter>) };
    inline DescribeDeployedApiResponseBodySystemParameters& setSystemParameter(const vector<Models::DescribeDeployedApiResponseBodySystemParametersSystemParameter> & systemParameter) { DARABONBA_PTR_SET_VALUE(systemParameter_, systemParameter) };
    inline DescribeDeployedApiResponseBodySystemParameters& setSystemParameter(vector<Models::DescribeDeployedApiResponseBodySystemParametersSystemParameter> && systemParameter) { DARABONBA_PTR_SET_RVALUE(systemParameter_, systemParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeDeployedApiResponseBodySystemParametersSystemParameter>> systemParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
