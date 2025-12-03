// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYCUSTOMSYSTEMPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYCUSTOMSYSTEMPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyCustomSystemParametersCustomSystemParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployedApiResponseBodyCustomSystemParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApiResponseBodyCustomSystemParameters& obj) { 
      DARABONBA_PTR_TO_JSON(CustomSystemParameter, customSystemParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApiResponseBodyCustomSystemParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomSystemParameter, customSystemParameter_);
    };
    DescribeDeployedApiResponseBodyCustomSystemParameters() = default ;
    DescribeDeployedApiResponseBodyCustomSystemParameters(const DescribeDeployedApiResponseBodyCustomSystemParameters &) = default ;
    DescribeDeployedApiResponseBodyCustomSystemParameters(DescribeDeployedApiResponseBodyCustomSystemParameters &&) = default ;
    DescribeDeployedApiResponseBodyCustomSystemParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApiResponseBodyCustomSystemParameters() = default ;
    DescribeDeployedApiResponseBodyCustomSystemParameters& operator=(const DescribeDeployedApiResponseBodyCustomSystemParameters &) = default ;
    DescribeDeployedApiResponseBodyCustomSystemParameters& operator=(DescribeDeployedApiResponseBodyCustomSystemParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customSystemParameter_ == nullptr; };
    // customSystemParameter Field Functions 
    bool hasCustomSystemParameter() const { return this->customSystemParameter_ != nullptr;};
    void deleteCustomSystemParameter() { this->customSystemParameter_ = nullptr;};
    inline const vector<Models::DescribeDeployedApiResponseBodyCustomSystemParametersCustomSystemParameter> & customSystemParameter() const { DARABONBA_PTR_GET_CONST(customSystemParameter_, vector<Models::DescribeDeployedApiResponseBodyCustomSystemParametersCustomSystemParameter>) };
    inline vector<Models::DescribeDeployedApiResponseBodyCustomSystemParametersCustomSystemParameter> customSystemParameter() { DARABONBA_PTR_GET(customSystemParameter_, vector<Models::DescribeDeployedApiResponseBodyCustomSystemParametersCustomSystemParameter>) };
    inline DescribeDeployedApiResponseBodyCustomSystemParameters& setCustomSystemParameter(const vector<Models::DescribeDeployedApiResponseBodyCustomSystemParametersCustomSystemParameter> & customSystemParameter) { DARABONBA_PTR_SET_VALUE(customSystemParameter_, customSystemParameter) };
    inline DescribeDeployedApiResponseBodyCustomSystemParameters& setCustomSystemParameter(vector<Models::DescribeDeployedApiResponseBodyCustomSystemParametersCustomSystemParameter> && customSystemParameter) { DARABONBA_PTR_SET_RVALUE(customSystemParameter_, customSystemParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeDeployedApiResponseBodyCustomSystemParametersCustomSystemParameter>> customSystemParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
