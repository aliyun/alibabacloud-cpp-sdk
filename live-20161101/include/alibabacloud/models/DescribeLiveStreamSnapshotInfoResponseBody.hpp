// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNAPSHOTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNAPSHOTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamSnapshotInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamSnapshotInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamSnapshotInfoList, liveStreamSnapshotInfoList_);
      DARABONBA_PTR_TO_JSON(NextStartTime, nextStartTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamSnapshotInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamSnapshotInfoList, liveStreamSnapshotInfoList_);
      DARABONBA_PTR_FROM_JSON(NextStartTime, nextStartTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveStreamSnapshotInfoResponseBody() = default ;
    DescribeLiveStreamSnapshotInfoResponseBody(const DescribeLiveStreamSnapshotInfoResponseBody &) = default ;
    DescribeLiveStreamSnapshotInfoResponseBody(DescribeLiveStreamSnapshotInfoResponseBody &&) = default ;
    DescribeLiveStreamSnapshotInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamSnapshotInfoResponseBody() = default ;
    DescribeLiveStreamSnapshotInfoResponseBody& operator=(const DescribeLiveStreamSnapshotInfoResponseBody &) = default ;
    DescribeLiveStreamSnapshotInfoResponseBody& operator=(DescribeLiveStreamSnapshotInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveStreamSnapshotInfoList_ != nullptr
        && this->nextStartTime_ != nullptr && this->requestId_ != nullptr; };
    // liveStreamSnapshotInfoList Field Functions 
    bool hasLiveStreamSnapshotInfoList() const { return this->liveStreamSnapshotInfoList_ != nullptr;};
    void deleteLiveStreamSnapshotInfoList() { this->liveStreamSnapshotInfoList_ = nullptr;};
    inline const DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList & liveStreamSnapshotInfoList() const { DARABONBA_PTR_GET_CONST(liveStreamSnapshotInfoList_, DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList) };
    inline DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList liveStreamSnapshotInfoList() { DARABONBA_PTR_GET(liveStreamSnapshotInfoList_, DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList) };
    inline DescribeLiveStreamSnapshotInfoResponseBody& setLiveStreamSnapshotInfoList(const DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList & liveStreamSnapshotInfoList) { DARABONBA_PTR_SET_VALUE(liveStreamSnapshotInfoList_, liveStreamSnapshotInfoList) };
    inline DescribeLiveStreamSnapshotInfoResponseBody& setLiveStreamSnapshotInfoList(DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList && liveStreamSnapshotInfoList) { DARABONBA_PTR_SET_RVALUE(liveStreamSnapshotInfoList_, liveStreamSnapshotInfoList) };


    // nextStartTime Field Functions 
    bool hasNextStartTime() const { return this->nextStartTime_ != nullptr;};
    void deleteNextStartTime() { this->nextStartTime_ = nullptr;};
    inline string nextStartTime() const { DARABONBA_PTR_GET_DEFAULT(nextStartTime_, "") };
    inline DescribeLiveStreamSnapshotInfoResponseBody& setNextStartTime(string nextStartTime) { DARABONBA_PTR_SET_VALUE(nextStartTime_, nextStartTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamSnapshotInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The snapshots.
    std::shared_ptr<DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList> liveStreamSnapshotInfoList_ = nullptr;
    // The time when the next call occurred. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    // 
    // >  If the number of snapshots that were captured within the specified time period exceeds the value of the Limit parameter, this parameter is returned. It indicates the time when the DescribeLiveStreamSnapshotInfo operation was called again. If this parameter is not returned, the number of snapshots that are captured within the specified time period does not exceed the specified limit.
    std::shared_ptr<string> nextStartTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
