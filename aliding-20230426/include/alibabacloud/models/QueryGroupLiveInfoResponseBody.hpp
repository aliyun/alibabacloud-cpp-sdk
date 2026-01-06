// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGROUPLIVEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYGROUPLIVEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryGroupLiveInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGroupLiveInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(coverUrl, coverUrl_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(introduction, introduction_);
      DARABONBA_PTR_TO_JSON(liveId, liveId_);
      DARABONBA_PTR_TO_JSON(livePlayUrl, livePlayUrl_);
      DARABONBA_PTR_TO_JSON(liveStatus, liveStatus_);
      DARABONBA_PTR_TO_JSON(playbackDuration, playbackDuration_);
      DARABONBA_PTR_TO_JSON(replayUrl, replayUrl_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(staffId, staffId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(subscribeCount, subscribeCount_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(uv, uv_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGroupLiveInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(coverUrl, coverUrl_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(introduction, introduction_);
      DARABONBA_PTR_FROM_JSON(liveId, liveId_);
      DARABONBA_PTR_FROM_JSON(livePlayUrl, livePlayUrl_);
      DARABONBA_PTR_FROM_JSON(liveStatus, liveStatus_);
      DARABONBA_PTR_FROM_JSON(playbackDuration, playbackDuration_);
      DARABONBA_PTR_FROM_JSON(replayUrl, replayUrl_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(staffId, staffId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(subscribeCount, subscribeCount_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(uv, uv_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    QueryGroupLiveInfoResponseBody() = default ;
    QueryGroupLiveInfoResponseBody(const QueryGroupLiveInfoResponseBody &) = default ;
    QueryGroupLiveInfoResponseBody(QueryGroupLiveInfoResponseBody &&) = default ;
    QueryGroupLiveInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGroupLiveInfoResponseBody() = default ;
    QueryGroupLiveInfoResponseBody& operator=(const QueryGroupLiveInfoResponseBody &) = default ;
    QueryGroupLiveInfoResponseBody& operator=(QueryGroupLiveInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coverUrl_ == nullptr
        && this->duration_ == nullptr && this->endTime_ == nullptr && this->introduction_ == nullptr && this->liveId_ == nullptr && this->livePlayUrl_ == nullptr
        && this->liveStatus_ == nullptr && this->playbackDuration_ == nullptr && this->replayUrl_ == nullptr && this->requestId_ == nullptr && this->staffId_ == nullptr
        && this->startTime_ == nullptr && this->subscribeCount_ == nullptr && this->title_ == nullptr && this->uv_ == nullptr && this->vendorRequestId_ == nullptr
        && this->vendorType_ == nullptr; };
    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline QueryGroupLiveInfoResponseBody& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline QueryGroupLiveInfoResponseBody& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryGroupLiveInfoResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // introduction Field Functions 
    bool hasIntroduction() const { return this->introduction_ != nullptr;};
    void deleteIntroduction() { this->introduction_ = nullptr;};
    inline string getIntroduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
    inline QueryGroupLiveInfoResponseBody& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


    // liveId Field Functions 
    bool hasLiveId() const { return this->liveId_ != nullptr;};
    void deleteLiveId() { this->liveId_ = nullptr;};
    inline string getLiveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
    inline QueryGroupLiveInfoResponseBody& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


    // livePlayUrl Field Functions 
    bool hasLivePlayUrl() const { return this->livePlayUrl_ != nullptr;};
    void deleteLivePlayUrl() { this->livePlayUrl_ = nullptr;};
    inline string getLivePlayUrl() const { DARABONBA_PTR_GET_DEFAULT(livePlayUrl_, "") };
    inline QueryGroupLiveInfoResponseBody& setLivePlayUrl(string livePlayUrl) { DARABONBA_PTR_SET_VALUE(livePlayUrl_, livePlayUrl) };


    // liveStatus Field Functions 
    bool hasLiveStatus() const { return this->liveStatus_ != nullptr;};
    void deleteLiveStatus() { this->liveStatus_ = nullptr;};
    inline int32_t getLiveStatus() const { DARABONBA_PTR_GET_DEFAULT(liveStatus_, 0) };
    inline QueryGroupLiveInfoResponseBody& setLiveStatus(int32_t liveStatus) { DARABONBA_PTR_SET_VALUE(liveStatus_, liveStatus) };


    // playbackDuration Field Functions 
    bool hasPlaybackDuration() const { return this->playbackDuration_ != nullptr;};
    void deletePlaybackDuration() { this->playbackDuration_ = nullptr;};
    inline int64_t getPlaybackDuration() const { DARABONBA_PTR_GET_DEFAULT(playbackDuration_, 0L) };
    inline QueryGroupLiveInfoResponseBody& setPlaybackDuration(int64_t playbackDuration) { DARABONBA_PTR_SET_VALUE(playbackDuration_, playbackDuration) };


    // replayUrl Field Functions 
    bool hasReplayUrl() const { return this->replayUrl_ != nullptr;};
    void deleteReplayUrl() { this->replayUrl_ = nullptr;};
    inline string getReplayUrl() const { DARABONBA_PTR_GET_DEFAULT(replayUrl_, "") };
    inline QueryGroupLiveInfoResponseBody& setReplayUrl(string replayUrl) { DARABONBA_PTR_SET_VALUE(replayUrl_, replayUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryGroupLiveInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // staffId Field Functions 
    bool hasStaffId() const { return this->staffId_ != nullptr;};
    void deleteStaffId() { this->staffId_ = nullptr;};
    inline string getStaffId() const { DARABONBA_PTR_GET_DEFAULT(staffId_, "") };
    inline QueryGroupLiveInfoResponseBody& setStaffId(string staffId) { DARABONBA_PTR_SET_VALUE(staffId_, staffId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryGroupLiveInfoResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subscribeCount Field Functions 
    bool hasSubscribeCount() const { return this->subscribeCount_ != nullptr;};
    void deleteSubscribeCount() { this->subscribeCount_ = nullptr;};
    inline int32_t getSubscribeCount() const { DARABONBA_PTR_GET_DEFAULT(subscribeCount_, 0) };
    inline QueryGroupLiveInfoResponseBody& setSubscribeCount(int32_t subscribeCount) { DARABONBA_PTR_SET_VALUE(subscribeCount_, subscribeCount) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline QueryGroupLiveInfoResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // uv Field Functions 
    bool hasUv() const { return this->uv_ != nullptr;};
    void deleteUv() { this->uv_ = nullptr;};
    inline int32_t getUv() const { DARABONBA_PTR_GET_DEFAULT(uv_, 0) };
    inline QueryGroupLiveInfoResponseBody& setUv(int32_t uv) { DARABONBA_PTR_SET_VALUE(uv_, uv) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline QueryGroupLiveInfoResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline QueryGroupLiveInfoResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> coverUrl_ {};
    shared_ptr<int64_t> duration_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> introduction_ {};
    shared_ptr<string> liveId_ {};
    shared_ptr<string> livePlayUrl_ {};
    shared_ptr<int32_t> liveStatus_ {};
    shared_ptr<int64_t> playbackDuration_ {};
    shared_ptr<string> replayUrl_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<string> staffId_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<int32_t> subscribeCount_ {};
    shared_ptr<string> title_ {};
    shared_ptr<int32_t> uv_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
