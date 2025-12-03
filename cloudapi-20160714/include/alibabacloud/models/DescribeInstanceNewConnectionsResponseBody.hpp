// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCENEWCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCENEWCONNECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceNewConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceNewConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceNewConnections, instanceNewConnections_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceNewConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceNewConnections, instanceNewConnections_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceNewConnectionsResponseBody() = default ;
    DescribeInstanceNewConnectionsResponseBody(const DescribeInstanceNewConnectionsResponseBody &) = default ;
    DescribeInstanceNewConnectionsResponseBody(DescribeInstanceNewConnectionsResponseBody &&) = default ;
    DescribeInstanceNewConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceNewConnectionsResponseBody() = default ;
    DescribeInstanceNewConnectionsResponseBody& operator=(const DescribeInstanceNewConnectionsResponseBody &) = default ;
    DescribeInstanceNewConnectionsResponseBody& operator=(DescribeInstanceNewConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceNewConnections_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceNewConnections Field Functions 
    bool hasInstanceNewConnections() const { return this->instanceNewConnections_ != nullptr;};
    void deleteInstanceNewConnections() { this->instanceNewConnections_ = nullptr;};
    inline const DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections & instanceNewConnections() const { DARABONBA_PTR_GET_CONST(instanceNewConnections_, DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections) };
    inline DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections instanceNewConnections() { DARABONBA_PTR_GET(instanceNewConnections_, DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections) };
    inline DescribeInstanceNewConnectionsResponseBody& setInstanceNewConnections(const DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections & instanceNewConnections) { DARABONBA_PTR_SET_VALUE(instanceNewConnections_, instanceNewConnections) };
    inline DescribeInstanceNewConnectionsResponseBody& setInstanceNewConnections(DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections && instanceNewConnections) { DARABONBA_PTR_SET_RVALUE(instanceNewConnections_, instanceNewConnections) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceNewConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of new connections in the instance.
    std::shared_ptr<DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections> instanceNewConnections_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
