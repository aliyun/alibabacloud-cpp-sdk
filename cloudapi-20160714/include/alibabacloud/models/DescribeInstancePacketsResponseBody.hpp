// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEPACKETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEPACKETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstancePacketsResponseBodyInstancePackets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstancePacketsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancePacketsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstancePackets, instancePackets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancePacketsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstancePackets, instancePackets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstancePacketsResponseBody() = default ;
    DescribeInstancePacketsResponseBody(const DescribeInstancePacketsResponseBody &) = default ;
    DescribeInstancePacketsResponseBody(DescribeInstancePacketsResponseBody &&) = default ;
    DescribeInstancePacketsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancePacketsResponseBody() = default ;
    DescribeInstancePacketsResponseBody& operator=(const DescribeInstancePacketsResponseBody &) = default ;
    DescribeInstancePacketsResponseBody& operator=(DescribeInstancePacketsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instancePackets_ == nullptr
        && return this->requestId_ == nullptr; };
    // instancePackets Field Functions 
    bool hasInstancePackets() const { return this->instancePackets_ != nullptr;};
    void deleteInstancePackets() { this->instancePackets_ = nullptr;};
    inline const DescribeInstancePacketsResponseBodyInstancePackets & instancePackets() const { DARABONBA_PTR_GET_CONST(instancePackets_, DescribeInstancePacketsResponseBodyInstancePackets) };
    inline DescribeInstancePacketsResponseBodyInstancePackets instancePackets() { DARABONBA_PTR_GET(instancePackets_, DescribeInstancePacketsResponseBodyInstancePackets) };
    inline DescribeInstancePacketsResponseBody& setInstancePackets(const DescribeInstancePacketsResponseBodyInstancePackets & instancePackets) { DARABONBA_PTR_SET_VALUE(instancePackets_, instancePackets) };
    inline DescribeInstancePacketsResponseBody& setInstancePackets(DescribeInstancePacketsResponseBodyInstancePackets && instancePackets) { DARABONBA_PTR_SET_RVALUE(instancePackets_, instancePackets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstancePacketsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of inbound and outbound data packets in the instance.
    std::shared_ptr<DescribeInstancePacketsResponseBodyInstancePackets> instancePackets_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
