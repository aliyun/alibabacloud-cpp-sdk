// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYSERVICEPARAMETERSSERVICEPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYSERVICEPARAMETERSSERVICEPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiHistoryResponseBodyServiceParametersServiceParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiHistoryResponseBodyServiceParametersServiceParameter& obj) { 
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(ParameterType, parameterType_);
      DARABONBA_PTR_TO_JSON(ServiceParameterName, serviceParameterName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiHistoryResponseBodyServiceParametersServiceParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(ParameterType, parameterType_);
      DARABONBA_PTR_FROM_JSON(ServiceParameterName, serviceParameterName_);
    };
    DescribeApiHistoryResponseBodyServiceParametersServiceParameter() = default ;
    DescribeApiHistoryResponseBodyServiceParametersServiceParameter(const DescribeApiHistoryResponseBodyServiceParametersServiceParameter &) = default ;
    DescribeApiHistoryResponseBodyServiceParametersServiceParameter(DescribeApiHistoryResponseBodyServiceParametersServiceParameter &&) = default ;
    DescribeApiHistoryResponseBodyServiceParametersServiceParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiHistoryResponseBodyServiceParametersServiceParameter() = default ;
    DescribeApiHistoryResponseBodyServiceParametersServiceParameter& operator=(const DescribeApiHistoryResponseBodyServiceParametersServiceParameter &) = default ;
    DescribeApiHistoryResponseBodyServiceParametersServiceParameter& operator=(DescribeApiHistoryResponseBodyServiceParametersServiceParameter &&) = default ;
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
    inline DescribeApiHistoryResponseBodyServiceParametersServiceParameter& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // parameterType Field Functions 
    bool hasParameterType() const { return this->parameterType_ != nullptr;};
    void deleteParameterType() { this->parameterType_ = nullptr;};
    inline string parameterType() const { DARABONBA_PTR_GET_DEFAULT(parameterType_, "") };
    inline DescribeApiHistoryResponseBodyServiceParametersServiceParameter& setParameterType(string parameterType) { DARABONBA_PTR_SET_VALUE(parameterType_, parameterType) };


    // serviceParameterName Field Functions 
    bool hasServiceParameterName() const { return this->serviceParameterName_ != nullptr;};
    void deleteServiceParameterName() { this->serviceParameterName_ = nullptr;};
    inline string serviceParameterName() const { DARABONBA_PTR_GET_DEFAULT(serviceParameterName_, "") };
    inline DescribeApiHistoryResponseBodyServiceParametersServiceParameter& setServiceParameterName(string serviceParameterName) { DARABONBA_PTR_SET_VALUE(serviceParameterName_, serviceParameterName) };


  protected:
    // The parameter location. Valid values: BODY, HEAD, QUERY, and PATH.
    std::shared_ptr<string> location_ = nullptr;
    // The data type of the parameter. Valid values: STRING, NUMBER, and BOOLEAN.
    std::shared_ptr<string> parameterType_ = nullptr;
    // The mapped parameter name in the backend service.
    std::shared_ptr<string> serviceParameterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
