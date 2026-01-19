// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceClusterInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceClusterInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceClusterAttribute, instanceClusterAttribute_);
      DARABONBA_PTR_TO_JSON(InstanceClusterId, instanceClusterId_);
      DARABONBA_PTR_TO_JSON(InstanceClusterName, instanceClusterName_);
      DARABONBA_PTR_TO_JSON(InstanceClusterStatus, instanceClusterStatus_);
      DARABONBA_PTR_TO_JSON(InstanceClusterType, instanceClusterType_);
      DARABONBA_PTR_TO_JSON(InstanceClusterVersion, instanceClusterVersion_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceClusterInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterAttribute, instanceClusterAttribute_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterId, instanceClusterId_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterName, instanceClusterName_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterStatus, instanceClusterStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterType, instanceClusterType_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterVersion, instanceClusterVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceClusterInfoResponseBody() = default ;
    DescribeInstanceClusterInfoResponseBody(const DescribeInstanceClusterInfoResponseBody &) = default ;
    DescribeInstanceClusterInfoResponseBody(DescribeInstanceClusterInfoResponseBody &&) = default ;
    DescribeInstanceClusterInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceClusterInfoResponseBody() = default ;
    DescribeInstanceClusterInfoResponseBody& operator=(const DescribeInstanceClusterInfoResponseBody &) = default ;
    DescribeInstanceClusterInfoResponseBody& operator=(DescribeInstanceClusterInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(Instance, instance_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(Instance, instance_);
      };
      InstanceList() = default ;
      InstanceList(const InstanceList &) = default ;
      InstanceList(InstanceList &&) = default ;
      InstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceList() = default ;
      InstanceList& operator=(const InstanceList &) = default ;
      InstanceList& operator=(InstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Instance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instance& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Instance& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Instance() = default ;
        Instance(const Instance &) = default ;
        Instance(Instance &&) = default ;
        Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instance() = default ;
        Instance& operator=(const Instance &) = default ;
        Instance& operator=(Instance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Instance& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Instance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Instance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error message returned if the call fails.
        shared_ptr<string> errorMessage_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The instance name.
        shared_ptr<string> instanceName_ {};
        // The instance status.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->instance_ == nullptr; };
      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline const vector<InstanceList::Instance> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<InstanceList::Instance>) };
      inline vector<InstanceList::Instance> getInstance() { DARABONBA_PTR_GET(instance_, vector<InstanceList::Instance>) };
      inline InstanceList& setInstance(const vector<InstanceList::Instance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
      inline InstanceList& setInstance(vector<InstanceList::Instance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    protected:
      shared_ptr<vector<InstanceList::Instance>> instance_ {};
    };

    class InstanceClusterAttribute : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceClusterAttribute& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectCidrBlocks, connectCidrBlocks_);
        DARABONBA_PTR_TO_JSON(ConnectVpcId, connectVpcId_);
        DARABONBA_PTR_TO_JSON(EgressIpv6Enable, egressIpv6Enable_);
        DARABONBA_PTR_TO_JSON(HttpsPolicies, httpsPolicies_);
        DARABONBA_PTR_TO_JSON(IPV4AclId, IPV4AclId_);
        DARABONBA_PTR_TO_JSON(IPV4AclName, IPV4AclName_);
        DARABONBA_PTR_TO_JSON(IPV4AclStatus, IPV4AclStatus_);
        DARABONBA_PTR_TO_JSON(IPV4AclType, IPV4AclType_);
        DARABONBA_PTR_TO_JSON(IPV6AclId, IPV6AclId_);
        DARABONBA_PTR_TO_JSON(IPV6AclName, IPV6AclName_);
        DARABONBA_PTR_TO_JSON(IPV6AclStatus, IPV6AclStatus_);
        DARABONBA_PTR_TO_JSON(IPV6AclType, IPV6AclType_);
        DARABONBA_PTR_TO_JSON(InternetEgressAddress, internetEgressAddress_);
        DARABONBA_PTR_TO_JSON(IntranetEgressAddress, intranetEgressAddress_);
        DARABONBA_PTR_TO_JSON(IntranetSegments, intranetSegments_);
        DARABONBA_PTR_TO_JSON(SupportIpv6, supportIpv6_);
        DARABONBA_PTR_TO_JSON(UserVpcId, userVpcId_);
        DARABONBA_PTR_TO_JSON(UserVswitchId, userVswitchId_);
        DARABONBA_PTR_TO_JSON(VipTypeList, vipTypeList_);
        DARABONBA_PTR_TO_JSON(VpcIntranetEnable, vpcIntranetEnable_);
        DARABONBA_PTR_TO_JSON(VpcOwnerId, vpcOwnerId_);
        DARABONBA_PTR_TO_JSON(VpcSlbIntranetEnable, vpcSlbIntranetEnable_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceClusterAttribute& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectCidrBlocks, connectCidrBlocks_);
        DARABONBA_PTR_FROM_JSON(ConnectVpcId, connectVpcId_);
        DARABONBA_PTR_FROM_JSON(EgressIpv6Enable, egressIpv6Enable_);
        DARABONBA_PTR_FROM_JSON(HttpsPolicies, httpsPolicies_);
        DARABONBA_PTR_FROM_JSON(IPV4AclId, IPV4AclId_);
        DARABONBA_PTR_FROM_JSON(IPV4AclName, IPV4AclName_);
        DARABONBA_PTR_FROM_JSON(IPV4AclStatus, IPV4AclStatus_);
        DARABONBA_PTR_FROM_JSON(IPV4AclType, IPV4AclType_);
        DARABONBA_PTR_FROM_JSON(IPV6AclId, IPV6AclId_);
        DARABONBA_PTR_FROM_JSON(IPV6AclName, IPV6AclName_);
        DARABONBA_PTR_FROM_JSON(IPV6AclStatus, IPV6AclStatus_);
        DARABONBA_PTR_FROM_JSON(IPV6AclType, IPV6AclType_);
        DARABONBA_PTR_FROM_JSON(InternetEgressAddress, internetEgressAddress_);
        DARABONBA_PTR_FROM_JSON(IntranetEgressAddress, intranetEgressAddress_);
        DARABONBA_PTR_FROM_JSON(IntranetSegments, intranetSegments_);
        DARABONBA_PTR_FROM_JSON(SupportIpv6, supportIpv6_);
        DARABONBA_PTR_FROM_JSON(UserVpcId, userVpcId_);
        DARABONBA_PTR_FROM_JSON(UserVswitchId, userVswitchId_);
        DARABONBA_PTR_FROM_JSON(VipTypeList, vipTypeList_);
        DARABONBA_PTR_FROM_JSON(VpcIntranetEnable, vpcIntranetEnable_);
        DARABONBA_PTR_FROM_JSON(VpcOwnerId, vpcOwnerId_);
        DARABONBA_PTR_FROM_JSON(VpcSlbIntranetEnable, vpcSlbIntranetEnable_);
      };
      InstanceClusterAttribute() = default ;
      InstanceClusterAttribute(const InstanceClusterAttribute &) = default ;
      InstanceClusterAttribute(InstanceClusterAttribute &&) = default ;
      InstanceClusterAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceClusterAttribute() = default ;
      InstanceClusterAttribute& operator=(const InstanceClusterAttribute &) = default ;
      InstanceClusterAttribute& operator=(InstanceClusterAttribute &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectCidrBlocks_ == nullptr
        && this->connectVpcId_ == nullptr && this->egressIpv6Enable_ == nullptr && this->httpsPolicies_ == nullptr && this->IPV4AclId_ == nullptr && this->IPV4AclName_ == nullptr
        && this->IPV4AclStatus_ == nullptr && this->IPV4AclType_ == nullptr && this->IPV6AclId_ == nullptr && this->IPV6AclName_ == nullptr && this->IPV6AclStatus_ == nullptr
        && this->IPV6AclType_ == nullptr && this->internetEgressAddress_ == nullptr && this->intranetEgressAddress_ == nullptr && this->intranetSegments_ == nullptr && this->supportIpv6_ == nullptr
        && this->userVpcId_ == nullptr && this->userVswitchId_ == nullptr && this->vipTypeList_ == nullptr && this->vpcIntranetEnable_ == nullptr && this->vpcOwnerId_ == nullptr
        && this->vpcSlbIntranetEnable_ == nullptr; };
      // connectCidrBlocks Field Functions 
      bool hasConnectCidrBlocks() const { return this->connectCidrBlocks_ != nullptr;};
      void deleteConnectCidrBlocks() { this->connectCidrBlocks_ = nullptr;};
      inline string getConnectCidrBlocks() const { DARABONBA_PTR_GET_DEFAULT(connectCidrBlocks_, "") };
      inline InstanceClusterAttribute& setConnectCidrBlocks(string connectCidrBlocks) { DARABONBA_PTR_SET_VALUE(connectCidrBlocks_, connectCidrBlocks) };


      // connectVpcId Field Functions 
      bool hasConnectVpcId() const { return this->connectVpcId_ != nullptr;};
      void deleteConnectVpcId() { this->connectVpcId_ = nullptr;};
      inline string getConnectVpcId() const { DARABONBA_PTR_GET_DEFAULT(connectVpcId_, "") };
      inline InstanceClusterAttribute& setConnectVpcId(string connectVpcId) { DARABONBA_PTR_SET_VALUE(connectVpcId_, connectVpcId) };


      // egressIpv6Enable Field Functions 
      bool hasEgressIpv6Enable() const { return this->egressIpv6Enable_ != nullptr;};
      void deleteEgressIpv6Enable() { this->egressIpv6Enable_ = nullptr;};
      inline bool getEgressIpv6Enable() const { DARABONBA_PTR_GET_DEFAULT(egressIpv6Enable_, false) };
      inline InstanceClusterAttribute& setEgressIpv6Enable(bool egressIpv6Enable) { DARABONBA_PTR_SET_VALUE(egressIpv6Enable_, egressIpv6Enable) };


      // httpsPolicies Field Functions 
      bool hasHttpsPolicies() const { return this->httpsPolicies_ != nullptr;};
      void deleteHttpsPolicies() { this->httpsPolicies_ = nullptr;};
      inline string getHttpsPolicies() const { DARABONBA_PTR_GET_DEFAULT(httpsPolicies_, "") };
      inline InstanceClusterAttribute& setHttpsPolicies(string httpsPolicies) { DARABONBA_PTR_SET_VALUE(httpsPolicies_, httpsPolicies) };


      // IPV4AclId Field Functions 
      bool hasIPV4AclId() const { return this->IPV4AclId_ != nullptr;};
      void deleteIPV4AclId() { this->IPV4AclId_ = nullptr;};
      inline string getIPV4AclId() const { DARABONBA_PTR_GET_DEFAULT(IPV4AclId_, "") };
      inline InstanceClusterAttribute& setIPV4AclId(string IPV4AclId) { DARABONBA_PTR_SET_VALUE(IPV4AclId_, IPV4AclId) };


      // IPV4AclName Field Functions 
      bool hasIPV4AclName() const { return this->IPV4AclName_ != nullptr;};
      void deleteIPV4AclName() { this->IPV4AclName_ = nullptr;};
      inline string getIPV4AclName() const { DARABONBA_PTR_GET_DEFAULT(IPV4AclName_, "") };
      inline InstanceClusterAttribute& setIPV4AclName(string IPV4AclName) { DARABONBA_PTR_SET_VALUE(IPV4AclName_, IPV4AclName) };


      // IPV4AclStatus Field Functions 
      bool hasIPV4AclStatus() const { return this->IPV4AclStatus_ != nullptr;};
      void deleteIPV4AclStatus() { this->IPV4AclStatus_ = nullptr;};
      inline string getIPV4AclStatus() const { DARABONBA_PTR_GET_DEFAULT(IPV4AclStatus_, "") };
      inline InstanceClusterAttribute& setIPV4AclStatus(string IPV4AclStatus) { DARABONBA_PTR_SET_VALUE(IPV4AclStatus_, IPV4AclStatus) };


      // IPV4AclType Field Functions 
      bool hasIPV4AclType() const { return this->IPV4AclType_ != nullptr;};
      void deleteIPV4AclType() { this->IPV4AclType_ = nullptr;};
      inline string getIPV4AclType() const { DARABONBA_PTR_GET_DEFAULT(IPV4AclType_, "") };
      inline InstanceClusterAttribute& setIPV4AclType(string IPV4AclType) { DARABONBA_PTR_SET_VALUE(IPV4AclType_, IPV4AclType) };


      // IPV6AclId Field Functions 
      bool hasIPV6AclId() const { return this->IPV6AclId_ != nullptr;};
      void deleteIPV6AclId() { this->IPV6AclId_ = nullptr;};
      inline string getIPV6AclId() const { DARABONBA_PTR_GET_DEFAULT(IPV6AclId_, "") };
      inline InstanceClusterAttribute& setIPV6AclId(string IPV6AclId) { DARABONBA_PTR_SET_VALUE(IPV6AclId_, IPV6AclId) };


      // IPV6AclName Field Functions 
      bool hasIPV6AclName() const { return this->IPV6AclName_ != nullptr;};
      void deleteIPV6AclName() { this->IPV6AclName_ = nullptr;};
      inline string getIPV6AclName() const { DARABONBA_PTR_GET_DEFAULT(IPV6AclName_, "") };
      inline InstanceClusterAttribute& setIPV6AclName(string IPV6AclName) { DARABONBA_PTR_SET_VALUE(IPV6AclName_, IPV6AclName) };


      // IPV6AclStatus Field Functions 
      bool hasIPV6AclStatus() const { return this->IPV6AclStatus_ != nullptr;};
      void deleteIPV6AclStatus() { this->IPV6AclStatus_ = nullptr;};
      inline string getIPV6AclStatus() const { DARABONBA_PTR_GET_DEFAULT(IPV6AclStatus_, "") };
      inline InstanceClusterAttribute& setIPV6AclStatus(string IPV6AclStatus) { DARABONBA_PTR_SET_VALUE(IPV6AclStatus_, IPV6AclStatus) };


      // IPV6AclType Field Functions 
      bool hasIPV6AclType() const { return this->IPV6AclType_ != nullptr;};
      void deleteIPV6AclType() { this->IPV6AclType_ = nullptr;};
      inline string getIPV6AclType() const { DARABONBA_PTR_GET_DEFAULT(IPV6AclType_, "") };
      inline InstanceClusterAttribute& setIPV6AclType(string IPV6AclType) { DARABONBA_PTR_SET_VALUE(IPV6AclType_, IPV6AclType) };


      // internetEgressAddress Field Functions 
      bool hasInternetEgressAddress() const { return this->internetEgressAddress_ != nullptr;};
      void deleteInternetEgressAddress() { this->internetEgressAddress_ = nullptr;};
      inline string getInternetEgressAddress() const { DARABONBA_PTR_GET_DEFAULT(internetEgressAddress_, "") };
      inline InstanceClusterAttribute& setInternetEgressAddress(string internetEgressAddress) { DARABONBA_PTR_SET_VALUE(internetEgressAddress_, internetEgressAddress) };


      // intranetEgressAddress Field Functions 
      bool hasIntranetEgressAddress() const { return this->intranetEgressAddress_ != nullptr;};
      void deleteIntranetEgressAddress() { this->intranetEgressAddress_ = nullptr;};
      inline string getIntranetEgressAddress() const { DARABONBA_PTR_GET_DEFAULT(intranetEgressAddress_, "") };
      inline InstanceClusterAttribute& setIntranetEgressAddress(string intranetEgressAddress) { DARABONBA_PTR_SET_VALUE(intranetEgressAddress_, intranetEgressAddress) };


      // intranetSegments Field Functions 
      bool hasIntranetSegments() const { return this->intranetSegments_ != nullptr;};
      void deleteIntranetSegments() { this->intranetSegments_ = nullptr;};
      inline string getIntranetSegments() const { DARABONBA_PTR_GET_DEFAULT(intranetSegments_, "") };
      inline InstanceClusterAttribute& setIntranetSegments(string intranetSegments) { DARABONBA_PTR_SET_VALUE(intranetSegments_, intranetSegments) };


      // supportIpv6 Field Functions 
      bool hasSupportIpv6() const { return this->supportIpv6_ != nullptr;};
      void deleteSupportIpv6() { this->supportIpv6_ = nullptr;};
      inline bool getSupportIpv6() const { DARABONBA_PTR_GET_DEFAULT(supportIpv6_, false) };
      inline InstanceClusterAttribute& setSupportIpv6(bool supportIpv6) { DARABONBA_PTR_SET_VALUE(supportIpv6_, supportIpv6) };


      // userVpcId Field Functions 
      bool hasUserVpcId() const { return this->userVpcId_ != nullptr;};
      void deleteUserVpcId() { this->userVpcId_ = nullptr;};
      inline string getUserVpcId() const { DARABONBA_PTR_GET_DEFAULT(userVpcId_, "") };
      inline InstanceClusterAttribute& setUserVpcId(string userVpcId) { DARABONBA_PTR_SET_VALUE(userVpcId_, userVpcId) };


      // userVswitchId Field Functions 
      bool hasUserVswitchId() const { return this->userVswitchId_ != nullptr;};
      void deleteUserVswitchId() { this->userVswitchId_ = nullptr;};
      inline string getUserVswitchId() const { DARABONBA_PTR_GET_DEFAULT(userVswitchId_, "") };
      inline InstanceClusterAttribute& setUserVswitchId(string userVswitchId) { DARABONBA_PTR_SET_VALUE(userVswitchId_, userVswitchId) };


      // vipTypeList Field Functions 
      bool hasVipTypeList() const { return this->vipTypeList_ != nullptr;};
      void deleteVipTypeList() { this->vipTypeList_ = nullptr;};
      inline string getVipTypeList() const { DARABONBA_PTR_GET_DEFAULT(vipTypeList_, "") };
      inline InstanceClusterAttribute& setVipTypeList(string vipTypeList) { DARABONBA_PTR_SET_VALUE(vipTypeList_, vipTypeList) };


      // vpcIntranetEnable Field Functions 
      bool hasVpcIntranetEnable() const { return this->vpcIntranetEnable_ != nullptr;};
      void deleteVpcIntranetEnable() { this->vpcIntranetEnable_ = nullptr;};
      inline bool getVpcIntranetEnable() const { DARABONBA_PTR_GET_DEFAULT(vpcIntranetEnable_, false) };
      inline InstanceClusterAttribute& setVpcIntranetEnable(bool vpcIntranetEnable) { DARABONBA_PTR_SET_VALUE(vpcIntranetEnable_, vpcIntranetEnable) };


      // vpcOwnerId Field Functions 
      bool hasVpcOwnerId() const { return this->vpcOwnerId_ != nullptr;};
      void deleteVpcOwnerId() { this->vpcOwnerId_ = nullptr;};
      inline int64_t getVpcOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vpcOwnerId_, 0L) };
      inline InstanceClusterAttribute& setVpcOwnerId(int64_t vpcOwnerId) { DARABONBA_PTR_SET_VALUE(vpcOwnerId_, vpcOwnerId) };


      // vpcSlbIntranetEnable Field Functions 
      bool hasVpcSlbIntranetEnable() const { return this->vpcSlbIntranetEnable_ != nullptr;};
      void deleteVpcSlbIntranetEnable() { this->vpcSlbIntranetEnable_ = nullptr;};
      inline bool getVpcSlbIntranetEnable() const { DARABONBA_PTR_GET_DEFAULT(vpcSlbIntranetEnable_, false) };
      inline InstanceClusterAttribute& setVpcSlbIntranetEnable(bool vpcSlbIntranetEnable) { DARABONBA_PTR_SET_VALUE(vpcSlbIntranetEnable_, vpcSlbIntranetEnable) };


    protected:
      // The internal CIDR block of the user VPC that can be accessed by the cluster if the cluster consists of VPC integration instances.
      shared_ptr<string> connectCidrBlocks_ {};
      // The ID of the user VPC that is connected to the cluster if the cluster consists of VPC integration instances.
      shared_ptr<string> connectVpcId_ {};
      // Indicates whether outbound IPv6 traffic is supported.
      shared_ptr<bool> egressIpv6Enable_ {};
      // The HTTPS security policy.
      shared_ptr<string> httpsPolicies_ {};
      // The ID of the IPv4 access control list (ACL).
      shared_ptr<string> IPV4AclId_ {};
      // The name of the IPv4 ACL.
      shared_ptr<string> IPV4AclName_ {};
      // Indicates whether IPv4 access control is enabled. Valid values:
      // 
      // *   on
      // *   off
      shared_ptr<string> IPV4AclStatus_ {};
      // The type of the IPv4 ACL.
      // 
      // *   black: blacklist
      // *   white: whitelist
      shared_ptr<string> IPV4AclType_ {};
      // The ID of the IPv6 ACL.
      shared_ptr<string> IPV6AclId_ {};
      // The name of the IPv6 ACL.
      shared_ptr<string> IPV6AclName_ {};
      // Indicates whether IPv6 access control is enabled. Valid values:
      // 
      // *   **on**
      // *   **off**
      shared_ptr<string> IPV6AclStatus_ {};
      // The type of the IPv6 ACL. Valid values:
      // 
      // *   black: blacklist
      // *   white: whitelist
      shared_ptr<string> IPV6AclType_ {};
      // The outbound public IP address.
      shared_ptr<string> internetEgressAddress_ {};
      // The outbound private IP address.
      shared_ptr<string> intranetEgressAddress_ {};
      // The custom CIDR block. The configured CIDR block is considered as a private block.
      shared_ptr<string> intranetSegments_ {};
      // Indicates whether IPv6 traffic is supported.
      shared_ptr<bool> supportIpv6_ {};
      // The ID of the client VPC.
      shared_ptr<string> userVpcId_ {};
      // The vSwitch of the client VPC.
      shared_ptr<string> userVswitchId_ {};
      // The VIPs of the cluster.
      shared_ptr<string> vipTypeList_ {};
      // Indicates whether a virtual private cloud (VPC) domain name is enabled.
      shared_ptr<bool> vpcIntranetEnable_ {};
      // The ID of the account to which the VPC belongs.
      shared_ptr<int64_t> vpcOwnerId_ {};
      // Indicates whether self-calling is enabled.
      shared_ptr<bool> vpcSlbIntranetEnable_ {};
    };

    virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->description_ == nullptr && this->instanceClusterAttribute_ == nullptr && this->instanceClusterId_ == nullptr && this->instanceClusterName_ == nullptr && this->instanceClusterStatus_ == nullptr
        && this->instanceClusterType_ == nullptr && this->instanceClusterVersion_ == nullptr && this->instanceList_ == nullptr && this->modifiedTime_ == nullptr && this->regionId_ == nullptr
        && this->requestId_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceClusterAttribute Field Functions 
    bool hasInstanceClusterAttribute() const { return this->instanceClusterAttribute_ != nullptr;};
    void deleteInstanceClusterAttribute() { this->instanceClusterAttribute_ = nullptr;};
    inline const DescribeInstanceClusterInfoResponseBody::InstanceClusterAttribute & getInstanceClusterAttribute() const { DARABONBA_PTR_GET_CONST(instanceClusterAttribute_, DescribeInstanceClusterInfoResponseBody::InstanceClusterAttribute) };
    inline DescribeInstanceClusterInfoResponseBody::InstanceClusterAttribute getInstanceClusterAttribute() { DARABONBA_PTR_GET(instanceClusterAttribute_, DescribeInstanceClusterInfoResponseBody::InstanceClusterAttribute) };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceClusterAttribute(const DescribeInstanceClusterInfoResponseBody::InstanceClusterAttribute & instanceClusterAttribute) { DARABONBA_PTR_SET_VALUE(instanceClusterAttribute_, instanceClusterAttribute) };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceClusterAttribute(DescribeInstanceClusterInfoResponseBody::InstanceClusterAttribute && instanceClusterAttribute) { DARABONBA_PTR_SET_RVALUE(instanceClusterAttribute_, instanceClusterAttribute) };


    // instanceClusterId Field Functions 
    bool hasInstanceClusterId() const { return this->instanceClusterId_ != nullptr;};
    void deleteInstanceClusterId() { this->instanceClusterId_ = nullptr;};
    inline string getInstanceClusterId() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterId_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceClusterId(string instanceClusterId) { DARABONBA_PTR_SET_VALUE(instanceClusterId_, instanceClusterId) };


    // instanceClusterName Field Functions 
    bool hasInstanceClusterName() const { return this->instanceClusterName_ != nullptr;};
    void deleteInstanceClusterName() { this->instanceClusterName_ = nullptr;};
    inline string getInstanceClusterName() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterName_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceClusterName(string instanceClusterName) { DARABONBA_PTR_SET_VALUE(instanceClusterName_, instanceClusterName) };


    // instanceClusterStatus Field Functions 
    bool hasInstanceClusterStatus() const { return this->instanceClusterStatus_ != nullptr;};
    void deleteInstanceClusterStatus() { this->instanceClusterStatus_ = nullptr;};
    inline string getInstanceClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterStatus_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceClusterStatus(string instanceClusterStatus) { DARABONBA_PTR_SET_VALUE(instanceClusterStatus_, instanceClusterStatus) };


    // instanceClusterType Field Functions 
    bool hasInstanceClusterType() const { return this->instanceClusterType_ != nullptr;};
    void deleteInstanceClusterType() { this->instanceClusterType_ = nullptr;};
    inline string getInstanceClusterType() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterType_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceClusterType(string instanceClusterType) { DARABONBA_PTR_SET_VALUE(instanceClusterType_, instanceClusterType) };


    // instanceClusterVersion Field Functions 
    bool hasInstanceClusterVersion() const { return this->instanceClusterVersion_ != nullptr;};
    void deleteInstanceClusterVersion() { this->instanceClusterVersion_ = nullptr;};
    inline string getInstanceClusterVersion() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterVersion_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceClusterVersion(string instanceClusterVersion) { DARABONBA_PTR_SET_VALUE(instanceClusterVersion_, instanceClusterVersion) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const DescribeInstanceClusterInfoResponseBody::InstanceList & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, DescribeInstanceClusterInfoResponseBody::InstanceList) };
    inline DescribeInstanceClusterInfoResponseBody::InstanceList getInstanceList() { DARABONBA_PTR_GET(instanceList_, DescribeInstanceClusterInfoResponseBody::InstanceList) };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceList(const DescribeInstanceClusterInfoResponseBody::InstanceList & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline DescribeInstanceClusterInfoResponseBody& setInstanceList(DescribeInstanceClusterInfoResponseBody::InstanceList && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceClusterInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time when the cluster was created.
    shared_ptr<string> createdTime_ {};
    // The cluster description, which can be up to 200 characters in length.
    shared_ptr<string> description_ {};
    // The cluster details.
    shared_ptr<DescribeInstanceClusterInfoResponseBody::InstanceClusterAttribute> instanceClusterAttribute_ {};
    // The cluster ID.
    shared_ptr<string> instanceClusterId_ {};
    // The cluster name.
    shared_ptr<string> instanceClusterName_ {};
    // The cluster status.
    shared_ptr<string> instanceClusterStatus_ {};
    // The cluster type.
    shared_ptr<string> instanceClusterType_ {};
    // The cluster version.
    shared_ptr<string> instanceClusterVersion_ {};
    // The dedicated instances contained in the cluster.
    shared_ptr<DescribeInstanceClusterInfoResponseBody::InstanceList> instanceList_ {};
    // The time when the cluster was last modified.
    shared_ptr<string> modifiedTime_ {};
    // The region ID of the cluster.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
