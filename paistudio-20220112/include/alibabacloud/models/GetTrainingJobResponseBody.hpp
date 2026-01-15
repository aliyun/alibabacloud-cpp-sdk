// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AlgorithmSpec.hpp>
#include <alibabacloud/models/AssignNodeSpec.hpp>
#include <map>
#include <alibabacloud/models/JobSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetTrainingJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrainingJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmId, algorithmId_);
      DARABONBA_PTR_TO_JSON(AlgorithmName, algorithmName_);
      DARABONBA_PTR_TO_JSON(AlgorithmProvider, algorithmProvider_);
      DARABONBA_PTR_TO_JSON(AlgorithmSpec, algorithmSpec_);
      DARABONBA_PTR_TO_JSON(AlgorithmVersion, algorithmVersion_);
      DARABONBA_PTR_TO_JSON(AssignNodeSpec, assignNodeSpec_);
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Environments, environments_);
      DARABONBA_PTR_TO_JSON(ExperimentConfig, experimentConfig_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(HyperParameters, hyperParameters_);
      DARABONBA_PTR_TO_JSON(InputChannels, inputChannels_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(IsTempAlgo, isTempAlgo_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LatestMetrics, latestMetrics_);
      DARABONBA_PTR_TO_JSON(LatestProgress, latestProgress_);
      DARABONBA_PTR_TO_JSON(OutputChannels, outputChannels_);
      DARABONBA_PTR_TO_JSON(OutputModel, outputModel_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(PythonRequirements, pythonRequirements_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusTransitions, statusTransitions_);
      DARABONBA_PTR_TO_JSON(TrainingJobDescription, trainingJobDescription_);
      DARABONBA_PTR_TO_JSON(TrainingJobId, trainingJobId_);
      DARABONBA_PTR_TO_JSON(TrainingJobName, trainingJobName_);
      DARABONBA_PTR_TO_JSON(TrainingJobUrl, trainingJobUrl_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrainingJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmId, algorithmId_);
      DARABONBA_PTR_FROM_JSON(AlgorithmName, algorithmName_);
      DARABONBA_PTR_FROM_JSON(AlgorithmProvider, algorithmProvider_);
      DARABONBA_PTR_FROM_JSON(AlgorithmSpec, algorithmSpec_);
      DARABONBA_PTR_FROM_JSON(AlgorithmVersion, algorithmVersion_);
      DARABONBA_PTR_FROM_JSON(AssignNodeSpec, assignNodeSpec_);
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Environments, environments_);
      DARABONBA_PTR_FROM_JSON(ExperimentConfig, experimentConfig_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(HyperParameters, hyperParameters_);
      DARABONBA_PTR_FROM_JSON(InputChannels, inputChannels_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(IsTempAlgo, isTempAlgo_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LatestMetrics, latestMetrics_);
      DARABONBA_PTR_FROM_JSON(LatestProgress, latestProgress_);
      DARABONBA_PTR_FROM_JSON(OutputChannels, outputChannels_);
      DARABONBA_PTR_FROM_JSON(OutputModel, outputModel_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(PythonRequirements, pythonRequirements_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusTransitions, statusTransitions_);
      DARABONBA_PTR_FROM_JSON(TrainingJobDescription, trainingJobDescription_);
      DARABONBA_PTR_FROM_JSON(TrainingJobId, trainingJobId_);
      DARABONBA_PTR_FROM_JSON(TrainingJobName, trainingJobName_);
      DARABONBA_PTR_FROM_JSON(TrainingJobUrl, trainingJobUrl_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetTrainingJobResponseBody() = default ;
    GetTrainingJobResponseBody(const GetTrainingJobResponseBody &) = default ;
    GetTrainingJobResponseBody(GetTrainingJobResponseBody &&) = default ;
    GetTrainingJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrainingJobResponseBody() = default ;
    GetTrainingJobResponseBody& operator=(const GetTrainingJobResponseBody &) = default ;
    GetTrainingJobResponseBody& operator=(GetTrainingJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserVpc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserVpc& obj) { 
        DARABONBA_PTR_TO_JSON(ExtendedCIDRs, extendedCIDRs_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, UserVpc& obj) { 
        DARABONBA_PTR_FROM_JSON(ExtendedCIDRs, extendedCIDRs_);
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
      virtual bool empty() const override { return this->extendedCIDRs_ == nullptr
        && this->securityGroupId_ == nullptr && this->switchId_ == nullptr && this->vpcId_ == nullptr; };
      // extendedCIDRs Field Functions 
      bool hasExtendedCIDRs() const { return this->extendedCIDRs_ != nullptr;};
      void deleteExtendedCIDRs() { this->extendedCIDRs_ = nullptr;};
      inline const vector<string> & getExtendedCIDRs() const { DARABONBA_PTR_GET_CONST(extendedCIDRs_, vector<string>) };
      inline vector<string> getExtendedCIDRs() { DARABONBA_PTR_GET(extendedCIDRs_, vector<string>) };
      inline UserVpc& setExtendedCIDRs(const vector<string> & extendedCIDRs) { DARABONBA_PTR_SET_VALUE(extendedCIDRs_, extendedCIDRs) };
      inline UserVpc& setExtendedCIDRs(vector<string> && extendedCIDRs) { DARABONBA_PTR_SET_RVALUE(extendedCIDRs_, extendedCIDRs) };


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
      shared_ptr<vector<string>> extendedCIDRs_ {};
      shared_ptr<string> securityGroupId_ {};
      shared_ptr<string> switchId_ {};
      // VPC ID。
      shared_ptr<string> vpcId_ {};
    };

    class StatusTransitions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StatusTransitions& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
        DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, StatusTransitions& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
        DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      StatusTransitions() = default ;
      StatusTransitions(const StatusTransitions &) = default ;
      StatusTransitions(StatusTransitions &&) = default ;
      StatusTransitions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StatusTransitions() = default ;
      StatusTransitions& operator=(const StatusTransitions &) = default ;
      StatusTransitions& operator=(StatusTransitions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->reasonCode_ == nullptr && this->reasonMessage_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline StatusTransitions& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // reasonCode Field Functions 
      bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
      void deleteReasonCode() { this->reasonCode_ = nullptr;};
      inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
      inline StatusTransitions& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


      // reasonMessage Field Functions 
      bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
      void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
      inline string getReasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
      inline StatusTransitions& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline StatusTransitions& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline StatusTransitions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> endTime_ {};
      shared_ptr<string> reasonCode_ {};
      shared_ptr<string> reasonMessage_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> status_ {};
    };

    class Scheduler : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Scheduler& obj) { 
        DARABONBA_PTR_TO_JSON(MaxRunningTimeInMinutes, maxRunningTimeInMinutes_);
        DARABONBA_PTR_TO_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
      };
      friend void from_json(const Darabonba::Json& j, Scheduler& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxRunningTimeInMinutes, maxRunningTimeInMinutes_);
        DARABONBA_PTR_FROM_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
      };
      Scheduler() = default ;
      Scheduler(const Scheduler &) = default ;
      Scheduler(Scheduler &&) = default ;
      Scheduler(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Scheduler() = default ;
      Scheduler& operator=(const Scheduler &) = default ;
      Scheduler& operator=(Scheduler &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->maxRunningTimeInMinutes_ == nullptr
        && this->maxRunningTimeInSeconds_ == nullptr; };
      // maxRunningTimeInMinutes Field Functions 
      bool hasMaxRunningTimeInMinutes() const { return this->maxRunningTimeInMinutes_ != nullptr;};
      void deleteMaxRunningTimeInMinutes() { this->maxRunningTimeInMinutes_ = nullptr;};
      inline string getMaxRunningTimeInMinutes() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeInMinutes_, "") };
      inline Scheduler& setMaxRunningTimeInMinutes(string maxRunningTimeInMinutes) { DARABONBA_PTR_SET_VALUE(maxRunningTimeInMinutes_, maxRunningTimeInMinutes) };


      // maxRunningTimeInSeconds Field Functions 
      bool hasMaxRunningTimeInSeconds() const { return this->maxRunningTimeInSeconds_ != nullptr;};
      void deleteMaxRunningTimeInSeconds() { this->maxRunningTimeInSeconds_ = nullptr;};
      inline string getMaxRunningTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeInSeconds_, "") };
      inline Scheduler& setMaxRunningTimeInSeconds(string maxRunningTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxRunningTimeInSeconds_, maxRunningTimeInSeconds) };


    protected:
      shared_ptr<string> maxRunningTimeInMinutes_ {};
      shared_ptr<string> maxRunningTimeInSeconds_ {};
    };

    class OutputModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OutputModel& obj) { 
        DARABONBA_PTR_TO_JSON(OutputChannelName, outputChannelName_);
        DARABONBA_PTR_TO_JSON(Uri, uri_);
      };
      friend void from_json(const Darabonba::Json& j, OutputModel& obj) { 
        DARABONBA_PTR_FROM_JSON(OutputChannelName, outputChannelName_);
        DARABONBA_PTR_FROM_JSON(Uri, uri_);
      };
      OutputModel() = default ;
      OutputModel(const OutputModel &) = default ;
      OutputModel(OutputModel &&) = default ;
      OutputModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OutputModel() = default ;
      OutputModel& operator=(const OutputModel &) = default ;
      OutputModel& operator=(OutputModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->outputChannelName_ == nullptr
        && this->uri_ == nullptr; };
      // outputChannelName Field Functions 
      bool hasOutputChannelName() const { return this->outputChannelName_ != nullptr;};
      void deleteOutputChannelName() { this->outputChannelName_ = nullptr;};
      inline string getOutputChannelName() const { DARABONBA_PTR_GET_DEFAULT(outputChannelName_, "") };
      inline OutputModel& setOutputChannelName(string outputChannelName) { DARABONBA_PTR_SET_VALUE(outputChannelName_, outputChannelName) };


      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline OutputModel& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    protected:
      shared_ptr<string> outputChannelName_ {};
      shared_ptr<string> uri_ {};
    };

    class OutputChannels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OutputChannels& obj) { 
        DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OutputUri, outputUri_);
        DARABONBA_PTR_TO_JSON(VersionName, versionName_);
      };
      friend void from_json(const Darabonba::Json& j, OutputChannels& obj) { 
        DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OutputUri, outputUri_);
        DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
      };
      OutputChannels() = default ;
      OutputChannels(const OutputChannels &) = default ;
      OutputChannels(OutputChannels &&) = default ;
      OutputChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OutputChannels() = default ;
      OutputChannels& operator=(const OutputChannels &) = default ;
      OutputChannels& operator=(OutputChannels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->datasetId_ == nullptr
        && this->name_ == nullptr && this->outputUri_ == nullptr && this->versionName_ == nullptr; };
      // datasetId Field Functions 
      bool hasDatasetId() const { return this->datasetId_ != nullptr;};
      void deleteDatasetId() { this->datasetId_ = nullptr;};
      inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
      inline OutputChannels& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline OutputChannels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // outputUri Field Functions 
      bool hasOutputUri() const { return this->outputUri_ != nullptr;};
      void deleteOutputUri() { this->outputUri_ = nullptr;};
      inline string getOutputUri() const { DARABONBA_PTR_GET_DEFAULT(outputUri_, "") };
      inline OutputChannels& setOutputUri(string outputUri) { DARABONBA_PTR_SET_VALUE(outputUri_, outputUri) };


      // versionName Field Functions 
      bool hasVersionName() const { return this->versionName_ != nullptr;};
      void deleteVersionName() { this->versionName_ = nullptr;};
      inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
      inline OutputChannels& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


    protected:
      shared_ptr<string> datasetId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> outputUri_ {};
      shared_ptr<string> versionName_ {};
    };

    class LatestProgress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LatestProgress& obj) { 
        DARABONBA_PTR_TO_JSON(OverallProgress, overallProgress_);
        DARABONBA_PTR_TO_JSON(RemainingTime, remainingTime_);
      };
      friend void from_json(const Darabonba::Json& j, LatestProgress& obj) { 
        DARABONBA_PTR_FROM_JSON(OverallProgress, overallProgress_);
        DARABONBA_PTR_FROM_JSON(RemainingTime, remainingTime_);
      };
      LatestProgress() = default ;
      LatestProgress(const LatestProgress &) = default ;
      LatestProgress(LatestProgress &&) = default ;
      LatestProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LatestProgress() = default ;
      LatestProgress& operator=(const LatestProgress &) = default ;
      LatestProgress& operator=(LatestProgress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RemainingTime : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RemainingTime& obj) { 
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, RemainingTime& obj) { 
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        RemainingTime() = default ;
        RemainingTime(const RemainingTime &) = default ;
        RemainingTime(RemainingTime &&) = default ;
        RemainingTime(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RemainingTime() = default ;
        RemainingTime& operator=(const RemainingTime &) = default ;
        RemainingTime& operator=(RemainingTime &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->timestamp_ == nullptr
        && this->value_ == nullptr; };
        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline RemainingTime& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
        inline RemainingTime& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> timestamp_ {};
        shared_ptr<int64_t> value_ {};
      };

      class OverallProgress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OverallProgress& obj) { 
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, OverallProgress& obj) { 
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        OverallProgress() = default ;
        OverallProgress(const OverallProgress &) = default ;
        OverallProgress(OverallProgress &&) = default ;
        OverallProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OverallProgress() = default ;
        OverallProgress& operator=(const OverallProgress &) = default ;
        OverallProgress& operator=(OverallProgress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->timestamp_ == nullptr
        && this->value_ == nullptr; };
        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline OverallProgress& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline OverallProgress& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> timestamp_ {};
        shared_ptr<float> value_ {};
      };

      virtual bool empty() const override { return this->overallProgress_ == nullptr
        && this->remainingTime_ == nullptr; };
      // overallProgress Field Functions 
      bool hasOverallProgress() const { return this->overallProgress_ != nullptr;};
      void deleteOverallProgress() { this->overallProgress_ = nullptr;};
      inline const LatestProgress::OverallProgress & getOverallProgress() const { DARABONBA_PTR_GET_CONST(overallProgress_, LatestProgress::OverallProgress) };
      inline LatestProgress::OverallProgress getOverallProgress() { DARABONBA_PTR_GET(overallProgress_, LatestProgress::OverallProgress) };
      inline LatestProgress& setOverallProgress(const LatestProgress::OverallProgress & overallProgress) { DARABONBA_PTR_SET_VALUE(overallProgress_, overallProgress) };
      inline LatestProgress& setOverallProgress(LatestProgress::OverallProgress && overallProgress) { DARABONBA_PTR_SET_RVALUE(overallProgress_, overallProgress) };


      // remainingTime Field Functions 
      bool hasRemainingTime() const { return this->remainingTime_ != nullptr;};
      void deleteRemainingTime() { this->remainingTime_ = nullptr;};
      inline const LatestProgress::RemainingTime & getRemainingTime() const { DARABONBA_PTR_GET_CONST(remainingTime_, LatestProgress::RemainingTime) };
      inline LatestProgress::RemainingTime getRemainingTime() { DARABONBA_PTR_GET(remainingTime_, LatestProgress::RemainingTime) };
      inline LatestProgress& setRemainingTime(const LatestProgress::RemainingTime & remainingTime) { DARABONBA_PTR_SET_VALUE(remainingTime_, remainingTime) };
      inline LatestProgress& setRemainingTime(LatestProgress::RemainingTime && remainingTime) { DARABONBA_PTR_SET_RVALUE(remainingTime_, remainingTime) };


    protected:
      shared_ptr<LatestProgress::OverallProgress> overallProgress_ {};
      shared_ptr<LatestProgress::RemainingTime> remainingTime_ {};
    };

    class LatestMetrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LatestMetrics& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, LatestMetrics& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      LatestMetrics() = default ;
      LatestMetrics(const LatestMetrics &) = default ;
      LatestMetrics(LatestMetrics &&) = default ;
      LatestMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LatestMetrics() = default ;
      LatestMetrics& operator=(const LatestMetrics &) = default ;
      LatestMetrics& operator=(LatestMetrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->timestamp_ == nullptr && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline LatestMetrics& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline LatestMetrics& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
      inline LatestMetrics& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> timestamp_ {};
      shared_ptr<double> value_ {};
    };

    class Labels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Labels& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Labels& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Labels() = default ;
      Labels(const Labels &) = default ;
      Labels(Labels &&) = default ;
      Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Labels() = default ;
      Labels& operator=(const Labels &) = default ;
      Labels& operator=(Labels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->role_ == nullptr && this->status_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Instances& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Instances& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Instances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> role_ {};
      shared_ptr<string> status_ {};
    };

    class InputChannels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InputChannels& obj) { 
        DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_TO_JSON(InputUri, inputUri_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Options, options_);
        DARABONBA_PTR_TO_JSON(VersionName, versionName_);
      };
      friend void from_json(const Darabonba::Json& j, InputChannels& obj) { 
        DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_FROM_JSON(InputUri, inputUri_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Options, options_);
        DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
      };
      InputChannels() = default ;
      InputChannels(const InputChannels &) = default ;
      InputChannels(InputChannels &&) = default ;
      InputChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InputChannels() = default ;
      InputChannels& operator=(const InputChannels &) = default ;
      InputChannels& operator=(InputChannels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->datasetId_ == nullptr
        && this->inputUri_ == nullptr && this->name_ == nullptr && this->options_ == nullptr && this->versionName_ == nullptr; };
      // datasetId Field Functions 
      bool hasDatasetId() const { return this->datasetId_ != nullptr;};
      void deleteDatasetId() { this->datasetId_ = nullptr;};
      inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
      inline InputChannels& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


      // inputUri Field Functions 
      bool hasInputUri() const { return this->inputUri_ != nullptr;};
      void deleteInputUri() { this->inputUri_ = nullptr;};
      inline string getInputUri() const { DARABONBA_PTR_GET_DEFAULT(inputUri_, "") };
      inline InputChannels& setInputUri(string inputUri) { DARABONBA_PTR_SET_VALUE(inputUri_, inputUri) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline InputChannels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // options Field Functions 
      bool hasOptions() const { return this->options_ != nullptr;};
      void deleteOptions() { this->options_ = nullptr;};
      inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
      inline InputChannels& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


      // versionName Field Functions 
      bool hasVersionName() const { return this->versionName_ != nullptr;};
      void deleteVersionName() { this->versionName_ = nullptr;};
      inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
      inline InputChannels& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


    protected:
      shared_ptr<string> datasetId_ {};
      shared_ptr<string> inputUri_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> options_ {};
      shared_ptr<string> versionName_ {};
    };

    class HyperParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HyperParameters& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, HyperParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      HyperParameters() = default ;
      HyperParameters(const HyperParameters &) = default ;
      HyperParameters(HyperParameters &&) = default ;
      HyperParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HyperParameters() = default ;
      HyperParameters& operator=(const HyperParameters &) = default ;
      HyperParameters& operator=(HyperParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline HyperParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline HyperParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> value_ {};
    };

    class ExperimentConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExperimentConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
        DARABONBA_PTR_TO_JSON(ExperimentName, experimentName_);
      };
      friend void from_json(const Darabonba::Json& j, ExperimentConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
        DARABONBA_PTR_FROM_JSON(ExperimentName, experimentName_);
      };
      ExperimentConfig() = default ;
      ExperimentConfig(const ExperimentConfig &) = default ;
      ExperimentConfig(ExperimentConfig &&) = default ;
      ExperimentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExperimentConfig() = default ;
      ExperimentConfig& operator=(const ExperimentConfig &) = default ;
      ExperimentConfig& operator=(ExperimentConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->experimentId_ == nullptr
        && this->experimentName_ == nullptr; };
      // experimentId Field Functions 
      bool hasExperimentId() const { return this->experimentId_ != nullptr;};
      void deleteExperimentId() { this->experimentId_ = nullptr;};
      inline string getExperimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
      inline ExperimentConfig& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


      // experimentName Field Functions 
      bool hasExperimentName() const { return this->experimentName_ != nullptr;};
      void deleteExperimentName() { this->experimentName_ = nullptr;};
      inline string getExperimentName() const { DARABONBA_PTR_GET_DEFAULT(experimentName_, "") };
      inline ExperimentConfig& setExperimentName(string experimentName) { DARABONBA_PTR_SET_VALUE(experimentName_, experimentName) };


    protected:
      shared_ptr<string> experimentId_ {};
      shared_ptr<string> experimentName_ {};
    };

    class ComputeResource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComputeResource& obj) { 
        DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
        DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
        DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(SpotSpec, spotSpec_);
        DARABONBA_PTR_TO_JSON(UseSpotInstance, useSpotInstance_);
      };
      friend void from_json(const Darabonba::Json& j, ComputeResource& obj) { 
        DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
        DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
        DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(SpotSpec, spotSpec_);
        DARABONBA_PTR_FROM_JSON(UseSpotInstance, useSpotInstance_);
      };
      ComputeResource() = default ;
      ComputeResource(const ComputeResource &) = default ;
      ComputeResource(ComputeResource &&) = default ;
      ComputeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComputeResource() = default ;
      ComputeResource& operator=(const ComputeResource &) = default ;
      ComputeResource& operator=(ComputeResource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SpotSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SpotSpec& obj) { 
          DARABONBA_PTR_TO_JSON(SpotDiscountLimit, spotDiscountLimit_);
          DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
        };
        friend void from_json(const Darabonba::Json& j, SpotSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(SpotDiscountLimit, spotDiscountLimit_);
          DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
        };
        SpotSpec() = default ;
        SpotSpec(const SpotSpec &) = default ;
        SpotSpec(SpotSpec &&) = default ;
        SpotSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SpotSpec() = default ;
        SpotSpec& operator=(const SpotSpec &) = default ;
        SpotSpec& operator=(SpotSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->spotDiscountLimit_ == nullptr
        && this->spotStrategy_ == nullptr; };
        // spotDiscountLimit Field Functions 
        bool hasSpotDiscountLimit() const { return this->spotDiscountLimit_ != nullptr;};
        void deleteSpotDiscountLimit() { this->spotDiscountLimit_ = nullptr;};
        inline float getSpotDiscountLimit() const { DARABONBA_PTR_GET_DEFAULT(spotDiscountLimit_, 0.0) };
        inline SpotSpec& setSpotDiscountLimit(float spotDiscountLimit) { DARABONBA_PTR_SET_VALUE(spotDiscountLimit_, spotDiscountLimit) };


        // spotStrategy Field Functions 
        bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
        void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
        inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
        inline SpotSpec& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


      protected:
        shared_ptr<float> spotDiscountLimit_ {};
        shared_ptr<string> spotStrategy_ {};
      };

      class InstanceSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceSpec& obj) { 
          DARABONBA_PTR_TO_JSON(CPU, CPU_);
          DARABONBA_PTR_TO_JSON(GPU, GPU_);
          DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(SharedMemory, sharedMemory_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(CPU, CPU_);
          DARABONBA_PTR_FROM_JSON(GPU, GPU_);
          DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(SharedMemory, sharedMemory_);
        };
        InstanceSpec() = default ;
        InstanceSpec(const InstanceSpec &) = default ;
        InstanceSpec(InstanceSpec &&) = default ;
        InstanceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceSpec() = default ;
        InstanceSpec& operator=(const InstanceSpec &) = default ;
        InstanceSpec& operator=(InstanceSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->CPU_ == nullptr
        && this->GPU_ == nullptr && this->GPUType_ == nullptr && this->memory_ == nullptr && this->sharedMemory_ == nullptr; };
        // CPU Field Functions 
        bool hasCPU() const { return this->CPU_ != nullptr;};
        void deleteCPU() { this->CPU_ = nullptr;};
        inline string getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
        inline InstanceSpec& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


        // GPU Field Functions 
        bool hasGPU() const { return this->GPU_ != nullptr;};
        void deleteGPU() { this->GPU_ = nullptr;};
        inline string getGPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
        inline InstanceSpec& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


        // GPUType Field Functions 
        bool hasGPUType() const { return this->GPUType_ != nullptr;};
        void deleteGPUType() { this->GPUType_ = nullptr;};
        inline string getGPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
        inline InstanceSpec& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
        inline InstanceSpec& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // sharedMemory Field Functions 
        bool hasSharedMemory() const { return this->sharedMemory_ != nullptr;};
        void deleteSharedMemory() { this->sharedMemory_ = nullptr;};
        inline string getSharedMemory() const { DARABONBA_PTR_GET_DEFAULT(sharedMemory_, "") };
        inline InstanceSpec& setSharedMemory(string sharedMemory) { DARABONBA_PTR_SET_VALUE(sharedMemory_, sharedMemory) };


      protected:
        shared_ptr<string> CPU_ {};
        shared_ptr<string> GPU_ {};
        shared_ptr<string> GPUType_ {};
        shared_ptr<string> memory_ {};
        shared_ptr<string> sharedMemory_ {};
      };

      virtual bool empty() const override { return this->ecsCount_ == nullptr
        && this->ecsSpec_ == nullptr && this->instanceCount_ == nullptr && this->instanceSpec_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr
        && this->spotSpec_ == nullptr && this->useSpotInstance_ == nullptr; };
      // ecsCount Field Functions 
      bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
      void deleteEcsCount() { this->ecsCount_ = nullptr;};
      inline int64_t getEcsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0L) };
      inline ComputeResource& setEcsCount(int64_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


      // ecsSpec Field Functions 
      bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
      void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
      inline string getEcsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
      inline ComputeResource& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int64_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0L) };
      inline ComputeResource& setInstanceCount(int64_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // instanceSpec Field Functions 
      bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
      void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
      inline const ComputeResource::InstanceSpec & getInstanceSpec() const { DARABONBA_PTR_GET_CONST(instanceSpec_, ComputeResource::InstanceSpec) };
      inline ComputeResource::InstanceSpec getInstanceSpec() { DARABONBA_PTR_GET(instanceSpec_, ComputeResource::InstanceSpec) };
      inline ComputeResource& setInstanceSpec(const ComputeResource::InstanceSpec & instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };
      inline ComputeResource& setInstanceSpec(ComputeResource::InstanceSpec && instanceSpec) { DARABONBA_PTR_SET_RVALUE(instanceSpec_, instanceSpec) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline ComputeResource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline ComputeResource& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // spotSpec Field Functions 
      bool hasSpotSpec() const { return this->spotSpec_ != nullptr;};
      void deleteSpotSpec() { this->spotSpec_ = nullptr;};
      inline const ComputeResource::SpotSpec & getSpotSpec() const { DARABONBA_PTR_GET_CONST(spotSpec_, ComputeResource::SpotSpec) };
      inline ComputeResource::SpotSpec getSpotSpec() { DARABONBA_PTR_GET(spotSpec_, ComputeResource::SpotSpec) };
      inline ComputeResource& setSpotSpec(const ComputeResource::SpotSpec & spotSpec) { DARABONBA_PTR_SET_VALUE(spotSpec_, spotSpec) };
      inline ComputeResource& setSpotSpec(ComputeResource::SpotSpec && spotSpec) { DARABONBA_PTR_SET_RVALUE(spotSpec_, spotSpec) };


      // useSpotInstance Field Functions 
      bool hasUseSpotInstance() const { return this->useSpotInstance_ != nullptr;};
      void deleteUseSpotInstance() { this->useSpotInstance_ = nullptr;};
      inline bool getUseSpotInstance() const { DARABONBA_PTR_GET_DEFAULT(useSpotInstance_, false) };
      inline ComputeResource& setUseSpotInstance(bool useSpotInstance) { DARABONBA_PTR_SET_VALUE(useSpotInstance_, useSpotInstance) };


    protected:
      shared_ptr<int64_t> ecsCount_ {};
      shared_ptr<string> ecsSpec_ {};
      shared_ptr<int64_t> instanceCount_ {};
      shared_ptr<ComputeResource::InstanceSpec> instanceSpec_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<string> resourceName_ {};
      shared_ptr<ComputeResource::SpotSpec> spotSpec_ {};
      shared_ptr<bool> useSpotInstance_ {};
    };

    virtual bool empty() const override { return this->algorithmId_ == nullptr
        && this->algorithmName_ == nullptr && this->algorithmProvider_ == nullptr && this->algorithmSpec_ == nullptr && this->algorithmVersion_ == nullptr && this->assignNodeSpec_ == nullptr
        && this->computeResource_ == nullptr && this->duration_ == nullptr && this->environments_ == nullptr && this->experimentConfig_ == nullptr && this->gmtCreateTime_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->hyperParameters_ == nullptr && this->inputChannels_ == nullptr && this->instances_ == nullptr && this->isTempAlgo_ == nullptr
        && this->labels_ == nullptr && this->latestMetrics_ == nullptr && this->latestProgress_ == nullptr && this->outputChannels_ == nullptr && this->outputModel_ == nullptr
        && this->priority_ == nullptr && this->pythonRequirements_ == nullptr && this->reasonCode_ == nullptr && this->reasonMessage_ == nullptr && this->requestId_ == nullptr
        && this->roleArn_ == nullptr && this->scheduler_ == nullptr && this->settings_ == nullptr && this->status_ == nullptr && this->statusTransitions_ == nullptr
        && this->trainingJobDescription_ == nullptr && this->trainingJobId_ == nullptr && this->trainingJobName_ == nullptr && this->trainingJobUrl_ == nullptr && this->userId_ == nullptr
        && this->userVpc_ == nullptr && this->workspaceId_ == nullptr; };
    // algorithmId Field Functions 
    bool hasAlgorithmId() const { return this->algorithmId_ != nullptr;};
    void deleteAlgorithmId() { this->algorithmId_ = nullptr;};
    inline string getAlgorithmId() const { DARABONBA_PTR_GET_DEFAULT(algorithmId_, "") };
    inline GetTrainingJobResponseBody& setAlgorithmId(string algorithmId) { DARABONBA_PTR_SET_VALUE(algorithmId_, algorithmId) };


    // algorithmName Field Functions 
    bool hasAlgorithmName() const { return this->algorithmName_ != nullptr;};
    void deleteAlgorithmName() { this->algorithmName_ = nullptr;};
    inline string getAlgorithmName() const { DARABONBA_PTR_GET_DEFAULT(algorithmName_, "") };
    inline GetTrainingJobResponseBody& setAlgorithmName(string algorithmName) { DARABONBA_PTR_SET_VALUE(algorithmName_, algorithmName) };


    // algorithmProvider Field Functions 
    bool hasAlgorithmProvider() const { return this->algorithmProvider_ != nullptr;};
    void deleteAlgorithmProvider() { this->algorithmProvider_ = nullptr;};
    inline string getAlgorithmProvider() const { DARABONBA_PTR_GET_DEFAULT(algorithmProvider_, "") };
    inline GetTrainingJobResponseBody& setAlgorithmProvider(string algorithmProvider) { DARABONBA_PTR_SET_VALUE(algorithmProvider_, algorithmProvider) };


    // algorithmSpec Field Functions 
    bool hasAlgorithmSpec() const { return this->algorithmSpec_ != nullptr;};
    void deleteAlgorithmSpec() { this->algorithmSpec_ = nullptr;};
    inline const AlgorithmSpec & getAlgorithmSpec() const { DARABONBA_PTR_GET_CONST(algorithmSpec_, AlgorithmSpec) };
    inline AlgorithmSpec getAlgorithmSpec() { DARABONBA_PTR_GET(algorithmSpec_, AlgorithmSpec) };
    inline GetTrainingJobResponseBody& setAlgorithmSpec(const AlgorithmSpec & algorithmSpec) { DARABONBA_PTR_SET_VALUE(algorithmSpec_, algorithmSpec) };
    inline GetTrainingJobResponseBody& setAlgorithmSpec(AlgorithmSpec && algorithmSpec) { DARABONBA_PTR_SET_RVALUE(algorithmSpec_, algorithmSpec) };


    // algorithmVersion Field Functions 
    bool hasAlgorithmVersion() const { return this->algorithmVersion_ != nullptr;};
    void deleteAlgorithmVersion() { this->algorithmVersion_ = nullptr;};
    inline string getAlgorithmVersion() const { DARABONBA_PTR_GET_DEFAULT(algorithmVersion_, "") };
    inline GetTrainingJobResponseBody& setAlgorithmVersion(string algorithmVersion) { DARABONBA_PTR_SET_VALUE(algorithmVersion_, algorithmVersion) };


    // assignNodeSpec Field Functions 
    bool hasAssignNodeSpec() const { return this->assignNodeSpec_ != nullptr;};
    void deleteAssignNodeSpec() { this->assignNodeSpec_ = nullptr;};
    inline const AssignNodeSpec & getAssignNodeSpec() const { DARABONBA_PTR_GET_CONST(assignNodeSpec_, AssignNodeSpec) };
    inline AssignNodeSpec getAssignNodeSpec() { DARABONBA_PTR_GET(assignNodeSpec_, AssignNodeSpec) };
    inline GetTrainingJobResponseBody& setAssignNodeSpec(const AssignNodeSpec & assignNodeSpec) { DARABONBA_PTR_SET_VALUE(assignNodeSpec_, assignNodeSpec) };
    inline GetTrainingJobResponseBody& setAssignNodeSpec(AssignNodeSpec && assignNodeSpec) { DARABONBA_PTR_SET_RVALUE(assignNodeSpec_, assignNodeSpec) };


    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline const GetTrainingJobResponseBody::ComputeResource & getComputeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, GetTrainingJobResponseBody::ComputeResource) };
    inline GetTrainingJobResponseBody::ComputeResource getComputeResource() { DARABONBA_PTR_GET(computeResource_, GetTrainingJobResponseBody::ComputeResource) };
    inline GetTrainingJobResponseBody& setComputeResource(const GetTrainingJobResponseBody::ComputeResource & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
    inline GetTrainingJobResponseBody& setComputeResource(GetTrainingJobResponseBody::ComputeResource && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetTrainingJobResponseBody& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // environments Field Functions 
    bool hasEnvironments() const { return this->environments_ != nullptr;};
    void deleteEnvironments() { this->environments_ = nullptr;};
    inline const map<string, string> & getEnvironments() const { DARABONBA_PTR_GET_CONST(environments_, map<string, string>) };
    inline map<string, string> getEnvironments() { DARABONBA_PTR_GET(environments_, map<string, string>) };
    inline GetTrainingJobResponseBody& setEnvironments(const map<string, string> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
    inline GetTrainingJobResponseBody& setEnvironments(map<string, string> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


    // experimentConfig Field Functions 
    bool hasExperimentConfig() const { return this->experimentConfig_ != nullptr;};
    void deleteExperimentConfig() { this->experimentConfig_ = nullptr;};
    inline const GetTrainingJobResponseBody::ExperimentConfig & getExperimentConfig() const { DARABONBA_PTR_GET_CONST(experimentConfig_, GetTrainingJobResponseBody::ExperimentConfig) };
    inline GetTrainingJobResponseBody::ExperimentConfig getExperimentConfig() { DARABONBA_PTR_GET(experimentConfig_, GetTrainingJobResponseBody::ExperimentConfig) };
    inline GetTrainingJobResponseBody& setExperimentConfig(const GetTrainingJobResponseBody::ExperimentConfig & experimentConfig) { DARABONBA_PTR_SET_VALUE(experimentConfig_, experimentConfig) };
    inline GetTrainingJobResponseBody& setExperimentConfig(GetTrainingJobResponseBody::ExperimentConfig && experimentConfig) { DARABONBA_PTR_SET_RVALUE(experimentConfig_, experimentConfig) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetTrainingJobResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetTrainingJobResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // hyperParameters Field Functions 
    bool hasHyperParameters() const { return this->hyperParameters_ != nullptr;};
    void deleteHyperParameters() { this->hyperParameters_ = nullptr;};
    inline const vector<GetTrainingJobResponseBody::HyperParameters> & getHyperParameters() const { DARABONBA_PTR_GET_CONST(hyperParameters_, vector<GetTrainingJobResponseBody::HyperParameters>) };
    inline vector<GetTrainingJobResponseBody::HyperParameters> getHyperParameters() { DARABONBA_PTR_GET(hyperParameters_, vector<GetTrainingJobResponseBody::HyperParameters>) };
    inline GetTrainingJobResponseBody& setHyperParameters(const vector<GetTrainingJobResponseBody::HyperParameters> & hyperParameters) { DARABONBA_PTR_SET_VALUE(hyperParameters_, hyperParameters) };
    inline GetTrainingJobResponseBody& setHyperParameters(vector<GetTrainingJobResponseBody::HyperParameters> && hyperParameters) { DARABONBA_PTR_SET_RVALUE(hyperParameters_, hyperParameters) };


    // inputChannels Field Functions 
    bool hasInputChannels() const { return this->inputChannels_ != nullptr;};
    void deleteInputChannels() { this->inputChannels_ = nullptr;};
    inline const vector<GetTrainingJobResponseBody::InputChannels> & getInputChannels() const { DARABONBA_PTR_GET_CONST(inputChannels_, vector<GetTrainingJobResponseBody::InputChannels>) };
    inline vector<GetTrainingJobResponseBody::InputChannels> getInputChannels() { DARABONBA_PTR_GET(inputChannels_, vector<GetTrainingJobResponseBody::InputChannels>) };
    inline GetTrainingJobResponseBody& setInputChannels(const vector<GetTrainingJobResponseBody::InputChannels> & inputChannels) { DARABONBA_PTR_SET_VALUE(inputChannels_, inputChannels) };
    inline GetTrainingJobResponseBody& setInputChannels(vector<GetTrainingJobResponseBody::InputChannels> && inputChannels) { DARABONBA_PTR_SET_RVALUE(inputChannels_, inputChannels) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<GetTrainingJobResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<GetTrainingJobResponseBody::Instances>) };
    inline vector<GetTrainingJobResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<GetTrainingJobResponseBody::Instances>) };
    inline GetTrainingJobResponseBody& setInstances(const vector<GetTrainingJobResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline GetTrainingJobResponseBody& setInstances(vector<GetTrainingJobResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // isTempAlgo Field Functions 
    bool hasIsTempAlgo() const { return this->isTempAlgo_ != nullptr;};
    void deleteIsTempAlgo() { this->isTempAlgo_ = nullptr;};
    inline bool getIsTempAlgo() const { DARABONBA_PTR_GET_DEFAULT(isTempAlgo_, false) };
    inline GetTrainingJobResponseBody& setIsTempAlgo(bool isTempAlgo) { DARABONBA_PTR_SET_VALUE(isTempAlgo_, isTempAlgo) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<GetTrainingJobResponseBody::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<GetTrainingJobResponseBody::Labels>) };
    inline vector<GetTrainingJobResponseBody::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<GetTrainingJobResponseBody::Labels>) };
    inline GetTrainingJobResponseBody& setLabels(const vector<GetTrainingJobResponseBody::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline GetTrainingJobResponseBody& setLabels(vector<GetTrainingJobResponseBody::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latestMetrics Field Functions 
    bool hasLatestMetrics() const { return this->latestMetrics_ != nullptr;};
    void deleteLatestMetrics() { this->latestMetrics_ = nullptr;};
    inline const vector<GetTrainingJobResponseBody::LatestMetrics> & getLatestMetrics() const { DARABONBA_PTR_GET_CONST(latestMetrics_, vector<GetTrainingJobResponseBody::LatestMetrics>) };
    inline vector<GetTrainingJobResponseBody::LatestMetrics> getLatestMetrics() { DARABONBA_PTR_GET(latestMetrics_, vector<GetTrainingJobResponseBody::LatestMetrics>) };
    inline GetTrainingJobResponseBody& setLatestMetrics(const vector<GetTrainingJobResponseBody::LatestMetrics> & latestMetrics) { DARABONBA_PTR_SET_VALUE(latestMetrics_, latestMetrics) };
    inline GetTrainingJobResponseBody& setLatestMetrics(vector<GetTrainingJobResponseBody::LatestMetrics> && latestMetrics) { DARABONBA_PTR_SET_RVALUE(latestMetrics_, latestMetrics) };


    // latestProgress Field Functions 
    bool hasLatestProgress() const { return this->latestProgress_ != nullptr;};
    void deleteLatestProgress() { this->latestProgress_ = nullptr;};
    inline const GetTrainingJobResponseBody::LatestProgress & getLatestProgress() const { DARABONBA_PTR_GET_CONST(latestProgress_, GetTrainingJobResponseBody::LatestProgress) };
    inline GetTrainingJobResponseBody::LatestProgress getLatestProgress() { DARABONBA_PTR_GET(latestProgress_, GetTrainingJobResponseBody::LatestProgress) };
    inline GetTrainingJobResponseBody& setLatestProgress(const GetTrainingJobResponseBody::LatestProgress & latestProgress) { DARABONBA_PTR_SET_VALUE(latestProgress_, latestProgress) };
    inline GetTrainingJobResponseBody& setLatestProgress(GetTrainingJobResponseBody::LatestProgress && latestProgress) { DARABONBA_PTR_SET_RVALUE(latestProgress_, latestProgress) };


    // outputChannels Field Functions 
    bool hasOutputChannels() const { return this->outputChannels_ != nullptr;};
    void deleteOutputChannels() { this->outputChannels_ = nullptr;};
    inline const vector<GetTrainingJobResponseBody::OutputChannels> & getOutputChannels() const { DARABONBA_PTR_GET_CONST(outputChannels_, vector<GetTrainingJobResponseBody::OutputChannels>) };
    inline vector<GetTrainingJobResponseBody::OutputChannels> getOutputChannels() { DARABONBA_PTR_GET(outputChannels_, vector<GetTrainingJobResponseBody::OutputChannels>) };
    inline GetTrainingJobResponseBody& setOutputChannels(const vector<GetTrainingJobResponseBody::OutputChannels> & outputChannels) { DARABONBA_PTR_SET_VALUE(outputChannels_, outputChannels) };
    inline GetTrainingJobResponseBody& setOutputChannels(vector<GetTrainingJobResponseBody::OutputChannels> && outputChannels) { DARABONBA_PTR_SET_RVALUE(outputChannels_, outputChannels) };


    // outputModel Field Functions 
    bool hasOutputModel() const { return this->outputModel_ != nullptr;};
    void deleteOutputModel() { this->outputModel_ = nullptr;};
    inline const GetTrainingJobResponseBody::OutputModel & getOutputModel() const { DARABONBA_PTR_GET_CONST(outputModel_, GetTrainingJobResponseBody::OutputModel) };
    inline GetTrainingJobResponseBody::OutputModel getOutputModel() { DARABONBA_PTR_GET(outputModel_, GetTrainingJobResponseBody::OutputModel) };
    inline GetTrainingJobResponseBody& setOutputModel(const GetTrainingJobResponseBody::OutputModel & outputModel) { DARABONBA_PTR_SET_VALUE(outputModel_, outputModel) };
    inline GetTrainingJobResponseBody& setOutputModel(GetTrainingJobResponseBody::OutputModel && outputModel) { DARABONBA_PTR_SET_RVALUE(outputModel_, outputModel) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetTrainingJobResponseBody& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // pythonRequirements Field Functions 
    bool hasPythonRequirements() const { return this->pythonRequirements_ != nullptr;};
    void deletePythonRequirements() { this->pythonRequirements_ = nullptr;};
    inline const vector<string> & getPythonRequirements() const { DARABONBA_PTR_GET_CONST(pythonRequirements_, vector<string>) };
    inline vector<string> getPythonRequirements() { DARABONBA_PTR_GET(pythonRequirements_, vector<string>) };
    inline GetTrainingJobResponseBody& setPythonRequirements(const vector<string> & pythonRequirements) { DARABONBA_PTR_SET_VALUE(pythonRequirements_, pythonRequirements) };
    inline GetTrainingJobResponseBody& setPythonRequirements(vector<string> && pythonRequirements) { DARABONBA_PTR_SET_RVALUE(pythonRequirements_, pythonRequirements) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline GetTrainingJobResponseBody& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string getReasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline GetTrainingJobResponseBody& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTrainingJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline GetTrainingJobResponseBody& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline const GetTrainingJobResponseBody::Scheduler & getScheduler() const { DARABONBA_PTR_GET_CONST(scheduler_, GetTrainingJobResponseBody::Scheduler) };
    inline GetTrainingJobResponseBody::Scheduler getScheduler() { DARABONBA_PTR_GET(scheduler_, GetTrainingJobResponseBody::Scheduler) };
    inline GetTrainingJobResponseBody& setScheduler(const GetTrainingJobResponseBody::Scheduler & scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };
    inline GetTrainingJobResponseBody& setScheduler(GetTrainingJobResponseBody::Scheduler && scheduler) { DARABONBA_PTR_SET_RVALUE(scheduler_, scheduler) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const JobSettings & getSettings() const { DARABONBA_PTR_GET_CONST(settings_, JobSettings) };
    inline JobSettings getSettings() { DARABONBA_PTR_GET(settings_, JobSettings) };
    inline GetTrainingJobResponseBody& setSettings(const JobSettings & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline GetTrainingJobResponseBody& setSettings(JobSettings && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTrainingJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusTransitions Field Functions 
    bool hasStatusTransitions() const { return this->statusTransitions_ != nullptr;};
    void deleteStatusTransitions() { this->statusTransitions_ = nullptr;};
    inline const vector<GetTrainingJobResponseBody::StatusTransitions> & getStatusTransitions() const { DARABONBA_PTR_GET_CONST(statusTransitions_, vector<GetTrainingJobResponseBody::StatusTransitions>) };
    inline vector<GetTrainingJobResponseBody::StatusTransitions> getStatusTransitions() { DARABONBA_PTR_GET(statusTransitions_, vector<GetTrainingJobResponseBody::StatusTransitions>) };
    inline GetTrainingJobResponseBody& setStatusTransitions(const vector<GetTrainingJobResponseBody::StatusTransitions> & statusTransitions) { DARABONBA_PTR_SET_VALUE(statusTransitions_, statusTransitions) };
    inline GetTrainingJobResponseBody& setStatusTransitions(vector<GetTrainingJobResponseBody::StatusTransitions> && statusTransitions) { DARABONBA_PTR_SET_RVALUE(statusTransitions_, statusTransitions) };


    // trainingJobDescription Field Functions 
    bool hasTrainingJobDescription() const { return this->trainingJobDescription_ != nullptr;};
    void deleteTrainingJobDescription() { this->trainingJobDescription_ = nullptr;};
    inline string getTrainingJobDescription() const { DARABONBA_PTR_GET_DEFAULT(trainingJobDescription_, "") };
    inline GetTrainingJobResponseBody& setTrainingJobDescription(string trainingJobDescription) { DARABONBA_PTR_SET_VALUE(trainingJobDescription_, trainingJobDescription) };


    // trainingJobId Field Functions 
    bool hasTrainingJobId() const { return this->trainingJobId_ != nullptr;};
    void deleteTrainingJobId() { this->trainingJobId_ = nullptr;};
    inline string getTrainingJobId() const { DARABONBA_PTR_GET_DEFAULT(trainingJobId_, "") };
    inline GetTrainingJobResponseBody& setTrainingJobId(string trainingJobId) { DARABONBA_PTR_SET_VALUE(trainingJobId_, trainingJobId) };


    // trainingJobName Field Functions 
    bool hasTrainingJobName() const { return this->trainingJobName_ != nullptr;};
    void deleteTrainingJobName() { this->trainingJobName_ = nullptr;};
    inline string getTrainingJobName() const { DARABONBA_PTR_GET_DEFAULT(trainingJobName_, "") };
    inline GetTrainingJobResponseBody& setTrainingJobName(string trainingJobName) { DARABONBA_PTR_SET_VALUE(trainingJobName_, trainingJobName) };


    // trainingJobUrl Field Functions 
    bool hasTrainingJobUrl() const { return this->trainingJobUrl_ != nullptr;};
    void deleteTrainingJobUrl() { this->trainingJobUrl_ = nullptr;};
    inline string getTrainingJobUrl() const { DARABONBA_PTR_GET_DEFAULT(trainingJobUrl_, "") };
    inline GetTrainingJobResponseBody& setTrainingJobUrl(string trainingJobUrl) { DARABONBA_PTR_SET_VALUE(trainingJobUrl_, trainingJobUrl) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetTrainingJobResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const GetTrainingJobResponseBody::UserVpc & getUserVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, GetTrainingJobResponseBody::UserVpc) };
    inline GetTrainingJobResponseBody::UserVpc getUserVpc() { DARABONBA_PTR_GET(userVpc_, GetTrainingJobResponseBody::UserVpc) };
    inline GetTrainingJobResponseBody& setUserVpc(const GetTrainingJobResponseBody::UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline GetTrainingJobResponseBody& setUserVpc(GetTrainingJobResponseBody::UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetTrainingJobResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> algorithmId_ {};
    shared_ptr<string> algorithmName_ {};
    shared_ptr<string> algorithmProvider_ {};
    shared_ptr<AlgorithmSpec> algorithmSpec_ {};
    shared_ptr<string> algorithmVersion_ {};
    shared_ptr<AssignNodeSpec> assignNodeSpec_ {};
    shared_ptr<GetTrainingJobResponseBody::ComputeResource> computeResource_ {};
    shared_ptr<int64_t> duration_ {};
    shared_ptr<map<string, string>> environments_ {};
    shared_ptr<GetTrainingJobResponseBody::ExperimentConfig> experimentConfig_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    shared_ptr<vector<GetTrainingJobResponseBody::HyperParameters>> hyperParameters_ {};
    shared_ptr<vector<GetTrainingJobResponseBody::InputChannels>> inputChannels_ {};
    shared_ptr<vector<GetTrainingJobResponseBody::Instances>> instances_ {};
    shared_ptr<bool> isTempAlgo_ {};
    shared_ptr<vector<GetTrainingJobResponseBody::Labels>> labels_ {};
    shared_ptr<vector<GetTrainingJobResponseBody::LatestMetrics>> latestMetrics_ {};
    shared_ptr<GetTrainingJobResponseBody::LatestProgress> latestProgress_ {};
    shared_ptr<vector<GetTrainingJobResponseBody::OutputChannels>> outputChannels_ {};
    shared_ptr<GetTrainingJobResponseBody::OutputModel> outputModel_ {};
    shared_ptr<int32_t> priority_ {};
    shared_ptr<vector<string>> pythonRequirements_ {};
    shared_ptr<string> reasonCode_ {};
    shared_ptr<string> reasonMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> roleArn_ {};
    shared_ptr<GetTrainingJobResponseBody::Scheduler> scheduler_ {};
    shared_ptr<JobSettings> settings_ {};
    shared_ptr<string> status_ {};
    shared_ptr<vector<GetTrainingJobResponseBody::StatusTransitions>> statusTransitions_ {};
    shared_ptr<string> trainingJobDescription_ {};
    shared_ptr<string> trainingJobId_ {};
    shared_ptr<string> trainingJobName_ {};
    shared_ptr<string> trainingJobUrl_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<GetTrainingJobResponseBody::UserVpc> userVpc_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
