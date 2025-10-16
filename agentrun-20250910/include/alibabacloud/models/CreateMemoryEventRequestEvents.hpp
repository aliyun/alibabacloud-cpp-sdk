// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMORYEVENTREQUESTEVENTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMORYEVENTREQUESTEVENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateMemoryEventRequestEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemoryEventRequestEvents& obj) { 
      DARABONBA_PTR_TO_JSON(eventId, eventId_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_ANY_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemoryEventRequestEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(eventId, eventId_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_ANY_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    CreateMemoryEventRequestEvents() = default ;
    CreateMemoryEventRequestEvents(const CreateMemoryEventRequestEvents &) = default ;
    CreateMemoryEventRequestEvents(CreateMemoryEventRequestEvents &&) = default ;
    CreateMemoryEventRequestEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemoryEventRequestEvents() = default ;
    CreateMemoryEventRequestEvents& operator=(const CreateMemoryEventRequestEvents &) = default ;
    CreateMemoryEventRequestEvents& operator=(CreateMemoryEventRequestEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventId_ == nullptr
        && return this->message_ == nullptr && return this->metadata_ == nullptr && return this->sessionId_ == nullptr && return this->userId_ == nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline CreateMemoryEventRequestEvents& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline const vector<map<string, string>> & message() const { DARABONBA_PTR_GET_CONST(message_, vector<map<string, string>>) };
    inline vector<map<string, string>> message() { DARABONBA_PTR_GET(message_, vector<map<string, string>>) };
    inline CreateMemoryEventRequestEvents& setMessage(const vector<map<string, string>> & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline CreateMemoryEventRequestEvents& setMessage(vector<map<string, string>> && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline CreateMemoryEventRequestEvents& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline CreateMemoryEventRequestEvents& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CreateMemoryEventRequestEvents& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateMemoryEventRequestEvents& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<vector<map<string, string>>> message_ = nullptr;
    Darabonba::Json metadata_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
