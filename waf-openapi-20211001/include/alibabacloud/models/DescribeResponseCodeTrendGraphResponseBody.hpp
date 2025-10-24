// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESPONSECODETRENDGRAPHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESPONSECODETRENDGRAPHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResponseCodeTrendGraphResponseBodyResponseCodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeResponseCodeTrendGraphResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResponseCodeTrendGraphResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResponseCodes, responseCodes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResponseCodeTrendGraphResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResponseCodes, responseCodes_);
    };
    DescribeResponseCodeTrendGraphResponseBody() = default ;
    DescribeResponseCodeTrendGraphResponseBody(const DescribeResponseCodeTrendGraphResponseBody &) = default ;
    DescribeResponseCodeTrendGraphResponseBody(DescribeResponseCodeTrendGraphResponseBody &&) = default ;
    DescribeResponseCodeTrendGraphResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResponseCodeTrendGraphResponseBody() = default ;
    DescribeResponseCodeTrendGraphResponseBody& operator=(const DescribeResponseCodeTrendGraphResponseBody &) = default ;
    DescribeResponseCodeTrendGraphResponseBody& operator=(DescribeResponseCodeTrendGraphResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->responseCodes_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResponseCodeTrendGraphResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responseCodes Field Functions 
    bool hasResponseCodes() const { return this->responseCodes_ != nullptr;};
    void deleteResponseCodes() { this->responseCodes_ = nullptr;};
    inline const vector<DescribeResponseCodeTrendGraphResponseBodyResponseCodes> & responseCodes() const { DARABONBA_PTR_GET_CONST(responseCodes_, vector<DescribeResponseCodeTrendGraphResponseBodyResponseCodes>) };
    inline vector<DescribeResponseCodeTrendGraphResponseBodyResponseCodes> responseCodes() { DARABONBA_PTR_GET(responseCodes_, vector<DescribeResponseCodeTrendGraphResponseBodyResponseCodes>) };
    inline DescribeResponseCodeTrendGraphResponseBody& setResponseCodes(const vector<DescribeResponseCodeTrendGraphResponseBodyResponseCodes> & responseCodes) { DARABONBA_PTR_SET_VALUE(responseCodes_, responseCodes) };
    inline DescribeResponseCodeTrendGraphResponseBody& setResponseCodes(vector<DescribeResponseCodeTrendGraphResponseBodyResponseCodes> && responseCodes) { DARABONBA_PTR_SET_RVALUE(responseCodes_, responseCodes) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The array of the statistics of the error codes.
    std::shared_ptr<vector<DescribeResponseCodeTrendGraphResponseBodyResponseCodes>> responseCodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
