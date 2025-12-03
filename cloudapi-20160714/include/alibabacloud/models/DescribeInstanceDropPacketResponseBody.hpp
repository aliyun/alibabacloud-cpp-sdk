// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDROPPACKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDROPPACKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceDropPacketResponseBodyInstanceDropPacket.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceDropPacketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceDropPacketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceDropPacket, instanceDropPacket_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceDropPacketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceDropPacket, instanceDropPacket_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceDropPacketResponseBody() = default ;
    DescribeInstanceDropPacketResponseBody(const DescribeInstanceDropPacketResponseBody &) = default ;
    DescribeInstanceDropPacketResponseBody(DescribeInstanceDropPacketResponseBody &&) = default ;
    DescribeInstanceDropPacketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceDropPacketResponseBody() = default ;
    DescribeInstanceDropPacketResponseBody& operator=(const DescribeInstanceDropPacketResponseBody &) = default ;
    DescribeInstanceDropPacketResponseBody& operator=(DescribeInstanceDropPacketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceDropPacket_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceDropPacket Field Functions 
    bool hasInstanceDropPacket() const { return this->instanceDropPacket_ != nullptr;};
    void deleteInstanceDropPacket() { this->instanceDropPacket_ = nullptr;};
    inline const DescribeInstanceDropPacketResponseBodyInstanceDropPacket & instanceDropPacket() const { DARABONBA_PTR_GET_CONST(instanceDropPacket_, DescribeInstanceDropPacketResponseBodyInstanceDropPacket) };
    inline DescribeInstanceDropPacketResponseBodyInstanceDropPacket instanceDropPacket() { DARABONBA_PTR_GET(instanceDropPacket_, DescribeInstanceDropPacketResponseBodyInstanceDropPacket) };
    inline DescribeInstanceDropPacketResponseBody& setInstanceDropPacket(const DescribeInstanceDropPacketResponseBodyInstanceDropPacket & instanceDropPacket) { DARABONBA_PTR_SET_VALUE(instanceDropPacket_, instanceDropPacket) };
    inline DescribeInstanceDropPacketResponseBody& setInstanceDropPacket(DescribeInstanceDropPacketResponseBodyInstanceDropPacket && instanceDropPacket) { DARABONBA_PTR_SET_RVALUE(instanceDropPacket_, instanceDropPacket) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceDropPacketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of dropped packets in the instance.
    std::shared_ptr<DescribeInstanceDropPacketResponseBodyInstanceDropPacket> instanceDropPacket_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
