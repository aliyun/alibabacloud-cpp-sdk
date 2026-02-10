// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCLOUDTRANSCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCLOUDTRANSCODERESPONSEBODY_HPP_
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
  class DescribeRtcCloudTranscodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcCloudTranscodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcCloudTranscodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
    };
    DescribeRtcCloudTranscodeResponseBody() = default ;
    DescribeRtcCloudTranscodeResponseBody(const DescribeRtcCloudTranscodeResponseBody &) = default ;
    DescribeRtcCloudTranscodeResponseBody(DescribeRtcCloudTranscodeResponseBody &&) = default ;
    DescribeRtcCloudTranscodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcCloudTranscodeResponseBody() = default ;
    DescribeRtcCloudTranscodeResponseBody& operator=(const DescribeRtcCloudTranscodeResponseBody &) = default ;
    DescribeRtcCloudTranscodeResponseBody& operator=(DescribeRtcCloudTranscodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
        DARABONBA_PTR_TO_JSON(InputParam, inputParam_);
        DARABONBA_PTR_TO_JSON(MaxIdleTime, maxIdleTime_);
        DARABONBA_PTR_TO_JSON(OutputParams, outputParams_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, TaskInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
        DARABONBA_PTR_FROM_JSON(InputParam, inputParam_);
        DARABONBA_PTR_FROM_JSON(MaxIdleTime, maxIdleTime_);
        DARABONBA_PTR_FROM_JSON(OutputParams, outputParams_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      TaskInfo() = default ;
      TaskInfo(const TaskInfo &) = default ;
      TaskInfo(TaskInfo &&) = default ;
      TaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskInfo() = default ;
      TaskInfo& operator=(const TaskInfo &) = default ;
      TaskInfo& operator=(TaskInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OutputParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OutputParams& obj) { 
          DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
          DARABONBA_PTR_TO_JSON(TranscodeTemplate, transcodeTemplate_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserToken, userToken_);
        };
        friend void from_json(const Darabonba::Json& j, OutputParams& obj) { 
          DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
          DARABONBA_PTR_FROM_JSON(TranscodeTemplate, transcodeTemplate_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserToken, userToken_);
        };
        OutputParams() = default ;
        OutputParams(const OutputParams &) = default ;
        OutputParams(OutputParams &&) = default ;
        OutputParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OutputParams() = default ;
        OutputParams& operator=(const OutputParams &) = default ;
        OutputParams& operator=(OutputParams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channelId_ == nullptr
        && this->transcodeTemplate_ == nullptr && this->userId_ == nullptr && this->userToken_ == nullptr; };
        // channelId Field Functions 
        bool hasChannelId() const { return this->channelId_ != nullptr;};
        void deleteChannelId() { this->channelId_ = nullptr;};
        inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
        inline OutputParams& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


        // transcodeTemplate Field Functions 
        bool hasTranscodeTemplate() const { return this->transcodeTemplate_ != nullptr;};
        void deleteTranscodeTemplate() { this->transcodeTemplate_ = nullptr;};
        inline string getTranscodeTemplate() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplate_, "") };
        inline OutputParams& setTranscodeTemplate(string transcodeTemplate) { DARABONBA_PTR_SET_VALUE(transcodeTemplate_, transcodeTemplate) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline OutputParams& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userToken Field Functions 
        bool hasUserToken() const { return this->userToken_ != nullptr;};
        void deleteUserToken() { this->userToken_ = nullptr;};
        inline string getUserToken() const { DARABONBA_PTR_GET_DEFAULT(userToken_, "") };
        inline OutputParams& setUserToken(string userToken) { DARABONBA_PTR_SET_VALUE(userToken_, userToken) };


      protected:
        shared_ptr<string> channelId_ {};
        shared_ptr<string> transcodeTemplate_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> userToken_ {};
      };

      class InputParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InputParam& obj) { 
          DARABONBA_PTR_TO_JSON(SingleSubUserParam, singleSubUserParam_);
        };
        friend void from_json(const Darabonba::Json& j, InputParam& obj) { 
          DARABONBA_PTR_FROM_JSON(SingleSubUserParam, singleSubUserParam_);
        };
        InputParam() = default ;
        InputParam(const InputParam &) = default ;
        InputParam(InputParam &&) = default ;
        InputParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InputParam() = default ;
        InputParam& operator=(const InputParam &) = default ;
        InputParam& operator=(InputParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SingleSubUserParam : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SingleSubUserParam& obj) { 
            DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
            DARABONBA_PTR_TO_JSON(StreamType, streamType_);
            DARABONBA_PTR_TO_JSON(UserId, userId_);
          };
          friend void from_json(const Darabonba::Json& j, SingleSubUserParam& obj) { 
            DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
            DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
          };
          SingleSubUserParam() = default ;
          SingleSubUserParam(const SingleSubUserParam &) = default ;
          SingleSubUserParam(SingleSubUserParam &&) = default ;
          SingleSubUserParam(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SingleSubUserParam() = default ;
          SingleSubUserParam& operator=(const SingleSubUserParam &) = default ;
          SingleSubUserParam& operator=(SingleSubUserParam &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->sourceType_ == nullptr
        && this->streamType_ == nullptr && this->userId_ == nullptr; };
          // sourceType Field Functions 
          bool hasSourceType() const { return this->sourceType_ != nullptr;};
          void deleteSourceType() { this->sourceType_ = nullptr;};
          inline int64_t getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, 0L) };
          inline SingleSubUserParam& setSourceType(int64_t sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


          // streamType Field Functions 
          bool hasStreamType() const { return this->streamType_ != nullptr;};
          void deleteStreamType() { this->streamType_ = nullptr;};
          inline int64_t getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0L) };
          inline SingleSubUserParam& setStreamType(int64_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline SingleSubUserParam& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          shared_ptr<int64_t> sourceType_ {};
          shared_ptr<int64_t> streamType_ {};
          shared_ptr<string> userId_ {};
        };

        virtual bool empty() const override { return this->singleSubUserParam_ == nullptr; };
        // singleSubUserParam Field Functions 
        bool hasSingleSubUserParam() const { return this->singleSubUserParam_ != nullptr;};
        void deleteSingleSubUserParam() { this->singleSubUserParam_ = nullptr;};
        inline const InputParam::SingleSubUserParam & getSingleSubUserParam() const { DARABONBA_PTR_GET_CONST(singleSubUserParam_, InputParam::SingleSubUserParam) };
        inline InputParam::SingleSubUserParam getSingleSubUserParam() { DARABONBA_PTR_GET(singleSubUserParam_, InputParam::SingleSubUserParam) };
        inline InputParam& setSingleSubUserParam(const InputParam::SingleSubUserParam & singleSubUserParam) { DARABONBA_PTR_SET_VALUE(singleSubUserParam_, singleSubUserParam) };
        inline InputParam& setSingleSubUserParam(InputParam::SingleSubUserParam && singleSubUserParam) { DARABONBA_PTR_SET_RVALUE(singleSubUserParam_, singleSubUserParam) };


      protected:
        shared_ptr<InputParam::SingleSubUserParam> singleSubUserParam_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->channelId_ == nullptr && this->inputParam_ == nullptr && this->maxIdleTime_ == nullptr && this->outputParams_ == nullptr && this->status_ == nullptr
        && this->taskId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline TaskInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
      inline TaskInfo& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


      // inputParam Field Functions 
      bool hasInputParam() const { return this->inputParam_ != nullptr;};
      void deleteInputParam() { this->inputParam_ = nullptr;};
      inline const TaskInfo::InputParam & getInputParam() const { DARABONBA_PTR_GET_CONST(inputParam_, TaskInfo::InputParam) };
      inline TaskInfo::InputParam getInputParam() { DARABONBA_PTR_GET(inputParam_, TaskInfo::InputParam) };
      inline TaskInfo& setInputParam(const TaskInfo::InputParam & inputParam) { DARABONBA_PTR_SET_VALUE(inputParam_, inputParam) };
      inline TaskInfo& setInputParam(TaskInfo::InputParam && inputParam) { DARABONBA_PTR_SET_RVALUE(inputParam_, inputParam) };


      // maxIdleTime Field Functions 
      bool hasMaxIdleTime() const { return this->maxIdleTime_ != nullptr;};
      void deleteMaxIdleTime() { this->maxIdleTime_ = nullptr;};
      inline int64_t getMaxIdleTime() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTime_, 0L) };
      inline TaskInfo& setMaxIdleTime(int64_t maxIdleTime) { DARABONBA_PTR_SET_VALUE(maxIdleTime_, maxIdleTime) };


      // outputParams Field Functions 
      bool hasOutputParams() const { return this->outputParams_ != nullptr;};
      void deleteOutputParams() { this->outputParams_ = nullptr;};
      inline const vector<TaskInfo::OutputParams> & getOutputParams() const { DARABONBA_PTR_GET_CONST(outputParams_, vector<TaskInfo::OutputParams>) };
      inline vector<TaskInfo::OutputParams> getOutputParams() { DARABONBA_PTR_GET(outputParams_, vector<TaskInfo::OutputParams>) };
      inline TaskInfo& setOutputParams(const vector<TaskInfo::OutputParams> & outputParams) { DARABONBA_PTR_SET_VALUE(outputParams_, outputParams) };
      inline TaskInfo& setOutputParams(vector<TaskInfo::OutputParams> && outputParams) { DARABONBA_PTR_SET_RVALUE(outputParams_, outputParams) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TaskInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> channelId_ {};
      shared_ptr<TaskInfo::InputParam> inputParam_ {};
      shared_ptr<int64_t> maxIdleTime_ {};
      shared_ptr<vector<TaskInfo::OutputParams>> outputParams_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRtcCloudTranscodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const DescribeRtcCloudTranscodeResponseBody::TaskInfo & getTaskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, DescribeRtcCloudTranscodeResponseBody::TaskInfo) };
    inline DescribeRtcCloudTranscodeResponseBody::TaskInfo getTaskInfo() { DARABONBA_PTR_GET(taskInfo_, DescribeRtcCloudTranscodeResponseBody::TaskInfo) };
    inline DescribeRtcCloudTranscodeResponseBody& setTaskInfo(const DescribeRtcCloudTranscodeResponseBody::TaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline DescribeRtcCloudTranscodeResponseBody& setTaskInfo(DescribeRtcCloudTranscodeResponseBody::TaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeRtcCloudTranscodeResponseBody::TaskInfo> taskInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
