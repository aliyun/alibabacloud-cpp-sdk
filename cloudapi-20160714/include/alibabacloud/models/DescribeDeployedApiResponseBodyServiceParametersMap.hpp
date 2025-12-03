// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYSERVICEPARAMETERSMAP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYSERVICEPARAMETERSMAP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployedApiResponseBodyServiceParametersMap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApiResponseBodyServiceParametersMap& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceParameterMap, serviceParameterMap_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApiResponseBodyServiceParametersMap& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceParameterMap, serviceParameterMap_);
    };
    DescribeDeployedApiResponseBodyServiceParametersMap() = default ;
    DescribeDeployedApiResponseBodyServiceParametersMap(const DescribeDeployedApiResponseBodyServiceParametersMap &) = default ;
    DescribeDeployedApiResponseBodyServiceParametersMap(DescribeDeployedApiResponseBodyServiceParametersMap &&) = default ;
    DescribeDeployedApiResponseBodyServiceParametersMap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApiResponseBodyServiceParametersMap() = default ;
    DescribeDeployedApiResponseBodyServiceParametersMap& operator=(const DescribeDeployedApiResponseBodyServiceParametersMap &) = default ;
    DescribeDeployedApiResponseBodyServiceParametersMap& operator=(DescribeDeployedApiResponseBodyServiceParametersMap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceParameterMap_ == nullptr; };
    // serviceParameterMap Field Functions 
    bool hasServiceParameterMap() const { return this->serviceParameterMap_ != nullptr;};
    void deleteServiceParameterMap() { this->serviceParameterMap_ = nullptr;};
    inline const vector<Models::DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap> & serviceParameterMap() const { DARABONBA_PTR_GET_CONST(serviceParameterMap_, vector<Models::DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap>) };
    inline vector<Models::DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap> serviceParameterMap() { DARABONBA_PTR_GET(serviceParameterMap_, vector<Models::DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap>) };
    inline DescribeDeployedApiResponseBodyServiceParametersMap& setServiceParameterMap(const vector<Models::DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap> & serviceParameterMap) { DARABONBA_PTR_SET_VALUE(serviceParameterMap_, serviceParameterMap) };
    inline DescribeDeployedApiResponseBodyServiceParametersMap& setServiceParameterMap(vector<Models::DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap> && serviceParameterMap) { DARABONBA_PTR_SET_RVALUE(serviceParameterMap_, serviceParameterMap) };


  protected:
    std::shared_ptr<vector<Models::DescribeDeployedApiResponseBodyServiceParametersMapServiceParameterMap>> serviceParameterMap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
