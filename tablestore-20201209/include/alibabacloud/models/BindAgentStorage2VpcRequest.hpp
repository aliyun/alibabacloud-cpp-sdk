// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAGENTSTORAGE2VPCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDAGENTSTORAGE2VPCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class BindAgentStorage2VpcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAgentStorage2VpcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_TO_JSON(AgentStorageVpcName, agentStorageVpcName_);
      DARABONBA_PTR_TO_JSON(VirtualSwitchId, virtualSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, BindAgentStorage2VpcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_FROM_JSON(AgentStorageVpcName, agentStorageVpcName_);
      DARABONBA_PTR_FROM_JSON(VirtualSwitchId, virtualSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    BindAgentStorage2VpcRequest() = default ;
    BindAgentStorage2VpcRequest(const BindAgentStorage2VpcRequest &) = default ;
    BindAgentStorage2VpcRequest(BindAgentStorage2VpcRequest &&) = default ;
    BindAgentStorage2VpcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAgentStorage2VpcRequest() = default ;
    BindAgentStorage2VpcRequest& operator=(const BindAgentStorage2VpcRequest &) = default ;
    BindAgentStorage2VpcRequest& operator=(BindAgentStorage2VpcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentStorageName_ == nullptr
        && this->agentStorageVpcName_ == nullptr && this->virtualSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // agentStorageName Field Functions 
    bool hasAgentStorageName() const { return this->agentStorageName_ != nullptr;};
    void deleteAgentStorageName() { this->agentStorageName_ = nullptr;};
    inline string getAgentStorageName() const { DARABONBA_PTR_GET_DEFAULT(agentStorageName_, "") };
    inline BindAgentStorage2VpcRequest& setAgentStorageName(string agentStorageName) { DARABONBA_PTR_SET_VALUE(agentStorageName_, agentStorageName) };


    // agentStorageVpcName Field Functions 
    bool hasAgentStorageVpcName() const { return this->agentStorageVpcName_ != nullptr;};
    void deleteAgentStorageVpcName() { this->agentStorageVpcName_ = nullptr;};
    inline string getAgentStorageVpcName() const { DARABONBA_PTR_GET_DEFAULT(agentStorageVpcName_, "") };
    inline BindAgentStorage2VpcRequest& setAgentStorageVpcName(string agentStorageVpcName) { DARABONBA_PTR_SET_VALUE(agentStorageVpcName_, agentStorageVpcName) };


    // virtualSwitchId Field Functions 
    bool hasVirtualSwitchId() const { return this->virtualSwitchId_ != nullptr;};
    void deleteVirtualSwitchId() { this->virtualSwitchId_ = nullptr;};
    inline string getVirtualSwitchId() const { DARABONBA_PTR_GET_DEFAULT(virtualSwitchId_, "") };
    inline BindAgentStorage2VpcRequest& setVirtualSwitchId(string virtualSwitchId) { DARABONBA_PTR_SET_VALUE(virtualSwitchId_, virtualSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline BindAgentStorage2VpcRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The agent storage name.
    // 
    // This parameter is required.
    shared_ptr<string> agentStorageName_ {};
    // The VPC name.
    // 
    // This parameter is required.
    shared_ptr<string> agentStorageVpcName_ {};
    // The vSwitch ID.
    // 
    // This parameter is required.
    shared_ptr<string> virtualSwitchId_ {};
    // VPC ID
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
