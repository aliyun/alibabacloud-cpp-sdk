// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERECORDVODCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERECORDVODCONFIGSRESPONSEBODY_HPP_
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
  class DescribeLiveRecordVodConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRecordVodConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveRecordVodConfigs, liveRecordVodConfigs_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRecordVodConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveRecordVodConfigs, liveRecordVodConfigs_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeLiveRecordVodConfigsResponseBody() = default ;
    DescribeLiveRecordVodConfigsResponseBody(const DescribeLiveRecordVodConfigsResponseBody &) = default ;
    DescribeLiveRecordVodConfigsResponseBody(DescribeLiveRecordVodConfigsResponseBody &&) = default ;
    DescribeLiveRecordVodConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRecordVodConfigsResponseBody() = default ;
    DescribeLiveRecordVodConfigsResponseBody& operator=(const DescribeLiveRecordVodConfigsResponseBody &) = default ;
    DescribeLiveRecordVodConfigsResponseBody& operator=(DescribeLiveRecordVodConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveRecordVodConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveRecordVodConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(LiveRecordVodConfig, liveRecordVodConfig_);
      };
      friend void from_json(const Darabonba::Json& j, LiveRecordVodConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveRecordVodConfig, liveRecordVodConfig_);
      };
      LiveRecordVodConfigs() = default ;
      LiveRecordVodConfigs(const LiveRecordVodConfigs &) = default ;
      LiveRecordVodConfigs(LiveRecordVodConfigs &&) = default ;
      LiveRecordVodConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveRecordVodConfigs() = default ;
      LiveRecordVodConfigs& operator=(const LiveRecordVodConfigs &) = default ;
      LiveRecordVodConfigs& operator=(LiveRecordVodConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveRecordVodConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveRecordVodConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(AutoCompose, autoCompose_);
          DARABONBA_PTR_TO_JSON(ComposeVodTranscodeGroupId, composeVodTranscodeGroupId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CycleDuration, cycleDuration_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(OnDemand, onDemand_);
          DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
          DARABONBA_PTR_TO_JSON(VodTranscodeGroupId, vodTranscodeGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, LiveRecordVodConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AutoCompose, autoCompose_);
          DARABONBA_PTR_FROM_JSON(ComposeVodTranscodeGroupId, composeVodTranscodeGroupId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(OnDemand, onDemand_);
          DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
          DARABONBA_PTR_FROM_JSON(VodTranscodeGroupId, vodTranscodeGroupId_);
        };
        LiveRecordVodConfig() = default ;
        LiveRecordVodConfig(const LiveRecordVodConfig &) = default ;
        LiveRecordVodConfig(LiveRecordVodConfig &&) = default ;
        LiveRecordVodConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveRecordVodConfig() = default ;
        LiveRecordVodConfig& operator=(const LiveRecordVodConfig &) = default ;
        LiveRecordVodConfig& operator=(LiveRecordVodConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->autoCompose_ == nullptr && this->composeVodTranscodeGroupId_ == nullptr && this->createTime_ == nullptr && this->cycleDuration_ == nullptr && this->domainName_ == nullptr
        && this->onDemand_ == nullptr && this->storageLocation_ == nullptr && this->streamName_ == nullptr && this->vodTranscodeGroupId_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline LiveRecordVodConfig& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // autoCompose Field Functions 
        bool hasAutoCompose() const { return this->autoCompose_ != nullptr;};
        void deleteAutoCompose() { this->autoCompose_ = nullptr;};
        inline string getAutoCompose() const { DARABONBA_PTR_GET_DEFAULT(autoCompose_, "") };
        inline LiveRecordVodConfig& setAutoCompose(string autoCompose) { DARABONBA_PTR_SET_VALUE(autoCompose_, autoCompose) };


        // composeVodTranscodeGroupId Field Functions 
        bool hasComposeVodTranscodeGroupId() const { return this->composeVodTranscodeGroupId_ != nullptr;};
        void deleteComposeVodTranscodeGroupId() { this->composeVodTranscodeGroupId_ = nullptr;};
        inline string getComposeVodTranscodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(composeVodTranscodeGroupId_, "") };
        inline LiveRecordVodConfig& setComposeVodTranscodeGroupId(string composeVodTranscodeGroupId) { DARABONBA_PTR_SET_VALUE(composeVodTranscodeGroupId_, composeVodTranscodeGroupId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline LiveRecordVodConfig& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // cycleDuration Field Functions 
        bool hasCycleDuration() const { return this->cycleDuration_ != nullptr;};
        void deleteCycleDuration() { this->cycleDuration_ = nullptr;};
        inline int32_t getCycleDuration() const { DARABONBA_PTR_GET_DEFAULT(cycleDuration_, 0) };
        inline LiveRecordVodConfig& setCycleDuration(int32_t cycleDuration) { DARABONBA_PTR_SET_VALUE(cycleDuration_, cycleDuration) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveRecordVodConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // onDemand Field Functions 
        bool hasOnDemand() const { return this->onDemand_ != nullptr;};
        void deleteOnDemand() { this->onDemand_ = nullptr;};
        inline int32_t getOnDemand() const { DARABONBA_PTR_GET_DEFAULT(onDemand_, 0) };
        inline LiveRecordVodConfig& setOnDemand(int32_t onDemand) { DARABONBA_PTR_SET_VALUE(onDemand_, onDemand) };


        // storageLocation Field Functions 
        bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
        void deleteStorageLocation() { this->storageLocation_ = nullptr;};
        inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
        inline LiveRecordVodConfig& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline LiveRecordVodConfig& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


        // vodTranscodeGroupId Field Functions 
        bool hasVodTranscodeGroupId() const { return this->vodTranscodeGroupId_ != nullptr;};
        void deleteVodTranscodeGroupId() { this->vodTranscodeGroupId_ = nullptr;};
        inline string getVodTranscodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(vodTranscodeGroupId_, "") };
        inline LiveRecordVodConfig& setVodTranscodeGroupId(string vodTranscodeGroupId) { DARABONBA_PTR_SET_VALUE(vodTranscodeGroupId_, vodTranscodeGroupId) };


      protected:
        // The name of the application to which the live stream belongs.
        shared_ptr<string> appName_ {};
        // Indicates whether automatic merging is enabled. Valid values:
        // 
        // *   **ON**
        // *   **OFF**
        shared_ptr<string> autoCompose_ {};
        // The ID of the transcoding template group that was used to automatically merge the VOD files created from the live streams.
        // 
        // >  This parameter is returned if the value of the AutoCompose parameter is ON.
        shared_ptr<string> composeVodTranscodeGroupId_ {};
        // The time when the live stream was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The recording cycle. Unit: seconds. Default value: **3600**. Valid values: **300 to 21600**.
        shared_ptr<int32_t> cycleDuration_ {};
        // The main streaming domain.
        shared_ptr<string> domainName_ {};
        // Indicates whether on-demand recording is enabled. Valid values:
        // 
        // *   **0** (default): On-demand recording is disabled.
        // *   **1**: On-demand recording is enabled by using the HTTP callback method.
        shared_ptr<int32_t> onDemand_ {};
        // The storage location.
        shared_ptr<string> storageLocation_ {};
        // The name of the live stream.
        shared_ptr<string> streamName_ {};
        // The ID of the transcoding template group in ApsaraVideo VOD.
        shared_ptr<string> vodTranscodeGroupId_ {};
      };

      virtual bool empty() const override { return this->liveRecordVodConfig_ == nullptr; };
      // liveRecordVodConfig Field Functions 
      bool hasLiveRecordVodConfig() const { return this->liveRecordVodConfig_ != nullptr;};
      void deleteLiveRecordVodConfig() { this->liveRecordVodConfig_ = nullptr;};
      inline const vector<LiveRecordVodConfigs::LiveRecordVodConfig> & getLiveRecordVodConfig() const { DARABONBA_PTR_GET_CONST(liveRecordVodConfig_, vector<LiveRecordVodConfigs::LiveRecordVodConfig>) };
      inline vector<LiveRecordVodConfigs::LiveRecordVodConfig> getLiveRecordVodConfig() { DARABONBA_PTR_GET(liveRecordVodConfig_, vector<LiveRecordVodConfigs::LiveRecordVodConfig>) };
      inline LiveRecordVodConfigs& setLiveRecordVodConfig(const vector<LiveRecordVodConfigs::LiveRecordVodConfig> & liveRecordVodConfig) { DARABONBA_PTR_SET_VALUE(liveRecordVodConfig_, liveRecordVodConfig) };
      inline LiveRecordVodConfigs& setLiveRecordVodConfig(vector<LiveRecordVodConfigs::LiveRecordVodConfig> && liveRecordVodConfig) { DARABONBA_PTR_SET_RVALUE(liveRecordVodConfig_, liveRecordVodConfig) };


    protected:
      shared_ptr<vector<LiveRecordVodConfigs::LiveRecordVodConfig>> liveRecordVodConfig_ {};
    };

    virtual bool empty() const override { return this->liveRecordVodConfigs_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // liveRecordVodConfigs Field Functions 
    bool hasLiveRecordVodConfigs() const { return this->liveRecordVodConfigs_ != nullptr;};
    void deleteLiveRecordVodConfigs() { this->liveRecordVodConfigs_ = nullptr;};
    inline const DescribeLiveRecordVodConfigsResponseBody::LiveRecordVodConfigs & getLiveRecordVodConfigs() const { DARABONBA_PTR_GET_CONST(liveRecordVodConfigs_, DescribeLiveRecordVodConfigsResponseBody::LiveRecordVodConfigs) };
    inline DescribeLiveRecordVodConfigsResponseBody::LiveRecordVodConfigs getLiveRecordVodConfigs() { DARABONBA_PTR_GET(liveRecordVodConfigs_, DescribeLiveRecordVodConfigsResponseBody::LiveRecordVodConfigs) };
    inline DescribeLiveRecordVodConfigsResponseBody& setLiveRecordVodConfigs(const DescribeLiveRecordVodConfigsResponseBody::LiveRecordVodConfigs & liveRecordVodConfigs) { DARABONBA_PTR_SET_VALUE(liveRecordVodConfigs_, liveRecordVodConfigs) };
    inline DescribeLiveRecordVodConfigsResponseBody& setLiveRecordVodConfigs(DescribeLiveRecordVodConfigsResponseBody::LiveRecordVodConfigs && liveRecordVodConfigs) { DARABONBA_PTR_SET_RVALUE(liveRecordVodConfigs_, liveRecordVodConfigs) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeLiveRecordVodConfigsResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveRecordVodConfigsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveRecordVodConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline DescribeLiveRecordVodConfigsResponseBody& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The configurations.
    shared_ptr<DescribeLiveRecordVodConfigsResponseBody::LiveRecordVodConfigs> liveRecordVodConfigs_ {};
    // The page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
