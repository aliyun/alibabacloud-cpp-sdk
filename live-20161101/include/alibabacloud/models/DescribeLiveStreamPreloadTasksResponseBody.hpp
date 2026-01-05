// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMPRELOADTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMPRELOADTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamPreloadTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamPreloadTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PreloadTasks, preloadTasks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamPreloadTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PreloadTasks, preloadTasks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeLiveStreamPreloadTasksResponseBody() = default ;
    DescribeLiveStreamPreloadTasksResponseBody(const DescribeLiveStreamPreloadTasksResponseBody &) = default ;
    DescribeLiveStreamPreloadTasksResponseBody(DescribeLiveStreamPreloadTasksResponseBody &&) = default ;
    DescribeLiveStreamPreloadTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamPreloadTasksResponseBody() = default ;
    DescribeLiveStreamPreloadTasksResponseBody& operator=(const DescribeLiveStreamPreloadTasksResponseBody &) = default ;
    DescribeLiveStreamPreloadTasksResponseBody& operator=(DescribeLiveStreamPreloadTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PreloadTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PreloadTasks& obj) { 
        DARABONBA_PTR_TO_JSON(PreloadTask, preloadTask_);
      };
      friend void from_json(const Darabonba::Json& j, PreloadTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(PreloadTask, preloadTask_);
      };
      PreloadTasks() = default ;
      PreloadTasks(const PreloadTasks &) = default ;
      PreloadTasks(PreloadTasks &&) = default ;
      PreloadTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PreloadTasks() = default ;
      PreloadTasks& operator=(const PreloadTasks &) = default ;
      PreloadTasks& operator=(PreloadTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PreloadTask : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PreloadTask& obj) { 
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
        friend void from_json(const Darabonba::Json& j, PreloadTask& obj) { 
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
        PreloadTask() = default ;
        PreloadTask(const PreloadTask &) = default ;
        PreloadTask(PreloadTask &&) = default ;
        PreloadTask(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PreloadTask() = default ;
        PreloadTask& operator=(const PreloadTask &) = default ;
        PreloadTask& operator=(PreloadTask &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->area_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->domainName_ == nullptr && this->playUrl_ == nullptr && this->preloadedEndTime_ == nullptr
        && this->preloadedStartTime_ == nullptr && this->process_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr; };
        // area Field Functions 
        bool hasArea() const { return this->area_ != nullptr;};
        void deleteArea() { this->area_ = nullptr;};
        inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
        inline PreloadTask& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline PreloadTask& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PreloadTask& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline PreloadTask& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // playUrl Field Functions 
        bool hasPlayUrl() const { return this->playUrl_ != nullptr;};
        void deletePlayUrl() { this->playUrl_ = nullptr;};
        inline string getPlayUrl() const { DARABONBA_PTR_GET_DEFAULT(playUrl_, "") };
        inline PreloadTask& setPlayUrl(string playUrl) { DARABONBA_PTR_SET_VALUE(playUrl_, playUrl) };


        // preloadedEndTime Field Functions 
        bool hasPreloadedEndTime() const { return this->preloadedEndTime_ != nullptr;};
        void deletePreloadedEndTime() { this->preloadedEndTime_ = nullptr;};
        inline string getPreloadedEndTime() const { DARABONBA_PTR_GET_DEFAULT(preloadedEndTime_, "") };
        inline PreloadTask& setPreloadedEndTime(string preloadedEndTime) { DARABONBA_PTR_SET_VALUE(preloadedEndTime_, preloadedEndTime) };


        // preloadedStartTime Field Functions 
        bool hasPreloadedStartTime() const { return this->preloadedStartTime_ != nullptr;};
        void deletePreloadedStartTime() { this->preloadedStartTime_ = nullptr;};
        inline string getPreloadedStartTime() const { DARABONBA_PTR_GET_DEFAULT(preloadedStartTime_, "") };
        inline PreloadTask& setPreloadedStartTime(string preloadedStartTime) { DARABONBA_PTR_SET_VALUE(preloadedStartTime_, preloadedStartTime) };


        // process Field Functions 
        bool hasProcess() const { return this->process_ != nullptr;};
        void deleteProcess() { this->process_ = nullptr;};
        inline string getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
        inline PreloadTask& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PreloadTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline PreloadTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        // The acceleration region where the live content is prefetched. Valid values:
        // 
        // *   domestic: regions in the Chinese mainland.
        // *   overseas: regions outside the Chinese mainland.
        // *   global: regions in and outside the Chinese mainland.
        // 
        // >  If this parameter is left empty, the acceleration region configured for the domain name is returned.
        shared_ptr<string> area_ {};
        // The time when the prefetch task was created.
        shared_ptr<string> createTime_ {};
        // Indicates whether the prefetch task is successful. Valid values:
        // 
        // *   Successfully
        // *   InternalError
        shared_ptr<string> description_ {};
        // The streaming domain name.
        shared_ptr<string> domainName_ {};
        // The streaming URL.
        shared_ptr<string> playUrl_ {};
        // The time when the prefetch task ended.
        shared_ptr<string> preloadedEndTime_ {};
        // The time when the prefetch task started.
        shared_ptr<string> preloadedStartTime_ {};
        // The progress of the prefetch task.
        shared_ptr<string> process_ {};
        // The status of the prefetch task. Valid values:
        // 
        // *   Success
        // *   Failed
        // 
        // >  Success is returned only if the prefetch task is configured for all streaming URLs.
        shared_ptr<string> status_ {};
        // The ID of the prefetch task.
        shared_ptr<string> taskId_ {};
      };

      virtual bool empty() const override { return this->preloadTask_ == nullptr; };
      // preloadTask Field Functions 
      bool hasPreloadTask() const { return this->preloadTask_ != nullptr;};
      void deletePreloadTask() { this->preloadTask_ = nullptr;};
      inline const vector<PreloadTasks::PreloadTask> & getPreloadTask() const { DARABONBA_PTR_GET_CONST(preloadTask_, vector<PreloadTasks::PreloadTask>) };
      inline vector<PreloadTasks::PreloadTask> getPreloadTask() { DARABONBA_PTR_GET(preloadTask_, vector<PreloadTasks::PreloadTask>) };
      inline PreloadTasks& setPreloadTask(const vector<PreloadTasks::PreloadTask> & preloadTask) { DARABONBA_PTR_SET_VALUE(preloadTask_, preloadTask) };
      inline PreloadTasks& setPreloadTask(vector<PreloadTasks::PreloadTask> && preloadTask) { DARABONBA_PTR_SET_RVALUE(preloadTask_, preloadTask) };


    protected:
      shared_ptr<vector<PreloadTasks::PreloadTask>> preloadTask_ {};
    };

    virtual bool empty() const override { return this->pageNum_ == nullptr
        && this->pageSize_ == nullptr && this->preloadTasks_ == nullptr && this->requestId_ == nullptr && this->totalNum_ == nullptr && this->totalPage_ == nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeLiveStreamPreloadTasksResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveStreamPreloadTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // preloadTasks Field Functions 
    bool hasPreloadTasks() const { return this->preloadTasks_ != nullptr;};
    void deletePreloadTasks() { this->preloadTasks_ = nullptr;};
    inline const DescribeLiveStreamPreloadTasksResponseBody::PreloadTasks & getPreloadTasks() const { DARABONBA_PTR_GET_CONST(preloadTasks_, DescribeLiveStreamPreloadTasksResponseBody::PreloadTasks) };
    inline DescribeLiveStreamPreloadTasksResponseBody::PreloadTasks getPreloadTasks() { DARABONBA_PTR_GET(preloadTasks_, DescribeLiveStreamPreloadTasksResponseBody::PreloadTasks) };
    inline DescribeLiveStreamPreloadTasksResponseBody& setPreloadTasks(const DescribeLiveStreamPreloadTasksResponseBody::PreloadTasks & preloadTasks) { DARABONBA_PTR_SET_VALUE(preloadTasks_, preloadTasks) };
    inline DescribeLiveStreamPreloadTasksResponseBody& setPreloadTasks(DescribeLiveStreamPreloadTasksResponseBody::PreloadTasks && preloadTasks) { DARABONBA_PTR_SET_RVALUE(preloadTasks_, preloadTasks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamPreloadTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeLiveStreamPreloadTasksResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeLiveStreamPreloadTasksResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The details of the prefetch task.
    shared_ptr<DescribeLiveStreamPreloadTasksResponseBody::PreloadTasks> preloadTasks_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalNum_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
