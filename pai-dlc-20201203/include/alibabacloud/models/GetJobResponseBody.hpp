// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PodNetworkInterface.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/JobElasticSpec.hpp>
#include <map>
#include <alibabacloud/models/JobReplicaStatus.hpp>
#include <alibabacloud/models/JobSpec.hpp>
#include <alibabacloud/models/JobSettings.hpp>
#include <alibabacloud/models/StatusTransitionItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CodeSource, codeSource_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(CustomEnvs, customEnvs_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ElasticSpec, elasticSpec_);
      DARABONBA_PTR_TO_JSON(EnabledDebugger, enabledDebugger_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtFailedTime, gmtFailedTime_);
      DARABONBA_PTR_TO_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_TO_JSON(GmtRunningTime, gmtRunningTime_);
      DARABONBA_PTR_TO_JSON(GmtStoppedTime, gmtStoppedTime_);
      DARABONBA_PTR_TO_JSON(GmtSubmittedTime, gmtSubmittedTime_);
      DARABONBA_PTR_TO_JSON(GmtSuccessedTime, gmtSuccessedTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobReplicaStatuses, jobReplicaStatuses_);
      DARABONBA_PTR_TO_JSON(JobSpecs, jobSpecs_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Pods, pods_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceLevel, resourceLevel_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RestartRecord, restartRecord_);
      DARABONBA_PTR_TO_JSON(RestartTimes, restartTimes_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusHistory, statusHistory_);
      DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(ThirdpartyLibDir, thirdpartyLibDir_);
      DARABONBA_PTR_TO_JSON(ThirdpartyLibs, thirdpartyLibs_);
      DARABONBA_PTR_TO_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CodeSource, codeSource_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(CustomEnvs, customEnvs_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ElasticSpec, elasticSpec_);
      DARABONBA_PTR_FROM_JSON(EnabledDebugger, enabledDebugger_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtFailedTime, gmtFailedTime_);
      DARABONBA_PTR_FROM_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_FROM_JSON(GmtRunningTime, gmtRunningTime_);
      DARABONBA_PTR_FROM_JSON(GmtStoppedTime, gmtStoppedTime_);
      DARABONBA_PTR_FROM_JSON(GmtSubmittedTime, gmtSubmittedTime_);
      DARABONBA_PTR_FROM_JSON(GmtSuccessedTime, gmtSuccessedTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobReplicaStatuses, jobReplicaStatuses_);
      DARABONBA_PTR_FROM_JSON(JobSpecs, jobSpecs_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Pods, pods_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceLevel, resourceLevel_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RestartRecord, restartRecord_);
      DARABONBA_PTR_FROM_JSON(RestartTimes, restartTimes_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusHistory, statusHistory_);
      DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(ThirdpartyLibDir, thirdpartyLibDir_);
      DARABONBA_PTR_FROM_JSON(ThirdpartyLibs, thirdpartyLibs_);
      DARABONBA_PTR_FROM_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    GetJobResponseBody() = default ;
    GetJobResponseBody(const GetJobResponseBody &) = default ;
    GetJobResponseBody(GetJobResponseBody &&) = default ;
    GetJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBody() = default ;
    GetJobResponseBody& operator=(const GetJobResponseBody &) = default ;
    GetJobResponseBody& operator=(GetJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserVpc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserVpc& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultRoute, defaultRoute_);
        DARABONBA_PTR_TO_JSON(ExtendedCidrs, extendedCidrs_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, UserVpc& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultRoute, defaultRoute_);
        DARABONBA_PTR_FROM_JSON(ExtendedCidrs, extendedCidrs_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      UserVpc() = default ;
      UserVpc(const UserVpc &) = default ;
      UserVpc(UserVpc &&) = default ;
      UserVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserVpc() = default ;
      UserVpc& operator=(const UserVpc &) = default ;
      UserVpc& operator=(UserVpc &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultRoute_ == nullptr
        && this->extendedCidrs_ == nullptr && this->securityGroupId_ == nullptr && this->switchId_ == nullptr && this->vpcId_ == nullptr; };
      // defaultRoute Field Functions 
      bool hasDefaultRoute() const { return this->defaultRoute_ != nullptr;};
      void deleteDefaultRoute() { this->defaultRoute_ = nullptr;};
      inline string getDefaultRoute() const { DARABONBA_PTR_GET_DEFAULT(defaultRoute_, "") };
      inline UserVpc& setDefaultRoute(string defaultRoute) { DARABONBA_PTR_SET_VALUE(defaultRoute_, defaultRoute) };


      // extendedCidrs Field Functions 
      bool hasExtendedCidrs() const { return this->extendedCidrs_ != nullptr;};
      void deleteExtendedCidrs() { this->extendedCidrs_ = nullptr;};
      inline const vector<string> & getExtendedCidrs() const { DARABONBA_PTR_GET_CONST(extendedCidrs_, vector<string>) };
      inline vector<string> getExtendedCidrs() { DARABONBA_PTR_GET(extendedCidrs_, vector<string>) };
      inline UserVpc& setExtendedCidrs(const vector<string> & extendedCidrs) { DARABONBA_PTR_SET_VALUE(extendedCidrs_, extendedCidrs) };
      inline UserVpc& setExtendedCidrs(vector<string> && extendedCidrs) { DARABONBA_PTR_SET_RVALUE(extendedCidrs_, extendedCidrs) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline UserVpc& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // switchId Field Functions 
      bool hasSwitchId() const { return this->switchId_ != nullptr;};
      void deleteSwitchId() { this->switchId_ = nullptr;};
      inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
      inline UserVpc& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline UserVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The default router. This parameter is valid only for general-purpose computing resources. Valid values:
      // 
      // eth0: The default network interface is used to access the Internet through the public gateway. eth1: The user\\"s Elastic Network Interface is used to access the Internet through the private gateway.
      shared_ptr<string> defaultRoute_ {};
      // The extended CIDR block. Example: 192.168.0.1/24.
      shared_ptr<vector<string>> extendedCidrs_ {};
      // The security group ID.
      shared_ptr<string> securityGroupId_ {};
      // The vSwitch ID.
      shared_ptr<string> switchId_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
    };

    class RestartRecord : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RestartRecord& obj) { 
        DARABONBA_PTR_TO_JSON(DetailErrorInfoList, detailErrorInfoList_);
        DARABONBA_PTR_TO_JSON(JobRestartCount, jobRestartCount_);
        DARABONBA_PTR_TO_JSON(OccurPhase, occurPhase_);
        DARABONBA_PTR_TO_JSON(OccurTime, occurTime_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(RestartDurationInSec, restartDurationInSec_);
        DARABONBA_PTR_TO_JSON(RestartFailReason, restartFailReason_);
        DARABONBA_PTR_TO_JSON(RestartStatus, restartStatus_);
        DARABONBA_PTR_TO_JSON(TriggerID, triggerID_);
      };
      friend void from_json(const Darabonba::Json& j, RestartRecord& obj) { 
        DARABONBA_PTR_FROM_JSON(DetailErrorInfoList, detailErrorInfoList_);
        DARABONBA_PTR_FROM_JSON(JobRestartCount, jobRestartCount_);
        DARABONBA_PTR_FROM_JSON(OccurPhase, occurPhase_);
        DARABONBA_PTR_FROM_JSON(OccurTime, occurTime_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(RestartDurationInSec, restartDurationInSec_);
        DARABONBA_PTR_FROM_JSON(RestartFailReason, restartFailReason_);
        DARABONBA_PTR_FROM_JSON(RestartStatus, restartStatus_);
        DARABONBA_PTR_FROM_JSON(TriggerID, triggerID_);
      };
      RestartRecord() = default ;
      RestartRecord(const RestartRecord &) = default ;
      RestartRecord(RestartRecord &&) = default ;
      RestartRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RestartRecord() = default ;
      RestartRecord& operator=(const RestartRecord &) = default ;
      RestartRecord& operator=(RestartRecord &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DetailErrorInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DetailErrorInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(AddJobLevelBlacklist, addJobLevelBlacklist_);
          DARABONBA_PTR_TO_JSON(AddNodeToBlacklist, addNodeToBlacklist_);
          DARABONBA_PTR_TO_JSON(DetailErrorMsg, detailErrorMsg_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(ErrorSource, errorSource_);
          DARABONBA_PTR_TO_JSON(Node, node_);
          DARABONBA_PTR_TO_JSON(Pod, pod_);
          DARABONBA_PTR_TO_JSON(TriggerRestart, triggerRestart_);
        };
        friend void from_json(const Darabonba::Json& j, DetailErrorInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(AddJobLevelBlacklist, addJobLevelBlacklist_);
          DARABONBA_PTR_FROM_JSON(AddNodeToBlacklist, addNodeToBlacklist_);
          DARABONBA_PTR_FROM_JSON(DetailErrorMsg, detailErrorMsg_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(ErrorSource, errorSource_);
          DARABONBA_PTR_FROM_JSON(Node, node_);
          DARABONBA_PTR_FROM_JSON(Pod, pod_);
          DARABONBA_PTR_FROM_JSON(TriggerRestart, triggerRestart_);
        };
        DetailErrorInfoList() = default ;
        DetailErrorInfoList(const DetailErrorInfoList &) = default ;
        DetailErrorInfoList(DetailErrorInfoList &&) = default ;
        DetailErrorInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DetailErrorInfoList() = default ;
        DetailErrorInfoList& operator=(const DetailErrorInfoList &) = default ;
        DetailErrorInfoList& operator=(DetailErrorInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addJobLevelBlacklist_ == nullptr
        && this->addNodeToBlacklist_ == nullptr && this->detailErrorMsg_ == nullptr && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->errorSource_ == nullptr
        && this->node_ == nullptr && this->pod_ == nullptr && this->triggerRestart_ == nullptr; };
        // addJobLevelBlacklist Field Functions 
        bool hasAddJobLevelBlacklist() const { return this->addJobLevelBlacklist_ != nullptr;};
        void deleteAddJobLevelBlacklist() { this->addJobLevelBlacklist_ = nullptr;};
        inline bool getAddJobLevelBlacklist() const { DARABONBA_PTR_GET_DEFAULT(addJobLevelBlacklist_, false) };
        inline DetailErrorInfoList& setAddJobLevelBlacklist(bool addJobLevelBlacklist) { DARABONBA_PTR_SET_VALUE(addJobLevelBlacklist_, addJobLevelBlacklist) };


        // addNodeToBlacklist Field Functions 
        bool hasAddNodeToBlacklist() const { return this->addNodeToBlacklist_ != nullptr;};
        void deleteAddNodeToBlacklist() { this->addNodeToBlacklist_ = nullptr;};
        inline bool getAddNodeToBlacklist() const { DARABONBA_PTR_GET_DEFAULT(addNodeToBlacklist_, false) };
        inline DetailErrorInfoList& setAddNodeToBlacklist(bool addNodeToBlacklist) { DARABONBA_PTR_SET_VALUE(addNodeToBlacklist_, addNodeToBlacklist) };


        // detailErrorMsg Field Functions 
        bool hasDetailErrorMsg() const { return this->detailErrorMsg_ != nullptr;};
        void deleteDetailErrorMsg() { this->detailErrorMsg_ = nullptr;};
        inline string getDetailErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(detailErrorMsg_, "") };
        inline DetailErrorInfoList& setDetailErrorMsg(string detailErrorMsg) { DARABONBA_PTR_SET_VALUE(detailErrorMsg_, detailErrorMsg) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline DetailErrorInfoList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline DetailErrorInfoList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // errorSource Field Functions 
        bool hasErrorSource() const { return this->errorSource_ != nullptr;};
        void deleteErrorSource() { this->errorSource_ = nullptr;};
        inline string getErrorSource() const { DARABONBA_PTR_GET_DEFAULT(errorSource_, "") };
        inline DetailErrorInfoList& setErrorSource(string errorSource) { DARABONBA_PTR_SET_VALUE(errorSource_, errorSource) };


        // node Field Functions 
        bool hasNode() const { return this->node_ != nullptr;};
        void deleteNode() { this->node_ = nullptr;};
        inline string getNode() const { DARABONBA_PTR_GET_DEFAULT(node_, "") };
        inline DetailErrorInfoList& setNode(string node) { DARABONBA_PTR_SET_VALUE(node_, node) };


        // pod Field Functions 
        bool hasPod() const { return this->pod_ != nullptr;};
        void deletePod() { this->pod_ = nullptr;};
        inline string getPod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
        inline DetailErrorInfoList& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


        // triggerRestart Field Functions 
        bool hasTriggerRestart() const { return this->triggerRestart_ != nullptr;};
        void deleteTriggerRestart() { this->triggerRestart_ = nullptr;};
        inline bool getTriggerRestart() const { DARABONBA_PTR_GET_DEFAULT(triggerRestart_, false) };
        inline DetailErrorInfoList& setTriggerRestart(bool triggerRestart) { DARABONBA_PTR_SET_VALUE(triggerRestart_, triggerRestart) };


      protected:
        shared_ptr<bool> addJobLevelBlacklist_ {};
        shared_ptr<bool> addNodeToBlacklist_ {};
        shared_ptr<string> detailErrorMsg_ {};
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> errorMsg_ {};
        shared_ptr<string> errorSource_ {};
        shared_ptr<string> node_ {};
        shared_ptr<string> pod_ {};
        shared_ptr<bool> triggerRestart_ {};
      };

      virtual bool empty() const override { return this->detailErrorInfoList_ == nullptr
        && this->jobRestartCount_ == nullptr && this->occurPhase_ == nullptr && this->occurTime_ == nullptr && this->reason_ == nullptr && this->restartDurationInSec_ == nullptr
        && this->restartFailReason_ == nullptr && this->restartStatus_ == nullptr && this->triggerID_ == nullptr; };
      // detailErrorInfoList Field Functions 
      bool hasDetailErrorInfoList() const { return this->detailErrorInfoList_ != nullptr;};
      void deleteDetailErrorInfoList() { this->detailErrorInfoList_ = nullptr;};
      inline const vector<RestartRecord::DetailErrorInfoList> & getDetailErrorInfoList() const { DARABONBA_PTR_GET_CONST(detailErrorInfoList_, vector<RestartRecord::DetailErrorInfoList>) };
      inline vector<RestartRecord::DetailErrorInfoList> getDetailErrorInfoList() { DARABONBA_PTR_GET(detailErrorInfoList_, vector<RestartRecord::DetailErrorInfoList>) };
      inline RestartRecord& setDetailErrorInfoList(const vector<RestartRecord::DetailErrorInfoList> & detailErrorInfoList) { DARABONBA_PTR_SET_VALUE(detailErrorInfoList_, detailErrorInfoList) };
      inline RestartRecord& setDetailErrorInfoList(vector<RestartRecord::DetailErrorInfoList> && detailErrorInfoList) { DARABONBA_PTR_SET_RVALUE(detailErrorInfoList_, detailErrorInfoList) };


      // jobRestartCount Field Functions 
      bool hasJobRestartCount() const { return this->jobRestartCount_ != nullptr;};
      void deleteJobRestartCount() { this->jobRestartCount_ = nullptr;};
      inline int64_t getJobRestartCount() const { DARABONBA_PTR_GET_DEFAULT(jobRestartCount_, 0L) };
      inline RestartRecord& setJobRestartCount(int64_t jobRestartCount) { DARABONBA_PTR_SET_VALUE(jobRestartCount_, jobRestartCount) };


      // occurPhase Field Functions 
      bool hasOccurPhase() const { return this->occurPhase_ != nullptr;};
      void deleteOccurPhase() { this->occurPhase_ = nullptr;};
      inline string getOccurPhase() const { DARABONBA_PTR_GET_DEFAULT(occurPhase_, "") };
      inline RestartRecord& setOccurPhase(string occurPhase) { DARABONBA_PTR_SET_VALUE(occurPhase_, occurPhase) };


      // occurTime Field Functions 
      bool hasOccurTime() const { return this->occurTime_ != nullptr;};
      void deleteOccurTime() { this->occurTime_ = nullptr;};
      inline string getOccurTime() const { DARABONBA_PTR_GET_DEFAULT(occurTime_, "") };
      inline RestartRecord& setOccurTime(string occurTime) { DARABONBA_PTR_SET_VALUE(occurTime_, occurTime) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline RestartRecord& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // restartDurationInSec Field Functions 
      bool hasRestartDurationInSec() const { return this->restartDurationInSec_ != nullptr;};
      void deleteRestartDurationInSec() { this->restartDurationInSec_ = nullptr;};
      inline int64_t getRestartDurationInSec() const { DARABONBA_PTR_GET_DEFAULT(restartDurationInSec_, 0L) };
      inline RestartRecord& setRestartDurationInSec(int64_t restartDurationInSec) { DARABONBA_PTR_SET_VALUE(restartDurationInSec_, restartDurationInSec) };


      // restartFailReason Field Functions 
      bool hasRestartFailReason() const { return this->restartFailReason_ != nullptr;};
      void deleteRestartFailReason() { this->restartFailReason_ = nullptr;};
      inline string getRestartFailReason() const { DARABONBA_PTR_GET_DEFAULT(restartFailReason_, "") };
      inline RestartRecord& setRestartFailReason(string restartFailReason) { DARABONBA_PTR_SET_VALUE(restartFailReason_, restartFailReason) };


      // restartStatus Field Functions 
      bool hasRestartStatus() const { return this->restartStatus_ != nullptr;};
      void deleteRestartStatus() { this->restartStatus_ = nullptr;};
      inline string getRestartStatus() const { DARABONBA_PTR_GET_DEFAULT(restartStatus_, "") };
      inline RestartRecord& setRestartStatus(string restartStatus) { DARABONBA_PTR_SET_VALUE(restartStatus_, restartStatus) };


      // triggerID Field Functions 
      bool hasTriggerID() const { return this->triggerID_ != nullptr;};
      void deleteTriggerID() { this->triggerID_ = nullptr;};
      inline string getTriggerID() const { DARABONBA_PTR_GET_DEFAULT(triggerID_, "") };
      inline RestartRecord& setTriggerID(string triggerID) { DARABONBA_PTR_SET_VALUE(triggerID_, triggerID) };


    protected:
      shared_ptr<vector<RestartRecord::DetailErrorInfoList>> detailErrorInfoList_ {};
      shared_ptr<int64_t> jobRestartCount_ {};
      shared_ptr<string> occurPhase_ {};
      shared_ptr<string> occurTime_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<int64_t> restartDurationInSec_ {};
      shared_ptr<string> restartFailReason_ {};
      shared_ptr<string> restartStatus_ {};
      shared_ptr<string> triggerID_ {};
    };

    class Pods : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Pods& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtFinishTime, gmtFinishTime_);
        DARABONBA_PTR_TO_JSON(GmtStartTime, gmtStartTime_);
        DARABONBA_PTR_TO_JSON(HistoryPods, historyPods_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(PodId, podId_);
        DARABONBA_PTR_TO_JSON(PodIps, podIps_);
        DARABONBA_PTR_TO_JSON(PodUid, podUid_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Pods& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtFinishTime, gmtFinishTime_);
        DARABONBA_PTR_FROM_JSON(GmtStartTime, gmtStartTime_);
        DARABONBA_PTR_FROM_JSON(HistoryPods, historyPods_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(PodId, podId_);
        DARABONBA_PTR_FROM_JSON(PodIps, podIps_);
        DARABONBA_PTR_FROM_JSON(PodUid, podUid_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Pods() = default ;
      Pods(const Pods &) = default ;
      Pods(Pods &&) = default ;
      Pods(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Pods() = default ;
      Pods& operator=(const Pods &) = default ;
      Pods& operator=(Pods &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HistoryPods : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HistoryPods& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
          DARABONBA_PTR_TO_JSON(GmtFinishTime, gmtFinishTime_);
          DARABONBA_PTR_TO_JSON(GmtStartTime, gmtStartTime_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(PodId, podId_);
          DARABONBA_PTR_TO_JSON(PodIps, podIps_);
          DARABONBA_PTR_TO_JSON(PodUid, podUid_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, HistoryPods& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
          DARABONBA_PTR_FROM_JSON(GmtFinishTime, gmtFinishTime_);
          DARABONBA_PTR_FROM_JSON(GmtStartTime, gmtStartTime_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(PodId, podId_);
          DARABONBA_PTR_FROM_JSON(PodIps, podIps_);
          DARABONBA_PTR_FROM_JSON(PodUid, podUid_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        HistoryPods() = default ;
        HistoryPods(const HistoryPods &) = default ;
        HistoryPods(HistoryPods &&) = default ;
        HistoryPods(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HistoryPods() = default ;
        HistoryPods& operator=(const HistoryPods &) = default ;
        HistoryPods& operator=(HistoryPods &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->gmtFinishTime_ == nullptr && this->gmtStartTime_ == nullptr && this->ip_ == nullptr && this->nodeName_ == nullptr
        && this->podId_ == nullptr && this->podIps_ == nullptr && this->podUid_ == nullptr && this->resourceType_ == nullptr && this->status_ == nullptr
        && this->subStatus_ == nullptr && this->type_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
        inline HistoryPods& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // gmtCreateTime Field Functions 
        bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
        void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
        inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
        inline HistoryPods& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


        // gmtFinishTime Field Functions 
        bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
        void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
        inline string getGmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
        inline HistoryPods& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


        // gmtStartTime Field Functions 
        bool hasGmtStartTime() const { return this->gmtStartTime_ != nullptr;};
        void deleteGmtStartTime() { this->gmtStartTime_ = nullptr;};
        inline string getGmtStartTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartTime_, "") };
        inline HistoryPods& setGmtStartTime(string gmtStartTime) { DARABONBA_PTR_SET_VALUE(gmtStartTime_, gmtStartTime) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline HistoryPods& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline HistoryPods& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // podId Field Functions 
        bool hasPodId() const { return this->podId_ != nullptr;};
        void deletePodId() { this->podId_ = nullptr;};
        inline string getPodId() const { DARABONBA_PTR_GET_DEFAULT(podId_, "") };
        inline HistoryPods& setPodId(string podId) { DARABONBA_PTR_SET_VALUE(podId_, podId) };


        // podIps Field Functions 
        bool hasPodIps() const { return this->podIps_ != nullptr;};
        void deletePodIps() { this->podIps_ = nullptr;};
        inline const vector<PodNetworkInterface> & getPodIps() const { DARABONBA_PTR_GET_CONST(podIps_, vector<PodNetworkInterface>) };
        inline vector<PodNetworkInterface> getPodIps() { DARABONBA_PTR_GET(podIps_, vector<PodNetworkInterface>) };
        inline HistoryPods& setPodIps(const vector<PodNetworkInterface> & podIps) { DARABONBA_PTR_SET_VALUE(podIps_, podIps) };
        inline HistoryPods& setPodIps(vector<PodNetworkInterface> && podIps) { DARABONBA_PTR_SET_RVALUE(podIps_, podIps) };


        // podUid Field Functions 
        bool hasPodUid() const { return this->podUid_ != nullptr;};
        void deletePodUid() { this->podUid_ = nullptr;};
        inline string getPodUid() const { DARABONBA_PTR_GET_DEFAULT(podUid_, "") };
        inline HistoryPods& setPodUid(string podUid) { DARABONBA_PTR_SET_VALUE(podUid_, podUid) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline HistoryPods& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline HistoryPods& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subStatus Field Functions 
        bool hasSubStatus() const { return this->subStatus_ != nullptr;};
        void deleteSubStatus() { this->subStatus_ = nullptr;};
        inline string getSubStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
        inline HistoryPods& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline HistoryPods& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<double> duration_ {};
        // The time when the node was created (UTC).
        shared_ptr<string> gmtCreateTime_ {};
        // The end time of the node (UTC).
        shared_ptr<string> gmtFinishTime_ {};
        // The start time of the node (UTC).
        shared_ptr<string> gmtStartTime_ {};
        // The IP address of the node.
        shared_ptr<string> ip_ {};
        shared_ptr<string> nodeName_ {};
        // The ID of the node.
        shared_ptr<string> podId_ {};
        shared_ptr<vector<PodNetworkInterface>> podIps_ {};
        // The UID of the node.
        shared_ptr<string> podUid_ {};
        // The resource type of the node.
        shared_ptr<string> resourceType_ {};
        // The status of the node.
        shared_ptr<string> status_ {};
        // The sub-status of the node, such as its preemption status. Valid values:
        // 
        // *   Normal
        // *   Evicted
        shared_ptr<string> subStatus_ {};
        // The type of the node.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->duration_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->gmtFinishTime_ == nullptr && this->gmtStartTime_ == nullptr && this->historyPods_ == nullptr && this->ip_ == nullptr
        && this->nodeName_ == nullptr && this->podId_ == nullptr && this->podIps_ == nullptr && this->podUid_ == nullptr && this->resourceType_ == nullptr
        && this->status_ == nullptr && this->subStatus_ == nullptr && this->type_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
      inline Pods& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Pods& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtFinishTime Field Functions 
      bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
      void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
      inline string getGmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
      inline Pods& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


      // gmtStartTime Field Functions 
      bool hasGmtStartTime() const { return this->gmtStartTime_ != nullptr;};
      void deleteGmtStartTime() { this->gmtStartTime_ = nullptr;};
      inline string getGmtStartTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartTime_, "") };
      inline Pods& setGmtStartTime(string gmtStartTime) { DARABONBA_PTR_SET_VALUE(gmtStartTime_, gmtStartTime) };


      // historyPods Field Functions 
      bool hasHistoryPods() const { return this->historyPods_ != nullptr;};
      void deleteHistoryPods() { this->historyPods_ = nullptr;};
      inline const vector<Pods::HistoryPods> & getHistoryPods() const { DARABONBA_PTR_GET_CONST(historyPods_, vector<Pods::HistoryPods>) };
      inline vector<Pods::HistoryPods> getHistoryPods() { DARABONBA_PTR_GET(historyPods_, vector<Pods::HistoryPods>) };
      inline Pods& setHistoryPods(const vector<Pods::HistoryPods> & historyPods) { DARABONBA_PTR_SET_VALUE(historyPods_, historyPods) };
      inline Pods& setHistoryPods(vector<Pods::HistoryPods> && historyPods) { DARABONBA_PTR_SET_RVALUE(historyPods_, historyPods) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Pods& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline Pods& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // podId Field Functions 
      bool hasPodId() const { return this->podId_ != nullptr;};
      void deletePodId() { this->podId_ = nullptr;};
      inline string getPodId() const { DARABONBA_PTR_GET_DEFAULT(podId_, "") };
      inline Pods& setPodId(string podId) { DARABONBA_PTR_SET_VALUE(podId_, podId) };


      // podIps Field Functions 
      bool hasPodIps() const { return this->podIps_ != nullptr;};
      void deletePodIps() { this->podIps_ = nullptr;};
      inline const vector<PodNetworkInterface> & getPodIps() const { DARABONBA_PTR_GET_CONST(podIps_, vector<PodNetworkInterface>) };
      inline vector<PodNetworkInterface> getPodIps() { DARABONBA_PTR_GET(podIps_, vector<PodNetworkInterface>) };
      inline Pods& setPodIps(const vector<PodNetworkInterface> & podIps) { DARABONBA_PTR_SET_VALUE(podIps_, podIps) };
      inline Pods& setPodIps(vector<PodNetworkInterface> && podIps) { DARABONBA_PTR_SET_RVALUE(podIps_, podIps) };


      // podUid Field Functions 
      bool hasPodUid() const { return this->podUid_ != nullptr;};
      void deletePodUid() { this->podUid_ = nullptr;};
      inline string getPodUid() const { DARABONBA_PTR_GET_DEFAULT(podUid_, "") };
      inline Pods& setPodUid(string podUid) { DARABONBA_PTR_SET_VALUE(podUid_, podUid) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Pods& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Pods& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subStatus Field Functions 
      bool hasSubStatus() const { return this->subStatus_ != nullptr;};
      void deleteSubStatus() { this->subStatus_ = nullptr;};
      inline string getSubStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
      inline Pods& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Pods& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<double> duration_ {};
      // The time when the node was created (UTC).
      shared_ptr<string> gmtCreateTime_ {};
      // The end time of the node (UTC).
      shared_ptr<string> gmtFinishTime_ {};
      // The start time of the node (UTC).
      shared_ptr<string> gmtStartTime_ {};
      // The historical nodes.
      shared_ptr<vector<Pods::HistoryPods>> historyPods_ {};
      // The IP address of the node.
      shared_ptr<string> ip_ {};
      shared_ptr<string> nodeName_ {};
      // The node ID. It can be used in the GetPodLogs and GetPodEvents operations to obtain the detailed logs and events of the node.
      shared_ptr<string> podId_ {};
      shared_ptr<vector<PodNetworkInterface>> podIps_ {};
      // The UID of the node.
      shared_ptr<string> podUid_ {};
      // The resource type of the node.
      shared_ptr<string> resourceType_ {};
      // The status of the node. Valid values:
      // 
      // *   Pending
      // *   Running
      // *   Succeeded
      // *   Failed
      // *   Unknown
      shared_ptr<string> status_ {};
      // The sub-status of the node, such as its preemption status. Valid values:
      // 
      // *   Normal
      // *   Evicted
      shared_ptr<string> subStatus_ {};
      // The node type, which corresponds to a specific JobSpec in JobSpecs of the CreateJob operation.
      shared_ptr<string> type_ {};
    };

    class DataSources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSources& obj) { 
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
        DARABONBA_PTR_TO_JSON(Uri, uri_);
      };
      friend void from_json(const Darabonba::Json& j, DataSources& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
        DARABONBA_PTR_FROM_JSON(Uri, uri_);
      };
      DataSources() = default ;
      DataSources(const DataSources &) = default ;
      DataSources(DataSources &&) = default ;
      DataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSources() = default ;
      DataSources& operator=(const DataSources &) = default ;
      DataSources& operator=(DataSources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && this->mountPath_ == nullptr && this->uri_ == nullptr; };
      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
      inline DataSources& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // mountPath Field Functions 
      bool hasMountPath() const { return this->mountPath_ != nullptr;};
      void deleteMountPath() { this->mountPath_ = nullptr;};
      inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
      inline DataSources& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline DataSources& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    protected:
      // The data source ID.
      shared_ptr<string> dataSourceId_ {};
      // The local mount path. This parameter is optional. The default value is empty, which specifies that the mount path in the data source is used.
      shared_ptr<string> mountPath_ {};
      // The data source URL.
      shared_ptr<string> uri_ {};
    };

    class CustomEnvs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomEnvs& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
        DARABONBA_PTR_TO_JSON(Visible, visible_);
      };
      friend void from_json(const Darabonba::Json& j, CustomEnvs& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
        DARABONBA_PTR_FROM_JSON(Visible, visible_);
      };
      CustomEnvs() = default ;
      CustomEnvs(const CustomEnvs &) = default ;
      CustomEnvs(CustomEnvs &&) = default ;
      CustomEnvs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomEnvs() = default ;
      CustomEnvs& operator=(const CustomEnvs &) = default ;
      CustomEnvs& operator=(CustomEnvs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr && this->visible_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline CustomEnvs& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline CustomEnvs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      // visible Field Functions 
      bool hasVisible() const { return this->visible_ != nullptr;};
      void deleteVisible() { this->visible_ = nullptr;};
      inline string getVisible() const { DARABONBA_PTR_GET_DEFAULT(visible_, "") };
      inline CustomEnvs& setVisible(string visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
      shared_ptr<string> visible_ {};
    };

    class CodeSource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CodeSource& obj) { 
        DARABONBA_PTR_TO_JSON(Branch, branch_);
        DARABONBA_PTR_TO_JSON(CodeSourceId, codeSourceId_);
        DARABONBA_PTR_TO_JSON(Commit, commit_);
        DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      };
      friend void from_json(const Darabonba::Json& j, CodeSource& obj) { 
        DARABONBA_PTR_FROM_JSON(Branch, branch_);
        DARABONBA_PTR_FROM_JSON(CodeSourceId, codeSourceId_);
        DARABONBA_PTR_FROM_JSON(Commit, commit_);
        DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      };
      CodeSource() = default ;
      CodeSource(const CodeSource &) = default ;
      CodeSource(CodeSource &&) = default ;
      CodeSource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CodeSource() = default ;
      CodeSource& operator=(const CodeSource &) = default ;
      CodeSource& operator=(CodeSource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->branch_ == nullptr
        && this->codeSourceId_ == nullptr && this->commit_ == nullptr && this->mountPath_ == nullptr; };
      // branch Field Functions 
      bool hasBranch() const { return this->branch_ != nullptr;};
      void deleteBranch() { this->branch_ = nullptr;};
      inline string getBranch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
      inline CodeSource& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


      // codeSourceId Field Functions 
      bool hasCodeSourceId() const { return this->codeSourceId_ != nullptr;};
      void deleteCodeSourceId() { this->codeSourceId_ = nullptr;};
      inline string getCodeSourceId() const { DARABONBA_PTR_GET_DEFAULT(codeSourceId_, "") };
      inline CodeSource& setCodeSourceId(string codeSourceId) { DARABONBA_PTR_SET_VALUE(codeSourceId_, codeSourceId) };


      // commit Field Functions 
      bool hasCommit() const { return this->commit_ != nullptr;};
      void deleteCommit() { this->commit_ = nullptr;};
      inline string getCommit() const { DARABONBA_PTR_GET_DEFAULT(commit_, "") };
      inline CodeSource& setCommit(string commit) { DARABONBA_PTR_SET_VALUE(commit_, commit) };


      // mountPath Field Functions 
      bool hasMountPath() const { return this->mountPath_ != nullptr;};
      void deleteMountPath() { this->mountPath_ = nullptr;};
      inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
      inline CodeSource& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    protected:
      // The code branch.
      shared_ptr<string> branch_ {};
      // The code source ID.
      shared_ptr<string> codeSourceId_ {};
      // The code commit ID
      shared_ptr<string> commit_ {};
      // The local mount path.
      shared_ptr<string> mountPath_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->clusterId_ == nullptr && this->codeSource_ == nullptr && this->credentialConfig_ == nullptr && this->customEnvs_ == nullptr && this->dataSources_ == nullptr
        && this->displayName_ == nullptr && this->duration_ == nullptr && this->elasticSpec_ == nullptr && this->enabledDebugger_ == nullptr && this->envs_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->gmtFailedTime_ == nullptr && this->gmtFinishTime_ == nullptr && this->gmtRunningTime_ == nullptr && this->gmtStoppedTime_ == nullptr
        && this->gmtSubmittedTime_ == nullptr && this->gmtSuccessedTime_ == nullptr && this->jobId_ == nullptr && this->jobReplicaStatuses_ == nullptr && this->jobSpecs_ == nullptr
        && this->jobType_ == nullptr && this->pods_ == nullptr && this->priority_ == nullptr && this->reasonCode_ == nullptr && this->reasonMessage_ == nullptr
        && this->requestId_ == nullptr && this->resourceId_ == nullptr && this->resourceLevel_ == nullptr && this->resourceType_ == nullptr && this->restartRecord_ == nullptr
        && this->restartTimes_ == nullptr && this->settings_ == nullptr && this->status_ == nullptr && this->statusHistory_ == nullptr && this->subStatus_ == nullptr
        && this->tenantId_ == nullptr && this->thirdpartyLibDir_ == nullptr && this->thirdpartyLibs_ == nullptr && this->userCommand_ == nullptr && this->userId_ == nullptr
        && this->userVpc_ == nullptr && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetJobResponseBody& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetJobResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // codeSource Field Functions 
    bool hasCodeSource() const { return this->codeSource_ != nullptr;};
    void deleteCodeSource() { this->codeSource_ = nullptr;};
    inline const GetJobResponseBody::CodeSource & getCodeSource() const { DARABONBA_PTR_GET_CONST(codeSource_, GetJobResponseBody::CodeSource) };
    inline GetJobResponseBody::CodeSource getCodeSource() { DARABONBA_PTR_GET(codeSource_, GetJobResponseBody::CodeSource) };
    inline GetJobResponseBody& setCodeSource(const GetJobResponseBody::CodeSource & codeSource) { DARABONBA_PTR_SET_VALUE(codeSource_, codeSource) };
    inline GetJobResponseBody& setCodeSource(GetJobResponseBody::CodeSource && codeSource) { DARABONBA_PTR_SET_RVALUE(codeSource_, codeSource) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline GetJobResponseBody& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline GetJobResponseBody& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // customEnvs Field Functions 
    bool hasCustomEnvs() const { return this->customEnvs_ != nullptr;};
    void deleteCustomEnvs() { this->customEnvs_ = nullptr;};
    inline const vector<GetJobResponseBody::CustomEnvs> & getCustomEnvs() const { DARABONBA_PTR_GET_CONST(customEnvs_, vector<GetJobResponseBody::CustomEnvs>) };
    inline vector<GetJobResponseBody::CustomEnvs> getCustomEnvs() { DARABONBA_PTR_GET(customEnvs_, vector<GetJobResponseBody::CustomEnvs>) };
    inline GetJobResponseBody& setCustomEnvs(const vector<GetJobResponseBody::CustomEnvs> & customEnvs) { DARABONBA_PTR_SET_VALUE(customEnvs_, customEnvs) };
    inline GetJobResponseBody& setCustomEnvs(vector<GetJobResponseBody::CustomEnvs> && customEnvs) { DARABONBA_PTR_SET_RVALUE(customEnvs_, customEnvs) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<GetJobResponseBody::DataSources> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<GetJobResponseBody::DataSources>) };
    inline vector<GetJobResponseBody::DataSources> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<GetJobResponseBody::DataSources>) };
    inline GetJobResponseBody& setDataSources(const vector<GetJobResponseBody::DataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline GetJobResponseBody& setDataSources(vector<GetJobResponseBody::DataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetJobResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetJobResponseBody& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // elasticSpec Field Functions 
    bool hasElasticSpec() const { return this->elasticSpec_ != nullptr;};
    void deleteElasticSpec() { this->elasticSpec_ = nullptr;};
    inline const JobElasticSpec & getElasticSpec() const { DARABONBA_PTR_GET_CONST(elasticSpec_, JobElasticSpec) };
    inline JobElasticSpec getElasticSpec() { DARABONBA_PTR_GET(elasticSpec_, JobElasticSpec) };
    inline GetJobResponseBody& setElasticSpec(const JobElasticSpec & elasticSpec) { DARABONBA_PTR_SET_VALUE(elasticSpec_, elasticSpec) };
    inline GetJobResponseBody& setElasticSpec(JobElasticSpec && elasticSpec) { DARABONBA_PTR_SET_RVALUE(elasticSpec_, elasticSpec) };


    // enabledDebugger Field Functions 
    bool hasEnabledDebugger() const { return this->enabledDebugger_ != nullptr;};
    void deleteEnabledDebugger() { this->enabledDebugger_ = nullptr;};
    inline bool getEnabledDebugger() const { DARABONBA_PTR_GET_DEFAULT(enabledDebugger_, false) };
    inline GetJobResponseBody& setEnabledDebugger(bool enabledDebugger) { DARABONBA_PTR_SET_VALUE(enabledDebugger_, enabledDebugger) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const map<string, string> & getEnvs() const { DARABONBA_PTR_GET_CONST(envs_, map<string, string>) };
    inline map<string, string> getEnvs() { DARABONBA_PTR_GET(envs_, map<string, string>) };
    inline GetJobResponseBody& setEnvs(const map<string, string> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline GetJobResponseBody& setEnvs(map<string, string> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetJobResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtFailedTime Field Functions 
    bool hasGmtFailedTime() const { return this->gmtFailedTime_ != nullptr;};
    void deleteGmtFailedTime() { this->gmtFailedTime_ = nullptr;};
    inline string getGmtFailedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFailedTime_, "") };
    inline GetJobResponseBody& setGmtFailedTime(string gmtFailedTime) { DARABONBA_PTR_SET_VALUE(gmtFailedTime_, gmtFailedTime) };


    // gmtFinishTime Field Functions 
    bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
    void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
    inline string getGmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
    inline GetJobResponseBody& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


    // gmtRunningTime Field Functions 
    bool hasGmtRunningTime() const { return this->gmtRunningTime_ != nullptr;};
    void deleteGmtRunningTime() { this->gmtRunningTime_ = nullptr;};
    inline string getGmtRunningTime() const { DARABONBA_PTR_GET_DEFAULT(gmtRunningTime_, "") };
    inline GetJobResponseBody& setGmtRunningTime(string gmtRunningTime) { DARABONBA_PTR_SET_VALUE(gmtRunningTime_, gmtRunningTime) };


    // gmtStoppedTime Field Functions 
    bool hasGmtStoppedTime() const { return this->gmtStoppedTime_ != nullptr;};
    void deleteGmtStoppedTime() { this->gmtStoppedTime_ = nullptr;};
    inline string getGmtStoppedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStoppedTime_, "") };
    inline GetJobResponseBody& setGmtStoppedTime(string gmtStoppedTime) { DARABONBA_PTR_SET_VALUE(gmtStoppedTime_, gmtStoppedTime) };


    // gmtSubmittedTime Field Functions 
    bool hasGmtSubmittedTime() const { return this->gmtSubmittedTime_ != nullptr;};
    void deleteGmtSubmittedTime() { this->gmtSubmittedTime_ = nullptr;};
    inline string getGmtSubmittedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtSubmittedTime_, "") };
    inline GetJobResponseBody& setGmtSubmittedTime(string gmtSubmittedTime) { DARABONBA_PTR_SET_VALUE(gmtSubmittedTime_, gmtSubmittedTime) };


    // gmtSuccessedTime Field Functions 
    bool hasGmtSuccessedTime() const { return this->gmtSuccessedTime_ != nullptr;};
    void deleteGmtSuccessedTime() { this->gmtSuccessedTime_ = nullptr;};
    inline string getGmtSuccessedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtSuccessedTime_, "") };
    inline GetJobResponseBody& setGmtSuccessedTime(string gmtSuccessedTime) { DARABONBA_PTR_SET_VALUE(gmtSuccessedTime_, gmtSuccessedTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobReplicaStatuses Field Functions 
    bool hasJobReplicaStatuses() const { return this->jobReplicaStatuses_ != nullptr;};
    void deleteJobReplicaStatuses() { this->jobReplicaStatuses_ = nullptr;};
    inline const vector<JobReplicaStatus> & getJobReplicaStatuses() const { DARABONBA_PTR_GET_CONST(jobReplicaStatuses_, vector<JobReplicaStatus>) };
    inline vector<JobReplicaStatus> getJobReplicaStatuses() { DARABONBA_PTR_GET(jobReplicaStatuses_, vector<JobReplicaStatus>) };
    inline GetJobResponseBody& setJobReplicaStatuses(const vector<JobReplicaStatus> & jobReplicaStatuses) { DARABONBA_PTR_SET_VALUE(jobReplicaStatuses_, jobReplicaStatuses) };
    inline GetJobResponseBody& setJobReplicaStatuses(vector<JobReplicaStatus> && jobReplicaStatuses) { DARABONBA_PTR_SET_RVALUE(jobReplicaStatuses_, jobReplicaStatuses) };


    // jobSpecs Field Functions 
    bool hasJobSpecs() const { return this->jobSpecs_ != nullptr;};
    void deleteJobSpecs() { this->jobSpecs_ = nullptr;};
    inline const vector<JobSpec> & getJobSpecs() const { DARABONBA_PTR_GET_CONST(jobSpecs_, vector<JobSpec>) };
    inline vector<JobSpec> getJobSpecs() { DARABONBA_PTR_GET(jobSpecs_, vector<JobSpec>) };
    inline GetJobResponseBody& setJobSpecs(const vector<JobSpec> & jobSpecs) { DARABONBA_PTR_SET_VALUE(jobSpecs_, jobSpecs) };
    inline GetJobResponseBody& setJobSpecs(vector<JobSpec> && jobSpecs) { DARABONBA_PTR_SET_RVALUE(jobSpecs_, jobSpecs) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetJobResponseBody& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // pods Field Functions 
    bool hasPods() const { return this->pods_ != nullptr;};
    void deletePods() { this->pods_ = nullptr;};
    inline const vector<GetJobResponseBody::Pods> & getPods() const { DARABONBA_PTR_GET_CONST(pods_, vector<GetJobResponseBody::Pods>) };
    inline vector<GetJobResponseBody::Pods> getPods() { DARABONBA_PTR_GET(pods_, vector<GetJobResponseBody::Pods>) };
    inline GetJobResponseBody& setPods(const vector<GetJobResponseBody::Pods> & pods) { DARABONBA_PTR_SET_VALUE(pods_, pods) };
    inline GetJobResponseBody& setPods(vector<GetJobResponseBody::Pods> && pods) { DARABONBA_PTR_SET_RVALUE(pods_, pods) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetJobResponseBody& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline GetJobResponseBody& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string getReasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline GetJobResponseBody& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetJobResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceLevel Field Functions 
    bool hasResourceLevel() const { return this->resourceLevel_ != nullptr;};
    void deleteResourceLevel() { this->resourceLevel_ = nullptr;};
    inline string getResourceLevel() const { DARABONBA_PTR_GET_DEFAULT(resourceLevel_, "") };
    inline GetJobResponseBody& setResourceLevel(string resourceLevel) { DARABONBA_PTR_SET_VALUE(resourceLevel_, resourceLevel) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetJobResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // restartRecord Field Functions 
    bool hasRestartRecord() const { return this->restartRecord_ != nullptr;};
    void deleteRestartRecord() { this->restartRecord_ = nullptr;};
    inline const vector<GetJobResponseBody::RestartRecord> & getRestartRecord() const { DARABONBA_PTR_GET_CONST(restartRecord_, vector<GetJobResponseBody::RestartRecord>) };
    inline vector<GetJobResponseBody::RestartRecord> getRestartRecord() { DARABONBA_PTR_GET(restartRecord_, vector<GetJobResponseBody::RestartRecord>) };
    inline GetJobResponseBody& setRestartRecord(const vector<GetJobResponseBody::RestartRecord> & restartRecord) { DARABONBA_PTR_SET_VALUE(restartRecord_, restartRecord) };
    inline GetJobResponseBody& setRestartRecord(vector<GetJobResponseBody::RestartRecord> && restartRecord) { DARABONBA_PTR_SET_RVALUE(restartRecord_, restartRecord) };


    // restartTimes Field Functions 
    bool hasRestartTimes() const { return this->restartTimes_ != nullptr;};
    void deleteRestartTimes() { this->restartTimes_ = nullptr;};
    inline string getRestartTimes() const { DARABONBA_PTR_GET_DEFAULT(restartTimes_, "") };
    inline GetJobResponseBody& setRestartTimes(string restartTimes) { DARABONBA_PTR_SET_VALUE(restartTimes_, restartTimes) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const JobSettings & getSettings() const { DARABONBA_PTR_GET_CONST(settings_, JobSettings) };
    inline JobSettings getSettings() { DARABONBA_PTR_GET(settings_, JobSettings) };
    inline GetJobResponseBody& setSettings(const JobSettings & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline GetJobResponseBody& setSettings(JobSettings && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusHistory Field Functions 
    bool hasStatusHistory() const { return this->statusHistory_ != nullptr;};
    void deleteStatusHistory() { this->statusHistory_ = nullptr;};
    inline const vector<StatusTransitionItem> & getStatusHistory() const { DARABONBA_PTR_GET_CONST(statusHistory_, vector<StatusTransitionItem>) };
    inline vector<StatusTransitionItem> getStatusHistory() { DARABONBA_PTR_GET(statusHistory_, vector<StatusTransitionItem>) };
    inline GetJobResponseBody& setStatusHistory(const vector<StatusTransitionItem> & statusHistory) { DARABONBA_PTR_SET_VALUE(statusHistory_, statusHistory) };
    inline GetJobResponseBody& setStatusHistory(vector<StatusTransitionItem> && statusHistory) { DARABONBA_PTR_SET_RVALUE(statusHistory_, statusHistory) };


    // subStatus Field Functions 
    bool hasSubStatus() const { return this->subStatus_ != nullptr;};
    void deleteSubStatus() { this->subStatus_ = nullptr;};
    inline string getSubStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
    inline GetJobResponseBody& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetJobResponseBody& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // thirdpartyLibDir Field Functions 
    bool hasThirdpartyLibDir() const { return this->thirdpartyLibDir_ != nullptr;};
    void deleteThirdpartyLibDir() { this->thirdpartyLibDir_ = nullptr;};
    inline string getThirdpartyLibDir() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyLibDir_, "") };
    inline GetJobResponseBody& setThirdpartyLibDir(string thirdpartyLibDir) { DARABONBA_PTR_SET_VALUE(thirdpartyLibDir_, thirdpartyLibDir) };


    // thirdpartyLibs Field Functions 
    bool hasThirdpartyLibs() const { return this->thirdpartyLibs_ != nullptr;};
    void deleteThirdpartyLibs() { this->thirdpartyLibs_ = nullptr;};
    inline const vector<string> & getThirdpartyLibs() const { DARABONBA_PTR_GET_CONST(thirdpartyLibs_, vector<string>) };
    inline vector<string> getThirdpartyLibs() { DARABONBA_PTR_GET(thirdpartyLibs_, vector<string>) };
    inline GetJobResponseBody& setThirdpartyLibs(const vector<string> & thirdpartyLibs) { DARABONBA_PTR_SET_VALUE(thirdpartyLibs_, thirdpartyLibs) };
    inline GetJobResponseBody& setThirdpartyLibs(vector<string> && thirdpartyLibs) { DARABONBA_PTR_SET_RVALUE(thirdpartyLibs_, thirdpartyLibs) };


    // userCommand Field Functions 
    bool hasUserCommand() const { return this->userCommand_ != nullptr;};
    void deleteUserCommand() { this->userCommand_ = nullptr;};
    inline string getUserCommand() const { DARABONBA_PTR_GET_DEFAULT(userCommand_, "") };
    inline GetJobResponseBody& setUserCommand(string userCommand) { DARABONBA_PTR_SET_VALUE(userCommand_, userCommand) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetJobResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const GetJobResponseBody::UserVpc & getUserVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, GetJobResponseBody::UserVpc) };
    inline GetJobResponseBody::UserVpc getUserVpc() { DARABONBA_PTR_GET(userVpc_, GetJobResponseBody::UserVpc) };
    inline GetJobResponseBody& setUserVpc(const GetJobResponseBody::UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline GetJobResponseBody& setUserVpc(GetJobResponseBody::UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetJobResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline GetJobResponseBody& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // The visibility of the job. Valid values:
    // 
    // *   PUBLIC: The code is public in the workspace.
    // *   PRIVATE: The workspace is visible only to you and the administrator of the workspace. This is the default value.
    shared_ptr<string> accessibility_ {};
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The code source.
    shared_ptr<GetJobResponseBody::CodeSource> codeSource_ {};
    // The access credential configurations.
    shared_ptr<CredentialConfig> credentialConfig_ {};
    shared_ptr<vector<GetJobResponseBody::CustomEnvs>> customEnvs_ {};
    // The data sources.
    shared_ptr<vector<GetJobResponseBody::DataSources>> dataSources_ {};
    // The job name.
    shared_ptr<string> displayName_ {};
    // The duration of the job (seconds).
    shared_ptr<int64_t> duration_ {};
    // The elastic job parameters.
    shared_ptr<JobElasticSpec> elasticSpec_ {};
    // Specifies whether to enable the debugger job.
    shared_ptr<bool> enabledDebugger_ {};
    // The configurations of environment variables.
    shared_ptr<map<string, string>> envs_ {};
    // The time when the job was created (UTC).
    shared_ptr<string> gmtCreateTime_ {};
    // The time of the job failed (UTC).
    shared_ptr<string> gmtFailedTime_ {};
    // The time when the job ended (UTC).
    shared_ptr<string> gmtFinishTime_ {};
    // The start time of the job (UTC).
    shared_ptr<string> gmtRunningTime_ {};
    // The time when the job stopped (UTC).
    shared_ptr<string> gmtStoppedTime_ {};
    // The time when the job was submitted to the cluster (UTC).
    shared_ptr<string> gmtSubmittedTime_ {};
    // The time when the job succeeded (UTC).
    shared_ptr<string> gmtSuccessedTime_ {};
    // The job ID.
    shared_ptr<string> jobId_ {};
    shared_ptr<vector<JobReplicaStatus>> jobReplicaStatuses_ {};
    // The node configuration of the job, which is **JobSpecs** in the CreateJob operation.
    shared_ptr<vector<JobSpec>> jobSpecs_ {};
    // The job type. Specified by the JobType parameter of the [CreateJob](https://help.aliyun.com/document_detail/459672.html) operation.
    shared_ptr<string> jobType_ {};
    // All running nodes of the job.
    shared_ptr<vector<GetJobResponseBody::Pods>> pods_ {};
    // The priority of the job. Valid values: 1 to 9.
    shared_ptr<int32_t> priority_ {};
    // The status detail code, which is a sub-status under the current status.
    shared_ptr<string> reasonCode_ {};
    // The description of the status detail code.
    shared_ptr<string> reasonMessage_ {};
    // The request ID, which can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the job belongs.
    shared_ptr<string> resourceId_ {};
    // The resource level that the job uses.
    shared_ptr<string> resourceLevel_ {};
    // The resource type. Valid values: ECS, Lingjun, and ACS.
    shared_ptr<string> resourceType_ {};
    shared_ptr<vector<GetJobResponseBody::RestartRecord>> restartRecord_ {};
    // The number of retries and the maximum number of retries used by the job.
    shared_ptr<string> restartTimes_ {};
    // The additional parameter configurations of the job.
    shared_ptr<JobSettings> settings_ {};
    // The status of the job. Valid values:
    // 
    // *   Creating
    // *   Queuing
    // *   Bidding (Only for Lingjun preemptible jobs)
    // *   EnvPreparing
    // *   SanityChecking
    // *   Running
    // *   Restarting
    // *   Stopping
    // *   SucceededReserving
    // *   FailedReserving
    // *   Succeeded
    // *   Failed
    // *   Stopped
    shared_ptr<string> status_ {};
    // The status history.
    shared_ptr<vector<StatusTransitionItem>> statusHistory_ {};
    // The sub-status of the job, such as its preemption status.
    shared_ptr<string> subStatus_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
    // The directory that contains requirements.txt.
    shared_ptr<string> thirdpartyLibDir_ {};
    // The third-party Python libraries to be installed.
    shared_ptr<vector<string>> thirdpartyLibs_ {};
    // The command that is run to start each node.
    shared_ptr<string> userCommand_ {};
    // The UID of the Alibaba Cloud account who submitted the job.
    shared_ptr<string> userId_ {};
    // The VPC of the user.
    shared_ptr<GetJobResponseBody::UserVpc> userVpc_ {};
    // The ID of the workspace to which the job belongs.
    shared_ptr<string> workspaceId_ {};
    // The name of the workspace to which the job belongs.
    shared_ptr<string> workspaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
