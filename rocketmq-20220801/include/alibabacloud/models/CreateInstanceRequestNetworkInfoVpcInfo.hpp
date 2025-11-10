// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTNETWORKINFOVPCINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTNETWORKINFOVPCINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateInstanceRequestNetworkInfoVpcInfoVSwitches.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class CreateInstanceRequestNetworkInfoVpcInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestNetworkInfoVpcInfo& obj) { 
      DARABONBA_PTR_TO_JSON(securityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(vSwitches, vSwitches_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestNetworkInfoVpcInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(securityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(vSwitches, vSwitches_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    CreateInstanceRequestNetworkInfoVpcInfo() = default ;
    CreateInstanceRequestNetworkInfoVpcInfo(const CreateInstanceRequestNetworkInfoVpcInfo &) = default ;
    CreateInstanceRequestNetworkInfoVpcInfo(CreateInstanceRequestNetworkInfoVpcInfo &&) = default ;
    CreateInstanceRequestNetworkInfoVpcInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestNetworkInfoVpcInfo() = default ;
    CreateInstanceRequestNetworkInfoVpcInfo& operator=(const CreateInstanceRequestNetworkInfoVpcInfo &) = default ;
    CreateInstanceRequestNetworkInfoVpcInfo& operator=(CreateInstanceRequestNetworkInfoVpcInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityGroupIds_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->vSwitches_ == nullptr && return this->vpcId_ == nullptr; };
    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline string securityGroupIds() const { DARABONBA_PTR_GET_DEFAULT(securityGroupIds_, "") };
    inline CreateInstanceRequestNetworkInfoVpcInfo& setSecurityGroupIds(string securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateInstanceRequestNetworkInfoVpcInfo& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const vector<Models::CreateInstanceRequestNetworkInfoVpcInfoVSwitches> & vSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<Models::CreateInstanceRequestNetworkInfoVpcInfoVSwitches>) };
    inline vector<Models::CreateInstanceRequestNetworkInfoVpcInfoVSwitches> vSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<Models::CreateInstanceRequestNetworkInfoVpcInfoVSwitches>) };
    inline CreateInstanceRequestNetworkInfoVpcInfo& setVSwitches(const vector<Models::CreateInstanceRequestNetworkInfoVpcInfoVSwitches> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline CreateInstanceRequestNetworkInfoVpcInfo& setVSwitches(vector<Models::CreateInstanceRequestNetworkInfoVpcInfoVSwitches> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateInstanceRequestNetworkInfoVpcInfo& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the security group to which the instance belongs.
    std::shared_ptr<string> securityGroupIds_ = nullptr;
    // The ID of the vSwitch with which the instance is associated. If you want to specify multiple vSwitches, separate the vSwitches with vertical bars (|).
    // 
    // >  After you create an ApsaraMQ for RocketMQ instance, you cannot change the vSwitch with which the instance is associated. If you want to change the vSwitch with which the instance is associated, you must release the instance and purchase a new instance.
    // 
    // >  We recommend that you configure vSwitches instead of this parameter.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The vSwitches.
    // 
    // >  After you create an ApsaraMQ for RocketMQ instance, you cannot change the vSwitch with which the instance is associated. If you want to change the vSwitch with which the instance is associated, you must release the instance and purchase a new instance.
    // 
    // >  This parameter is required. We recommend that you configure this parameter instead of vSwitchId.
    std::shared_ptr<vector<Models::CreateInstanceRequestNetworkInfoVpcInfoVSwitches>> vSwitches_ = nullptr;
    // The ID of the VPC with which the instance to be created is associated.
    // 
    // >  After you create an ApsaraMQ for RocketMQ instance, you cannot change the VPC with which the instance is associated. If you want to change the VPC with which the instance is associated, you must release the instance and create a new instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
