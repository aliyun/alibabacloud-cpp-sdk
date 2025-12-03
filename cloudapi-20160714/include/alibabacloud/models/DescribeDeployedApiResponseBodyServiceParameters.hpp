// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYSERVICEPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYSERVICEPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyServiceParametersServiceParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployedApiResponseBodyServiceParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApiResponseBodyServiceParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceParameter, serviceParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApiResponseBodyServiceParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceParameter, serviceParameter_);
    };
    DescribeDeployedApiResponseBodyServiceParameters() = default ;
    DescribeDeployedApiResponseBodyServiceParameters(const DescribeDeployedApiResponseBodyServiceParameters &) = default ;
    DescribeDeployedApiResponseBodyServiceParameters(DescribeDeployedApiResponseBodyServiceParameters &&) = default ;
    DescribeDeployedApiResponseBodyServiceParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApiResponseBodyServiceParameters() = default ;
    DescribeDeployedApiResponseBodyServiceParameters& operator=(const DescribeDeployedApiResponseBodyServiceParameters &) = default ;
    DescribeDeployedApiResponseBodyServiceParameters& operator=(DescribeDeployedApiResponseBodyServiceParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceParameter_ == nullptr; };
    // serviceParameter Field Functions 
    bool hasServiceParameter() const { return this->serviceParameter_ != nullptr;};
    void deleteServiceParameter() { this->serviceParameter_ = nullptr;};
    inline const vector<Models::DescribeDeployedApiResponseBodyServiceParametersServiceParameter> & serviceParameter() const { DARABONBA_PTR_GET_CONST(serviceParameter_, vector<Models::DescribeDeployedApiResponseBodyServiceParametersServiceParameter>) };
    inline vector<Models::DescribeDeployedApiResponseBodyServiceParametersServiceParameter> serviceParameter() { DARABONBA_PTR_GET(serviceParameter_, vector<Models::DescribeDeployedApiResponseBodyServiceParametersServiceParameter>) };
    inline DescribeDeployedApiResponseBodyServiceParameters& setServiceParameter(const vector<Models::DescribeDeployedApiResponseBodyServiceParametersServiceParameter> & serviceParameter) { DARABONBA_PTR_SET_VALUE(serviceParameter_, serviceParameter) };
    inline DescribeDeployedApiResponseBodyServiceParameters& setServiceParameter(vector<Models::DescribeDeployedApiResponseBodyServiceParametersServiceParameter> && serviceParameter) { DARABONBA_PTR_SET_RVALUE(serviceParameter_, serviceParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeDeployedApiResponseBodyServiceParametersServiceParameter>> serviceParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
