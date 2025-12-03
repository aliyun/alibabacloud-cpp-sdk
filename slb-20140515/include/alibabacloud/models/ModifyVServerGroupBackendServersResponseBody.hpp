// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVSERVERGROUPBACKENDSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVSERVERGROUPBACKENDSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyVServerGroupBackendServersResponseBodyBackendServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class ModifyVServerGroupBackendServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVServerGroupBackendServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVServerGroupBackendServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
    };
    ModifyVServerGroupBackendServersResponseBody() = default ;
    ModifyVServerGroupBackendServersResponseBody(const ModifyVServerGroupBackendServersResponseBody &) = default ;
    ModifyVServerGroupBackendServersResponseBody(ModifyVServerGroupBackendServersResponseBody &&) = default ;
    ModifyVServerGroupBackendServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVServerGroupBackendServersResponseBody() = default ;
    ModifyVServerGroupBackendServersResponseBody& operator=(const ModifyVServerGroupBackendServersResponseBody &) = default ;
    ModifyVServerGroupBackendServersResponseBody& operator=(ModifyVServerGroupBackendServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServers_ == nullptr
        && return this->requestId_ == nullptr && return this->VServerGroupId_ == nullptr; };
    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const ModifyVServerGroupBackendServersResponseBodyBackendServers & backendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, ModifyVServerGroupBackendServersResponseBodyBackendServers) };
    inline ModifyVServerGroupBackendServersResponseBodyBackendServers backendServers() { DARABONBA_PTR_GET(backendServers_, ModifyVServerGroupBackendServersResponseBodyBackendServers) };
    inline ModifyVServerGroupBackendServersResponseBody& setBackendServers(const ModifyVServerGroupBackendServersResponseBodyBackendServers & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline ModifyVServerGroupBackendServersResponseBody& setBackendServers(ModifyVServerGroupBackendServersResponseBodyBackendServers && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyVServerGroupBackendServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline ModifyVServerGroupBackendServersResponseBody& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


  protected:
    // The backend servers.
    std::shared_ptr<ModifyVServerGroupBackendServersResponseBodyBackendServers> backendServers_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the vServer group.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
