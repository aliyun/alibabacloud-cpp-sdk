// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONHMOS_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONHMOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTaskNotificationHmos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTaskNotificationHmos& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(BadgeAddNum, badgeAddNum_);
      DARABONBA_PTR_TO_JSON(BadgeSetNum, badgeSetNum_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ExtParameters, extParameters_);
      DARABONBA_PTR_TO_JSON(ExtensionExtraData, extensionExtraData_);
      DARABONBA_PTR_TO_JSON(ExtensionPush, extensionPush_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InboxContent, inboxContent_);
      DARABONBA_PTR_TO_JSON(LiveViewPayload, liveViewPayload_);
      DARABONBA_PTR_TO_JSON(NotifyId, notifyId_);
      DARABONBA_PTR_TO_JSON(ReceiptId, receiptId_);
      DARABONBA_PTR_TO_JSON(RenderStyle, renderStyle_);
      DARABONBA_PTR_TO_JSON(SlotType, slotType_);
      DARABONBA_PTR_TO_JSON(TestMessage, testMessage_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, PushTaskNotificationHmos& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(BadgeAddNum, badgeAddNum_);
      DARABONBA_PTR_FROM_JSON(BadgeSetNum, badgeSetNum_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ExtParameters, extParameters_);
      DARABONBA_PTR_FROM_JSON(ExtensionExtraData, extensionExtraData_);
      DARABONBA_PTR_FROM_JSON(ExtensionPush, extensionPush_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InboxContent, inboxContent_);
      DARABONBA_PTR_FROM_JSON(LiveViewPayload, liveViewPayload_);
      DARABONBA_PTR_FROM_JSON(NotifyId, notifyId_);
      DARABONBA_PTR_FROM_JSON(ReceiptId, receiptId_);
      DARABONBA_PTR_FROM_JSON(RenderStyle, renderStyle_);
      DARABONBA_PTR_FROM_JSON(SlotType, slotType_);
      DARABONBA_PTR_FROM_JSON(TestMessage, testMessage_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    PushTaskNotificationHmos() = default ;
    PushTaskNotificationHmos(const PushTaskNotificationHmos &) = default ;
    PushTaskNotificationHmos(PushTaskNotificationHmos &&) = default ;
    PushTaskNotificationHmos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTaskNotificationHmos() = default ;
    PushTaskNotificationHmos& operator=(const PushTaskNotificationHmos &) = default ;
    PushTaskNotificationHmos& operator=(PushTaskNotificationHmos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->badgeAddNum_ == nullptr && return this->badgeSetNum_ == nullptr && return this->category_ == nullptr && return this->extParameters_ == nullptr && return this->extensionExtraData_ == nullptr
        && return this->extensionPush_ == nullptr && return this->imageUrl_ == nullptr && return this->inboxContent_ == nullptr && return this->liveViewPayload_ == nullptr && return this->notifyId_ == nullptr
        && return this->receiptId_ == nullptr && return this->renderStyle_ == nullptr && return this->slotType_ == nullptr && return this->testMessage_ == nullptr && return this->uri_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline PushTaskNotificationHmos& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // badgeAddNum Field Functions 
    bool hasBadgeAddNum() const { return this->badgeAddNum_ != nullptr;};
    void deleteBadgeAddNum() { this->badgeAddNum_ = nullptr;};
    inline int32_t badgeAddNum() const { DARABONBA_PTR_GET_DEFAULT(badgeAddNum_, 0) };
    inline PushTaskNotificationHmos& setBadgeAddNum(int32_t badgeAddNum) { DARABONBA_PTR_SET_VALUE(badgeAddNum_, badgeAddNum) };


    // badgeSetNum Field Functions 
    bool hasBadgeSetNum() const { return this->badgeSetNum_ != nullptr;};
    void deleteBadgeSetNum() { this->badgeSetNum_ = nullptr;};
    inline int32_t badgeSetNum() const { DARABONBA_PTR_GET_DEFAULT(badgeSetNum_, 0) };
    inline PushTaskNotificationHmos& setBadgeSetNum(int32_t badgeSetNum) { DARABONBA_PTR_SET_VALUE(badgeSetNum_, badgeSetNum) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline PushTaskNotificationHmos& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // extParameters Field Functions 
    bool hasExtParameters() const { return this->extParameters_ != nullptr;};
    void deleteExtParameters() { this->extParameters_ = nullptr;};
    inline string extParameters() const { DARABONBA_PTR_GET_DEFAULT(extParameters_, "") };
    inline PushTaskNotificationHmos& setExtParameters(string extParameters) { DARABONBA_PTR_SET_VALUE(extParameters_, extParameters) };


    // extensionExtraData Field Functions 
    bool hasExtensionExtraData() const { return this->extensionExtraData_ != nullptr;};
    void deleteExtensionExtraData() { this->extensionExtraData_ = nullptr;};
    inline string extensionExtraData() const { DARABONBA_PTR_GET_DEFAULT(extensionExtraData_, "") };
    inline PushTaskNotificationHmos& setExtensionExtraData(string extensionExtraData) { DARABONBA_PTR_SET_VALUE(extensionExtraData_, extensionExtraData) };


    // extensionPush Field Functions 
    bool hasExtensionPush() const { return this->extensionPush_ != nullptr;};
    void deleteExtensionPush() { this->extensionPush_ = nullptr;};
    inline bool extensionPush() const { DARABONBA_PTR_GET_DEFAULT(extensionPush_, false) };
    inline PushTaskNotificationHmos& setExtensionPush(bool extensionPush) { DARABONBA_PTR_SET_VALUE(extensionPush_, extensionPush) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline PushTaskNotificationHmos& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // inboxContent Field Functions 
    bool hasInboxContent() const { return this->inboxContent_ != nullptr;};
    void deleteInboxContent() { this->inboxContent_ = nullptr;};
    inline const vector<string> & inboxContent() const { DARABONBA_PTR_GET_CONST(inboxContent_, vector<string>) };
    inline vector<string> inboxContent() { DARABONBA_PTR_GET(inboxContent_, vector<string>) };
    inline PushTaskNotificationHmos& setInboxContent(const vector<string> & inboxContent) { DARABONBA_PTR_SET_VALUE(inboxContent_, inboxContent) };
    inline PushTaskNotificationHmos& setInboxContent(vector<string> && inboxContent) { DARABONBA_PTR_SET_RVALUE(inboxContent_, inboxContent) };


    // liveViewPayload Field Functions 
    bool hasLiveViewPayload() const { return this->liveViewPayload_ != nullptr;};
    void deleteLiveViewPayload() { this->liveViewPayload_ = nullptr;};
    inline string liveViewPayload() const { DARABONBA_PTR_GET_DEFAULT(liveViewPayload_, "") };
    inline PushTaskNotificationHmos& setLiveViewPayload(string liveViewPayload) { DARABONBA_PTR_SET_VALUE(liveViewPayload_, liveViewPayload) };


    // notifyId Field Functions 
    bool hasNotifyId() const { return this->notifyId_ != nullptr;};
    void deleteNotifyId() { this->notifyId_ = nullptr;};
    inline int32_t notifyId() const { DARABONBA_PTR_GET_DEFAULT(notifyId_, 0) };
    inline PushTaskNotificationHmos& setNotifyId(int32_t notifyId) { DARABONBA_PTR_SET_VALUE(notifyId_, notifyId) };


    // receiptId Field Functions 
    bool hasReceiptId() const { return this->receiptId_ != nullptr;};
    void deleteReceiptId() { this->receiptId_ = nullptr;};
    inline string receiptId() const { DARABONBA_PTR_GET_DEFAULT(receiptId_, "") };
    inline PushTaskNotificationHmos& setReceiptId(string receiptId) { DARABONBA_PTR_SET_VALUE(receiptId_, receiptId) };


    // renderStyle Field Functions 
    bool hasRenderStyle() const { return this->renderStyle_ != nullptr;};
    void deleteRenderStyle() { this->renderStyle_ = nullptr;};
    inline string renderStyle() const { DARABONBA_PTR_GET_DEFAULT(renderStyle_, "") };
    inline PushTaskNotificationHmos& setRenderStyle(string renderStyle) { DARABONBA_PTR_SET_VALUE(renderStyle_, renderStyle) };


    // slotType Field Functions 
    bool hasSlotType() const { return this->slotType_ != nullptr;};
    void deleteSlotType() { this->slotType_ = nullptr;};
    inline string slotType() const { DARABONBA_PTR_GET_DEFAULT(slotType_, "") };
    inline PushTaskNotificationHmos& setSlotType(string slotType) { DARABONBA_PTR_SET_VALUE(slotType_, slotType) };


    // testMessage Field Functions 
    bool hasTestMessage() const { return this->testMessage_ != nullptr;};
    void deleteTestMessage() { this->testMessage_ = nullptr;};
    inline bool testMessage() const { DARABONBA_PTR_GET_DEFAULT(testMessage_, false) };
    inline PushTaskNotificationHmos& setTestMessage(bool testMessage) { DARABONBA_PTR_SET_VALUE(testMessage_, testMessage) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline PushTaskNotificationHmos& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<int32_t> badgeAddNum_ = nullptr;
    std::shared_ptr<int32_t> badgeSetNum_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> extParameters_ = nullptr;
    std::shared_ptr<string> extensionExtraData_ = nullptr;
    std::shared_ptr<bool> extensionPush_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<vector<string>> inboxContent_ = nullptr;
    std::shared_ptr<string> liveViewPayload_ = nullptr;
    std::shared_ptr<int32_t> notifyId_ = nullptr;
    std::shared_ptr<string> receiptId_ = nullptr;
    std::shared_ptr<string> renderStyle_ = nullptr;
    std::shared_ptr<string> slotType_ = nullptr;
    std::shared_ptr<bool> testMessage_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
