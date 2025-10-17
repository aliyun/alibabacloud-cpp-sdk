// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLCALLBACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLCALLBACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAllCallbackResponseBodyCallbacks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAllCallbackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllCallbackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Callbacks, callbacks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllCallbackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Callbacks, callbacks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAllCallbackResponseBody() = default ;
    DescribeAllCallbackResponseBody(const DescribeAllCallbackResponseBody &) = default ;
    DescribeAllCallbackResponseBody(DescribeAllCallbackResponseBody &&) = default ;
    DescribeAllCallbackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllCallbackResponseBody() = default ;
    DescribeAllCallbackResponseBody& operator=(const DescribeAllCallbackResponseBody &) = default ;
    DescribeAllCallbackResponseBody& operator=(DescribeAllCallbackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbacks_ == nullptr
        && return this->requestId_ == nullptr; };
    // callbacks Field Functions 
    bool hasCallbacks() const { return this->callbacks_ != nullptr;};
    void deleteCallbacks() { this->callbacks_ = nullptr;};
    inline const vector<DescribeAllCallbackResponseBodyCallbacks> & callbacks() const { DARABONBA_PTR_GET_CONST(callbacks_, vector<DescribeAllCallbackResponseBodyCallbacks>) };
    inline vector<DescribeAllCallbackResponseBodyCallbacks> callbacks() { DARABONBA_PTR_GET(callbacks_, vector<DescribeAllCallbackResponseBodyCallbacks>) };
    inline DescribeAllCallbackResponseBody& setCallbacks(const vector<DescribeAllCallbackResponseBodyCallbacks> & callbacks) { DARABONBA_PTR_SET_VALUE(callbacks_, callbacks) };
    inline DescribeAllCallbackResponseBody& setCallbacks(vector<DescribeAllCallbackResponseBodyCallbacks> && callbacks) { DARABONBA_PTR_SET_RVALUE(callbacks_, callbacks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllCallbackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeAllCallbackResponseBodyCallbacks>> callbacks_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
