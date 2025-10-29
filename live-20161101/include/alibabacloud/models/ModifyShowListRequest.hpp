// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSHOWLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSHOWLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyShowListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyShowListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(HighPriorityShowId, highPriorityShowId_);
      DARABONBA_PTR_TO_JSON(HighPriorityShowStartTime, highPriorityShowStartTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepeatTimes, repeatTimes_);
      DARABONBA_PTR_TO_JSON(ShowId, showId_);
      DARABONBA_PTR_TO_JSON(Spot, spot_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyShowListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(HighPriorityShowId, highPriorityShowId_);
      DARABONBA_PTR_FROM_JSON(HighPriorityShowStartTime, highPriorityShowStartTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepeatTimes, repeatTimes_);
      DARABONBA_PTR_FROM_JSON(ShowId, showId_);
      DARABONBA_PTR_FROM_JSON(Spot, spot_);
    };
    ModifyShowListRequest() = default ;
    ModifyShowListRequest(const ModifyShowListRequest &) = default ;
    ModifyShowListRequest(ModifyShowListRequest &&) = default ;
    ModifyShowListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyShowListRequest() = default ;
    ModifyShowListRequest& operator=(const ModifyShowListRequest &) = default ;
    ModifyShowListRequest& operator=(ModifyShowListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && return this->highPriorityShowId_ == nullptr && return this->highPriorityShowStartTime_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->repeatTimes_ == nullptr
        && return this->showId_ == nullptr && return this->spot_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline ModifyShowListRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // highPriorityShowId Field Functions 
    bool hasHighPriorityShowId() const { return this->highPriorityShowId_ != nullptr;};
    void deleteHighPriorityShowId() { this->highPriorityShowId_ = nullptr;};
    inline string highPriorityShowId() const { DARABONBA_PTR_GET_DEFAULT(highPriorityShowId_, "") };
    inline ModifyShowListRequest& setHighPriorityShowId(string highPriorityShowId) { DARABONBA_PTR_SET_VALUE(highPriorityShowId_, highPriorityShowId) };


    // highPriorityShowStartTime Field Functions 
    bool hasHighPriorityShowStartTime() const { return this->highPriorityShowStartTime_ != nullptr;};
    void deleteHighPriorityShowStartTime() { this->highPriorityShowStartTime_ = nullptr;};
    inline string highPriorityShowStartTime() const { DARABONBA_PTR_GET_DEFAULT(highPriorityShowStartTime_, "") };
    inline ModifyShowListRequest& setHighPriorityShowStartTime(string highPriorityShowStartTime) { DARABONBA_PTR_SET_VALUE(highPriorityShowStartTime_, highPriorityShowStartTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyShowListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyShowListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatTimes Field Functions 
    bool hasRepeatTimes() const { return this->repeatTimes_ != nullptr;};
    void deleteRepeatTimes() { this->repeatTimes_ = nullptr;};
    inline int32_t repeatTimes() const { DARABONBA_PTR_GET_DEFAULT(repeatTimes_, 0) };
    inline ModifyShowListRequest& setRepeatTimes(int32_t repeatTimes) { DARABONBA_PTR_SET_VALUE(repeatTimes_, repeatTimes) };


    // showId Field Functions 
    bool hasShowId() const { return this->showId_ != nullptr;};
    void deleteShowId() { this->showId_ = nullptr;};
    inline string showId() const { DARABONBA_PTR_GET_DEFAULT(showId_, "") };
    inline ModifyShowListRequest& setShowId(string showId) { DARABONBA_PTR_SET_VALUE(showId_, showId) };


    // spot Field Functions 
    bool hasSpot() const { return this->spot_ != nullptr;};
    void deleteSpot() { this->spot_ = nullptr;};
    inline int32_t spot() const { DARABONBA_PTR_GET_DEFAULT(spot_, 0) };
    inline ModifyShowListRequest& setSpot(int32_t spot) { DARABONBA_PTR_SET_VALUE(spot_, spot) };


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
    // The episode of the highest priority.
    // 
    // >  You can configure this parameter only before the playback of the episode list starts.
    std::shared_ptr<string> highPriorityShowId_ = nullptr;
    // The time at which the episode of the highest priority is played. Format: yyyy-MM-dd\\"T\\"HH:mm:ss.
    // 
    // >  You can configure this parameter only before the episode list starts playing.\\
    // After you configure this parameter, when the specified point in time is reached, any episode that is playing stops and the episode of the highest priority in the episode list starts to play.
    std::shared_ptr<string> highPriorityShowStartTime_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of additional times the episode list is played.
    // 
    // > 
    // 
    // *   The RepeatTimes parameter specifies the number of repetitions. For example, if you set the value to **0**, the episode list is played **once**. If you set the value to **1**, the episode list is played **twice**.********
    // 
    // *   If you set the value to -1, the episode list is repeated indefinitely.
    std::shared_ptr<int32_t> repeatTimes_ = nullptr;
    // The ID of the episode for which you want to change the position in the playlist.
    // 
    // >  You can call the [AddShowIntoShowList](https://help.aliyun.com/document_detail/2848051.html) or [DescribeShowList](https://help.aliyun.com/document_detail/2848054.html) operation and check the value of the response parameter ShowId to obtain the ID.
    std::shared_ptr<string> showId_ = nullptr;
    // The position of the episode in the episode list. If you want to change the position of an episode in a playlist, place the ID of the episode in **Spot**.
    // 
    // >  The value must be greater than or equal to 0 and less than or equal to the total number of episodes in the playlist.
    std::shared_ptr<int32_t> spot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
