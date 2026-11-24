// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_INPUTAUDIOBUFFERCOMMIT_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_INPUTAUDIOBUFFERCOMMIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace RealtimeSpeechTranslation
{
namespace Models
{
  class InputAudioBufferCommit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InputAudioBufferCommit& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
    };
    friend void from_json(const Darabonba::Json& j, InputAudioBufferCommit& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
    };
    InputAudioBufferCommit() = default ;
    InputAudioBufferCommit(const InputAudioBufferCommit &) = default ;
    InputAudioBufferCommit(InputAudioBufferCommit &&) = default ;
    InputAudioBufferCommit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InputAudioBufferCommit() = default ;
    InputAudioBufferCommit& operator=(const InputAudioBufferCommit &) = default ;
    InputAudioBufferCommit& operator=(InputAudioBufferCommit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline InputAudioBufferCommit& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline InputAudioBufferCommit& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


  protected:
    // 无额外业务入参。Manual 模式提交非空缓冲；双向须等待上一提交确认，server_vad 模式拒绝显式 commit。
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // 可省略；提供时必须为非空、非纯空白字符串。
    shared_ptr<string> eventId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
