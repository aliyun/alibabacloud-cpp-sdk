// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPILATENCYDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPILATENCYDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApiLatencyDataResponseBodyCallLatencys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiLatencyDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiLatencyDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallLatencys, callLatencys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiLatencyDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallLatencys, callLatencys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApiLatencyDataResponseBody() = default ;
    DescribeApiLatencyDataResponseBody(const DescribeApiLatencyDataResponseBody &) = default ;
    DescribeApiLatencyDataResponseBody(DescribeApiLatencyDataResponseBody &&) = default ;
    DescribeApiLatencyDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiLatencyDataResponseBody() = default ;
    DescribeApiLatencyDataResponseBody& operator=(const DescribeApiLatencyDataResponseBody &) = default ;
    DescribeApiLatencyDataResponseBody& operator=(DescribeApiLatencyDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callLatencys_ == nullptr
        && return this->requestId_ == nullptr; };
    // callLatencys Field Functions 
    bool hasCallLatencys() const { return this->callLatencys_ != nullptr;};
    void deleteCallLatencys() { this->callLatencys_ = nullptr;};
    inline const DescribeApiLatencyDataResponseBodyCallLatencys & callLatencys() const { DARABONBA_PTR_GET_CONST(callLatencys_, DescribeApiLatencyDataResponseBodyCallLatencys) };
    inline DescribeApiLatencyDataResponseBodyCallLatencys callLatencys() { DARABONBA_PTR_GET(callLatencys_, DescribeApiLatencyDataResponseBodyCallLatencys) };
    inline DescribeApiLatencyDataResponseBody& setCallLatencys(const DescribeApiLatencyDataResponseBodyCallLatencys & callLatencys) { DARABONBA_PTR_SET_VALUE(callLatencys_, callLatencys) };
    inline DescribeApiLatencyDataResponseBody& setCallLatencys(DescribeApiLatencyDataResponseBodyCallLatencys && callLatencys) { DARABONBA_PTR_SET_RVALUE(callLatencys_, callLatencys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiLatencyDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned information about API call latency. It is an array consisting of MonitorItem data.
    std::shared_ptr<DescribeApiLatencyDataResponseBodyCallLatencys> callLatencys_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
