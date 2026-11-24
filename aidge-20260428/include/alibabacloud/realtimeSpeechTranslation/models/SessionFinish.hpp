// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_SESSIONFINISH_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_SESSIONFINISH_HPP_
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
  class SessionFinish : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SessionFinish& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, SessionFinish& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
    };
    SessionFinish() = default ;
    SessionFinish(const SessionFinish &) = default ;
    SessionFinish(SessionFinish &&) = default ;
    SessionFinish(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SessionFinish() = default ;
    SessionFinish& operator=(const SessionFinish &) = default ;
    SessionFinish& operator=(SessionFinish &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->reason_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SessionFinish& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline SessionFinish& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline SessionFinish& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // This parameter is required.
    shared_ptr<string> type_ {};
    // 可省略；提供时必须为非空、非纯空白字符串。
    shared_ptr<string> eventId_ {};
    // 双向省略时后端按 completed 排空结果，cancelled 立即取消；clear 进行中拒绝结束。单向客户端省略本字段，等待 SessionFinished 后关闭连接。网关不补默认值。
    shared_ptr<string> reason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
