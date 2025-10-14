// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLIVEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYLIVEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryLiveInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLiveInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(coverUrl, coverUrl_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(introduction, introduction_);
      DARABONBA_PTR_TO_JSON(liveId, liveId_);
      DARABONBA_PTR_TO_JSON(livePlayUrl, livePlayUrl_);
      DARABONBA_PTR_TO_JSON(liveStatus, liveStatus_);
      DARABONBA_PTR_TO_JSON(playbackDuration, playbackDuration_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(subscribeCount, subscribeCount_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(uv, uv_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLiveInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(coverUrl, coverUrl_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(introduction, introduction_);
      DARABONBA_PTR_FROM_JSON(liveId, liveId_);
      DARABONBA_PTR_FROM_JSON(livePlayUrl, livePlayUrl_);
      DARABONBA_PTR_FROM_JSON(liveStatus, liveStatus_);
      DARABONBA_PTR_FROM_JSON(playbackDuration, playbackDuration_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(subscribeCount, subscribeCount_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(uv, uv_);
    };
    QueryLiveInfoResponseBody() = default ;
    QueryLiveInfoResponseBody(const QueryLiveInfoResponseBody &) = default ;
    QueryLiveInfoResponseBody(QueryLiveInfoResponseBody &&) = default ;
    QueryLiveInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLiveInfoResponseBody() = default ;
    QueryLiveInfoResponseBody& operator=(const QueryLiveInfoResponseBody &) = default ;
    QueryLiveInfoResponseBody& operator=(QueryLiveInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coverUrl_ == nullptr
        && return this->duration_ == nullptr && return this->endTime_ == nullptr && return this->introduction_ == nullptr && return this->liveId_ == nullptr && return this->livePlayUrl_ == nullptr
        && return this->liveStatus_ == nullptr && return this->playbackDuration_ == nullptr && return this->requestId_ == nullptr && return this->startTime_ == nullptr && return this->subscribeCount_ == nullptr
        && return this->title_ == nullptr && return this->uv_ == nullptr; };
    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string coverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline QueryLiveInfoResponseBody& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline QueryLiveInfoResponseBody& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryLiveInfoResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // introduction Field Functions 
    bool hasIntroduction() const { return this->introduction_ != nullptr;};
    void deleteIntroduction() { this->introduction_ = nullptr;};
    inline string introduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
    inline QueryLiveInfoResponseBody& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


    // liveId Field Functions 
    bool hasLiveId() const { return this->liveId_ != nullptr;};
    void deleteLiveId() { this->liveId_ = nullptr;};
    inline string liveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
    inline QueryLiveInfoResponseBody& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


    // livePlayUrl Field Functions 
    bool hasLivePlayUrl() const { return this->livePlayUrl_ != nullptr;};
    void deleteLivePlayUrl() { this->livePlayUrl_ = nullptr;};
    inline string livePlayUrl() const { DARABONBA_PTR_GET_DEFAULT(livePlayUrl_, "") };
    inline QueryLiveInfoResponseBody& setLivePlayUrl(string livePlayUrl) { DARABONBA_PTR_SET_VALUE(livePlayUrl_, livePlayUrl) };


    // liveStatus Field Functions 
    bool hasLiveStatus() const { return this->liveStatus_ != nullptr;};
    void deleteLiveStatus() { this->liveStatus_ = nullptr;};
    inline int32_t liveStatus() const { DARABONBA_PTR_GET_DEFAULT(liveStatus_, 0) };
    inline QueryLiveInfoResponseBody& setLiveStatus(int32_t liveStatus) { DARABONBA_PTR_SET_VALUE(liveStatus_, liveStatus) };


    // playbackDuration Field Functions 
    bool hasPlaybackDuration() const { return this->playbackDuration_ != nullptr;};
    void deletePlaybackDuration() { this->playbackDuration_ = nullptr;};
    inline int64_t playbackDuration() const { DARABONBA_PTR_GET_DEFAULT(playbackDuration_, 0L) };
    inline QueryLiveInfoResponseBody& setPlaybackDuration(int64_t playbackDuration) { DARABONBA_PTR_SET_VALUE(playbackDuration_, playbackDuration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryLiveInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryLiveInfoResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subscribeCount Field Functions 
    bool hasSubscribeCount() const { return this->subscribeCount_ != nullptr;};
    void deleteSubscribeCount() { this->subscribeCount_ = nullptr;};
    inline int32_t subscribeCount() const { DARABONBA_PTR_GET_DEFAULT(subscribeCount_, 0) };
    inline QueryLiveInfoResponseBody& setSubscribeCount(int32_t subscribeCount) { DARABONBA_PTR_SET_VALUE(subscribeCount_, subscribeCount) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline QueryLiveInfoResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // uv Field Functions 
    bool hasUv() const { return this->uv_ != nullptr;};
    void deleteUv() { this->uv_ = nullptr;};
    inline int32_t uv() const { DARABONBA_PTR_GET_DEFAULT(uv_, 0) };
    inline QueryLiveInfoResponseBody& setUv(int32_t uv) { DARABONBA_PTR_SET_VALUE(uv_, uv) };


  protected:
    std::shared_ptr<string> coverUrl_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> introduction_ = nullptr;
    std::shared_ptr<string> liveId_ = nullptr;
    std::shared_ptr<string> livePlayUrl_ = nullptr;
    std::shared_ptr<int32_t> liveStatus_ = nullptr;
    std::shared_ptr<int64_t> playbackDuration_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int32_t> subscribeCount_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<int32_t> uv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
