// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIAWORKFLOWEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIAWORKFLOWEXECUTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListMediaWorkflowExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaWorkflowExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaWorkflowExecutionList, mediaWorkflowExecutionList_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaWorkflowExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaWorkflowExecutionList, mediaWorkflowExecutionList_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMediaWorkflowExecutionsResponseBody() = default ;
    ListMediaWorkflowExecutionsResponseBody(const ListMediaWorkflowExecutionsResponseBody &) = default ;
    ListMediaWorkflowExecutionsResponseBody(ListMediaWorkflowExecutionsResponseBody &&) = default ;
    ListMediaWorkflowExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaWorkflowExecutionsResponseBody() = default ;
    ListMediaWorkflowExecutionsResponseBody& operator=(const ListMediaWorkflowExecutionsResponseBody &) = default ;
    ListMediaWorkflowExecutionsResponseBody& operator=(ListMediaWorkflowExecutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaWorkflowExecutionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaWorkflowExecutionList& obj) { 
        DARABONBA_PTR_TO_JSON(MediaWorkflowExecution, mediaWorkflowExecution_);
      };
      friend void from_json(const Darabonba::Json& j, MediaWorkflowExecutionList& obj) { 
        DARABONBA_PTR_FROM_JSON(MediaWorkflowExecution, mediaWorkflowExecution_);
      };
      MediaWorkflowExecutionList() = default ;
      MediaWorkflowExecutionList(const MediaWorkflowExecutionList &) = default ;
      MediaWorkflowExecutionList(MediaWorkflowExecutionList &&) = default ;
      MediaWorkflowExecutionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaWorkflowExecutionList() = default ;
      MediaWorkflowExecutionList& operator=(const MediaWorkflowExecutionList &) = default ;
      MediaWorkflowExecutionList& operator=(MediaWorkflowExecutionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MediaWorkflowExecution : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MediaWorkflowExecution& obj) { 
          DARABONBA_PTR_TO_JSON(ActivityList, activityList_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Input, input_);
          DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
          DARABONBA_PTR_TO_JSON(MediaWorkflowId, mediaWorkflowId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RunId, runId_);
          DARABONBA_PTR_TO_JSON(State, state_);
        };
        friend void from_json(const Darabonba::Json& j, MediaWorkflowExecution& obj) { 
          DARABONBA_PTR_FROM_JSON(ActivityList, activityList_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Input, input_);
          DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
          DARABONBA_PTR_FROM_JSON(MediaWorkflowId, mediaWorkflowId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RunId, runId_);
          DARABONBA_PTR_FROM_JSON(State, state_);
        };
        MediaWorkflowExecution() = default ;
        MediaWorkflowExecution(const MediaWorkflowExecution &) = default ;
        MediaWorkflowExecution(MediaWorkflowExecution &&) = default ;
        MediaWorkflowExecution(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MediaWorkflowExecution() = default ;
        MediaWorkflowExecution& operator=(const MediaWorkflowExecution &) = default ;
        MediaWorkflowExecution& operator=(MediaWorkflowExecution &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Input : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Input& obj) { 
            DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
            DARABONBA_PTR_TO_JSON(UserData, userData_);
          };
          friend void from_json(const Darabonba::Json& j, Input& obj) { 
            DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
            DARABONBA_PTR_FROM_JSON(UserData, userData_);
          };
          Input() = default ;
          Input(const Input &) = default ;
          Input(Input &&) = default ;
          Input(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Input() = default ;
          Input& operator=(const Input &) = default ;
          Input& operator=(Input &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class InputFile : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const InputFile& obj) { 
              DARABONBA_PTR_TO_JSON(Bucket, bucket_);
              DARABONBA_PTR_TO_JSON(Location, location_);
              DARABONBA_PTR_TO_JSON(Object, object_);
            };
            friend void from_json(const Darabonba::Json& j, InputFile& obj) { 
              DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
              DARABONBA_PTR_FROM_JSON(Location, location_);
              DARABONBA_PTR_FROM_JSON(Object, object_);
            };
            InputFile() = default ;
            InputFile(const InputFile &) = default ;
            InputFile(InputFile &&) = default ;
            InputFile(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~InputFile() = default ;
            InputFile& operator=(const InputFile &) = default ;
            InputFile& operator=(InputFile &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->bucket_ == nullptr
        && this->location_ == nullptr && this->object_ == nullptr; };
            // bucket Field Functions 
            bool hasBucket() const { return this->bucket_ != nullptr;};
            void deleteBucket() { this->bucket_ = nullptr;};
            inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
            inline InputFile& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


            // location Field Functions 
            bool hasLocation() const { return this->location_ != nullptr;};
            void deleteLocation() { this->location_ = nullptr;};
            inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
            inline InputFile& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


            // object Field Functions 
            bool hasObject() const { return this->object_ != nullptr;};
            void deleteObject() { this->object_ = nullptr;};
            inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
            inline InputFile& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


          protected:
            shared_ptr<string> bucket_ {};
            shared_ptr<string> location_ {};
            shared_ptr<string> object_ {};
          };

          virtual bool empty() const override { return this->inputFile_ == nullptr
        && this->userData_ == nullptr; };
          // inputFile Field Functions 
          bool hasInputFile() const { return this->inputFile_ != nullptr;};
          void deleteInputFile() { this->inputFile_ = nullptr;};
          inline const Input::InputFile & getInputFile() const { DARABONBA_PTR_GET_CONST(inputFile_, Input::InputFile) };
          inline Input::InputFile getInputFile() { DARABONBA_PTR_GET(inputFile_, Input::InputFile) };
          inline Input& setInputFile(const Input::InputFile & inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };
          inline Input& setInputFile(Input::InputFile && inputFile) { DARABONBA_PTR_SET_RVALUE(inputFile_, inputFile) };


          // userData Field Functions 
          bool hasUserData() const { return this->userData_ != nullptr;};
          void deleteUserData() { this->userData_ = nullptr;};
          inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
          inline Input& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


        protected:
          shared_ptr<Input::InputFile> inputFile_ {};
          shared_ptr<string> userData_ {};
        };

        class ActivityList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ActivityList& obj) { 
            DARABONBA_PTR_TO_JSON(Activity, activity_);
          };
          friend void from_json(const Darabonba::Json& j, ActivityList& obj) { 
            DARABONBA_PTR_FROM_JSON(Activity, activity_);
          };
          ActivityList() = default ;
          ActivityList(const ActivityList &) = default ;
          ActivityList(ActivityList &&) = default ;
          ActivityList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ActivityList() = default ;
          ActivityList& operator=(const ActivityList &) = default ;
          ActivityList& operator=(ActivityList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Activity : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Activity& obj) { 
              DARABONBA_PTR_TO_JSON(Code, code_);
              DARABONBA_PTR_TO_JSON(EndTime, endTime_);
              DARABONBA_PTR_TO_JSON(JobId, jobId_);
              DARABONBA_PTR_TO_JSON(MNSMessageResult, MNSMessageResult_);
              DARABONBA_PTR_TO_JSON(Message, message_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
              DARABONBA_PTR_TO_JSON(State, state_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Activity& obj) { 
              DARABONBA_PTR_FROM_JSON(Code, code_);
              DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
              DARABONBA_PTR_FROM_JSON(JobId, jobId_);
              DARABONBA_PTR_FROM_JSON(MNSMessageResult, MNSMessageResult_);
              DARABONBA_PTR_FROM_JSON(Message, message_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
              DARABONBA_PTR_FROM_JSON(State, state_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            Activity() = default ;
            Activity(const Activity &) = default ;
            Activity(Activity &&) = default ;
            Activity(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Activity() = default ;
            Activity& operator=(const Activity &) = default ;
            Activity& operator=(Activity &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class MNSMessageResult : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const MNSMessageResult& obj) { 
                DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
                DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
                DARABONBA_PTR_TO_JSON(MessageId, messageId_);
              };
              friend void from_json(const Darabonba::Json& j, MNSMessageResult& obj) { 
                DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
                DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
                DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
              };
              MNSMessageResult() = default ;
              MNSMessageResult(const MNSMessageResult &) = default ;
              MNSMessageResult(MNSMessageResult &&) = default ;
              MNSMessageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~MNSMessageResult() = default ;
              MNSMessageResult& operator=(const MNSMessageResult &) = default ;
              MNSMessageResult& operator=(MNSMessageResult &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->messageId_ == nullptr; };
              // errorCode Field Functions 
              bool hasErrorCode() const { return this->errorCode_ != nullptr;};
              void deleteErrorCode() { this->errorCode_ = nullptr;};
              inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
              inline MNSMessageResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


              // errorMessage Field Functions 
              bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
              void deleteErrorMessage() { this->errorMessage_ = nullptr;};
              inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
              inline MNSMessageResult& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


              // messageId Field Functions 
              bool hasMessageId() const { return this->messageId_ != nullptr;};
              void deleteMessageId() { this->messageId_ = nullptr;};
              inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
              inline MNSMessageResult& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


            protected:
              shared_ptr<string> errorCode_ {};
              shared_ptr<string> errorMessage_ {};
              shared_ptr<string> messageId_ {};
            };

            virtual bool empty() const override { return this->code_ == nullptr
        && this->endTime_ == nullptr && this->jobId_ == nullptr && this->MNSMessageResult_ == nullptr && this->message_ == nullptr && this->name_ == nullptr
        && this->startTime_ == nullptr && this->state_ == nullptr && this->type_ == nullptr; };
            // code Field Functions 
            bool hasCode() const { return this->code_ != nullptr;};
            void deleteCode() { this->code_ = nullptr;};
            inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
            inline Activity& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


            // endTime Field Functions 
            bool hasEndTime() const { return this->endTime_ != nullptr;};
            void deleteEndTime() { this->endTime_ = nullptr;};
            inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
            inline Activity& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


            // jobId Field Functions 
            bool hasJobId() const { return this->jobId_ != nullptr;};
            void deleteJobId() { this->jobId_ = nullptr;};
            inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
            inline Activity& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


            // MNSMessageResult Field Functions 
            bool hasMNSMessageResult() const { return this->MNSMessageResult_ != nullptr;};
            void deleteMNSMessageResult() { this->MNSMessageResult_ = nullptr;};
            inline const Activity::MNSMessageResult & getMNSMessageResult() const { DARABONBA_PTR_GET_CONST(MNSMessageResult_, Activity::MNSMessageResult) };
            inline Activity::MNSMessageResult getMNSMessageResult() { DARABONBA_PTR_GET(MNSMessageResult_, Activity::MNSMessageResult) };
            inline Activity& setMNSMessageResult(const Activity::MNSMessageResult & mNSMessageResult) { DARABONBA_PTR_SET_VALUE(MNSMessageResult_, mNSMessageResult) };
            inline Activity& setMNSMessageResult(Activity::MNSMessageResult && mNSMessageResult) { DARABONBA_PTR_SET_RVALUE(MNSMessageResult_, mNSMessageResult) };


            // message Field Functions 
            bool hasMessage() const { return this->message_ != nullptr;};
            void deleteMessage() { this->message_ = nullptr;};
            inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
            inline Activity& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Activity& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline Activity& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


            // state Field Functions 
            bool hasState() const { return this->state_ != nullptr;};
            void deleteState() { this->state_ = nullptr;};
            inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
            inline Activity& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Activity& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> code_ {};
            shared_ptr<string> endTime_ {};
            shared_ptr<string> jobId_ {};
            shared_ptr<Activity::MNSMessageResult> MNSMessageResult_ {};
            shared_ptr<string> message_ {};
            shared_ptr<string> name_ {};
            shared_ptr<string> startTime_ {};
            shared_ptr<string> state_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->activity_ == nullptr; };
          // activity Field Functions 
          bool hasActivity() const { return this->activity_ != nullptr;};
          void deleteActivity() { this->activity_ = nullptr;};
          inline const vector<ActivityList::Activity> & getActivity() const { DARABONBA_PTR_GET_CONST(activity_, vector<ActivityList::Activity>) };
          inline vector<ActivityList::Activity> getActivity() { DARABONBA_PTR_GET(activity_, vector<ActivityList::Activity>) };
          inline ActivityList& setActivity(const vector<ActivityList::Activity> & activity) { DARABONBA_PTR_SET_VALUE(activity_, activity) };
          inline ActivityList& setActivity(vector<ActivityList::Activity> && activity) { DARABONBA_PTR_SET_RVALUE(activity_, activity) };


        protected:
          shared_ptr<vector<ActivityList::Activity>> activity_ {};
        };

        virtual bool empty() const override { return this->activityList_ == nullptr
        && this->creationTime_ == nullptr && this->input_ == nullptr && this->mediaId_ == nullptr && this->mediaWorkflowId_ == nullptr && this->name_ == nullptr
        && this->runId_ == nullptr && this->state_ == nullptr; };
        // activityList Field Functions 
        bool hasActivityList() const { return this->activityList_ != nullptr;};
        void deleteActivityList() { this->activityList_ = nullptr;};
        inline const MediaWorkflowExecution::ActivityList & getActivityList() const { DARABONBA_PTR_GET_CONST(activityList_, MediaWorkflowExecution::ActivityList) };
        inline MediaWorkflowExecution::ActivityList getActivityList() { DARABONBA_PTR_GET(activityList_, MediaWorkflowExecution::ActivityList) };
        inline MediaWorkflowExecution& setActivityList(const MediaWorkflowExecution::ActivityList & activityList) { DARABONBA_PTR_SET_VALUE(activityList_, activityList) };
        inline MediaWorkflowExecution& setActivityList(MediaWorkflowExecution::ActivityList && activityList) { DARABONBA_PTR_SET_RVALUE(activityList_, activityList) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline MediaWorkflowExecution& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // input Field Functions 
        bool hasInput() const { return this->input_ != nullptr;};
        void deleteInput() { this->input_ = nullptr;};
        inline const MediaWorkflowExecution::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, MediaWorkflowExecution::Input) };
        inline MediaWorkflowExecution::Input getInput() { DARABONBA_PTR_GET(input_, MediaWorkflowExecution::Input) };
        inline MediaWorkflowExecution& setInput(const MediaWorkflowExecution::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
        inline MediaWorkflowExecution& setInput(MediaWorkflowExecution::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


        // mediaId Field Functions 
        bool hasMediaId() const { return this->mediaId_ != nullptr;};
        void deleteMediaId() { this->mediaId_ = nullptr;};
        inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
        inline MediaWorkflowExecution& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


        // mediaWorkflowId Field Functions 
        bool hasMediaWorkflowId() const { return this->mediaWorkflowId_ != nullptr;};
        void deleteMediaWorkflowId() { this->mediaWorkflowId_ = nullptr;};
        inline string getMediaWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowId_, "") };
        inline MediaWorkflowExecution& setMediaWorkflowId(string mediaWorkflowId) { DARABONBA_PTR_SET_VALUE(mediaWorkflowId_, mediaWorkflowId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline MediaWorkflowExecution& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // runId Field Functions 
        bool hasRunId() const { return this->runId_ != nullptr;};
        void deleteRunId() { this->runId_ = nullptr;};
        inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
        inline MediaWorkflowExecution& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline MediaWorkflowExecution& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      protected:
        shared_ptr<MediaWorkflowExecution::ActivityList> activityList_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<MediaWorkflowExecution::Input> input_ {};
        shared_ptr<string> mediaId_ {};
        shared_ptr<string> mediaWorkflowId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> runId_ {};
        shared_ptr<string> state_ {};
      };

      virtual bool empty() const override { return this->mediaWorkflowExecution_ == nullptr; };
      // mediaWorkflowExecution Field Functions 
      bool hasMediaWorkflowExecution() const { return this->mediaWorkflowExecution_ != nullptr;};
      void deleteMediaWorkflowExecution() { this->mediaWorkflowExecution_ = nullptr;};
      inline const vector<MediaWorkflowExecutionList::MediaWorkflowExecution> & getMediaWorkflowExecution() const { DARABONBA_PTR_GET_CONST(mediaWorkflowExecution_, vector<MediaWorkflowExecutionList::MediaWorkflowExecution>) };
      inline vector<MediaWorkflowExecutionList::MediaWorkflowExecution> getMediaWorkflowExecution() { DARABONBA_PTR_GET(mediaWorkflowExecution_, vector<MediaWorkflowExecutionList::MediaWorkflowExecution>) };
      inline MediaWorkflowExecutionList& setMediaWorkflowExecution(const vector<MediaWorkflowExecutionList::MediaWorkflowExecution> & mediaWorkflowExecution) { DARABONBA_PTR_SET_VALUE(mediaWorkflowExecution_, mediaWorkflowExecution) };
      inline MediaWorkflowExecutionList& setMediaWorkflowExecution(vector<MediaWorkflowExecutionList::MediaWorkflowExecution> && mediaWorkflowExecution) { DARABONBA_PTR_SET_RVALUE(mediaWorkflowExecution_, mediaWorkflowExecution) };


    protected:
      shared_ptr<vector<MediaWorkflowExecutionList::MediaWorkflowExecution>> mediaWorkflowExecution_ {};
    };

    virtual bool empty() const override { return this->mediaWorkflowExecutionList_ == nullptr
        && this->nextPageToken_ == nullptr && this->requestId_ == nullptr; };
    // mediaWorkflowExecutionList Field Functions 
    bool hasMediaWorkflowExecutionList() const { return this->mediaWorkflowExecutionList_ != nullptr;};
    void deleteMediaWorkflowExecutionList() { this->mediaWorkflowExecutionList_ = nullptr;};
    inline const ListMediaWorkflowExecutionsResponseBody::MediaWorkflowExecutionList & getMediaWorkflowExecutionList() const { DARABONBA_PTR_GET_CONST(mediaWorkflowExecutionList_, ListMediaWorkflowExecutionsResponseBody::MediaWorkflowExecutionList) };
    inline ListMediaWorkflowExecutionsResponseBody::MediaWorkflowExecutionList getMediaWorkflowExecutionList() { DARABONBA_PTR_GET(mediaWorkflowExecutionList_, ListMediaWorkflowExecutionsResponseBody::MediaWorkflowExecutionList) };
    inline ListMediaWorkflowExecutionsResponseBody& setMediaWorkflowExecutionList(const ListMediaWorkflowExecutionsResponseBody::MediaWorkflowExecutionList & mediaWorkflowExecutionList) { DARABONBA_PTR_SET_VALUE(mediaWorkflowExecutionList_, mediaWorkflowExecutionList) };
    inline ListMediaWorkflowExecutionsResponseBody& setMediaWorkflowExecutionList(ListMediaWorkflowExecutionsResponseBody::MediaWorkflowExecutionList && mediaWorkflowExecutionList) { DARABONBA_PTR_SET_RVALUE(mediaWorkflowExecutionList_, mediaWorkflowExecutionList) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListMediaWorkflowExecutionsResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMediaWorkflowExecutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListMediaWorkflowExecutionsResponseBody::MediaWorkflowExecutionList> mediaWorkflowExecutionList_ {};
    // The returned value of NextPageToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextPageToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
