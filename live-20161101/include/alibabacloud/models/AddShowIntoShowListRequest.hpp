// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSHOWINTOSHOWLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSHOWINTOSHOWLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddShowIntoShowListRequestShowList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddShowIntoShowListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddShowIntoShowListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(LiveInputType, liveInputType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepeatTimes, repeatTimes_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ResourceUrl, resourceUrl_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(Spot, spot_);
      DARABONBA_PTR_TO_JSON(isBatchMode, isBatchMode_);
      DARABONBA_PTR_TO_JSON(showList, showList_);
    };
    friend void from_json(const Darabonba::Json& j, AddShowIntoShowListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(LiveInputType, liveInputType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepeatTimes, repeatTimes_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ResourceUrl, resourceUrl_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(Spot, spot_);
      DARABONBA_PTR_FROM_JSON(isBatchMode, isBatchMode_);
      DARABONBA_PTR_FROM_JSON(showList, showList_);
    };
    AddShowIntoShowListRequest() = default ;
    AddShowIntoShowListRequest(const AddShowIntoShowListRequest &) = default ;
    AddShowIntoShowListRequest(AddShowIntoShowListRequest &&) = default ;
    AddShowIntoShowListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddShowIntoShowListRequest() = default ;
    AddShowIntoShowListRequest& operator=(const AddShowIntoShowListRequest &) = default ;
    AddShowIntoShowListRequest& operator=(AddShowIntoShowListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && return this->duration_ == nullptr && return this->liveInputType_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->repeatTimes_ == nullptr
        && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr && return this->resourceUrl_ == nullptr && return this->showName_ == nullptr && return this->spot_ == nullptr
        && return this->isBatchMode_ == nullptr && return this->showList_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline AddShowIntoShowListRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline AddShowIntoShowListRequest& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // liveInputType Field Functions 
    bool hasLiveInputType() const { return this->liveInputType_ != nullptr;};
    void deleteLiveInputType() { this->liveInputType_ = nullptr;};
    inline int32_t liveInputType() const { DARABONBA_PTR_GET_DEFAULT(liveInputType_, 0) };
    inline AddShowIntoShowListRequest& setLiveInputType(int32_t liveInputType) { DARABONBA_PTR_SET_VALUE(liveInputType_, liveInputType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddShowIntoShowListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddShowIntoShowListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatTimes Field Functions 
    bool hasRepeatTimes() const { return this->repeatTimes_ != nullptr;};
    void deleteRepeatTimes() { this->repeatTimes_ = nullptr;};
    inline int32_t repeatTimes() const { DARABONBA_PTR_GET_DEFAULT(repeatTimes_, 0) };
    inline AddShowIntoShowListRequest& setRepeatTimes(int32_t repeatTimes) { DARABONBA_PTR_SET_VALUE(repeatTimes_, repeatTimes) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AddShowIntoShowListRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline AddShowIntoShowListRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceUrl Field Functions 
    bool hasResourceUrl() const { return this->resourceUrl_ != nullptr;};
    void deleteResourceUrl() { this->resourceUrl_ = nullptr;};
    inline string resourceUrl() const { DARABONBA_PTR_GET_DEFAULT(resourceUrl_, "") };
    inline AddShowIntoShowListRequest& setResourceUrl(string resourceUrl) { DARABONBA_PTR_SET_VALUE(resourceUrl_, resourceUrl) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline AddShowIntoShowListRequest& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // spot Field Functions 
    bool hasSpot() const { return this->spot_ != nullptr;};
    void deleteSpot() { this->spot_ = nullptr;};
    inline int32_t spot() const { DARABONBA_PTR_GET_DEFAULT(spot_, 0) };
    inline AddShowIntoShowListRequest& setSpot(int32_t spot) { DARABONBA_PTR_SET_VALUE(spot_, spot) };


    // isBatchMode Field Functions 
    bool hasIsBatchMode() const { return this->isBatchMode_ != nullptr;};
    void deleteIsBatchMode() { this->isBatchMode_ = nullptr;};
    inline bool isBatchMode() const { DARABONBA_PTR_GET_DEFAULT(isBatchMode_, false) };
    inline AddShowIntoShowListRequest& setIsBatchMode(bool isBatchMode) { DARABONBA_PTR_SET_VALUE(isBatchMode_, isBatchMode) };


    // showList Field Functions 
    bool hasShowList() const { return this->showList_ != nullptr;};
    void deleteShowList() { this->showList_ = nullptr;};
    inline const vector<AddShowIntoShowListRequestShowList> & showList() const { DARABONBA_PTR_GET_CONST(showList_, vector<AddShowIntoShowListRequestShowList>) };
    inline vector<AddShowIntoShowListRequestShowList> showList() { DARABONBA_PTR_GET(showList_, vector<AddShowIntoShowListRequestShowList>) };
    inline AddShowIntoShowListRequest& setShowList(const vector<AddShowIntoShowListRequestShowList> & showList) { DARABONBA_PTR_SET_VALUE(showList_, showList) };
    inline AddShowIntoShowListRequest& setShowList(vector<AddShowIntoShowListRequestShowList> && showList) { DARABONBA_PTR_SET_RVALUE(showList_, showList) };


  protected:
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // This parameter is required.
    std::shared_ptr<string> casterId_ = nullptr;
    // The duration of the episode. Unit: seconds.
    // 
    // > You can specify only one of the **RepeatTimes** and **Duration** parameters.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The custom type label.
    std::shared_ptr<int32_t> liveInputType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of times the episode repeats after the first playback is complete. The default value is 0.
    // 
    // > 
    // 
    // *   You can specify only one of the **RepeatTimes** and **Duration** parameters. - The RepeatTimes parameter specifies the number of repetitions. For example, if you set the value to -1, the episode is to be played for infinite times. If you set the value to 0, the episode is to be played once. If you set the value to 1, the episode is to be played twice.
    std::shared_ptr<int32_t> repeatTimes_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The resource type. Valid values:
    // 
    // *   live: live stream
    // *   vod: on-demand video
    // *   pic: image
    // 
    // > 
    // 
    // *   When you select media resources from ApsaraVideo VOD, we recommend that you select resources that are stored in hosted OSS buckets. Resources stored in non-hosted OSS buckets have a validity period. Pay attention to the validity if you select resources that are stored in non-hosted OSS buckets. - You can add a live stream from ApsaraVideo Live or by using a third-party URL. - You can add an on-demand video from ApsaraVideo VOD or by using a third-party URL, or add an on-demand image.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The URL of the resource.
    std::shared_ptr<string> resourceUrl_ = nullptr;
    // The name of the episode.
    std::shared_ptr<string> showName_ = nullptr;
    // The position of the episode in the episode list. Position indexes start from 0. By default, the episode is added to the end of the episode list.
    std::shared_ptr<int32_t> spot_ = nullptr;
    // Specifies whether to add multiple episodes to the episode list at a time. Valid values:
    // 
    // *   true: adds multiple episodes to the episode list at a time.
    // *   false: adds a single episode to the episode list.
    // 
    // > If you do not specify this parameter or this parameter is left empty, a single episode is to be added to the episode list.
    std::shared_ptr<bool> isBatchMode_ = nullptr;
    // The episodes that you want to add to the episode list. Each episode has a unique name and resource URL.
    std::shared_ptr<vector<AddShowIntoShowListRequestShowList>> showList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
