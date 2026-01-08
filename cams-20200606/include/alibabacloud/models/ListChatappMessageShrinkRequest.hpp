// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHATAPPMESSAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHATAPPMESSAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ListChatappMessageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChatappMessageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessNumber, businessNumber_);
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(ClientAcceptStatus, clientAcceptStatus_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndTimeStr, endTimeStr_);
      DARABONBA_PTR_TO_JSON(EventAction, eventAction_);
      DARABONBA_PTR_TO_JSON(GroupMessageId, groupMessageId_);
      DARABONBA_PTR_TO_JSON(MessageStatus, messageStatus_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Page, pageShrink_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StartTimeStr, startTimeStr_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(UserNumber, userNumber_);
    };
    friend void from_json(const Darabonba::Json& j, ListChatappMessageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessNumber, businessNumber_);
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(ClientAcceptStatus, clientAcceptStatus_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndTimeStr, endTimeStr_);
      DARABONBA_PTR_FROM_JSON(EventAction, eventAction_);
      DARABONBA_PTR_FROM_JSON(GroupMessageId, groupMessageId_);
      DARABONBA_PTR_FROM_JSON(MessageStatus, messageStatus_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Page, pageShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StartTimeStr, startTimeStr_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(UserNumber, userNumber_);
    };
    ListChatappMessageShrinkRequest() = default ;
    ListChatappMessageShrinkRequest(const ListChatappMessageShrinkRequest &) = default ;
    ListChatappMessageShrinkRequest(ListChatappMessageShrinkRequest &&) = default ;
    ListChatappMessageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChatappMessageShrinkRequest() = default ;
    ListChatappMessageShrinkRequest& operator=(const ListChatappMessageShrinkRequest &) = default ;
    ListChatappMessageShrinkRequest& operator=(ListChatappMessageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessNumber_ == nullptr
        && this->channelType_ == nullptr && this->clientAcceptStatus_ == nullptr && this->custSpaceId_ == nullptr && this->endTime_ == nullptr && this->endTimeStr_ == nullptr
        && this->eventAction_ == nullptr && this->groupMessageId_ == nullptr && this->messageStatus_ == nullptr && this->ownerId_ == nullptr && this->pageShrink_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->startTime_ == nullptr && this->startTimeStr_ == nullptr && this->templateCode_ == nullptr
        && this->userNumber_ == nullptr; };
    // businessNumber Field Functions 
    bool hasBusinessNumber() const { return this->businessNumber_ != nullptr;};
    void deleteBusinessNumber() { this->businessNumber_ = nullptr;};
    inline string getBusinessNumber() const { DARABONBA_PTR_GET_DEFAULT(businessNumber_, "") };
    inline ListChatappMessageShrinkRequest& setBusinessNumber(string businessNumber) { DARABONBA_PTR_SET_VALUE(businessNumber_, businessNumber) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline ListChatappMessageShrinkRequest& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // clientAcceptStatus Field Functions 
    bool hasClientAcceptStatus() const { return this->clientAcceptStatus_ != nullptr;};
    void deleteClientAcceptStatus() { this->clientAcceptStatus_ = nullptr;};
    inline string getClientAcceptStatus() const { DARABONBA_PTR_GET_DEFAULT(clientAcceptStatus_, "") };
    inline ListChatappMessageShrinkRequest& setClientAcceptStatus(string clientAcceptStatus) { DARABONBA_PTR_SET_VALUE(clientAcceptStatus_, clientAcceptStatus) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline ListChatappMessageShrinkRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListChatappMessageShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endTimeStr Field Functions 
    bool hasEndTimeStr() const { return this->endTimeStr_ != nullptr;};
    void deleteEndTimeStr() { this->endTimeStr_ = nullptr;};
    inline string getEndTimeStr() const { DARABONBA_PTR_GET_DEFAULT(endTimeStr_, "") };
    inline ListChatappMessageShrinkRequest& setEndTimeStr(string endTimeStr) { DARABONBA_PTR_SET_VALUE(endTimeStr_, endTimeStr) };


    // eventAction Field Functions 
    bool hasEventAction() const { return this->eventAction_ != nullptr;};
    void deleteEventAction() { this->eventAction_ = nullptr;};
    inline string getEventAction() const { DARABONBA_PTR_GET_DEFAULT(eventAction_, "") };
    inline ListChatappMessageShrinkRequest& setEventAction(string eventAction) { DARABONBA_PTR_SET_VALUE(eventAction_, eventAction) };


    // groupMessageId Field Functions 
    bool hasGroupMessageId() const { return this->groupMessageId_ != nullptr;};
    void deleteGroupMessageId() { this->groupMessageId_ = nullptr;};
    inline string getGroupMessageId() const { DARABONBA_PTR_GET_DEFAULT(groupMessageId_, "") };
    inline ListChatappMessageShrinkRequest& setGroupMessageId(string groupMessageId) { DARABONBA_PTR_SET_VALUE(groupMessageId_, groupMessageId) };


    // messageStatus Field Functions 
    bool hasMessageStatus() const { return this->messageStatus_ != nullptr;};
    void deleteMessageStatus() { this->messageStatus_ = nullptr;};
    inline string getMessageStatus() const { DARABONBA_PTR_GET_DEFAULT(messageStatus_, "") };
    inline ListChatappMessageShrinkRequest& setMessageStatus(string messageStatus) { DARABONBA_PTR_SET_VALUE(messageStatus_, messageStatus) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListChatappMessageShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageShrink Field Functions 
    bool hasPageShrink() const { return this->pageShrink_ != nullptr;};
    void deletePageShrink() { this->pageShrink_ = nullptr;};
    inline string getPageShrink() const { DARABONBA_PTR_GET_DEFAULT(pageShrink_, "") };
    inline ListChatappMessageShrinkRequest& setPageShrink(string pageShrink) { DARABONBA_PTR_SET_VALUE(pageShrink_, pageShrink) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListChatappMessageShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListChatappMessageShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListChatappMessageShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimeStr Field Functions 
    bool hasStartTimeStr() const { return this->startTimeStr_ != nullptr;};
    void deleteStartTimeStr() { this->startTimeStr_ = nullptr;};
    inline string getStartTimeStr() const { DARABONBA_PTR_GET_DEFAULT(startTimeStr_, "") };
    inline ListChatappMessageShrinkRequest& setStartTimeStr(string startTimeStr) { DARABONBA_PTR_SET_VALUE(startTimeStr_, startTimeStr) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline ListChatappMessageShrinkRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // userNumber Field Functions 
    bool hasUserNumber() const { return this->userNumber_ != nullptr;};
    void deleteUserNumber() { this->userNumber_ = nullptr;};
    inline string getUserNumber() const { DARABONBA_PTR_GET_DEFAULT(userNumber_, "") };
    inline ListChatappMessageShrinkRequest& setUserNumber(string userNumber) { DARABONBA_PTR_SET_VALUE(userNumber_, userNumber) };


  protected:
    // This parameter is required.
    shared_ptr<string> businessNumber_ {};
    // This parameter is required.
    shared_ptr<string> channelType_ {};
    shared_ptr<string> clientAcceptStatus_ {};
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> endTimeStr_ {};
    shared_ptr<string> eventAction_ {};
    shared_ptr<string> groupMessageId_ {};
    shared_ptr<string> messageStatus_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> pageShrink_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<string> startTimeStr_ {};
    shared_ptr<string> templateCode_ {};
    shared_ptr<string> userNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
