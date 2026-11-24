// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_INPUTAUDIOBUFFERAPPEND_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_INPUTAUDIOBUFFERAPPEND_HPP_
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
  class InputAudioBufferAppend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InputAudioBufferAppend& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_TO_JSON(audio, audio_);
      DARABONBA_PTR_TO_JSON(sequence, sequence_);
    };
    friend void from_json(const Darabonba::Json& j, InputAudioBufferAppend& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_FROM_JSON(audio, audio_);
      DARABONBA_PTR_FROM_JSON(sequence, sequence_);
    };
    InputAudioBufferAppend() = default ;
    InputAudioBufferAppend(const InputAudioBufferAppend &) = default ;
    InputAudioBufferAppend(InputAudioBufferAppend &&) = default ;
    InputAudioBufferAppend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InputAudioBufferAppend() = default ;
    InputAudioBufferAppend& operator=(const InputAudioBufferAppend &) = default ;
    InputAudioBufferAppend& operator=(InputAudioBufferAppend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->audio_.empty() && this->sequence_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline InputAudioBufferAppend& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline InputAudioBufferAppend& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // audio Field Functions 
    bool hasAudio() const { return !this->audio_.empty();};
    void deleteAudio() { this->audio_.clear();};
    inline Darabonba::Bytes getAudio() const { DARABONBA_GET(audio_) };
    inline InputAudioBufferAppend& setAudio(Darabonba::Bytes audio) { DARABONBA_SET_VALUE(audio_, audio) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int64_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0L) };
    inline InputAudioBufferAppend& setSequence(int64_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


  protected:
    // This parameter is required.
    shared_ptr<string> type_ {};
    // 可省略；提供时必须为非空、非纯空白字符串。
    shared_ptr<string> eventId_ {};
    // 等待 SessionUpdated 后发送；必须为 JSON 文本消息中的 Base64 字符串，不能发送 binary 帧。解码后每块最多10240字节；双向必须为非空 PCM16 完整采样，字节数为偶数。解码与大小检查由后端执行。
    // 
    // This parameter is required.
    Darabonba::Bytes audio_ {};
    // 仅双向使用；可省略，提供时从0开始递增。只有携带 sequence 且成功接受的块推进计数；clear 不重置。网关不补默认值，连续性由后端校验。
    shared_ptr<int64_t> sequence_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
