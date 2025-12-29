// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCEDITTIMELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYNCEDITTIMELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncEditTimelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncEditTimelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoClips, autoClips_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Timelines, timelines_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncEditTimelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoClips, autoClips_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Timelines, timelines_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AsyncEditTimelineRequest() = default ;
    AsyncEditTimelineRequest(const AsyncEditTimelineRequest &) = default ;
    AsyncEditTimelineRequest(AsyncEditTimelineRequest &&) = default ;
    AsyncEditTimelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncEditTimelineRequest() = default ;
    AsyncEditTimelineRequest& operator=(const AsyncEditTimelineRequest &) = default ;
    AsyncEditTimelineRequest& operator=(AsyncEditTimelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Timelines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Timelines& obj) { 
        DARABONBA_PTR_TO_JSON(Clips, clips_);
        DARABONBA_PTR_TO_JSON(TimelineId, timelineId_);
      };
      friend void from_json(const Darabonba::Json& j, Timelines& obj) { 
        DARABONBA_PTR_FROM_JSON(Clips, clips_);
        DARABONBA_PTR_FROM_JSON(TimelineId, timelineId_);
      };
      Timelines() = default ;
      Timelines(const Timelines &) = default ;
      Timelines(Timelines &&) = default ;
      Timelines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Timelines() = default ;
      Timelines& operator=(const Timelines &) = default ;
      Timelines& operator=(Timelines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Clips : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Clips& obj) { 
          DARABONBA_PTR_TO_JSON(ClipId, clipId_);
          DARABONBA_PTR_TO_JSON(ContentInner, contentInner_);
          DARABONBA_PTR_TO_JSON(In, in_);
          DARABONBA_PTR_TO_JSON(InEx, inEx_);
          DARABONBA_PTR_TO_JSON(Out, out_);
          DARABONBA_PTR_TO_JSON(OutEx, outEx_);
          DARABONBA_PTR_TO_JSON(VideoId, videoId_);
          DARABONBA_PTR_TO_JSON(VideoName, videoName_);
        };
        friend void from_json(const Darabonba::Json& j, Clips& obj) { 
          DARABONBA_PTR_FROM_JSON(ClipId, clipId_);
          DARABONBA_PTR_FROM_JSON(ContentInner, contentInner_);
          DARABONBA_PTR_FROM_JSON(In, in_);
          DARABONBA_PTR_FROM_JSON(InEx, inEx_);
          DARABONBA_PTR_FROM_JSON(Out, out_);
          DARABONBA_PTR_FROM_JSON(OutEx, outEx_);
          DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
          DARABONBA_PTR_FROM_JSON(VideoName, videoName_);
        };
        Clips() = default ;
        Clips(const Clips &) = default ;
        Clips(Clips &&) = default ;
        Clips(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Clips() = default ;
        Clips& operator=(const Clips &) = default ;
        Clips& operator=(Clips &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clipId_ == nullptr
        && this->contentInner_ == nullptr && this->in_ == nullptr && this->inEx_ == nullptr && this->out_ == nullptr && this->outEx_ == nullptr
        && this->videoId_ == nullptr && this->videoName_ == nullptr; };
        // clipId Field Functions 
        bool hasClipId() const { return this->clipId_ != nullptr;};
        void deleteClipId() { this->clipId_ = nullptr;};
        inline string getClipId() const { DARABONBA_PTR_GET_DEFAULT(clipId_, "") };
        inline Clips& setClipId(string clipId) { DARABONBA_PTR_SET_VALUE(clipId_, clipId) };


        // contentInner Field Functions 
        bool hasContentInner() const { return this->contentInner_ != nullptr;};
        void deleteContentInner() { this->contentInner_ = nullptr;};
        inline string getContentInner() const { DARABONBA_PTR_GET_DEFAULT(contentInner_, "") };
        inline Clips& setContentInner(string contentInner) { DARABONBA_PTR_SET_VALUE(contentInner_, contentInner) };


        // in Field Functions 
        bool hasIn() const { return this->in_ != nullptr;};
        void deleteIn() { this->in_ = nullptr;};
        inline int32_t getIn() const { DARABONBA_PTR_GET_DEFAULT(in_, 0) };
        inline Clips& setIn(int32_t in) { DARABONBA_PTR_SET_VALUE(in_, in) };


        // inEx Field Functions 
        bool hasInEx() const { return this->inEx_ != nullptr;};
        void deleteInEx() { this->inEx_ = nullptr;};
        inline float getInEx() const { DARABONBA_PTR_GET_DEFAULT(inEx_, 0.0) };
        inline Clips& setInEx(float inEx) { DARABONBA_PTR_SET_VALUE(inEx_, inEx) };


        // out Field Functions 
        bool hasOut() const { return this->out_ != nullptr;};
        void deleteOut() { this->out_ = nullptr;};
        inline int32_t getOut() const { DARABONBA_PTR_GET_DEFAULT(out_, 0) };
        inline Clips& setOut(int32_t out) { DARABONBA_PTR_SET_VALUE(out_, out) };


        // outEx Field Functions 
        bool hasOutEx() const { return this->outEx_ != nullptr;};
        void deleteOutEx() { this->outEx_ = nullptr;};
        inline float getOutEx() const { DARABONBA_PTR_GET_DEFAULT(outEx_, 0.0) };
        inline Clips& setOutEx(float outEx) { DARABONBA_PTR_SET_VALUE(outEx_, outEx) };


        // videoId Field Functions 
        bool hasVideoId() const { return this->videoId_ != nullptr;};
        void deleteVideoId() { this->videoId_ = nullptr;};
        inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
        inline Clips& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


        // videoName Field Functions 
        bool hasVideoName() const { return this->videoName_ != nullptr;};
        void deleteVideoName() { this->videoName_ = nullptr;};
        inline string getVideoName() const { DARABONBA_PTR_GET_DEFAULT(videoName_, "") };
        inline Clips& setVideoName(string videoName) { DARABONBA_PTR_SET_VALUE(videoName_, videoName) };


      protected:
        shared_ptr<string> clipId_ {};
        shared_ptr<string> contentInner_ {};
        shared_ptr<int32_t> in_ {};
        shared_ptr<float> inEx_ {};
        shared_ptr<int32_t> out_ {};
        shared_ptr<float> outEx_ {};
        shared_ptr<string> videoId_ {};
        shared_ptr<string> videoName_ {};
      };

      virtual bool empty() const override { return this->clips_ == nullptr
        && this->timelineId_ == nullptr; };
      // clips Field Functions 
      bool hasClips() const { return this->clips_ != nullptr;};
      void deleteClips() { this->clips_ = nullptr;};
      inline const vector<Timelines::Clips> & getClips() const { DARABONBA_PTR_GET_CONST(clips_, vector<Timelines::Clips>) };
      inline vector<Timelines::Clips> getClips() { DARABONBA_PTR_GET(clips_, vector<Timelines::Clips>) };
      inline Timelines& setClips(const vector<Timelines::Clips> & clips) { DARABONBA_PTR_SET_VALUE(clips_, clips) };
      inline Timelines& setClips(vector<Timelines::Clips> && clips) { DARABONBA_PTR_SET_RVALUE(clips_, clips) };


      // timelineId Field Functions 
      bool hasTimelineId() const { return this->timelineId_ != nullptr;};
      void deleteTimelineId() { this->timelineId_ = nullptr;};
      inline string getTimelineId() const { DARABONBA_PTR_GET_DEFAULT(timelineId_, "") };
      inline Timelines& setTimelineId(string timelineId) { DARABONBA_PTR_SET_VALUE(timelineId_, timelineId) };


    protected:
      // This parameter is required.
      shared_ptr<vector<Timelines::Clips>> clips_ {};
      shared_ptr<string> timelineId_ {};
    };

    virtual bool empty() const override { return this->autoClips_ == nullptr
        && this->taskId_ == nullptr && this->timelines_ == nullptr && this->workspaceId_ == nullptr; };
    // autoClips Field Functions 
    bool hasAutoClips() const { return this->autoClips_ != nullptr;};
    void deleteAutoClips() { this->autoClips_ = nullptr;};
    inline bool getAutoClips() const { DARABONBA_PTR_GET_DEFAULT(autoClips_, false) };
    inline AsyncEditTimelineRequest& setAutoClips(bool autoClips) { DARABONBA_PTR_SET_VALUE(autoClips_, autoClips) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AsyncEditTimelineRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // timelines Field Functions 
    bool hasTimelines() const { return this->timelines_ != nullptr;};
    void deleteTimelines() { this->timelines_ = nullptr;};
    inline const vector<AsyncEditTimelineRequest::Timelines> & getTimelines() const { DARABONBA_PTR_GET_CONST(timelines_, vector<AsyncEditTimelineRequest::Timelines>) };
    inline vector<AsyncEditTimelineRequest::Timelines> getTimelines() { DARABONBA_PTR_GET(timelines_, vector<AsyncEditTimelineRequest::Timelines>) };
    inline AsyncEditTimelineRequest& setTimelines(const vector<AsyncEditTimelineRequest::Timelines> & timelines) { DARABONBA_PTR_SET_VALUE(timelines_, timelines) };
    inline AsyncEditTimelineRequest& setTimelines(vector<AsyncEditTimelineRequest::Timelines> && timelines) { DARABONBA_PTR_SET_RVALUE(timelines_, timelines) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AsyncEditTimelineRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<bool> autoClips_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<vector<AsyncEditTimelineRequest::Timelines>> timelines_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
