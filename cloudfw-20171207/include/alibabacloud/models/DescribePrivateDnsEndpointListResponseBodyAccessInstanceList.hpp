// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSENDPOINTLISTRESPONSEBODYACCESSINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSENDPOINTLISTRESPONSEBODYACCESSINSTANCELIST_HPP_
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
  class DescribePrivateDnsEndpointListResponseBodyAccessInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_TO_JSON(AccessInstanceName, accessInstanceName_);
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(DomainNameCount, domainNameCount_);
      DARABONBA_PTR_TO_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PrimaryDns, primaryDns_);
      DARABONBA_PTR_TO_JSON(PrivateDnsType, privateDnsType_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(StandbyDns, standbyDns_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_FROM_JSON(AccessInstanceName, accessInstanceName_);
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(DomainNameCount, domainNameCount_);
      DARABONBA_PTR_FROM_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PrimaryDns, primaryDns_);
      DARABONBA_PTR_FROM_JSON(PrivateDnsType, privateDnsType_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(StandbyDns, standbyDns_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribePrivateDnsEndpointListResponseBodyAccessInstanceList() = default ;
    DescribePrivateDnsEndpointListResponseBodyAccessInstanceList(const DescribePrivateDnsEndpointListResponseBodyAccessInstanceList &) = default ;
    DescribePrivateDnsEndpointListResponseBodyAccessInstanceList(DescribePrivateDnsEndpointListResponseBodyAccessInstanceList &&) = default ;
    DescribePrivateDnsEndpointListResponseBodyAccessInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrivateDnsEndpointListResponseBodyAccessInstanceList() = default ;
    DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& operator=(const DescribePrivateDnsEndpointListResponseBodyAccessInstanceList &) = default ;
    DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& operator=(DescribePrivateDnsEndpointListResponseBodyAccessInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessInstanceId_ == nullptr
        && return this->accessInstanceName_ == nullptr && return this->aliUid_ == nullptr && return this->domainNameCount_ == nullptr && return this->firewallType_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->ipProtocol_ == nullptr && return this->memberUid_ == nullptr && return this->port_ == nullptr && return this->primaryDns_ == nullptr && return this->privateDnsType_ == nullptr
        && return this->regionNo_ == nullptr && return this->standbyDns_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr && return this->vpcId_ == nullptr; };
    // accessInstanceId Field Functions 
    bool hasAccessInstanceId() const { return this->accessInstanceId_ != nullptr;};
    void deleteAccessInstanceId() { this->accessInstanceId_ = nullptr;};
    inline string accessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceId_, "") };
    inline DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& setAccessInstanceId(string accessInstanceId) { DARABONBA_PTR_SET_VALUE(accessInstanceId_, accessInstanceId) };


    // accessInstanceName Field Functions 
    bool hasAccessInstanceName() const { return this->accessInstanceName_ != nullptr;};
    void deleteAccessInstanceName() { this->accessInstanceName_ = nullptr;};
    inline string accessInstanceName() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceName_, "") };
    inline DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& setAccessInstanceName(string accessInstanceName) { DARABONBA_PTR_SET_VALUE(accessInstanceName_, accessInstanceName) };


    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // domainNameCount Field Functions 
    bool hasDomainNameCount() const { return this->domainNameCount_ != nullptr;};
    void deleteDomainNameCount() { this->domainNameCount_ = nullptr;};
    inline int64_t domainNameCount() const { DARABONBA_PTR_GET_DEFAULT(domainNameCount_, 0L) };
    inline DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& setDomainNameCount(int64_t domainNameCount) { DARABONBA_PTR_SET_VALUE(domainNameCount_, domainNameCount) };


    // firewallType Field Functions 
    bool hasFirewallType() const { return this->firewallType_ != nullptr;};
    void deleteFirewallType() { this->firewallType_ = nullptr;};
    inline const vector<string> & firewallType() const { DARABONBA_PTR_GET_CONST(firewallType_, vector<string>) };
    inline vector<string> firewallType() { DARABONBA_PTR_GET(firewallType_, vector<string>) };
    inline DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& setFirewallType(const vector<string> & firewallType) { DARABONBA_PTR_SET_VALUE(firewallType_, firewallType) };
    inline DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& setFirewallType(vector<string> && firewallType) { DARABONBA_PTR_SET_RVALUE(firewallType_, firewallType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline int32_t ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, 0) };
    inline DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& setIpProtocol(int32_t ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // primaryDns Field Functions 
    bool hasPrimaryDns() const { return this->primaryDns_ != nullptr;};
    void deletePrimaryDns() { this->primaryDns_ = nullptr;};
    inline string primaryDns() const { DARABONBA_PTR_GET_DEFAULT(primaryDns_, "") };
    inline DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& setPrimaryDns(string primaryDns) { DARABONBA_PTR_SET_VALUE(primaryDns_, primaryDns) };


    // privateDnsType Field Functions 
    bool hasPrivateDnsType() const { return this->privateDnsType_ != nullptr;};
    void deletePrivateDnsType() { this->privateDnsType_ = nullptr;};
    inline string privateDnsType() const { DARABONBA_PTR_GET_DEFAULT(privateDnsType_, "") };
    inline DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& setPrivateDnsType(string privateDnsType) { DARABONBA_PTR_SET_VALUE(privateDnsType_, privateDnsType) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // standbyDns Field Functions 
    bool hasStandbyDns() const { return this->standbyDns_ != nullptr;};
    void deleteStandbyDns() { this->standbyDns_ = nullptr;};
    inline string standbyDns() const { DARABONBA_PTR_GET_DEFAULT(standbyDns_, "") };
    inline DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& setStandbyDns(string standbyDns) { DARABONBA_PTR_SET_VALUE(standbyDns_, standbyDns) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribePrivateDnsEndpointListResponseBodyAccessInstanceList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> accessInstanceId_ = nullptr;
    std::shared_ptr<string> accessInstanceName_ = nullptr;
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    std::shared_ptr<int64_t> domainNameCount_ = nullptr;
    std::shared_ptr<vector<string>> firewallType_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int32_t> ipProtocol_ = nullptr;
    std::shared_ptr<int64_t> memberUid_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> primaryDns_ = nullptr;
    std::shared_ptr<string> privateDnsType_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<string> standbyDns_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
