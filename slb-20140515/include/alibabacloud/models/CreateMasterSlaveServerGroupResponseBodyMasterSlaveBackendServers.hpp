// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMASTERSLAVESERVERGROUPRESPONSEBODYMASTERSLAVEBACKENDSERVERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMASTERSLAVESERVERGROUPRESPONSEBODYMASTERSLAVEBACKENDSERVERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers& obj) { 
      DARABONBA_PTR_TO_JSON(MasterSlaveBackendServer, masterSlaveBackendServer_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers& obj) { 
      DARABONBA_PTR_FROM_JSON(MasterSlaveBackendServer, masterSlaveBackendServer_);
    };
    CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers() = default ;
    CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers(const CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers &) = default ;
    CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers(CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers &&) = default ;
    CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers() = default ;
    CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers& operator=(const CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers &) = default ;
    CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers& operator=(CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->masterSlaveBackendServer_ == nullptr; };
    // masterSlaveBackendServer Field Functions 
    bool hasMasterSlaveBackendServer() const { return this->masterSlaveBackendServer_ != nullptr;};
    void deleteMasterSlaveBackendServer() { this->masterSlaveBackendServer_ = nullptr;};
    inline const vector<Models::CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer> & masterSlaveBackendServer() const { DARABONBA_PTR_GET_CONST(masterSlaveBackendServer_, vector<Models::CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer>) };
    inline vector<Models::CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer> masterSlaveBackendServer() { DARABONBA_PTR_GET(masterSlaveBackendServer_, vector<Models::CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer>) };
    inline CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers& setMasterSlaveBackendServer(const vector<Models::CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer> & masterSlaveBackendServer) { DARABONBA_PTR_SET_VALUE(masterSlaveBackendServer_, masterSlaveBackendServer) };
    inline CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers& setMasterSlaveBackendServer(vector<Models::CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer> && masterSlaveBackendServer) { DARABONBA_PTR_SET_RVALUE(masterSlaveBackendServer_, masterSlaveBackendServer) };


  protected:
    std::shared_ptr<vector<Models::CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer>> masterSlaveBackendServer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
