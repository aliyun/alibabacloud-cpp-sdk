// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDROPCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDROPCONNECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceDropConnectionsResponseBodyInstanceDropConnections.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceDropConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceDropConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceDropConnections, instanceDropConnections_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceDropConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceDropConnections, instanceDropConnections_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceDropConnectionsResponseBody() = default ;
    DescribeInstanceDropConnectionsResponseBody(const DescribeInstanceDropConnectionsResponseBody &) = default ;
    DescribeInstanceDropConnectionsResponseBody(DescribeInstanceDropConnectionsResponseBody &&) = default ;
    DescribeInstanceDropConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceDropConnectionsResponseBody() = default ;
    DescribeInstanceDropConnectionsResponseBody& operator=(const DescribeInstanceDropConnectionsResponseBody &) = default ;
    DescribeInstanceDropConnectionsResponseBody& operator=(DescribeInstanceDropConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceDropConnections_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceDropConnections Field Functions 
    bool hasInstanceDropConnections() const { return this->instanceDropConnections_ != nullptr;};
    void deleteInstanceDropConnections() { this->instanceDropConnections_ = nullptr;};
    inline const DescribeInstanceDropConnectionsResponseBodyInstanceDropConnections & instanceDropConnections() const { DARABONBA_PTR_GET_CONST(instanceDropConnections_, DescribeInstanceDropConnectionsResponseBodyInstanceDropConnections) };
    inline DescribeInstanceDropConnectionsResponseBodyInstanceDropConnections instanceDropConnections() { DARABONBA_PTR_GET(instanceDropConnections_, DescribeInstanceDropConnectionsResponseBodyInstanceDropConnections) };
    inline DescribeInstanceDropConnectionsResponseBody& setInstanceDropConnections(const DescribeInstanceDropConnectionsResponseBodyInstanceDropConnections & instanceDropConnections) { DARABONBA_PTR_SET_VALUE(instanceDropConnections_, instanceDropConnections) };
    inline DescribeInstanceDropConnectionsResponseBody& setInstanceDropConnections(DescribeInstanceDropConnectionsResponseBodyInstanceDropConnections && instanceDropConnections) { DARABONBA_PTR_SET_RVALUE(instanceDropConnections_, instanceDropConnections) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceDropConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of dropped connections in the instance.
    std::shared_ptr<DescribeInstanceDropConnectionsResponseBodyInstanceDropConnections> instanceDropConnections_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
