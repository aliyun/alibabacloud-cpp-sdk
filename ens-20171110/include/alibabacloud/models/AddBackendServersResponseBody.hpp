// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDBACKENDSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDBACKENDSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddBackendServersResponseBodyBackendServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AddBackendServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddBackendServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddBackendServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddBackendServersResponseBody() = default ;
    AddBackendServersResponseBody(const AddBackendServersResponseBody &) = default ;
    AddBackendServersResponseBody(AddBackendServersResponseBody &&) = default ;
    AddBackendServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddBackendServersResponseBody() = default ;
    AddBackendServersResponseBody& operator=(const AddBackendServersResponseBody &) = default ;
    AddBackendServersResponseBody& operator=(AddBackendServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServers_ == nullptr
        && return this->requestId_ == nullptr; };
    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const AddBackendServersResponseBodyBackendServers & backendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, AddBackendServersResponseBodyBackendServers) };
    inline AddBackendServersResponseBodyBackendServers backendServers() { DARABONBA_PTR_GET(backendServers_, AddBackendServersResponseBodyBackendServers) };
    inline AddBackendServersResponseBody& setBackendServers(const AddBackendServersResponseBodyBackendServers & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline AddBackendServersResponseBody& setBackendServers(AddBackendServersResponseBodyBackendServers && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddBackendServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of backend servers that you want to add. You can add at most 20 backend servers.
    // 
    // >  Only ENS instances that are in the running state can be attached to the ELB instance as backend servers.
    std::shared_ptr<AddBackendServersResponseBodyBackendServers> backendServers_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
