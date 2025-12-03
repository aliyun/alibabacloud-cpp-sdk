// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVSERVERGROUPBACKENDSERVERSRESPONSEBODYBACKENDSERVERS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVSERVERGROUPBACKENDSERVERSRESPONSEBODYBACKENDSERVERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyVServerGroupBackendServersResponseBodyBackendServersBackendServer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class ModifyVServerGroupBackendServersResponseBodyBackendServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVServerGroupBackendServersResponseBodyBackendServers& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServer, backendServer_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVServerGroupBackendServersResponseBodyBackendServers& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServer, backendServer_);
    };
    ModifyVServerGroupBackendServersResponseBodyBackendServers() = default ;
    ModifyVServerGroupBackendServersResponseBodyBackendServers(const ModifyVServerGroupBackendServersResponseBodyBackendServers &) = default ;
    ModifyVServerGroupBackendServersResponseBodyBackendServers(ModifyVServerGroupBackendServersResponseBodyBackendServers &&) = default ;
    ModifyVServerGroupBackendServersResponseBodyBackendServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVServerGroupBackendServersResponseBodyBackendServers() = default ;
    ModifyVServerGroupBackendServersResponseBodyBackendServers& operator=(const ModifyVServerGroupBackendServersResponseBodyBackendServers &) = default ;
    ModifyVServerGroupBackendServersResponseBodyBackendServers& operator=(ModifyVServerGroupBackendServersResponseBodyBackendServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServer_ == nullptr; };
    // backendServer Field Functions 
    bool hasBackendServer() const { return this->backendServer_ != nullptr;};
    void deleteBackendServer() { this->backendServer_ = nullptr;};
    inline const vector<Models::ModifyVServerGroupBackendServersResponseBodyBackendServersBackendServer> & backendServer() const { DARABONBA_PTR_GET_CONST(backendServer_, vector<Models::ModifyVServerGroupBackendServersResponseBodyBackendServersBackendServer>) };
    inline vector<Models::ModifyVServerGroupBackendServersResponseBodyBackendServersBackendServer> backendServer() { DARABONBA_PTR_GET(backendServer_, vector<Models::ModifyVServerGroupBackendServersResponseBodyBackendServersBackendServer>) };
    inline ModifyVServerGroupBackendServersResponseBodyBackendServers& setBackendServer(const vector<Models::ModifyVServerGroupBackendServersResponseBodyBackendServersBackendServer> & backendServer) { DARABONBA_PTR_SET_VALUE(backendServer_, backendServer) };
    inline ModifyVServerGroupBackendServersResponseBodyBackendServers& setBackendServer(vector<Models::ModifyVServerGroupBackendServersResponseBodyBackendServersBackendServer> && backendServer) { DARABONBA_PTR_SET_RVALUE(backendServer_, backendServer) };


  protected:
    std::shared_ptr<vector<Models::ModifyVServerGroupBackendServersResponseBodyBackendServersBackendServer>> backendServer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
