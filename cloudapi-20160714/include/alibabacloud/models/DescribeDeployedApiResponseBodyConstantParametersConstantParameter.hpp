// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYCONSTANTPARAMETERSCONSTANTPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYCONSTANTPARAMETERSCONSTANTPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployedApiResponseBodyConstantParametersConstantParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApiResponseBodyConstantParametersConstantParameter& obj) { 
      DARABONBA_PTR_TO_JSON(ConstantValue, constantValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(ServiceParameterName, serviceParameterName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApiResponseBodyConstantParametersConstantParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(ConstantValue, constantValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(ServiceParameterName, serviceParameterName_);
    };
    DescribeDeployedApiResponseBodyConstantParametersConstantParameter() = default ;
    DescribeDeployedApiResponseBodyConstantParametersConstantParameter(const DescribeDeployedApiResponseBodyConstantParametersConstantParameter &) = default ;
    DescribeDeployedApiResponseBodyConstantParametersConstantParameter(DescribeDeployedApiResponseBodyConstantParametersConstantParameter &&) = default ;
    DescribeDeployedApiResponseBodyConstantParametersConstantParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApiResponseBodyConstantParametersConstantParameter() = default ;
    DescribeDeployedApiResponseBodyConstantParametersConstantParameter& operator=(const DescribeDeployedApiResponseBodyConstantParametersConstantParameter &) = default ;
    DescribeDeployedApiResponseBodyConstantParametersConstantParameter& operator=(DescribeDeployedApiResponseBodyConstantParametersConstantParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->constantValue_ == nullptr
        && return this->description_ == nullptr && return this->location_ == nullptr && return this->serviceParameterName_ == nullptr; };
    // constantValue Field Functions 
    bool hasConstantValue() const { return this->constantValue_ != nullptr;};
    void deleteConstantValue() { this->constantValue_ = nullptr;};
    inline string constantValue() const { DARABONBA_PTR_GET_DEFAULT(constantValue_, "") };
    inline DescribeDeployedApiResponseBodyConstantParametersConstantParameter& setConstantValue(string constantValue) { DARABONBA_PTR_SET_VALUE(constantValue_, constantValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDeployedApiResponseBodyConstantParametersConstantParameter& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DescribeDeployedApiResponseBodyConstantParametersConstantParameter& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // serviceParameterName Field Functions 
    bool hasServiceParameterName() const { return this->serviceParameterName_ != nullptr;};
    void deleteServiceParameterName() { this->serviceParameterName_ = nullptr;};
    inline string serviceParameterName() const { DARABONBA_PTR_GET_DEFAULT(serviceParameterName_, "") };
    inline DescribeDeployedApiResponseBodyConstantParametersConstantParameter& setServiceParameterName(string serviceParameterName) { DARABONBA_PTR_SET_VALUE(serviceParameterName_, serviceParameterName) };


  protected:
    // The constant value.
    std::shared_ptr<string> constantValue_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The parameter location. Valid values: BODY, HEAD, QUERY, and PATH.
    std::shared_ptr<string> location_ = nullptr;
    // The name of the backend service parameter.
    std::shared_ptr<string> serviceParameterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
