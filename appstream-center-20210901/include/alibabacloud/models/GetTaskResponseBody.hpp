// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTaskResponseBody() = default ;
    GetTaskResponseBody(const GetTaskResponseBody &) = default ;
    GetTaskResponseBody(GetTaskResponseBody &&) = default ;
    GetTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResponseBody() = default ;
    GetTaskResponseBody& operator=(const GetTaskResponseBody &) = default ;
    GetTaskResponseBody& operator=(GetTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(CurrentTaskMessage, currentTaskMessage_);
        DARABONBA_PTR_TO_JSON(CurrentTaskStep, currentTaskStep_);
        DARABONBA_PTR_TO_JSON(ExecuteRegion, executeRegion_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(PerformanceType, performanceType_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
        DARABONBA_PTR_TO_JSON(RunMode, runMode_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_TO_JSON(SystemImageId, systemImageId_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskStepList, taskStepList_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(CurrentTaskMessage, currentTaskMessage_);
        DARABONBA_PTR_FROM_JSON(CurrentTaskStep, currentTaskStep_);
        DARABONBA_PTR_FROM_JSON(ExecuteRegion, executeRegion_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(PerformanceType, performanceType_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
        DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_FROM_JSON(SystemImageId, systemImageId_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskStepList, taskStepList_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
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
      class TaskStepList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskStepList& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StepEndTime, stepEndTime_);
          DARABONBA_PTR_TO_JSON(StepStartTime, stepStartTime_);
          DARABONBA_PTR_TO_JSON(TaskMessage, taskMessage_);
          DARABONBA_PTR_TO_JSON(TaskStep, taskStep_);
        };
        friend void from_json(const Darabonba::Json& j, TaskStepList& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StepEndTime, stepEndTime_);
          DARABONBA_PTR_FROM_JSON(StepStartTime, stepStartTime_);
          DARABONBA_PTR_FROM_JSON(TaskMessage, taskMessage_);
          DARABONBA_PTR_FROM_JSON(TaskStep, taskStep_);
        };
        TaskStepList() = default ;
        TaskStepList(const TaskStepList &) = default ;
        TaskStepList(TaskStepList &&) = default ;
        TaskStepList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskStepList() = default ;
        TaskStepList& operator=(const TaskStepList &) = default ;
        TaskStepList& operator=(TaskStepList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->stepEndTime_ == nullptr && this->stepStartTime_ == nullptr && this->taskMessage_ == nullptr
        && this->taskStep_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline TaskStepList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline TaskStepList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline TaskStepList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // stepEndTime Field Functions 
        bool hasStepEndTime() const { return this->stepEndTime_ != nullptr;};
        void deleteStepEndTime() { this->stepEndTime_ = nullptr;};
        inline string getStepEndTime() const { DARABONBA_PTR_GET_DEFAULT(stepEndTime_, "") };
        inline TaskStepList& setStepEndTime(string stepEndTime) { DARABONBA_PTR_SET_VALUE(stepEndTime_, stepEndTime) };


        // stepStartTime Field Functions 
        bool hasStepStartTime() const { return this->stepStartTime_ != nullptr;};
        void deleteStepStartTime() { this->stepStartTime_ = nullptr;};
        inline string getStepStartTime() const { DARABONBA_PTR_GET_DEFAULT(stepStartTime_, "") };
        inline TaskStepList& setStepStartTime(string stepStartTime) { DARABONBA_PTR_SET_VALUE(stepStartTime_, stepStartTime) };


        // taskMessage Field Functions 
        bool hasTaskMessage() const { return this->taskMessage_ != nullptr;};
        void deleteTaskMessage() { this->taskMessage_ = nullptr;};
        inline string getTaskMessage() const { DARABONBA_PTR_GET_DEFAULT(taskMessage_, "") };
        inline TaskStepList& setTaskMessage(string taskMessage) { DARABONBA_PTR_SET_VALUE(taskMessage_, taskMessage) };


        // taskStep Field Functions 
        bool hasTaskStep() const { return this->taskStep_ != nullptr;};
        void deleteTaskStep() { this->taskStep_ = nullptr;};
        inline string getTaskStep() const { DARABONBA_PTR_GET_DEFAULT(taskStep_, "") };
        inline TaskStepList& setTaskStep(string taskStep) { DARABONBA_PTR_SET_VALUE(taskStep_, taskStep) };


      protected:
        // The end time of the step. The time is a UNIX timestamp calculated from 1970-01-01T00:00:00Z. Unit: milliseconds. This parameter may not be returned if the step has not ended.
        shared_ptr<int64_t> endTime_ {};
        // The start time of the step. The time is a UNIX timestamp calculated from 1970-01-01T00:00:00Z. Unit: milliseconds.
        shared_ptr<int64_t> startTime_ {};
        // The execution status of the step.
        // 
        // Valid values:
        // 
        // - **RUNNING**: The step is being executed.
        // - **SUCCESS**: The step is executed successfully.
        // - **FAILED**: The step fails to be executed.
        shared_ptr<string> status_ {};
        // The ISO 8601 string of the step end time, including the time zone offset. In the example, +08:00 indicates UTC+8. This parameter represents the same time as EndTime and is parsed according to the offset in the returned value. This parameter may not be returned if the step has not ended.
        shared_ptr<string> stepEndTime_ {};
        // The ISO 8601 string of the step start time, including the time zone offset. In the example, +08:00 indicates UTC+8. This parameter represents the same time as StartTime and is parsed according to the offset in the returned value.
        shared_ptr<string> stepStartTime_ {};
        // The prompt or execution result description of this step.
        shared_ptr<string> taskMessage_ {};
        // The task step identifier corresponding to this record. You can call the ListTaskStep operation to query the image creation and application adaptation steps.
        shared_ptr<string> taskStep_ {};
      };

      class ResourceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceList& obj) { 
          DARABONBA_PTR_TO_JSON(Resource, resource_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceList& obj) { 
          DARABONBA_PTR_FROM_JSON(Resource, resource_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        };
        ResourceList() = default ;
        ResourceList(const ResourceList &) = default ;
        ResourceList(ResourceList &&) = default ;
        ResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceList() = default ;
        ResourceList& operator=(const ResourceList &) = default ;
        ResourceList& operator=(ResourceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resource_ == nullptr
        && this->resourceType_ == nullptr; };
        // resource Field Functions 
        bool hasResource() const { return this->resource_ != nullptr;};
        void deleteResource() { this->resource_ = nullptr;};
        inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
        inline ResourceList& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline ResourceList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // The resource content corresponding to ResourceType. For the URL type, specify or return an accessible resource address.
        shared_ptr<string> resource_ {};
        // The provision method of the resource content.
        // 
        // Valid values:
        // 
        // - **HOSTED**: hosted resource
        // - **TEXT**: text resource
        // - **URL**: resource provided through a URL
        shared_ptr<string> resourceType_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->currentTaskMessage_ == nullptr && this->currentTaskStep_ == nullptr && this->executeRegion_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->performanceType_ == nullptr && this->progress_ == nullptr && this->resourceList_ == nullptr && this->runMode_ == nullptr && this->status_ == nullptr
        && this->systemDiskSize_ == nullptr && this->systemImageId_ == nullptr && this->taskId_ == nullptr && this->taskStepList_ == nullptr && this->taskType_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Data& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // currentTaskMessage Field Functions 
      bool hasCurrentTaskMessage() const { return this->currentTaskMessage_ != nullptr;};
      void deleteCurrentTaskMessage() { this->currentTaskMessage_ = nullptr;};
      inline string getCurrentTaskMessage() const { DARABONBA_PTR_GET_DEFAULT(currentTaskMessage_, "") };
      inline Data& setCurrentTaskMessage(string currentTaskMessage) { DARABONBA_PTR_SET_VALUE(currentTaskMessage_, currentTaskMessage) };


      // currentTaskStep Field Functions 
      bool hasCurrentTaskStep() const { return this->currentTaskStep_ != nullptr;};
      void deleteCurrentTaskStep() { this->currentTaskStep_ = nullptr;};
      inline string getCurrentTaskStep() const { DARABONBA_PTR_GET_DEFAULT(currentTaskStep_, "") };
      inline Data& setCurrentTaskStep(string currentTaskStep) { DARABONBA_PTR_SET_VALUE(currentTaskStep_, currentTaskStep) };


      // executeRegion Field Functions 
      bool hasExecuteRegion() const { return this->executeRegion_ != nullptr;};
      void deleteExecuteRegion() { this->executeRegion_ = nullptr;};
      inline string getExecuteRegion() const { DARABONBA_PTR_GET_DEFAULT(executeRegion_, "") };
      inline Data& setExecuteRegion(string executeRegion) { DARABONBA_PTR_SET_VALUE(executeRegion_, executeRegion) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // performanceType Field Functions 
      bool hasPerformanceType() const { return this->performanceType_ != nullptr;};
      void deletePerformanceType() { this->performanceType_ = nullptr;};
      inline string getPerformanceType() const { DARABONBA_PTR_GET_DEFAULT(performanceType_, "") };
      inline Data& setPerformanceType(string performanceType) { DARABONBA_PTR_SET_VALUE(performanceType_, performanceType) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline Data& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // resourceList Field Functions 
      bool hasResourceList() const { return this->resourceList_ != nullptr;};
      void deleteResourceList() { this->resourceList_ = nullptr;};
      inline const vector<Data::ResourceList> & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<Data::ResourceList>) };
      inline vector<Data::ResourceList> getResourceList() { DARABONBA_PTR_GET(resourceList_, vector<Data::ResourceList>) };
      inline Data& setResourceList(const vector<Data::ResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
      inline Data& setResourceList(vector<Data::ResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


      // runMode Field Functions 
      bool hasRunMode() const { return this->runMode_ != nullptr;};
      void deleteRunMode() { this->runMode_ = nullptr;};
      inline string getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
      inline Data& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
      inline Data& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


      // systemImageId Field Functions 
      bool hasSystemImageId() const { return this->systemImageId_ != nullptr;};
      void deleteSystemImageId() { this->systemImageId_ = nullptr;};
      inline string getSystemImageId() const { DARABONBA_PTR_GET_DEFAULT(systemImageId_, "") };
      inline Data& setSystemImageId(string systemImageId) { DARABONBA_PTR_SET_VALUE(systemImageId_, systemImageId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStepList Field Functions 
      bool hasTaskStepList() const { return this->taskStepList_ != nullptr;};
      void deleteTaskStepList() { this->taskStepList_ = nullptr;};
      inline const vector<Data::TaskStepList> & getTaskStepList() const { DARABONBA_PTR_GET_CONST(taskStepList_, vector<Data::TaskStepList>) };
      inline vector<Data::TaskStepList> getTaskStepList() { DARABONBA_PTR_GET(taskStepList_, vector<Data::TaskStepList>) };
      inline Data& setTaskStepList(const vector<Data::TaskStepList> & taskStepList) { DARABONBA_PTR_SET_VALUE(taskStepList_, taskStepList) };
      inline Data& setTaskStepList(vector<Data::TaskStepList> && taskStepList) { DARABONBA_PTR_SET_RVALUE(taskStepList_, taskStepList) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Data& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The ID of the Alibaba Cloud account to which the resource belongs.
      shared_ptr<int64_t> aliUid_ {};
      // The prompt or execution result description of the current step of the task.
      shared_ptr<string> currentTaskMessage_ {};
      // The identifier of the step that the task is currently executing. You can call the ListTaskStep operation to query the image creation and application adaptation steps.
      shared_ptr<string> currentTaskStep_ {};
      // The ID of the region where the task is actually executed.
      shared_ptr<string> executeRegion_ {};
      // The time when the task was created. The time is in ISO 8601 format, accurate to milliseconds, and the time zone offset is +00:00.
      shared_ptr<string> gmtCreate_ {};
      // The time when the task was last modified. The time is in ISO 8601 format, accurate to milliseconds, and the time zone offset is +00:00.
      shared_ptr<string> gmtModified_ {};
      // The compute type of the task creation resource.
      // 
      // Valid values:
      // 
      // - **CPU**: CPU compute resource
      // - **GPU**: GPU compute resource
      shared_ptr<string> performanceType_ {};
      // **Not enabled. The system does not return valid task progress.** Determine the task execution status based on the Status, CurrentTaskStep, and TaskStepList parameters.
      // 
      // The example "Not applicable (not enabled)" is only a description of the field status, not an actual API response example.
      shared_ptr<string> progress_ {};
      // The list of resources used for task creation, which corresponds to the creation resources submitted when the task is created.
      shared_ptr<vector<Data::ResourceList>> resourceList_ {};
      // The running mode of the task creation environment.
      // 
      // Valid values:
      // 
      // - **NORMAL**: normal running mode
      // - **COMPATIBLE**: compatible running mode
      shared_ptr<string> runMode_ {};
      // The overall status of the task.
      // 
      // Valid values:
      // 
      // - **INIT**: The task is initialized.
      // - **START**: The task is being created or executed.
      // - **SUCCESS**: The task is executed successfully.
      // - **FAILED**: The task fails to be executed.
      // - **DELETED**: The task is deleted.
      // 
      // Deleted tasks are not included in the regular valid task query scope.
      shared_ptr<string> status_ {};
      // The system disk capacity of the task creation environment. Unit: GiB.
      shared_ptr<int32_t> systemDiskSize_ {};
      // The ID of the base system image used in the task creation environment.
      shared_ptr<string> systemImageId_ {};
      // The task ID. You can use this ID to call the GetTask operation to query the task status.
      shared_ptr<string> taskId_ {};
      // The list of recorded task execution steps and results.
      shared_ptr<vector<Data::TaskStepList>> taskStepList_ {};
      // The actual type of the task.
      // 
      // Valid values:
      // 
      // - **AUTO_ADAPT**: automatic adaptation
      // - **AUTO_CREATE_IMAGE**: automatic image creation
      // - **RETRY_ADAPT**: retry of automatic adaptation
      // - **RETRY_CREATE_IMAGE**: retry of automatic image creation
      // - **AUTO_OTA_IMAGE**: automatic image OTA
      // - **AUTO_CREATE_VHD**: automatic VHD creation
      // - **RETRY_VHD**: retry of VHD creation
      // - **AUTO_CREATE_IMAGE_VHD**: automatic VHD image creation
      // - **RETRY_CREATE_IMAGE_VHD**: retry of VHD image creation
      // - **AUTO_VALIDATE_VHD**: automatic VHD validation
      // - **RETRY_VALIDATE_VHD**: retry of VHD validation
      // - **SYNCHRONIZE_APP_IMAGE**: application image synchronization
      // - **APPLY_VHD_BUILDER**: application for VHD application recording environment
      // - **RETRY_VHD_BUILDER**: retry of application for VHD recording environment
      // - **ADAPT_AUTO**: automatic application adaptation creation
      // - **ADAPT_AUTO_RETRY**: retry of automatic application adaptation creation
      // - **ADAPT_MANUAL**: manual application adaptation creation
      // - **ADAPT_MANUAL_RETRY**: retry of manual application adaptation creation
      // - **IMAGE_AUTO**: automatic image creation
      // - **IMAGE_AUTO_RETRY**: retry of automatic image creation
      // - **IMAGE_AUTO_VALIDATE**: automatic image validation
      // - **IMAGE_AUTO_VALIDATE_RETRY**: retry of automatic image validation
      // - **IMAGE_MANUAL**: manual image creation
      // - **IMAGE_MANUAL_RETRY**: retry of manual image creation
      // - **DESKTOP_CUSTOM_IMAGE**: cloud desktop custom image creation
      // - **DESKTOP_CUSTOM_IMAGE_RETRY**: retry of cloud desktop custom image creation
      // - **DESKTOP_SYNC_IMAGE**: cloud desktop image synchronization across regions
      // - **DESKTOP_SYNC_IMAGE_RETRY**: retry of cloud desktop image synchronization across regions
      // - **IMAGE_DISTRIBUTE**: image distribution to multiple regions
      // - **IMAGE_DISTRIBUTE_RETRY**: retry of image distribution
      // - **IMAGE_FROM_INSTANCE**: image creation based on an instance
      // - **IMAGE_FROM_INSTANCE_RETRY**: retry of image creation based on an instance
      // - **SNAPSHOT_DISTRIBUTE**: snapshot distribution to multiple regions
      // - **SNAPSHOT_DISTRIBUTE_RETRY**: retry of snapshot distribution
      // - **SNAPSHOT_FROM_DISK**: snapshot creation based on a disk
      // - **SNAPSHOT_FROM_DISK_RETRY**: retry of snapshot creation based on a disk
      // - **IMAGE_CLEAN_AND_CREATE**: temporary instance creation based on an image, cleanup, and final image creation
      // - **IMAGE_CLEAN_AND_CREATE_RETRY**: retry of final image creation after cleanup
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTaskResponseBody::Data) };
    inline GetTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTaskResponseBody::Data) };
    inline GetTaskResponseBody& setData(const GetTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTaskResponseBody& setData(GetTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code. This parameter is returned when the request fails. A successful response may not contain this parameter.
    shared_ptr<string> code_ {};
    // The task details.
    shared_ptr<GetTaskResponseBody::Data> data_ {};
    // The error or result message. This parameter is used to describe the cause when the request fails. A successful response may not contain this parameter.
    shared_ptr<string> message_ {};
    // The unique identifier of the request. You can provide this value when you troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was processed successfully. A value of true indicates that the request was processed successfully. To determine whether an asynchronous task is completed, you must query the task status separately.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
