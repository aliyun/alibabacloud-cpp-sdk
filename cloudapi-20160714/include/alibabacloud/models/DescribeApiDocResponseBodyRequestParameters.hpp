// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIDOCRESPONSEBODYREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIDOCRESPONSEBODYREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiDocResponseBodyRequestParametersRequestParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiDocResponseBodyRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiDocResponseBodyRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(RequestParameter, requestParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiDocResponseBodyRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestParameter, requestParameter_);
    };
    DescribeApiDocResponseBodyRequestParameters() = default ;
    DescribeApiDocResponseBodyRequestParameters(const DescribeApiDocResponseBodyRequestParameters &) = default ;
    DescribeApiDocResponseBodyRequestParameters(DescribeApiDocResponseBodyRequestParameters &&) = default ;
    DescribeApiDocResponseBodyRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiDocResponseBodyRequestParameters() = default ;
    DescribeApiDocResponseBodyRequestParameters& operator=(const DescribeApiDocResponseBodyRequestParameters &) = default ;
    DescribeApiDocResponseBodyRequestParameters& operator=(DescribeApiDocResponseBodyRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestParameter_ == nullptr; };
    // requestParameter Field Functions 
    bool hasRequestParameter() const { return this->requestParameter_ != nullptr;};
    void deleteRequestParameter() { this->requestParameter_ = nullptr;};
    inline const vector<Models::DescribeApiDocResponseBodyRequestParametersRequestParameter> & requestParameter() const { DARABONBA_PTR_GET_CONST(requestParameter_, vector<Models::DescribeApiDocResponseBodyRequestParametersRequestParameter>) };
    inline vector<Models::DescribeApiDocResponseBodyRequestParametersRequestParameter> requestParameter() { DARABONBA_PTR_GET(requestParameter_, vector<Models::DescribeApiDocResponseBodyRequestParametersRequestParameter>) };
    inline DescribeApiDocResponseBodyRequestParameters& setRequestParameter(const vector<Models::DescribeApiDocResponseBodyRequestParametersRequestParameter> & requestParameter) { DARABONBA_PTR_SET_VALUE(requestParameter_, requestParameter) };
    inline DescribeApiDocResponseBodyRequestParameters& setRequestParameter(vector<Models::DescribeApiDocResponseBodyRequestParametersRequestParameter> && requestParameter) { DARABONBA_PTR_SET_RVALUE(requestParameter_, requestParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiDocResponseBodyRequestParametersRequestParameter>> requestParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
