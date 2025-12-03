// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyBackendServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeHealthStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHealthStatusResponseBody() = default ;
    DescribeHealthStatusResponseBody(const DescribeHealthStatusResponseBody &) = default ;
    DescribeHealthStatusResponseBody(DescribeHealthStatusResponseBody &&) = default ;
    DescribeHealthStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthStatusResponseBody() = default ;
    DescribeHealthStatusResponseBody& operator=(const DescribeHealthStatusResponseBody &) = default ;
    DescribeHealthStatusResponseBody& operator=(DescribeHealthStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServers_ == nullptr
        && return this->requestId_ == nullptr; };
    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const DescribeHealthStatusResponseBodyBackendServers & backendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, DescribeHealthStatusResponseBodyBackendServers) };
    inline DescribeHealthStatusResponseBodyBackendServers backendServers() { DARABONBA_PTR_GET(backendServers_, DescribeHealthStatusResponseBodyBackendServers) };
    inline DescribeHealthStatusResponseBody& setBackendServers(const DescribeHealthStatusResponseBodyBackendServers & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline DescribeHealthStatusResponseBody& setBackendServers(DescribeHealthStatusResponseBodyBackendServers && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHealthStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The backend servers.
    std::shared_ptr<DescribeHealthStatusResponseBodyBackendServers> backendServers_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
