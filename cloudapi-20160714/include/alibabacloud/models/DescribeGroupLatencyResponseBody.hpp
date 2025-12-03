// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPLATENCYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPLATENCYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeGroupLatencyResponseBodyLatencyPacket.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeGroupLatencyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupLatencyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LatencyPacket, latencyPacket_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupLatencyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LatencyPacket, latencyPacket_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGroupLatencyResponseBody() = default ;
    DescribeGroupLatencyResponseBody(const DescribeGroupLatencyResponseBody &) = default ;
    DescribeGroupLatencyResponseBody(DescribeGroupLatencyResponseBody &&) = default ;
    DescribeGroupLatencyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupLatencyResponseBody() = default ;
    DescribeGroupLatencyResponseBody& operator=(const DescribeGroupLatencyResponseBody &) = default ;
    DescribeGroupLatencyResponseBody& operator=(DescribeGroupLatencyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->latencyPacket_ == nullptr
        && return this->requestId_ == nullptr; };
    // latencyPacket Field Functions 
    bool hasLatencyPacket() const { return this->latencyPacket_ != nullptr;};
    void deleteLatencyPacket() { this->latencyPacket_ = nullptr;};
    inline const DescribeGroupLatencyResponseBodyLatencyPacket & latencyPacket() const { DARABONBA_PTR_GET_CONST(latencyPacket_, DescribeGroupLatencyResponseBodyLatencyPacket) };
    inline DescribeGroupLatencyResponseBodyLatencyPacket latencyPacket() { DARABONBA_PTR_GET(latencyPacket_, DescribeGroupLatencyResponseBodyLatencyPacket) };
    inline DescribeGroupLatencyResponseBody& setLatencyPacket(const DescribeGroupLatencyResponseBodyLatencyPacket & latencyPacket) { DARABONBA_PTR_SET_VALUE(latencyPacket_, latencyPacket) };
    inline DescribeGroupLatencyResponseBody& setLatencyPacket(DescribeGroupLatencyResponseBodyLatencyPacket && latencyPacket) { DARABONBA_PTR_SET_RVALUE(latencyPacket_, latencyPacket) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupLatencyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The latency information.
    std::shared_ptr<DescribeGroupLatencyResponseBodyLatencyPacket> latencyPacket_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
