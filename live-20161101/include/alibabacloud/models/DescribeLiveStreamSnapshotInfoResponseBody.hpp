// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNAPSHOTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNAPSHOTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class LiveStreamSnapshotInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveStreamSnapshotInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(LiveStreamSnapshotInfo, liveStreamSnapshotInfo_);
      };
      friend void from_json(const Darabonba::Json& j, LiveStreamSnapshotInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveStreamSnapshotInfo, liveStreamSnapshotInfo_);
      };
      LiveStreamSnapshotInfoList() = default ;
      LiveStreamSnapshotInfoList(const LiveStreamSnapshotInfoList &) = default ;
      LiveStreamSnapshotInfoList(LiveStreamSnapshotInfoList &&) = default ;
      LiveStreamSnapshotInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveStreamSnapshotInfoList() = default ;
      LiveStreamSnapshotInfoList& operator=(const LiveStreamSnapshotInfoList &) = default ;
      LiveStreamSnapshotInfoList& operator=(LiveStreamSnapshotInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveStreamSnapshotInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveStreamSnapshotInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(IsOverlay, isOverlay_);
          DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
          DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
          DARABONBA_PTR_TO_JSON(OssObject, ossObject_);
        };
        friend void from_json(const Darabonba::Json& j, LiveStreamSnapshotInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(IsOverlay, isOverlay_);
          DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
          DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
          DARABONBA_PTR_FROM_JSON(OssObject, ossObject_);
        };
        LiveStreamSnapshotInfo() = default ;
        LiveStreamSnapshotInfo(const LiveStreamSnapshotInfo &) = default ;
        LiveStreamSnapshotInfo(LiveStreamSnapshotInfo &&) = default ;
        LiveStreamSnapshotInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveStreamSnapshotInfo() = default ;
        LiveStreamSnapshotInfo& operator=(const LiveStreamSnapshotInfo &) = default ;
        LiveStreamSnapshotInfo& operator=(LiveStreamSnapshotInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->isOverlay_ == nullptr && this->ossBucket_ == nullptr && this->ossEndpoint_ == nullptr && this->ossObject_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline LiveStreamSnapshotInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline LiveStreamSnapshotInfo& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // isOverlay Field Functions 
        bool hasIsOverlay() const { return this->isOverlay_ != nullptr;};
        void deleteIsOverlay() { this->isOverlay_ = nullptr;};
        inline bool getIsOverlay() const { DARABONBA_PTR_GET_DEFAULT(isOverlay_, false) };
        inline LiveStreamSnapshotInfo& setIsOverlay(bool isOverlay) { DARABONBA_PTR_SET_VALUE(isOverlay_, isOverlay) };


        // ossBucket Field Functions 
        bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
        void deleteOssBucket() { this->ossBucket_ = nullptr;};
        inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
        inline LiveStreamSnapshotInfo& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


        // ossEndpoint Field Functions 
        bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
        void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
        inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
        inline LiveStreamSnapshotInfo& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


        // ossObject Field Functions 
        bool hasOssObject() const { return this->ossObject_ != nullptr;};
        void deleteOssObject() { this->ossObject_ = nullptr;};
        inline string getOssObject() const { DARABONBA_PTR_GET_DEFAULT(ossObject_, "") };
        inline LiveStreamSnapshotInfo& setOssObject(string ossObject) { DARABONBA_PTR_SET_VALUE(ossObject_, ossObject) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<int64_t> createTimestamp_ {};
        shared_ptr<bool> isOverlay_ {};
        shared_ptr<string> ossBucket_ {};
        shared_ptr<string> ossEndpoint_ {};
        shared_ptr<string> ossObject_ {};
      };

      virtual bool empty() const override { return this->liveStreamSnapshotInfo_ == nullptr; };
      // liveStreamSnapshotInfo Field Functions 
      bool hasLiveStreamSnapshotInfo() const { return this->liveStreamSnapshotInfo_ != nullptr;};
      void deleteLiveStreamSnapshotInfo() { this->liveStreamSnapshotInfo_ = nullptr;};
      inline const vector<LiveStreamSnapshotInfoList::LiveStreamSnapshotInfo> & getLiveStreamSnapshotInfo() const { DARABONBA_PTR_GET_CONST(liveStreamSnapshotInfo_, vector<LiveStreamSnapshotInfoList::LiveStreamSnapshotInfo>) };
      inline vector<LiveStreamSnapshotInfoList::LiveStreamSnapshotInfo> getLiveStreamSnapshotInfo() { DARABONBA_PTR_GET(liveStreamSnapshotInfo_, vector<LiveStreamSnapshotInfoList::LiveStreamSnapshotInfo>) };
      inline LiveStreamSnapshotInfoList& setLiveStreamSnapshotInfo(const vector<LiveStreamSnapshotInfoList::LiveStreamSnapshotInfo> & liveStreamSnapshotInfo) { DARABONBA_PTR_SET_VALUE(liveStreamSnapshotInfo_, liveStreamSnapshotInfo) };
      inline LiveStreamSnapshotInfoList& setLiveStreamSnapshotInfo(vector<LiveStreamSnapshotInfoList::LiveStreamSnapshotInfo> && liveStreamSnapshotInfo) { DARABONBA_PTR_SET_RVALUE(liveStreamSnapshotInfo_, liveStreamSnapshotInfo) };


    protected:
      shared_ptr<vector<LiveStreamSnapshotInfoList::LiveStreamSnapshotInfo>> liveStreamSnapshotInfo_ {};
    };

    virtual bool empty() const override { return this->liveStreamSnapshotInfoList_ == nullptr
        && this->nextStartTime_ == nullptr && this->requestId_ == nullptr; };
    // liveStreamSnapshotInfoList Field Functions 
    bool hasLiveStreamSnapshotInfoList() const { return this->liveStreamSnapshotInfoList_ != nullptr;};
    void deleteLiveStreamSnapshotInfoList() { this->liveStreamSnapshotInfoList_ = nullptr;};
    inline const DescribeLiveStreamSnapshotInfoResponseBody::LiveStreamSnapshotInfoList & getLiveStreamSnapshotInfoList() const { DARABONBA_PTR_GET_CONST(liveStreamSnapshotInfoList_, DescribeLiveStreamSnapshotInfoResponseBody::LiveStreamSnapshotInfoList) };
    inline DescribeLiveStreamSnapshotInfoResponseBody::LiveStreamSnapshotInfoList getLiveStreamSnapshotInfoList() { DARABONBA_PTR_GET(liveStreamSnapshotInfoList_, DescribeLiveStreamSnapshotInfoResponseBody::LiveStreamSnapshotInfoList) };
    inline DescribeLiveStreamSnapshotInfoResponseBody& setLiveStreamSnapshotInfoList(const DescribeLiveStreamSnapshotInfoResponseBody::LiveStreamSnapshotInfoList & liveStreamSnapshotInfoList) { DARABONBA_PTR_SET_VALUE(liveStreamSnapshotInfoList_, liveStreamSnapshotInfoList) };
    inline DescribeLiveStreamSnapshotInfoResponseBody& setLiveStreamSnapshotInfoList(DescribeLiveStreamSnapshotInfoResponseBody::LiveStreamSnapshotInfoList && liveStreamSnapshotInfoList) { DARABONBA_PTR_SET_RVALUE(liveStreamSnapshotInfoList_, liveStreamSnapshotInfoList) };


    // nextStartTime Field Functions 
    bool hasNextStartTime() const { return this->nextStartTime_ != nullptr;};
    void deleteNextStartTime() { this->nextStartTime_ = nullptr;};
    inline string getNextStartTime() const { DARABONBA_PTR_GET_DEFAULT(nextStartTime_, "") };
    inline DescribeLiveStreamSnapshotInfoResponseBody& setNextStartTime(string nextStartTime) { DARABONBA_PTR_SET_VALUE(nextStartTime_, nextStartTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamSnapshotInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeLiveStreamSnapshotInfoResponseBody::LiveStreamSnapshotInfoList> liveStreamSnapshotInfoList_ {};
    // The time when the next call occurred. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    // 
    // >  If the number of snapshots that were captured within the specified time period exceeds the value of the Limit parameter, this parameter is returned. It indicates the time when the DescribeLiveStreamSnapshotInfo operation was called again. If this parameter is not returned, the number of snapshots that are captured within the specified time period does not exceed the specified limit.
    shared_ptr<string> nextStartTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
