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
        && this->highPriorityShowId_ == nullptr && this->highPriorityShowStartTime_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->repeatTimes_ == nullptr
        && this->showId_ == nullptr && this->spot_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline ModifyShowListRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // highPriorityShowId Field Functions 
    bool hasHighPriorityShowId() const { return this->highPriorityShowId_ != nullptr;};
    void deleteHighPriorityShowId() { this->highPriorityShowId_ = nullptr;};
    inline string getHighPriorityShowId() const { DARABONBA_PTR_GET_DEFAULT(highPriorityShowId_, "") };
    inline ModifyShowListRequest& setHighPriorityShowId(string highPriorityShowId) { DARABONBA_PTR_SET_VALUE(highPriorityShowId_, highPriorityShowId) };


    // highPriorityShowStartTime Field Functions 
    bool hasHighPriorityShowStartTime() const { return this->highPriorityShowStartTime_ != nullptr;};
    void deleteHighPriorityShowStartTime() { this->highPriorityShowStartTime_ = nullptr;};
    inline string getHighPriorityShowStartTime() const { DARABONBA_PTR_GET_DEFAULT(highPriorityShowStartTime_, "") };
    inline ModifyShowListRequest& setHighPriorityShowStartTime(string highPriorityShowStartTime) { DARABONBA_PTR_SET_VALUE(highPriorityShowStartTime_, highPriorityShowStartTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyShowListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyShowListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatTimes Field Functions 
    bool hasRepeatTimes() const { return this->repeatTimes_ != nullptr;};
    void deleteRepeatTimes() { this->repeatTimes_ = nullptr;};
    inline int32_t getRepeatTimes() const { DARABONBA_PTR_GET_DEFAULT(repeatTimes_, 0) };
    inline ModifyShowListRequest& setRepeatTimes(int32_t repeatTimes) { DARABONBA_PTR_SET_VALUE(repeatTimes_, repeatTimes) };


    // showId Field Functions 
    bool hasShowId() const { return this->showId_ != nullptr;};
    void deleteShowId() { this->showId_ = nullptr;};
    inline string getShowId() const { DARABONBA_PTR_GET_DEFAULT(showId_, "") };
    inline ModifyShowListRequest& setShowId(string showId) { DARABONBA_PTR_SET_VALUE(showId_, showId) };


    // spot Field Functions 
    bool hasSpot() const { return this->spot_ != nullptr;};
    void deleteSpot() { this->spot_ = nullptr;};
    inline int32_t getSpot() const { DARABONBA_PTR_GET_DEFAULT(spot_, 0) };
    inline ModifyShowListRequest& setSpot(int32_t spot) { DARABONBA_PTR_SET_VALUE(spot_, spot) };


  protected:
    // The ID of the production studio.
    // 
    // - If you created the production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, use the CasterId value returned in the response.
    // 
    // - If you created the production studio in the LIVE console, find the production studio name on the Cloud Production Studio page. To go to the page, choose **LIVE Console** > **Production Studio** > **Cloud Production Studio**.
    // 
    // > The name of the production studio on the Cloud Production Studio page is the production studio ID.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The highest-priority show.
    // 
    // > This parameter can be configured only before the playlist starts.
    shared_ptr<string> highPriorityShowId_ {};
    // The time to play the highest-priority show. The format is yyyy-MM-dd\\"T\\"HH:mm:ss.
    // 
    // > This parameter can be configured only before the playlist starts.<br>
    // > After this parameter is configured, the system switches from the currently playing show to the highest-priority show at the specified time.
    shared_ptr<string> highPriorityShowStartTime_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The number of times the playlist loops.
    // 
    // > - RepeatTimes specifies the number of repetitions. For example, a value of **0** means the playlist is played once without repetition. A value of **1** means the playlist is played twice (one initial playback and one repetition).
    // >
    // > - A value of -1 indicates that the playlist loops indefinitely.
    shared_ptr<int32_t> repeatTimes_ {};
    // The ID of the show whose position in the playlist you want to modify.
    // 
    // > Obtain the ShowId value from the response of the [AddShowIntoShowList](https://help.aliyun.com/document_detail/2848051.html) or [DescribeShowList](https://help.aliyun.com/document_detail/2848054.html) operation.
    shared_ptr<string> showId_ {};
    // The new position of the show in the playlist. The show specified by ShowId is moved to the position specified by **Spot**.
    // 
    // > The value must be greater than or equal to 0 and less than or equal to the total number of shows in the playlist.
    shared_ptr<int32_t> spot_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
