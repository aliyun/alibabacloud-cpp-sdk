// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENOTIFYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENOTIFYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeNotifyConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AudioOssPath, audioOssPath_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(EnableAudioRecording, enableAudioRecording_);
      DARABONBA_PTR_TO_JSON(EnableNotify, enableNotify_);
      DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioOssPath, audioOssPath_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(EnableAudioRecording, enableAudioRecording_);
      DARABONBA_PTR_FROM_JSON(EnableNotify, enableNotify_);
      DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    DescribeNotifyConfigResponseBody() = default ;
    DescribeNotifyConfigResponseBody(const DescribeNotifyConfigResponseBody &) = default ;
    DescribeNotifyConfigResponseBody(DescribeNotifyConfigResponseBody &&) = default ;
    DescribeNotifyConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNotifyConfigResponseBody() = default ;
    DescribeNotifyConfigResponseBody& operator=(const DescribeNotifyConfigResponseBody &) = default ;
    DescribeNotifyConfigResponseBody& operator=(DescribeNotifyConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioOssPath_ == nullptr
        && this->callbackUrl_ == nullptr && this->enableAudioRecording_ == nullptr && this->enableNotify_ == nullptr && this->eventTypes_ == nullptr && this->requestId_ == nullptr
        && this->token_ == nullptr; };
    // audioOssPath Field Functions 
    bool hasAudioOssPath() const { return this->audioOssPath_ != nullptr;};
    void deleteAudioOssPath() { this->audioOssPath_ = nullptr;};
    inline string getAudioOssPath() const { DARABONBA_PTR_GET_DEFAULT(audioOssPath_, "") };
    inline DescribeNotifyConfigResponseBody& setAudioOssPath(string audioOssPath) { DARABONBA_PTR_SET_VALUE(audioOssPath_, audioOssPath) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline DescribeNotifyConfigResponseBody& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // enableAudioRecording Field Functions 
    bool hasEnableAudioRecording() const { return this->enableAudioRecording_ != nullptr;};
    void deleteEnableAudioRecording() { this->enableAudioRecording_ = nullptr;};
    inline bool getEnableAudioRecording() const { DARABONBA_PTR_GET_DEFAULT(enableAudioRecording_, false) };
    inline DescribeNotifyConfigResponseBody& setEnableAudioRecording(bool enableAudioRecording) { DARABONBA_PTR_SET_VALUE(enableAudioRecording_, enableAudioRecording) };


    // enableNotify Field Functions 
    bool hasEnableNotify() const { return this->enableNotify_ != nullptr;};
    void deleteEnableNotify() { this->enableNotify_ = nullptr;};
    inline bool getEnableNotify() const { DARABONBA_PTR_GET_DEFAULT(enableNotify_, false) };
    inline DescribeNotifyConfigResponseBody& setEnableNotify(bool enableNotify) { DARABONBA_PTR_SET_VALUE(enableNotify_, enableNotify) };


    // eventTypes Field Functions 
    bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
    void deleteEventTypes() { this->eventTypes_ = nullptr;};
    inline string getEventTypes() const { DARABONBA_PTR_GET_DEFAULT(eventTypes_, "") };
    inline DescribeNotifyConfigResponseBody& setEventTypes(string eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNotifyConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline DescribeNotifyConfigResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    shared_ptr<string> audioOssPath_ {};
    shared_ptr<string> callbackUrl_ {};
    shared_ptr<bool> enableAudioRecording_ {};
    shared_ptr<bool> enableNotify_ {};
    // The event types. If this parameter is empty, all event types are selected.
    // 
    // *   agent_start: The agent is started.
    // *   agent_stop: The agent is stopped.
    // *   error: An error occurred.
    shared_ptr<string> eventTypes_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
