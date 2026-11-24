// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_INPUTAUDIOBUFFERCLEAR_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_INPUTAUDIOBUFFERCLEAR_HPP_
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
  class InputAudioBufferClear : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InputAudioBufferClear& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
    };
    friend void from_json(const Darabonba::Json& j, InputAudioBufferClear& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
    };
    InputAudioBufferClear() = default ;
    InputAudioBufferClear(const InputAudioBufferClear &) = default ;
    InputAudioBufferClear(InputAudioBufferClear &&) = default ;
    InputAudioBufferClear(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InputAudioBufferClear() = default ;
    InputAudioBufferClear& operator=(const InputAudioBufferClear &) = default ;
    InputAudioBufferClear& operator=(InputAudioBufferClear &&) = default ;
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
    inline InputAudioBufferClear& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline InputAudioBufferClear& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


  protected:
    // 无额外业务入参。清理未处理缓冲，不撤回已下发结果；双向仅 manual 模式允许，server_vad 或存在待确认 commit 时拒绝。
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
