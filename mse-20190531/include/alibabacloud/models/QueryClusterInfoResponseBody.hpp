// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLUSTERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLUSTERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryClusterInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryClusterInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryClusterInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryClusterInfoResponseBody() = default ;
    QueryClusterInfoResponseBody(const QueryClusterInfoResponseBody &) = default ;
    QueryClusterInfoResponseBody(QueryClusterInfoResponseBody &&) = default ;
    QueryClusterInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryClusterInfoResponseBody() = default ;
    QueryClusterInfoResponseBody& operator=(const QueryClusterInfoResponseBody &) = default ;
    QueryClusterInfoResponseBody& operator=(QueryClusterInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AclEntryList, aclEntryList_);
        DARABONBA_PTR_TO_JSON(AclId, aclId_);
        DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_TO_JSON(CanUpdate, canUpdate_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(ClusterAliasName, clusterAliasName_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(ClusterSpecification, clusterSpecification_);
        DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_TO_JSON(ClusterVersion, clusterVersion_);
        DARABONBA_PTR_TO_JSON(ConnectionType, connectionType_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DiskCapacity, diskCapacity_);
        DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        DARABONBA_PTR_TO_JSON(EipInstanceId, eipInstanceId_);
        DARABONBA_PTR_TO_JSON(EndDate, endDate_);
        DARABONBA_PTR_TO_JSON(ExpectZones, expectZones_);
        DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
        DARABONBA_PTR_TO_JSON(InitCostTime, initCostTime_);
        DARABONBA_PTR_TO_JSON(InitStatus, initStatus_);
        DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceModels, instanceModels_);
        DARABONBA_PTR_TO_JSON(InternetAddress, internetAddress_);
        DARABONBA_PTR_TO_JSON(InternetDomain, internetDomain_);
        DARABONBA_PTR_TO_JSON(InternetPort, internetPort_);
        DARABONBA_PTR_TO_JSON(IntranetAddress, intranetAddress_);
        DARABONBA_PTR_TO_JSON(IntranetDomain, intranetDomain_);
        DARABONBA_PTR_TO_JSON(IntranetPort, intranetPort_);
        DARABONBA_PTR_TO_JSON(MaintenancePeriod, maintenancePeriod_);
        DARABONBA_PTR_TO_JSON(MemoryCapacity, memoryCapacity_);
        DARABONBA_PTR_TO_JSON(MseVersion, mseVersion_);
        DARABONBA_PTR_TO_JSON(NetType, netType_);
        DARABONBA_PTR_TO_JSON(PayInfo, payInfo_);
        DARABONBA_PTR_TO_JSON(PubNetworkFlow, pubNetworkFlow_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupType, securityGroupType_);
        DARABONBA_ANY_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
        DARABONBA_PTR_TO_JSON(VersionLifecycle, versionLifecycle_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AclEntryList, aclEntryList_);
        DARABONBA_PTR_FROM_JSON(AclId, aclId_);
        DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_FROM_JSON(CanUpdate, canUpdate_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(ClusterAliasName, clusterAliasName_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(ClusterSpecification, clusterSpecification_);
        DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_FROM_JSON(ClusterVersion, clusterVersion_);
        DARABONBA_PTR_FROM_JSON(ConnectionType, connectionType_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DiskCapacity, diskCapacity_);
        DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
        DARABONBA_PTR_FROM_JSON(EipInstanceId, eipInstanceId_);
        DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
        DARABONBA_PTR_FROM_JSON(ExpectZones, expectZones_);
        DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
        DARABONBA_PTR_FROM_JSON(InitCostTime, initCostTime_);
        DARABONBA_PTR_FROM_JSON(InitStatus, initStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceModels, instanceModels_);
        DARABONBA_PTR_FROM_JSON(InternetAddress, internetAddress_);
        DARABONBA_PTR_FROM_JSON(InternetDomain, internetDomain_);
        DARABONBA_PTR_FROM_JSON(InternetPort, internetPort_);
        DARABONBA_PTR_FROM_JSON(IntranetAddress, intranetAddress_);
        DARABONBA_PTR_FROM_JSON(IntranetDomain, intranetDomain_);
        DARABONBA_PTR_FROM_JSON(IntranetPort, intranetPort_);
        DARABONBA_PTR_FROM_JSON(MaintenancePeriod, maintenancePeriod_);
        DARABONBA_PTR_FROM_JSON(MemoryCapacity, memoryCapacity_);
        DARABONBA_PTR_FROM_JSON(MseVersion, mseVersion_);
        DARABONBA_PTR_FROM_JSON(NetType, netType_);
        DARABONBA_PTR_FROM_JSON(PayInfo, payInfo_);
        DARABONBA_PTR_FROM_JSON(PubNetworkFlow, pubNetworkFlow_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupType, securityGroupType_);
        DARABONBA_ANY_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
        DARABONBA_PTR_FROM_JSON(VersionLifecycle, versionLifecycle_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MaintenancePeriod : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MaintenancePeriod& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, MaintenancePeriod& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        MaintenancePeriod() = default ;
        MaintenancePeriod(const MaintenancePeriod &) = default ;
        MaintenancePeriod(MaintenancePeriod &&) = default ;
        MaintenancePeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MaintenancePeriod() = default ;
        MaintenancePeriod& operator=(const MaintenancePeriod &) = default ;
        MaintenancePeriod& operator=(MaintenancePeriod &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline MaintenancePeriod& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline MaintenancePeriod& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The start time of the O\\&M time window.
        shared_ptr<string> endTime_ {};
        // The end time of the O\\&M time window.
        shared_ptr<string> startTime_ {};
      };

      class InstanceModels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceModels& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTimestamp, creationTimestamp_);
          DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
          DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(PodName, podName_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(SingleTunnelVip, singleTunnelVip_);
          DARABONBA_PTR_TO_JSON(Zone, zone_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceModels& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTimestamp, creationTimestamp_);
          DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
          DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(PodName, podName_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(SingleTunnelVip, singleTunnelVip_);
          DARABONBA_PTR_FROM_JSON(Zone, zone_);
        };
        InstanceModels() = default ;
        InstanceModels(const InstanceModels &) = default ;
        InstanceModels(InstanceModels &&) = default ;
        InstanceModels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceModels() = default ;
        InstanceModels& operator=(const InstanceModels &) = default ;
        InstanceModels& operator=(InstanceModels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creationTimestamp_ == nullptr
        && this->healthStatus_ == nullptr && this->internetIp_ == nullptr && this->ip_ == nullptr && this->podName_ == nullptr && this->role_ == nullptr
        && this->singleTunnelVip_ == nullptr && this->zone_ == nullptr; };
        // creationTimestamp Field Functions 
        bool hasCreationTimestamp() const { return this->creationTimestamp_ != nullptr;};
        void deleteCreationTimestamp() { this->creationTimestamp_ = nullptr;};
        inline string getCreationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(creationTimestamp_, "") };
        inline InstanceModels& setCreationTimestamp(string creationTimestamp) { DARABONBA_PTR_SET_VALUE(creationTimestamp_, creationTimestamp) };


        // healthStatus Field Functions 
        bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
        void deleteHealthStatus() { this->healthStatus_ = nullptr;};
        inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
        inline InstanceModels& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


        // internetIp Field Functions 
        bool hasInternetIp() const { return this->internetIp_ != nullptr;};
        void deleteInternetIp() { this->internetIp_ = nullptr;};
        inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
        inline InstanceModels& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline InstanceModels& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // podName Field Functions 
        bool hasPodName() const { return this->podName_ != nullptr;};
        void deletePodName() { this->podName_ = nullptr;};
        inline string getPodName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
        inline InstanceModels& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline InstanceModels& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // singleTunnelVip Field Functions 
        bool hasSingleTunnelVip() const { return this->singleTunnelVip_ != nullptr;};
        void deleteSingleTunnelVip() { this->singleTunnelVip_ = nullptr;};
        inline string getSingleTunnelVip() const { DARABONBA_PTR_GET_DEFAULT(singleTunnelVip_, "") };
        inline InstanceModels& setSingleTunnelVip(string singleTunnelVip) { DARABONBA_PTR_SET_VALUE(singleTunnelVip_, singleTunnelVip) };


        // zone Field Functions 
        bool hasZone() const { return this->zone_ != nullptr;};
        void deleteZone() { this->zone_ = nullptr;};
        inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
        inline InstanceModels& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


      protected:
        // A reserved parameter.
        shared_ptr<string> creationTimestamp_ {};
        // A reserved parameter.
        shared_ptr<string> healthStatus_ {};
        // A reserved parameter.
        shared_ptr<string> internetIp_ {};
        // A reserved parameter.
        shared_ptr<string> ip_ {};
        // A reserved parameter.
        shared_ptr<string> podName_ {};
        // A reserved parameter.
        shared_ptr<string> role_ {};
        // A reserved parameter.
        shared_ptr<string> singleTunnelVip_ {};
        // A reserved parameter.
        shared_ptr<string> zone_ {};
      };

      virtual bool empty() const override { return this->aclEntryList_ == nullptr
        && this->aclId_ == nullptr && this->appVersion_ == nullptr && this->canUpdate_ == nullptr && this->chargeType_ == nullptr && this->clusterAliasName_ == nullptr
        && this->clusterName_ == nullptr && this->clusterSpecification_ == nullptr && this->clusterType_ == nullptr && this->clusterVersion_ == nullptr && this->connectionType_ == nullptr
        && this->cpu_ == nullptr && this->createTime_ == nullptr && this->diskCapacity_ == nullptr && this->diskType_ == nullptr && this->eipInstanceId_ == nullptr
        && this->endDate_ == nullptr && this->expectZones_ == nullptr && this->healthStatus_ == nullptr && this->initCostTime_ == nullptr && this->initStatus_ == nullptr
        && this->instanceCount_ == nullptr && this->instanceId_ == nullptr && this->instanceModels_ == nullptr && this->internetAddress_ == nullptr && this->internetDomain_ == nullptr
        && this->internetPort_ == nullptr && this->intranetAddress_ == nullptr && this->intranetDomain_ == nullptr && this->intranetPort_ == nullptr && this->maintenancePeriod_ == nullptr
        && this->memoryCapacity_ == nullptr && this->mseVersion_ == nullptr && this->netType_ == nullptr && this->payInfo_ == nullptr && this->pubNetworkFlow_ == nullptr
        && this->regionId_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupType_ == nullptr && this->tags_ == nullptr && this->vSwitchId_ == nullptr
        && this->versionCode_ == nullptr && this->versionLifecycle_ == nullptr && this->vpcId_ == nullptr; };
      // aclEntryList Field Functions 
      bool hasAclEntryList() const { return this->aclEntryList_ != nullptr;};
      void deleteAclEntryList() { this->aclEntryList_ = nullptr;};
      inline string getAclEntryList() const { DARABONBA_PTR_GET_DEFAULT(aclEntryList_, "") };
      inline Data& setAclEntryList(string aclEntryList) { DARABONBA_PTR_SET_VALUE(aclEntryList_, aclEntryList) };


      // aclId Field Functions 
      bool hasAclId() const { return this->aclId_ != nullptr;};
      void deleteAclId() { this->aclId_ = nullptr;};
      inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
      inline Data& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


      // appVersion Field Functions 
      bool hasAppVersion() const { return this->appVersion_ != nullptr;};
      void deleteAppVersion() { this->appVersion_ = nullptr;};
      inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
      inline Data& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


      // canUpdate Field Functions 
      bool hasCanUpdate() const { return this->canUpdate_ != nullptr;};
      void deleteCanUpdate() { this->canUpdate_ = nullptr;};
      inline bool getCanUpdate() const { DARABONBA_PTR_GET_DEFAULT(canUpdate_, false) };
      inline Data& setCanUpdate(bool canUpdate) { DARABONBA_PTR_SET_VALUE(canUpdate_, canUpdate) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Data& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // clusterAliasName Field Functions 
      bool hasClusterAliasName() const { return this->clusterAliasName_ != nullptr;};
      void deleteClusterAliasName() { this->clusterAliasName_ = nullptr;};
      inline string getClusterAliasName() const { DARABONBA_PTR_GET_DEFAULT(clusterAliasName_, "") };
      inline Data& setClusterAliasName(string clusterAliasName) { DARABONBA_PTR_SET_VALUE(clusterAliasName_, clusterAliasName) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Data& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // clusterSpecification Field Functions 
      bool hasClusterSpecification() const { return this->clusterSpecification_ != nullptr;};
      void deleteClusterSpecification() { this->clusterSpecification_ = nullptr;};
      inline string getClusterSpecification() const { DARABONBA_PTR_GET_DEFAULT(clusterSpecification_, "") };
      inline Data& setClusterSpecification(string clusterSpecification) { DARABONBA_PTR_SET_VALUE(clusterSpecification_, clusterSpecification) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline Data& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // clusterVersion Field Functions 
      bool hasClusterVersion() const { return this->clusterVersion_ != nullptr;};
      void deleteClusterVersion() { this->clusterVersion_ = nullptr;};
      inline string getClusterVersion() const { DARABONBA_PTR_GET_DEFAULT(clusterVersion_, "") };
      inline Data& setClusterVersion(string clusterVersion) { DARABONBA_PTR_SET_VALUE(clusterVersion_, clusterVersion) };


      // connectionType Field Functions 
      bool hasConnectionType() const { return this->connectionType_ != nullptr;};
      void deleteConnectionType() { this->connectionType_ = nullptr;};
      inline string getConnectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
      inline Data& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
      inline Data& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // diskCapacity Field Functions 
      bool hasDiskCapacity() const { return this->diskCapacity_ != nullptr;};
      void deleteDiskCapacity() { this->diskCapacity_ = nullptr;};
      inline int64_t getDiskCapacity() const { DARABONBA_PTR_GET_DEFAULT(diskCapacity_, 0L) };
      inline Data& setDiskCapacity(int64_t diskCapacity) { DARABONBA_PTR_SET_VALUE(diskCapacity_, diskCapacity) };


      // diskType Field Functions 
      bool hasDiskType() const { return this->diskType_ != nullptr;};
      void deleteDiskType() { this->diskType_ = nullptr;};
      inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
      inline Data& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      // eipInstanceId Field Functions 
      bool hasEipInstanceId() const { return this->eipInstanceId_ != nullptr;};
      void deleteEipInstanceId() { this->eipInstanceId_ = nullptr;};
      inline string getEipInstanceId() const { DARABONBA_PTR_GET_DEFAULT(eipInstanceId_, "") };
      inline Data& setEipInstanceId(string eipInstanceId) { DARABONBA_PTR_SET_VALUE(eipInstanceId_, eipInstanceId) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline Data& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // expectZones Field Functions 
      bool hasExpectZones() const { return this->expectZones_ != nullptr;};
      void deleteExpectZones() { this->expectZones_ = nullptr;};
      inline const vector<string> & getExpectZones() const { DARABONBA_PTR_GET_CONST(expectZones_, vector<string>) };
      inline vector<string> getExpectZones() { DARABONBA_PTR_GET(expectZones_, vector<string>) };
      inline Data& setExpectZones(const vector<string> & expectZones) { DARABONBA_PTR_SET_VALUE(expectZones_, expectZones) };
      inline Data& setExpectZones(vector<string> && expectZones) { DARABONBA_PTR_SET_RVALUE(expectZones_, expectZones) };


      // healthStatus Field Functions 
      bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
      void deleteHealthStatus() { this->healthStatus_ = nullptr;};
      inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
      inline Data& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


      // initCostTime Field Functions 
      bool hasInitCostTime() const { return this->initCostTime_ != nullptr;};
      void deleteInitCostTime() { this->initCostTime_ = nullptr;};
      inline int64_t getInitCostTime() const { DARABONBA_PTR_GET_DEFAULT(initCostTime_, 0L) };
      inline Data& setInitCostTime(int64_t initCostTime) { DARABONBA_PTR_SET_VALUE(initCostTime_, initCostTime) };


      // initStatus Field Functions 
      bool hasInitStatus() const { return this->initStatus_ != nullptr;};
      void deleteInitStatus() { this->initStatus_ = nullptr;};
      inline string getInitStatus() const { DARABONBA_PTR_GET_DEFAULT(initStatus_, "") };
      inline Data& setInitStatus(string initStatus) { DARABONBA_PTR_SET_VALUE(initStatus_, initStatus) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
      inline Data& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceModels Field Functions 
      bool hasInstanceModels() const { return this->instanceModels_ != nullptr;};
      void deleteInstanceModels() { this->instanceModels_ = nullptr;};
      inline const vector<Data::InstanceModels> & getInstanceModels() const { DARABONBA_PTR_GET_CONST(instanceModels_, vector<Data::InstanceModels>) };
      inline vector<Data::InstanceModels> getInstanceModels() { DARABONBA_PTR_GET(instanceModels_, vector<Data::InstanceModels>) };
      inline Data& setInstanceModels(const vector<Data::InstanceModels> & instanceModels) { DARABONBA_PTR_SET_VALUE(instanceModels_, instanceModels) };
      inline Data& setInstanceModels(vector<Data::InstanceModels> && instanceModels) { DARABONBA_PTR_SET_RVALUE(instanceModels_, instanceModels) };


      // internetAddress Field Functions 
      bool hasInternetAddress() const { return this->internetAddress_ != nullptr;};
      void deleteInternetAddress() { this->internetAddress_ = nullptr;};
      inline string getInternetAddress() const { DARABONBA_PTR_GET_DEFAULT(internetAddress_, "") };
      inline Data& setInternetAddress(string internetAddress) { DARABONBA_PTR_SET_VALUE(internetAddress_, internetAddress) };


      // internetDomain Field Functions 
      bool hasInternetDomain() const { return this->internetDomain_ != nullptr;};
      void deleteInternetDomain() { this->internetDomain_ = nullptr;};
      inline string getInternetDomain() const { DARABONBA_PTR_GET_DEFAULT(internetDomain_, "") };
      inline Data& setInternetDomain(string internetDomain) { DARABONBA_PTR_SET_VALUE(internetDomain_, internetDomain) };


      // internetPort Field Functions 
      bool hasInternetPort() const { return this->internetPort_ != nullptr;};
      void deleteInternetPort() { this->internetPort_ = nullptr;};
      inline string getInternetPort() const { DARABONBA_PTR_GET_DEFAULT(internetPort_, "") };
      inline Data& setInternetPort(string internetPort) { DARABONBA_PTR_SET_VALUE(internetPort_, internetPort) };


      // intranetAddress Field Functions 
      bool hasIntranetAddress() const { return this->intranetAddress_ != nullptr;};
      void deleteIntranetAddress() { this->intranetAddress_ = nullptr;};
      inline string getIntranetAddress() const { DARABONBA_PTR_GET_DEFAULT(intranetAddress_, "") };
      inline Data& setIntranetAddress(string intranetAddress) { DARABONBA_PTR_SET_VALUE(intranetAddress_, intranetAddress) };


      // intranetDomain Field Functions 
      bool hasIntranetDomain() const { return this->intranetDomain_ != nullptr;};
      void deleteIntranetDomain() { this->intranetDomain_ = nullptr;};
      inline string getIntranetDomain() const { DARABONBA_PTR_GET_DEFAULT(intranetDomain_, "") };
      inline Data& setIntranetDomain(string intranetDomain) { DARABONBA_PTR_SET_VALUE(intranetDomain_, intranetDomain) };


      // intranetPort Field Functions 
      bool hasIntranetPort() const { return this->intranetPort_ != nullptr;};
      void deleteIntranetPort() { this->intranetPort_ = nullptr;};
      inline string getIntranetPort() const { DARABONBA_PTR_GET_DEFAULT(intranetPort_, "") };
      inline Data& setIntranetPort(string intranetPort) { DARABONBA_PTR_SET_VALUE(intranetPort_, intranetPort) };


      // maintenancePeriod Field Functions 
      bool hasMaintenancePeriod() const { return this->maintenancePeriod_ != nullptr;};
      void deleteMaintenancePeriod() { this->maintenancePeriod_ = nullptr;};
      inline const Data::MaintenancePeriod & getMaintenancePeriod() const { DARABONBA_PTR_GET_CONST(maintenancePeriod_, Data::MaintenancePeriod) };
      inline Data::MaintenancePeriod getMaintenancePeriod() { DARABONBA_PTR_GET(maintenancePeriod_, Data::MaintenancePeriod) };
      inline Data& setMaintenancePeriod(const Data::MaintenancePeriod & maintenancePeriod) { DARABONBA_PTR_SET_VALUE(maintenancePeriod_, maintenancePeriod) };
      inline Data& setMaintenancePeriod(Data::MaintenancePeriod && maintenancePeriod) { DARABONBA_PTR_SET_RVALUE(maintenancePeriod_, maintenancePeriod) };


      // memoryCapacity Field Functions 
      bool hasMemoryCapacity() const { return this->memoryCapacity_ != nullptr;};
      void deleteMemoryCapacity() { this->memoryCapacity_ = nullptr;};
      inline int64_t getMemoryCapacity() const { DARABONBA_PTR_GET_DEFAULT(memoryCapacity_, 0L) };
      inline Data& setMemoryCapacity(int64_t memoryCapacity) { DARABONBA_PTR_SET_VALUE(memoryCapacity_, memoryCapacity) };


      // mseVersion Field Functions 
      bool hasMseVersion() const { return this->mseVersion_ != nullptr;};
      void deleteMseVersion() { this->mseVersion_ = nullptr;};
      inline string getMseVersion() const { DARABONBA_PTR_GET_DEFAULT(mseVersion_, "") };
      inline Data& setMseVersion(string mseVersion) { DARABONBA_PTR_SET_VALUE(mseVersion_, mseVersion) };


      // netType Field Functions 
      bool hasNetType() const { return this->netType_ != nullptr;};
      void deleteNetType() { this->netType_ = nullptr;};
      inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
      inline Data& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


      // payInfo Field Functions 
      bool hasPayInfo() const { return this->payInfo_ != nullptr;};
      void deletePayInfo() { this->payInfo_ = nullptr;};
      inline string getPayInfo() const { DARABONBA_PTR_GET_DEFAULT(payInfo_, "") };
      inline Data& setPayInfo(string payInfo) { DARABONBA_PTR_SET_VALUE(payInfo_, payInfo) };


      // pubNetworkFlow Field Functions 
      bool hasPubNetworkFlow() const { return this->pubNetworkFlow_ != nullptr;};
      void deletePubNetworkFlow() { this->pubNetworkFlow_ = nullptr;};
      inline string getPubNetworkFlow() const { DARABONBA_PTR_GET_DEFAULT(pubNetworkFlow_, "") };
      inline Data& setPubNetworkFlow(string pubNetworkFlow) { DARABONBA_PTR_SET_VALUE(pubNetworkFlow_, pubNetworkFlow) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Data& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // securityGroupType Field Functions 
      bool hasSecurityGroupType() const { return this->securityGroupType_ != nullptr;};
      void deleteSecurityGroupType() { this->securityGroupType_ = nullptr;};
      inline string getSecurityGroupType() const { DARABONBA_PTR_GET_DEFAULT(securityGroupType_, "") };
      inline Data& setSecurityGroupType(string securityGroupType) { DARABONBA_PTR_SET_VALUE(securityGroupType_, securityGroupType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline Data& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline Data& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Data& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // versionCode Field Functions 
      bool hasVersionCode() const { return this->versionCode_ != nullptr;};
      void deleteVersionCode() { this->versionCode_ = nullptr;};
      inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
      inline Data& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


      // versionLifecycle Field Functions 
      bool hasVersionLifecycle() const { return this->versionLifecycle_ != nullptr;};
      void deleteVersionLifecycle() { this->versionLifecycle_ = nullptr;};
      inline string getVersionLifecycle() const { DARABONBA_PTR_GET_DEFAULT(versionLifecycle_, "") };
      inline Data& setVersionLifecycle(string versionLifecycle) { DARABONBA_PTR_SET_VALUE(versionLifecycle_, versionLifecycle) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The public IP address whitelist.
      shared_ptr<string> aclEntryList_ {};
      // The ID of the instance in the public IP address whitelist.
      shared_ptr<string> aclId_ {};
      // The version of the instance.
      shared_ptr<string> appVersion_ {};
      shared_ptr<bool> canUpdate_ {};
      // The billing method, such as subscription or pay-as-you-go.
      shared_ptr<string> chargeType_ {};
      // The alias of the instance.
      shared_ptr<string> clusterAliasName_ {};
      // The full name of the instance.
      shared_ptr<string> clusterName_ {};
      // The engine specifications.
      shared_ptr<string> clusterSpecification_ {};
      // The type of the instance. Valid values: ZooKeeper, Nacos-Ans, and Eureka.
      shared_ptr<string> clusterType_ {};
      // The version of the order.
      shared_ptr<string> clusterVersion_ {};
      // A deprecated parameter.
      shared_ptr<string> connectionType_ {};
      // A deprecated parameter.
      shared_ptr<int32_t> cpu_ {};
      // The time when the instance was created.
      shared_ptr<string> createTime_ {};
      // A deprecated parameter.
      shared_ptr<int64_t> diskCapacity_ {};
      // A deprecated parameter.
      shared_ptr<string> diskType_ {};
      // The ID of the instance that is associated with the Elastic IP Address (EIP).
      shared_ptr<string> eipInstanceId_ {};
      // The time when the subscription instance expires.
      shared_ptr<string> endDate_ {};
      // The zones to which the current cluster can be distributed.
      shared_ptr<vector<string>> expectZones_ {};
      // The status of the instance.
      shared_ptr<string> healthStatus_ {};
      // The time that is required to initialize the instance. Unit: milliseconds.
      shared_ptr<int64_t> initCostTime_ {};
      // The initial status of the instance.
      shared_ptr<string> initStatus_ {};
      // The number of instance nodes.
      shared_ptr<int32_t> instanceCount_ {};
      // The ID of the instance
      shared_ptr<string> instanceId_ {};
      // The reserved structure.
      shared_ptr<vector<Data::InstanceModels>> instanceModels_ {};
      // A reserved parameter.
      shared_ptr<string> internetAddress_ {};
      // The public endpoint.
      shared_ptr<string> internetDomain_ {};
      // The instance ports that are accessible over the Internet.
      shared_ptr<string> internetPort_ {};
      // A reserved parameter.
      shared_ptr<string> intranetAddress_ {};
      // The internal endpoint.
      shared_ptr<string> intranetDomain_ {};
      // The instance ports that are accessible over an internal network.
      shared_ptr<string> intranetPort_ {};
      // The O\\&M time window.
      shared_ptr<Data::MaintenancePeriod> maintenancePeriod_ {};
      // A deprecated parameter.
      shared_ptr<int64_t> memoryCapacity_ {};
      // The version of the instance.
      shared_ptr<string> mseVersion_ {};
      // The network connection type of the instance.
      shared_ptr<string> netType_ {};
      // The billing method.
      shared_ptr<string> payInfo_ {};
      // The public bandwidth. Unit: Mbit/s.\\
      // Valid values: 0 to 5000. The value 0 indicates no access to the Internet.
      shared_ptr<string> pubNetworkFlow_ {};
      // The ID of the region.
      shared_ptr<string> regionId_ {};
      // The ID of the security group to which the elastic network interface (ENI) is connected.
      shared_ptr<string> securityGroupId_ {};
      // The type of the security group to which the ENI is connected.
      shared_ptr<string> securityGroupType_ {};
      // The tag.
      Darabonba::Json tags_ {};
      // The ID of the vSwitch.
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<string> versionCode_ {};
      shared_ptr<string> versionLifecycle_ {};
      // The ID of the VPC where the instance resides.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryClusterInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryClusterInfoResponseBody::Data) };
    inline QueryClusterInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryClusterInfoResponseBody::Data) };
    inline QueryClusterInfoResponseBody& setData(const QueryClusterInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryClusterInfoResponseBody& setData(QueryClusterInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryClusterInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryClusterInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryClusterInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryClusterInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the data.
    shared_ptr<QueryClusterInfoResponseBody::Data> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The message returned.
    // 
    // *   If the request is successful, a success message is returned.
    // *   If the request fails, an error message is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
