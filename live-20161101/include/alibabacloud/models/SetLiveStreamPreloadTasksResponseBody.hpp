// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVESTREAMPRELOADTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETLIVESTREAMPRELOADTASKSRESPONSEBODY_HPP_
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
  class SetLiveStreamPreloadTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveStreamPreloadTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedURL, failedURL_);
      DARABONBA_PTR_TO_JSON(PreloadTasksMessages, preloadTasksMessages_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SuccessURL, successURL_);
      DARABONBA_PTR_TO_JSON(TotalURL, totalURL_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveStreamPreloadTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedURL, failedURL_);
      DARABONBA_PTR_FROM_JSON(PreloadTasksMessages, preloadTasksMessages_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SuccessURL, successURL_);
      DARABONBA_PTR_FROM_JSON(TotalURL, totalURL_);
    };
    SetLiveStreamPreloadTasksResponseBody() = default ;
    SetLiveStreamPreloadTasksResponseBody(const SetLiveStreamPreloadTasksResponseBody &) = default ;
    SetLiveStreamPreloadTasksResponseBody(SetLiveStreamPreloadTasksResponseBody &&) = default ;
    SetLiveStreamPreloadTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveStreamPreloadTasksResponseBody() = default ;
    SetLiveStreamPreloadTasksResponseBody& operator=(const SetLiveStreamPreloadTasksResponseBody &) = default ;
    SetLiveStreamPreloadTasksResponseBody& operator=(SetLiveStreamPreloadTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PreloadTasksMessages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PreloadTasksMessages& obj) { 
        DARABONBA_PTR_TO_JSON(PreloadTasksMessage, preloadTasksMessage_);
      };
      friend void from_json(const Darabonba::Json& j, PreloadTasksMessages& obj) { 
        DARABONBA_PTR_FROM_JSON(PreloadTasksMessage, preloadTasksMessage_);
      };
      PreloadTasksMessages() = default ;
      PreloadTasksMessages(const PreloadTasksMessages &) = default ;
      PreloadTasksMessages(PreloadTasksMessages &&) = default ;
      PreloadTasksMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PreloadTasksMessages() = default ;
      PreloadTasksMessages& operator=(const PreloadTasksMessages &) = default ;
      PreloadTasksMessages& operator=(PreloadTasksMessages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PreloadTasksMessage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PreloadTasksMessage& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(PlayUrl, playUrl_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, PreloadTasksMessage& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(PlayUrl, playUrl_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        };
        PreloadTasksMessage() = default ;
        PreloadTasksMessage(const PreloadTasksMessage &) = default ;
        PreloadTasksMessage(PreloadTasksMessage &&) = default ;
        PreloadTasksMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PreloadTasksMessage() = default ;
        PreloadTasksMessage& operator=(const PreloadTasksMessage &) = default ;
        PreloadTasksMessage& operator=(PreloadTasksMessage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->playUrl_ == nullptr && this->taskId_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PreloadTasksMessage& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // playUrl Field Functions 
        bool hasPlayUrl() const { return this->playUrl_ != nullptr;};
        void deletePlayUrl() { this->playUrl_ = nullptr;};
        inline string getPlayUrl() const { DARABONBA_PTR_GET_DEFAULT(playUrl_, "") };
        inline PreloadTasksMessage& setPlayUrl(string playUrl) { DARABONBA_PTR_SET_VALUE(playUrl_, playUrl) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline PreloadTasksMessage& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        // Indicates whether the prefetch task is successful. Valid values:
        // 
        // *   Successfully
        // *   InternalError
        shared_ptr<string> description_ {};
        // The streaming URL.
        shared_ptr<string> playUrl_ {};
        // The ID of the prefetch task.
        shared_ptr<string> taskId_ {};
      };

      virtual bool empty() const override { return this->preloadTasksMessage_ == nullptr; };
      // preloadTasksMessage Field Functions 
      bool hasPreloadTasksMessage() const { return this->preloadTasksMessage_ != nullptr;};
      void deletePreloadTasksMessage() { this->preloadTasksMessage_ = nullptr;};
      inline const vector<PreloadTasksMessages::PreloadTasksMessage> & getPreloadTasksMessage() const { DARABONBA_PTR_GET_CONST(preloadTasksMessage_, vector<PreloadTasksMessages::PreloadTasksMessage>) };
      inline vector<PreloadTasksMessages::PreloadTasksMessage> getPreloadTasksMessage() { DARABONBA_PTR_GET(preloadTasksMessage_, vector<PreloadTasksMessages::PreloadTasksMessage>) };
      inline PreloadTasksMessages& setPreloadTasksMessage(const vector<PreloadTasksMessages::PreloadTasksMessage> & preloadTasksMessage) { DARABONBA_PTR_SET_VALUE(preloadTasksMessage_, preloadTasksMessage) };
      inline PreloadTasksMessages& setPreloadTasksMessage(vector<PreloadTasksMessages::PreloadTasksMessage> && preloadTasksMessage) { DARABONBA_PTR_SET_RVALUE(preloadTasksMessage_, preloadTasksMessage) };


    protected:
      shared_ptr<vector<PreloadTasksMessages::PreloadTasksMessage>> preloadTasksMessage_ {};
    };

    virtual bool empty() const override { return this->failedURL_ == nullptr
        && this->preloadTasksMessages_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->successURL_ == nullptr && this->totalURL_ == nullptr; };
    // failedURL Field Functions 
    bool hasFailedURL() const { return this->failedURL_ != nullptr;};
    void deleteFailedURL() { this->failedURL_ = nullptr;};
    inline int32_t getFailedURL() const { DARABONBA_PTR_GET_DEFAULT(failedURL_, 0) };
    inline SetLiveStreamPreloadTasksResponseBody& setFailedURL(int32_t failedURL) { DARABONBA_PTR_SET_VALUE(failedURL_, failedURL) };


    // preloadTasksMessages Field Functions 
    bool hasPreloadTasksMessages() const { return this->preloadTasksMessages_ != nullptr;};
    void deletePreloadTasksMessages() { this->preloadTasksMessages_ = nullptr;};
    inline const SetLiveStreamPreloadTasksResponseBody::PreloadTasksMessages & getPreloadTasksMessages() const { DARABONBA_PTR_GET_CONST(preloadTasksMessages_, SetLiveStreamPreloadTasksResponseBody::PreloadTasksMessages) };
    inline SetLiveStreamPreloadTasksResponseBody::PreloadTasksMessages getPreloadTasksMessages() { DARABONBA_PTR_GET(preloadTasksMessages_, SetLiveStreamPreloadTasksResponseBody::PreloadTasksMessages) };
    inline SetLiveStreamPreloadTasksResponseBody& setPreloadTasksMessages(const SetLiveStreamPreloadTasksResponseBody::PreloadTasksMessages & preloadTasksMessages) { DARABONBA_PTR_SET_VALUE(preloadTasksMessages_, preloadTasksMessages) };
    inline SetLiveStreamPreloadTasksResponseBody& setPreloadTasksMessages(SetLiveStreamPreloadTasksResponseBody::PreloadTasksMessages && preloadTasksMessages) { DARABONBA_PTR_SET_RVALUE(preloadTasksMessages_, preloadTasksMessages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetLiveStreamPreloadTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SetLiveStreamPreloadTasksResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // successURL Field Functions 
    bool hasSuccessURL() const { return this->successURL_ != nullptr;};
    void deleteSuccessURL() { this->successURL_ = nullptr;};
    inline int32_t getSuccessURL() const { DARABONBA_PTR_GET_DEFAULT(successURL_, 0) };
    inline SetLiveStreamPreloadTasksResponseBody& setSuccessURL(int32_t successURL) { DARABONBA_PTR_SET_VALUE(successURL_, successURL) };


    // totalURL Field Functions 
    bool hasTotalURL() const { return this->totalURL_ != nullptr;};
    void deleteTotalURL() { this->totalURL_ = nullptr;};
    inline int32_t getTotalURL() const { DARABONBA_PTR_GET_DEFAULT(totalURL_, 0) };
    inline SetLiveStreamPreloadTasksResponseBody& setTotalURL(int32_t totalURL) { DARABONBA_PTR_SET_VALUE(totalURL_, totalURL) };


  protected:
    // The number of URLs for which the prefetch task configuration failed.
    shared_ptr<int32_t> failedURL_ {};
    // The details of the prefetch task.
    shared_ptr<SetLiveStreamPreloadTasksResponseBody::PreloadTasksMessages> preloadTasksMessages_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the prefetch task. Valid values:
    // 
    // *   Success
    // *   Failed
    // 
    // >  Success is returned only if the prefetch task is configured for all specified streaming URLs.
    shared_ptr<string> status_ {};
    // The number of URLs for which the prefetch task is successfully configured.
    shared_ptr<int32_t> successURL_ {};
    // The total number of URLs.
    shared_ptr<int32_t> totalURL_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
