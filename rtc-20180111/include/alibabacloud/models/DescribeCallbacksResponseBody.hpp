// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECALLBACKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECALLBACKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCallbacksResponseBodyCallbacks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeCallbacksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCallbacksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Callbacks, callbacks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCallbacksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Callbacks, callbacks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCallbacksResponseBody() = default ;
    DescribeCallbacksResponseBody(const DescribeCallbacksResponseBody &) = default ;
    DescribeCallbacksResponseBody(DescribeCallbacksResponseBody &&) = default ;
    DescribeCallbacksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCallbacksResponseBody() = default ;
    DescribeCallbacksResponseBody& operator=(const DescribeCallbacksResponseBody &) = default ;
    DescribeCallbacksResponseBody& operator=(DescribeCallbacksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbacks_ == nullptr
        && return this->requestId_ == nullptr; };
    // callbacks Field Functions 
    bool hasCallbacks() const { return this->callbacks_ != nullptr;};
    void deleteCallbacks() { this->callbacks_ = nullptr;};
    inline const vector<DescribeCallbacksResponseBodyCallbacks> & callbacks() const { DARABONBA_PTR_GET_CONST(callbacks_, vector<DescribeCallbacksResponseBodyCallbacks>) };
    inline vector<DescribeCallbacksResponseBodyCallbacks> callbacks() { DARABONBA_PTR_GET(callbacks_, vector<DescribeCallbacksResponseBodyCallbacks>) };
    inline DescribeCallbacksResponseBody& setCallbacks(const vector<DescribeCallbacksResponseBodyCallbacks> & callbacks) { DARABONBA_PTR_SET_VALUE(callbacks_, callbacks) };
    inline DescribeCallbacksResponseBody& setCallbacks(vector<DescribeCallbacksResponseBodyCallbacks> && callbacks) { DARABONBA_PTR_SET_RVALUE(callbacks_, callbacks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCallbacksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeCallbacksResponseBodyCallbacks>> callbacks_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
