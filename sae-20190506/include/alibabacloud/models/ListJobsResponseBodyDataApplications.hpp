// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYDATAAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYDATAAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobsResponseBodyDataApplicationsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListJobsResponseBodyDataApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBodyDataApplications& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CompletionTime, completionTime_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Failed, failed_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(LastChangeorderState, lastChangeorderState_);
      DARABONBA_PTR_TO_JSON(LastJobState, lastJobState_);
      DARABONBA_PTR_TO_JSON(LastStartTime, lastStartTime_);
      DARABONBA_PTR_TO_JSON(Mem, mem_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Succeeded, succeeded_);
      DARABONBA_PTR_TO_JSON(Suspend, suspend_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TriggerConfig, triggerConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBodyDataApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CompletionTime, completionTime_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Failed, failed_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(LastChangeorderState, lastChangeorderState_);
      DARABONBA_PTR_FROM_JSON(LastJobState, lastJobState_);
      DARABONBA_PTR_FROM_JSON(LastStartTime, lastStartTime_);
      DARABONBA_PTR_FROM_JSON(Mem, mem_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Succeeded, succeeded_);
      DARABONBA_PTR_FROM_JSON(Suspend, suspend_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TriggerConfig, triggerConfig_);
    };
    ListJobsResponseBodyDataApplications() = default ;
    ListJobsResponseBodyDataApplications(const ListJobsResponseBodyDataApplications &) = default ;
    ListJobsResponseBodyDataApplications(ListJobsResponseBodyDataApplications &&) = default ;
    ListJobsResponseBodyDataApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBodyDataApplications() = default ;
    ListJobsResponseBodyDataApplications& operator=(const ListJobsResponseBodyDataApplications &) = default ;
    ListJobsResponseBodyDataApplications& operator=(ListJobsResponseBodyDataApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->active_ != nullptr
        && this->appDescription_ != nullptr && this->appId_ != nullptr && this->appName_ != nullptr && this->completionTime_ != nullptr && this->cpu_ != nullptr
        && this->failed_ != nullptr && this->imageUrl_ != nullptr && this->lastChangeorderState_ != nullptr && this->lastJobState_ != nullptr && this->lastStartTime_ != nullptr
        && this->mem_ != nullptr && this->message_ != nullptr && this->namespaceId_ != nullptr && this->regionId_ != nullptr && this->succeeded_ != nullptr
        && this->suspend_ != nullptr && this->tags_ != nullptr && this->triggerConfig_ != nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline int64_t active() const { DARABONBA_PTR_GET_DEFAULT(active_, 0L) };
    inline ListJobsResponseBodyDataApplications& setActive(int64_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // appDescription Field Functions 
    bool hasAppDescription() const { return this->appDescription_ != nullptr;};
    void deleteAppDescription() { this->appDescription_ = nullptr;};
    inline string appDescription() const { DARABONBA_PTR_GET_DEFAULT(appDescription_, "") };
    inline ListJobsResponseBodyDataApplications& setAppDescription(string appDescription) { DARABONBA_PTR_SET_VALUE(appDescription_, appDescription) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListJobsResponseBodyDataApplications& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListJobsResponseBodyDataApplications& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // completionTime Field Functions 
    bool hasCompletionTime() const { return this->completionTime_ != nullptr;};
    void deleteCompletionTime() { this->completionTime_ = nullptr;};
    inline int64_t completionTime() const { DARABONBA_PTR_GET_DEFAULT(completionTime_, 0L) };
    inline ListJobsResponseBodyDataApplications& setCompletionTime(int64_t completionTime) { DARABONBA_PTR_SET_VALUE(completionTime_, completionTime) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline ListJobsResponseBodyDataApplications& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline int64_t failed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
    inline ListJobsResponseBodyDataApplications& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ListJobsResponseBodyDataApplications& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // lastChangeorderState Field Functions 
    bool hasLastChangeorderState() const { return this->lastChangeorderState_ != nullptr;};
    void deleteLastChangeorderState() { this->lastChangeorderState_ = nullptr;};
    inline string lastChangeorderState() const { DARABONBA_PTR_GET_DEFAULT(lastChangeorderState_, "") };
    inline ListJobsResponseBodyDataApplications& setLastChangeorderState(string lastChangeorderState) { DARABONBA_PTR_SET_VALUE(lastChangeorderState_, lastChangeorderState) };


    // lastJobState Field Functions 
    bool hasLastJobState() const { return this->lastJobState_ != nullptr;};
    void deleteLastJobState() { this->lastJobState_ = nullptr;};
    inline string lastJobState() const { DARABONBA_PTR_GET_DEFAULT(lastJobState_, "") };
    inline ListJobsResponseBodyDataApplications& setLastJobState(string lastJobState) { DARABONBA_PTR_SET_VALUE(lastJobState_, lastJobState) };


    // lastStartTime Field Functions 
    bool hasLastStartTime() const { return this->lastStartTime_ != nullptr;};
    void deleteLastStartTime() { this->lastStartTime_ = nullptr;};
    inline int64_t lastStartTime() const { DARABONBA_PTR_GET_DEFAULT(lastStartTime_, 0L) };
    inline ListJobsResponseBodyDataApplications& setLastStartTime(int64_t lastStartTime) { DARABONBA_PTR_SET_VALUE(lastStartTime_, lastStartTime) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int32_t mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
    inline ListJobsResponseBodyDataApplications& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListJobsResponseBodyDataApplications& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListJobsResponseBodyDataApplications& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListJobsResponseBodyDataApplications& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // succeeded Field Functions 
    bool hasSucceeded() const { return this->succeeded_ != nullptr;};
    void deleteSucceeded() { this->succeeded_ = nullptr;};
    inline int64_t succeeded() const { DARABONBA_PTR_GET_DEFAULT(succeeded_, 0L) };
    inline ListJobsResponseBodyDataApplications& setSucceeded(int64_t succeeded) { DARABONBA_PTR_SET_VALUE(succeeded_, succeeded) };


    // suspend Field Functions 
    bool hasSuspend() const { return this->suspend_ != nullptr;};
    void deleteSuspend() { this->suspend_ = nullptr;};
    inline bool suspend() const { DARABONBA_PTR_GET_DEFAULT(suspend_, false) };
    inline ListJobsResponseBodyDataApplications& setSuspend(bool suspend) { DARABONBA_PTR_SET_VALUE(suspend_, suspend) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListJobsResponseBodyDataApplicationsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListJobsResponseBodyDataApplicationsTags>) };
    inline vector<Models::ListJobsResponseBodyDataApplicationsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListJobsResponseBodyDataApplicationsTags>) };
    inline ListJobsResponseBodyDataApplications& setTags(const vector<Models::ListJobsResponseBodyDataApplicationsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListJobsResponseBodyDataApplications& setTags(vector<Models::ListJobsResponseBodyDataApplicationsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline string triggerConfig() const { DARABONBA_PTR_GET_DEFAULT(triggerConfig_, "") };
    inline ListJobsResponseBodyDataApplications& setTriggerConfig(string triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };


  protected:
    // The number of running instances.
    std::shared_ptr<int64_t> active_ = nullptr;
    // The description of the job template.
    std::shared_ptr<string> appDescription_ = nullptr;
    // The ID of the job template.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the job template.
    std::shared_ptr<string> appName_ = nullptr;
    // The time when the job was last completed.
    std::shared_ptr<int64_t> completionTime_ = nullptr;
    // The CPU specifications that are required for each instance. Unit: millicores. This parameter cannot be set to 0. Valid values:
    // 
    // *   **500**
    // *   **1000**
    // *   **2000**
    // *   **4000**
    // *   **8000**
    // *   **16000**
    // *   **32000**
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The number of instances that failed to run.
    std::shared_ptr<int64_t> failed_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    // Indicates whether the latest change order was executed. Valid values:
    // 
    // *   **0**: The latest change order failed to be executed.
    // *   **1**: The latest change order was executed.
    std::shared_ptr<string> lastChangeorderState_ = nullptr;
    // The status of the latest job. Valid values:
    // 
    // *   **0**: The job is not executed.
    // *   **1**: The job was executed.
    // *   **2**: The job failed to be executed.
    // *   **3**: The job is being executed.
    std::shared_ptr<string> lastJobState_ = nullptr;
    // The time when the job was last started.
    std::shared_ptr<int64_t> lastStartTime_ = nullptr;
    // The size of memory that is required by each instance. Unit: MB. This parameter cannot be set to 0. The values of this parameter correspond to the values of the Cpu parameter:
    // 
    // *   This parameter is set to **1024** if the Cpu parameter is set to 500 or 1000.
    // *   This parameter is set to **2048** if the Cpu parameter is set to 500, 1000, or 2000.
    // *   This parameter is set to **4096** if the Cpu parameter is set to 1000, 2000, or 4000.
    // *   This parameter is set to **8192** if the Cpu parameter is set to 2000, 4000, or 8000.
    // *   This parameter is set to **12288** if the Cpu parameter is set to 12000.
    // *   This parameter is set to **16384** if the Cpu parameter is set to 4000, 8000, or 16000.
    // *   This parameter is set to **24576** if the Cpu parameter is set to 12000.
    // *   This parameter is set to **32768** if the Cpu parameter is set to 16000.
    // *   This parameter is set to **65536** if the Cpu parameter is set to 8000, 16000, or 32000.
    // *   This parameter is set to **131072** if the Cpu parameter is set to 32000.
    std::shared_ptr<int32_t> mem_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of instances that were successfully run.
    std::shared_ptr<int64_t> succeeded_ = nullptr;
    // Indicates whether the job template is suspended.
    std::shared_ptr<bool> suspend_ = nullptr;
    // The tags of the job template.
    std::shared_ptr<vector<Models::ListJobsResponseBodyDataApplicationsTags>> tags_ = nullptr;
    std::shared_ptr<string> triggerConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
