// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETVIDEOCLIPTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETVIDEOCLIPTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchGetVideoClipTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetVideoClipTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(taskList, taskList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetVideoClipTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(taskList, taskList_);
    };
    BatchGetVideoClipTaskResponseBody() = default ;
    BatchGetVideoClipTaskResponseBody(const BatchGetVideoClipTaskResponseBody &) = default ;
    BatchGetVideoClipTaskResponseBody(BatchGetVideoClipTaskResponseBody &&) = default ;
    BatchGetVideoClipTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetVideoClipTaskResponseBody() = default ;
    BatchGetVideoClipTaskResponseBody& operator=(const BatchGetVideoClipTaskResponseBody &) = default ;
    BatchGetVideoClipTaskResponseBody& operator=(BatchGetVideoClipTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskList& obj) { 
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(totalDuration, totalDuration_);
        DARABONBA_PTR_TO_JSON(totalToken, totalToken_);
        DARABONBA_PTR_TO_JSON(videoList, videoList_);
      };
      friend void from_json(const Darabonba::Json& j, TaskList& obj) { 
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(totalDuration, totalDuration_);
        DARABONBA_PTR_FROM_JSON(totalToken, totalToken_);
        DARABONBA_PTR_FROM_JSON(videoList, videoList_);
      };
      TaskList() = default ;
      TaskList(const TaskList &) = default ;
      TaskList(TaskList &&) = default ;
      TaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskList() = default ;
      TaskList& operator=(const TaskList &) = default ;
      TaskList& operator=(TaskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VideoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoList& obj) { 
          DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(endTime, endTime_);
          DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(title, title_);
          DARABONBA_PTR_TO_JSON(videoDownloadUrl, videoDownloadUrl_);
          DARABONBA_PTR_TO_JSON(videoName, videoName_);
          DARABONBA_PTR_TO_JSON(videoUrl, videoUrl_);
        };
        friend void from_json(const Darabonba::Json& j, VideoList& obj) { 
          DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(endTime, endTime_);
          DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(title, title_);
          DARABONBA_PTR_FROM_JSON(videoDownloadUrl, videoDownloadUrl_);
          DARABONBA_PTR_FROM_JSON(videoName, videoName_);
          DARABONBA_PTR_FROM_JSON(videoUrl, videoUrl_);
        };
        VideoList() = default ;
        VideoList(const VideoList &) = default ;
        VideoList(VideoList &&) = default ;
        VideoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoList() = default ;
        VideoList& operator=(const VideoList &) = default ;
        VideoList& operator=(VideoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->description_ == nullptr && this->endTime_ == nullptr && this->errorMsg_ == nullptr && this->title_ == nullptr && this->videoDownloadUrl_ == nullptr
        && this->videoName_ == nullptr && this->videoUrl_ == nullptr; };
        // beginTime Field Functions 
        bool hasBeginTime() const { return this->beginTime_ != nullptr;};
        void deleteBeginTime() { this->beginTime_ = nullptr;};
        inline int32_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0) };
        inline VideoList& setBeginTime(int32_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline VideoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
        inline VideoList& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline VideoList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline VideoList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // videoDownloadUrl Field Functions 
        bool hasVideoDownloadUrl() const { return this->videoDownloadUrl_ != nullptr;};
        void deleteVideoDownloadUrl() { this->videoDownloadUrl_ = nullptr;};
        inline string getVideoDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(videoDownloadUrl_, "") };
        inline VideoList& setVideoDownloadUrl(string videoDownloadUrl) { DARABONBA_PTR_SET_VALUE(videoDownloadUrl_, videoDownloadUrl) };


        // videoName Field Functions 
        bool hasVideoName() const { return this->videoName_ != nullptr;};
        void deleteVideoName() { this->videoName_ = nullptr;};
        inline string getVideoName() const { DARABONBA_PTR_GET_DEFAULT(videoName_, "") };
        inline VideoList& setVideoName(string videoName) { DARABONBA_PTR_SET_VALUE(videoName_, videoName) };


        // videoUrl Field Functions 
        bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
        void deleteVideoUrl() { this->videoUrl_ = nullptr;};
        inline string getVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
        inline VideoList& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


      protected:
        shared_ptr<int32_t> beginTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<int32_t> endTime_ {};
        shared_ptr<string> errorMsg_ {};
        shared_ptr<string> title_ {};
        shared_ptr<string> videoDownloadUrl_ {};
        shared_ptr<string> videoName_ {};
        shared_ptr<string> videoUrl_ {};
      };

      virtual bool empty() const override { return this->status_ == nullptr
        && this->taskId_ == nullptr && this->totalDuration_ == nullptr && this->totalToken_ == nullptr && this->videoList_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TaskList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // totalDuration Field Functions 
      bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
      void deleteTotalDuration() { this->totalDuration_ = nullptr;};
      inline double getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0.0) };
      inline TaskList& setTotalDuration(double totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


      // totalToken Field Functions 
      bool hasTotalToken() const { return this->totalToken_ != nullptr;};
      void deleteTotalToken() { this->totalToken_ = nullptr;};
      inline int64_t getTotalToken() const { DARABONBA_PTR_GET_DEFAULT(totalToken_, 0L) };
      inline TaskList& setTotalToken(int64_t totalToken) { DARABONBA_PTR_SET_VALUE(totalToken_, totalToken) };


      // videoList Field Functions 
      bool hasVideoList() const { return this->videoList_ != nullptr;};
      void deleteVideoList() { this->videoList_ = nullptr;};
      inline const vector<TaskList::VideoList> & getVideoList() const { DARABONBA_PTR_GET_CONST(videoList_, vector<TaskList::VideoList>) };
      inline vector<TaskList::VideoList> getVideoList() { DARABONBA_PTR_GET(videoList_, vector<TaskList::VideoList>) };
      inline TaskList& setVideoList(const vector<TaskList::VideoList> & videoList) { DARABONBA_PTR_SET_VALUE(videoList_, videoList) };
      inline TaskList& setVideoList(vector<TaskList::VideoList> && videoList) { DARABONBA_PTR_SET_RVALUE(videoList_, videoList) };


    protected:
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<double> totalDuration_ {};
      shared_ptr<int64_t> totalToken_ {};
      shared_ptr<vector<TaskList::VideoList>> videoList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetVideoClipTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<BatchGetVideoClipTaskResponseBody::TaskList> & getTaskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<BatchGetVideoClipTaskResponseBody::TaskList>) };
    inline vector<BatchGetVideoClipTaskResponseBody::TaskList> getTaskList() { DARABONBA_PTR_GET(taskList_, vector<BatchGetVideoClipTaskResponseBody::TaskList>) };
    inline BatchGetVideoClipTaskResponseBody& setTaskList(const vector<BatchGetVideoClipTaskResponseBody::TaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline BatchGetVideoClipTaskResponseBody& setTaskList(vector<BatchGetVideoClipTaskResponseBody::TaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<BatchGetVideoClipTaskResponseBody::TaskList>> taskList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
