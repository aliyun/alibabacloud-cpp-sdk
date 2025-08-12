// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMPRELOADTASKSRESPONSEBODYPRELOADTASKSPRELOADTASK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMPRELOADTASKSRESPONSEBODYPRELOADTASKSPRELOADTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(PlayUrl, playUrl_);
      DARABONBA_PTR_TO_JSON(PreloadedEndTime, preloadedEndTime_);
      DARABONBA_PTR_TO_JSON(PreloadedStartTime, preloadedStartTime_);
      DARABONBA_PTR_TO_JSON(Process, process_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(PlayUrl, playUrl_);
      DARABONBA_PTR_FROM_JSON(PreloadedEndTime, preloadedEndTime_);
      DARABONBA_PTR_FROM_JSON(PreloadedStartTime, preloadedStartTime_);
      DARABONBA_PTR_FROM_JSON(Process, process_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask() = default ;
    DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask(const DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask &) = default ;
    DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask(DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask &&) = default ;
    DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask() = default ;
    DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask& operator=(const DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask &) = default ;
    DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask& operator=(DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->area_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->domainName_ != nullptr && this->playUrl_ != nullptr && this->preloadedEndTime_ != nullptr
        && this->preloadedStartTime_ != nullptr && this->process_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // playUrl Field Functions 
    bool hasPlayUrl() const { return this->playUrl_ != nullptr;};
    void deletePlayUrl() { this->playUrl_ = nullptr;};
    inline string playUrl() const { DARABONBA_PTR_GET_DEFAULT(playUrl_, "") };
    inline DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask& setPlayUrl(string playUrl) { DARABONBA_PTR_SET_VALUE(playUrl_, playUrl) };


    // preloadedEndTime Field Functions 
    bool hasPreloadedEndTime() const { return this->preloadedEndTime_ != nullptr;};
    void deletePreloadedEndTime() { this->preloadedEndTime_ = nullptr;};
    inline string preloadedEndTime() const { DARABONBA_PTR_GET_DEFAULT(preloadedEndTime_, "") };
    inline DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask& setPreloadedEndTime(string preloadedEndTime) { DARABONBA_PTR_SET_VALUE(preloadedEndTime_, preloadedEndTime) };


    // preloadedStartTime Field Functions 
    bool hasPreloadedStartTime() const { return this->preloadedStartTime_ != nullptr;};
    void deletePreloadedStartTime() { this->preloadedStartTime_ = nullptr;};
    inline string preloadedStartTime() const { DARABONBA_PTR_GET_DEFAULT(preloadedStartTime_, "") };
    inline DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask& setPreloadedStartTime(string preloadedStartTime) { DARABONBA_PTR_SET_VALUE(preloadedStartTime_, preloadedStartTime) };


    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline string process() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
    inline DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The acceleration region where the live content is prefetched. Valid values:
    // 
    // *   domestic: regions in the Chinese mainland.
    // *   overseas: regions outside the Chinese mainland.
    // *   global: regions in and outside the Chinese mainland.
    // 
    // >  If this parameter is left empty, the acceleration region configured for the domain name is returned.
    std::shared_ptr<string> area_ = nullptr;
    // The time when the prefetch task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether the prefetch task is successful. Valid values:
    // 
    // *   Successfully
    // *   InternalError
    std::shared_ptr<string> description_ = nullptr;
    // The streaming domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The streaming URL.
    std::shared_ptr<string> playUrl_ = nullptr;
    // The time when the prefetch task ended.
    std::shared_ptr<string> preloadedEndTime_ = nullptr;
    // The time when the prefetch task started.
    std::shared_ptr<string> preloadedStartTime_ = nullptr;
    // The progress of the prefetch task.
    std::shared_ptr<string> process_ = nullptr;
    // The status of the prefetch task. Valid values:
    // 
    // *   Success
    // *   Failed
    // 
    // >  Success is returned only if the prefetch task is configured for all streaming URLs.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the prefetch task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
