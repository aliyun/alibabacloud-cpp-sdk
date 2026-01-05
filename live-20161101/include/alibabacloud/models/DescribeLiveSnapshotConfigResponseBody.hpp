// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESNAPSHOTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESNAPSHOTCONFIGRESPONSEBODY_HPP_
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
  class DescribeLiveSnapshotConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveSnapshotConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamSnapshotConfigList, liveStreamSnapshotConfigList_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveSnapshotConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamSnapshotConfigList, liveStreamSnapshotConfigList_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeLiveSnapshotConfigResponseBody() = default ;
    DescribeLiveSnapshotConfigResponseBody(const DescribeLiveSnapshotConfigResponseBody &) = default ;
    DescribeLiveSnapshotConfigResponseBody(DescribeLiveSnapshotConfigResponseBody &&) = default ;
    DescribeLiveSnapshotConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveSnapshotConfigResponseBody() = default ;
    DescribeLiveSnapshotConfigResponseBody& operator=(const DescribeLiveSnapshotConfigResponseBody &) = default ;
    DescribeLiveSnapshotConfigResponseBody& operator=(DescribeLiveSnapshotConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveStreamSnapshotConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveStreamSnapshotConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(LiveStreamSnapshotConfig, liveStreamSnapshotConfig_);
      };
      friend void from_json(const Darabonba::Json& j, LiveStreamSnapshotConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveStreamSnapshotConfig, liveStreamSnapshotConfig_);
      };
      LiveStreamSnapshotConfigList() = default ;
      LiveStreamSnapshotConfigList(const LiveStreamSnapshotConfigList &) = default ;
      LiveStreamSnapshotConfigList(LiveStreamSnapshotConfigList &&) = default ;
      LiveStreamSnapshotConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveStreamSnapshotConfigList() = default ;
      LiveStreamSnapshotConfigList& operator=(const LiveStreamSnapshotConfigList &) = default ;
      LiveStreamSnapshotConfigList& operator=(LiveStreamSnapshotConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveStreamSnapshotConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveStreamSnapshotConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(Callback, callback_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
          DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
          DARABONBA_PTR_TO_JSON(OverwriteOssObject, overwriteOssObject_);
          DARABONBA_PTR_TO_JSON(SequenceOssObject, sequenceOssObject_);
          DARABONBA_PTR_TO_JSON(TimeInterval, timeInterval_);
        };
        friend void from_json(const Darabonba::Json& j, LiveStreamSnapshotConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(Callback, callback_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
          DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
          DARABONBA_PTR_FROM_JSON(OverwriteOssObject, overwriteOssObject_);
          DARABONBA_PTR_FROM_JSON(SequenceOssObject, sequenceOssObject_);
          DARABONBA_PTR_FROM_JSON(TimeInterval, timeInterval_);
        };
        LiveStreamSnapshotConfig() = default ;
        LiveStreamSnapshotConfig(const LiveStreamSnapshotConfig &) = default ;
        LiveStreamSnapshotConfig(LiveStreamSnapshotConfig &&) = default ;
        LiveStreamSnapshotConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveStreamSnapshotConfig() = default ;
        LiveStreamSnapshotConfig& operator=(const LiveStreamSnapshotConfig &) = default ;
        LiveStreamSnapshotConfig& operator=(LiveStreamSnapshotConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->callback_ == nullptr && this->createTime_ == nullptr && this->domainName_ == nullptr && this->ossBucket_ == nullptr && this->ossEndpoint_ == nullptr
        && this->overwriteOssObject_ == nullptr && this->sequenceOssObject_ == nullptr && this->timeInterval_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline LiveStreamSnapshotConfig& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // callback Field Functions 
        bool hasCallback() const { return this->callback_ != nullptr;};
        void deleteCallback() { this->callback_ = nullptr;};
        inline string getCallback() const { DARABONBA_PTR_GET_DEFAULT(callback_, "") };
        inline LiveStreamSnapshotConfig& setCallback(string callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline LiveStreamSnapshotConfig& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveStreamSnapshotConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // ossBucket Field Functions 
        bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
        void deleteOssBucket() { this->ossBucket_ = nullptr;};
        inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
        inline LiveStreamSnapshotConfig& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


        // ossEndpoint Field Functions 
        bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
        void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
        inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
        inline LiveStreamSnapshotConfig& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


        // overwriteOssObject Field Functions 
        bool hasOverwriteOssObject() const { return this->overwriteOssObject_ != nullptr;};
        void deleteOverwriteOssObject() { this->overwriteOssObject_ = nullptr;};
        inline string getOverwriteOssObject() const { DARABONBA_PTR_GET_DEFAULT(overwriteOssObject_, "") };
        inline LiveStreamSnapshotConfig& setOverwriteOssObject(string overwriteOssObject) { DARABONBA_PTR_SET_VALUE(overwriteOssObject_, overwriteOssObject) };


        // sequenceOssObject Field Functions 
        bool hasSequenceOssObject() const { return this->sequenceOssObject_ != nullptr;};
        void deleteSequenceOssObject() { this->sequenceOssObject_ = nullptr;};
        inline string getSequenceOssObject() const { DARABONBA_PTR_GET_DEFAULT(sequenceOssObject_, "") };
        inline LiveStreamSnapshotConfig& setSequenceOssObject(string sequenceOssObject) { DARABONBA_PTR_SET_VALUE(sequenceOssObject_, sequenceOssObject) };


        // timeInterval Field Functions 
        bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
        void deleteTimeInterval() { this->timeInterval_ = nullptr;};
        inline int32_t getTimeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, 0) };
        inline LiveStreamSnapshotConfig& setTimeInterval(int32_t timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


      protected:
        // The name of the application to which the live stream belongs.
        shared_ptr<string> appName_ {};
        // The callback URL that is used to receive notifications about snapshot capture.
        shared_ptr<string> callback_ {};
        // The time when the configuration was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The main streaming domain.
        shared_ptr<string> domainName_ {};
        // The name of the Object Storage Service (OSS) bucket.
        shared_ptr<string> ossBucket_ {};
        // The endpoint of the OSS bucket.
        shared_ptr<string> ossEndpoint_ {};
        // The naming format of snapshots that are stored in the overwrite mode, which means that a new snapshot overwrites the previous snapshot.
        shared_ptr<string> overwriteOssObject_ {};
        // The naming format of snapshots that are stored in sequence, which means that a new snapshot does not overwrite the previous snapshot.
        shared_ptr<string> sequenceOssObject_ {};
        // The interval at which snapshots are captured. Unit: seconds.
        shared_ptr<int32_t> timeInterval_ {};
      };

      virtual bool empty() const override { return this->liveStreamSnapshotConfig_ == nullptr; };
      // liveStreamSnapshotConfig Field Functions 
      bool hasLiveStreamSnapshotConfig() const { return this->liveStreamSnapshotConfig_ != nullptr;};
      void deleteLiveStreamSnapshotConfig() { this->liveStreamSnapshotConfig_ = nullptr;};
      inline const vector<LiveStreamSnapshotConfigList::LiveStreamSnapshotConfig> & getLiveStreamSnapshotConfig() const { DARABONBA_PTR_GET_CONST(liveStreamSnapshotConfig_, vector<LiveStreamSnapshotConfigList::LiveStreamSnapshotConfig>) };
      inline vector<LiveStreamSnapshotConfigList::LiveStreamSnapshotConfig> getLiveStreamSnapshotConfig() { DARABONBA_PTR_GET(liveStreamSnapshotConfig_, vector<LiveStreamSnapshotConfigList::LiveStreamSnapshotConfig>) };
      inline LiveStreamSnapshotConfigList& setLiveStreamSnapshotConfig(const vector<LiveStreamSnapshotConfigList::LiveStreamSnapshotConfig> & liveStreamSnapshotConfig) { DARABONBA_PTR_SET_VALUE(liveStreamSnapshotConfig_, liveStreamSnapshotConfig) };
      inline LiveStreamSnapshotConfigList& setLiveStreamSnapshotConfig(vector<LiveStreamSnapshotConfigList::LiveStreamSnapshotConfig> && liveStreamSnapshotConfig) { DARABONBA_PTR_SET_RVALUE(liveStreamSnapshotConfig_, liveStreamSnapshotConfig) };


    protected:
      shared_ptr<vector<LiveStreamSnapshotConfigList::LiveStreamSnapshotConfig>> liveStreamSnapshotConfig_ {};
    };

    virtual bool empty() const override { return this->liveStreamSnapshotConfigList_ == nullptr
        && this->order_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalNum_ == nullptr
        && this->totalPage_ == nullptr; };
    // liveStreamSnapshotConfigList Field Functions 
    bool hasLiveStreamSnapshotConfigList() const { return this->liveStreamSnapshotConfigList_ != nullptr;};
    void deleteLiveStreamSnapshotConfigList() { this->liveStreamSnapshotConfigList_ = nullptr;};
    inline const DescribeLiveSnapshotConfigResponseBody::LiveStreamSnapshotConfigList & getLiveStreamSnapshotConfigList() const { DARABONBA_PTR_GET_CONST(liveStreamSnapshotConfigList_, DescribeLiveSnapshotConfigResponseBody::LiveStreamSnapshotConfigList) };
    inline DescribeLiveSnapshotConfigResponseBody::LiveStreamSnapshotConfigList getLiveStreamSnapshotConfigList() { DARABONBA_PTR_GET(liveStreamSnapshotConfigList_, DescribeLiveSnapshotConfigResponseBody::LiveStreamSnapshotConfigList) };
    inline DescribeLiveSnapshotConfigResponseBody& setLiveStreamSnapshotConfigList(const DescribeLiveSnapshotConfigResponseBody::LiveStreamSnapshotConfigList & liveStreamSnapshotConfigList) { DARABONBA_PTR_SET_VALUE(liveStreamSnapshotConfigList_, liveStreamSnapshotConfigList) };
    inline DescribeLiveSnapshotConfigResponseBody& setLiveStreamSnapshotConfigList(DescribeLiveSnapshotConfigResponseBody::LiveStreamSnapshotConfigList && liveStreamSnapshotConfigList) { DARABONBA_PTR_SET_RVALUE(liveStreamSnapshotConfigList_, liveStreamSnapshotConfigList) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeLiveSnapshotConfigResponseBody& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeLiveSnapshotConfigResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveSnapshotConfigResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveSnapshotConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeLiveSnapshotConfigResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeLiveSnapshotConfigResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The snapshot configurations.
    shared_ptr<DescribeLiveSnapshotConfigResponseBody::LiveStreamSnapshotConfigList> liveStreamSnapshotConfigList_ {};
    // The sort order.
    shared_ptr<string> order_ {};
    // The page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries that meet the specified conditions.
    shared_ptr<int32_t> totalNum_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
