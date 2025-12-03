// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYSERVICEPARAMETERSMAPSERVICEPARAMETERMAP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYSERVICEPARAMETERSMAPSERVICEPARAMETERMAP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap& obj) { 
      DARABONBA_PTR_TO_JSON(RequestParameterName, requestParameterName_);
      DARABONBA_PTR_TO_JSON(ServiceParameterName, serviceParameterName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestParameterName, requestParameterName_);
      DARABONBA_PTR_FROM_JSON(ServiceParameterName, serviceParameterName_);
    };
    DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap() = default ;
    DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap(const DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap &) = default ;
    DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap(DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap &&) = default ;
    DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap() = default ;
    DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap& operator=(const DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap &) = default ;
    DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap& operator=(DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestParameterName_ == nullptr
        && return this->serviceParameterName_ == nullptr; };
    // requestParameterName Field Functions 
    bool hasRequestParameterName() const { return this->requestParameterName_ != nullptr;};
    void deleteRequestParameterName() { this->requestParameterName_ = nullptr;};
    inline string requestParameterName() const { DARABONBA_PTR_GET_DEFAULT(requestParameterName_, "") };
    inline DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap& setRequestParameterName(string requestParameterName) { DARABONBA_PTR_SET_VALUE(requestParameterName_, requestParameterName) };


    // serviceParameterName Field Functions 
    bool hasServiceParameterName() const { return this->serviceParameterName_ != nullptr;};
    void deleteServiceParameterName() { this->serviceParameterName_ = nullptr;};
    inline string serviceParameterName() const { DARABONBA_PTR_GET_DEFAULT(serviceParameterName_, "") };
    inline DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap& setServiceParameterName(string serviceParameterName) { DARABONBA_PTR_SET_VALUE(serviceParameterName_, serviceParameterName) };


  protected:
    // The name of the front-end input parameter.
    std::shared_ptr<string> requestParameterName_ = nullptr;
    // The name of the backend service parameter.
    std::shared_ptr<string> serviceParameterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
