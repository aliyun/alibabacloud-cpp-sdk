// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEBACKENDSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEBACKENDSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RemoveBackendServersResponseBodyBackendServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class RemoveBackendServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveBackendServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveBackendServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RemoveBackendServersResponseBody() = default ;
    RemoveBackendServersResponseBody(const RemoveBackendServersResponseBody &) = default ;
    RemoveBackendServersResponseBody(RemoveBackendServersResponseBody &&) = default ;
    RemoveBackendServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveBackendServersResponseBody() = default ;
    RemoveBackendServersResponseBody& operator=(const RemoveBackendServersResponseBody &) = default ;
    RemoveBackendServersResponseBody& operator=(RemoveBackendServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServers_ == nullptr
        && return this->loadBalancerId_ == nullptr && return this->requestId_ == nullptr; };
    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const RemoveBackendServersResponseBodyBackendServers & backendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, RemoveBackendServersResponseBodyBackendServers) };
    inline RemoveBackendServersResponseBodyBackendServers backendServers() { DARABONBA_PTR_GET(backendServers_, RemoveBackendServersResponseBodyBackendServers) };
    inline RemoveBackendServersResponseBody& setBackendServers(const RemoveBackendServersResponseBodyBackendServers & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline RemoveBackendServersResponseBody& setBackendServers(RemoveBackendServersResponseBodyBackendServers && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline RemoveBackendServersResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveBackendServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The backend servers.
    std::shared_ptr<RemoveBackendServersResponseBodyBackendServers> backendServers_ = nullptr;
    // The ID of the CLB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
