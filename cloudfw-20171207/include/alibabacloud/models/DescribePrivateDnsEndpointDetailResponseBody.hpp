// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSENDPOINTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSENDPOINTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePrivateDnsEndpointDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrivateDnsEndpointDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_TO_JSON(AccessInstanceName, accessInstanceName_);
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PrimaryDns, primaryDns_);
      DARABONBA_PTR_TO_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_TO_JSON(PrimaryVSwitchIp, primaryVSwitchIp_);
      DARABONBA_PTR_TO_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_TO_JSON(PrivateDnsType, privateDnsType_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StandbyDns, standbyDns_);
      DARABONBA_PTR_TO_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_TO_JSON(StandbyVSwitchIp, standbyVSwitchIp_);
      DARABONBA_PTR_TO_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrivateDnsEndpointDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_FROM_JSON(AccessInstanceName, accessInstanceName_);
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PrimaryDns, primaryDns_);
      DARABONBA_PTR_FROM_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(PrimaryVSwitchIp, primaryVSwitchIp_);
      DARABONBA_PTR_FROM_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_FROM_JSON(PrivateDnsType, privateDnsType_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StandbyDns, standbyDns_);
      DARABONBA_PTR_FROM_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_FROM_JSON(StandbyVSwitchIp, standbyVSwitchIp_);
      DARABONBA_PTR_FROM_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribePrivateDnsEndpointDetailResponseBody() = default ;
    DescribePrivateDnsEndpointDetailResponseBody(const DescribePrivateDnsEndpointDetailResponseBody &) = default ;
    DescribePrivateDnsEndpointDetailResponseBody(DescribePrivateDnsEndpointDetailResponseBody &&) = default ;
    DescribePrivateDnsEndpointDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrivateDnsEndpointDetailResponseBody() = default ;
    DescribePrivateDnsEndpointDetailResponseBody& operator=(const DescribePrivateDnsEndpointDetailResponseBody &) = default ;
    DescribePrivateDnsEndpointDetailResponseBody& operator=(DescribePrivateDnsEndpointDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessInstanceId_ == nullptr
        && this->accessInstanceName_ == nullptr && this->aliUid_ == nullptr && this->endpointId_ == nullptr && this->firewallType_ == nullptr && this->gmtCreate_ == nullptr
        && this->ipProtocol_ == nullptr && this->memberUid_ == nullptr && this->port_ == nullptr && this->primaryDns_ == nullptr && this->primaryVSwitchId_ == nullptr
        && this->primaryVSwitchIp_ == nullptr && this->primaryZoneId_ == nullptr && this->privateDnsType_ == nullptr && this->regionNo_ == nullptr && this->requestId_ == nullptr
        && this->standbyDns_ == nullptr && this->standbyVSwitchId_ == nullptr && this->standbyVSwitchIp_ == nullptr && this->standbyZoneId_ == nullptr && this->status_ == nullptr
        && this->taskId_ == nullptr && this->vpcId_ == nullptr; };
    // accessInstanceId Field Functions 
    bool hasAccessInstanceId() const { return this->accessInstanceId_ != nullptr;};
    void deleteAccessInstanceId() { this->accessInstanceId_ = nullptr;};
    inline string getAccessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceId_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setAccessInstanceId(string accessInstanceId) { DARABONBA_PTR_SET_VALUE(accessInstanceId_, accessInstanceId) };


    // accessInstanceName Field Functions 
    bool hasAccessInstanceName() const { return this->accessInstanceName_ != nullptr;};
    void deleteAccessInstanceName() { this->accessInstanceName_ = nullptr;};
    inline string getAccessInstanceName() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceName_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setAccessInstanceName(string accessInstanceName) { DARABONBA_PTR_SET_VALUE(accessInstanceName_, accessInstanceName) };


    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribePrivateDnsEndpointDetailResponseBody& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // firewallType Field Functions 
    bool hasFirewallType() const { return this->firewallType_ != nullptr;};
    void deleteFirewallType() { this->firewallType_ = nullptr;};
    inline const vector<string> & getFirewallType() const { DARABONBA_PTR_GET_CONST(firewallType_, vector<string>) };
    inline vector<string> getFirewallType() { DARABONBA_PTR_GET(firewallType_, vector<string>) };
    inline DescribePrivateDnsEndpointDetailResponseBody& setFirewallType(const vector<string> & firewallType) { DARABONBA_PTR_SET_VALUE(firewallType_, firewallType) };
    inline DescribePrivateDnsEndpointDetailResponseBody& setFirewallType(vector<string> && firewallType) { DARABONBA_PTR_SET_RVALUE(firewallType_, firewallType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribePrivateDnsEndpointDetailResponseBody& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline DescribePrivateDnsEndpointDetailResponseBody& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribePrivateDnsEndpointDetailResponseBody& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // primaryDns Field Functions 
    bool hasPrimaryDns() const { return this->primaryDns_ != nullptr;};
    void deletePrimaryDns() { this->primaryDns_ = nullptr;};
    inline string getPrimaryDns() const { DARABONBA_PTR_GET_DEFAULT(primaryDns_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setPrimaryDns(string primaryDns) { DARABONBA_PTR_SET_VALUE(primaryDns_, primaryDns) };


    // primaryVSwitchId Field Functions 
    bool hasPrimaryVSwitchId() const { return this->primaryVSwitchId_ != nullptr;};
    void deletePrimaryVSwitchId() { this->primaryVSwitchId_ = nullptr;};
    inline string getPrimaryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(primaryVSwitchId_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setPrimaryVSwitchId(string primaryVSwitchId) { DARABONBA_PTR_SET_VALUE(primaryVSwitchId_, primaryVSwitchId) };


    // primaryVSwitchIp Field Functions 
    bool hasPrimaryVSwitchIp() const { return this->primaryVSwitchIp_ != nullptr;};
    void deletePrimaryVSwitchIp() { this->primaryVSwitchIp_ = nullptr;};
    inline string getPrimaryVSwitchIp() const { DARABONBA_PTR_GET_DEFAULT(primaryVSwitchIp_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setPrimaryVSwitchIp(string primaryVSwitchIp) { DARABONBA_PTR_SET_VALUE(primaryVSwitchIp_, primaryVSwitchIp) };


    // primaryZoneId Field Functions 
    bool hasPrimaryZoneId() const { return this->primaryZoneId_ != nullptr;};
    void deletePrimaryZoneId() { this->primaryZoneId_ = nullptr;};
    inline string getPrimaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(primaryZoneId_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setPrimaryZoneId(string primaryZoneId) { DARABONBA_PTR_SET_VALUE(primaryZoneId_, primaryZoneId) };


    // privateDnsType Field Functions 
    bool hasPrivateDnsType() const { return this->privateDnsType_ != nullptr;};
    void deletePrivateDnsType() { this->privateDnsType_ = nullptr;};
    inline string getPrivateDnsType() const { DARABONBA_PTR_GET_DEFAULT(privateDnsType_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setPrivateDnsType(string privateDnsType) { DARABONBA_PTR_SET_VALUE(privateDnsType_, privateDnsType) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // standbyDns Field Functions 
    bool hasStandbyDns() const { return this->standbyDns_ != nullptr;};
    void deleteStandbyDns() { this->standbyDns_ = nullptr;};
    inline string getStandbyDns() const { DARABONBA_PTR_GET_DEFAULT(standbyDns_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setStandbyDns(string standbyDns) { DARABONBA_PTR_SET_VALUE(standbyDns_, standbyDns) };


    // standbyVSwitchId Field Functions 
    bool hasStandbyVSwitchId() const { return this->standbyVSwitchId_ != nullptr;};
    void deleteStandbyVSwitchId() { this->standbyVSwitchId_ = nullptr;};
    inline string getStandbyVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(standbyVSwitchId_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setStandbyVSwitchId(string standbyVSwitchId) { DARABONBA_PTR_SET_VALUE(standbyVSwitchId_, standbyVSwitchId) };


    // standbyVSwitchIp Field Functions 
    bool hasStandbyVSwitchIp() const { return this->standbyVSwitchIp_ != nullptr;};
    void deleteStandbyVSwitchIp() { this->standbyVSwitchIp_ = nullptr;};
    inline string getStandbyVSwitchIp() const { DARABONBA_PTR_GET_DEFAULT(standbyVSwitchIp_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setStandbyVSwitchIp(string standbyVSwitchIp) { DARABONBA_PTR_SET_VALUE(standbyVSwitchIp_, standbyVSwitchIp) };


    // standbyZoneId Field Functions 
    bool hasStandbyZoneId() const { return this->standbyZoneId_ != nullptr;};
    void deleteStandbyZoneId() { this->standbyZoneId_ = nullptr;};
    inline string getStandbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyZoneId_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setStandbyZoneId(string standbyZoneId) { DARABONBA_PTR_SET_VALUE(standbyZoneId_, standbyZoneId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribePrivateDnsEndpointDetailResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The instance ID.
    shared_ptr<string> accessInstanceId_ {};
    // The name of the access instance.
    shared_ptr<string> accessInstanceName_ {};
    // The UID of the Alibaba Cloud account.
    shared_ptr<int64_t> aliUid_ {};
    // The endpoint ID.
    shared_ptr<string> endpointId_ {};
    // The type of the Cloud Firewall. Valid values:
    // 
    // - **internet**
    // 
    // - **vpc**
    // 
    // - **nat**
    shared_ptr<vector<string>> firewallType_ {};
    // The time when the endpoint was created. This is a UNIX timestamp in seconds.
    shared_ptr<int64_t> gmtCreate_ {};
    // The IP protocol. Valid values:
    // 
    // - **TCP**
    // 
    // - **UDP**
    shared_ptr<string> ipProtocol_ {};
    // The UID of the member account.
    shared_ptr<int64_t> memberUid_ {};
    // The port number.
    shared_ptr<int32_t> port_ {};
    // The primary DNS server.
    shared_ptr<string> primaryDns_ {};
    // The ID of the primary vSwitch.
    shared_ptr<string> primaryVSwitchId_ {};
    // The IP address of the primary vSwitch.
    shared_ptr<string> primaryVSwitchIp_ {};
    // The zone of the primary vSwitch.
    shared_ptr<string> primaryZoneId_ {};
    // The type of the private DNS. Valid values:
    // 
    // - **PrivateZone**
    // 
    // - **Custom** (Default)
    shared_ptr<string> privateDnsType_ {};
    // The ID of the region where the instance is located.
    shared_ptr<string> regionNo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The standby DNS server.
    shared_ptr<string> standbyDns_ {};
    // The ID of the standby vSwitch.
    shared_ptr<string> standbyVSwitchId_ {};
    // The IP address of the standby vSwitch.
    shared_ptr<string> standbyVSwitchIp_ {};
    // The zone of the standby vSwitch.
    shared_ptr<string> standbyZoneId_ {};
    // The instance status. Valid values:
    // 
    // - **creating**: Creating.
    // 
    // - **deleting**: Deleting.
    // 
    // - **normal**: Normal.
    // 
    // - **updating**: Updating.
    shared_ptr<string> status_ {};
    // The ID of the task.
    shared_ptr<string> taskId_ {};
    // The ID of the VPC.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
