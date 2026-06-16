// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCEREFRESHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCEREFRESHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class StartInstanceRefreshRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartInstanceRefreshRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckpointPauseTime, checkpointPauseTime_);
      DARABONBA_PTR_TO_JSON(Checkpoints, checkpoints_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DesiredConfiguration, desiredConfiguration_);
      DARABONBA_PTR_TO_JSON(MaxHealthyPercentage, maxHealthyPercentage_);
      DARABONBA_PTR_TO_JSON(MinHealthyPercentage, minHealthyPercentage_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(SkipMatching, skipMatching_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstanceRefreshRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckpointPauseTime, checkpointPauseTime_);
      DARABONBA_PTR_FROM_JSON(Checkpoints, checkpoints_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DesiredConfiguration, desiredConfiguration_);
      DARABONBA_PTR_FROM_JSON(MaxHealthyPercentage, maxHealthyPercentage_);
      DARABONBA_PTR_FROM_JSON(MinHealthyPercentage, minHealthyPercentage_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(SkipMatching, skipMatching_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    StartInstanceRefreshRequest() = default ;
    StartInstanceRefreshRequest(const StartInstanceRefreshRequest &) = default ;
    StartInstanceRefreshRequest(StartInstanceRefreshRequest &&) = default ;
    StartInstanceRefreshRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartInstanceRefreshRequest() = default ;
    StartInstanceRefreshRequest& operator=(const StartInstanceRefreshRequest &) = default ;
    StartInstanceRefreshRequest& operator=(StartInstanceRefreshRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DesiredConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DesiredConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(Containers, containers_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
        DARABONBA_PTR_TO_JSON(LaunchTemplateOverrides, launchTemplateOverrides_);
        DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
        DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
      };
      friend void from_json(const Darabonba::Json& j, DesiredConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(Containers, containers_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
        DARABONBA_PTR_FROM_JSON(LaunchTemplateOverrides, launchTemplateOverrides_);
        DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
        DARABONBA_PTR_FROM_JSON(ScalingConfigurationId, scalingConfigurationId_);
      };
      DesiredConfiguration() = default ;
      DesiredConfiguration(const DesiredConfiguration &) = default ;
      DesiredConfiguration(DesiredConfiguration &&) = default ;
      DesiredConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DesiredConfiguration() = default ;
      DesiredConfiguration& operator=(const DesiredConfiguration &) = default ;
      DesiredConfiguration& operator=(DesiredConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LaunchTemplateOverrides : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LaunchTemplateOverrides& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        };
        friend void from_json(const Darabonba::Json& j, LaunchTemplateOverrides& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        };
        LaunchTemplateOverrides() = default ;
        LaunchTemplateOverrides(const LaunchTemplateOverrides &) = default ;
        LaunchTemplateOverrides(LaunchTemplateOverrides &&) = default ;
        LaunchTemplateOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LaunchTemplateOverrides() = default ;
        LaunchTemplateOverrides& operator=(const LaunchTemplateOverrides &) = default ;
        LaunchTemplateOverrides& operator=(LaunchTemplateOverrides &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceType_ == nullptr; };
        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline LaunchTemplateOverrides& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      protected:
        // The instance type that overrides the instance type specified in the launch template.
        // 
        // > This parameter takes effect only when the LaunchTemplateId parameter specifies a launch template.
        shared_ptr<string> instanceType_ {};
      };

      class Containers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Containers& obj) { 
          DARABONBA_PTR_TO_JSON(Args, args_);
          DARABONBA_PTR_TO_JSON(Commands, commands_);
          DARABONBA_PTR_TO_JSON(EnvironmentVars, environmentVars_);
          DARABONBA_PTR_TO_JSON(Image, image_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Containers& obj) { 
          DARABONBA_PTR_FROM_JSON(Args, args_);
          DARABONBA_PTR_FROM_JSON(Commands, commands_);
          DARABONBA_PTR_FROM_JSON(EnvironmentVars, environmentVars_);
          DARABONBA_PTR_FROM_JSON(Image, image_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Containers() = default ;
        Containers(const Containers &) = default ;
        Containers(Containers &&) = default ;
        Containers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Containers() = default ;
        Containers& operator=(const Containers &) = default ;
        Containers& operator=(Containers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EnvironmentVars : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EnvironmentVars& obj) { 
            DARABONBA_PTR_TO_JSON(FieldRefFieldPath, fieldRefFieldPath_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, EnvironmentVars& obj) { 
            DARABONBA_PTR_FROM_JSON(FieldRefFieldPath, fieldRefFieldPath_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          EnvironmentVars() = default ;
          EnvironmentVars(const EnvironmentVars &) = default ;
          EnvironmentVars(EnvironmentVars &&) = default ;
          EnvironmentVars(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EnvironmentVars() = default ;
          EnvironmentVars& operator=(const EnvironmentVars &) = default ;
          EnvironmentVars& operator=(EnvironmentVars &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fieldRefFieldPath_ == nullptr
        && this->key_ == nullptr && this->value_ == nullptr; };
          // fieldRefFieldPath Field Functions 
          bool hasFieldRefFieldPath() const { return this->fieldRefFieldPath_ != nullptr;};
          void deleteFieldRefFieldPath() { this->fieldRefFieldPath_ = nullptr;};
          inline string getFieldRefFieldPath() const { DARABONBA_PTR_GET_DEFAULT(fieldRefFieldPath_, "") };
          inline EnvironmentVars& setFieldRefFieldPath(string fieldRefFieldPath) { DARABONBA_PTR_SET_VALUE(fieldRefFieldPath_, fieldRefFieldPath) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline EnvironmentVars& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline EnvironmentVars& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // > This parameter is not available for use.
          shared_ptr<string> fieldRefFieldPath_ {};
          // The name of the environment variable. The name must be 1 to 128 characters in length and can contain digits, letters, and underscores (_). It cannot start with a digit.
          shared_ptr<string> key_ {};
          // The value of the environment variable. The value can be 0 to 256 characters in length.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->args_ == nullptr
        && this->commands_ == nullptr && this->environmentVars_ == nullptr && this->image_ == nullptr && this->name_ == nullptr; };
        // args Field Functions 
        bool hasArgs() const { return this->args_ != nullptr;};
        void deleteArgs() { this->args_ = nullptr;};
        inline const vector<string> & getArgs() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
        inline vector<string> getArgs() { DARABONBA_PTR_GET(args_, vector<string>) };
        inline Containers& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
        inline Containers& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


        // commands Field Functions 
        bool hasCommands() const { return this->commands_ != nullptr;};
        void deleteCommands() { this->commands_ = nullptr;};
        inline const vector<string> & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
        inline vector<string> getCommands() { DARABONBA_PTR_GET(commands_, vector<string>) };
        inline Containers& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
        inline Containers& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


        // environmentVars Field Functions 
        bool hasEnvironmentVars() const { return this->environmentVars_ != nullptr;};
        void deleteEnvironmentVars() { this->environmentVars_ = nullptr;};
        inline const vector<Containers::EnvironmentVars> & getEnvironmentVars() const { DARABONBA_PTR_GET_CONST(environmentVars_, vector<Containers::EnvironmentVars>) };
        inline vector<Containers::EnvironmentVars> getEnvironmentVars() { DARABONBA_PTR_GET(environmentVars_, vector<Containers::EnvironmentVars>) };
        inline Containers& setEnvironmentVars(const vector<Containers::EnvironmentVars> & environmentVars) { DARABONBA_PTR_SET_VALUE(environmentVars_, environmentVars) };
        inline Containers& setEnvironmentVars(vector<Containers::EnvironmentVars> && environmentVars) { DARABONBA_PTR_SET_RVALUE(environmentVars_, environmentVars) };


        // image Field Functions 
        bool hasImage() const { return this->image_ != nullptr;};
        void deleteImage() { this->image_ = nullptr;};
        inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
        inline Containers& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Containers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The arguments of the container startup command. You can specify up to 10 arguments.
        shared_ptr<vector<string>> args_ {};
        // The startup commands of the container. You can specify up to 20 commands. Each command can contain up to 256 characters.
        shared_ptr<vector<string>> commands_ {};
        // The environment variable information.
        shared_ptr<vector<Containers::EnvironmentVars>> environmentVars_ {};
        // The container image.
        shared_ptr<string> image_ {};
        // The custom container name.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->containers_ == nullptr
        && this->imageId_ == nullptr && this->launchTemplateId_ == nullptr && this->launchTemplateOverrides_ == nullptr && this->launchTemplateVersion_ == nullptr && this->scalingConfigurationId_ == nullptr; };
      // containers Field Functions 
      bool hasContainers() const { return this->containers_ != nullptr;};
      void deleteContainers() { this->containers_ = nullptr;};
      inline const vector<DesiredConfiguration::Containers> & getContainers() const { DARABONBA_PTR_GET_CONST(containers_, vector<DesiredConfiguration::Containers>) };
      inline vector<DesiredConfiguration::Containers> getContainers() { DARABONBA_PTR_GET(containers_, vector<DesiredConfiguration::Containers>) };
      inline DesiredConfiguration& setContainers(const vector<DesiredConfiguration::Containers> & containers) { DARABONBA_PTR_SET_VALUE(containers_, containers) };
      inline DesiredConfiguration& setContainers(vector<DesiredConfiguration::Containers> && containers) { DARABONBA_PTR_SET_RVALUE(containers_, containers) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline DesiredConfiguration& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // launchTemplateId Field Functions 
      bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
      void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
      inline string getLaunchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
      inline DesiredConfiguration& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


      // launchTemplateOverrides Field Functions 
      bool hasLaunchTemplateOverrides() const { return this->launchTemplateOverrides_ != nullptr;};
      void deleteLaunchTemplateOverrides() { this->launchTemplateOverrides_ = nullptr;};
      inline const vector<DesiredConfiguration::LaunchTemplateOverrides> & getLaunchTemplateOverrides() const { DARABONBA_PTR_GET_CONST(launchTemplateOverrides_, vector<DesiredConfiguration::LaunchTemplateOverrides>) };
      inline vector<DesiredConfiguration::LaunchTemplateOverrides> getLaunchTemplateOverrides() { DARABONBA_PTR_GET(launchTemplateOverrides_, vector<DesiredConfiguration::LaunchTemplateOverrides>) };
      inline DesiredConfiguration& setLaunchTemplateOverrides(const vector<DesiredConfiguration::LaunchTemplateOverrides> & launchTemplateOverrides) { DARABONBA_PTR_SET_VALUE(launchTemplateOverrides_, launchTemplateOverrides) };
      inline DesiredConfiguration& setLaunchTemplateOverrides(vector<DesiredConfiguration::LaunchTemplateOverrides> && launchTemplateOverrides) { DARABONBA_PTR_SET_RVALUE(launchTemplateOverrides_, launchTemplateOverrides) };


      // launchTemplateVersion Field Functions 
      bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
      void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
      inline string getLaunchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
      inline DesiredConfiguration& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


      // scalingConfigurationId Field Functions 
      bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
      void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
      inline string getScalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
      inline DesiredConfiguration& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


    protected:
      // The list of containers included in the instance.
      // 
      // > - This parameter is supported only for Elastic Container Instance (ECI) scaling groups.
      // > - Only the container configurations that match `Container.Name` in the current scaling configuration container list are refreshed.
      shared_ptr<vector<DesiredConfiguration::Containers>> containers_ {};
      // The image ID.
      // 
      // 
      // 
      // > - After the instance refresh task is completed, the image in the currently active configuration of the scaling group is updated to this image.
      // > - This parameter is not supported when the instance configuration source of the scaling group is a launch template.
      shared_ptr<string> imageId_ {};
      // The ID of the launch template from which the scaling group obtains launch configuration information.
      shared_ptr<string> launchTemplateId_ {};
      // The instance type information that overrides the launch template.
      shared_ptr<vector<DesiredConfiguration::LaunchTemplateOverrides>> launchTemplateOverrides_ {};
      // The version of the launch template. Valid values:
      // 
      // - A fixed template version number.
      // - Default: always uses the default version of the template.
      // - Latest: always uses the latest version of the template.
      // 
      // > When the version is set to Default or Latest, the instance refresh task does not support rollback.
      shared_ptr<string> launchTemplateVersion_ {};
      // The ID of the scaling configuration.
      shared_ptr<string> scalingConfigurationId_ {};
    };

    class Checkpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Checkpoints& obj) { 
        DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      };
      friend void from_json(const Darabonba::Json& j, Checkpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      };
      Checkpoints() = default ;
      Checkpoints(const Checkpoints &) = default ;
      Checkpoints(Checkpoints &&) = default ;
      Checkpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Checkpoints() = default ;
      Checkpoints& operator=(const Checkpoints &) = default ;
      Checkpoints& operator=(Checkpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->percentage_ == nullptr; };
      // percentage Field Functions 
      bool hasPercentage() const { return this->percentage_ != nullptr;};
      void deletePercentage() { this->percentage_ = nullptr;};
      inline int32_t getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
      inline Checkpoints& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    protected:
      // The percentage of new instances relative to the total number of instances in the scaling group. The task is automatically paused when this percentage is reached. Valid values: 1 to 100 (%).
      // 
      // > The values must be specified in ascending order, and the last value must be 100.
      shared_ptr<int32_t> percentage_ {};
    };

    virtual bool empty() const override { return this->checkpointPauseTime_ == nullptr
        && this->checkpoints_ == nullptr && this->clientToken_ == nullptr && this->desiredConfiguration_ == nullptr && this->maxHealthyPercentage_ == nullptr && this->minHealthyPercentage_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->scalingGroupId_ == nullptr && this->skipMatching_ == nullptr
        && this->strategy_ == nullptr; };
    // checkpointPauseTime Field Functions 
    bool hasCheckpointPauseTime() const { return this->checkpointPauseTime_ != nullptr;};
    void deleteCheckpointPauseTime() { this->checkpointPauseTime_ = nullptr;};
    inline int32_t getCheckpointPauseTime() const { DARABONBA_PTR_GET_DEFAULT(checkpointPauseTime_, 0) };
    inline StartInstanceRefreshRequest& setCheckpointPauseTime(int32_t checkpointPauseTime) { DARABONBA_PTR_SET_VALUE(checkpointPauseTime_, checkpointPauseTime) };


    // checkpoints Field Functions 
    bool hasCheckpoints() const { return this->checkpoints_ != nullptr;};
    void deleteCheckpoints() { this->checkpoints_ = nullptr;};
    inline const vector<StartInstanceRefreshRequest::Checkpoints> & getCheckpoints() const { DARABONBA_PTR_GET_CONST(checkpoints_, vector<StartInstanceRefreshRequest::Checkpoints>) };
    inline vector<StartInstanceRefreshRequest::Checkpoints> getCheckpoints() { DARABONBA_PTR_GET(checkpoints_, vector<StartInstanceRefreshRequest::Checkpoints>) };
    inline StartInstanceRefreshRequest& setCheckpoints(const vector<StartInstanceRefreshRequest::Checkpoints> & checkpoints) { DARABONBA_PTR_SET_VALUE(checkpoints_, checkpoints) };
    inline StartInstanceRefreshRequest& setCheckpoints(vector<StartInstanceRefreshRequest::Checkpoints> && checkpoints) { DARABONBA_PTR_SET_RVALUE(checkpoints_, checkpoints) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline StartInstanceRefreshRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // desiredConfiguration Field Functions 
    bool hasDesiredConfiguration() const { return this->desiredConfiguration_ != nullptr;};
    void deleteDesiredConfiguration() { this->desiredConfiguration_ = nullptr;};
    inline const StartInstanceRefreshRequest::DesiredConfiguration & getDesiredConfiguration() const { DARABONBA_PTR_GET_CONST(desiredConfiguration_, StartInstanceRefreshRequest::DesiredConfiguration) };
    inline StartInstanceRefreshRequest::DesiredConfiguration getDesiredConfiguration() { DARABONBA_PTR_GET(desiredConfiguration_, StartInstanceRefreshRequest::DesiredConfiguration) };
    inline StartInstanceRefreshRequest& setDesiredConfiguration(const StartInstanceRefreshRequest::DesiredConfiguration & desiredConfiguration) { DARABONBA_PTR_SET_VALUE(desiredConfiguration_, desiredConfiguration) };
    inline StartInstanceRefreshRequest& setDesiredConfiguration(StartInstanceRefreshRequest::DesiredConfiguration && desiredConfiguration) { DARABONBA_PTR_SET_RVALUE(desiredConfiguration_, desiredConfiguration) };


    // maxHealthyPercentage Field Functions 
    bool hasMaxHealthyPercentage() const { return this->maxHealthyPercentage_ != nullptr;};
    void deleteMaxHealthyPercentage() { this->maxHealthyPercentage_ = nullptr;};
    inline int32_t getMaxHealthyPercentage() const { DARABONBA_PTR_GET_DEFAULT(maxHealthyPercentage_, 0) };
    inline StartInstanceRefreshRequest& setMaxHealthyPercentage(int32_t maxHealthyPercentage) { DARABONBA_PTR_SET_VALUE(maxHealthyPercentage_, maxHealthyPercentage) };


    // minHealthyPercentage Field Functions 
    bool hasMinHealthyPercentage() const { return this->minHealthyPercentage_ != nullptr;};
    void deleteMinHealthyPercentage() { this->minHealthyPercentage_ = nullptr;};
    inline int32_t getMinHealthyPercentage() const { DARABONBA_PTR_GET_DEFAULT(minHealthyPercentage_, 0) };
    inline StartInstanceRefreshRequest& setMinHealthyPercentage(int32_t minHealthyPercentage) { DARABONBA_PTR_SET_VALUE(minHealthyPercentage_, minHealthyPercentage) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StartInstanceRefreshRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartInstanceRefreshRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline StartInstanceRefreshRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline StartInstanceRefreshRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // skipMatching Field Functions 
    bool hasSkipMatching() const { return this->skipMatching_ != nullptr;};
    void deleteSkipMatching() { this->skipMatching_ = nullptr;};
    inline bool getSkipMatching() const { DARABONBA_PTR_GET_DEFAULT(skipMatching_, false) };
    inline StartInstanceRefreshRequest& setSkipMatching(bool skipMatching) { DARABONBA_PTR_SET_VALUE(skipMatching_, skipMatching) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline StartInstanceRefreshRequest& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


  protected:
    // The duration for which the task is paused when a checkpoint is reached.
    // - Unit: minutes.
    // - Valid values: 1 to 2880.
    //  - Default value: 60.
    shared_ptr<int32_t> checkpointPauseTime_ {};
    // The checkpoints for the refresh task. When the percentage of new instances reaches a specified value during the instance refresh, the task is automatically paused for CheckpointPauseTime minutes.
    shared_ptr<vector<StartInstanceRefreshRequest::Checkpoints>> checkpoints_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    shared_ptr<string> clientToken_ {};
    // The desired configuration for the instance refresh.
    // 
    // > - You cannot specify ScalingConfigurationId, ImageId, LaunchTemplateId, and Containers at the same time. If this parameter is left empty, the currently active configuration of the scaling group is used for the refresh.
    // > - After the instance refresh task is completed, the active scaling configuration of the scaling group is updated to this configuration.
    shared_ptr<StartInstanceRefreshRequest::DesiredConfiguration> desiredConfiguration_ {};
    // The maximum percentage by which the number of instances in the scaling group can exceed the scaling group capacity during the instance refresh. Valid values: 100 to 200.
    // Default value: 120.
    // 
    // > When MinHealthyPercentage = MaxHealthyPercentage = 100, one instance is refreshed at a time.
    shared_ptr<int32_t> maxHealthyPercentage_ {};
    // The minimum percentage of instances that must remain in service in the scaling group during the instance refresh. Valid values: 0 to 100.
    // Default value: 80.
    shared_ptr<int32_t> minHealthyPercentage_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
    // Specifies whether to skip instances that already match the desired configuration.
    // 
    // > The system determines whether an instance matches based on the ID of the desired scaling configuration, not by comparing individual configuration items.
    // 
    // Valid values:
    // 
    // - true: Instances that were already created with the desired configuration are skipped.
    // - false: All instances in the scaling group are refreshed when the instance refresh task starts.
    // 
    // Default value: true.
    shared_ptr<bool> skipMatching_ {};
    shared_ptr<string> strategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
