// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryApplicationStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApplicationStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInfo, appInfo_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApplicationStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInfo, appInfo_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryApplicationStatusResponseBody() = default ;
    QueryApplicationStatusResponseBody(const QueryApplicationStatusResponseBody &) = default ;
    QueryApplicationStatusResponseBody(QueryApplicationStatusResponseBody &&) = default ;
    QueryApplicationStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApplicationStatusResponseBody() = default ;
    QueryApplicationStatusResponseBody& operator=(const QueryApplicationStatusResponseBody &) = default ;
    QueryApplicationStatusResponseBody& operator=(QueryApplicationStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Application, application_);
        DARABONBA_PTR_TO_JSON(DeployRecordList, deployRecordList_);
        DARABONBA_PTR_TO_JSON(EccList, eccList_);
        DARABONBA_PTR_TO_JSON(EcuList, ecuList_);
        DARABONBA_PTR_TO_JSON(GroupList, groupList_);
      };
      friend void from_json(const Darabonba::Json& j, AppInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Application, application_);
        DARABONBA_PTR_FROM_JSON(DeployRecordList, deployRecordList_);
        DARABONBA_PTR_FROM_JSON(EccList, eccList_);
        DARABONBA_PTR_FROM_JSON(EcuList, ecuList_);
        DARABONBA_PTR_FROM_JSON(GroupList, groupList_);
      };
      AppInfo() = default ;
      AppInfo(const AppInfo &) = default ;
      AppInfo(AppInfo &&) = default ;
      AppInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppInfo() = default ;
      AppInfo& operator=(const AppInfo &) = default ;
      AppInfo& operator=(AppInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GroupList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GroupList& obj) { 
          DARABONBA_PTR_TO_JSON(Group, group_);
        };
        friend void from_json(const Darabonba::Json& j, GroupList& obj) { 
          DARABONBA_PTR_FROM_JSON(Group, group_);
        };
        GroupList() = default ;
        GroupList(const GroupList &) = default ;
        GroupList(GroupList &&) = default ;
        GroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GroupList() = default ;
        GroupList& operator=(const GroupList &) = default ;
        GroupList& operator=(GroupList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Group : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Group& obj) { 
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(AppVersionId, appVersionId_);
            DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(GroupId, groupId_);
            DARABONBA_PTR_TO_JSON(GroupName, groupName_);
            DARABONBA_PTR_TO_JSON(GroupType, groupType_);
            DARABONBA_PTR_TO_JSON(PackageVersionId, packageVersionId_);
            DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          };
          friend void from_json(const Darabonba::Json& j, Group& obj) { 
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(AppVersionId, appVersionId_);
            DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
            DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
            DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
            DARABONBA_PTR_FROM_JSON(PackageVersionId, packageVersionId_);
            DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          };
          Group() = default ;
          Group(const Group &) = default ;
          Group(Group &&) = default ;
          Group(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Group() = default ;
          Group& operator=(const Group &) = default ;
          Group& operator=(Group &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appId_ == nullptr
        && this->appVersionId_ == nullptr && this->clusterId_ == nullptr && this->createTime_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr
        && this->groupType_ == nullptr && this->packageVersionId_ == nullptr && this->updateTime_ == nullptr; };
          // appId Field Functions 
          bool hasAppId() const { return this->appId_ != nullptr;};
          void deleteAppId() { this->appId_ = nullptr;};
          inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
          inline Group& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // appVersionId Field Functions 
          bool hasAppVersionId() const { return this->appVersionId_ != nullptr;};
          void deleteAppVersionId() { this->appVersionId_ = nullptr;};
          inline string getAppVersionId() const { DARABONBA_PTR_GET_DEFAULT(appVersionId_, "") };
          inline Group& setAppVersionId(string appVersionId) { DARABONBA_PTR_SET_VALUE(appVersionId_, appVersionId) };


          // clusterId Field Functions 
          bool hasClusterId() const { return this->clusterId_ != nullptr;};
          void deleteClusterId() { this->clusterId_ = nullptr;};
          inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
          inline Group& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline Group& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // groupId Field Functions 
          bool hasGroupId() const { return this->groupId_ != nullptr;};
          void deleteGroupId() { this->groupId_ = nullptr;};
          inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
          inline Group& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


          // groupName Field Functions 
          bool hasGroupName() const { return this->groupName_ != nullptr;};
          void deleteGroupName() { this->groupName_ = nullptr;};
          inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
          inline Group& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


          // groupType Field Functions 
          bool hasGroupType() const { return this->groupType_ != nullptr;};
          void deleteGroupType() { this->groupType_ = nullptr;};
          inline int32_t getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, 0) };
          inline Group& setGroupType(int32_t groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


          // packageVersionId Field Functions 
          bool hasPackageVersionId() const { return this->packageVersionId_ != nullptr;};
          void deletePackageVersionId() { this->packageVersionId_ = nullptr;};
          inline string getPackageVersionId() const { DARABONBA_PTR_GET_DEFAULT(packageVersionId_, "") };
          inline Group& setPackageVersionId(string packageVersionId) { DARABONBA_PTR_SET_VALUE(packageVersionId_, packageVersionId) };


          // updateTime Field Functions 
          bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
          void deleteUpdateTime() { this->updateTime_ = nullptr;};
          inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
          inline Group& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        protected:
          shared_ptr<string> appId_ {};
          shared_ptr<string> appVersionId_ {};
          shared_ptr<string> clusterId_ {};
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<string> groupId_ {};
          shared_ptr<string> groupName_ {};
          shared_ptr<int32_t> groupType_ {};
          shared_ptr<string> packageVersionId_ {};
          shared_ptr<int64_t> updateTime_ {};
        };

        virtual bool empty() const override { return this->group_ == nullptr; };
        // group Field Functions 
        bool hasGroup() const { return this->group_ != nullptr;};
        void deleteGroup() { this->group_ = nullptr;};
        inline const vector<GroupList::Group> & getGroup() const { DARABONBA_PTR_GET_CONST(group_, vector<GroupList::Group>) };
        inline vector<GroupList::Group> getGroup() { DARABONBA_PTR_GET(group_, vector<GroupList::Group>) };
        inline GroupList& setGroup(const vector<GroupList::Group> & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
        inline GroupList& setGroup(vector<GroupList::Group> && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


      protected:
        shared_ptr<vector<GroupList::Group>> group_ {};
      };

      class EcuList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EcuList& obj) { 
          DARABONBA_PTR_TO_JSON(Ecu, ecu_);
        };
        friend void from_json(const Darabonba::Json& j, EcuList& obj) { 
          DARABONBA_PTR_FROM_JSON(Ecu, ecu_);
        };
        EcuList() = default ;
        EcuList(const EcuList &) = default ;
        EcuList(EcuList &&) = default ;
        EcuList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EcuList() = default ;
        EcuList& operator=(const EcuList &) = default ;
        EcuList& operator=(EcuList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Ecu : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ecu& obj) { 
            DARABONBA_PTR_TO_JSON(AvailableCpu, availableCpu_);
            DARABONBA_PTR_TO_JSON(AvailableMem, availableMem_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(DockerEnv, dockerEnv_);
            DARABONBA_PTR_TO_JSON(EcuId, ecuId_);
            DARABONBA_PTR_TO_JSON(GroupId, groupId_);
            DARABONBA_PTR_TO_JSON(HeartbeatTime, heartbeatTime_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(IpAddr, ipAddr_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Online, online_);
            DARABONBA_PTR_TO_JSON(RegionId, regionId_);
            DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
            DARABONBA_PTR_TO_JSON(UserId, userId_);
            DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
            DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          };
          friend void from_json(const Darabonba::Json& j, Ecu& obj) { 
            DARABONBA_PTR_FROM_JSON(AvailableCpu, availableCpu_);
            DARABONBA_PTR_FROM_JSON(AvailableMem, availableMem_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(DockerEnv, dockerEnv_);
            DARABONBA_PTR_FROM_JSON(EcuId, ecuId_);
            DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
            DARABONBA_PTR_FROM_JSON(HeartbeatTime, heartbeatTime_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(IpAddr, ipAddr_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Online, online_);
            DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
            DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
            DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
            DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          };
          Ecu() = default ;
          Ecu(const Ecu &) = default ;
          Ecu(Ecu &&) = default ;
          Ecu(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ecu() = default ;
          Ecu& operator=(const Ecu &) = default ;
          Ecu& operator=(Ecu &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->availableCpu_ == nullptr
        && this->availableMem_ == nullptr && this->createTime_ == nullptr && this->dockerEnv_ == nullptr && this->ecuId_ == nullptr && this->groupId_ == nullptr
        && this->heartbeatTime_ == nullptr && this->instanceId_ == nullptr && this->ipAddr_ == nullptr && this->name_ == nullptr && this->online_ == nullptr
        && this->regionId_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
          // availableCpu Field Functions 
          bool hasAvailableCpu() const { return this->availableCpu_ != nullptr;};
          void deleteAvailableCpu() { this->availableCpu_ = nullptr;};
          inline int32_t getAvailableCpu() const { DARABONBA_PTR_GET_DEFAULT(availableCpu_, 0) };
          inline Ecu& setAvailableCpu(int32_t availableCpu) { DARABONBA_PTR_SET_VALUE(availableCpu_, availableCpu) };


          // availableMem Field Functions 
          bool hasAvailableMem() const { return this->availableMem_ != nullptr;};
          void deleteAvailableMem() { this->availableMem_ = nullptr;};
          inline int32_t getAvailableMem() const { DARABONBA_PTR_GET_DEFAULT(availableMem_, 0) };
          inline Ecu& setAvailableMem(int32_t availableMem) { DARABONBA_PTR_SET_VALUE(availableMem_, availableMem) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline Ecu& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // dockerEnv Field Functions 
          bool hasDockerEnv() const { return this->dockerEnv_ != nullptr;};
          void deleteDockerEnv() { this->dockerEnv_ = nullptr;};
          inline bool getDockerEnv() const { DARABONBA_PTR_GET_DEFAULT(dockerEnv_, false) };
          inline Ecu& setDockerEnv(bool dockerEnv) { DARABONBA_PTR_SET_VALUE(dockerEnv_, dockerEnv) };


          // ecuId Field Functions 
          bool hasEcuId() const { return this->ecuId_ != nullptr;};
          void deleteEcuId() { this->ecuId_ = nullptr;};
          inline string getEcuId() const { DARABONBA_PTR_GET_DEFAULT(ecuId_, "") };
          inline Ecu& setEcuId(string ecuId) { DARABONBA_PTR_SET_VALUE(ecuId_, ecuId) };


          // groupId Field Functions 
          bool hasGroupId() const { return this->groupId_ != nullptr;};
          void deleteGroupId() { this->groupId_ = nullptr;};
          inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
          inline Ecu& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


          // heartbeatTime Field Functions 
          bool hasHeartbeatTime() const { return this->heartbeatTime_ != nullptr;};
          void deleteHeartbeatTime() { this->heartbeatTime_ = nullptr;};
          inline int64_t getHeartbeatTime() const { DARABONBA_PTR_GET_DEFAULT(heartbeatTime_, 0L) };
          inline Ecu& setHeartbeatTime(int64_t heartbeatTime) { DARABONBA_PTR_SET_VALUE(heartbeatTime_, heartbeatTime) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline Ecu& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // ipAddr Field Functions 
          bool hasIpAddr() const { return this->ipAddr_ != nullptr;};
          void deleteIpAddr() { this->ipAddr_ = nullptr;};
          inline string getIpAddr() const { DARABONBA_PTR_GET_DEFAULT(ipAddr_, "") };
          inline Ecu& setIpAddr(string ipAddr) { DARABONBA_PTR_SET_VALUE(ipAddr_, ipAddr) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Ecu& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // online Field Functions 
          bool hasOnline() const { return this->online_ != nullptr;};
          void deleteOnline() { this->online_ = nullptr;};
          inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
          inline Ecu& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline Ecu& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // updateTime Field Functions 
          bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
          void deleteUpdateTime() { this->updateTime_ = nullptr;};
          inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
          inline Ecu& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline Ecu& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline Ecu& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


          // zoneId Field Functions 
          bool hasZoneId() const { return this->zoneId_ != nullptr;};
          void deleteZoneId() { this->zoneId_ = nullptr;};
          inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
          inline Ecu& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        protected:
          shared_ptr<int32_t> availableCpu_ {};
          shared_ptr<int32_t> availableMem_ {};
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<bool> dockerEnv_ {};
          shared_ptr<string> ecuId_ {};
          shared_ptr<string> groupId_ {};
          shared_ptr<int64_t> heartbeatTime_ {};
          shared_ptr<string> instanceId_ {};
          shared_ptr<string> ipAddr_ {};
          shared_ptr<string> name_ {};
          shared_ptr<bool> online_ {};
          shared_ptr<string> regionId_ {};
          shared_ptr<int64_t> updateTime_ {};
          shared_ptr<string> userId_ {};
          shared_ptr<string> vpcId_ {};
          shared_ptr<string> zoneId_ {};
        };

        virtual bool empty() const override { return this->ecu_ == nullptr; };
        // ecu Field Functions 
        bool hasEcu() const { return this->ecu_ != nullptr;};
        void deleteEcu() { this->ecu_ = nullptr;};
        inline const vector<EcuList::Ecu> & getEcu() const { DARABONBA_PTR_GET_CONST(ecu_, vector<EcuList::Ecu>) };
        inline vector<EcuList::Ecu> getEcu() { DARABONBA_PTR_GET(ecu_, vector<EcuList::Ecu>) };
        inline EcuList& setEcu(const vector<EcuList::Ecu> & ecu) { DARABONBA_PTR_SET_VALUE(ecu_, ecu) };
        inline EcuList& setEcu(vector<EcuList::Ecu> && ecu) { DARABONBA_PTR_SET_RVALUE(ecu_, ecu) };


      protected:
        shared_ptr<vector<EcuList::Ecu>> ecu_ {};
      };

      class EccList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EccList& obj) { 
          DARABONBA_PTR_TO_JSON(Ecc, ecc_);
        };
        friend void from_json(const Darabonba::Json& j, EccList& obj) { 
          DARABONBA_PTR_FROM_JSON(Ecc, ecc_);
        };
        EccList() = default ;
        EccList(const EccList &) = default ;
        EccList(EccList &&) = default ;
        EccList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EccList() = default ;
        EccList& operator=(const EccList &) = default ;
        EccList& operator=(EccList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Ecc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ecc& obj) { 
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(AppState, appState_);
            DARABONBA_PTR_TO_JSON(ContainerStatus, containerStatus_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(EccId, eccId_);
            DARABONBA_PTR_TO_JSON(EcuId, ecuId_);
            DARABONBA_PTR_TO_JSON(GroupId, groupId_);
            DARABONBA_PTR_TO_JSON(Ip, ip_);
            DARABONBA_PTR_TO_JSON(TaskState, taskState_);
            DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
            DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          };
          friend void from_json(const Darabonba::Json& j, Ecc& obj) { 
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(AppState, appState_);
            DARABONBA_PTR_FROM_JSON(ContainerStatus, containerStatus_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(EccId, eccId_);
            DARABONBA_PTR_FROM_JSON(EcuId, ecuId_);
            DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
            DARABONBA_PTR_FROM_JSON(Ip, ip_);
            DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
            DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
            DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          };
          Ecc() = default ;
          Ecc(const Ecc &) = default ;
          Ecc(Ecc &&) = default ;
          Ecc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ecc() = default ;
          Ecc& operator=(const Ecc &) = default ;
          Ecc& operator=(Ecc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appId_ == nullptr
        && this->appState_ == nullptr && this->containerStatus_ == nullptr && this->createTime_ == nullptr && this->eccId_ == nullptr && this->ecuId_ == nullptr
        && this->groupId_ == nullptr && this->ip_ == nullptr && this->taskState_ == nullptr && this->updateTime_ == nullptr && this->vpcId_ == nullptr; };
          // appId Field Functions 
          bool hasAppId() const { return this->appId_ != nullptr;};
          void deleteAppId() { this->appId_ = nullptr;};
          inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
          inline Ecc& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // appState Field Functions 
          bool hasAppState() const { return this->appState_ != nullptr;};
          void deleteAppState() { this->appState_ = nullptr;};
          inline int32_t getAppState() const { DARABONBA_PTR_GET_DEFAULT(appState_, 0) };
          inline Ecc& setAppState(int32_t appState) { DARABONBA_PTR_SET_VALUE(appState_, appState) };


          // containerStatus Field Functions 
          bool hasContainerStatus() const { return this->containerStatus_ != nullptr;};
          void deleteContainerStatus() { this->containerStatus_ = nullptr;};
          inline string getContainerStatus() const { DARABONBA_PTR_GET_DEFAULT(containerStatus_, "") };
          inline Ecc& setContainerStatus(string containerStatus) { DARABONBA_PTR_SET_VALUE(containerStatus_, containerStatus) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline Ecc& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // eccId Field Functions 
          bool hasEccId() const { return this->eccId_ != nullptr;};
          void deleteEccId() { this->eccId_ = nullptr;};
          inline string getEccId() const { DARABONBA_PTR_GET_DEFAULT(eccId_, "") };
          inline Ecc& setEccId(string eccId) { DARABONBA_PTR_SET_VALUE(eccId_, eccId) };


          // ecuId Field Functions 
          bool hasEcuId() const { return this->ecuId_ != nullptr;};
          void deleteEcuId() { this->ecuId_ = nullptr;};
          inline string getEcuId() const { DARABONBA_PTR_GET_DEFAULT(ecuId_, "") };
          inline Ecc& setEcuId(string ecuId) { DARABONBA_PTR_SET_VALUE(ecuId_, ecuId) };


          // groupId Field Functions 
          bool hasGroupId() const { return this->groupId_ != nullptr;};
          void deleteGroupId() { this->groupId_ = nullptr;};
          inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
          inline Ecc& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


          // ip Field Functions 
          bool hasIp() const { return this->ip_ != nullptr;};
          void deleteIp() { this->ip_ = nullptr;};
          inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
          inline Ecc& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


          // taskState Field Functions 
          bool hasTaskState() const { return this->taskState_ != nullptr;};
          void deleteTaskState() { this->taskState_ = nullptr;};
          inline int32_t getTaskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, 0) };
          inline Ecc& setTaskState(int32_t taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


          // updateTime Field Functions 
          bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
          void deleteUpdateTime() { this->updateTime_ = nullptr;};
          inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
          inline Ecc& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline Ecc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        protected:
          shared_ptr<string> appId_ {};
          shared_ptr<int32_t> appState_ {};
          shared_ptr<string> containerStatus_ {};
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<string> eccId_ {};
          shared_ptr<string> ecuId_ {};
          shared_ptr<string> groupId_ {};
          shared_ptr<string> ip_ {};
          shared_ptr<int32_t> taskState_ {};
          shared_ptr<int64_t> updateTime_ {};
          shared_ptr<string> vpcId_ {};
        };

        virtual bool empty() const override { return this->ecc_ == nullptr; };
        // ecc Field Functions 
        bool hasEcc() const { return this->ecc_ != nullptr;};
        void deleteEcc() { this->ecc_ = nullptr;};
        inline const vector<EccList::Ecc> & getEcc() const { DARABONBA_PTR_GET_CONST(ecc_, vector<EccList::Ecc>) };
        inline vector<EccList::Ecc> getEcc() { DARABONBA_PTR_GET(ecc_, vector<EccList::Ecc>) };
        inline EccList& setEcc(const vector<EccList::Ecc> & ecc) { DARABONBA_PTR_SET_VALUE(ecc_, ecc) };
        inline EccList& setEcc(vector<EccList::Ecc> && ecc) { DARABONBA_PTR_SET_RVALUE(ecc_, ecc) };


      protected:
        shared_ptr<vector<EccList::Ecc>> ecc_ {};
      };

      class DeployRecordList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeployRecordList& obj) { 
          DARABONBA_PTR_TO_JSON(DeployRecord, deployRecord_);
        };
        friend void from_json(const Darabonba::Json& j, DeployRecordList& obj) { 
          DARABONBA_PTR_FROM_JSON(DeployRecord, deployRecord_);
        };
        DeployRecordList() = default ;
        DeployRecordList(const DeployRecordList &) = default ;
        DeployRecordList(DeployRecordList &&) = default ;
        DeployRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeployRecordList() = default ;
        DeployRecordList& operator=(const DeployRecordList &) = default ;
        DeployRecordList& operator=(DeployRecordList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DeployRecord : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DeployRecord& obj) { 
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(DeployRecordId, deployRecordId_);
            DARABONBA_PTR_TO_JSON(EccId, eccId_);
            DARABONBA_PTR_TO_JSON(EcuId, ecuId_);
            DARABONBA_PTR_TO_JSON(PackageMd5, packageMd5_);
            DARABONBA_PTR_TO_JSON(PackageVersionId, packageVersionId_);
          };
          friend void from_json(const Darabonba::Json& j, DeployRecord& obj) { 
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(DeployRecordId, deployRecordId_);
            DARABONBA_PTR_FROM_JSON(EccId, eccId_);
            DARABONBA_PTR_FROM_JSON(EcuId, ecuId_);
            DARABONBA_PTR_FROM_JSON(PackageMd5, packageMd5_);
            DARABONBA_PTR_FROM_JSON(PackageVersionId, packageVersionId_);
          };
          DeployRecord() = default ;
          DeployRecord(const DeployRecord &) = default ;
          DeployRecord(DeployRecord &&) = default ;
          DeployRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DeployRecord() = default ;
          DeployRecord& operator=(const DeployRecord &) = default ;
          DeployRecord& operator=(DeployRecord &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->createTime_ == nullptr
        && this->deployRecordId_ == nullptr && this->eccId_ == nullptr && this->ecuId_ == nullptr && this->packageMd5_ == nullptr && this->packageVersionId_ == nullptr; };
          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline DeployRecord& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // deployRecordId Field Functions 
          bool hasDeployRecordId() const { return this->deployRecordId_ != nullptr;};
          void deleteDeployRecordId() { this->deployRecordId_ = nullptr;};
          inline string getDeployRecordId() const { DARABONBA_PTR_GET_DEFAULT(deployRecordId_, "") };
          inline DeployRecord& setDeployRecordId(string deployRecordId) { DARABONBA_PTR_SET_VALUE(deployRecordId_, deployRecordId) };


          // eccId Field Functions 
          bool hasEccId() const { return this->eccId_ != nullptr;};
          void deleteEccId() { this->eccId_ = nullptr;};
          inline string getEccId() const { DARABONBA_PTR_GET_DEFAULT(eccId_, "") };
          inline DeployRecord& setEccId(string eccId) { DARABONBA_PTR_SET_VALUE(eccId_, eccId) };


          // ecuId Field Functions 
          bool hasEcuId() const { return this->ecuId_ != nullptr;};
          void deleteEcuId() { this->ecuId_ = nullptr;};
          inline string getEcuId() const { DARABONBA_PTR_GET_DEFAULT(ecuId_, "") };
          inline DeployRecord& setEcuId(string ecuId) { DARABONBA_PTR_SET_VALUE(ecuId_, ecuId) };


          // packageMd5 Field Functions 
          bool hasPackageMd5() const { return this->packageMd5_ != nullptr;};
          void deletePackageMd5() { this->packageMd5_ = nullptr;};
          inline string getPackageMd5() const { DARABONBA_PTR_GET_DEFAULT(packageMd5_, "") };
          inline DeployRecord& setPackageMd5(string packageMd5) { DARABONBA_PTR_SET_VALUE(packageMd5_, packageMd5) };


          // packageVersionId Field Functions 
          bool hasPackageVersionId() const { return this->packageVersionId_ != nullptr;};
          void deletePackageVersionId() { this->packageVersionId_ = nullptr;};
          inline string getPackageVersionId() const { DARABONBA_PTR_GET_DEFAULT(packageVersionId_, "") };
          inline DeployRecord& setPackageVersionId(string packageVersionId) { DARABONBA_PTR_SET_VALUE(packageVersionId_, packageVersionId) };


        protected:
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<string> deployRecordId_ {};
          shared_ptr<string> eccId_ {};
          shared_ptr<string> ecuId_ {};
          shared_ptr<string> packageMd5_ {};
          shared_ptr<string> packageVersionId_ {};
        };

        virtual bool empty() const override { return this->deployRecord_ == nullptr; };
        // deployRecord Field Functions 
        bool hasDeployRecord() const { return this->deployRecord_ != nullptr;};
        void deleteDeployRecord() { this->deployRecord_ = nullptr;};
        inline const vector<DeployRecordList::DeployRecord> & getDeployRecord() const { DARABONBA_PTR_GET_CONST(deployRecord_, vector<DeployRecordList::DeployRecord>) };
        inline vector<DeployRecordList::DeployRecord> getDeployRecord() { DARABONBA_PTR_GET(deployRecord_, vector<DeployRecordList::DeployRecord>) };
        inline DeployRecordList& setDeployRecord(const vector<DeployRecordList::DeployRecord> & deployRecord) { DARABONBA_PTR_SET_VALUE(deployRecord_, deployRecord) };
        inline DeployRecordList& setDeployRecord(vector<DeployRecordList::DeployRecord> && deployRecord) { DARABONBA_PTR_SET_RVALUE(deployRecord_, deployRecord) };


      protected:
        shared_ptr<vector<DeployRecordList::DeployRecord>> deployRecord_ {};
      };

      class Application : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Application& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
          DARABONBA_PTR_TO_JSON(BuildPackageId, buildPackageId_);
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Dockerize, dockerize_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(HealthCheckUrl, healthCheckUrl_);
          DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
          DARABONBA_PTR_TO_JSON(LaunchTime, launchTime_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(Phone, phone_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RunningInstanceCount, runningInstanceCount_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Application& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
          DARABONBA_PTR_FROM_JSON(BuildPackageId, buildPackageId_);
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Dockerize, dockerize_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(HealthCheckUrl, healthCheckUrl_);
          DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
          DARABONBA_PTR_FROM_JSON(LaunchTime, launchTime_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(Phone, phone_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RunningInstanceCount, runningInstanceCount_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        Application() = default ;
        Application(const Application &) = default ;
        Application(Application &&) = default ;
        Application(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Application() = default ;
        Application& operator=(const Application &) = default ;
        Application& operator=(Application &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->buildPackageId_ == nullptr && this->clusterId_ == nullptr && this->cpu_ == nullptr && this->createTime_ == nullptr && this->dockerize_ == nullptr
        && this->email_ == nullptr && this->healthCheckUrl_ == nullptr && this->instanceCount_ == nullptr && this->launchTime_ == nullptr && this->memory_ == nullptr
        && this->name_ == nullptr && this->owner_ == nullptr && this->phone_ == nullptr && this->port_ == nullptr && this->regionId_ == nullptr
        && this->runningInstanceCount_ == nullptr && this->userId_ == nullptr; };
        // applicationId Field Functions 
        bool hasApplicationId() const { return this->applicationId_ != nullptr;};
        void deleteApplicationId() { this->applicationId_ = nullptr;};
        inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
        inline Application& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


        // buildPackageId Field Functions 
        bool hasBuildPackageId() const { return this->buildPackageId_ != nullptr;};
        void deleteBuildPackageId() { this->buildPackageId_ = nullptr;};
        inline int32_t getBuildPackageId() const { DARABONBA_PTR_GET_DEFAULT(buildPackageId_, 0) };
        inline Application& setBuildPackageId(int32_t buildPackageId) { DARABONBA_PTR_SET_VALUE(buildPackageId_, buildPackageId) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline Application& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline Application& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Application& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dockerize Field Functions 
        bool hasDockerize() const { return this->dockerize_ != nullptr;};
        void deleteDockerize() { this->dockerize_ = nullptr;};
        inline bool getDockerize() const { DARABONBA_PTR_GET_DEFAULT(dockerize_, false) };
        inline Application& setDockerize(bool dockerize) { DARABONBA_PTR_SET_VALUE(dockerize_, dockerize) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline Application& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // healthCheckUrl Field Functions 
        bool hasHealthCheckUrl() const { return this->healthCheckUrl_ != nullptr;};
        void deleteHealthCheckUrl() { this->healthCheckUrl_ = nullptr;};
        inline string getHealthCheckUrl() const { DARABONBA_PTR_GET_DEFAULT(healthCheckUrl_, "") };
        inline Application& setHealthCheckUrl(string healthCheckUrl) { DARABONBA_PTR_SET_VALUE(healthCheckUrl_, healthCheckUrl) };


        // instanceCount Field Functions 
        bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
        void deleteInstanceCount() { this->instanceCount_ = nullptr;};
        inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
        inline Application& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


        // launchTime Field Functions 
        bool hasLaunchTime() const { return this->launchTime_ != nullptr;};
        void deleteLaunchTime() { this->launchTime_ = nullptr;};
        inline int64_t getLaunchTime() const { DARABONBA_PTR_GET_DEFAULT(launchTime_, 0L) };
        inline Application& setLaunchTime(int64_t launchTime) { DARABONBA_PTR_SET_VALUE(launchTime_, launchTime) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
        inline Application& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Application& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Application& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // phone Field Functions 
        bool hasPhone() const { return this->phone_ != nullptr;};
        void deletePhone() { this->phone_ = nullptr;};
        inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
        inline Application& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline Application& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Application& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // runningInstanceCount Field Functions 
        bool hasRunningInstanceCount() const { return this->runningInstanceCount_ != nullptr;};
        void deleteRunningInstanceCount() { this->runningInstanceCount_ = nullptr;};
        inline int32_t getRunningInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(runningInstanceCount_, 0) };
        inline Application& setRunningInstanceCount(int32_t runningInstanceCount) { DARABONBA_PTR_SET_VALUE(runningInstanceCount_, runningInstanceCount) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Application& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The ID of the application.
        shared_ptr<string> applicationId_ {};
        // The build package number of Enterprise Distributed Application Service (EDAS) Container.
        shared_ptr<int32_t> buildPackageId_ {};
        // The ID of the cluster.
        shared_ptr<string> clusterId_ {};
        // The number of CPU cores used by the application.
        shared_ptr<int32_t> cpu_ {};
        // The time when the application was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> createTime_ {};
        // Indicates whether the application is a Docker application.
        shared_ptr<bool> dockerize_ {};
        // The email address of the user who created the application.
        shared_ptr<string> email_ {};
        // The health check URL.
        shared_ptr<string> healthCheckUrl_ {};
        // The number of application instances.
        shared_ptr<int32_t> instanceCount_ {};
        // The time when the application was launched. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> launchTime_ {};
        // The memory size.
        shared_ptr<int32_t> memory_ {};
        // The name of the application.
        shared_ptr<string> name_ {};
        // The ID of the user who created the application.
        shared_ptr<string> owner_ {};
        // The mobile number of the user who created the application.
        shared_ptr<string> phone_ {};
        // The port used by the application.
        shared_ptr<int32_t> port_ {};
        // The ID of the namespace.
        shared_ptr<string> regionId_ {};
        // The number of application instances that are running.
        shared_ptr<int32_t> runningInstanceCount_ {};
        // The ID of the Alibaba Cloud account.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->application_ == nullptr
        && this->deployRecordList_ == nullptr && this->eccList_ == nullptr && this->ecuList_ == nullptr && this->groupList_ == nullptr; };
      // application Field Functions 
      bool hasApplication() const { return this->application_ != nullptr;};
      void deleteApplication() { this->application_ = nullptr;};
      inline const AppInfo::Application & getApplication() const { DARABONBA_PTR_GET_CONST(application_, AppInfo::Application) };
      inline AppInfo::Application getApplication() { DARABONBA_PTR_GET(application_, AppInfo::Application) };
      inline AppInfo& setApplication(const AppInfo::Application & application) { DARABONBA_PTR_SET_VALUE(application_, application) };
      inline AppInfo& setApplication(AppInfo::Application && application) { DARABONBA_PTR_SET_RVALUE(application_, application) };


      // deployRecordList Field Functions 
      bool hasDeployRecordList() const { return this->deployRecordList_ != nullptr;};
      void deleteDeployRecordList() { this->deployRecordList_ = nullptr;};
      inline const AppInfo::DeployRecordList & getDeployRecordList() const { DARABONBA_PTR_GET_CONST(deployRecordList_, AppInfo::DeployRecordList) };
      inline AppInfo::DeployRecordList getDeployRecordList() { DARABONBA_PTR_GET(deployRecordList_, AppInfo::DeployRecordList) };
      inline AppInfo& setDeployRecordList(const AppInfo::DeployRecordList & deployRecordList) { DARABONBA_PTR_SET_VALUE(deployRecordList_, deployRecordList) };
      inline AppInfo& setDeployRecordList(AppInfo::DeployRecordList && deployRecordList) { DARABONBA_PTR_SET_RVALUE(deployRecordList_, deployRecordList) };


      // eccList Field Functions 
      bool hasEccList() const { return this->eccList_ != nullptr;};
      void deleteEccList() { this->eccList_ = nullptr;};
      inline const AppInfo::EccList & getEccList() const { DARABONBA_PTR_GET_CONST(eccList_, AppInfo::EccList) };
      inline AppInfo::EccList getEccList() { DARABONBA_PTR_GET(eccList_, AppInfo::EccList) };
      inline AppInfo& setEccList(const AppInfo::EccList & eccList) { DARABONBA_PTR_SET_VALUE(eccList_, eccList) };
      inline AppInfo& setEccList(AppInfo::EccList && eccList) { DARABONBA_PTR_SET_RVALUE(eccList_, eccList) };


      // ecuList Field Functions 
      bool hasEcuList() const { return this->ecuList_ != nullptr;};
      void deleteEcuList() { this->ecuList_ = nullptr;};
      inline const AppInfo::EcuList & getEcuList() const { DARABONBA_PTR_GET_CONST(ecuList_, AppInfo::EcuList) };
      inline AppInfo::EcuList getEcuList() { DARABONBA_PTR_GET(ecuList_, AppInfo::EcuList) };
      inline AppInfo& setEcuList(const AppInfo::EcuList & ecuList) { DARABONBA_PTR_SET_VALUE(ecuList_, ecuList) };
      inline AppInfo& setEcuList(AppInfo::EcuList && ecuList) { DARABONBA_PTR_SET_RVALUE(ecuList_, ecuList) };


      // groupList Field Functions 
      bool hasGroupList() const { return this->groupList_ != nullptr;};
      void deleteGroupList() { this->groupList_ = nullptr;};
      inline const AppInfo::GroupList & getGroupList() const { DARABONBA_PTR_GET_CONST(groupList_, AppInfo::GroupList) };
      inline AppInfo::GroupList getGroupList() { DARABONBA_PTR_GET(groupList_, AppInfo::GroupList) };
      inline AppInfo& setGroupList(const AppInfo::GroupList & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
      inline AppInfo& setGroupList(AppInfo::GroupList && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


    protected:
      // The basic information about the application.
      shared_ptr<AppInfo::Application> application_ {};
      shared_ptr<AppInfo::DeployRecordList> deployRecordList_ {};
      shared_ptr<AppInfo::EccList> eccList_ {};
      shared_ptr<AppInfo::EcuList> ecuList_ {};
      shared_ptr<AppInfo::GroupList> groupList_ {};
    };

    virtual bool empty() const override { return this->appInfo_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // appInfo Field Functions 
    bool hasAppInfo() const { return this->appInfo_ != nullptr;};
    void deleteAppInfo() { this->appInfo_ = nullptr;};
    inline const QueryApplicationStatusResponseBody::AppInfo & getAppInfo() const { DARABONBA_PTR_GET_CONST(appInfo_, QueryApplicationStatusResponseBody::AppInfo) };
    inline QueryApplicationStatusResponseBody::AppInfo getAppInfo() { DARABONBA_PTR_GET(appInfo_, QueryApplicationStatusResponseBody::AppInfo) };
    inline QueryApplicationStatusResponseBody& setAppInfo(const QueryApplicationStatusResponseBody::AppInfo & appInfo) { DARABONBA_PTR_SET_VALUE(appInfo_, appInfo) };
    inline QueryApplicationStatusResponseBody& setAppInfo(QueryApplicationStatusResponseBody::AppInfo && appInfo) { DARABONBA_PTR_SET_RVALUE(appInfo_, appInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryApplicationStatusResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryApplicationStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryApplicationStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the application.
    shared_ptr<QueryApplicationStatusResponseBody::AppInfo> appInfo_ {};
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
