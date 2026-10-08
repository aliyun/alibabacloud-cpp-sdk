// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYGROUPRESPONSEBODY_HPP_
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
  class ListDeployGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeployGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DeployGroupList, deployGroupList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeployGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DeployGroupList, deployGroupList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDeployGroupResponseBody() = default ;
    ListDeployGroupResponseBody(const ListDeployGroupResponseBody &) = default ;
    ListDeployGroupResponseBody(ListDeployGroupResponseBody &&) = default ;
    ListDeployGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeployGroupResponseBody() = default ;
    ListDeployGroupResponseBody& operator=(const ListDeployGroupResponseBody &) = default ;
    ListDeployGroupResponseBody& operator=(ListDeployGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeployGroupList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeployGroupList& obj) { 
        DARABONBA_PTR_TO_JSON(DeployGroup, deployGroup_);
      };
      friend void from_json(const Darabonba::Json& j, DeployGroupList& obj) { 
        DARABONBA_PTR_FROM_JSON(DeployGroup, deployGroup_);
      };
      DeployGroupList() = default ;
      DeployGroupList(const DeployGroupList &) = default ;
      DeployGroupList(DeployGroupList &&) = default ;
      DeployGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeployGroupList() = default ;
      DeployGroupList& operator=(const DeployGroupList &) = default ;
      DeployGroupList& operator=(DeployGroupList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DeployGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeployGroup& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppVersionId, appVersionId_);
          DARABONBA_PTR_TO_JSON(BaseComponentMetaName, baseComponentMetaName_);
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_TO_JSON(CpuLimit, cpuLimit_);
          DARABONBA_PTR_TO_JSON(CpuRequest, cpuRequest_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CsClusterId, csClusterId_);
          DARABONBA_PTR_TO_JSON(DeploymentName, deploymentName_);
          DARABONBA_PTR_TO_JSON(Env, env_);
          DARABONBA_PTR_TO_JSON(EphemeralStorageLimit, ephemeralStorageLimit_);
          DARABONBA_PTR_TO_JSON(EphemeralStorageRequest, ephemeralStorageRequest_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(GroupType, groupType_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
          DARABONBA_PTR_TO_JSON(MemoryLimit, memoryLimit_);
          DARABONBA_PTR_TO_JSON(MemoryRequest, memoryRequest_);
          DARABONBA_PTR_TO_JSON(NameSpace, nameSpace_);
          DARABONBA_PTR_TO_JSON(PackagePublicUrl, packagePublicUrl_);
          DARABONBA_PTR_TO_JSON(PackageUrl, packageUrl_);
          DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
          DARABONBA_PTR_TO_JSON(PackageVersionId, packageVersionId_);
          DARABONBA_PTR_TO_JSON(PostStart, postStart_);
          DARABONBA_PTR_TO_JSON(PreStop, preStop_);
          DARABONBA_PTR_TO_JSON(Reversion, reversion_);
          DARABONBA_PTR_TO_JSON(Selector, selector_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Strategy, strategy_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(VExtServerGroupId, VExtServerGroupId_);
          DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, DeployGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppVersionId, appVersionId_);
          DARABONBA_PTR_FROM_JSON(BaseComponentMetaName, baseComponentMetaName_);
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_FROM_JSON(CpuLimit, cpuLimit_);
          DARABONBA_PTR_FROM_JSON(CpuRequest, cpuRequest_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CsClusterId, csClusterId_);
          DARABONBA_PTR_FROM_JSON(DeploymentName, deploymentName_);
          DARABONBA_PTR_FROM_JSON(Env, env_);
          DARABONBA_PTR_FROM_JSON(EphemeralStorageLimit, ephemeralStorageLimit_);
          DARABONBA_PTR_FROM_JSON(EphemeralStorageRequest, ephemeralStorageRequest_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
          DARABONBA_PTR_FROM_JSON(MemoryLimit, memoryLimit_);
          DARABONBA_PTR_FROM_JSON(MemoryRequest, memoryRequest_);
          DARABONBA_PTR_FROM_JSON(NameSpace, nameSpace_);
          DARABONBA_PTR_FROM_JSON(PackagePublicUrl, packagePublicUrl_);
          DARABONBA_PTR_FROM_JSON(PackageUrl, packageUrl_);
          DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
          DARABONBA_PTR_FROM_JSON(PackageVersionId, packageVersionId_);
          DARABONBA_PTR_FROM_JSON(PostStart, postStart_);
          DARABONBA_PTR_FROM_JSON(PreStop, preStop_);
          DARABONBA_PTR_FROM_JSON(Reversion, reversion_);
          DARABONBA_PTR_FROM_JSON(Selector, selector_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(VExtServerGroupId, VExtServerGroupId_);
          DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
        };
        DeployGroup() = default ;
        DeployGroup(const DeployGroup &) = default ;
        DeployGroup(DeployGroup &&) = default ;
        DeployGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeployGroup() = default ;
        DeployGroup& operator=(const DeployGroup &) = default ;
        DeployGroup& operator=(DeployGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appVersionId_ == nullptr && this->baseComponentMetaName_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->cpuLimit_ == nullptr
        && this->cpuRequest_ == nullptr && this->createTime_ == nullptr && this->csClusterId_ == nullptr && this->deploymentName_ == nullptr && this->env_ == nullptr
        && this->ephemeralStorageLimit_ == nullptr && this->ephemeralStorageRequest_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr
        && this->labels_ == nullptr && this->lastUpdateTime_ == nullptr && this->memoryLimit_ == nullptr && this->memoryRequest_ == nullptr && this->nameSpace_ == nullptr
        && this->packagePublicUrl_ == nullptr && this->packageUrl_ == nullptr && this->packageVersion_ == nullptr && this->packageVersionId_ == nullptr && this->postStart_ == nullptr
        && this->preStop_ == nullptr && this->reversion_ == nullptr && this->selector_ == nullptr && this->status_ == nullptr && this->strategy_ == nullptr
        && this->updateTime_ == nullptr && this->VExtServerGroupId_ == nullptr && this->VServerGroupId_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline DeployGroup& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appVersionId Field Functions 
        bool hasAppVersionId() const { return this->appVersionId_ != nullptr;};
        void deleteAppVersionId() { this->appVersionId_ = nullptr;};
        inline string getAppVersionId() const { DARABONBA_PTR_GET_DEFAULT(appVersionId_, "") };
        inline DeployGroup& setAppVersionId(string appVersionId) { DARABONBA_PTR_SET_VALUE(appVersionId_, appVersionId) };


        // baseComponentMetaName Field Functions 
        bool hasBaseComponentMetaName() const { return this->baseComponentMetaName_ != nullptr;};
        void deleteBaseComponentMetaName() { this->baseComponentMetaName_ = nullptr;};
        inline string getBaseComponentMetaName() const { DARABONBA_PTR_GET_DEFAULT(baseComponentMetaName_, "") };
        inline DeployGroup& setBaseComponentMetaName(string baseComponentMetaName) { DARABONBA_PTR_SET_VALUE(baseComponentMetaName_, baseComponentMetaName) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline DeployGroup& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // clusterName Field Functions 
        bool hasClusterName() const { return this->clusterName_ != nullptr;};
        void deleteClusterName() { this->clusterName_ = nullptr;};
        inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
        inline DeployGroup& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


        // cpuLimit Field Functions 
        bool hasCpuLimit() const { return this->cpuLimit_ != nullptr;};
        void deleteCpuLimit() { this->cpuLimit_ = nullptr;};
        inline string getCpuLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuLimit_, "") };
        inline DeployGroup& setCpuLimit(string cpuLimit) { DARABONBA_PTR_SET_VALUE(cpuLimit_, cpuLimit) };


        // cpuRequest Field Functions 
        bool hasCpuRequest() const { return this->cpuRequest_ != nullptr;};
        void deleteCpuRequest() { this->cpuRequest_ = nullptr;};
        inline string getCpuRequest() const { DARABONBA_PTR_GET_DEFAULT(cpuRequest_, "") };
        inline DeployGroup& setCpuRequest(string cpuRequest) { DARABONBA_PTR_SET_VALUE(cpuRequest_, cpuRequest) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline DeployGroup& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // csClusterId Field Functions 
        bool hasCsClusterId() const { return this->csClusterId_ != nullptr;};
        void deleteCsClusterId() { this->csClusterId_ = nullptr;};
        inline string getCsClusterId() const { DARABONBA_PTR_GET_DEFAULT(csClusterId_, "") };
        inline DeployGroup& setCsClusterId(string csClusterId) { DARABONBA_PTR_SET_VALUE(csClusterId_, csClusterId) };


        // deploymentName Field Functions 
        bool hasDeploymentName() const { return this->deploymentName_ != nullptr;};
        void deleteDeploymentName() { this->deploymentName_ = nullptr;};
        inline string getDeploymentName() const { DARABONBA_PTR_GET_DEFAULT(deploymentName_, "") };
        inline DeployGroup& setDeploymentName(string deploymentName) { DARABONBA_PTR_SET_VALUE(deploymentName_, deploymentName) };


        // env Field Functions 
        bool hasEnv() const { return this->env_ != nullptr;};
        void deleteEnv() { this->env_ = nullptr;};
        inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
        inline DeployGroup& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


        // ephemeralStorageLimit Field Functions 
        bool hasEphemeralStorageLimit() const { return this->ephemeralStorageLimit_ != nullptr;};
        void deleteEphemeralStorageLimit() { this->ephemeralStorageLimit_ = nullptr;};
        inline string getEphemeralStorageLimit() const { DARABONBA_PTR_GET_DEFAULT(ephemeralStorageLimit_, "") };
        inline DeployGroup& setEphemeralStorageLimit(string ephemeralStorageLimit) { DARABONBA_PTR_SET_VALUE(ephemeralStorageLimit_, ephemeralStorageLimit) };


        // ephemeralStorageRequest Field Functions 
        bool hasEphemeralStorageRequest() const { return this->ephemeralStorageRequest_ != nullptr;};
        void deleteEphemeralStorageRequest() { this->ephemeralStorageRequest_ = nullptr;};
        inline string getEphemeralStorageRequest() const { DARABONBA_PTR_GET_DEFAULT(ephemeralStorageRequest_, "") };
        inline DeployGroup& setEphemeralStorageRequest(string ephemeralStorageRequest) { DARABONBA_PTR_SET_VALUE(ephemeralStorageRequest_, ephemeralStorageRequest) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline DeployGroup& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline DeployGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // groupType Field Functions 
        bool hasGroupType() const { return this->groupType_ != nullptr;};
        void deleteGroupType() { this->groupType_ = nullptr;};
        inline int32_t getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, 0) };
        inline DeployGroup& setGroupType(int32_t groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
        inline DeployGroup& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


        // lastUpdateTime Field Functions 
        bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
        void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
        inline int64_t getLastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, 0L) };
        inline DeployGroup& setLastUpdateTime(int64_t lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


        // memoryLimit Field Functions 
        bool hasMemoryLimit() const { return this->memoryLimit_ != nullptr;};
        void deleteMemoryLimit() { this->memoryLimit_ = nullptr;};
        inline string getMemoryLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryLimit_, "") };
        inline DeployGroup& setMemoryLimit(string memoryLimit) { DARABONBA_PTR_SET_VALUE(memoryLimit_, memoryLimit) };


        // memoryRequest Field Functions 
        bool hasMemoryRequest() const { return this->memoryRequest_ != nullptr;};
        void deleteMemoryRequest() { this->memoryRequest_ = nullptr;};
        inline string getMemoryRequest() const { DARABONBA_PTR_GET_DEFAULT(memoryRequest_, "") };
        inline DeployGroup& setMemoryRequest(string memoryRequest) { DARABONBA_PTR_SET_VALUE(memoryRequest_, memoryRequest) };


        // nameSpace Field Functions 
        bool hasNameSpace() const { return this->nameSpace_ != nullptr;};
        void deleteNameSpace() { this->nameSpace_ = nullptr;};
        inline string getNameSpace() const { DARABONBA_PTR_GET_DEFAULT(nameSpace_, "") };
        inline DeployGroup& setNameSpace(string nameSpace) { DARABONBA_PTR_SET_VALUE(nameSpace_, nameSpace) };


        // packagePublicUrl Field Functions 
        bool hasPackagePublicUrl() const { return this->packagePublicUrl_ != nullptr;};
        void deletePackagePublicUrl() { this->packagePublicUrl_ = nullptr;};
        inline string getPackagePublicUrl() const { DARABONBA_PTR_GET_DEFAULT(packagePublicUrl_, "") };
        inline DeployGroup& setPackagePublicUrl(string packagePublicUrl) { DARABONBA_PTR_SET_VALUE(packagePublicUrl_, packagePublicUrl) };


        // packageUrl Field Functions 
        bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
        void deletePackageUrl() { this->packageUrl_ = nullptr;};
        inline string getPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
        inline DeployGroup& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


        // packageVersion Field Functions 
        bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
        void deletePackageVersion() { this->packageVersion_ = nullptr;};
        inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
        inline DeployGroup& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


        // packageVersionId Field Functions 
        bool hasPackageVersionId() const { return this->packageVersionId_ != nullptr;};
        void deletePackageVersionId() { this->packageVersionId_ = nullptr;};
        inline string getPackageVersionId() const { DARABONBA_PTR_GET_DEFAULT(packageVersionId_, "") };
        inline DeployGroup& setPackageVersionId(string packageVersionId) { DARABONBA_PTR_SET_VALUE(packageVersionId_, packageVersionId) };


        // postStart Field Functions 
        bool hasPostStart() const { return this->postStart_ != nullptr;};
        void deletePostStart() { this->postStart_ = nullptr;};
        inline string getPostStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
        inline DeployGroup& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


        // preStop Field Functions 
        bool hasPreStop() const { return this->preStop_ != nullptr;};
        void deletePreStop() { this->preStop_ = nullptr;};
        inline string getPreStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
        inline DeployGroup& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


        // reversion Field Functions 
        bool hasReversion() const { return this->reversion_ != nullptr;};
        void deleteReversion() { this->reversion_ = nullptr;};
        inline string getReversion() const { DARABONBA_PTR_GET_DEFAULT(reversion_, "") };
        inline DeployGroup& setReversion(string reversion) { DARABONBA_PTR_SET_VALUE(reversion_, reversion) };


        // selector Field Functions 
        bool hasSelector() const { return this->selector_ != nullptr;};
        void deleteSelector() { this->selector_ = nullptr;};
        inline string getSelector() const { DARABONBA_PTR_GET_DEFAULT(selector_, "") };
        inline DeployGroup& setSelector(string selector) { DARABONBA_PTR_SET_VALUE(selector_, selector) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DeployGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // strategy Field Functions 
        bool hasStrategy() const { return this->strategy_ != nullptr;};
        void deleteStrategy() { this->strategy_ = nullptr;};
        inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
        inline DeployGroup& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline DeployGroup& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // VExtServerGroupId Field Functions 
        bool hasVExtServerGroupId() const { return this->VExtServerGroupId_ != nullptr;};
        void deleteVExtServerGroupId() { this->VExtServerGroupId_ = nullptr;};
        inline string getVExtServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VExtServerGroupId_, "") };
        inline DeployGroup& setVExtServerGroupId(string VExtServerGroupId) { DARABONBA_PTR_SET_VALUE(VExtServerGroupId_, VExtServerGroupId) };


        // VServerGroupId Field Functions 
        bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
        void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
        inline string getVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
        inline DeployGroup& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


      protected:
        shared_ptr<string> appId_ {};
        shared_ptr<string> appVersionId_ {};
        shared_ptr<string> baseComponentMetaName_ {};
        shared_ptr<string> clusterId_ {};
        shared_ptr<string> clusterName_ {};
        shared_ptr<string> cpuLimit_ {};
        shared_ptr<string> cpuRequest_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> csClusterId_ {};
        shared_ptr<string> deploymentName_ {};
        shared_ptr<string> env_ {};
        shared_ptr<string> ephemeralStorageLimit_ {};
        shared_ptr<string> ephemeralStorageRequest_ {};
        shared_ptr<string> groupId_ {};
        shared_ptr<string> groupName_ {};
        shared_ptr<int32_t> groupType_ {};
        shared_ptr<string> labels_ {};
        shared_ptr<int64_t> lastUpdateTime_ {};
        shared_ptr<string> memoryLimit_ {};
        shared_ptr<string> memoryRequest_ {};
        shared_ptr<string> nameSpace_ {};
        shared_ptr<string> packagePublicUrl_ {};
        shared_ptr<string> packageUrl_ {};
        shared_ptr<string> packageVersion_ {};
        shared_ptr<string> packageVersionId_ {};
        shared_ptr<string> postStart_ {};
        shared_ptr<string> preStop_ {};
        shared_ptr<string> reversion_ {};
        shared_ptr<string> selector_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> strategy_ {};
        shared_ptr<int64_t> updateTime_ {};
        shared_ptr<string> VExtServerGroupId_ {};
        shared_ptr<string> VServerGroupId_ {};
      };

      virtual bool empty() const override { return this->deployGroup_ == nullptr; };
      // deployGroup Field Functions 
      bool hasDeployGroup() const { return this->deployGroup_ != nullptr;};
      void deleteDeployGroup() { this->deployGroup_ = nullptr;};
      inline const vector<DeployGroupList::DeployGroup> & getDeployGroup() const { DARABONBA_PTR_GET_CONST(deployGroup_, vector<DeployGroupList::DeployGroup>) };
      inline vector<DeployGroupList::DeployGroup> getDeployGroup() { DARABONBA_PTR_GET(deployGroup_, vector<DeployGroupList::DeployGroup>) };
      inline DeployGroupList& setDeployGroup(const vector<DeployGroupList::DeployGroup> & deployGroup) { DARABONBA_PTR_SET_VALUE(deployGroup_, deployGroup) };
      inline DeployGroupList& setDeployGroup(vector<DeployGroupList::DeployGroup> && deployGroup) { DARABONBA_PTR_SET_RVALUE(deployGroup_, deployGroup) };


    protected:
      shared_ptr<vector<DeployGroupList::DeployGroup>> deployGroup_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->deployGroupList_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListDeployGroupResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // deployGroupList Field Functions 
    bool hasDeployGroupList() const { return this->deployGroupList_ != nullptr;};
    void deleteDeployGroupList() { this->deployGroupList_ = nullptr;};
    inline const ListDeployGroupResponseBody::DeployGroupList & getDeployGroupList() const { DARABONBA_PTR_GET_CONST(deployGroupList_, ListDeployGroupResponseBody::DeployGroupList) };
    inline ListDeployGroupResponseBody::DeployGroupList getDeployGroupList() { DARABONBA_PTR_GET(deployGroupList_, ListDeployGroupResponseBody::DeployGroupList) };
    inline ListDeployGroupResponseBody& setDeployGroupList(const ListDeployGroupResponseBody::DeployGroupList & deployGroupList) { DARABONBA_PTR_SET_VALUE(deployGroupList_, deployGroupList) };
    inline ListDeployGroupResponseBody& setDeployGroupList(ListDeployGroupResponseBody::DeployGroupList && deployGroupList) { DARABONBA_PTR_SET_RVALUE(deployGroupList_, deployGroupList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDeployGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDeployGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code of the request or a POP error code.
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListDeployGroupResponseBody::DeployGroupList> deployGroupList_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
