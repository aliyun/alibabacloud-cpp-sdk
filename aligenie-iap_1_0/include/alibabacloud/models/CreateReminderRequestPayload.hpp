// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREMINDERREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_CREATEREMINDERREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateReminderRequestPayloadRecurrenceRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class CreateReminderRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReminderRequestPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(IsDebug, isDebug_);
      DARABONBA_PTR_TO_JSON(RecurrenceRule, recurrenceRule_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReminderRequestPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(IsDebug, isDebug_);
      DARABONBA_PTR_FROM_JSON(RecurrenceRule, recurrenceRule_);
    };
    CreateReminderRequestPayload() = default ;
    CreateReminderRequestPayload(const CreateReminderRequestPayload &) = default ;
    CreateReminderRequestPayload(CreateReminderRequestPayload &&) = default ;
    CreateReminderRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReminderRequestPayload() = default ;
    CreateReminderRequestPayload& operator=(const CreateReminderRequestPayload &) = default ;
    CreateReminderRequestPayload& operator=(CreateReminderRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->isDebug_ != nullptr && this->recurrenceRule_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateReminderRequestPayload& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // isDebug Field Functions 
    bool hasIsDebug() const { return this->isDebug_ != nullptr;};
    void deleteIsDebug() { this->isDebug_ = nullptr;};
    inline bool isDebug() const { DARABONBA_PTR_GET_DEFAULT(isDebug_, false) };
    inline CreateReminderRequestPayload& setIsDebug(bool isDebug) { DARABONBA_PTR_SET_VALUE(isDebug_, isDebug) };


    // recurrenceRule Field Functions 
    bool hasRecurrenceRule() const { return this->recurrenceRule_ != nullptr;};
    void deleteRecurrenceRule() { this->recurrenceRule_ = nullptr;};
    inline const Models::CreateReminderRequestPayloadRecurrenceRule & recurrenceRule() const { DARABONBA_PTR_GET_CONST(recurrenceRule_, Models::CreateReminderRequestPayloadRecurrenceRule) };
    inline Models::CreateReminderRequestPayloadRecurrenceRule recurrenceRule() { DARABONBA_PTR_GET(recurrenceRule_, Models::CreateReminderRequestPayloadRecurrenceRule) };
    inline CreateReminderRequestPayload& setRecurrenceRule(const Models::CreateReminderRequestPayloadRecurrenceRule & recurrenceRule) { DARABONBA_PTR_SET_VALUE(recurrenceRule_, recurrenceRule) };
    inline CreateReminderRequestPayload& setRecurrenceRule(Models::CreateReminderRequestPayloadRecurrenceRule && recurrenceRule) { DARABONBA_PTR_SET_RVALUE(recurrenceRule_, recurrenceRule) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> isDebug_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::CreateReminderRequestPayloadRecurrenceRule> recurrenceRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
