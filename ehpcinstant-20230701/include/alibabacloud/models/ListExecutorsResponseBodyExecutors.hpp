// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTORSRESPONSEBODYEXECUTORS_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTORSRESPONSEBODYEXECUTORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExecutorsResponseBodyExecutorsResource.hpp>
#include <alibabacloud/models/ListExecutorsResponseBodyExecutorsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListExecutorsResponseBodyExecutors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorsResponseBodyExecutors& obj) { 
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
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorsResponseBodyExecutors& obj) { 
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
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    ListExecutorsResponseBodyExecutors() = default ;
    ListExecutorsResponseBodyExecutors(const ListExecutorsResponseBodyExecutors &) = default ;
    ListExecutorsResponseBodyExecutors(ListExecutorsResponseBodyExecutors &&) = default ;
    ListExecutorsResponseBodyExecutors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorsResponseBodyExecutors() = default ;
    ListExecutorsResponseBodyExecutors& operator=(const ListExecutorsResponseBodyExecutors &) = default ;
    ListExecutorsResponseBodyExecutors& operator=(ListExecutorsResponseBodyExecutors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->arrayIndex_ != nullptr && this->blockDuration_ != nullptr && this->createTime_ != nullptr && this->endTime_ != nullptr && this->executorId_ != nullptr
        && this->expirationTime_ != nullptr && this->externalIpAddress_ != nullptr && this->hostName_ != nullptr && this->image_ != nullptr && this->ipAddress_ != nullptr
        && this->jobId_ != nullptr && this->jobName_ != nullptr && this->preemptible_ != nullptr && this->resource_ != nullptr && this->resourceType_ != nullptr
        && this->startTime_ != nullptr && this->status_ != nullptr && this->statusReason_ != nullptr && this->tags_ != nullptr && this->taskName_ != nullptr
        && this->taskSustainable_ != nullptr && this->vswitchId_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListExecutorsResponseBodyExecutors& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // arrayIndex Field Functions 
    bool hasArrayIndex() const { return this->arrayIndex_ != nullptr;};
    void deleteArrayIndex() { this->arrayIndex_ = nullptr;};
    inline int32_t arrayIndex() const { DARABONBA_PTR_GET_DEFAULT(arrayIndex_, 0) };
    inline ListExecutorsResponseBodyExecutors& setArrayIndex(int32_t arrayIndex) { DARABONBA_PTR_SET_VALUE(arrayIndex_, arrayIndex) };


    // blockDuration Field Functions 
    bool hasBlockDuration() const { return this->blockDuration_ != nullptr;};
    void deleteBlockDuration() { this->blockDuration_ = nullptr;};
    inline int32_t blockDuration() const { DARABONBA_PTR_GET_DEFAULT(blockDuration_, 0) };
    inline ListExecutorsResponseBodyExecutors& setBlockDuration(int32_t blockDuration) { DARABONBA_PTR_SET_VALUE(blockDuration_, blockDuration) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListExecutorsResponseBodyExecutors& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListExecutorsResponseBodyExecutors& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executorId Field Functions 
    bool hasExecutorId() const { return this->executorId_ != nullptr;};
    void deleteExecutorId() { this->executorId_ = nullptr;};
    inline string executorId() const { DARABONBA_PTR_GET_DEFAULT(executorId_, "") };
    inline ListExecutorsResponseBodyExecutors& setExecutorId(string executorId) { DARABONBA_PTR_SET_VALUE(executorId_, executorId) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline string expirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, "") };
    inline ListExecutorsResponseBodyExecutors& setExpirationTime(string expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // externalIpAddress Field Functions 
    bool hasExternalIpAddress() const { return this->externalIpAddress_ != nullptr;};
    void deleteExternalIpAddress() { this->externalIpAddress_ = nullptr;};
    inline const vector<string> & externalIpAddress() const { DARABONBA_PTR_GET_CONST(externalIpAddress_, vector<string>) };
    inline vector<string> externalIpAddress() { DARABONBA_PTR_GET(externalIpAddress_, vector<string>) };
    inline ListExecutorsResponseBodyExecutors& setExternalIpAddress(const vector<string> & externalIpAddress) { DARABONBA_PTR_SET_VALUE(externalIpAddress_, externalIpAddress) };
    inline ListExecutorsResponseBodyExecutors& setExternalIpAddress(vector<string> && externalIpAddress) { DARABONBA_PTR_SET_RVALUE(externalIpAddress_, externalIpAddress) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline const vector<string> & hostName() const { DARABONBA_PTR_GET_CONST(hostName_, vector<string>) };
    inline vector<string> hostName() { DARABONBA_PTR_GET(hostName_, vector<string>) };
    inline ListExecutorsResponseBodyExecutors& setHostName(const vector<string> & hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };
    inline ListExecutorsResponseBodyExecutors& setHostName(vector<string> && hostName) { DARABONBA_PTR_SET_RVALUE(hostName_, hostName) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ListExecutorsResponseBodyExecutors& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline const vector<string> & ipAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<string>) };
    inline vector<string> ipAddress() { DARABONBA_PTR_GET(ipAddress_, vector<string>) };
    inline ListExecutorsResponseBodyExecutors& setIpAddress(const vector<string> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
    inline ListExecutorsResponseBodyExecutors& setIpAddress(vector<string> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListExecutorsResponseBodyExecutors& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListExecutorsResponseBodyExecutors& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // preemptible Field Functions 
    bool hasPreemptible() const { return this->preemptible_ != nullptr;};
    void deletePreemptible() { this->preemptible_ = nullptr;};
    inline bool preemptible() const { DARABONBA_PTR_GET_DEFAULT(preemptible_, false) };
    inline ListExecutorsResponseBodyExecutors& setPreemptible(bool preemptible) { DARABONBA_PTR_SET_VALUE(preemptible_, preemptible) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const Models::ListExecutorsResponseBodyExecutorsResource & resource() const { DARABONBA_PTR_GET_CONST(resource_, Models::ListExecutorsResponseBodyExecutorsResource) };
    inline Models::ListExecutorsResponseBodyExecutorsResource resource() { DARABONBA_PTR_GET(resource_, Models::ListExecutorsResponseBodyExecutorsResource) };
    inline ListExecutorsResponseBodyExecutors& setResource(const Models::ListExecutorsResponseBodyExecutorsResource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline ListExecutorsResponseBodyExecutors& setResource(Models::ListExecutorsResponseBodyExecutorsResource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListExecutorsResponseBodyExecutors& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListExecutorsResponseBodyExecutors& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListExecutorsResponseBodyExecutors& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline ListExecutorsResponseBodyExecutors& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListExecutorsResponseBodyExecutorsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListExecutorsResponseBodyExecutorsTags>) };
    inline vector<Models::ListExecutorsResponseBodyExecutorsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListExecutorsResponseBodyExecutorsTags>) };
    inline ListExecutorsResponseBodyExecutors& setTags(const vector<Models::ListExecutorsResponseBodyExecutorsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListExecutorsResponseBodyExecutors& setTags(vector<Models::ListExecutorsResponseBodyExecutorsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListExecutorsResponseBodyExecutors& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskSustainable Field Functions 
    bool hasTaskSustainable() const { return this->taskSustainable_ != nullptr;};
    void deleteTaskSustainable() { this->taskSustainable_ = nullptr;};
    inline bool taskSustainable() const { DARABONBA_PTR_GET_DEFAULT(taskSustainable_, false) };
    inline ListExecutorsResponseBodyExecutors& setTaskSustainable(bool taskSustainable) { DARABONBA_PTR_SET_VALUE(taskSustainable_, taskSustainable) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline ListExecutorsResponseBodyExecutors& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<int32_t> arrayIndex_ = nullptr;
    std::shared_ptr<int32_t> blockDuration_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> executorId_ = nullptr;
    std::shared_ptr<string> expirationTime_ = nullptr;
    std::shared_ptr<vector<string>> externalIpAddress_ = nullptr;
    std::shared_ptr<vector<string>> hostName_ = nullptr;
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<vector<string>> ipAddress_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<bool> preemptible_ = nullptr;
    std::shared_ptr<Models::ListExecutorsResponseBodyExecutorsResource> resource_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusReason_ = nullptr;
    std::shared_ptr<vector<Models::ListExecutorsResponseBodyExecutorsTags>> tags_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<bool> taskSustainable_ = nullptr;
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
