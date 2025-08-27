// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETTESTTASKREQUESTTRAFFICTESTSERVERS_HPP_
#define ALIBABACLOUD_MODELS_CREATENETTESTTASKREQUESTTRAFFICTESTSERVERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateNetTestTaskRequestTrafficTestServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetTestTaskRequestTrafficTestServers& obj) { 
      DARABONBA_PTR_TO_JSON(Bond, bond_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ServerName, serverName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetTestTaskRequestTrafficTestServers& obj) { 
      DARABONBA_PTR_FROM_JSON(Bond, bond_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ServerName, serverName_);
    };
    CreateNetTestTaskRequestTrafficTestServers() = default ;
    CreateNetTestTaskRequestTrafficTestServers(const CreateNetTestTaskRequestTrafficTestServers &) = default ;
    CreateNetTestTaskRequestTrafficTestServers(CreateNetTestTaskRequestTrafficTestServers &&) = default ;
    CreateNetTestTaskRequestTrafficTestServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetTestTaskRequestTrafficTestServers() = default ;
    CreateNetTestTaskRequestTrafficTestServers& operator=(const CreateNetTestTaskRequestTrafficTestServers &) = default ;
    CreateNetTestTaskRequestTrafficTestServers& operator=(CreateNetTestTaskRequestTrafficTestServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bond_ != nullptr
        && this->IP_ != nullptr && this->nodeId_ != nullptr && this->resourceId_ != nullptr && this->serverName_ != nullptr; };
    // bond Field Functions 
    bool hasBond() const { return this->bond_ != nullptr;};
    void deleteBond() { this->bond_ = nullptr;};
    inline string bond() const { DARABONBA_PTR_GET_DEFAULT(bond_, "") };
    inline CreateNetTestTaskRequestTrafficTestServers& setBond(string bond) { DARABONBA_PTR_SET_VALUE(bond_, bond) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline CreateNetTestTaskRequestTrafficTestServers& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateNetTestTaskRequestTrafficTestServers& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateNetTestTaskRequestTrafficTestServers& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // serverName Field Functions 
    bool hasServerName() const { return this->serverName_ != nullptr;};
    void deleteServerName() { this->serverName_ = nullptr;};
    inline string serverName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
    inline CreateNetTestTaskRequestTrafficTestServers& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


  protected:
    // The bonding of network interface card.
    std::shared_ptr<string> bond_ = nullptr;
    // The IP address of the node.
    std::shared_ptr<string> IP_ = nullptr;
    // The node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> serverName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
