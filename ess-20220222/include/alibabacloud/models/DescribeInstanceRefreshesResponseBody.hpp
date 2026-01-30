// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREFRESHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREFRESHESRESPONSEBODY_HPP_
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
  class DescribeInstanceRefreshesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRefreshesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceRefreshTasks, instanceRefreshTasks_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRefreshesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceRefreshTasks, instanceRefreshTasks_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceRefreshesResponseBody() = default ;
    DescribeInstanceRefreshesResponseBody(const DescribeInstanceRefreshesResponseBody &) = default ;
    DescribeInstanceRefreshesResponseBody(DescribeInstanceRefreshesResponseBody &&) = default ;
    DescribeInstanceRefreshesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRefreshesResponseBody() = default ;
    DescribeInstanceRefreshesResponseBody& operator=(const DescribeInstanceRefreshesResponseBody &) = default ;
    DescribeInstanceRefreshesResponseBody& operator=(DescribeInstanceRefreshesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceRefreshTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceRefreshTasks& obj) { 
        DARABONBA_PTR_TO_JSON(CheckpointPauseTime, checkpointPauseTime_);
        DARABONBA_PTR_TO_JSON(Checkpoints, checkpoints_);
        DARABONBA_PTR_TO_JSON(DesiredConfiguration, desiredConfiguration_);
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FinishedUpdateCapacity, finishedUpdateCapacity_);
        DARABONBA_PTR_TO_JSON(InstanceRefreshTaskId, instanceRefreshTaskId_);
        DARABONBA_PTR_TO_JSON(MaxHealthyPercentage, maxHealthyPercentage_);
        DARABONBA_PTR_TO_JSON(MinHealthyPercentage, minHealthyPercentage_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
        DARABONBA_PTR_TO_JSON(SkipMatching, skipMatching_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalNeedUpdateCapacity, totalNeedUpdateCapacity_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceRefreshTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckpointPauseTime, checkpointPauseTime_);
        DARABONBA_PTR_FROM_JSON(Checkpoints, checkpoints_);
        DARABONBA_PTR_FROM_JSON(DesiredConfiguration, desiredConfiguration_);
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FinishedUpdateCapacity, finishedUpdateCapacity_);
        DARABONBA_PTR_FROM_JSON(InstanceRefreshTaskId, instanceRefreshTaskId_);
        DARABONBA_PTR_FROM_JSON(MaxHealthyPercentage, maxHealthyPercentage_);
        DARABONBA_PTR_FROM_JSON(MinHealthyPercentage, minHealthyPercentage_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
        DARABONBA_PTR_FROM_JSON(SkipMatching, skipMatching_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalNeedUpdateCapacity, totalNeedUpdateCapacity_);
      };
      InstanceRefreshTasks() = default ;
      InstanceRefreshTasks(const InstanceRefreshTasks &) = default ;
      InstanceRefreshTasks(InstanceRefreshTasks &&) = default ;
      InstanceRefreshTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceRefreshTasks() = default ;
      InstanceRefreshTasks& operator=(const InstanceRefreshTasks &) = default ;
      InstanceRefreshTasks& operator=(InstanceRefreshTasks &&) = default ;
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
            shared_ptr<string> fieldRefFieldPath_ {};
            shared_ptr<string> key_ {};
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
          shared_ptr<vector<string>> args_ {};
          shared_ptr<vector<string>> commands_ {};
          shared_ptr<vector<Containers::EnvironmentVars>> environmentVars_ {};
          shared_ptr<string> image_ {};
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
        shared_ptr<vector<DesiredConfiguration::Containers>> containers_ {};
        // The ID of the image file that provides the image resource for Auto Scaling to create instances.
        shared_ptr<string> imageId_ {};
        shared_ptr<string> launchTemplateId_ {};
        shared_ptr<vector<DesiredConfiguration::LaunchTemplateOverrides>> launchTemplateOverrides_ {};
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
        shared_ptr<int32_t> percentage_ {};
      };

      virtual bool empty() const override { return this->checkpointPauseTime_ == nullptr
        && this->checkpoints_ == nullptr && this->desiredConfiguration_ == nullptr && this->detail_ == nullptr && this->endTime_ == nullptr && this->finishedUpdateCapacity_ == nullptr
        && this->instanceRefreshTaskId_ == nullptr && this->maxHealthyPercentage_ == nullptr && this->minHealthyPercentage_ == nullptr && this->regionId_ == nullptr && this->scalingGroupId_ == nullptr
        && this->skipMatching_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->totalNeedUpdateCapacity_ == nullptr; };
      // checkpointPauseTime Field Functions 
      bool hasCheckpointPauseTime() const { return this->checkpointPauseTime_ != nullptr;};
      void deleteCheckpointPauseTime() { this->checkpointPauseTime_ = nullptr;};
      inline int32_t getCheckpointPauseTime() const { DARABONBA_PTR_GET_DEFAULT(checkpointPauseTime_, 0) };
      inline InstanceRefreshTasks& setCheckpointPauseTime(int32_t checkpointPauseTime) { DARABONBA_PTR_SET_VALUE(checkpointPauseTime_, checkpointPauseTime) };


      // checkpoints Field Functions 
      bool hasCheckpoints() const { return this->checkpoints_ != nullptr;};
      void deleteCheckpoints() { this->checkpoints_ = nullptr;};
      inline const vector<InstanceRefreshTasks::Checkpoints> & getCheckpoints() const { DARABONBA_PTR_GET_CONST(checkpoints_, vector<InstanceRefreshTasks::Checkpoints>) };
      inline vector<InstanceRefreshTasks::Checkpoints> getCheckpoints() { DARABONBA_PTR_GET(checkpoints_, vector<InstanceRefreshTasks::Checkpoints>) };
      inline InstanceRefreshTasks& setCheckpoints(const vector<InstanceRefreshTasks::Checkpoints> & checkpoints) { DARABONBA_PTR_SET_VALUE(checkpoints_, checkpoints) };
      inline InstanceRefreshTasks& setCheckpoints(vector<InstanceRefreshTasks::Checkpoints> && checkpoints) { DARABONBA_PTR_SET_RVALUE(checkpoints_, checkpoints) };


      // desiredConfiguration Field Functions 
      bool hasDesiredConfiguration() const { return this->desiredConfiguration_ != nullptr;};
      void deleteDesiredConfiguration() { this->desiredConfiguration_ = nullptr;};
      inline const InstanceRefreshTasks::DesiredConfiguration & getDesiredConfiguration() const { DARABONBA_PTR_GET_CONST(desiredConfiguration_, InstanceRefreshTasks::DesiredConfiguration) };
      inline InstanceRefreshTasks::DesiredConfiguration getDesiredConfiguration() { DARABONBA_PTR_GET(desiredConfiguration_, InstanceRefreshTasks::DesiredConfiguration) };
      inline InstanceRefreshTasks& setDesiredConfiguration(const InstanceRefreshTasks::DesiredConfiguration & desiredConfiguration) { DARABONBA_PTR_SET_VALUE(desiredConfiguration_, desiredConfiguration) };
      inline InstanceRefreshTasks& setDesiredConfiguration(InstanceRefreshTasks::DesiredConfiguration && desiredConfiguration) { DARABONBA_PTR_SET_RVALUE(desiredConfiguration_, desiredConfiguration) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline InstanceRefreshTasks& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline InstanceRefreshTasks& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // finishedUpdateCapacity Field Functions 
      bool hasFinishedUpdateCapacity() const { return this->finishedUpdateCapacity_ != nullptr;};
      void deleteFinishedUpdateCapacity() { this->finishedUpdateCapacity_ = nullptr;};
      inline int32_t getFinishedUpdateCapacity() const { DARABONBA_PTR_GET_DEFAULT(finishedUpdateCapacity_, 0) };
      inline InstanceRefreshTasks& setFinishedUpdateCapacity(int32_t finishedUpdateCapacity) { DARABONBA_PTR_SET_VALUE(finishedUpdateCapacity_, finishedUpdateCapacity) };


      // instanceRefreshTaskId Field Functions 
      bool hasInstanceRefreshTaskId() const { return this->instanceRefreshTaskId_ != nullptr;};
      void deleteInstanceRefreshTaskId() { this->instanceRefreshTaskId_ = nullptr;};
      inline string getInstanceRefreshTaskId() const { DARABONBA_PTR_GET_DEFAULT(instanceRefreshTaskId_, "") };
      inline InstanceRefreshTasks& setInstanceRefreshTaskId(string instanceRefreshTaskId) { DARABONBA_PTR_SET_VALUE(instanceRefreshTaskId_, instanceRefreshTaskId) };


      // maxHealthyPercentage Field Functions 
      bool hasMaxHealthyPercentage() const { return this->maxHealthyPercentage_ != nullptr;};
      void deleteMaxHealthyPercentage() { this->maxHealthyPercentage_ = nullptr;};
      inline int32_t getMaxHealthyPercentage() const { DARABONBA_PTR_GET_DEFAULT(maxHealthyPercentage_, 0) };
      inline InstanceRefreshTasks& setMaxHealthyPercentage(int32_t maxHealthyPercentage) { DARABONBA_PTR_SET_VALUE(maxHealthyPercentage_, maxHealthyPercentage) };


      // minHealthyPercentage Field Functions 
      bool hasMinHealthyPercentage() const { return this->minHealthyPercentage_ != nullptr;};
      void deleteMinHealthyPercentage() { this->minHealthyPercentage_ = nullptr;};
      inline int32_t getMinHealthyPercentage() const { DARABONBA_PTR_GET_DEFAULT(minHealthyPercentage_, 0) };
      inline InstanceRefreshTasks& setMinHealthyPercentage(int32_t minHealthyPercentage) { DARABONBA_PTR_SET_VALUE(minHealthyPercentage_, minHealthyPercentage) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline InstanceRefreshTasks& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // scalingGroupId Field Functions 
      bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
      void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
      inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
      inline InstanceRefreshTasks& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


      // skipMatching Field Functions 
      bool hasSkipMatching() const { return this->skipMatching_ != nullptr;};
      void deleteSkipMatching() { this->skipMatching_ = nullptr;};
      inline bool getSkipMatching() const { DARABONBA_PTR_GET_DEFAULT(skipMatching_, false) };
      inline InstanceRefreshTasks& setSkipMatching(bool skipMatching) { DARABONBA_PTR_SET_VALUE(skipMatching_, skipMatching) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline InstanceRefreshTasks& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline InstanceRefreshTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalNeedUpdateCapacity Field Functions 
      bool hasTotalNeedUpdateCapacity() const { return this->totalNeedUpdateCapacity_ != nullptr;};
      void deleteTotalNeedUpdateCapacity() { this->totalNeedUpdateCapacity_ = nullptr;};
      inline int32_t getTotalNeedUpdateCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalNeedUpdateCapacity_, 0) };
      inline InstanceRefreshTasks& setTotalNeedUpdateCapacity(int32_t totalNeedUpdateCapacity) { DARABONBA_PTR_SET_VALUE(totalNeedUpdateCapacity_, totalNeedUpdateCapacity) };


    protected:
      shared_ptr<int32_t> checkpointPauseTime_ {};
      shared_ptr<vector<InstanceRefreshTasks::Checkpoints>> checkpoints_ {};
      // The desired configurations of the instance refresh task.
      shared_ptr<InstanceRefreshTasks::DesiredConfiguration> desiredConfiguration_ {};
      // The reason why the instance refresh task failed to be executed.
      shared_ptr<string> detail_ {};
      // The end time of the instance refresh task.
      shared_ptr<string> endTime_ {};
      // The refreshed number of instances in the scaling group.
      shared_ptr<int32_t> finishedUpdateCapacity_ {};
      // The ID of the instance refresh task.
      shared_ptr<string> instanceRefreshTaskId_ {};
      // The ratio by which the number of instances in the scaling group can exceed the upper limit for the number of instances in the scaling group during instance refresh.
      shared_ptr<int32_t> maxHealthyPercentage_ {};
      // The ratio of the number of instances that provide services to the total number of instances in the scaling group during instance refresh.
      shared_ptr<int32_t> minHealthyPercentage_ {};
      // The region ID of the scaling group.
      shared_ptr<string> regionId_ {};
      // The ID of the scaling group.
      shared_ptr<string> scalingGroupId_ {};
      // Indicates whether instances that match the desired scaling configuration are skipped.
      // 
      // >  The system determines the match based on the ID of the desired scaling configuration rather than individual configuration items.
      // 
      // Valid values:
      // 
      // *   true: Instances that match the desired scaling configuration are skipped. When you initiate an instance refresh task, the system checks the configurations of all instances. The refresh operation is skipped for instances created based on the desired scaling configuration.
      // *   false: Instances that match the desired scaling configuration are not skipped. When an instance refresh task is initiated, all instances in the scaling group at the time of initiation are refreshed.
      shared_ptr<bool> skipMatching_ {};
      // The start time of the instance refresh task.
      shared_ptr<string> startTime_ {};
      // The status of the instance refresh task. Valid values:
      // 
      // *   Pending: The instance refresh task is created and is waiting to be scheduled.
      // *   InProgress: The instance refresh task is being executed.
      // *   Paused: The instance refresh task is suspended.
      // *   Failed: The instance refresh task failed to be executed.
      // *   Successful: The instance refresh task is successful.
      // *   Cancelling: The instance refresh task is being canceled.
      // *   Cancelled: The instance refresh task is canceled.
      // *   RollbackInProgress: The instance refresh task is being rolled back.
      // *   RollbackSuccessful: The instance refresh task is rolled back.
      // *   RollbackFailed: The instance refresh task fails to be rolled back.
      shared_ptr<string> status_ {};
      // The total number of instances whose configurations are refreshed.
      shared_ptr<int32_t> totalNeedUpdateCapacity_ {};
    };

    virtual bool empty() const override { return this->instanceRefreshTasks_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instanceRefreshTasks Field Functions 
    bool hasInstanceRefreshTasks() const { return this->instanceRefreshTasks_ != nullptr;};
    void deleteInstanceRefreshTasks() { this->instanceRefreshTasks_ = nullptr;};
    inline const vector<DescribeInstanceRefreshesResponseBody::InstanceRefreshTasks> & getInstanceRefreshTasks() const { DARABONBA_PTR_GET_CONST(instanceRefreshTasks_, vector<DescribeInstanceRefreshesResponseBody::InstanceRefreshTasks>) };
    inline vector<DescribeInstanceRefreshesResponseBody::InstanceRefreshTasks> getInstanceRefreshTasks() { DARABONBA_PTR_GET(instanceRefreshTasks_, vector<DescribeInstanceRefreshesResponseBody::InstanceRefreshTasks>) };
    inline DescribeInstanceRefreshesResponseBody& setInstanceRefreshTasks(const vector<DescribeInstanceRefreshesResponseBody::InstanceRefreshTasks> & instanceRefreshTasks) { DARABONBA_PTR_SET_VALUE(instanceRefreshTasks_, instanceRefreshTasks) };
    inline DescribeInstanceRefreshesResponseBody& setInstanceRefreshTasks(vector<DescribeInstanceRefreshesResponseBody::InstanceRefreshTasks> && instanceRefreshTasks) { DARABONBA_PTR_SET_RVALUE(instanceRefreshTasks_, instanceRefreshTasks) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeInstanceRefreshesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstanceRefreshesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceRefreshesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstanceRefreshesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The instance refresh tasks.
    shared_ptr<vector<DescribeInstanceRefreshesResponseBody::InstanceRefreshTasks>> instanceRefreshTasks_ {};
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of instance refresh tasks.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
