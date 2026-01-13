// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListExecutorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Executors, executors_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Executors, executors_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListExecutorsResponseBody() = default ;
    ListExecutorsResponseBody(const ListExecutorsResponseBody &) = default ;
    ListExecutorsResponseBody(ListExecutorsResponseBody &&) = default ;
    ListExecutorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorsResponseBody() = default ;
    ListExecutorsResponseBody& operator=(const ListExecutorsResponseBody &) = default ;
    ListExecutorsResponseBody& operator=(ListExecutorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Executors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Executors& obj) { 
        DARABONBA_PTR_TO_JSON(AllocationSpec, allocationSpec_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(ArrayIndex, arrayIndex_);
        DARABONBA_PTR_TO_JSON(BlockDuration, blockDuration_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ExecutorId, executorId_);
        DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(ExternalIpAddress, externalIpAddress_);
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(Preemptible, preemptible_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskSustainable, taskSustainable_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      };
      friend void from_json(const Darabonba::Json& j, Executors& obj) { 
        DARABONBA_PTR_FROM_JSON(AllocationSpec, allocationSpec_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(ArrayIndex, arrayIndex_);
        DARABONBA_PTR_FROM_JSON(BlockDuration, blockDuration_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ExecutorId, executorId_);
        DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(ExternalIpAddress, externalIpAddress_);
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(Preemptible, preemptible_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskSustainable, taskSustainable_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      };
      Executors() = default ;
      Executors(const Executors &) = default ;
      Executors(Executors &&) = default ;
      Executors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Executors() = default ;
      Executors& operator=(const Executors &) = default ;
      Executors& operator=(Executors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The key of the executor tag.
        shared_ptr<string> tagKey_ {};
        // The value of the executor tag.
        shared_ptr<string> tagValue_ {};
      };

      class Resource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Resource& obj) { 
          DARABONBA_PTR_TO_JSON(Cores, cores_);
          DARABONBA_PTR_TO_JSON(Disks, disks_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
        };
        friend void from_json(const Darabonba::Json& j, Resource& obj) { 
          DARABONBA_PTR_FROM_JSON(Cores, cores_);
          DARABONBA_PTR_FROM_JSON(Disks, disks_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
        };
        Resource() = default ;
        Resource(const Resource &) = default ;
        Resource(Resource &&) = default ;
        Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Resource() = default ;
        Resource& operator=(const Resource &) = default ;
        Resource& operator=(Resource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Disks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Disks& obj) { 
            DARABONBA_PTR_TO_JSON(Size, size_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Disks& obj) { 
            DARABONBA_PTR_FROM_JSON(Size, size_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Disks() = default ;
          Disks(const Disks &) = default ;
          Disks(Disks &&) = default ;
          Disks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Disks() = default ;
          Disks& operator=(const Disks &) = default ;
          Disks& operator=(Disks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->size_ == nullptr
        && this->type_ == nullptr; };
          // size Field Functions 
          bool hasSize() const { return this->size_ != nullptr;};
          void deleteSize() { this->size_ = nullptr;};
          inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
          inline Disks& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Disks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The size of the disk.
          shared_ptr<int32_t> size_ {};
          // The category of the disk. The following disk categories are supported:
          // 
          // *   System: system disk.
          // *   Data: data disk.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->cores_ == nullptr
        && this->disks_ == nullptr && this->instanceType_ == nullptr && this->memory_ == nullptr; };
        // cores Field Functions 
        bool hasCores() const { return this->cores_ != nullptr;};
        void deleteCores() { this->cores_ = nullptr;};
        inline float getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0.0) };
        inline Resource& setCores(float cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


        // disks Field Functions 
        bool hasDisks() const { return this->disks_ != nullptr;};
        void deleteDisks() { this->disks_ = nullptr;};
        inline const vector<Resource::Disks> & getDisks() const { DARABONBA_PTR_GET_CONST(disks_, vector<Resource::Disks>) };
        inline vector<Resource::Disks> getDisks() { DARABONBA_PTR_GET(disks_, vector<Resource::Disks>) };
        inline Resource& setDisks(const vector<Resource::Disks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
        inline Resource& setDisks(vector<Resource::Disks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline Resource& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
        inline Resource& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      protected:
        // The number of running CPUs.
        shared_ptr<float> cores_ {};
        // The array of the disks.
        shared_ptr<vector<Resource::Disks>> disks_ {};
        shared_ptr<string> instanceType_ {};
        // The total amount of memory resources. Unit: GiB.
        shared_ptr<float> memory_ {};
      };

      virtual bool empty() const override { return this->allocationSpec_ == nullptr
        && this->appName_ == nullptr && this->arrayIndex_ == nullptr && this->blockDuration_ == nullptr && this->createTime_ == nullptr && this->endTime_ == nullptr
        && this->executorId_ == nullptr && this->expirationTime_ == nullptr && this->externalIpAddress_ == nullptr && this->hostName_ == nullptr && this->image_ == nullptr
        && this->ipAddress_ == nullptr && this->jobId_ == nullptr && this->jobName_ == nullptr && this->preemptible_ == nullptr && this->resource_ == nullptr
        && this->resourceType_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr && this->tags_ == nullptr
        && this->taskName_ == nullptr && this->taskSustainable_ == nullptr && this->vpcId_ == nullptr && this->vswitchId_ == nullptr; };
      // allocationSpec Field Functions 
      bool hasAllocationSpec() const { return this->allocationSpec_ != nullptr;};
      void deleteAllocationSpec() { this->allocationSpec_ = nullptr;};
      inline string getAllocationSpec() const { DARABONBA_PTR_GET_DEFAULT(allocationSpec_, "") };
      inline Executors& setAllocationSpec(string allocationSpec) { DARABONBA_PTR_SET_VALUE(allocationSpec_, allocationSpec) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Executors& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // arrayIndex Field Functions 
      bool hasArrayIndex() const { return this->arrayIndex_ != nullptr;};
      void deleteArrayIndex() { this->arrayIndex_ = nullptr;};
      inline int32_t getArrayIndex() const { DARABONBA_PTR_GET_DEFAULT(arrayIndex_, 0) };
      inline Executors& setArrayIndex(int32_t arrayIndex) { DARABONBA_PTR_SET_VALUE(arrayIndex_, arrayIndex) };


      // blockDuration Field Functions 
      bool hasBlockDuration() const { return this->blockDuration_ != nullptr;};
      void deleteBlockDuration() { this->blockDuration_ = nullptr;};
      inline int32_t getBlockDuration() const { DARABONBA_PTR_GET_DEFAULT(blockDuration_, 0) };
      inline Executors& setBlockDuration(int32_t blockDuration) { DARABONBA_PTR_SET_VALUE(blockDuration_, blockDuration) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Executors& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Executors& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // executorId Field Functions 
      bool hasExecutorId() const { return this->executorId_ != nullptr;};
      void deleteExecutorId() { this->executorId_ = nullptr;};
      inline string getExecutorId() const { DARABONBA_PTR_GET_DEFAULT(executorId_, "") };
      inline Executors& setExecutorId(string executorId) { DARABONBA_PTR_SET_VALUE(executorId_, executorId) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline string getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, "") };
      inline Executors& setExpirationTime(string expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // externalIpAddress Field Functions 
      bool hasExternalIpAddress() const { return this->externalIpAddress_ != nullptr;};
      void deleteExternalIpAddress() { this->externalIpAddress_ = nullptr;};
      inline const vector<string> & getExternalIpAddress() const { DARABONBA_PTR_GET_CONST(externalIpAddress_, vector<string>) };
      inline vector<string> getExternalIpAddress() { DARABONBA_PTR_GET(externalIpAddress_, vector<string>) };
      inline Executors& setExternalIpAddress(const vector<string> & externalIpAddress) { DARABONBA_PTR_SET_VALUE(externalIpAddress_, externalIpAddress) };
      inline Executors& setExternalIpAddress(vector<string> && externalIpAddress) { DARABONBA_PTR_SET_RVALUE(externalIpAddress_, externalIpAddress) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline const vector<string> & getHostName() const { DARABONBA_PTR_GET_CONST(hostName_, vector<string>) };
      inline vector<string> getHostName() { DARABONBA_PTR_GET(hostName_, vector<string>) };
      inline Executors& setHostName(const vector<string> & hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };
      inline Executors& setHostName(vector<string> && hostName) { DARABONBA_PTR_SET_RVALUE(hostName_, hostName) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
      inline Executors& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


      // ipAddress Field Functions 
      bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
      void deleteIpAddress() { this->ipAddress_ = nullptr;};
      inline const vector<string> & getIpAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<string>) };
      inline vector<string> getIpAddress() { DARABONBA_PTR_GET(ipAddress_, vector<string>) };
      inline Executors& setIpAddress(const vector<string> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
      inline Executors& setIpAddress(vector<string> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Executors& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline Executors& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // preemptible Field Functions 
      bool hasPreemptible() const { return this->preemptible_ != nullptr;};
      void deletePreemptible() { this->preemptible_ = nullptr;};
      inline bool getPreemptible() const { DARABONBA_PTR_GET_DEFAULT(preemptible_, false) };
      inline Executors& setPreemptible(bool preemptible) { DARABONBA_PTR_SET_VALUE(preemptible_, preemptible) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline const Executors::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, Executors::Resource) };
      inline Executors::Resource getResource() { DARABONBA_PTR_GET(resource_, Executors::Resource) };
      inline Executors& setResource(const Executors::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
      inline Executors& setResource(Executors::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Executors& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Executors& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Executors& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline Executors& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Executors::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Executors::Tags>) };
      inline vector<Executors::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Executors::Tags>) };
      inline Executors& setTags(const vector<Executors::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Executors& setTags(vector<Executors::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Executors& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskSustainable Field Functions 
      bool hasTaskSustainable() const { return this->taskSustainable_ != nullptr;};
      void deleteTaskSustainable() { this->taskSustainable_ = nullptr;};
      inline bool getTaskSustainable() const { DARABONBA_PTR_GET_DEFAULT(taskSustainable_, false) };
      inline Executors& setTaskSustainable(bool taskSustainable) { DARABONBA_PTR_SET_VALUE(taskSustainable_, taskSustainable) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Executors& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline Executors& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    protected:
      shared_ptr<string> allocationSpec_ {};
      shared_ptr<string> appName_ {};
      // The executor number.
      shared_ptr<int32_t> arrayIndex_ {};
      shared_ptr<int32_t> blockDuration_ {};
      // The time when the instance was created.
      shared_ptr<string> createTime_ {};
      // The end time.
      shared_ptr<string> endTime_ {};
      // The executor ID. The format is JobId-TaskName-ArrayIndex.
      shared_ptr<string> executorId_ {};
      shared_ptr<string> expirationTime_ {};
      // The list of public IP addresses of the nodes.
      shared_ptr<vector<string>> externalIpAddress_ {};
      // The list of hostnames.
      shared_ptr<vector<string>> hostName_ {};
      // Executor image.
      shared_ptr<string> image_ {};
      // The list of internal IP addresses.
      shared_ptr<vector<string>> ipAddress_ {};
      // The job ID.
      shared_ptr<string> jobId_ {};
      // The job name.
      shared_ptr<string> jobName_ {};
      shared_ptr<bool> preemptible_ {};
      // The resource information.
      shared_ptr<Executors::Resource> resource_ {};
      // The type of the resource.
      shared_ptr<string> resourceType_ {};
      // The start time.
      shared_ptr<string> startTime_ {};
      // The status of the executor. Valid values:
      // 
      // *   Pending
      // *   Initing
      // *   Succeed
      // *   Failed
      // *   Running
      // *   Unknown
      // *   Exception
      // *   Retrying
      // *   Expired
      // *   Deleted
      shared_ptr<string> status_ {};
      // The description of the status reason.
      shared_ptr<string> statusReason_ {};
      // The list of executor tags.
      shared_ptr<vector<Executors::Tags>> tags_ {};
      // The name of the task.
      shared_ptr<string> taskName_ {};
      // Indicate whether the job is a long-running job.
      shared_ptr<bool> taskSustainable_ {};
      shared_ptr<string> vpcId_ {};
      // The ID of the vSwitch.
      shared_ptr<string> vswitchId_ {};
    };

    virtual bool empty() const override { return this->executors_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // executors Field Functions 
    bool hasExecutors() const { return this->executors_ != nullptr;};
    void deleteExecutors() { this->executors_ = nullptr;};
    inline const vector<ListExecutorsResponseBody::Executors> & getExecutors() const { DARABONBA_PTR_GET_CONST(executors_, vector<ListExecutorsResponseBody::Executors>) };
    inline vector<ListExecutorsResponseBody::Executors> getExecutors() { DARABONBA_PTR_GET(executors_, vector<ListExecutorsResponseBody::Executors>) };
    inline ListExecutorsResponseBody& setExecutors(const vector<ListExecutorsResponseBody::Executors> & executors) { DARABONBA_PTR_SET_VALUE(executors_, executors) };
    inline ListExecutorsResponseBody& setExecutors(vector<ListExecutorsResponseBody::Executors> && executors) { DARABONBA_PTR_SET_RVALUE(executors_, executors) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListExecutorsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListExecutorsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExecutorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListExecutorsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Executor list.
    shared_ptr<vector<ListExecutorsResponseBody::Executors>> executors_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
