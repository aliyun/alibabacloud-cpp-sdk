// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEAGENTRUNTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEAGENTRUNTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class EnableAgentRuntimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableAgentRuntimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableAgentRuntimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    EnableAgentRuntimeRequest() = default ;
    EnableAgentRuntimeRequest(const EnableAgentRuntimeRequest &) = default ;
    EnableAgentRuntimeRequest(EnableAgentRuntimeRequest &&) = default ;
    EnableAgentRuntimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableAgentRuntimeRequest() = default ;
    EnableAgentRuntimeRequest& operator=(const EnableAgentRuntimeRequest &) = default ;
    EnableAgentRuntimeRequest& operator=(EnableAgentRuntimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->instanceName_ == nullptr && this->regionId_ == nullptr && this->securityGroupId_ == nullptr && this->vSwitchId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline EnableAgentRuntimeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline EnableAgentRuntimeRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableAgentRuntimeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline EnableAgentRuntimeRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline EnableAgentRuntimeRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> securityGroupId_ {};
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
