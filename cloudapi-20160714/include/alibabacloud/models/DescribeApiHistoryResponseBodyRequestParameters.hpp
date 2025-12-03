// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyRequestParametersRequestParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiHistoryResponseBodyRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiHistoryResponseBodyRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(RequestParameter, requestParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiHistoryResponseBodyRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestParameter, requestParameter_);
    };
    DescribeApiHistoryResponseBodyRequestParameters() = default ;
    DescribeApiHistoryResponseBodyRequestParameters(const DescribeApiHistoryResponseBodyRequestParameters &) = default ;
    DescribeApiHistoryResponseBodyRequestParameters(DescribeApiHistoryResponseBodyRequestParameters &&) = default ;
    DescribeApiHistoryResponseBodyRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiHistoryResponseBodyRequestParameters() = default ;
    DescribeApiHistoryResponseBodyRequestParameters& operator=(const DescribeApiHistoryResponseBodyRequestParameters &) = default ;
    DescribeApiHistoryResponseBodyRequestParameters& operator=(DescribeApiHistoryResponseBodyRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestParameter_ == nullptr; };
    // requestParameter Field Functions 
    bool hasRequestParameter() const { return this->requestParameter_ != nullptr;};
    void deleteRequestParameter() { this->requestParameter_ = nullptr;};
    inline const vector<Models::DescribeApiHistoryResponseBodyRequestParametersRequestParameter> & requestParameter() const { DARABONBA_PTR_GET_CONST(requestParameter_, vector<Models::DescribeApiHistoryResponseBodyRequestParametersRequestParameter>) };
    inline vector<Models::DescribeApiHistoryResponseBodyRequestParametersRequestParameter> requestParameter() { DARABONBA_PTR_GET(requestParameter_, vector<Models::DescribeApiHistoryResponseBodyRequestParametersRequestParameter>) };
    inline DescribeApiHistoryResponseBodyRequestParameters& setRequestParameter(const vector<Models::DescribeApiHistoryResponseBodyRequestParametersRequestParameter> & requestParameter) { DARABONBA_PTR_SET_VALUE(requestParameter_, requestParameter) };
    inline DescribeApiHistoryResponseBodyRequestParameters& setRequestParameter(vector<Models::DescribeApiHistoryResponseBodyRequestParametersRequestParameter> && requestParameter) { DARABONBA_PTR_SET_RVALUE(requestParameter_, requestParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiHistoryResponseBodyRequestParametersRequestParameter>> requestParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
