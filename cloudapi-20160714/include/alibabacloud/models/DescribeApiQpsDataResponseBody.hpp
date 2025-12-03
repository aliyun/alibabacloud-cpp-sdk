// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIQPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIQPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApiQpsDataResponseBodyCallFails.hpp>
#include <alibabacloud/models/DescribeApiQpsDataResponseBodyCallSuccesses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiQpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiQpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallFails, callFails_);
      DARABONBA_PTR_TO_JSON(CallSuccesses, callSuccesses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiQpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallFails, callFails_);
      DARABONBA_PTR_FROM_JSON(CallSuccesses, callSuccesses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApiQpsDataResponseBody() = default ;
    DescribeApiQpsDataResponseBody(const DescribeApiQpsDataResponseBody &) = default ;
    DescribeApiQpsDataResponseBody(DescribeApiQpsDataResponseBody &&) = default ;
    DescribeApiQpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiQpsDataResponseBody() = default ;
    DescribeApiQpsDataResponseBody& operator=(const DescribeApiQpsDataResponseBody &) = default ;
    DescribeApiQpsDataResponseBody& operator=(DescribeApiQpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callFails_ == nullptr
        && return this->callSuccesses_ == nullptr && return this->requestId_ == nullptr; };
    // callFails Field Functions 
    bool hasCallFails() const { return this->callFails_ != nullptr;};
    void deleteCallFails() { this->callFails_ = nullptr;};
    inline const DescribeApiQpsDataResponseBodyCallFails & callFails() const { DARABONBA_PTR_GET_CONST(callFails_, DescribeApiQpsDataResponseBodyCallFails) };
    inline DescribeApiQpsDataResponseBodyCallFails callFails() { DARABONBA_PTR_GET(callFails_, DescribeApiQpsDataResponseBodyCallFails) };
    inline DescribeApiQpsDataResponseBody& setCallFails(const DescribeApiQpsDataResponseBodyCallFails & callFails) { DARABONBA_PTR_SET_VALUE(callFails_, callFails) };
    inline DescribeApiQpsDataResponseBody& setCallFails(DescribeApiQpsDataResponseBodyCallFails && callFails) { DARABONBA_PTR_SET_RVALUE(callFails_, callFails) };


    // callSuccesses Field Functions 
    bool hasCallSuccesses() const { return this->callSuccesses_ != nullptr;};
    void deleteCallSuccesses() { this->callSuccesses_ = nullptr;};
    inline const DescribeApiQpsDataResponseBodyCallSuccesses & callSuccesses() const { DARABONBA_PTR_GET_CONST(callSuccesses_, DescribeApiQpsDataResponseBodyCallSuccesses) };
    inline DescribeApiQpsDataResponseBodyCallSuccesses callSuccesses() { DARABONBA_PTR_GET(callSuccesses_, DescribeApiQpsDataResponseBodyCallSuccesses) };
    inline DescribeApiQpsDataResponseBody& setCallSuccesses(const DescribeApiQpsDataResponseBodyCallSuccesses & callSuccesses) { DARABONBA_PTR_SET_VALUE(callSuccesses_, callSuccesses) };
    inline DescribeApiQpsDataResponseBody& setCallSuccesses(DescribeApiQpsDataResponseBodyCallSuccesses && callSuccesses) { DARABONBA_PTR_SET_RVALUE(callSuccesses_, callSuccesses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiQpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned information about failed API calls. It is an array consisting of MonitorItem data.
    std::shared_ptr<DescribeApiQpsDataResponseBodyCallFails> callFails_ = nullptr;
    // The returned information about successful API calls. It is an array consisting of MonitorItem data.
    std::shared_ptr<DescribeApiQpsDataResponseBodyCallSuccesses> callSuccesses_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
