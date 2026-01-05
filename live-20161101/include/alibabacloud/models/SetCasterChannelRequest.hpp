// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCASTERCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCASTERCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetCasterChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetCasterChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(FaceBeauty, faceBeauty_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlayStatus, playStatus_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(SeekOffset, seekOffset_);
    };
    friend void from_json(const Darabonba::Json& j, SetCasterChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(FaceBeauty, faceBeauty_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlayStatus, playStatus_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(SeekOffset, seekOffset_);
    };
    SetCasterChannelRequest() = default ;
    SetCasterChannelRequest(const SetCasterChannelRequest &) = default ;
    SetCasterChannelRequest(SetCasterChannelRequest &&) = default ;
    SetCasterChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetCasterChannelRequest() = default ;
    SetCasterChannelRequest& operator=(const SetCasterChannelRequest &) = default ;
    SetCasterChannelRequest& operator=(SetCasterChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && this->channelId_ == nullptr && this->faceBeauty_ == nullptr && this->ownerId_ == nullptr && this->playStatus_ == nullptr && this->regionId_ == nullptr
        && this->resourceId_ == nullptr && this->seekOffset_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline SetCasterChannelRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline SetCasterChannelRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // faceBeauty Field Functions 
    bool hasFaceBeauty() const { return this->faceBeauty_ != nullptr;};
    void deleteFaceBeauty() { this->faceBeauty_ = nullptr;};
    inline string getFaceBeauty() const { DARABONBA_PTR_GET_DEFAULT(faceBeauty_, "") };
    inline SetCasterChannelRequest& setFaceBeauty(string faceBeauty) { DARABONBA_PTR_SET_VALUE(faceBeauty_, faceBeauty) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetCasterChannelRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // playStatus Field Functions 
    bool hasPlayStatus() const { return this->playStatus_ != nullptr;};
    void deletePlayStatus() { this->playStatus_ = nullptr;};
    inline int32_t getPlayStatus() const { DARABONBA_PTR_GET_DEFAULT(playStatus_, 0) };
    inline SetCasterChannelRequest& setPlayStatus(int32_t playStatus) { DARABONBA_PTR_SET_VALUE(playStatus_, playStatus) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetCasterChannelRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline SetCasterChannelRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // seekOffset Field Functions 
    bool hasSeekOffset() const { return this->seekOffset_ != nullptr;};
    void deleteSeekOffset() { this->seekOffset_ = nullptr;};
    inline int32_t getSeekOffset() const { DARABONBA_PTR_GET_DEFAULT(seekOffset_, 0) };
    inline SetCasterChannelRequest& setSeekOffset(int32_t seekOffset) { DARABONBA_PTR_SET_VALUE(seekOffset_, seekOffset) };


  protected:
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The ID of the channel.
    // 
    // When channels are enabled, the layout references the channel IDs. You can specify up to one resource for a channel. The number of resources is limited by the number of the channels of the production studio. The value must be in the RV[Number] format, such as RV01 and RV12.
    // 
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // The face retouching effect. Valid values: 0 (all effects), 1 (skin smoothing), 2 (skin whitening), 3 (dark circles removal), and 4 (nasolabial folds removal).
    shared_ptr<string> faceBeauty_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The playback status. This parameter take effects for video files, but not for live streams. Valid values:
    // 
    // *   **1**: specifies that the video source is playing. This is the default value.
    // *   **0**: specifies that the playback of the video source is paused.
    shared_ptr<int32_t> playStatus_ {};
    shared_ptr<string> regionId_ {};
    // The ID of the video source.
    shared_ptr<string> resourceId_ {};
    // The offset of the position where the production studio starts reading the video source. The value must be greater than or equal to 0, indicating an offset from the first frame. This parameter take effects for video files, but not for live streams. Unit: milliseconds.
    shared_ptr<int32_t> seekOffset_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
