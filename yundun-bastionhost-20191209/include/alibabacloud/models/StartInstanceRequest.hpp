// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class StartInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientSecurityGroupIds, clientSecurityGroupIds_);
      DARABONBA_PTR_TO_JSON(EnablePortalPrivateAccess, enablePortalPrivateAccess_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(SlaveVswitchId, slaveVswitchId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientSecurityGroupIds, clientSecurityGroupIds_);
      DARABONBA_PTR_FROM_JSON(EnablePortalPrivateAccess, enablePortalPrivateAccess_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(SlaveVswitchId, slaveVswitchId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    StartInstanceRequest() = default ;
    StartInstanceRequest(const StartInstanceRequest &) = default ;
    StartInstanceRequest(StartInstanceRequest &&) = default ;
    StartInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartInstanceRequest() = default ;
    StartInstanceRequest& operator=(const StartInstanceRequest &) = default ;
    StartInstanceRequest& operator=(StartInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientSecurityGroupIds_ == nullptr
        && this->enablePortalPrivateAccess_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->securityGroupIds_ == nullptr && this->slaveVswitchId_ == nullptr
        && this->vswitchId_ == nullptr; };
    // clientSecurityGroupIds Field Functions 
    bool hasClientSecurityGroupIds() const { return this->clientSecurityGroupIds_ != nullptr;};
    void deleteClientSecurityGroupIds() { this->clientSecurityGroupIds_ = nullptr;};
    inline const vector<string> & getClientSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(clientSecurityGroupIds_, vector<string>) };
    inline vector<string> getClientSecurityGroupIds() { DARABONBA_PTR_GET(clientSecurityGroupIds_, vector<string>) };
    inline StartInstanceRequest& setClientSecurityGroupIds(const vector<string> & clientSecurityGroupIds) { DARABONBA_PTR_SET_VALUE(clientSecurityGroupIds_, clientSecurityGroupIds) };
    inline StartInstanceRequest& setClientSecurityGroupIds(vector<string> && clientSecurityGroupIds) { DARABONBA_PTR_SET_RVALUE(clientSecurityGroupIds_, clientSecurityGroupIds) };


    // enablePortalPrivateAccess Field Functions 
    bool hasEnablePortalPrivateAccess() const { return this->enablePortalPrivateAccess_ != nullptr;};
    void deleteEnablePortalPrivateAccess() { this->enablePortalPrivateAccess_ = nullptr;};
    inline bool getEnablePortalPrivateAccess() const { DARABONBA_PTR_GET_DEFAULT(enablePortalPrivateAccess_, false) };
    inline StartInstanceRequest& setEnablePortalPrivateAccess(bool enablePortalPrivateAccess) { DARABONBA_PTR_SET_VALUE(enablePortalPrivateAccess_, enablePortalPrivateAccess) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StartInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline StartInstanceRequest& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline StartInstanceRequest& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // slaveVswitchId Field Functions 
    bool hasSlaveVswitchId() const { return this->slaveVswitchId_ != nullptr;};
    void deleteSlaveVswitchId() { this->slaveVswitchId_ = nullptr;};
    inline string getSlaveVswitchId() const { DARABONBA_PTR_GET_DEFAULT(slaveVswitchId_, "") };
    inline StartInstanceRequest& setSlaveVswitchId(string slaveVswitchId) { DARABONBA_PTR_SET_VALUE(slaveVswitchId_, slaveVswitchId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline StartInstanceRequest& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    shared_ptr<vector<string>> clientSecurityGroupIds_ {};
    shared_ptr<bool> enablePortalPrivateAccess_ {};
    // The ID of the bastion host that you want to enable.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host.
    shared_ptr<string> regionId_ {};
    // An array consisting of the IDs of security groups to which the bastion host is added.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> securityGroupIds_ {};
    shared_ptr<string> slaveVswitchId_ {};
    // The ID of the vSwitch to which the bastion host belongs.
    shared_ptr<string> vswitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
