// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYSERVICEPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYSERVICEPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiResponseBodyServiceParametersServiceParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiResponseBodyServiceParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiResponseBodyServiceParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceParameter, serviceParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiResponseBodyServiceParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceParameter, serviceParameter_);
    };
    DescribeApiResponseBodyServiceParameters() = default ;
    DescribeApiResponseBodyServiceParameters(const DescribeApiResponseBodyServiceParameters &) = default ;
    DescribeApiResponseBodyServiceParameters(DescribeApiResponseBodyServiceParameters &&) = default ;
    DescribeApiResponseBodyServiceParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiResponseBodyServiceParameters() = default ;
    DescribeApiResponseBodyServiceParameters& operator=(const DescribeApiResponseBodyServiceParameters &) = default ;
    DescribeApiResponseBodyServiceParameters& operator=(DescribeApiResponseBodyServiceParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceParameter_ == nullptr; };
    // serviceParameter Field Functions 
    bool hasServiceParameter() const { return this->serviceParameter_ != nullptr;};
    void deleteServiceParameter() { this->serviceParameter_ = nullptr;};
    inline const vector<Models::DescribeApiResponseBodyServiceParametersServiceParameter> & serviceParameter() const { DARABONBA_PTR_GET_CONST(serviceParameter_, vector<Models::DescribeApiResponseBodyServiceParametersServiceParameter>) };
    inline vector<Models::DescribeApiResponseBodyServiceParametersServiceParameter> serviceParameter() { DARABONBA_PTR_GET(serviceParameter_, vector<Models::DescribeApiResponseBodyServiceParametersServiceParameter>) };
    inline DescribeApiResponseBodyServiceParameters& setServiceParameter(const vector<Models::DescribeApiResponseBodyServiceParametersServiceParameter> & serviceParameter) { DARABONBA_PTR_SET_VALUE(serviceParameter_, serviceParameter) };
    inline DescribeApiResponseBodyServiceParameters& setServiceParameter(vector<Models::DescribeApiResponseBodyServiceParametersServiceParameter> && serviceParameter) { DARABONBA_PTR_SET_RVALUE(serviceParameter_, serviceParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiResponseBodyServiceParametersServiceParameter>> serviceParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
