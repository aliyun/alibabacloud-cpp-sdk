// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPCONVERSATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPCONVERSATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppConversationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppConversationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BotId, botId_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppConversationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BotId, botId_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
    };
    GetAppConversationRequest() = default ;
    GetAppConversationRequest(const GetAppConversationRequest &) = default ;
    GetAppConversationRequest(GetAppConversationRequest &&) = default ;
    GetAppConversationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppConversationRequest() = default ;
    GetAppConversationRequest& operator=(const GetAppConversationRequest &) = default ;
    GetAppConversationRequest& operator=(GetAppConversationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->botId_ == nullptr
        && this->conversationId_ == nullptr; };
    // botId Field Functions 
    bool hasBotId() const { return this->botId_ != nullptr;};
    void deleteBotId() { this->botId_ = nullptr;};
    inline string getBotId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
    inline GetAppConversationRequest& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline GetAppConversationRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


  protected:
    shared_ptr<string> botId_ {};
    shared_ptr<string> conversationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
