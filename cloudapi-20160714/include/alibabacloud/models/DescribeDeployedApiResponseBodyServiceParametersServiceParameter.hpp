// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYSERVICEPARAMETERSSERVICEPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYSERVICEPARAMETERSSERVICEPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployedApiResponseBodyServiceParametersServiceParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApiResponseBodyServiceParametersServiceParameter& obj) { 
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(ParameterType, parameterType_);
      DARABONBA_PTR_TO_JSON(ServiceParameterName, serviceParameterName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApiResponseBodyServiceParametersServiceParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(ParameterType, parameterType_);
      DARABONBA_PTR_FROM_JSON(ServiceParameterName, serviceParameterName_);
    };
    DescribeDeployedApiResponseBodyServiceParametersServiceParameter() = default ;
    DescribeDeployedApiResponseBodyServiceParametersServiceParameter(const DescribeDeployedApiResponseBodyServiceParametersServiceParameter &) = default ;
    DescribeDeployedApiResponseBodyServiceParametersServiceParameter(DescribeDeployedApiResponseBodyServiceParametersServiceParameter &&) = default ;
    DescribeDeployedApiResponseBodyServiceParametersServiceParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApiResponseBodyServiceParametersServiceParameter() = default ;
    DescribeDeployedApiResponseBodyServiceParametersServiceParameter& operator=(const DescribeDeployedApiResponseBodyServiceParametersServiceParameter &) = default ;
    DescribeDeployedApiResponseBodyServiceParametersServiceParameter& operator=(DescribeDeployedApiResponseBodyServiceParametersServiceParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->location_ == nullptr
        && return this->parameterType_ == nullptr && return this->serviceParameterName_ == nullptr; };
    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DescribeDeployedApiResponseBodyServiceParametersServiceParameter& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // parameterType Field Functions 
    bool hasParameterType() const { return this->parameterType_ != nullptr;};
    void deleteParameterType() { this->parameterType_ = nullptr;};
    inline string parameterType() const { DARABONBA_PTR_GET_DEFAULT(parameterType_, "") };
    inline DescribeDeployedApiResponseBodyServiceParametersServiceParameter& setParameterType(string parameterType) { DARABONBA_PTR_SET_VALUE(parameterType_, parameterType) };


    // serviceParameterName Field Functions 
    bool hasServiceParameterName() const { return this->serviceParameterName_ != nullptr;};
    void deleteServiceParameterName() { this->serviceParameterName_ = nullptr;};
    inline string serviceParameterName() const { DARABONBA_PTR_GET_DEFAULT(serviceParameterName_, "") };
    inline DescribeDeployedApiResponseBodyServiceParametersServiceParameter& setServiceParameterName(string serviceParameterName) { DARABONBA_PTR_SET_VALUE(serviceParameterName_, serviceParameterName) };


  protected:
    // The parameter location. Valid values: BODY, HEAD, QUERY, and PATH.
    std::shared_ptr<string> location_ = nullptr;
    // The data type of the back-end service parameter.
    std::shared_ptr<string> parameterType_ = nullptr;
    // The name of the backend service parameter.
    std::shared_ptr<string> serviceParameterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
