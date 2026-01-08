// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSENDPOINTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSENDPOINTLISTRESPONSEBODY_HPP_
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
  class DescribePrivateDnsEndpointListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrivateDnsEndpointListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessInstanceList, accessInstanceList_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrivateDnsEndpointListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessInstanceList, accessInstanceList_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePrivateDnsEndpointListResponseBody() = default ;
    DescribePrivateDnsEndpointListResponseBody(const DescribePrivateDnsEndpointListResponseBody &) = default ;
    DescribePrivateDnsEndpointListResponseBody(DescribePrivateDnsEndpointListResponseBody &&) = default ;
    DescribePrivateDnsEndpointListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrivateDnsEndpointListResponseBody() = default ;
    DescribePrivateDnsEndpointListResponseBody& operator=(const DescribePrivateDnsEndpointListResponseBody &) = default ;
    DescribePrivateDnsEndpointListResponseBody& operator=(DescribePrivateDnsEndpointListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessInstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessInstanceList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, AccessInstanceList& obj) { 
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
      AccessInstanceList() = default ;
      AccessInstanceList(const AccessInstanceList &) = default ;
      AccessInstanceList(AccessInstanceList &&) = default ;
      AccessInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessInstanceList() = default ;
      AccessInstanceList& operator=(const AccessInstanceList &) = default ;
      AccessInstanceList& operator=(AccessInstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessInstanceId_ == nullptr
        && this->accessInstanceName_ == nullptr && this->aliUid_ == nullptr && this->domainNameCount_ == nullptr && this->firewallType_ == nullptr && this->gmtCreate_ == nullptr
        && this->ipProtocol_ == nullptr && this->memberUid_ == nullptr && this->port_ == nullptr && this->primaryDns_ == nullptr && this->privateDnsType_ == nullptr
        && this->regionNo_ == nullptr && this->standbyDns_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->vpcId_ == nullptr; };
      // accessInstanceId Field Functions 
      bool hasAccessInstanceId() const { return this->accessInstanceId_ != nullptr;};
      void deleteAccessInstanceId() { this->accessInstanceId_ = nullptr;};
      inline string getAccessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceId_, "") };
      inline AccessInstanceList& setAccessInstanceId(string accessInstanceId) { DARABONBA_PTR_SET_VALUE(accessInstanceId_, accessInstanceId) };


      // accessInstanceName Field Functions 
      bool hasAccessInstanceName() const { return this->accessInstanceName_ != nullptr;};
      void deleteAccessInstanceName() { this->accessInstanceName_ = nullptr;};
      inline string getAccessInstanceName() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceName_, "") };
      inline AccessInstanceList& setAccessInstanceName(string accessInstanceName) { DARABONBA_PTR_SET_VALUE(accessInstanceName_, accessInstanceName) };


      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline AccessInstanceList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // domainNameCount Field Functions 
      bool hasDomainNameCount() const { return this->domainNameCount_ != nullptr;};
      void deleteDomainNameCount() { this->domainNameCount_ = nullptr;};
      inline int64_t getDomainNameCount() const { DARABONBA_PTR_GET_DEFAULT(domainNameCount_, 0L) };
      inline AccessInstanceList& setDomainNameCount(int64_t domainNameCount) { DARABONBA_PTR_SET_VALUE(domainNameCount_, domainNameCount) };


      // firewallType Field Functions 
      bool hasFirewallType() const { return this->firewallType_ != nullptr;};
      void deleteFirewallType() { this->firewallType_ = nullptr;};
      inline const vector<string> & getFirewallType() const { DARABONBA_PTR_GET_CONST(firewallType_, vector<string>) };
      inline vector<string> getFirewallType() { DARABONBA_PTR_GET(firewallType_, vector<string>) };
      inline AccessInstanceList& setFirewallType(const vector<string> & firewallType) { DARABONBA_PTR_SET_VALUE(firewallType_, firewallType) };
      inline AccessInstanceList& setFirewallType(vector<string> && firewallType) { DARABONBA_PTR_SET_RVALUE(firewallType_, firewallType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline AccessInstanceList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // ipProtocol Field Functions 
      bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
      void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
      inline int32_t getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, 0) };
      inline AccessInstanceList& setIpProtocol(int32_t ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline int64_t getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
      inline AccessInstanceList& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline AccessInstanceList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // primaryDns Field Functions 
      bool hasPrimaryDns() const { return this->primaryDns_ != nullptr;};
      void deletePrimaryDns() { this->primaryDns_ = nullptr;};
      inline string getPrimaryDns() const { DARABONBA_PTR_GET_DEFAULT(primaryDns_, "") };
      inline AccessInstanceList& setPrimaryDns(string primaryDns) { DARABONBA_PTR_SET_VALUE(primaryDns_, primaryDns) };


      // privateDnsType Field Functions 
      bool hasPrivateDnsType() const { return this->privateDnsType_ != nullptr;};
      void deletePrivateDnsType() { this->privateDnsType_ = nullptr;};
      inline string getPrivateDnsType() const { DARABONBA_PTR_GET_DEFAULT(privateDnsType_, "") };
      inline AccessInstanceList& setPrivateDnsType(string privateDnsType) { DARABONBA_PTR_SET_VALUE(privateDnsType_, privateDnsType) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline AccessInstanceList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // standbyDns Field Functions 
      bool hasStandbyDns() const { return this->standbyDns_ != nullptr;};
      void deleteStandbyDns() { this->standbyDns_ = nullptr;};
      inline string getStandbyDns() const { DARABONBA_PTR_GET_DEFAULT(standbyDns_, "") };
      inline AccessInstanceList& setStandbyDns(string standbyDns) { DARABONBA_PTR_SET_VALUE(standbyDns_, standbyDns) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline AccessInstanceList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline AccessInstanceList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline AccessInstanceList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<string> accessInstanceId_ {};
      shared_ptr<string> accessInstanceName_ {};
      shared_ptr<int64_t> aliUid_ {};
      shared_ptr<int64_t> domainNameCount_ {};
      shared_ptr<vector<string>> firewallType_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<int32_t> ipProtocol_ {};
      shared_ptr<int64_t> memberUid_ {};
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> primaryDns_ {};
      shared_ptr<string> privateDnsType_ {};
      shared_ptr<string> regionNo_ {};
      shared_ptr<string> standbyDns_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->accessInstanceList_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // accessInstanceList Field Functions 
    bool hasAccessInstanceList() const { return this->accessInstanceList_ != nullptr;};
    void deleteAccessInstanceList() { this->accessInstanceList_ = nullptr;};
    inline const vector<DescribePrivateDnsEndpointListResponseBody::AccessInstanceList> & getAccessInstanceList() const { DARABONBA_PTR_GET_CONST(accessInstanceList_, vector<DescribePrivateDnsEndpointListResponseBody::AccessInstanceList>) };
    inline vector<DescribePrivateDnsEndpointListResponseBody::AccessInstanceList> getAccessInstanceList() { DARABONBA_PTR_GET(accessInstanceList_, vector<DescribePrivateDnsEndpointListResponseBody::AccessInstanceList>) };
    inline DescribePrivateDnsEndpointListResponseBody& setAccessInstanceList(const vector<DescribePrivateDnsEndpointListResponseBody::AccessInstanceList> & accessInstanceList) { DARABONBA_PTR_SET_VALUE(accessInstanceList_, accessInstanceList) };
    inline DescribePrivateDnsEndpointListResponseBody& setAccessInstanceList(vector<DescribePrivateDnsEndpointListResponseBody::AccessInstanceList> && accessInstanceList) { DARABONBA_PTR_SET_RVALUE(accessInstanceList_, accessInstanceList) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribePrivateDnsEndpointListResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePrivateDnsEndpointListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePrivateDnsEndpointListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePrivateDnsEndpointListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribePrivateDnsEndpointListResponseBody::AccessInstanceList>> accessInstanceList_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
