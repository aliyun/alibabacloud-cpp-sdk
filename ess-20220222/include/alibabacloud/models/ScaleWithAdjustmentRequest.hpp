// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTREQUEST_HPP_
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
  class ScaleWithAdjustmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleWithAdjustmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityMetadata, activityMetadata_);
      DARABONBA_PTR_TO_JSON(AdjustmentType, adjustmentType_);
      DARABONBA_PTR_TO_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_TO_JSON(LifecycleHookContext, lifecycleHookContext_);
      DARABONBA_PTR_TO_JSON(MinAdjustmentMagnitude, minAdjustmentMagnitude_);
      DARABONBA_PTR_TO_JSON(Overrides, overrides_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParallelTask, parallelTask_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(SyncActivity, syncActivity_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleWithAdjustmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityMetadata, activityMetadata_);
      DARABONBA_PTR_FROM_JSON(AdjustmentType, adjustmentType_);
      DARABONBA_PTR_FROM_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_FROM_JSON(LifecycleHookContext, lifecycleHookContext_);
      DARABONBA_PTR_FROM_JSON(MinAdjustmentMagnitude, minAdjustmentMagnitude_);
      DARABONBA_PTR_FROM_JSON(Overrides, overrides_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParallelTask, parallelTask_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(SyncActivity, syncActivity_);
    };
    ScaleWithAdjustmentRequest() = default ;
    ScaleWithAdjustmentRequest(const ScaleWithAdjustmentRequest &) = default ;
    ScaleWithAdjustmentRequest(ScaleWithAdjustmentRequest &&) = default ;
    ScaleWithAdjustmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleWithAdjustmentRequest() = default ;
    ScaleWithAdjustmentRequest& operator=(const ScaleWithAdjustmentRequest &) = default ;
    ScaleWithAdjustmentRequest& operator=(ScaleWithAdjustmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Overrides : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Overrides& obj) { 
        DARABONBA_PTR_TO_JSON(ContainerOverrides, containerOverrides_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, Overrides& obj) { 
        DARABONBA_PTR_FROM_JSON(ContainerOverrides, containerOverrides_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      Overrides() = default ;
      Overrides(const Overrides &) = default ;
      Overrides(Overrides &&) = default ;
      Overrides(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Overrides() = default ;
      Overrides& operator=(const Overrides &) = default ;
      Overrides& operator=(Overrides &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ContainerOverrides : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContainerOverrides& obj) { 
          DARABONBA_PTR_TO_JSON(Args, args_);
          DARABONBA_PTR_TO_JSON(Commands, commands_);
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(EnvironmentVars, environmentVars_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, ContainerOverrides& obj) { 
          DARABONBA_PTR_FROM_JSON(Args, args_);
          DARABONBA_PTR_FROM_JSON(Commands, commands_);
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(EnvironmentVars, environmentVars_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        ContainerOverrides() = default ;
        ContainerOverrides(const ContainerOverrides &) = default ;
        ContainerOverrides(ContainerOverrides &&) = default ;
        ContainerOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContainerOverrides() = default ;
        ContainerOverrides& operator=(const ContainerOverrides &) = default ;
        ContainerOverrides& operator=(ContainerOverrides &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EnvironmentVars : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EnvironmentVars& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, EnvironmentVars& obj) { 
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
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
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
          // The name of the environment variable. The name must be 1 to 128 characters in length. Format requirement: `[0-9a-zA-Z]` and underscores (_). It cannot start with a digit.
          shared_ptr<string> key_ {};
          // The value of the environment variable. The value can be up to 256 characters in length.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->args_ == nullptr
        && this->commands_ == nullptr && this->cpu_ == nullptr && this->environmentVars_ == nullptr && this->memory_ == nullptr && this->name_ == nullptr; };
        // args Field Functions 
        bool hasArgs() const { return this->args_ != nullptr;};
        void deleteArgs() { this->args_ = nullptr;};
        inline const vector<string> & getArgs() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
        inline vector<string> getArgs() { DARABONBA_PTR_GET(args_, vector<string>) };
        inline ContainerOverrides& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
        inline ContainerOverrides& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


        // commands Field Functions 
        bool hasCommands() const { return this->commands_ != nullptr;};
        void deleteCommands() { this->commands_ = nullptr;};
        inline const vector<string> & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
        inline vector<string> getCommands() { DARABONBA_PTR_GET(commands_, vector<string>) };
        inline ContainerOverrides& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
        inline ContainerOverrides& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
        inline ContainerOverrides& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // environmentVars Field Functions 
        bool hasEnvironmentVars() const { return this->environmentVars_ != nullptr;};
        void deleteEnvironmentVars() { this->environmentVars_ = nullptr;};
        inline const vector<ContainerOverrides::EnvironmentVars> & getEnvironmentVars() const { DARABONBA_PTR_GET_CONST(environmentVars_, vector<ContainerOverrides::EnvironmentVars>) };
        inline vector<ContainerOverrides::EnvironmentVars> getEnvironmentVars() { DARABONBA_PTR_GET(environmentVars_, vector<ContainerOverrides::EnvironmentVars>) };
        inline ContainerOverrides& setEnvironmentVars(const vector<ContainerOverrides::EnvironmentVars> & environmentVars) { DARABONBA_PTR_SET_VALUE(environmentVars_, environmentVars) };
        inline ContainerOverrides& setEnvironmentVars(vector<ContainerOverrides::EnvironmentVars> && environmentVars) { DARABONBA_PTR_SET_RVALUE(environmentVars_, environmentVars) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
        inline ContainerOverrides& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ContainerOverrides& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The argument that corresponds to the startup command of the container. You can specify up to 10 arguments.
        shared_ptr<vector<string>> args_ {};
        // The container startup commands. You can specify up to 20 commands. Each command can contain up to 256 characters.
        shared_ptr<vector<string>> commands_ {};
        // The number of vCPUs that you want to allocate to the container. Unit: vCPUs.
        shared_ptr<float> cpu_ {};
        // The information about the environment variables.
        shared_ptr<vector<ContainerOverrides::EnvironmentVars>> environmentVars_ {};
        // The memory size that you want to allocate to the container. Unit: GiB.
        shared_ptr<float> memory_ {};
        // The name of the container. If you specify ContainerOverrides, you must also specify Name. ContainerOverrides takes effect only when the container name specified by Name matches that specified in the scaling configuration.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->containerOverrides_ == nullptr
        && this->cpu_ == nullptr && this->memory_ == nullptr && this->userData_ == nullptr; };
      // containerOverrides Field Functions 
      bool hasContainerOverrides() const { return this->containerOverrides_ != nullptr;};
      void deleteContainerOverrides() { this->containerOverrides_ = nullptr;};
      inline const vector<Overrides::ContainerOverrides> & getContainerOverrides() const { DARABONBA_PTR_GET_CONST(containerOverrides_, vector<Overrides::ContainerOverrides>) };
      inline vector<Overrides::ContainerOverrides> getContainerOverrides() { DARABONBA_PTR_GET(containerOverrides_, vector<Overrides::ContainerOverrides>) };
      inline Overrides& setContainerOverrides(const vector<Overrides::ContainerOverrides> & containerOverrides) { DARABONBA_PTR_SET_VALUE(containerOverrides_, containerOverrides) };
      inline Overrides& setContainerOverrides(vector<Overrides::ContainerOverrides> && containerOverrides) { DARABONBA_PTR_SET_RVALUE(containerOverrides_, containerOverrides) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
      inline Overrides& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
      inline Overrides& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline Overrides& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // The list of parameters that you want to use to override specific configurations for containers.
      shared_ptr<vector<Overrides::ContainerOverrides>> containerOverrides_ {};
      // The number of vCPUs that you want to allocate to the instance. Unit: vCPUs.
      shared_ptr<float> cpu_ {};
      // The memory size that you want to allocate to the instance. Unit: GiB.
      shared_ptr<float> memory_ {};
      // The user data of the Elastic Compute Service (ECS) instance. The user data must be encoded in Base64 format. The size of raw data before Base64 encoding cannot exceed 32 KB.
      shared_ptr<string> userData_ {};
    };

    class LifecycleHookContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LifecycleHookContext& obj) { 
        DARABONBA_PTR_TO_JSON(DisableLifecycleHook, disableLifecycleHook_);
        DARABONBA_PTR_TO_JSON(IgnoredLifecycleHookIds, ignoredLifecycleHookIds_);
        DARABONBA_PTR_TO_JSON(LifecycleHookResult, lifecycleHookResult_);
      };
      friend void from_json(const Darabonba::Json& j, LifecycleHookContext& obj) { 
        DARABONBA_PTR_FROM_JSON(DisableLifecycleHook, disableLifecycleHook_);
        DARABONBA_PTR_FROM_JSON(IgnoredLifecycleHookIds, ignoredLifecycleHookIds_);
        DARABONBA_PTR_FROM_JSON(LifecycleHookResult, lifecycleHookResult_);
      };
      LifecycleHookContext() = default ;
      LifecycleHookContext(const LifecycleHookContext &) = default ;
      LifecycleHookContext(LifecycleHookContext &&) = default ;
      LifecycleHookContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LifecycleHookContext() = default ;
      LifecycleHookContext& operator=(const LifecycleHookContext &) = default ;
      LifecycleHookContext& operator=(LifecycleHookContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->disableLifecycleHook_ == nullptr
        && this->ignoredLifecycleHookIds_ == nullptr && this->lifecycleHookResult_ == nullptr; };
      // disableLifecycleHook Field Functions 
      bool hasDisableLifecycleHook() const { return this->disableLifecycleHook_ != nullptr;};
      void deleteDisableLifecycleHook() { this->disableLifecycleHook_ = nullptr;};
      inline bool getDisableLifecycleHook() const { DARABONBA_PTR_GET_DEFAULT(disableLifecycleHook_, false) };
      inline LifecycleHookContext& setDisableLifecycleHook(bool disableLifecycleHook) { DARABONBA_PTR_SET_VALUE(disableLifecycleHook_, disableLifecycleHook) };


      // ignoredLifecycleHookIds Field Functions 
      bool hasIgnoredLifecycleHookIds() const { return this->ignoredLifecycleHookIds_ != nullptr;};
      void deleteIgnoredLifecycleHookIds() { this->ignoredLifecycleHookIds_ = nullptr;};
      inline const vector<string> & getIgnoredLifecycleHookIds() const { DARABONBA_PTR_GET_CONST(ignoredLifecycleHookIds_, vector<string>) };
      inline vector<string> getIgnoredLifecycleHookIds() { DARABONBA_PTR_GET(ignoredLifecycleHookIds_, vector<string>) };
      inline LifecycleHookContext& setIgnoredLifecycleHookIds(const vector<string> & ignoredLifecycleHookIds) { DARABONBA_PTR_SET_VALUE(ignoredLifecycleHookIds_, ignoredLifecycleHookIds) };
      inline LifecycleHookContext& setIgnoredLifecycleHookIds(vector<string> && ignoredLifecycleHookIds) { DARABONBA_PTR_SET_RVALUE(ignoredLifecycleHookIds_, ignoredLifecycleHookIds) };


      // lifecycleHookResult Field Functions 
      bool hasLifecycleHookResult() const { return this->lifecycleHookResult_ != nullptr;};
      void deleteLifecycleHookResult() { this->lifecycleHookResult_ = nullptr;};
      inline string getLifecycleHookResult() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookResult_, "") };
      inline LifecycleHookContext& setLifecycleHookResult(string lifecycleHookResult) { DARABONBA_PTR_SET_VALUE(lifecycleHookResult_, lifecycleHookResult) };


    protected:
      // Specifies whether to disable the lifecycle hook. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> disableLifecycleHook_ {};
      // The IDs of the lifecycle hooks that you want to disable.
      shared_ptr<vector<string>> ignoredLifecycleHookIds_ {};
      shared_ptr<string> lifecycleHookResult_ {};
    };

    virtual bool empty() const override { return this->activityMetadata_ == nullptr
        && this->adjustmentType_ == nullptr && this->adjustmentValue_ == nullptr && this->clientToken_ == nullptr && this->executionMode_ == nullptr && this->lifecycleHookContext_ == nullptr
        && this->minAdjustmentMagnitude_ == nullptr && this->overrides_ == nullptr && this->ownerId_ == nullptr && this->parallelTask_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->scalingGroupId_ == nullptr && this->syncActivity_ == nullptr; };
    // activityMetadata Field Functions 
    bool hasActivityMetadata() const { return this->activityMetadata_ != nullptr;};
    void deleteActivityMetadata() { this->activityMetadata_ = nullptr;};
    inline string getActivityMetadata() const { DARABONBA_PTR_GET_DEFAULT(activityMetadata_, "") };
    inline ScaleWithAdjustmentRequest& setActivityMetadata(string activityMetadata) { DARABONBA_PTR_SET_VALUE(activityMetadata_, activityMetadata) };


    // adjustmentType Field Functions 
    bool hasAdjustmentType() const { return this->adjustmentType_ != nullptr;};
    void deleteAdjustmentType() { this->adjustmentType_ = nullptr;};
    inline string getAdjustmentType() const { DARABONBA_PTR_GET_DEFAULT(adjustmentType_, "") };
    inline ScaleWithAdjustmentRequest& setAdjustmentType(string adjustmentType) { DARABONBA_PTR_SET_VALUE(adjustmentType_, adjustmentType) };


    // adjustmentValue Field Functions 
    bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
    void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
    inline int32_t getAdjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
    inline ScaleWithAdjustmentRequest& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ScaleWithAdjustmentRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string getExecutionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline ScaleWithAdjustmentRequest& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // lifecycleHookContext Field Functions 
    bool hasLifecycleHookContext() const { return this->lifecycleHookContext_ != nullptr;};
    void deleteLifecycleHookContext() { this->lifecycleHookContext_ = nullptr;};
    inline const ScaleWithAdjustmentRequest::LifecycleHookContext & getLifecycleHookContext() const { DARABONBA_PTR_GET_CONST(lifecycleHookContext_, ScaleWithAdjustmentRequest::LifecycleHookContext) };
    inline ScaleWithAdjustmentRequest::LifecycleHookContext getLifecycleHookContext() { DARABONBA_PTR_GET(lifecycleHookContext_, ScaleWithAdjustmentRequest::LifecycleHookContext) };
    inline ScaleWithAdjustmentRequest& setLifecycleHookContext(const ScaleWithAdjustmentRequest::LifecycleHookContext & lifecycleHookContext) { DARABONBA_PTR_SET_VALUE(lifecycleHookContext_, lifecycleHookContext) };
    inline ScaleWithAdjustmentRequest& setLifecycleHookContext(ScaleWithAdjustmentRequest::LifecycleHookContext && lifecycleHookContext) { DARABONBA_PTR_SET_RVALUE(lifecycleHookContext_, lifecycleHookContext) };


    // minAdjustmentMagnitude Field Functions 
    bool hasMinAdjustmentMagnitude() const { return this->minAdjustmentMagnitude_ != nullptr;};
    void deleteMinAdjustmentMagnitude() { this->minAdjustmentMagnitude_ = nullptr;};
    inline int32_t getMinAdjustmentMagnitude() const { DARABONBA_PTR_GET_DEFAULT(minAdjustmentMagnitude_, 0) };
    inline ScaleWithAdjustmentRequest& setMinAdjustmentMagnitude(int32_t minAdjustmentMagnitude) { DARABONBA_PTR_SET_VALUE(minAdjustmentMagnitude_, minAdjustmentMagnitude) };


    // overrides Field Functions 
    bool hasOverrides() const { return this->overrides_ != nullptr;};
    void deleteOverrides() { this->overrides_ = nullptr;};
    inline const ScaleWithAdjustmentRequest::Overrides & getOverrides() const { DARABONBA_PTR_GET_CONST(overrides_, ScaleWithAdjustmentRequest::Overrides) };
    inline ScaleWithAdjustmentRequest::Overrides getOverrides() { DARABONBA_PTR_GET(overrides_, ScaleWithAdjustmentRequest::Overrides) };
    inline ScaleWithAdjustmentRequest& setOverrides(const ScaleWithAdjustmentRequest::Overrides & overrides) { DARABONBA_PTR_SET_VALUE(overrides_, overrides) };
    inline ScaleWithAdjustmentRequest& setOverrides(ScaleWithAdjustmentRequest::Overrides && overrides) { DARABONBA_PTR_SET_RVALUE(overrides_, overrides) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ScaleWithAdjustmentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parallelTask Field Functions 
    bool hasParallelTask() const { return this->parallelTask_ != nullptr;};
    void deleteParallelTask() { this->parallelTask_ = nullptr;};
    inline bool getParallelTask() const { DARABONBA_PTR_GET_DEFAULT(parallelTask_, false) };
    inline ScaleWithAdjustmentRequest& setParallelTask(bool parallelTask) { DARABONBA_PTR_SET_VALUE(parallelTask_, parallelTask) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ScaleWithAdjustmentRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline ScaleWithAdjustmentRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // syncActivity Field Functions 
    bool hasSyncActivity() const { return this->syncActivity_ != nullptr;};
    void deleteSyncActivity() { this->syncActivity_ = nullptr;};
    inline bool getSyncActivity() const { DARABONBA_PTR_GET_DEFAULT(syncActivity_, false) };
    inline ScaleWithAdjustmentRequest& setSyncActivity(bool syncActivity) { DARABONBA_PTR_SET_VALUE(syncActivity_, syncActivity) };


  protected:
    // The metadata of the scaling activity.
    shared_ptr<string> activityMetadata_ {};
    // The type of the scaling policy. Valid values:
    // 
    // *   QuantityChangeInCapacity: adds the specified number of ECS instances to or removes the specified number of ECS instances from the scaling group.
    // *   PercentChangeInCapacity: adds the specified percentage of ECS instances to or removes the specified percentage of ECS instances from the scaling group.
    // *   TotalCapacity: adjusts the number of ECS instances in the scaling group to a specified number.
    // 
    // This parameter is required.
    shared_ptr<string> adjustmentType_ {};
    // The number of instances in each adjustment. The number of ECS instances in each adjustment cannot exceed 1,000.
    // 
    // *   Valid values if you set the AdjustmentType parameter to QuantityChangeInCapacity: -1000 to 1000.
    // *   Valid values if you set the AdjustmentType parameter to PercentChangeInCapacity: -100 to 10000.
    // *   Valid values if you set the AdjustmentType parameter to TotalCapacity: 0 to 2000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> adjustmentValue_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that the value is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The execution mode. Valid values:
    // 
    // *   None: If this is not specified, auto scaling is performed.
    // *   PlanOnly: Scaling is not triggered. Only elastic planning is performed. The planning result is returned in PlanResult, including the instance type, zone ID, billing type, and number of created instances.
    // 
    // Default value: None.
    shared_ptr<string> executionMode_ {};
    // The context of the lifecycle hook.
    shared_ptr<ScaleWithAdjustmentRequest::LifecycleHookContext> lifecycleHookContext_ {};
    // The minimum number of instances allowed in each adjustment. This parameter takes effect only if you set the `AdjustmentType` parameter to `PercentChangeInCapacity`.
    shared_ptr<int32_t> minAdjustmentMagnitude_ {};
    // The overrides that allow you to adjust the scaling group of the Elastic Container Instance (ECI) type during a scale-out event.
    shared_ptr<ScaleWithAdjustmentRequest::Overrides> overrides_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Whether the current scale-out task supports concurrency.
    shared_ptr<bool> parallelTask_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
    // Specifies whether to trigger the scaling task in a synchronous manner. This parameter takes effect only on scaling groups for which you specified an expected number of instances. Valid Values:
    // 
    // *   true: triggers the scaling task in a synchronous manner. A scaling activity is triggered at the time when the scaling rule is executed.
    // *   false: does not trigger the scaling task in a synchronous manner. After you change the expected number of instances for the scaling group, Auto Scaling checks whether the total number of instances in the scaling group matches the new expected number and determines whether to trigger the scaling activity based on the check result.
    // 
    // >  For more information, see [Expected number of instances](https://help.aliyun.com/document_detail/146231.html).
    // 
    // Default value: false.
    shared_ptr<bool> syncActivity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
