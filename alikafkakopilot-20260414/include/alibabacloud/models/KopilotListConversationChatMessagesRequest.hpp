// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KOPILOTLISTCONVERSATIONCHATMESSAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_KOPILOTLISTCONVERSATIONCHATMESSAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaKopilot20260414
{
namespace Models
{
  class KopilotListConversationChatMessagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KopilotListConversationChatMessagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeforeTurnId, beforeTurnId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, KopilotListConversationChatMessagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeforeTurnId, beforeTurnId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    KopilotListConversationChatMessagesRequest() = default ;
    KopilotListConversationChatMessagesRequest(const KopilotListConversationChatMessagesRequest &) = default ;
    KopilotListConversationChatMessagesRequest(KopilotListConversationChatMessagesRequest &&) = default ;
    KopilotListConversationChatMessagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KopilotListConversationChatMessagesRequest() = default ;
    KopilotListConversationChatMessagesRequest& operator=(const KopilotListConversationChatMessagesRequest &) = default ;
    KopilotListConversationChatMessagesRequest& operator=(KopilotListConversationChatMessagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beforeTurnId_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->sessionId_ == nullptr; };
    // beforeTurnId Field Functions 
    bool hasBeforeTurnId() const { return this->beforeTurnId_ != nullptr;};
    void deleteBeforeTurnId() { this->beforeTurnId_ = nullptr;};
    inline int32_t getBeforeTurnId() const { DARABONBA_PTR_GET_DEFAULT(beforeTurnId_, 0) };
    inline KopilotListConversationChatMessagesRequest& setBeforeTurnId(int32_t beforeTurnId) { DARABONBA_PTR_SET_VALUE(beforeTurnId_, beforeTurnId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline KopilotListConversationChatMessagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline KopilotListConversationChatMessagesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline KopilotListConversationChatMessagesRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    shared_ptr<int32_t> beforeTurnId_ {};
    shared_ptr<int32_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaKopilot20260414
#endif
