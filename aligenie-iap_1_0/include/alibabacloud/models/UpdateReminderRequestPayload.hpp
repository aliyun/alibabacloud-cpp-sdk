// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREMINDERREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREMINDERREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateReminderRequestPayloadRecurrenceRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class UpdateReminderRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateReminderRequestPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsDebug, isDebug_);
      DARABONBA_PTR_TO_JSON(RecurrenceRule, recurrenceRule_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateReminderRequestPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsDebug, isDebug_);
      DARABONBA_PTR_FROM_JSON(RecurrenceRule, recurrenceRule_);
    };
    UpdateReminderRequestPayload() = default ;
    UpdateReminderRequestPayload(const UpdateReminderRequestPayload &) = default ;
    UpdateReminderRequestPayload(UpdateReminderRequestPayload &&) = default ;
    UpdateReminderRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateReminderRequestPayload() = default ;
    UpdateReminderRequestPayload& operator=(const UpdateReminderRequestPayload &) = default ;
    UpdateReminderRequestPayload& operator=(UpdateReminderRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->id_ != nullptr && this->isDebug_ != nullptr && this->recurrenceRule_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateReminderRequestPayload& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateReminderRequestPayload& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isDebug Field Functions 
    bool hasIsDebug() const { return this->isDebug_ != nullptr;};
    void deleteIsDebug() { this->isDebug_ = nullptr;};
    inline bool isDebug() const { DARABONBA_PTR_GET_DEFAULT(isDebug_, false) };
    inline UpdateReminderRequestPayload& setIsDebug(bool isDebug) { DARABONBA_PTR_SET_VALUE(isDebug_, isDebug) };


    // recurrenceRule Field Functions 
    bool hasRecurrenceRule() const { return this->recurrenceRule_ != nullptr;};
    void deleteRecurrenceRule() { this->recurrenceRule_ = nullptr;};
    inline const Models::UpdateReminderRequestPayloadRecurrenceRule & recurrenceRule() const { DARABONBA_PTR_GET_CONST(recurrenceRule_, Models::UpdateReminderRequestPayloadRecurrenceRule) };
    inline Models::UpdateReminderRequestPayloadRecurrenceRule recurrenceRule() { DARABONBA_PTR_GET(recurrenceRule_, Models::UpdateReminderRequestPayloadRecurrenceRule) };
    inline UpdateReminderRequestPayload& setRecurrenceRule(const Models::UpdateReminderRequestPayloadRecurrenceRule & recurrenceRule) { DARABONBA_PTR_SET_VALUE(recurrenceRule_, recurrenceRule) };
    inline UpdateReminderRequestPayload& setRecurrenceRule(Models::UpdateReminderRequestPayloadRecurrenceRule && recurrenceRule) { DARABONBA_PTR_SET_RVALUE(recurrenceRule_, recurrenceRule) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> isDebug_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::UpdateReminderRequestPayloadRecurrenceRule> recurrenceRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
