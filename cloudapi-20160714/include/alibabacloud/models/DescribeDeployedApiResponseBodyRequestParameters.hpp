// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyRequestParametersRequestParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployedApiResponseBodyRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApiResponseBodyRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(RequestParameter, requestParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApiResponseBodyRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestParameter, requestParameter_);
    };
    DescribeDeployedApiResponseBodyRequestParameters() = default ;
    DescribeDeployedApiResponseBodyRequestParameters(const DescribeDeployedApiResponseBodyRequestParameters &) = default ;
    DescribeDeployedApiResponseBodyRequestParameters(DescribeDeployedApiResponseBodyRequestParameters &&) = default ;
    DescribeDeployedApiResponseBodyRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApiResponseBodyRequestParameters() = default ;
    DescribeDeployedApiResponseBodyRequestParameters& operator=(const DescribeDeployedApiResponseBodyRequestParameters &) = default ;
    DescribeDeployedApiResponseBodyRequestParameters& operator=(DescribeDeployedApiResponseBodyRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestParameter_ == nullptr; };
    // requestParameter Field Functions 
    bool hasRequestParameter() const { return this->requestParameter_ != nullptr;};
    void deleteRequestParameter() { this->requestParameter_ = nullptr;};
    inline const vector<Models::DescribeDeployedApiResponseBodyRequestParametersRequestParameter> & requestParameter() const { DARABONBA_PTR_GET_CONST(requestParameter_, vector<Models::DescribeDeployedApiResponseBodyRequestParametersRequestParameter>) };
    inline vector<Models::DescribeDeployedApiResponseBodyRequestParametersRequestParameter> requestParameter() { DARABONBA_PTR_GET(requestParameter_, vector<Models::DescribeDeployedApiResponseBodyRequestParametersRequestParameter>) };
    inline DescribeDeployedApiResponseBodyRequestParameters& setRequestParameter(const vector<Models::DescribeDeployedApiResponseBodyRequestParametersRequestParameter> & requestParameter) { DARABONBA_PTR_SET_VALUE(requestParameter_, requestParameter) };
    inline DescribeDeployedApiResponseBodyRequestParameters& setRequestParameter(vector<Models::DescribeDeployedApiResponseBodyRequestParametersRequestParameter> && requestParameter) { DARABONBA_PTR_SET_RVALUE(requestParameter_, requestParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeDeployedApiResponseBodyRequestParametersRequestParameter>> requestParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
