// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESLBCONNECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESLBCONNECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceSlbConnectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSlbConnectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceSlbConnect, instanceSlbConnect_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSlbConnectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceSlbConnect, instanceSlbConnect_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceSlbConnectResponseBody() = default ;
    DescribeInstanceSlbConnectResponseBody(const DescribeInstanceSlbConnectResponseBody &) = default ;
    DescribeInstanceSlbConnectResponseBody(DescribeInstanceSlbConnectResponseBody &&) = default ;
    DescribeInstanceSlbConnectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSlbConnectResponseBody() = default ;
    DescribeInstanceSlbConnectResponseBody& operator=(const DescribeInstanceSlbConnectResponseBody &) = default ;
    DescribeInstanceSlbConnectResponseBody& operator=(DescribeInstanceSlbConnectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceSlbConnect_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceSlbConnect Field Functions 
    bool hasInstanceSlbConnect() const { return this->instanceSlbConnect_ != nullptr;};
    void deleteInstanceSlbConnect() { this->instanceSlbConnect_ = nullptr;};
    inline const DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect & instanceSlbConnect() const { DARABONBA_PTR_GET_CONST(instanceSlbConnect_, DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect) };
    inline DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect instanceSlbConnect() { DARABONBA_PTR_GET(instanceSlbConnect_, DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect) };
    inline DescribeInstanceSlbConnectResponseBody& setInstanceSlbConnect(const DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect & instanceSlbConnect) { DARABONBA_PTR_SET_VALUE(instanceSlbConnect_, instanceSlbConnect) };
    inline DescribeInstanceSlbConnectResponseBody& setInstanceSlbConnect(DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect && instanceSlbConnect) { DARABONBA_PTR_SET_RVALUE(instanceSlbConnect_, instanceSlbConnect) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceSlbConnectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of concurrent connections in the instance.
    std::shared_ptr<DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect> instanceSlbConnect_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
