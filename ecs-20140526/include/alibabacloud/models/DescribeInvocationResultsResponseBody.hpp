// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInvocationResultsResponseBodyInvocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInvocationResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Invocation, invocation_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Invocation, invocation_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInvocationResultsResponseBody() = default ;
    DescribeInvocationResultsResponseBody(const DescribeInvocationResultsResponseBody &) = default ;
    DescribeInvocationResultsResponseBody(DescribeInvocationResultsResponseBody &&) = default ;
    DescribeInvocationResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationResultsResponseBody() = default ;
    DescribeInvocationResultsResponseBody& operator=(const DescribeInvocationResultsResponseBody &) = default ;
    DescribeInvocationResultsResponseBody& operator=(DescribeInvocationResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->invocation_ != nullptr
        && this->requestId_ != nullptr; };
    // invocation Field Functions 
    bool hasInvocation() const { return this->invocation_ != nullptr;};
    void deleteInvocation() { this->invocation_ = nullptr;};
    inline const DescribeInvocationResultsResponseBodyInvocation & invocation() const { DARABONBA_PTR_GET_CONST(invocation_, DescribeInvocationResultsResponseBodyInvocation) };
    inline DescribeInvocationResultsResponseBodyInvocation invocation() { DARABONBA_PTR_GET(invocation_, DescribeInvocationResultsResponseBodyInvocation) };
    inline DescribeInvocationResultsResponseBody& setInvocation(const DescribeInvocationResultsResponseBodyInvocation & invocation) { DARABONBA_PTR_SET_VALUE(invocation_, invocation) };
    inline DescribeInvocationResultsResponseBody& setInvocation(DescribeInvocationResultsResponseBodyInvocation && invocation) { DARABONBA_PTR_SET_RVALUE(invocation_, invocation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInvocationResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the execution results.
    std::shared_ptr<DescribeInvocationResultsResponseBodyInvocation> invocation_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
