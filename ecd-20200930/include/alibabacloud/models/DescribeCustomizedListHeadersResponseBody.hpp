// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDLISTHEADERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDLISTHEADERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCustomizedListHeadersResponseBodyHeaders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCustomizedListHeadersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizedListHeadersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizedListHeadersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCustomizedListHeadersResponseBody() = default ;
    DescribeCustomizedListHeadersResponseBody(const DescribeCustomizedListHeadersResponseBody &) = default ;
    DescribeCustomizedListHeadersResponseBody(DescribeCustomizedListHeadersResponseBody &&) = default ;
    DescribeCustomizedListHeadersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizedListHeadersResponseBody() = default ;
    DescribeCustomizedListHeadersResponseBody& operator=(const DescribeCustomizedListHeadersResponseBody &) = default ;
    DescribeCustomizedListHeadersResponseBody& operator=(DescribeCustomizedListHeadersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->requestId_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const vector<DescribeCustomizedListHeadersResponseBodyHeaders> & headers() const { DARABONBA_PTR_GET_CONST(headers_, vector<DescribeCustomizedListHeadersResponseBodyHeaders>) };
    inline vector<DescribeCustomizedListHeadersResponseBodyHeaders> headers() { DARABONBA_PTR_GET(headers_, vector<DescribeCustomizedListHeadersResponseBodyHeaders>) };
    inline DescribeCustomizedListHeadersResponseBody& setHeaders(const vector<DescribeCustomizedListHeadersResponseBodyHeaders> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeCustomizedListHeadersResponseBody& setHeaders(vector<DescribeCustomizedListHeadersResponseBodyHeaders> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomizedListHeadersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeCustomizedListHeadersResponseBodyHeaders>> headers_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
