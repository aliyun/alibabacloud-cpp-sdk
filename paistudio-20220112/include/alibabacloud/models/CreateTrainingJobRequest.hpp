// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAININGJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAININGJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AlgorithmSpec.hpp>
#include <alibabacloud/models/AssignNodeSpec.hpp>
#include <alibabacloud/models/Location.hpp>
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
  class CreateTrainingJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrainingJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmName, algorithmName_);
      DARABONBA_PTR_TO_JSON(AlgorithmProvider, algorithmProvider_);
      DARABONBA_PTR_TO_JSON(AlgorithmSpec, algorithmSpec_);
      DARABONBA_PTR_TO_JSON(AlgorithmVersion, algorithmVersion_);
      DARABONBA_PTR_TO_JSON(AssignNodeSpec, assignNodeSpec_);
      DARABONBA_PTR_TO_JSON(CodeDir, codeDir_);
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(Environments, environments_);
      DARABONBA_PTR_TO_JSON(ExperimentConfig, experimentConfig_);
      DARABONBA_PTR_TO_JSON(HyperParameters, hyperParameters_);
      DARABONBA_PTR_TO_JSON(InputChannels, inputChannels_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(OutputChannels, outputChannels_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(PythonRequirements, pythonRequirements_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
      DARABONBA_PTR_TO_JSON(TrainingJobDescription, trainingJobDescription_);
      DARABONBA_PTR_TO_JSON(TrainingJobName, trainingJobName_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrainingJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmName, algorithmName_);
      DARABONBA_PTR_FROM_JSON(AlgorithmProvider, algorithmProvider_);
      DARABONBA_PTR_FROM_JSON(AlgorithmSpec, algorithmSpec_);
      DARABONBA_PTR_FROM_JSON(AlgorithmVersion, algorithmVersion_);
      DARABONBA_PTR_FROM_JSON(AssignNodeSpec, assignNodeSpec_);
      DARABONBA_PTR_FROM_JSON(CodeDir, codeDir_);
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(Environments, environments_);
      DARABONBA_PTR_FROM_JSON(ExperimentConfig, experimentConfig_);
      DARABONBA_PTR_FROM_JSON(HyperParameters, hyperParameters_);
      DARABONBA_PTR_FROM_JSON(InputChannels, inputChannels_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(OutputChannels, outputChannels_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(PythonRequirements, pythonRequirements_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
      DARABONBA_PTR_FROM_JSON(TrainingJobDescription, trainingJobDescription_);
      DARABONBA_PTR_FROM_JSON(TrainingJobName, trainingJobName_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateTrainingJobRequest() = default ;
    CreateTrainingJobRequest(const CreateTrainingJobRequest &) = default ;
    CreateTrainingJobRequest(CreateTrainingJobRequest &&) = default ;
    CreateTrainingJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrainingJobRequest() = default ;
    CreateTrainingJobRequest& operator=(const CreateTrainingJobRequest &) = default ;
    CreateTrainingJobRequest& operator=(CreateTrainingJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserVpc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserVpc& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultRoute, defaultRoute_);
        DARABONBA_PTR_TO_JSON(ExtendedCIDRs, extendedCIDRs_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, UserVpc& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultRoute, defaultRoute_);
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
      virtual bool empty() const override { return this->defaultRoute_ == nullptr
        && this->extendedCIDRs_ == nullptr && this->securityGroupId_ == nullptr && this->switchId_ == nullptr && this->vpcId_ == nullptr; };
      // defaultRoute Field Functions 
      bool hasDefaultRoute() const { return this->defaultRoute_ != nullptr;};
      void deleteDefaultRoute() { this->defaultRoute_ = nullptr;};
      inline string getDefaultRoute() const { DARABONBA_PTR_GET_DEFAULT(defaultRoute_, "") };
      inline UserVpc& setDefaultRoute(string defaultRoute) { DARABONBA_PTR_SET_VALUE(defaultRoute_, defaultRoute) };


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
      shared_ptr<string> defaultRoute_ {};
      shared_ptr<vector<string>> extendedCIDRs_ {};
      shared_ptr<string> securityGroupId_ {};
      shared_ptr<string> switchId_ {};
      // VPC ID。
      shared_ptr<string> vpcId_ {};
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
      inline int64_t getMaxRunningTimeInMinutes() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeInMinutes_, 0L) };
      inline Scheduler& setMaxRunningTimeInMinutes(int64_t maxRunningTimeInMinutes) { DARABONBA_PTR_SET_VALUE(maxRunningTimeInMinutes_, maxRunningTimeInMinutes) };


      // maxRunningTimeInSeconds Field Functions 
      bool hasMaxRunningTimeInSeconds() const { return this->maxRunningTimeInSeconds_ != nullptr;};
      void deleteMaxRunningTimeInSeconds() { this->maxRunningTimeInSeconds_ = nullptr;};
      inline int64_t getMaxRunningTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeInSeconds_, 0L) };
      inline Scheduler& setMaxRunningTimeInSeconds(int64_t maxRunningTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxRunningTimeInSeconds_, maxRunningTimeInSeconds) };


    protected:
      shared_ptr<int64_t> maxRunningTimeInMinutes_ {};
      shared_ptr<int64_t> maxRunningTimeInSeconds_ {};
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
      };
      friend void from_json(const Darabonba::Json& j, ExperimentConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
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
      virtual bool empty() const override { return this->experimentId_ == nullptr; };
      // experimentId Field Functions 
      bool hasExperimentId() const { return this->experimentId_ != nullptr;};
      void deleteExperimentId() { this->experimentId_ = nullptr;};
      inline string getExperimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
      inline ExperimentConfig& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


    protected:
      shared_ptr<string> experimentId_ {};
    };

    class ComputeResource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComputeResource& obj) { 
        DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
        DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
        DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(SpotSpec, spotSpec_);
        DARABONBA_PTR_TO_JSON(UseSpotInstance, useSpotInstance_);
      };
      friend void from_json(const Darabonba::Json& j, ComputeResource& obj) { 
        DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
        DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
        DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
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
        && this->ecsSpec_ == nullptr && this->instanceCount_ == nullptr && this->instanceSpec_ == nullptr && this->resourceId_ == nullptr && this->spotSpec_ == nullptr
        && this->useSpotInstance_ == nullptr; };
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
      shared_ptr<ComputeResource::SpotSpec> spotSpec_ {};
      shared_ptr<bool> useSpotInstance_ {};
    };

    virtual bool empty() const override { return this->algorithmName_ == nullptr
        && this->algorithmProvider_ == nullptr && this->algorithmSpec_ == nullptr && this->algorithmVersion_ == nullptr && this->assignNodeSpec_ == nullptr && this->codeDir_ == nullptr
        && this->computeResource_ == nullptr && this->environments_ == nullptr && this->experimentConfig_ == nullptr && this->hyperParameters_ == nullptr && this->inputChannels_ == nullptr
        && this->labels_ == nullptr && this->outputChannels_ == nullptr && this->priority_ == nullptr && this->pythonRequirements_ == nullptr && this->roleArn_ == nullptr
        && this->scheduler_ == nullptr && this->settings_ == nullptr && this->trainingJobDescription_ == nullptr && this->trainingJobName_ == nullptr && this->userVpc_ == nullptr
        && this->workspaceId_ == nullptr; };
    // algorithmName Field Functions 
    bool hasAlgorithmName() const { return this->algorithmName_ != nullptr;};
    void deleteAlgorithmName() { this->algorithmName_ = nullptr;};
    inline string getAlgorithmName() const { DARABONBA_PTR_GET_DEFAULT(algorithmName_, "") };
    inline CreateTrainingJobRequest& setAlgorithmName(string algorithmName) { DARABONBA_PTR_SET_VALUE(algorithmName_, algorithmName) };


    // algorithmProvider Field Functions 
    bool hasAlgorithmProvider() const { return this->algorithmProvider_ != nullptr;};
    void deleteAlgorithmProvider() { this->algorithmProvider_ = nullptr;};
    inline string getAlgorithmProvider() const { DARABONBA_PTR_GET_DEFAULT(algorithmProvider_, "") };
    inline CreateTrainingJobRequest& setAlgorithmProvider(string algorithmProvider) { DARABONBA_PTR_SET_VALUE(algorithmProvider_, algorithmProvider) };


    // algorithmSpec Field Functions 
    bool hasAlgorithmSpec() const { return this->algorithmSpec_ != nullptr;};
    void deleteAlgorithmSpec() { this->algorithmSpec_ = nullptr;};
    inline const AlgorithmSpec & getAlgorithmSpec() const { DARABONBA_PTR_GET_CONST(algorithmSpec_, AlgorithmSpec) };
    inline AlgorithmSpec getAlgorithmSpec() { DARABONBA_PTR_GET(algorithmSpec_, AlgorithmSpec) };
    inline CreateTrainingJobRequest& setAlgorithmSpec(const AlgorithmSpec & algorithmSpec) { DARABONBA_PTR_SET_VALUE(algorithmSpec_, algorithmSpec) };
    inline CreateTrainingJobRequest& setAlgorithmSpec(AlgorithmSpec && algorithmSpec) { DARABONBA_PTR_SET_RVALUE(algorithmSpec_, algorithmSpec) };


    // algorithmVersion Field Functions 
    bool hasAlgorithmVersion() const { return this->algorithmVersion_ != nullptr;};
    void deleteAlgorithmVersion() { this->algorithmVersion_ = nullptr;};
    inline string getAlgorithmVersion() const { DARABONBA_PTR_GET_DEFAULT(algorithmVersion_, "") };
    inline CreateTrainingJobRequest& setAlgorithmVersion(string algorithmVersion) { DARABONBA_PTR_SET_VALUE(algorithmVersion_, algorithmVersion) };


    // assignNodeSpec Field Functions 
    bool hasAssignNodeSpec() const { return this->assignNodeSpec_ != nullptr;};
    void deleteAssignNodeSpec() { this->assignNodeSpec_ = nullptr;};
    inline const AssignNodeSpec & getAssignNodeSpec() const { DARABONBA_PTR_GET_CONST(assignNodeSpec_, AssignNodeSpec) };
    inline AssignNodeSpec getAssignNodeSpec() { DARABONBA_PTR_GET(assignNodeSpec_, AssignNodeSpec) };
    inline CreateTrainingJobRequest& setAssignNodeSpec(const AssignNodeSpec & assignNodeSpec) { DARABONBA_PTR_SET_VALUE(assignNodeSpec_, assignNodeSpec) };
    inline CreateTrainingJobRequest& setAssignNodeSpec(AssignNodeSpec && assignNodeSpec) { DARABONBA_PTR_SET_RVALUE(assignNodeSpec_, assignNodeSpec) };


    // codeDir Field Functions 
    bool hasCodeDir() const { return this->codeDir_ != nullptr;};
    void deleteCodeDir() { this->codeDir_ = nullptr;};
    inline const Location & getCodeDir() const { DARABONBA_PTR_GET_CONST(codeDir_, Location) };
    inline Location getCodeDir() { DARABONBA_PTR_GET(codeDir_, Location) };
    inline CreateTrainingJobRequest& setCodeDir(const Location & codeDir) { DARABONBA_PTR_SET_VALUE(codeDir_, codeDir) };
    inline CreateTrainingJobRequest& setCodeDir(Location && codeDir) { DARABONBA_PTR_SET_RVALUE(codeDir_, codeDir) };


    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline const CreateTrainingJobRequest::ComputeResource & getComputeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, CreateTrainingJobRequest::ComputeResource) };
    inline CreateTrainingJobRequest::ComputeResource getComputeResource() { DARABONBA_PTR_GET(computeResource_, CreateTrainingJobRequest::ComputeResource) };
    inline CreateTrainingJobRequest& setComputeResource(const CreateTrainingJobRequest::ComputeResource & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
    inline CreateTrainingJobRequest& setComputeResource(CreateTrainingJobRequest::ComputeResource && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


    // environments Field Functions 
    bool hasEnvironments() const { return this->environments_ != nullptr;};
    void deleteEnvironments() { this->environments_ = nullptr;};
    inline const map<string, string> & getEnvironments() const { DARABONBA_PTR_GET_CONST(environments_, map<string, string>) };
    inline map<string, string> getEnvironments() { DARABONBA_PTR_GET(environments_, map<string, string>) };
    inline CreateTrainingJobRequest& setEnvironments(const map<string, string> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
    inline CreateTrainingJobRequest& setEnvironments(map<string, string> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


    // experimentConfig Field Functions 
    bool hasExperimentConfig() const { return this->experimentConfig_ != nullptr;};
    void deleteExperimentConfig() { this->experimentConfig_ = nullptr;};
    inline const CreateTrainingJobRequest::ExperimentConfig & getExperimentConfig() const { DARABONBA_PTR_GET_CONST(experimentConfig_, CreateTrainingJobRequest::ExperimentConfig) };
    inline CreateTrainingJobRequest::ExperimentConfig getExperimentConfig() { DARABONBA_PTR_GET(experimentConfig_, CreateTrainingJobRequest::ExperimentConfig) };
    inline CreateTrainingJobRequest& setExperimentConfig(const CreateTrainingJobRequest::ExperimentConfig & experimentConfig) { DARABONBA_PTR_SET_VALUE(experimentConfig_, experimentConfig) };
    inline CreateTrainingJobRequest& setExperimentConfig(CreateTrainingJobRequest::ExperimentConfig && experimentConfig) { DARABONBA_PTR_SET_RVALUE(experimentConfig_, experimentConfig) };


    // hyperParameters Field Functions 
    bool hasHyperParameters() const { return this->hyperParameters_ != nullptr;};
    void deleteHyperParameters() { this->hyperParameters_ = nullptr;};
    inline const vector<CreateTrainingJobRequest::HyperParameters> & getHyperParameters() const { DARABONBA_PTR_GET_CONST(hyperParameters_, vector<CreateTrainingJobRequest::HyperParameters>) };
    inline vector<CreateTrainingJobRequest::HyperParameters> getHyperParameters() { DARABONBA_PTR_GET(hyperParameters_, vector<CreateTrainingJobRequest::HyperParameters>) };
    inline CreateTrainingJobRequest& setHyperParameters(const vector<CreateTrainingJobRequest::HyperParameters> & hyperParameters) { DARABONBA_PTR_SET_VALUE(hyperParameters_, hyperParameters) };
    inline CreateTrainingJobRequest& setHyperParameters(vector<CreateTrainingJobRequest::HyperParameters> && hyperParameters) { DARABONBA_PTR_SET_RVALUE(hyperParameters_, hyperParameters) };


    // inputChannels Field Functions 
    bool hasInputChannels() const { return this->inputChannels_ != nullptr;};
    void deleteInputChannels() { this->inputChannels_ = nullptr;};
    inline const vector<CreateTrainingJobRequest::InputChannels> & getInputChannels() const { DARABONBA_PTR_GET_CONST(inputChannels_, vector<CreateTrainingJobRequest::InputChannels>) };
    inline vector<CreateTrainingJobRequest::InputChannels> getInputChannels() { DARABONBA_PTR_GET(inputChannels_, vector<CreateTrainingJobRequest::InputChannels>) };
    inline CreateTrainingJobRequest& setInputChannels(const vector<CreateTrainingJobRequest::InputChannels> & inputChannels) { DARABONBA_PTR_SET_VALUE(inputChannels_, inputChannels) };
    inline CreateTrainingJobRequest& setInputChannels(vector<CreateTrainingJobRequest::InputChannels> && inputChannels) { DARABONBA_PTR_SET_RVALUE(inputChannels_, inputChannels) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<CreateTrainingJobRequest::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<CreateTrainingJobRequest::Labels>) };
    inline vector<CreateTrainingJobRequest::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<CreateTrainingJobRequest::Labels>) };
    inline CreateTrainingJobRequest& setLabels(const vector<CreateTrainingJobRequest::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateTrainingJobRequest& setLabels(vector<CreateTrainingJobRequest::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // outputChannels Field Functions 
    bool hasOutputChannels() const { return this->outputChannels_ != nullptr;};
    void deleteOutputChannels() { this->outputChannels_ = nullptr;};
    inline const vector<CreateTrainingJobRequest::OutputChannels> & getOutputChannels() const { DARABONBA_PTR_GET_CONST(outputChannels_, vector<CreateTrainingJobRequest::OutputChannels>) };
    inline vector<CreateTrainingJobRequest::OutputChannels> getOutputChannels() { DARABONBA_PTR_GET(outputChannels_, vector<CreateTrainingJobRequest::OutputChannels>) };
    inline CreateTrainingJobRequest& setOutputChannels(const vector<CreateTrainingJobRequest::OutputChannels> & outputChannels) { DARABONBA_PTR_SET_VALUE(outputChannels_, outputChannels) };
    inline CreateTrainingJobRequest& setOutputChannels(vector<CreateTrainingJobRequest::OutputChannels> && outputChannels) { DARABONBA_PTR_SET_RVALUE(outputChannels_, outputChannels) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateTrainingJobRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // pythonRequirements Field Functions 
    bool hasPythonRequirements() const { return this->pythonRequirements_ != nullptr;};
    void deletePythonRequirements() { this->pythonRequirements_ = nullptr;};
    inline const vector<string> & getPythonRequirements() const { DARABONBA_PTR_GET_CONST(pythonRequirements_, vector<string>) };
    inline vector<string> getPythonRequirements() { DARABONBA_PTR_GET(pythonRequirements_, vector<string>) };
    inline CreateTrainingJobRequest& setPythonRequirements(const vector<string> & pythonRequirements) { DARABONBA_PTR_SET_VALUE(pythonRequirements_, pythonRequirements) };
    inline CreateTrainingJobRequest& setPythonRequirements(vector<string> && pythonRequirements) { DARABONBA_PTR_SET_RVALUE(pythonRequirements_, pythonRequirements) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline CreateTrainingJobRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline const CreateTrainingJobRequest::Scheduler & getScheduler() const { DARABONBA_PTR_GET_CONST(scheduler_, CreateTrainingJobRequest::Scheduler) };
    inline CreateTrainingJobRequest::Scheduler getScheduler() { DARABONBA_PTR_GET(scheduler_, CreateTrainingJobRequest::Scheduler) };
    inline CreateTrainingJobRequest& setScheduler(const CreateTrainingJobRequest::Scheduler & scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };
    inline CreateTrainingJobRequest& setScheduler(CreateTrainingJobRequest::Scheduler && scheduler) { DARABONBA_PTR_SET_RVALUE(scheduler_, scheduler) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const JobSettings & getSettings() const { DARABONBA_PTR_GET_CONST(settings_, JobSettings) };
    inline JobSettings getSettings() { DARABONBA_PTR_GET(settings_, JobSettings) };
    inline CreateTrainingJobRequest& setSettings(const JobSettings & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline CreateTrainingJobRequest& setSettings(JobSettings && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


    // trainingJobDescription Field Functions 
    bool hasTrainingJobDescription() const { return this->trainingJobDescription_ != nullptr;};
    void deleteTrainingJobDescription() { this->trainingJobDescription_ = nullptr;};
    inline string getTrainingJobDescription() const { DARABONBA_PTR_GET_DEFAULT(trainingJobDescription_, "") };
    inline CreateTrainingJobRequest& setTrainingJobDescription(string trainingJobDescription) { DARABONBA_PTR_SET_VALUE(trainingJobDescription_, trainingJobDescription) };


    // trainingJobName Field Functions 
    bool hasTrainingJobName() const { return this->trainingJobName_ != nullptr;};
    void deleteTrainingJobName() { this->trainingJobName_ = nullptr;};
    inline string getTrainingJobName() const { DARABONBA_PTR_GET_DEFAULT(trainingJobName_, "") };
    inline CreateTrainingJobRequest& setTrainingJobName(string trainingJobName) { DARABONBA_PTR_SET_VALUE(trainingJobName_, trainingJobName) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const CreateTrainingJobRequest::UserVpc & getUserVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, CreateTrainingJobRequest::UserVpc) };
    inline CreateTrainingJobRequest::UserVpc getUserVpc() { DARABONBA_PTR_GET(userVpc_, CreateTrainingJobRequest::UserVpc) };
    inline CreateTrainingJobRequest& setUserVpc(const CreateTrainingJobRequest::UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline CreateTrainingJobRequest& setUserVpc(CreateTrainingJobRequest::UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateTrainingJobRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> algorithmName_ {};
    shared_ptr<string> algorithmProvider_ {};
    shared_ptr<AlgorithmSpec> algorithmSpec_ {};
    shared_ptr<string> algorithmVersion_ {};
    shared_ptr<AssignNodeSpec> assignNodeSpec_ {};
    shared_ptr<Location> codeDir_ {};
    shared_ptr<CreateTrainingJobRequest::ComputeResource> computeResource_ {};
    shared_ptr<map<string, string>> environments_ {};
    shared_ptr<CreateTrainingJobRequest::ExperimentConfig> experimentConfig_ {};
    shared_ptr<vector<CreateTrainingJobRequest::HyperParameters>> hyperParameters_ {};
    shared_ptr<vector<CreateTrainingJobRequest::InputChannels>> inputChannels_ {};
    shared_ptr<vector<CreateTrainingJobRequest::Labels>> labels_ {};
    shared_ptr<vector<CreateTrainingJobRequest::OutputChannels>> outputChannels_ {};
    shared_ptr<int32_t> priority_ {};
    shared_ptr<vector<string>> pythonRequirements_ {};
    shared_ptr<string> roleArn_ {};
    shared_ptr<CreateTrainingJobRequest::Scheduler> scheduler_ {};
    shared_ptr<JobSettings> settings_ {};
    shared_ptr<string> trainingJobDescription_ {};
    // This parameter is required.
    shared_ptr<string> trainingJobName_ {};
    shared_ptr<CreateTrainingJobRequest::UserVpc> userVpc_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
