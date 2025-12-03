// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVSERVERGROUPRESPONSEBODYBACKENDSERVERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEVSERVERGROUPRESPONSEBODYBACKENDSERVERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateVServerGroupResponseBodyBackendServersBackendServer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class CreateVServerGroupResponseBodyBackendServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVServerGroupResponseBodyBackendServers& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServer, backendServer_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVServerGroupResponseBodyBackendServers& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServer, backendServer_);
    };
    CreateVServerGroupResponseBodyBackendServers() = default ;
    CreateVServerGroupResponseBodyBackendServers(const CreateVServerGroupResponseBodyBackendServers &) = default ;
    CreateVServerGroupResponseBodyBackendServers(CreateVServerGroupResponseBodyBackendServers &&) = default ;
    CreateVServerGroupResponseBodyBackendServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVServerGroupResponseBodyBackendServers() = default ;
    CreateVServerGroupResponseBodyBackendServers& operator=(const CreateVServerGroupResponseBodyBackendServers &) = default ;
    CreateVServerGroupResponseBodyBackendServers& operator=(CreateVServerGroupResponseBodyBackendServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServer_ == nullptr; };
    // backendServer Field Functions 
    bool hasBackendServer() const { return this->backendServer_ != nullptr;};
    void deleteBackendServer() { this->backendServer_ = nullptr;};
    inline const vector<Models::CreateVServerGroupResponseBodyBackendServersBackendServer> & backendServer() const { DARABONBA_PTR_GET_CONST(backendServer_, vector<Models::CreateVServerGroupResponseBodyBackendServersBackendServer>) };
    inline vector<Models::CreateVServerGroupResponseBodyBackendServersBackendServer> backendServer() { DARABONBA_PTR_GET(backendServer_, vector<Models::CreateVServerGroupResponseBodyBackendServersBackendServer>) };
    inline CreateVServerGroupResponseBodyBackendServers& setBackendServer(const vector<Models::CreateVServerGroupResponseBodyBackendServersBackendServer> & backendServer) { DARABONBA_PTR_SET_VALUE(backendServer_, backendServer) };
    inline CreateVServerGroupResponseBodyBackendServers& setBackendServer(vector<Models::CreateVServerGroupResponseBodyBackendServersBackendServer> && backendServer) { DARABONBA_PTR_SET_RVALUE(backendServer_, backendServer) };


  protected:
    std::shared_ptr<vector<Models::CreateVServerGroupResponseBodyBackendServersBackendServer>> backendServer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
