// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPACKAGECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPACKAGECONFIGRESPONSEBODY_HPP_
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
  class DescribeLivePackageConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePackageConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePackageConfigList, livePackageConfigList_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePackageConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePackageConfigList, livePackageConfigList_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeLivePackageConfigResponseBody() = default ;
    DescribeLivePackageConfigResponseBody(const DescribeLivePackageConfigResponseBody &) = default ;
    DescribeLivePackageConfigResponseBody(DescribeLivePackageConfigResponseBody &&) = default ;
    DescribeLivePackageConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePackageConfigResponseBody() = default ;
    DescribeLivePackageConfigResponseBody& operator=(const DescribeLivePackageConfigResponseBody &) = default ;
    DescribeLivePackageConfigResponseBody& operator=(DescribeLivePackageConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LivePackageConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LivePackageConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(LivePackageConfig, livePackageConfig_);
      };
      friend void from_json(const Darabonba::Json& j, LivePackageConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(LivePackageConfig, livePackageConfig_);
      };
      LivePackageConfigList() = default ;
      LivePackageConfigList(const LivePackageConfigList &) = default ;
      LivePackageConfigList(LivePackageConfigList &&) = default ;
      LivePackageConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LivePackageConfigList() = default ;
      LivePackageConfigList& operator=(const LivePackageConfigList &) = default ;
      LivePackageConfigList& operator=(LivePackageConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LivePackageConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LivePackageConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(IgnoreTranscode, ignoreTranscode_);
          DARABONBA_PTR_TO_JSON(PartDuration, partDuration_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(SegmentDuration, segmentDuration_);
          DARABONBA_PTR_TO_JSON(SegmentNum, segmentNum_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
        };
        friend void from_json(const Darabonba::Json& j, LivePackageConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(IgnoreTranscode, ignoreTranscode_);
          DARABONBA_PTR_FROM_JSON(PartDuration, partDuration_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(SegmentDuration, segmentDuration_);
          DARABONBA_PTR_FROM_JSON(SegmentNum, segmentNum_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
        };
        LivePackageConfig() = default ;
        LivePackageConfig(const LivePackageConfig &) = default ;
        LivePackageConfig(LivePackageConfig &&) = default ;
        LivePackageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LivePackageConfig() = default ;
        LivePackageConfig& operator=(const LivePackageConfig &) = default ;
        LivePackageConfig& operator=(LivePackageConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->ignoreTranscode_ == nullptr && this->partDuration_ == nullptr && this->protocol_ == nullptr && this->segmentDuration_ == nullptr
        && this->segmentNum_ == nullptr && this->streamName_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline LivePackageConfig& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LivePackageConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // ignoreTranscode Field Functions 
        bool hasIgnoreTranscode() const { return this->ignoreTranscode_ != nullptr;};
        void deleteIgnoreTranscode() { this->ignoreTranscode_ = nullptr;};
        inline bool getIgnoreTranscode() const { DARABONBA_PTR_GET_DEFAULT(ignoreTranscode_, false) };
        inline LivePackageConfig& setIgnoreTranscode(bool ignoreTranscode) { DARABONBA_PTR_SET_VALUE(ignoreTranscode_, ignoreTranscode) };


        // partDuration Field Functions 
        bool hasPartDuration() const { return this->partDuration_ != nullptr;};
        void deletePartDuration() { this->partDuration_ = nullptr;};
        inline int32_t getPartDuration() const { DARABONBA_PTR_GET_DEFAULT(partDuration_, 0) };
        inline LivePackageConfig& setPartDuration(int32_t partDuration) { DARABONBA_PTR_SET_VALUE(partDuration_, partDuration) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline LivePackageConfig& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // segmentDuration Field Functions 
        bool hasSegmentDuration() const { return this->segmentDuration_ != nullptr;};
        void deleteSegmentDuration() { this->segmentDuration_ = nullptr;};
        inline int32_t getSegmentDuration() const { DARABONBA_PTR_GET_DEFAULT(segmentDuration_, 0) };
        inline LivePackageConfig& setSegmentDuration(int32_t segmentDuration) { DARABONBA_PTR_SET_VALUE(segmentDuration_, segmentDuration) };


        // segmentNum Field Functions 
        bool hasSegmentNum() const { return this->segmentNum_ != nullptr;};
        void deleteSegmentNum() { this->segmentNum_ = nullptr;};
        inline int32_t getSegmentNum() const { DARABONBA_PTR_GET_DEFAULT(segmentNum_, 0) };
        inline LivePackageConfig& setSegmentNum(int32_t segmentNum) { DARABONBA_PTR_SET_VALUE(segmentNum_, segmentNum) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline LivePackageConfig& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


      protected:
        // The application name.
        shared_ptr<string> appName_ {};
        // The main streaming domain.
        shared_ptr<string> domainName_ {};
        // Indicates whether the transcoded stream is ignored. Valid values:
        // 
        // *   **true** (default)
        // *   **false**
        shared_ptr<bool> ignoreTranscode_ {};
        // The part length. Unit: milliseconds.
        shared_ptr<int32_t> partDuration_ {};
        // The streaming protocol and encapsulation format.
        shared_ptr<string> protocol_ {};
        // The segment length. Unit: seconds.
        shared_ptr<int32_t> segmentDuration_ {};
        // The number of segments.
        shared_ptr<int32_t> segmentNum_ {};
        // The stream name.
        shared_ptr<string> streamName_ {};
      };

      virtual bool empty() const override { return this->livePackageConfig_ == nullptr; };
      // livePackageConfig Field Functions 
      bool hasLivePackageConfig() const { return this->livePackageConfig_ != nullptr;};
      void deleteLivePackageConfig() { this->livePackageConfig_ = nullptr;};
      inline const vector<LivePackageConfigList::LivePackageConfig> & getLivePackageConfig() const { DARABONBA_PTR_GET_CONST(livePackageConfig_, vector<LivePackageConfigList::LivePackageConfig>) };
      inline vector<LivePackageConfigList::LivePackageConfig> getLivePackageConfig() { DARABONBA_PTR_GET(livePackageConfig_, vector<LivePackageConfigList::LivePackageConfig>) };
      inline LivePackageConfigList& setLivePackageConfig(const vector<LivePackageConfigList::LivePackageConfig> & livePackageConfig) { DARABONBA_PTR_SET_VALUE(livePackageConfig_, livePackageConfig) };
      inline LivePackageConfigList& setLivePackageConfig(vector<LivePackageConfigList::LivePackageConfig> && livePackageConfig) { DARABONBA_PTR_SET_RVALUE(livePackageConfig_, livePackageConfig) };


    protected:
      shared_ptr<vector<LivePackageConfigList::LivePackageConfig>> livePackageConfig_ {};
    };

    virtual bool empty() const override { return this->livePackageConfigList_ == nullptr
        && this->order_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalNum_ == nullptr
        && this->totalPage_ == nullptr; };
    // livePackageConfigList Field Functions 
    bool hasLivePackageConfigList() const { return this->livePackageConfigList_ != nullptr;};
    void deleteLivePackageConfigList() { this->livePackageConfigList_ = nullptr;};
    inline const DescribeLivePackageConfigResponseBody::LivePackageConfigList & getLivePackageConfigList() const { DARABONBA_PTR_GET_CONST(livePackageConfigList_, DescribeLivePackageConfigResponseBody::LivePackageConfigList) };
    inline DescribeLivePackageConfigResponseBody::LivePackageConfigList getLivePackageConfigList() { DARABONBA_PTR_GET(livePackageConfigList_, DescribeLivePackageConfigResponseBody::LivePackageConfigList) };
    inline DescribeLivePackageConfigResponseBody& setLivePackageConfigList(const DescribeLivePackageConfigResponseBody::LivePackageConfigList & livePackageConfigList) { DARABONBA_PTR_SET_VALUE(livePackageConfigList_, livePackageConfigList) };
    inline DescribeLivePackageConfigResponseBody& setLivePackageConfigList(DescribeLivePackageConfigResponseBody::LivePackageConfigList && livePackageConfigList) { DARABONBA_PTR_SET_RVALUE(livePackageConfigList_, livePackageConfigList) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeLivePackageConfigResponseBody& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeLivePackageConfigResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLivePackageConfigResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLivePackageConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeLivePackageConfigResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeLivePackageConfigResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The live stream encapsulation configurations.
    shared_ptr<DescribeLivePackageConfigResponseBody::LivePackageConfigList> livePackageConfigList_ {};
    // The sorting order. Valid values:
    // 
    // *   **asc** (default): ascending order
    // *   **desc**: descending order
    shared_ptr<string> order_ {};
    // The page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of live stream encapsulation configurations.
    shared_ptr<int32_t> totalNum_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
