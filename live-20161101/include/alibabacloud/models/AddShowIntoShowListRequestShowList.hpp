// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSHOWINTOSHOWLISTREQUESTSHOWLIST_HPP_
#define ALIBABACLOUD_MODELS_ADDSHOWINTOSHOWLISTREQUESTSHOWLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddShowIntoShowListRequestShowList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddShowIntoShowListRequestShowList& obj) { 
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(liveInputType, liveInputType_);
      DARABONBA_PTR_TO_JSON(repeatTimes, repeatTimes_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(resourceUrl, resourceUrl_);
      DARABONBA_PTR_TO_JSON(showName, showName_);
    };
    friend void from_json(const Darabonba::Json& j, AddShowIntoShowListRequestShowList& obj) { 
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(liveInputType, liveInputType_);
      DARABONBA_PTR_FROM_JSON(repeatTimes, repeatTimes_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(resourceUrl, resourceUrl_);
      DARABONBA_PTR_FROM_JSON(showName, showName_);
    };
    AddShowIntoShowListRequestShowList() = default ;
    AddShowIntoShowListRequestShowList(const AddShowIntoShowListRequestShowList &) = default ;
    AddShowIntoShowListRequestShowList(AddShowIntoShowListRequestShowList &&) = default ;
    AddShowIntoShowListRequestShowList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddShowIntoShowListRequestShowList() = default ;
    AddShowIntoShowListRequestShowList& operator=(const AddShowIntoShowListRequestShowList &) = default ;
    AddShowIntoShowListRequestShowList& operator=(AddShowIntoShowListRequestShowList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->liveInputType_ != nullptr && this->repeatTimes_ != nullptr && this->resourceId_ != nullptr && this->resourceType_ != nullptr && this->resourceUrl_ != nullptr
        && this->showName_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline AddShowIntoShowListRequestShowList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // liveInputType Field Functions 
    bool hasLiveInputType() const { return this->liveInputType_ != nullptr;};
    void deleteLiveInputType() { this->liveInputType_ = nullptr;};
    inline int32_t liveInputType() const { DARABONBA_PTR_GET_DEFAULT(liveInputType_, 0) };
    inline AddShowIntoShowListRequestShowList& setLiveInputType(int32_t liveInputType) { DARABONBA_PTR_SET_VALUE(liveInputType_, liveInputType) };


    // repeatTimes Field Functions 
    bool hasRepeatTimes() const { return this->repeatTimes_ != nullptr;};
    void deleteRepeatTimes() { this->repeatTimes_ = nullptr;};
    inline int32_t repeatTimes() const { DARABONBA_PTR_GET_DEFAULT(repeatTimes_, 0) };
    inline AddShowIntoShowListRequestShowList& setRepeatTimes(int32_t repeatTimes) { DARABONBA_PTR_SET_VALUE(repeatTimes_, repeatTimes) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AddShowIntoShowListRequestShowList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline AddShowIntoShowListRequestShowList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceUrl Field Functions 
    bool hasResourceUrl() const { return this->resourceUrl_ != nullptr;};
    void deleteResourceUrl() { this->resourceUrl_ = nullptr;};
    inline string resourceUrl() const { DARABONBA_PTR_GET_DEFAULT(resourceUrl_, "") };
    inline AddShowIntoShowListRequestShowList& setResourceUrl(string resourceUrl) { DARABONBA_PTR_SET_VALUE(resourceUrl_, resourceUrl) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline AddShowIntoShowListRequestShowList& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


  protected:
    // The duration of the episode. Unit: seconds.
    // 
    // >  You can specify only one of the **RepeatTimes** and **Duration** parameters.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The custom type label.
    std::shared_ptr<int32_t> liveInputType_ = nullptr;
    // The number of times the episode repeats after the first playback is complete. Default value: 0.
    // 
    // > 
    // 
    // *   You can specify only one of the **RepeatTimes** and **Duration** parameters.
    // 
    // *   The RepeatTimes parameter specifies the number of repetitions. For example, if you set the value to 0, the episode is to be played once. If you set the value to 1, the episode is to be played twice.
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
    // *   When you select media resources from ApsaraVideo VOD, we recommend that you select resources that are stored in hosted OSS buckets. Resources stored in non-hosted OSS buckets have a validity period. Pay attention to the validity if you select resources that are stored in non-hosted OSS buckets.
    // 
    // *   You can add a live stream from ApsaraVideo Live or by using a third-party URL.
    // *   You can add an on-demand video from ApsaraVideo VOD or by using a third-party URL, or add an on-demand image.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The URL of the resource.
    std::shared_ptr<string> resourceUrl_ = nullptr;
    // The name of the episode.
    std::shared_ptr<string> showName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
