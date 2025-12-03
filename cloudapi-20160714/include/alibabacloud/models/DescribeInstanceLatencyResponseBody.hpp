// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCELATENCYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCELATENCYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceLatencyResponseBodyInstanceLatency.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceLatencyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceLatencyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceLatency, instanceLatency_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceLatencyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceLatency, instanceLatency_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceLatencyResponseBody() = default ;
    DescribeInstanceLatencyResponseBody(const DescribeInstanceLatencyResponseBody &) = default ;
    DescribeInstanceLatencyResponseBody(DescribeInstanceLatencyResponseBody &&) = default ;
    DescribeInstanceLatencyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceLatencyResponseBody() = default ;
    DescribeInstanceLatencyResponseBody& operator=(const DescribeInstanceLatencyResponseBody &) = default ;
    DescribeInstanceLatencyResponseBody& operator=(DescribeInstanceLatencyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceLatency_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceLatency Field Functions 
    bool hasInstanceLatency() const { return this->instanceLatency_ != nullptr;};
    void deleteInstanceLatency() { this->instanceLatency_ = nullptr;};
    inline const DescribeInstanceLatencyResponseBodyInstanceLatency & instanceLatency() const { DARABONBA_PTR_GET_CONST(instanceLatency_, DescribeInstanceLatencyResponseBodyInstanceLatency) };
    inline DescribeInstanceLatencyResponseBodyInstanceLatency instanceLatency() { DARABONBA_PTR_GET(instanceLatency_, DescribeInstanceLatencyResponseBodyInstanceLatency) };
    inline DescribeInstanceLatencyResponseBody& setInstanceLatency(const DescribeInstanceLatencyResponseBodyInstanceLatency & instanceLatency) { DARABONBA_PTR_SET_VALUE(instanceLatency_, instanceLatency) };
    inline DescribeInstanceLatencyResponseBody& setInstanceLatency(DescribeInstanceLatencyResponseBodyInstanceLatency && instanceLatency) { DARABONBA_PTR_SET_RVALUE(instanceLatency_, instanceLatency) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceLatencyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of average latencies in the instance.
    std::shared_ptr<DescribeInstanceLatencyResponseBodyInstanceLatency> instanceLatency_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
