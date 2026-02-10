// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSONLINELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSONLINELISTRESPONSEBODY_HPP_
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
  class DescribeLiveStreamsOnlineListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsOnlineListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OnlineInfo, onlineInfo_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsOnlineListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OnlineInfo, onlineInfo_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeLiveStreamsOnlineListResponseBody() = default ;
    DescribeLiveStreamsOnlineListResponseBody(const DescribeLiveStreamsOnlineListResponseBody &) = default ;
    DescribeLiveStreamsOnlineListResponseBody(DescribeLiveStreamsOnlineListResponseBody &&) = default ;
    DescribeLiveStreamsOnlineListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsOnlineListResponseBody() = default ;
    DescribeLiveStreamsOnlineListResponseBody& operator=(const DescribeLiveStreamsOnlineListResponseBody &) = default ;
    DescribeLiveStreamsOnlineListResponseBody& operator=(DescribeLiveStreamsOnlineListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OnlineInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OnlineInfo& obj) { 
        DARABONBA_PTR_TO_JSON(LiveStreamOnlineInfo, liveStreamOnlineInfo_);
      };
      friend void from_json(const Darabonba::Json& j, OnlineInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveStreamOnlineInfo, liveStreamOnlineInfo_);
      };
      OnlineInfo() = default ;
      OnlineInfo(const OnlineInfo &) = default ;
      OnlineInfo(OnlineInfo &&) = default ;
      OnlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OnlineInfo() = default ;
      OnlineInfo& operator=(const OnlineInfo &) = default ;
      OnlineInfo& operator=(OnlineInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveStreamOnlineInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveStreamOnlineInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(AudioCodecId, audioCodecId_);
          DARABONBA_PTR_TO_JSON(AudioDataRate, audioDataRate_);
          DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(PublishDomain, publishDomain_);
          DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
          DARABONBA_PTR_TO_JSON(PublishType, publishType_);
          DARABONBA_PTR_TO_JSON(PublishUrl, publishUrl_);
          DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
          DARABONBA_PTR_TO_JSON(Transcoded, transcoded_);
          DARABONBA_PTR_TO_JSON(VideoCodecId, videoCodecId_);
          DARABONBA_PTR_TO_JSON(VideoDataRate, videoDataRate_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, LiveStreamOnlineInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AudioCodecId, audioCodecId_);
          DARABONBA_PTR_FROM_JSON(AudioDataRate, audioDataRate_);
          DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(PublishDomain, publishDomain_);
          DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
          DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
          DARABONBA_PTR_FROM_JSON(PublishUrl, publishUrl_);
          DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
          DARABONBA_PTR_FROM_JSON(Transcoded, transcoded_);
          DARABONBA_PTR_FROM_JSON(VideoCodecId, videoCodecId_);
          DARABONBA_PTR_FROM_JSON(VideoDataRate, videoDataRate_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        LiveStreamOnlineInfo() = default ;
        LiveStreamOnlineInfo(const LiveStreamOnlineInfo &) = default ;
        LiveStreamOnlineInfo(LiveStreamOnlineInfo &&) = default ;
        LiveStreamOnlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveStreamOnlineInfo() = default ;
        LiveStreamOnlineInfo& operator=(const LiveStreamOnlineInfo &) = default ;
        LiveStreamOnlineInfo& operator=(LiveStreamOnlineInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->audioCodecId_ == nullptr && this->audioDataRate_ == nullptr && this->clientIp_ == nullptr && this->domainName_ == nullptr && this->frameRate_ == nullptr
        && this->height_ == nullptr && this->publishDomain_ == nullptr && this->publishTime_ == nullptr && this->publishType_ == nullptr && this->publishUrl_ == nullptr
        && this->serverIp_ == nullptr && this->streamName_ == nullptr && this->transcoded_ == nullptr && this->videoCodecId_ == nullptr && this->videoDataRate_ == nullptr
        && this->width_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline LiveStreamOnlineInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // audioCodecId Field Functions 
        bool hasAudioCodecId() const { return this->audioCodecId_ != nullptr;};
        void deleteAudioCodecId() { this->audioCodecId_ = nullptr;};
        inline int32_t getAudioCodecId() const { DARABONBA_PTR_GET_DEFAULT(audioCodecId_, 0) };
        inline LiveStreamOnlineInfo& setAudioCodecId(int32_t audioCodecId) { DARABONBA_PTR_SET_VALUE(audioCodecId_, audioCodecId) };


        // audioDataRate Field Functions 
        bool hasAudioDataRate() const { return this->audioDataRate_ != nullptr;};
        void deleteAudioDataRate() { this->audioDataRate_ = nullptr;};
        inline int32_t getAudioDataRate() const { DARABONBA_PTR_GET_DEFAULT(audioDataRate_, 0) };
        inline LiveStreamOnlineInfo& setAudioDataRate(int32_t audioDataRate) { DARABONBA_PTR_SET_VALUE(audioDataRate_, audioDataRate) };


        // clientIp Field Functions 
        bool hasClientIp() const { return this->clientIp_ != nullptr;};
        void deleteClientIp() { this->clientIp_ = nullptr;};
        inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
        inline LiveStreamOnlineInfo& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveStreamOnlineInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // frameRate Field Functions 
        bool hasFrameRate() const { return this->frameRate_ != nullptr;};
        void deleteFrameRate() { this->frameRate_ = nullptr;};
        inline int32_t getFrameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, 0) };
        inline LiveStreamOnlineInfo& setFrameRate(int32_t frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
        inline LiveStreamOnlineInfo& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // publishDomain Field Functions 
        bool hasPublishDomain() const { return this->publishDomain_ != nullptr;};
        void deletePublishDomain() { this->publishDomain_ = nullptr;};
        inline string getPublishDomain() const { DARABONBA_PTR_GET_DEFAULT(publishDomain_, "") };
        inline LiveStreamOnlineInfo& setPublishDomain(string publishDomain) { DARABONBA_PTR_SET_VALUE(publishDomain_, publishDomain) };


        // publishTime Field Functions 
        bool hasPublishTime() const { return this->publishTime_ != nullptr;};
        void deletePublishTime() { this->publishTime_ = nullptr;};
        inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
        inline LiveStreamOnlineInfo& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


        // publishType Field Functions 
        bool hasPublishType() const { return this->publishType_ != nullptr;};
        void deletePublishType() { this->publishType_ = nullptr;};
        inline string getPublishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, "") };
        inline LiveStreamOnlineInfo& setPublishType(string publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


        // publishUrl Field Functions 
        bool hasPublishUrl() const { return this->publishUrl_ != nullptr;};
        void deletePublishUrl() { this->publishUrl_ = nullptr;};
        inline string getPublishUrl() const { DARABONBA_PTR_GET_DEFAULT(publishUrl_, "") };
        inline LiveStreamOnlineInfo& setPublishUrl(string publishUrl) { DARABONBA_PTR_SET_VALUE(publishUrl_, publishUrl) };


        // serverIp Field Functions 
        bool hasServerIp() const { return this->serverIp_ != nullptr;};
        void deleteServerIp() { this->serverIp_ = nullptr;};
        inline string getServerIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
        inline LiveStreamOnlineInfo& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline LiveStreamOnlineInfo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


        // transcoded Field Functions 
        bool hasTranscoded() const { return this->transcoded_ != nullptr;};
        void deleteTranscoded() { this->transcoded_ = nullptr;};
        inline string getTranscoded() const { DARABONBA_PTR_GET_DEFAULT(transcoded_, "") };
        inline LiveStreamOnlineInfo& setTranscoded(string transcoded) { DARABONBA_PTR_SET_VALUE(transcoded_, transcoded) };


        // videoCodecId Field Functions 
        bool hasVideoCodecId() const { return this->videoCodecId_ != nullptr;};
        void deleteVideoCodecId() { this->videoCodecId_ = nullptr;};
        inline int32_t getVideoCodecId() const { DARABONBA_PTR_GET_DEFAULT(videoCodecId_, 0) };
        inline LiveStreamOnlineInfo& setVideoCodecId(int32_t videoCodecId) { DARABONBA_PTR_SET_VALUE(videoCodecId_, videoCodecId) };


        // videoDataRate Field Functions 
        bool hasVideoDataRate() const { return this->videoDataRate_ != nullptr;};
        void deleteVideoDataRate() { this->videoDataRate_ = nullptr;};
        inline int32_t getVideoDataRate() const { DARABONBA_PTR_GET_DEFAULT(videoDataRate_, 0) };
        inline LiveStreamOnlineInfo& setVideoDataRate(int32_t videoDataRate) { DARABONBA_PTR_SET_VALUE(videoDataRate_, videoDataRate) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
        inline LiveStreamOnlineInfo& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        shared_ptr<string> appName_ {};
        shared_ptr<int32_t> audioCodecId_ {};
        shared_ptr<int32_t> audioDataRate_ {};
        shared_ptr<string> clientIp_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<int32_t> frameRate_ {};
        shared_ptr<int32_t> height_ {};
        shared_ptr<string> publishDomain_ {};
        shared_ptr<string> publishTime_ {};
        shared_ptr<string> publishType_ {};
        shared_ptr<string> publishUrl_ {};
        shared_ptr<string> serverIp_ {};
        shared_ptr<string> streamName_ {};
        shared_ptr<string> transcoded_ {};
        shared_ptr<int32_t> videoCodecId_ {};
        shared_ptr<int32_t> videoDataRate_ {};
        shared_ptr<int32_t> width_ {};
      };

      virtual bool empty() const override { return this->liveStreamOnlineInfo_ == nullptr; };
      // liveStreamOnlineInfo Field Functions 
      bool hasLiveStreamOnlineInfo() const { return this->liveStreamOnlineInfo_ != nullptr;};
      void deleteLiveStreamOnlineInfo() { this->liveStreamOnlineInfo_ = nullptr;};
      inline const vector<OnlineInfo::LiveStreamOnlineInfo> & getLiveStreamOnlineInfo() const { DARABONBA_PTR_GET_CONST(liveStreamOnlineInfo_, vector<OnlineInfo::LiveStreamOnlineInfo>) };
      inline vector<OnlineInfo::LiveStreamOnlineInfo> getLiveStreamOnlineInfo() { DARABONBA_PTR_GET(liveStreamOnlineInfo_, vector<OnlineInfo::LiveStreamOnlineInfo>) };
      inline OnlineInfo& setLiveStreamOnlineInfo(const vector<OnlineInfo::LiveStreamOnlineInfo> & liveStreamOnlineInfo) { DARABONBA_PTR_SET_VALUE(liveStreamOnlineInfo_, liveStreamOnlineInfo) };
      inline OnlineInfo& setLiveStreamOnlineInfo(vector<OnlineInfo::LiveStreamOnlineInfo> && liveStreamOnlineInfo) { DARABONBA_PTR_SET_RVALUE(liveStreamOnlineInfo_, liveStreamOnlineInfo) };


    protected:
      shared_ptr<vector<OnlineInfo::LiveStreamOnlineInfo>> liveStreamOnlineInfo_ {};
    };

    virtual bool empty() const override { return this->onlineInfo_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalNum_ == nullptr && this->totalPage_ == nullptr; };
    // onlineInfo Field Functions 
    bool hasOnlineInfo() const { return this->onlineInfo_ != nullptr;};
    void deleteOnlineInfo() { this->onlineInfo_ = nullptr;};
    inline const DescribeLiveStreamsOnlineListResponseBody::OnlineInfo & getOnlineInfo() const { DARABONBA_PTR_GET_CONST(onlineInfo_, DescribeLiveStreamsOnlineListResponseBody::OnlineInfo) };
    inline DescribeLiveStreamsOnlineListResponseBody::OnlineInfo getOnlineInfo() { DARABONBA_PTR_GET(onlineInfo_, DescribeLiveStreamsOnlineListResponseBody::OnlineInfo) };
    inline DescribeLiveStreamsOnlineListResponseBody& setOnlineInfo(const DescribeLiveStreamsOnlineListResponseBody::OnlineInfo & onlineInfo) { DARABONBA_PTR_SET_VALUE(onlineInfo_, onlineInfo) };
    inline DescribeLiveStreamsOnlineListResponseBody& setOnlineInfo(DescribeLiveStreamsOnlineListResponseBody::OnlineInfo && onlineInfo) { DARABONBA_PTR_SET_RVALUE(onlineInfo_, onlineInfo) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeLiveStreamsOnlineListResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveStreamsOnlineListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamsOnlineListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeLiveStreamsOnlineListResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeLiveStreamsOnlineListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<DescribeLiveStreamsOnlineListResponseBody::OnlineInfo> onlineInfo_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of streams that meet the specified conditions.
    shared_ptr<int32_t> totalNum_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
