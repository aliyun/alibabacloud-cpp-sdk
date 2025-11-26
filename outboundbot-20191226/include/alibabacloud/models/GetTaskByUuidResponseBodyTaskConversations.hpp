// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKBYUUIDRESPONSEBODYTASKCONVERSATIONS_HPP_
#define ALIBABACLOUD_MODELS_GETTASKBYUUIDRESPONSEBODYTASKCONVERSATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetTaskByUuidResponseBodyTaskConversations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskByUuidResponseBodyTaskConversations& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(SequenceId, sequenceId_);
      DARABONBA_PTR_TO_JSON(Speaker, speaker_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskByUuidResponseBodyTaskConversations& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(SequenceId, sequenceId_);
      DARABONBA_PTR_FROM_JSON(Speaker, speaker_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    GetTaskByUuidResponseBodyTaskConversations() = default ;
    GetTaskByUuidResponseBodyTaskConversations(const GetTaskByUuidResponseBodyTaskConversations &) = default ;
    GetTaskByUuidResponseBodyTaskConversations(GetTaskByUuidResponseBodyTaskConversations &&) = default ;
    GetTaskByUuidResponseBodyTaskConversations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskByUuidResponseBodyTaskConversations() = default ;
    GetTaskByUuidResponseBodyTaskConversations& operator=(const GetTaskByUuidResponseBodyTaskConversations &) = default ;
    GetTaskByUuidResponseBodyTaskConversations& operator=(GetTaskByUuidResponseBodyTaskConversations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->script_ == nullptr && return this->sequenceId_ == nullptr && return this->speaker_ == nullptr && return this->timestamp_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetTaskByUuidResponseBodyTaskConversations& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string script() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline GetTaskByUuidResponseBodyTaskConversations& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    // sequenceId Field Functions 
    bool hasSequenceId() const { return this->sequenceId_ != nullptr;};
    void deleteSequenceId() { this->sequenceId_ = nullptr;};
    inline string sequenceId() const { DARABONBA_PTR_GET_DEFAULT(sequenceId_, "") };
    inline GetTaskByUuidResponseBodyTaskConversations& setSequenceId(string sequenceId) { DARABONBA_PTR_SET_VALUE(sequenceId_, sequenceId) };


    // speaker Field Functions 
    bool hasSpeaker() const { return this->speaker_ != nullptr;};
    void deleteSpeaker() { this->speaker_ = nullptr;};
    inline string speaker() const { DARABONBA_PTR_GET_DEFAULT(speaker_, "") };
    inline GetTaskByUuidResponseBodyTaskConversations& setSpeaker(string speaker) { DARABONBA_PTR_SET_VALUE(speaker_, speaker) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetTaskByUuidResponseBodyTaskConversations& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> script_ = nullptr;
    std::shared_ptr<string> sequenceId_ = nullptr;
    std::shared_ptr<string> speaker_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
