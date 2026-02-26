// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOMODERATIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOMODERATIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetVideoModerationResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoModerationResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ModerationResult, moderationResult_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoModerationResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ModerationResult, moderationResult_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetVideoModerationResultResponseBody() = default ;
    GetVideoModerationResultResponseBody(const GetVideoModerationResultResponseBody &) = default ;
    GetVideoModerationResultResponseBody(GetVideoModerationResultResponseBody &&) = default ;
    GetVideoModerationResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoModerationResultResponseBody() = default ;
    GetVideoModerationResultResponseBody& operator=(const GetVideoModerationResultResponseBody &) = default ;
    GetVideoModerationResultResponseBody& operator=(GetVideoModerationResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModerationResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModerationResult& obj) { 
        DARABONBA_PTR_TO_JSON(Categories, categories_);
        DARABONBA_PTR_TO_JSON(Frames, frames_);
        DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
      };
      friend void from_json(const Darabonba::Json& j, ModerationResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Categories, categories_);
        DARABONBA_PTR_FROM_JSON(Frames, frames_);
        DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
        DARABONBA_PTR_FROM_JSON(URI, URI_);
      };
      ModerationResult() = default ;
      ModerationResult(const ModerationResult &) = default ;
      ModerationResult(ModerationResult &&) = default ;
      ModerationResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModerationResult() = default ;
      ModerationResult& operator=(const ModerationResult &) = default ;
      ModerationResult& operator=(ModerationResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Frames : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Frames& obj) { 
          DARABONBA_PTR_TO_JSON(BlockFrames, blockFrames_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, Frames& obj) { 
          DARABONBA_PTR_FROM_JSON(BlockFrames, blockFrames_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        Frames() = default ;
        Frames(const Frames &) = default ;
        Frames(Frames &&) = default ;
        Frames(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Frames() = default ;
        Frames& operator=(const Frames &) = default ;
        Frames& operator=(Frames &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class BlockFrames : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BlockFrames& obj) { 
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(Offset, offset_);
            DARABONBA_PTR_TO_JSON(Rate, rate_);
          };
          friend void from_json(const Darabonba::Json& j, BlockFrames& obj) { 
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(Offset, offset_);
            DARABONBA_PTR_FROM_JSON(Rate, rate_);
          };
          BlockFrames() = default ;
          BlockFrames(const BlockFrames &) = default ;
          BlockFrames(BlockFrames &&) = default ;
          BlockFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BlockFrames() = default ;
          BlockFrames& operator=(const BlockFrames &) = default ;
          BlockFrames& operator=(BlockFrames &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->label_ == nullptr
        && this->offset_ == nullptr && this->rate_ == nullptr; };
          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline BlockFrames& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // offset Field Functions 
          bool hasOffset() const { return this->offset_ != nullptr;};
          void deleteOffset() { this->offset_ = nullptr;};
          inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
          inline BlockFrames& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


          // rate Field Functions 
          bool hasRate() const { return this->rate_ != nullptr;};
          void deleteRate() { this->rate_ = nullptr;};
          inline double getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
          inline BlockFrames& setRate(double rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


        protected:
          // The label of the violation.
          shared_ptr<string> label_ {};
          // The offset of the frame.
          shared_ptr<int32_t> offset_ {};
          // The confidence level of the violation.
          shared_ptr<double> rate_ {};
        };

        virtual bool empty() const override { return this->blockFrames_ == nullptr
        && this->totalCount_ == nullptr; };
        // blockFrames Field Functions 
        bool hasBlockFrames() const { return this->blockFrames_ != nullptr;};
        void deleteBlockFrames() { this->blockFrames_ = nullptr;};
        inline const vector<Frames::BlockFrames> & getBlockFrames() const { DARABONBA_PTR_GET_CONST(blockFrames_, vector<Frames::BlockFrames>) };
        inline vector<Frames::BlockFrames> getBlockFrames() { DARABONBA_PTR_GET(blockFrames_, vector<Frames::BlockFrames>) };
        inline Frames& setBlockFrames(const vector<Frames::BlockFrames> & blockFrames) { DARABONBA_PTR_SET_VALUE(blockFrames_, blockFrames) };
        inline Frames& setBlockFrames(vector<Frames::BlockFrames> && blockFrames) { DARABONBA_PTR_SET_RVALUE(blockFrames_, blockFrames) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline Frames& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The information about violated frames.
        shared_ptr<vector<Frames::BlockFrames>> blockFrames_ {};
        // The total number of detected frames.
        shared_ptr<int32_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->categories_ == nullptr
        && this->frames_ == nullptr && this->suggestion_ == nullptr && this->URI_ == nullptr; };
      // categories Field Functions 
      bool hasCategories() const { return this->categories_ != nullptr;};
      void deleteCategories() { this->categories_ = nullptr;};
      inline const vector<string> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
      inline vector<string> getCategories() { DARABONBA_PTR_GET(categories_, vector<string>) };
      inline ModerationResult& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
      inline ModerationResult& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


      // frames Field Functions 
      bool hasFrames() const { return this->frames_ != nullptr;};
      void deleteFrames() { this->frames_ = nullptr;};
      inline const ModerationResult::Frames & getFrames() const { DARABONBA_PTR_GET_CONST(frames_, ModerationResult::Frames) };
      inline ModerationResult::Frames getFrames() { DARABONBA_PTR_GET(frames_, ModerationResult::Frames) };
      inline ModerationResult& setFrames(const ModerationResult::Frames & frames) { DARABONBA_PTR_SET_VALUE(frames_, frames) };
      inline ModerationResult& setFrames(ModerationResult::Frames && frames) { DARABONBA_PTR_SET_RVALUE(frames_, frames) };


      // suggestion Field Functions 
      bool hasSuggestion() const { return this->suggestion_ != nullptr;};
      void deleteSuggestion() { this->suggestion_ = nullptr;};
      inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
      inline ModerationResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline ModerationResult& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // The category list.
      shared_ptr<vector<string>> categories_ {};
      // The information about video and motion detection frames.
      shared_ptr<ModerationResult::Frames> frames_ {};
      // The recommended operation. Valid values:
      // 
      // *   pass: The image has passed the check. No action is required.
      // *   review: The image contains suspected violations and requires human review.
      // *   block: The image contains violations. Further actions, such as deleting or blocking the image, are recommended.
      shared_ptr<string> suggestion_ {};
      // The OSS URI of the file. The URI follows the oss://${bucketname}/${objectname} format. bucketname indicates the name of an OSS bucket that is in the same region as the current project, and objectname is the file path.
      shared_ptr<string> URI_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->endTime_ == nullptr && this->eventId_ == nullptr && this->message_ == nullptr && this->moderationResult_ == nullptr && this->projectName_ == nullptr
        && this->requestId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr
        && this->userData_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetVideoModerationResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetVideoModerationResultResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline GetVideoModerationResultResponseBody& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetVideoModerationResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // moderationResult Field Functions 
    bool hasModerationResult() const { return this->moderationResult_ != nullptr;};
    void deleteModerationResult() { this->moderationResult_ = nullptr;};
    inline const GetVideoModerationResultResponseBody::ModerationResult & getModerationResult() const { DARABONBA_PTR_GET_CONST(moderationResult_, GetVideoModerationResultResponseBody::ModerationResult) };
    inline GetVideoModerationResultResponseBody::ModerationResult getModerationResult() { DARABONBA_PTR_GET(moderationResult_, GetVideoModerationResultResponseBody::ModerationResult) };
    inline GetVideoModerationResultResponseBody& setModerationResult(const GetVideoModerationResultResponseBody::ModerationResult & moderationResult) { DARABONBA_PTR_SET_VALUE(moderationResult_, moderationResult) };
    inline GetVideoModerationResultResponseBody& setModerationResult(GetVideoModerationResultResponseBody::ModerationResult && moderationResult) { DARABONBA_PTR_SET_RVALUE(moderationResult_, moderationResult) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetVideoModerationResultResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoModerationResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetVideoModerationResultResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVideoModerationResultResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetVideoModerationResultResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetVideoModerationResultResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetVideoModerationResultResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The error code of the task.
    shared_ptr<string> code_ {};
    // The end time of the task.
    shared_ptr<string> endTime_ {};
    // The event ID.
    shared_ptr<string> eventId_ {};
    // The error message of the task.
    shared_ptr<string> message_ {};
    // The result of the image compliance detection task.
    shared_ptr<GetVideoModerationResultResponseBody::ModerationResult> moderationResult_ {};
    // The project name.
    shared_ptr<string> projectName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The start time of the task.
    shared_ptr<string> startTime_ {};
    // The task status. Valid values:
    // 
    // *   Running: The task is running.
    // *   Succeeded: The task is successful.
    // *   Failed: The task failed.
    shared_ptr<string> status_ {};
    // The task ID.
    shared_ptr<string> taskId_ {};
    // The type of the task.
    shared_ptr<string> taskType_ {};
    // The user-defined data.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
