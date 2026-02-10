// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESNAPSHOTDETECTPORNCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESNAPSHOTDETECTPORNCONFIGRESPONSEBODY_HPP_
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
  class DescribeLiveSnapshotDetectPornConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveSnapshotDetectPornConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveSnapshotDetectPornConfigList, liveSnapshotDetectPornConfigList_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveSnapshotDetectPornConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveSnapshotDetectPornConfigList, liveSnapshotDetectPornConfigList_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeLiveSnapshotDetectPornConfigResponseBody() = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBody(const DescribeLiveSnapshotDetectPornConfigResponseBody &) = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBody(DescribeLiveSnapshotDetectPornConfigResponseBody &&) = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveSnapshotDetectPornConfigResponseBody() = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBody& operator=(const DescribeLiveSnapshotDetectPornConfigResponseBody &) = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBody& operator=(DescribeLiveSnapshotDetectPornConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveSnapshotDetectPornConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveSnapshotDetectPornConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(LiveSnapshotDetectPornConfig, liveSnapshotDetectPornConfig_);
      };
      friend void from_json(const Darabonba::Json& j, LiveSnapshotDetectPornConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveSnapshotDetectPornConfig, liveSnapshotDetectPornConfig_);
      };
      LiveSnapshotDetectPornConfigList() = default ;
      LiveSnapshotDetectPornConfigList(const LiveSnapshotDetectPornConfigList &) = default ;
      LiveSnapshotDetectPornConfigList(LiveSnapshotDetectPornConfigList &&) = default ;
      LiveSnapshotDetectPornConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveSnapshotDetectPornConfigList() = default ;
      LiveSnapshotDetectPornConfigList& operator=(const LiveSnapshotDetectPornConfigList &) = default ;
      LiveSnapshotDetectPornConfigList& operator=(LiveSnapshotDetectPornConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveSnapshotDetectPornConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveSnapshotDetectPornConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
          DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
          DARABONBA_PTR_TO_JSON(OssObject, ossObject_);
          DARABONBA_PTR_TO_JSON(Scenes, scenes_);
        };
        friend void from_json(const Darabonba::Json& j, LiveSnapshotDetectPornConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
          DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
          DARABONBA_PTR_FROM_JSON(OssObject, ossObject_);
          DARABONBA_PTR_FROM_JSON(Scenes, scenes_);
        };
        LiveSnapshotDetectPornConfig() = default ;
        LiveSnapshotDetectPornConfig(const LiveSnapshotDetectPornConfig &) = default ;
        LiveSnapshotDetectPornConfig(LiveSnapshotDetectPornConfig &&) = default ;
        LiveSnapshotDetectPornConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveSnapshotDetectPornConfig() = default ;
        LiveSnapshotDetectPornConfig& operator=(const LiveSnapshotDetectPornConfig &) = default ;
        LiveSnapshotDetectPornConfig& operator=(LiveSnapshotDetectPornConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Scenes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Scenes& obj) { 
            DARABONBA_PTR_TO_JSON(scene, scene_);
          };
          friend void from_json(const Darabonba::Json& j, Scenes& obj) { 
            DARABONBA_PTR_FROM_JSON(scene, scene_);
          };
          Scenes() = default ;
          Scenes(const Scenes &) = default ;
          Scenes(Scenes &&) = default ;
          Scenes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Scenes() = default ;
          Scenes& operator=(const Scenes &) = default ;
          Scenes& operator=(Scenes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->scene_ == nullptr; };
          // scene Field Functions 
          bool hasScene() const { return this->scene_ != nullptr;};
          void deleteScene() { this->scene_ = nullptr;};
          inline const vector<string> & getScene() const { DARABONBA_PTR_GET_CONST(scene_, vector<string>) };
          inline vector<string> getScene() { DARABONBA_PTR_GET(scene_, vector<string>) };
          inline Scenes& setScene(const vector<string> & scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };
          inline Scenes& setScene(vector<string> && scene) { DARABONBA_PTR_SET_RVALUE(scene_, scene) };


        protected:
          shared_ptr<vector<string>> scene_ {};
        };

        virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->interval_ == nullptr && this->ossBucket_ == nullptr && this->ossEndpoint_ == nullptr && this->ossObject_ == nullptr
        && this->scenes_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline LiveSnapshotDetectPornConfig& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveSnapshotDetectPornConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
        inline LiveSnapshotDetectPornConfig& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // ossBucket Field Functions 
        bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
        void deleteOssBucket() { this->ossBucket_ = nullptr;};
        inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
        inline LiveSnapshotDetectPornConfig& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


        // ossEndpoint Field Functions 
        bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
        void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
        inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
        inline LiveSnapshotDetectPornConfig& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


        // ossObject Field Functions 
        bool hasOssObject() const { return this->ossObject_ != nullptr;};
        void deleteOssObject() { this->ossObject_ = nullptr;};
        inline string getOssObject() const { DARABONBA_PTR_GET_DEFAULT(ossObject_, "") };
        inline LiveSnapshotDetectPornConfig& setOssObject(string ossObject) { DARABONBA_PTR_SET_VALUE(ossObject_, ossObject) };


        // scenes Field Functions 
        bool hasScenes() const { return this->scenes_ != nullptr;};
        void deleteScenes() { this->scenes_ = nullptr;};
        inline const LiveSnapshotDetectPornConfig::Scenes & getScenes() const { DARABONBA_PTR_GET_CONST(scenes_, LiveSnapshotDetectPornConfig::Scenes) };
        inline LiveSnapshotDetectPornConfig::Scenes getScenes() { DARABONBA_PTR_GET(scenes_, LiveSnapshotDetectPornConfig::Scenes) };
        inline LiveSnapshotDetectPornConfig& setScenes(const LiveSnapshotDetectPornConfig::Scenes & scenes) { DARABONBA_PTR_SET_VALUE(scenes_, scenes) };
        inline LiveSnapshotDetectPornConfig& setScenes(LiveSnapshotDetectPornConfig::Scenes && scenes) { DARABONBA_PTR_SET_RVALUE(scenes_, scenes) };


      protected:
        shared_ptr<string> appName_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<int32_t> interval_ {};
        shared_ptr<string> ossBucket_ {};
        shared_ptr<string> ossEndpoint_ {};
        shared_ptr<string> ossObject_ {};
        shared_ptr<LiveSnapshotDetectPornConfig::Scenes> scenes_ {};
      };

      virtual bool empty() const override { return this->liveSnapshotDetectPornConfig_ == nullptr; };
      // liveSnapshotDetectPornConfig Field Functions 
      bool hasLiveSnapshotDetectPornConfig() const { return this->liveSnapshotDetectPornConfig_ != nullptr;};
      void deleteLiveSnapshotDetectPornConfig() { this->liveSnapshotDetectPornConfig_ = nullptr;};
      inline const vector<LiveSnapshotDetectPornConfigList::LiveSnapshotDetectPornConfig> & getLiveSnapshotDetectPornConfig() const { DARABONBA_PTR_GET_CONST(liveSnapshotDetectPornConfig_, vector<LiveSnapshotDetectPornConfigList::LiveSnapshotDetectPornConfig>) };
      inline vector<LiveSnapshotDetectPornConfigList::LiveSnapshotDetectPornConfig> getLiveSnapshotDetectPornConfig() { DARABONBA_PTR_GET(liveSnapshotDetectPornConfig_, vector<LiveSnapshotDetectPornConfigList::LiveSnapshotDetectPornConfig>) };
      inline LiveSnapshotDetectPornConfigList& setLiveSnapshotDetectPornConfig(const vector<LiveSnapshotDetectPornConfigList::LiveSnapshotDetectPornConfig> & liveSnapshotDetectPornConfig) { DARABONBA_PTR_SET_VALUE(liveSnapshotDetectPornConfig_, liveSnapshotDetectPornConfig) };
      inline LiveSnapshotDetectPornConfigList& setLiveSnapshotDetectPornConfig(vector<LiveSnapshotDetectPornConfigList::LiveSnapshotDetectPornConfig> && liveSnapshotDetectPornConfig) { DARABONBA_PTR_SET_RVALUE(liveSnapshotDetectPornConfig_, liveSnapshotDetectPornConfig) };


    protected:
      shared_ptr<vector<LiveSnapshotDetectPornConfigList::LiveSnapshotDetectPornConfig>> liveSnapshotDetectPornConfig_ {};
    };

    virtual bool empty() const override { return this->liveSnapshotDetectPornConfigList_ == nullptr
        && this->order_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalNum_ == nullptr
        && this->totalPage_ == nullptr; };
    // liveSnapshotDetectPornConfigList Field Functions 
    bool hasLiveSnapshotDetectPornConfigList() const { return this->liveSnapshotDetectPornConfigList_ != nullptr;};
    void deleteLiveSnapshotDetectPornConfigList() { this->liveSnapshotDetectPornConfigList_ = nullptr;};
    inline const DescribeLiveSnapshotDetectPornConfigResponseBody::LiveSnapshotDetectPornConfigList & getLiveSnapshotDetectPornConfigList() const { DARABONBA_PTR_GET_CONST(liveSnapshotDetectPornConfigList_, DescribeLiveSnapshotDetectPornConfigResponseBody::LiveSnapshotDetectPornConfigList) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBody::LiveSnapshotDetectPornConfigList getLiveSnapshotDetectPornConfigList() { DARABONBA_PTR_GET(liveSnapshotDetectPornConfigList_, DescribeLiveSnapshotDetectPornConfigResponseBody::LiveSnapshotDetectPornConfigList) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBody& setLiveSnapshotDetectPornConfigList(const DescribeLiveSnapshotDetectPornConfigResponseBody::LiveSnapshotDetectPornConfigList & liveSnapshotDetectPornConfigList) { DARABONBA_PTR_SET_VALUE(liveSnapshotDetectPornConfigList_, liveSnapshotDetectPornConfigList) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBody& setLiveSnapshotDetectPornConfigList(DescribeLiveSnapshotDetectPornConfigResponseBody::LiveSnapshotDetectPornConfigList && liveSnapshotDetectPornConfigList) { DARABONBA_PTR_SET_RVALUE(liveSnapshotDetectPornConfigList_, liveSnapshotDetectPornConfigList) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeLiveSnapshotDetectPornConfigResponseBody& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveSnapshotDetectPornConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<DescribeLiveSnapshotDetectPornConfigResponseBody::LiveSnapshotDetectPornConfigList> liveSnapshotDetectPornConfigList_ {};
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
