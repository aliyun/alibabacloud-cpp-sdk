// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYSERVICEPARAMETERSMAP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYSERVICEPARAMETERSMAP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiResponseBodyServiceParametersMapServiceParameterMap.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiResponseBodyServiceParametersMap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiResponseBodyServiceParametersMap& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceParameterMap, serviceParameterMap_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiResponseBodyServiceParametersMap& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceParameterMap, serviceParameterMap_);
    };
    DescribeApiResponseBodyServiceParametersMap() = default ;
    DescribeApiResponseBodyServiceParametersMap(const DescribeApiResponseBodyServiceParametersMap &) = default ;
    DescribeApiResponseBodyServiceParametersMap(DescribeApiResponseBodyServiceParametersMap &&) = default ;
    DescribeApiResponseBodyServiceParametersMap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiResponseBodyServiceParametersMap() = default ;
    DescribeApiResponseBodyServiceParametersMap& operator=(const DescribeApiResponseBodyServiceParametersMap &) = default ;
    DescribeApiResponseBodyServiceParametersMap& operator=(DescribeApiResponseBodyServiceParametersMap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceParameterMap_ == nullptr; };
    // serviceParameterMap Field Functions 
    bool hasServiceParameterMap() const { return this->serviceParameterMap_ != nullptr;};
    void deleteServiceParameterMap() { this->serviceParameterMap_ = nullptr;};
    inline const vector<Models::DescribeApiResponseBodyServiceParametersMapServiceParameterMap> & serviceParameterMap() const { DARABONBA_PTR_GET_CONST(serviceParameterMap_, vector<Models::DescribeApiResponseBodyServiceParametersMapServiceParameterMap>) };
    inline vector<Models::DescribeApiResponseBodyServiceParametersMapServiceParameterMap> serviceParameterMap() { DARABONBA_PTR_GET(serviceParameterMap_, vector<Models::DescribeApiResponseBodyServiceParametersMapServiceParameterMap>) };
    inline DescribeApiResponseBodyServiceParametersMap& setServiceParameterMap(const vector<Models::DescribeApiResponseBodyServiceParametersMapServiceParameterMap> & serviceParameterMap) { DARABONBA_PTR_SET_VALUE(serviceParameterMap_, serviceParameterMap) };
    inline DescribeApiResponseBodyServiceParametersMap& setServiceParameterMap(vector<Models::DescribeApiResponseBodyServiceParametersMapServiceParameterMap> && serviceParameterMap) { DARABONBA_PTR_SET_RVALUE(serviceParameterMap_, serviceParameterMap) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiResponseBodyServiceParametersMapServiceParameterMap>> serviceParameterMap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
