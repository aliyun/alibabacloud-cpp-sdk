// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATANETWORKINFOVPCINFO_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATANETWORKINFOVPCINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetInstanceResponseBodyDataNetworkInfoVpcInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyDataNetworkInfoVpcInfo& obj) { 
      DARABONBA_PTR_TO_JSON(securityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(vSwitches, vSwitches_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyDataNetworkInfoVpcInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(securityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(vSwitches, vSwitches_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    GetInstanceResponseBodyDataNetworkInfoVpcInfo() = default ;
    GetInstanceResponseBodyDataNetworkInfoVpcInfo(const GetInstanceResponseBodyDataNetworkInfoVpcInfo &) = default ;
    GetInstanceResponseBodyDataNetworkInfoVpcInfo(GetInstanceResponseBodyDataNetworkInfoVpcInfo &&) = default ;
    GetInstanceResponseBodyDataNetworkInfoVpcInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyDataNetworkInfoVpcInfo() = default ;
    GetInstanceResponseBodyDataNetworkInfoVpcInfo& operator=(const GetInstanceResponseBodyDataNetworkInfoVpcInfo &) = default ;
    GetInstanceResponseBodyDataNetworkInfoVpcInfo& operator=(GetInstanceResponseBodyDataNetworkInfoVpcInfo &&) = default ;
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
    inline GetInstanceResponseBodyDataNetworkInfoVpcInfo& setSecurityGroupIds(string securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetInstanceResponseBodyDataNetworkInfoVpcInfo& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const vector<Models::GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches> & vSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<Models::GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches>) };
    inline vector<Models::GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches> vSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<Models::GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches>) };
    inline GetInstanceResponseBodyDataNetworkInfoVpcInfo& setVSwitches(const vector<Models::GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline GetInstanceResponseBodyDataNetworkInfoVpcInfo& setVSwitches(vector<Models::GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetInstanceResponseBodyDataNetworkInfoVpcInfo& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The security group ID.
    std::shared_ptr<string> securityGroupIds_ = nullptr;
    // The ID of the vSwitch with which the instance is associated.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The vSwitches.
    std::shared_ptr<vector<Models::GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches>> vSwitches_ = nullptr;
    // The ID of the VPC with which the instance is associated.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
