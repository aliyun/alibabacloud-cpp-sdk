// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYSYSTEMPARAMETERSSYSTEMPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYSYSTEMPARAMETERSSYSTEMPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiResponseBodySystemParametersSystemParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiResponseBodySystemParametersSystemParameter& obj) { 
      DARABONBA_PTR_TO_JSON(DemoValue, demoValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(ServiceParameterName, serviceParameterName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiResponseBodySystemParametersSystemParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(DemoValue, demoValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(ServiceParameterName, serviceParameterName_);
    };
    DescribeApiResponseBodySystemParametersSystemParameter() = default ;
    DescribeApiResponseBodySystemParametersSystemParameter(const DescribeApiResponseBodySystemParametersSystemParameter &) = default ;
    DescribeApiResponseBodySystemParametersSystemParameter(DescribeApiResponseBodySystemParametersSystemParameter &&) = default ;
    DescribeApiResponseBodySystemParametersSystemParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiResponseBodySystemParametersSystemParameter() = default ;
    DescribeApiResponseBodySystemParametersSystemParameter& operator=(const DescribeApiResponseBodySystemParametersSystemParameter &) = default ;
    DescribeApiResponseBodySystemParametersSystemParameter& operator=(DescribeApiResponseBodySystemParametersSystemParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->demoValue_ == nullptr
        && return this->description_ == nullptr && return this->location_ == nullptr && return this->parameterName_ == nullptr && return this->serviceParameterName_ == nullptr; };
    // demoValue Field Functions 
    bool hasDemoValue() const { return this->demoValue_ != nullptr;};
    void deleteDemoValue() { this->demoValue_ = nullptr;};
    inline string demoValue() const { DARABONBA_PTR_GET_DEFAULT(demoValue_, "") };
    inline DescribeApiResponseBodySystemParametersSystemParameter& setDemoValue(string demoValue) { DARABONBA_PTR_SET_VALUE(demoValue_, demoValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApiResponseBodySystemParametersSystemParameter& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DescribeApiResponseBodySystemParametersSystemParameter& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline DescribeApiResponseBodySystemParametersSystemParameter& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // serviceParameterName Field Functions 
    bool hasServiceParameterName() const { return this->serviceParameterName_ != nullptr;};
    void deleteServiceParameterName() { this->serviceParameterName_ = nullptr;};
    inline string serviceParameterName() const { DARABONBA_PTR_GET_DEFAULT(serviceParameterName_, "") };
    inline DescribeApiResponseBodySystemParametersSystemParameter& setServiceParameterName(string serviceParameterName) { DARABONBA_PTR_SET_VALUE(serviceParameterName_, serviceParameterName) };


  protected:
    // The example value.
    std::shared_ptr<string> demoValue_ = nullptr;
    // The parameter description.
    std::shared_ptr<string> description_ = nullptr;
    // The parameter location. Valid values: BODY, HEAD, QUERY, and PATH.
    std::shared_ptr<string> location_ = nullptr;
    // The system parameter. Valid values: CaClientIp, CaDomain, CaRequestHandleTime, CaAppId, CaRequestId, CaHttpSchema, and CaProxy.
    std::shared_ptr<string> parameterName_ = nullptr;
    // The mapped parameter name in the backend service.
    std::shared_ptr<string> serviceParameterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
