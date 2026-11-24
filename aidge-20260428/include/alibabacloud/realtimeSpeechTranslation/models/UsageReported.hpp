// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_USAGEREPORTED_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_USAGEREPORTED_HPP_
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
  class UsageReported : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UsageReported& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(usage_id, usageId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(usageMap, usageMap_);
    };
    friend void from_json(const Darabonba::Json& j, UsageReported& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(usage_id, usageId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(usageMap, usageMap_);
    };
    UsageReported() = default ;
    UsageReported(const UsageReported &) = default ;
    UsageReported(UsageReported &&) = default ;
    UsageReported(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UsageReported() = default ;
    UsageReported& operator=(const UsageReported &) = default ;
    UsageReported& operator=(UsageReported &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsageMap : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsageMap& obj) { 
        DARABONBA_PTR_TO_JSON(InputAudioSeconds, inputAudioSeconds_);
        DARABONBA_PTR_TO_JSON(VoiceTranslationType, voiceTranslationType_);
      };
      friend void from_json(const Darabonba::Json& j, UsageMap& obj) { 
        DARABONBA_PTR_FROM_JSON(InputAudioSeconds, inputAudioSeconds_);
        DARABONBA_PTR_FROM_JSON(VoiceTranslationType, voiceTranslationType_);
      };
      UsageMap() = default ;
      UsageMap(const UsageMap &) = default ;
      UsageMap(UsageMap &&) = default ;
      UsageMap(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsageMap() = default ;
      UsageMap& operator=(const UsageMap &) = default ;
      UsageMap& operator=(UsageMap &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->inputAudioSeconds_ == nullptr
        && this->voiceTranslationType_ == nullptr; };
      // inputAudioSeconds Field Functions 
      bool hasInputAudioSeconds() const { return this->inputAudioSeconds_ != nullptr;};
      void deleteInputAudioSeconds() { this->inputAudioSeconds_ = nullptr;};
      inline string getInputAudioSeconds() const { DARABONBA_PTR_GET_DEFAULT(inputAudioSeconds_, "") };
      inline UsageMap& setInputAudioSeconds(string inputAudioSeconds) { DARABONBA_PTR_SET_VALUE(inputAudioSeconds_, inputAudioSeconds) };


      // voiceTranslationType Field Functions 
      bool hasVoiceTranslationType() const { return this->voiceTranslationType_ != nullptr;};
      void deleteVoiceTranslationType() { this->voiceTranslationType_ = nullptr;};
      inline string getVoiceTranslationType() const { DARABONBA_PTR_GET_DEFAULT(voiceTranslationType_, "") };
      inline UsageMap& setVoiceTranslationType(string voiceTranslationType) { DARABONBA_PTR_SET_VALUE(voiceTranslationType_, voiceTranslationType) };


    protected:
      // 每段按采样时长独立四舍五入为整数秒，以字符串返回，允许为 "0"。
      shared_ptr<string> inputAudioSeconds_ {};
      shared_ptr<string> voiceTranslationType_ {};
    };

    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->sessionId_ == nullptr && this->usageId_ == nullptr && this->status_ == nullptr && this->usageMap_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UsageReported& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline UsageReported& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline UsageReported& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // usageId Field Functions 
    bool hasUsageId() const { return this->usageId_ != nullptr;};
    void deleteUsageId() { this->usageId_ = nullptr;};
    inline string getUsageId() const { DARABONBA_PTR_GET_DEFAULT(usageId_, "") };
    inline UsageReported& setUsageId(string usageId) { DARABONBA_PTR_SET_VALUE(usageId_, usageId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UsageReported& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // usageMap Field Functions 
    bool hasUsageMap() const { return this->usageMap_ != nullptr;};
    void deleteUsageMap() { this->usageMap_ = nullptr;};
    inline const UsageReported::UsageMap & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, UsageReported::UsageMap) };
    inline UsageReported::UsageMap getUsageMap() { DARABONBA_PTR_GET(usageMap_, UsageReported::UsageMap) };
    inline UsageReported& setUsageMap(const UsageReported::UsageMap & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
    inline UsageReported& setUsageMap(UsageReported::UsageMap && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> sessionId_ {};
    // 与计量上报使用相同的稳定标识；不以 event_id 或翻译 segment_id 代替。
    shared_ptr<string> usageId_ {};
    // 仅在真实 MQ 接收用量后发送；不表示已完成扣费或出账。
    shared_ptr<string> status_ {};
    // 单次用量记录，不是会话累计值；字段名称及字符串值与计量上报保持一致。
    shared_ptr<UsageReported::UsageMap> usageMap_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
