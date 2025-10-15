// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKACCESSENDPOINTRESPONSEBODYNETWORKACCESSENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKACCESSENDPOINTRESPONSEBODYNETWORKACCESSENDPOINT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EgressPrivateIpAddresses, egressPrivateIpAddresses_);
      DARABONBA_PTR_TO_JSON(EgressPublicIpAddresses, egressPublicIpAddresses_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointName, networkAccessEndpointName_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointType, networkAccessEndpointType_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcRegionId, vpcRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EgressPrivateIpAddresses, egressPrivateIpAddresses_);
      DARABONBA_PTR_FROM_JSON(EgressPublicIpAddresses, egressPublicIpAddresses_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointName, networkAccessEndpointName_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointType, networkAccessEndpointType_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcRegionId, vpcRegionId_);
    };
    GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint() = default ;
    GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint(const GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint &) = default ;
    GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint(GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint &&) = default ;
    GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint() = default ;
    GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& operator=(const GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint &) = default ;
    GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& operator=(GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->egressPrivateIpAddresses_ == nullptr && return this->egressPublicIpAddresses_ == nullptr && return this->instanceId_ == nullptr && return this->networkAccessEndpointId_ == nullptr && return this->networkAccessEndpointName_ == nullptr
        && return this->networkAccessEndpointType_ == nullptr && return this->securityGroupId_ == nullptr && return this->status_ == nullptr && return this->updateTime_ == nullptr && return this->vSwitchIds_ == nullptr
        && return this->vpcId_ == nullptr && return this->vpcRegionId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // egressPrivateIpAddresses Field Functions 
    bool hasEgressPrivateIpAddresses() const { return this->egressPrivateIpAddresses_ != nullptr;};
    void deleteEgressPrivateIpAddresses() { this->egressPrivateIpAddresses_ = nullptr;};
    inline const vector<string> & egressPrivateIpAddresses() const { DARABONBA_PTR_GET_CONST(egressPrivateIpAddresses_, vector<string>) };
    inline vector<string> egressPrivateIpAddresses() { DARABONBA_PTR_GET(egressPrivateIpAddresses_, vector<string>) };
    inline GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& setEgressPrivateIpAddresses(const vector<string> & egressPrivateIpAddresses) { DARABONBA_PTR_SET_VALUE(egressPrivateIpAddresses_, egressPrivateIpAddresses) };
    inline GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& setEgressPrivateIpAddresses(vector<string> && egressPrivateIpAddresses) { DARABONBA_PTR_SET_RVALUE(egressPrivateIpAddresses_, egressPrivateIpAddresses) };


    // egressPublicIpAddresses Field Functions 
    bool hasEgressPublicIpAddresses() const { return this->egressPublicIpAddresses_ != nullptr;};
    void deleteEgressPublicIpAddresses() { this->egressPublicIpAddresses_ = nullptr;};
    inline const vector<string> & egressPublicIpAddresses() const { DARABONBA_PTR_GET_CONST(egressPublicIpAddresses_, vector<string>) };
    inline vector<string> egressPublicIpAddresses() { DARABONBA_PTR_GET(egressPublicIpAddresses_, vector<string>) };
    inline GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& setEgressPublicIpAddresses(const vector<string> & egressPublicIpAddresses) { DARABONBA_PTR_SET_VALUE(egressPublicIpAddresses_, egressPublicIpAddresses) };
    inline GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& setEgressPublicIpAddresses(vector<string> && egressPublicIpAddresses) { DARABONBA_PTR_SET_RVALUE(egressPublicIpAddresses_, egressPublicIpAddresses) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string networkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // networkAccessEndpointName Field Functions 
    bool hasNetworkAccessEndpointName() const { return this->networkAccessEndpointName_ != nullptr;};
    void deleteNetworkAccessEndpointName() { this->networkAccessEndpointName_ = nullptr;};
    inline string networkAccessEndpointName() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointName_, "") };
    inline GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& setNetworkAccessEndpointName(string networkAccessEndpointName) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointName_, networkAccessEndpointName) };


    // networkAccessEndpointType Field Functions 
    bool hasNetworkAccessEndpointType() const { return this->networkAccessEndpointType_ != nullptr;};
    void deleteNetworkAccessEndpointType() { this->networkAccessEndpointType_ = nullptr;};
    inline string networkAccessEndpointType() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointType_, "") };
    inline GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& setNetworkAccessEndpointType(string networkAccessEndpointType) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointType_, networkAccessEndpointType) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcRegionId Field Functions 
    bool hasVpcRegionId() const { return this->vpcRegionId_ != nullptr;};
    void deleteVpcRegionId() { this->vpcRegionId_ = nullptr;};
    inline string vpcRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionId_, "") };
    inline GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint& setVpcRegionId(string vpcRegionId) { DARABONBA_PTR_SET_VALUE(vpcRegionId_, vpcRegionId) };


  protected:
    // The time when the baseline was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Public egress ip address range of the dedicated network endpoint
    // This field is returned only when NetworkEndpointType is set to private.
    std::shared_ptr<vector<string>> egressPrivateIpAddresses_ = nullptr;
    // Public egress ip address range of the shared network endpoint
    // This field is returned only when networkEndpointType is set to shared.
    std::shared_ptr<vector<string>> egressPublicIpAddresses_ = nullptr;
    // Instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The unique identifier of the network access endpoint.
    std::shared_ptr<string> networkAccessEndpointId_ = nullptr;
    // Private network endpoint name.
    std::shared_ptr<string> networkAccessEndpointName_ = nullptr;
    // Type of the Network Endpoint
    // Possible values:
    // 
    // shared: Shared network endpoint
    // 
    // private: Dedicated network endpoint
    std::shared_ptr<string> networkAccessEndpointType_ = nullptr;
    // The ID of the destination security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // Status of the Network Endpoint
    // Possible values:
    // 
    // pending: Pending initialization
    // 
    // creating: Being created
    // 
    // running: Running
    // 
    // deleting: Being deleted
    std::shared_ptr<string> status_ = nullptr;
    // The time when the endpoint was updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // List of specified vSwitches associated with the dedicated network endpoint connection.
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
    // The region ID of the outbound virtual private cloud (VPC).
    std::shared_ptr<string> vpcRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
