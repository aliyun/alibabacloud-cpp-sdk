// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIAGENTVIDEOAUDITTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIAGENTVIDEOAUDITTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitAIAgentVideoAuditTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIAgentVideoAuditTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_TO_JSON(AuditInterval, auditInterval_);
      DARABONBA_PTR_TO_JSON(CallbackConfig, callbackConfig_);
      DARABONBA_PTR_TO_JSON(CapturePolicies, capturePolicies_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIAgentVideoAuditTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_FROM_JSON(AuditInterval, auditInterval_);
      DARABONBA_PTR_FROM_JSON(CallbackConfig, callbackConfig_);
      DARABONBA_PTR_FROM_JSON(CapturePolicies, capturePolicies_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitAIAgentVideoAuditTaskRequest() = default ;
    SubmitAIAgentVideoAuditTaskRequest(const SubmitAIAgentVideoAuditTaskRequest &) = default ;
    SubmitAIAgentVideoAuditTaskRequest(SubmitAIAgentVideoAuditTaskRequest &&) = default ;
    SubmitAIAgentVideoAuditTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIAgentVideoAuditTaskRequest() = default ;
    SubmitAIAgentVideoAuditTaskRequest& operator=(const SubmitAIAgentVideoAuditTaskRequest &) = default ;
    SubmitAIAgentVideoAuditTaskRequest& operator=(SubmitAIAgentVideoAuditTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Input : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Input& obj) { 
        DARABONBA_PTR_TO_JSON(Media, media_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Input& obj) { 
        DARABONBA_PTR_FROM_JSON(Media, media_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
      // media Field Functions 
      bool hasMedia() const { return this->media_ != nullptr;};
      void deleteMedia() { this->media_ = nullptr;};
      inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
      inline Input& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Input& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The OSS URL of the input file. Format:
      // 
      // http(s)://{BucketName}.{Endpoint}/{ObjectName}
      shared_ptr<string> media_ {};
      // The type of the input file. Valid values:
      // 
      // *   OSS: an OSS object.
      shared_ptr<string> type_ {};
    };

    class CapturePolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CapturePolicies& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(FrameCount, frameCount_);
        DARABONBA_PTR_TO_JSON(Prompt, prompt_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, CapturePolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(FrameCount, frameCount_);
        DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      CapturePolicies() = default ;
      CapturePolicies(const CapturePolicies &) = default ;
      CapturePolicies(CapturePolicies &&) = default ;
      CapturePolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CapturePolicies() = default ;
      CapturePolicies& operator=(const CapturePolicies &) = default ;
      CapturePolicies& operator=(CapturePolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->duration_ == nullptr
        && this->frameCount_ == nullptr && this->prompt_ == nullptr && this->startTime_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
      inline CapturePolicies& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // frameCount Field Functions 
      bool hasFrameCount() const { return this->frameCount_ != nullptr;};
      void deleteFrameCount() { this->frameCount_ = nullptr;};
      inline int32_t getFrameCount() const { DARABONBA_PTR_GET_DEFAULT(frameCount_, 0) };
      inline CapturePolicies& setFrameCount(int32_t frameCount) { DARABONBA_PTR_SET_VALUE(frameCount_, frameCount) };


      // prompt Field Functions 
      bool hasPrompt() const { return this->prompt_ != nullptr;};
      void deletePrompt() { this->prompt_ = nullptr;};
      inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
      inline CapturePolicies& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int32_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
      inline CapturePolicies& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The duration over which to capture the specified number of frames. Unit: seconds.
      shared_ptr<int32_t> duration_ {};
      // The number of frames to capture.
      shared_ptr<int32_t> frameCount_ {};
      // The text prompt to send to the MLLM along with the captured frames.
      shared_ptr<string> prompt_ {};
      // The timestamp in the video at which to start capturing frames. Unit: seconds.
      shared_ptr<int32_t> startTime_ {};
    };

    class CallbackConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CallbackConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Token, token_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, CallbackConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Token, token_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      CallbackConfig() = default ;
      CallbackConfig(const CallbackConfig &) = default ;
      CallbackConfig(CallbackConfig &&) = default ;
      CallbackConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CallbackConfig() = default ;
      CallbackConfig& operator=(const CallbackConfig &) = default ;
      CallbackConfig& operator=(CallbackConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->token_ == nullptr
        && this->url_ == nullptr; };
      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline CallbackConfig& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline CallbackConfig& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The authentication token for callback.
      shared_ptr<string> token_ {};
      // The URL for receiving callback notifications.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->AIAgentId_ == nullptr
        && this->auditInterval_ == nullptr && this->callbackConfig_ == nullptr && this->capturePolicies_ == nullptr && this->input_ == nullptr && this->userData_ == nullptr; };
    // AIAgentId Field Functions 
    bool hasAIAgentId() const { return this->AIAgentId_ != nullptr;};
    void deleteAIAgentId() { this->AIAgentId_ = nullptr;};
    inline string getAIAgentId() const { DARABONBA_PTR_GET_DEFAULT(AIAgentId_, "") };
    inline SubmitAIAgentVideoAuditTaskRequest& setAIAgentId(string AIAgentId) { DARABONBA_PTR_SET_VALUE(AIAgentId_, AIAgentId) };


    // auditInterval Field Functions 
    bool hasAuditInterval() const { return this->auditInterval_ != nullptr;};
    void deleteAuditInterval() { this->auditInterval_ = nullptr;};
    inline int32_t getAuditInterval() const { DARABONBA_PTR_GET_DEFAULT(auditInterval_, 0) };
    inline SubmitAIAgentVideoAuditTaskRequest& setAuditInterval(int32_t auditInterval) { DARABONBA_PTR_SET_VALUE(auditInterval_, auditInterval) };


    // callbackConfig Field Functions 
    bool hasCallbackConfig() const { return this->callbackConfig_ != nullptr;};
    void deleteCallbackConfig() { this->callbackConfig_ = nullptr;};
    inline const SubmitAIAgentVideoAuditTaskRequest::CallbackConfig & getCallbackConfig() const { DARABONBA_PTR_GET_CONST(callbackConfig_, SubmitAIAgentVideoAuditTaskRequest::CallbackConfig) };
    inline SubmitAIAgentVideoAuditTaskRequest::CallbackConfig getCallbackConfig() { DARABONBA_PTR_GET(callbackConfig_, SubmitAIAgentVideoAuditTaskRequest::CallbackConfig) };
    inline SubmitAIAgentVideoAuditTaskRequest& setCallbackConfig(const SubmitAIAgentVideoAuditTaskRequest::CallbackConfig & callbackConfig) { DARABONBA_PTR_SET_VALUE(callbackConfig_, callbackConfig) };
    inline SubmitAIAgentVideoAuditTaskRequest& setCallbackConfig(SubmitAIAgentVideoAuditTaskRequest::CallbackConfig && callbackConfig) { DARABONBA_PTR_SET_RVALUE(callbackConfig_, callbackConfig) };


    // capturePolicies Field Functions 
    bool hasCapturePolicies() const { return this->capturePolicies_ != nullptr;};
    void deleteCapturePolicies() { this->capturePolicies_ = nullptr;};
    inline const vector<SubmitAIAgentVideoAuditTaskRequest::CapturePolicies> & getCapturePolicies() const { DARABONBA_PTR_GET_CONST(capturePolicies_, vector<SubmitAIAgentVideoAuditTaskRequest::CapturePolicies>) };
    inline vector<SubmitAIAgentVideoAuditTaskRequest::CapturePolicies> getCapturePolicies() { DARABONBA_PTR_GET(capturePolicies_, vector<SubmitAIAgentVideoAuditTaskRequest::CapturePolicies>) };
    inline SubmitAIAgentVideoAuditTaskRequest& setCapturePolicies(const vector<SubmitAIAgentVideoAuditTaskRequest::CapturePolicies> & capturePolicies) { DARABONBA_PTR_SET_VALUE(capturePolicies_, capturePolicies) };
    inline SubmitAIAgentVideoAuditTaskRequest& setCapturePolicies(vector<SubmitAIAgentVideoAuditTaskRequest::CapturePolicies> && capturePolicies) { DARABONBA_PTR_SET_RVALUE(capturePolicies_, capturePolicies) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitAIAgentVideoAuditTaskRequest::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, SubmitAIAgentVideoAuditTaskRequest::Input) };
    inline SubmitAIAgentVideoAuditTaskRequest::Input getInput() { DARABONBA_PTR_GET(input_, SubmitAIAgentVideoAuditTaskRequest::Input) };
    inline SubmitAIAgentVideoAuditTaskRequest& setInput(const SubmitAIAgentVideoAuditTaskRequest::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitAIAgentVideoAuditTaskRequest& setInput(SubmitAIAgentVideoAuditTaskRequest::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitAIAgentVideoAuditTaskRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The ID of the AI agent.
    // 
    // This parameter is required.
    shared_ptr<string> AIAgentId_ {};
    // The interval, in milliseconds, at which to submit captured frames to the AI agent. Valid values: 0 to 5000. Default value: 3000. If it is set to 0, all captured frames are sent to the model in a single batch request. Otherwise, frames are sent sequentially with the specified interval between each request.
    shared_ptr<int32_t> auditInterval_ {};
    // Callback configurations.
    shared_ptr<SubmitAIAgentVideoAuditTaskRequest::CallbackConfig> callbackConfig_ {};
    // An array of frame-capturing policies. Each policy defines a set of frames to be analyzed and will generate a separate result from the model.
    // 
    // This parameter is required.
    shared_ptr<vector<SubmitAIAgentVideoAuditTaskRequest::CapturePolicies>> capturePolicies_ {};
    // The details of the input file.
    // 
    // This parameter is required.
    shared_ptr<SubmitAIAgentVideoAuditTaskRequest::Input> input_ {};
    // The user-defined data.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
