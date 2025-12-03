// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEABOLISHAPITASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEABOLISHAPITASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAbolishApiTaskResponseBodyApiAbolishResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAbolishApiTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAbolishApiTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiAbolishResults, apiAbolishResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAbolishApiTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiAbolishResults, apiAbolishResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAbolishApiTaskResponseBody() = default ;
    DescribeAbolishApiTaskResponseBody(const DescribeAbolishApiTaskResponseBody &) = default ;
    DescribeAbolishApiTaskResponseBody(DescribeAbolishApiTaskResponseBody &&) = default ;
    DescribeAbolishApiTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAbolishApiTaskResponseBody() = default ;
    DescribeAbolishApiTaskResponseBody& operator=(const DescribeAbolishApiTaskResponseBody &) = default ;
    DescribeAbolishApiTaskResponseBody& operator=(DescribeAbolishApiTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiAbolishResults_ == nullptr
        && return this->requestId_ == nullptr; };
    // apiAbolishResults Field Functions 
    bool hasApiAbolishResults() const { return this->apiAbolishResults_ != nullptr;};
    void deleteApiAbolishResults() { this->apiAbolishResults_ = nullptr;};
    inline const DescribeAbolishApiTaskResponseBodyApiAbolishResults & apiAbolishResults() const { DARABONBA_PTR_GET_CONST(apiAbolishResults_, DescribeAbolishApiTaskResponseBodyApiAbolishResults) };
    inline DescribeAbolishApiTaskResponseBodyApiAbolishResults apiAbolishResults() { DARABONBA_PTR_GET(apiAbolishResults_, DescribeAbolishApiTaskResponseBodyApiAbolishResults) };
    inline DescribeAbolishApiTaskResponseBody& setApiAbolishResults(const DescribeAbolishApiTaskResponseBodyApiAbolishResults & apiAbolishResults) { DARABONBA_PTR_SET_VALUE(apiAbolishResults_, apiAbolishResults) };
    inline DescribeAbolishApiTaskResponseBody& setApiAbolishResults(DescribeAbolishApiTaskResponseBodyApiAbolishResults && apiAbolishResults) { DARABONBA_PTR_SET_RVALUE(apiAbolishResults_, apiAbolishResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAbolishApiTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result returned.
    std::shared_ptr<DescribeAbolishApiTaskResponseBodyApiAbolishResults> apiAbolishResults_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
