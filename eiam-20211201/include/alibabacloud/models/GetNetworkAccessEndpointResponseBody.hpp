// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKACCESSENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKACCESSENDPOINTRESPONSEBODY_HPP_
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
  class GetNetworkAccessEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkAccessEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpoint, networkAccessEndpoint_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkAccessEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpoint, networkAccessEndpoint_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNetworkAccessEndpointResponseBody() = default ;
    GetNetworkAccessEndpointResponseBody(const GetNetworkAccessEndpointResponseBody &) = default ;
    GetNetworkAccessEndpointResponseBody(GetNetworkAccessEndpointResponseBody &&) = default ;
    GetNetworkAccessEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkAccessEndpointResponseBody() = default ;
    GetNetworkAccessEndpointResponseBody& operator=(const GetNetworkAccessEndpointResponseBody &) = default ;
    GetNetworkAccessEndpointResponseBody& operator=(GetNetworkAccessEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkAccessEndpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkAccessEndpoint& obj) { 
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
      friend void from_json(const Darabonba::Json& j, NetworkAccessEndpoint& obj) { 
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
      NetworkAccessEndpoint() = default ;
      NetworkAccessEndpoint(const NetworkAccessEndpoint &) = default ;
      NetworkAccessEndpoint(NetworkAccessEndpoint &&) = default ;
      NetworkAccessEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkAccessEndpoint() = default ;
      NetworkAccessEndpoint& operator=(const NetworkAccessEndpoint &) = default ;
      NetworkAccessEndpoint& operator=(NetworkAccessEndpoint &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->egressPrivateIpAddresses_ == nullptr && this->egressPublicIpAddresses_ == nullptr && this->instanceId_ == nullptr && this->networkAccessEndpointId_ == nullptr && this->networkAccessEndpointName_ == nullptr
        && this->networkAccessEndpointType_ == nullptr && this->securityGroupId_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr && this->vSwitchIds_ == nullptr
        && this->vpcId_ == nullptr && this->vpcRegionId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline NetworkAccessEndpoint& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // egressPrivateIpAddresses Field Functions 
      bool hasEgressPrivateIpAddresses() const { return this->egressPrivateIpAddresses_ != nullptr;};
      void deleteEgressPrivateIpAddresses() { this->egressPrivateIpAddresses_ = nullptr;};
      inline const vector<string> & getEgressPrivateIpAddresses() const { DARABONBA_PTR_GET_CONST(egressPrivateIpAddresses_, vector<string>) };
      inline vector<string> getEgressPrivateIpAddresses() { DARABONBA_PTR_GET(egressPrivateIpAddresses_, vector<string>) };
      inline NetworkAccessEndpoint& setEgressPrivateIpAddresses(const vector<string> & egressPrivateIpAddresses) { DARABONBA_PTR_SET_VALUE(egressPrivateIpAddresses_, egressPrivateIpAddresses) };
      inline NetworkAccessEndpoint& setEgressPrivateIpAddresses(vector<string> && egressPrivateIpAddresses) { DARABONBA_PTR_SET_RVALUE(egressPrivateIpAddresses_, egressPrivateIpAddresses) };


      // egressPublicIpAddresses Field Functions 
      bool hasEgressPublicIpAddresses() const { return this->egressPublicIpAddresses_ != nullptr;};
      void deleteEgressPublicIpAddresses() { this->egressPublicIpAddresses_ = nullptr;};
      inline const vector<string> & getEgressPublicIpAddresses() const { DARABONBA_PTR_GET_CONST(egressPublicIpAddresses_, vector<string>) };
      inline vector<string> getEgressPublicIpAddresses() { DARABONBA_PTR_GET(egressPublicIpAddresses_, vector<string>) };
      inline NetworkAccessEndpoint& setEgressPublicIpAddresses(const vector<string> & egressPublicIpAddresses) { DARABONBA_PTR_SET_VALUE(egressPublicIpAddresses_, egressPublicIpAddresses) };
      inline NetworkAccessEndpoint& setEgressPublicIpAddresses(vector<string> && egressPublicIpAddresses) { DARABONBA_PTR_SET_RVALUE(egressPublicIpAddresses_, egressPublicIpAddresses) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline NetworkAccessEndpoint& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // networkAccessEndpointId Field Functions 
      bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
      void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
      inline string getNetworkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
      inline NetworkAccessEndpoint& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


      // networkAccessEndpointName Field Functions 
      bool hasNetworkAccessEndpointName() const { return this->networkAccessEndpointName_ != nullptr;};
      void deleteNetworkAccessEndpointName() { this->networkAccessEndpointName_ = nullptr;};
      inline string getNetworkAccessEndpointName() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointName_, "") };
      inline NetworkAccessEndpoint& setNetworkAccessEndpointName(string networkAccessEndpointName) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointName_, networkAccessEndpointName) };


      // networkAccessEndpointType Field Functions 
      bool hasNetworkAccessEndpointType() const { return this->networkAccessEndpointType_ != nullptr;};
      void deleteNetworkAccessEndpointType() { this->networkAccessEndpointType_ = nullptr;};
      inline string getNetworkAccessEndpointType() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointType_, "") };
      inline NetworkAccessEndpoint& setNetworkAccessEndpointType(string networkAccessEndpointType) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointType_, networkAccessEndpointType) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline NetworkAccessEndpoint& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline NetworkAccessEndpoint& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline NetworkAccessEndpoint& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline NetworkAccessEndpoint& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline NetworkAccessEndpoint& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline NetworkAccessEndpoint& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcRegionId Field Functions 
      bool hasVpcRegionId() const { return this->vpcRegionId_ != nullptr;};
      void deleteVpcRegionId() { this->vpcRegionId_ = nullptr;};
      inline string getVpcRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionId_, "") };
      inline NetworkAccessEndpoint& setVpcRegionId(string vpcRegionId) { DARABONBA_PTR_SET_VALUE(vpcRegionId_, vpcRegionId) };


    protected:
      // The time when the baseline was created.
      shared_ptr<int64_t> createTime_ {};
      // Public egress ip address range of the dedicated network endpoint
      // This field is returned only when NetworkEndpointType is set to private.
      shared_ptr<vector<string>> egressPrivateIpAddresses_ {};
      // Public egress ip address range of the shared network endpoint
      // This field is returned only when networkEndpointType is set to shared.
      shared_ptr<vector<string>> egressPublicIpAddresses_ {};
      // Instance ID.
      shared_ptr<string> instanceId_ {};
      // The unique identifier of the network access endpoint.
      shared_ptr<string> networkAccessEndpointId_ {};
      // Private network endpoint name.
      shared_ptr<string> networkAccessEndpointName_ {};
      // Type of the Network Endpoint
      // Possible values:
      // 
      // shared: Shared network endpoint
      // 
      // private: Dedicated network endpoint
      shared_ptr<string> networkAccessEndpointType_ {};
      // The ID of the destination security group.
      shared_ptr<string> securityGroupId_ {};
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
      shared_ptr<string> status_ {};
      // The time when the endpoint was updated.
      shared_ptr<int64_t> updateTime_ {};
      // List of specified vSwitches associated with the dedicated network endpoint connection.
      shared_ptr<vector<string>> vSwitchIds_ {};
      // The ID of the virtual private cloud (VPC).
      shared_ptr<string> vpcId_ {};
      // The region ID of the outbound virtual private cloud (VPC).
      shared_ptr<string> vpcRegionId_ {};
    };

    virtual bool empty() const override { return this->networkAccessEndpoint_ == nullptr
        && this->requestId_ == nullptr; };
    // networkAccessEndpoint Field Functions 
    bool hasNetworkAccessEndpoint() const { return this->networkAccessEndpoint_ != nullptr;};
    void deleteNetworkAccessEndpoint() { this->networkAccessEndpoint_ = nullptr;};
    inline const GetNetworkAccessEndpointResponseBody::NetworkAccessEndpoint & getNetworkAccessEndpoint() const { DARABONBA_PTR_GET_CONST(networkAccessEndpoint_, GetNetworkAccessEndpointResponseBody::NetworkAccessEndpoint) };
    inline GetNetworkAccessEndpointResponseBody::NetworkAccessEndpoint getNetworkAccessEndpoint() { DARABONBA_PTR_GET(networkAccessEndpoint_, GetNetworkAccessEndpointResponseBody::NetworkAccessEndpoint) };
    inline GetNetworkAccessEndpointResponseBody& setNetworkAccessEndpoint(const GetNetworkAccessEndpointResponseBody::NetworkAccessEndpoint & networkAccessEndpoint) { DARABONBA_PTR_SET_VALUE(networkAccessEndpoint_, networkAccessEndpoint) };
    inline GetNetworkAccessEndpointResponseBody& setNetworkAccessEndpoint(GetNetworkAccessEndpointResponseBody::NetworkAccessEndpoint && networkAccessEndpoint) { DARABONBA_PTR_SET_RVALUE(networkAccessEndpoint_, networkAccessEndpoint) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNetworkAccessEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Network endpoint information.
    shared_ptr<GetNetworkAccessEndpointResponseBody::NetworkAccessEndpoint> networkAccessEndpoint_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
