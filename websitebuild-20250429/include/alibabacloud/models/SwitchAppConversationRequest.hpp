// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHAPPCONVERSATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHAPPCONVERSATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SwitchAppConversationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchAppConversationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BotId, botId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchAppConversationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BotId, botId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    SwitchAppConversationRequest() = default ;
    SwitchAppConversationRequest(const SwitchAppConversationRequest &) = default ;
    SwitchAppConversationRequest(SwitchAppConversationRequest &&) = default ;
    SwitchAppConversationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchAppConversationRequest() = default ;
    SwitchAppConversationRequest& operator=(const SwitchAppConversationRequest &) = default ;
    SwitchAppConversationRequest& operator=(SwitchAppConversationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->botId_ == nullptr && this->taskType_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline SwitchAppConversationRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // botId Field Functions 
    bool hasBotId() const { return this->botId_ != nullptr;};
    void deleteBotId() { this->botId_ = nullptr;};
    inline string getBotId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
    inline SwitchAppConversationRequest& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline SwitchAppConversationRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The business ID of the agent task.
    shared_ptr<string> bizId_ {};
    // The bot ID.
    shared_ptr<string> botId_ {};
    // The type of the agent task.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
