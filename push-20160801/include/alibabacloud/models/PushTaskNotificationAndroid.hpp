// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROID_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROID_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PushTaskNotificationAndroidOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTaskNotificationAndroid : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTaskNotificationAndroid& obj) { 
      DARABONBA_PTR_TO_JSON(BadgeActivity, badgeActivity_);
      DARABONBA_PTR_TO_JSON(BadgeAddNum, badgeAddNum_);
      DARABONBA_PTR_TO_JSON(BadgeSetNum, badgeSetNum_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ExtParameters, extParameters_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InboxContent, inboxContent_);
      DARABONBA_PTR_TO_JSON(Music, music_);
      DARABONBA_PTR_TO_JSON(NotifyId, notifyId_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(PictureUrl, pictureUrl_);
      DARABONBA_PTR_TO_JSON(RenderStyle, renderStyle_);
      DARABONBA_PTR_TO_JSON(TestMessage, testMessage_);
      DARABONBA_PTR_TO_JSON(VendorChannelActivity, vendorChannelActivity_);
    };
    friend void from_json(const Darabonba::Json& j, PushTaskNotificationAndroid& obj) { 
      DARABONBA_PTR_FROM_JSON(BadgeActivity, badgeActivity_);
      DARABONBA_PTR_FROM_JSON(BadgeAddNum, badgeAddNum_);
      DARABONBA_PTR_FROM_JSON(BadgeSetNum, badgeSetNum_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ExtParameters, extParameters_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InboxContent, inboxContent_);
      DARABONBA_PTR_FROM_JSON(Music, music_);
      DARABONBA_PTR_FROM_JSON(NotifyId, notifyId_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(PictureUrl, pictureUrl_);
      DARABONBA_PTR_FROM_JSON(RenderStyle, renderStyle_);
      DARABONBA_PTR_FROM_JSON(TestMessage, testMessage_);
      DARABONBA_PTR_FROM_JSON(VendorChannelActivity, vendorChannelActivity_);
    };
    PushTaskNotificationAndroid() = default ;
    PushTaskNotificationAndroid(const PushTaskNotificationAndroid &) = default ;
    PushTaskNotificationAndroid(PushTaskNotificationAndroid &&) = default ;
    PushTaskNotificationAndroid(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTaskNotificationAndroid() = default ;
    PushTaskNotificationAndroid& operator=(const PushTaskNotificationAndroid &) = default ;
    PushTaskNotificationAndroid& operator=(PushTaskNotificationAndroid &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->badgeActivity_ != nullptr
        && this->badgeAddNum_ != nullptr && this->badgeSetNum_ != nullptr && this->channelId_ != nullptr && this->extParameters_ != nullptr && this->groupId_ != nullptr
        && this->imageUrl_ != nullptr && this->inboxContent_ != nullptr && this->music_ != nullptr && this->notifyId_ != nullptr && this->options_ != nullptr
        && this->pictureUrl_ != nullptr && this->renderStyle_ != nullptr && this->testMessage_ != nullptr && this->vendorChannelActivity_ != nullptr; };
    // badgeActivity Field Functions 
    bool hasBadgeActivity() const { return this->badgeActivity_ != nullptr;};
    void deleteBadgeActivity() { this->badgeActivity_ = nullptr;};
    inline string badgeActivity() const { DARABONBA_PTR_GET_DEFAULT(badgeActivity_, "") };
    inline PushTaskNotificationAndroid& setBadgeActivity(string badgeActivity) { DARABONBA_PTR_SET_VALUE(badgeActivity_, badgeActivity) };


    // badgeAddNum Field Functions 
    bool hasBadgeAddNum() const { return this->badgeAddNum_ != nullptr;};
    void deleteBadgeAddNum() { this->badgeAddNum_ = nullptr;};
    inline int32_t badgeAddNum() const { DARABONBA_PTR_GET_DEFAULT(badgeAddNum_, 0) };
    inline PushTaskNotificationAndroid& setBadgeAddNum(int32_t badgeAddNum) { DARABONBA_PTR_SET_VALUE(badgeAddNum_, badgeAddNum) };


    // badgeSetNum Field Functions 
    bool hasBadgeSetNum() const { return this->badgeSetNum_ != nullptr;};
    void deleteBadgeSetNum() { this->badgeSetNum_ = nullptr;};
    inline int32_t badgeSetNum() const { DARABONBA_PTR_GET_DEFAULT(badgeSetNum_, 0) };
    inline PushTaskNotificationAndroid& setBadgeSetNum(int32_t badgeSetNum) { DARABONBA_PTR_SET_VALUE(badgeSetNum_, badgeSetNum) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline PushTaskNotificationAndroid& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // extParameters Field Functions 
    bool hasExtParameters() const { return this->extParameters_ != nullptr;};
    void deleteExtParameters() { this->extParameters_ = nullptr;};
    inline string extParameters() const { DARABONBA_PTR_GET_DEFAULT(extParameters_, "") };
    inline PushTaskNotificationAndroid& setExtParameters(string extParameters) { DARABONBA_PTR_SET_VALUE(extParameters_, extParameters) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline PushTaskNotificationAndroid& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline PushTaskNotificationAndroid& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // inboxContent Field Functions 
    bool hasInboxContent() const { return this->inboxContent_ != nullptr;};
    void deleteInboxContent() { this->inboxContent_ = nullptr;};
    inline const vector<string> & inboxContent() const { DARABONBA_PTR_GET_CONST(inboxContent_, vector<string>) };
    inline vector<string> inboxContent() { DARABONBA_PTR_GET(inboxContent_, vector<string>) };
    inline PushTaskNotificationAndroid& setInboxContent(const vector<string> & inboxContent) { DARABONBA_PTR_SET_VALUE(inboxContent_, inboxContent) };
    inline PushTaskNotificationAndroid& setInboxContent(vector<string> && inboxContent) { DARABONBA_PTR_SET_RVALUE(inboxContent_, inboxContent) };


    // music Field Functions 
    bool hasMusic() const { return this->music_ != nullptr;};
    void deleteMusic() { this->music_ = nullptr;};
    inline string music() const { DARABONBA_PTR_GET_DEFAULT(music_, "") };
    inline PushTaskNotificationAndroid& setMusic(string music) { DARABONBA_PTR_SET_VALUE(music_, music) };


    // notifyId Field Functions 
    bool hasNotifyId() const { return this->notifyId_ != nullptr;};
    void deleteNotifyId() { this->notifyId_ = nullptr;};
    inline int32_t notifyId() const { DARABONBA_PTR_GET_DEFAULT(notifyId_, 0) };
    inline PushTaskNotificationAndroid& setNotifyId(int32_t notifyId) { DARABONBA_PTR_SET_VALUE(notifyId_, notifyId) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const Models::PushTaskNotificationAndroidOptions & options() const { DARABONBA_PTR_GET_CONST(options_, Models::PushTaskNotificationAndroidOptions) };
    inline Models::PushTaskNotificationAndroidOptions options() { DARABONBA_PTR_GET(options_, Models::PushTaskNotificationAndroidOptions) };
    inline PushTaskNotificationAndroid& setOptions(const Models::PushTaskNotificationAndroidOptions & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline PushTaskNotificationAndroid& setOptions(Models::PushTaskNotificationAndroidOptions && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // pictureUrl Field Functions 
    bool hasPictureUrl() const { return this->pictureUrl_ != nullptr;};
    void deletePictureUrl() { this->pictureUrl_ = nullptr;};
    inline string pictureUrl() const { DARABONBA_PTR_GET_DEFAULT(pictureUrl_, "") };
    inline PushTaskNotificationAndroid& setPictureUrl(string pictureUrl) { DARABONBA_PTR_SET_VALUE(pictureUrl_, pictureUrl) };


    // renderStyle Field Functions 
    bool hasRenderStyle() const { return this->renderStyle_ != nullptr;};
    void deleteRenderStyle() { this->renderStyle_ = nullptr;};
    inline string renderStyle() const { DARABONBA_PTR_GET_DEFAULT(renderStyle_, "") };
    inline PushTaskNotificationAndroid& setRenderStyle(string renderStyle) { DARABONBA_PTR_SET_VALUE(renderStyle_, renderStyle) };


    // testMessage Field Functions 
    bool hasTestMessage() const { return this->testMessage_ != nullptr;};
    void deleteTestMessage() { this->testMessage_ = nullptr;};
    inline bool testMessage() const { DARABONBA_PTR_GET_DEFAULT(testMessage_, false) };
    inline PushTaskNotificationAndroid& setTestMessage(bool testMessage) { DARABONBA_PTR_SET_VALUE(testMessage_, testMessage) };


    // vendorChannelActivity Field Functions 
    bool hasVendorChannelActivity() const { return this->vendorChannelActivity_ != nullptr;};
    void deleteVendorChannelActivity() { this->vendorChannelActivity_ = nullptr;};
    inline string vendorChannelActivity() const { DARABONBA_PTR_GET_DEFAULT(vendorChannelActivity_, "") };
    inline PushTaskNotificationAndroid& setVendorChannelActivity(string vendorChannelActivity) { DARABONBA_PTR_SET_VALUE(vendorChannelActivity_, vendorChannelActivity) };


  protected:
    std::shared_ptr<string> badgeActivity_ = nullptr;
    std::shared_ptr<int32_t> badgeAddNum_ = nullptr;
    std::shared_ptr<int32_t> badgeSetNum_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> extParameters_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<vector<string>> inboxContent_ = nullptr;
    std::shared_ptr<string> music_ = nullptr;
    std::shared_ptr<int32_t> notifyId_ = nullptr;
    std::shared_ptr<Models::PushTaskNotificationAndroidOptions> options_ = nullptr;
    std::shared_ptr<string> pictureUrl_ = nullptr;
    std::shared_ptr<string> renderStyle_ = nullptr;
    std::shared_ptr<bool> testMessage_ = nullptr;
    std::shared_ptr<string> vendorChannelActivity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
