// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiResponseBodyRequestParametersRequestParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiResponseBodyRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiResponseBodyRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(RequestParameter, requestParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiResponseBodyRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestParameter, requestParameter_);
    };
    DescribeApiResponseBodyRequestParameters() = default ;
    DescribeApiResponseBodyRequestParameters(const DescribeApiResponseBodyRequestParameters &) = default ;
    DescribeApiResponseBodyRequestParameters(DescribeApiResponseBodyRequestParameters &&) = default ;
    DescribeApiResponseBodyRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiResponseBodyRequestParameters() = default ;
    DescribeApiResponseBodyRequestParameters& operator=(const DescribeApiResponseBodyRequestParameters &) = default ;
    DescribeApiResponseBodyRequestParameters& operator=(DescribeApiResponseBodyRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestParameter_ == nullptr; };
    // requestParameter Field Functions 
    bool hasRequestParameter() const { return this->requestParameter_ != nullptr;};
    void deleteRequestParameter() { this->requestParameter_ = nullptr;};
    inline const vector<Models::DescribeApiResponseBodyRequestParametersRequestParameter> & requestParameter() const { DARABONBA_PTR_GET_CONST(requestParameter_, vector<Models::DescribeApiResponseBodyRequestParametersRequestParameter>) };
    inline vector<Models::DescribeApiResponseBodyRequestParametersRequestParameter> requestParameter() { DARABONBA_PTR_GET(requestParameter_, vector<Models::DescribeApiResponseBodyRequestParametersRequestParameter>) };
    inline DescribeApiResponseBodyRequestParameters& setRequestParameter(const vector<Models::DescribeApiResponseBodyRequestParametersRequestParameter> & requestParameter) { DARABONBA_PTR_SET_VALUE(requestParameter_, requestParameter) };
    inline DescribeApiResponseBodyRequestParameters& setRequestParameter(vector<Models::DescribeApiResponseBodyRequestParametersRequestParameter> && requestParameter) { DARABONBA_PTR_SET_RVALUE(requestParameter_, requestParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiResponseBodyRequestParametersRequestParameter>> requestParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
