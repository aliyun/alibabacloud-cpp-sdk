// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLIVEWATCHDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYLIVEWATCHDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryLiveWatchDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLiveWatchDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(avgWatchTime, avgWatchTime_);
      DARABONBA_PTR_TO_JSON(liveUv, liveUv_);
      DARABONBA_PTR_TO_JSON(msgCount, msgCount_);
      DARABONBA_PTR_TO_JSON(playbackUv, playbackUv_);
      DARABONBA_PTR_TO_JSON(praiseCount, praiseCount_);
      DARABONBA_PTR_TO_JSON(pv, pv_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalWatchTime, totalWatchTime_);
      DARABONBA_PTR_TO_JSON(uv, uv_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLiveWatchDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(avgWatchTime, avgWatchTime_);
      DARABONBA_PTR_FROM_JSON(liveUv, liveUv_);
      DARABONBA_PTR_FROM_JSON(msgCount, msgCount_);
      DARABONBA_PTR_FROM_JSON(playbackUv, playbackUv_);
      DARABONBA_PTR_FROM_JSON(praiseCount, praiseCount_);
      DARABONBA_PTR_FROM_JSON(pv, pv_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalWatchTime, totalWatchTime_);
      DARABONBA_PTR_FROM_JSON(uv, uv_);
    };
    QueryLiveWatchDetailResponseBody() = default ;
    QueryLiveWatchDetailResponseBody(const QueryLiveWatchDetailResponseBody &) = default ;
    QueryLiveWatchDetailResponseBody(QueryLiveWatchDetailResponseBody &&) = default ;
    QueryLiveWatchDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLiveWatchDetailResponseBody() = default ;
    QueryLiveWatchDetailResponseBody& operator=(const QueryLiveWatchDetailResponseBody &) = default ;
    QueryLiveWatchDetailResponseBody& operator=(QueryLiveWatchDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avgWatchTime_ == nullptr
        && this->liveUv_ == nullptr && this->msgCount_ == nullptr && this->playbackUv_ == nullptr && this->praiseCount_ == nullptr && this->pv_ == nullptr
        && this->requestId_ == nullptr && this->totalWatchTime_ == nullptr && this->uv_ == nullptr; };
    // avgWatchTime Field Functions 
    bool hasAvgWatchTime() const { return this->avgWatchTime_ != nullptr;};
    void deleteAvgWatchTime() { this->avgWatchTime_ = nullptr;};
    inline int64_t getAvgWatchTime() const { DARABONBA_PTR_GET_DEFAULT(avgWatchTime_, 0L) };
    inline QueryLiveWatchDetailResponseBody& setAvgWatchTime(int64_t avgWatchTime) { DARABONBA_PTR_SET_VALUE(avgWatchTime_, avgWatchTime) };


    // liveUv Field Functions 
    bool hasLiveUv() const { return this->liveUv_ != nullptr;};
    void deleteLiveUv() { this->liveUv_ = nullptr;};
    inline int32_t getLiveUv() const { DARABONBA_PTR_GET_DEFAULT(liveUv_, 0) };
    inline QueryLiveWatchDetailResponseBody& setLiveUv(int32_t liveUv) { DARABONBA_PTR_SET_VALUE(liveUv_, liveUv) };


    // msgCount Field Functions 
    bool hasMsgCount() const { return this->msgCount_ != nullptr;};
    void deleteMsgCount() { this->msgCount_ = nullptr;};
    inline int32_t getMsgCount() const { DARABONBA_PTR_GET_DEFAULT(msgCount_, 0) };
    inline QueryLiveWatchDetailResponseBody& setMsgCount(int32_t msgCount) { DARABONBA_PTR_SET_VALUE(msgCount_, msgCount) };


    // playbackUv Field Functions 
    bool hasPlaybackUv() const { return this->playbackUv_ != nullptr;};
    void deletePlaybackUv() { this->playbackUv_ = nullptr;};
    inline int32_t getPlaybackUv() const { DARABONBA_PTR_GET_DEFAULT(playbackUv_, 0) };
    inline QueryLiveWatchDetailResponseBody& setPlaybackUv(int32_t playbackUv) { DARABONBA_PTR_SET_VALUE(playbackUv_, playbackUv) };


    // praiseCount Field Functions 
    bool hasPraiseCount() const { return this->praiseCount_ != nullptr;};
    void deletePraiseCount() { this->praiseCount_ = nullptr;};
    inline int32_t getPraiseCount() const { DARABONBA_PTR_GET_DEFAULT(praiseCount_, 0) };
    inline QueryLiveWatchDetailResponseBody& setPraiseCount(int32_t praiseCount) { DARABONBA_PTR_SET_VALUE(praiseCount_, praiseCount) };


    // pv Field Functions 
    bool hasPv() const { return this->pv_ != nullptr;};
    void deletePv() { this->pv_ = nullptr;};
    inline int32_t getPv() const { DARABONBA_PTR_GET_DEFAULT(pv_, 0) };
    inline QueryLiveWatchDetailResponseBody& setPv(int32_t pv) { DARABONBA_PTR_SET_VALUE(pv_, pv) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryLiveWatchDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalWatchTime Field Functions 
    bool hasTotalWatchTime() const { return this->totalWatchTime_ != nullptr;};
    void deleteTotalWatchTime() { this->totalWatchTime_ = nullptr;};
    inline int64_t getTotalWatchTime() const { DARABONBA_PTR_GET_DEFAULT(totalWatchTime_, 0L) };
    inline QueryLiveWatchDetailResponseBody& setTotalWatchTime(int64_t totalWatchTime) { DARABONBA_PTR_SET_VALUE(totalWatchTime_, totalWatchTime) };


    // uv Field Functions 
    bool hasUv() const { return this->uv_ != nullptr;};
    void deleteUv() { this->uv_ = nullptr;};
    inline int32_t getUv() const { DARABONBA_PTR_GET_DEFAULT(uv_, 0) };
    inline QueryLiveWatchDetailResponseBody& setUv(int32_t uv) { DARABONBA_PTR_SET_VALUE(uv_, uv) };


  protected:
    shared_ptr<int64_t> avgWatchTime_ {};
    shared_ptr<int32_t> liveUv_ {};
    shared_ptr<int32_t> msgCount_ {};
    shared_ptr<int32_t> playbackUv_ {};
    shared_ptr<int32_t> praiseCount_ {};
    shared_ptr<int32_t> pv_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalWatchTime_ {};
    shared_ptr<int32_t> uv_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
