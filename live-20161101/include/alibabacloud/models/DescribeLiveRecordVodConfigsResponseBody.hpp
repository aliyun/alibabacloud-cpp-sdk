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
          DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(FormatConfig, formatConfig_);
          DARABONBA_PTR_TO_JSON(OnDemand, onDemand_);
          DARABONBA_PTR_TO_JSON(RecordContent, recordContent_);
          DARABONBA_PTR_TO_JSON(RecordFormatList, recordFormatList_);
          DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
          DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
          DARABONBA_PTR_TO_JSON(TranscodeTemplates, transcodeTemplates_);
          DARABONBA_PTR_TO_JSON(VodTranscodeGroupId, vodTranscodeGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, LiveRecordVodConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AutoCompose, autoCompose_);
          DARABONBA_PTR_FROM_JSON(ComposeVodTranscodeGroupId, composeVodTranscodeGroupId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
          DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(FormatConfig, formatConfig_);
          DARABONBA_PTR_FROM_JSON(OnDemand, onDemand_);
          DARABONBA_PTR_FROM_JSON(RecordContent, recordContent_);
          DARABONBA_PTR_FROM_JSON(RecordFormatList, recordFormatList_);
          DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
          DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
          DARABONBA_PTR_FROM_JSON(TranscodeTemplates, transcodeTemplates_);
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
        class RecordFormatList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RecordFormatList& obj) { 
            DARABONBA_PTR_TO_JSON(RecordFormat, recordFormat_);
          };
          friend void from_json(const Darabonba::Json& j, RecordFormatList& obj) { 
            DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormat_);
          };
          RecordFormatList() = default ;
          RecordFormatList(const RecordFormatList &) = default ;
          RecordFormatList(RecordFormatList &&) = default ;
          RecordFormatList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RecordFormatList() = default ;
          RecordFormatList& operator=(const RecordFormatList &) = default ;
          RecordFormatList& operator=(RecordFormatList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RecordFormat : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RecordFormat& obj) { 
              DARABONBA_PTR_TO_JSON(AutoCompose, autoCompose_);
              DARABONBA_PTR_TO_JSON(Format, format_);
              DARABONBA_PTR_TO_JSON(ProcessMethod, processMethod_);
              DARABONBA_PTR_TO_JSON(ProcessTemplateId, processTemplateId_);
              DARABONBA_PTR_TO_JSON(SliceDuration, sliceDuration_);
              DARABONBA_PTR_TO_JSON(Tags, tags_);
              DARABONBA_PTR_TO_JSON(VideoProcess, videoProcess_);
            };
            friend void from_json(const Darabonba::Json& j, RecordFormat& obj) { 
              DARABONBA_PTR_FROM_JSON(AutoCompose, autoCompose_);
              DARABONBA_PTR_FROM_JSON(Format, format_);
              DARABONBA_PTR_FROM_JSON(ProcessMethod, processMethod_);
              DARABONBA_PTR_FROM_JSON(ProcessTemplateId, processTemplateId_);
              DARABONBA_PTR_FROM_JSON(SliceDuration, sliceDuration_);
              DARABONBA_PTR_FROM_JSON(Tags, tags_);
              DARABONBA_PTR_FROM_JSON(VideoProcess, videoProcess_);
            };
            RecordFormat() = default ;
            RecordFormat(const RecordFormat &) = default ;
            RecordFormat(RecordFormat &&) = default ;
            RecordFormat(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RecordFormat() = default ;
            RecordFormat& operator=(const RecordFormat &) = default ;
            RecordFormat& operator=(RecordFormat &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->autoCompose_ == nullptr
        && this->format_ == nullptr && this->processMethod_ == nullptr && this->processTemplateId_ == nullptr && this->sliceDuration_ == nullptr && this->tags_ == nullptr
        && this->videoProcess_ == nullptr; };
            // autoCompose Field Functions 
            bool hasAutoCompose() const { return this->autoCompose_ != nullptr;};
            void deleteAutoCompose() { this->autoCompose_ = nullptr;};
            inline string getAutoCompose() const { DARABONBA_PTR_GET_DEFAULT(autoCompose_, "") };
            inline RecordFormat& setAutoCompose(string autoCompose) { DARABONBA_PTR_SET_VALUE(autoCompose_, autoCompose) };


            // format Field Functions 
            bool hasFormat() const { return this->format_ != nullptr;};
            void deleteFormat() { this->format_ = nullptr;};
            inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
            inline RecordFormat& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


            // processMethod Field Functions 
            bool hasProcessMethod() const { return this->processMethod_ != nullptr;};
            void deleteProcessMethod() { this->processMethod_ = nullptr;};
            inline string getProcessMethod() const { DARABONBA_PTR_GET_DEFAULT(processMethod_, "") };
            inline RecordFormat& setProcessMethod(string processMethod) { DARABONBA_PTR_SET_VALUE(processMethod_, processMethod) };


            // processTemplateId Field Functions 
            bool hasProcessTemplateId() const { return this->processTemplateId_ != nullptr;};
            void deleteProcessTemplateId() { this->processTemplateId_ = nullptr;};
            inline string getProcessTemplateId() const { DARABONBA_PTR_GET_DEFAULT(processTemplateId_, "") };
            inline RecordFormat& setProcessTemplateId(string processTemplateId) { DARABONBA_PTR_SET_VALUE(processTemplateId_, processTemplateId) };


            // sliceDuration Field Functions 
            bool hasSliceDuration() const { return this->sliceDuration_ != nullptr;};
            void deleteSliceDuration() { this->sliceDuration_ = nullptr;};
            inline int32_t getSliceDuration() const { DARABONBA_PTR_GET_DEFAULT(sliceDuration_, 0) };
            inline RecordFormat& setSliceDuration(int32_t sliceDuration) { DARABONBA_PTR_SET_VALUE(sliceDuration_, sliceDuration) };


            // tags Field Functions 
            bool hasTags() const { return this->tags_ != nullptr;};
            void deleteTags() { this->tags_ = nullptr;};
            inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
            inline RecordFormat& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


            // videoProcess Field Functions 
            bool hasVideoProcess() const { return this->videoProcess_ != nullptr;};
            void deleteVideoProcess() { this->videoProcess_ = nullptr;};
            inline string getVideoProcess() const { DARABONBA_PTR_GET_DEFAULT(videoProcess_, "") };
            inline RecordFormat& setVideoProcess(string videoProcess) { DARABONBA_PTR_SET_VALUE(videoProcess_, videoProcess) };


          protected:
            shared_ptr<string> autoCompose_ {};
            shared_ptr<string> format_ {};
            shared_ptr<string> processMethod_ {};
            shared_ptr<string> processTemplateId_ {};
            shared_ptr<int32_t> sliceDuration_ {};
            shared_ptr<string> tags_ {};
            shared_ptr<string> videoProcess_ {};
          };

          virtual bool empty() const override { return this->recordFormat_ == nullptr; };
          // recordFormat Field Functions 
          bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
          void deleteRecordFormat() { this->recordFormat_ = nullptr;};
          inline const vector<RecordFormatList::RecordFormat> & getRecordFormat() const { DARABONBA_PTR_GET_CONST(recordFormat_, vector<RecordFormatList::RecordFormat>) };
          inline vector<RecordFormatList::RecordFormat> getRecordFormat() { DARABONBA_PTR_GET(recordFormat_, vector<RecordFormatList::RecordFormat>) };
          inline RecordFormatList& setRecordFormat(const vector<RecordFormatList::RecordFormat> & recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };
          inline RecordFormatList& setRecordFormat(vector<RecordFormatList::RecordFormat> && recordFormat) { DARABONBA_PTR_SET_RVALUE(recordFormat_, recordFormat) };


        protected:
          shared_ptr<vector<RecordFormatList::RecordFormat>> recordFormat_ {};
        };

        virtual bool empty() const override { return this->appName_ == nullptr
        && this->autoCompose_ == nullptr && this->composeVodTranscodeGroupId_ == nullptr && this->createTime_ == nullptr && this->cycleDuration_ == nullptr && this->delayTime_ == nullptr
        && this->domainName_ == nullptr && this->formatConfig_ == nullptr && this->onDemand_ == nullptr && this->recordContent_ == nullptr && this->recordFormatList_ == nullptr
        && this->spaceId_ == nullptr && this->storageLocation_ == nullptr && this->streamName_ == nullptr && this->transcodeTemplates_ == nullptr && this->vodTranscodeGroupId_ == nullptr; };
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


        // delayTime Field Functions 
        bool hasDelayTime() const { return this->delayTime_ != nullptr;};
        void deleteDelayTime() { this->delayTime_ = nullptr;};
        inline int32_t getDelayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
        inline LiveRecordVodConfig& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveRecordVodConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // formatConfig Field Functions 
        bool hasFormatConfig() const { return this->formatConfig_ != nullptr;};
        void deleteFormatConfig() { this->formatConfig_ = nullptr;};
        inline bool getFormatConfig() const { DARABONBA_PTR_GET_DEFAULT(formatConfig_, false) };
        inline LiveRecordVodConfig& setFormatConfig(bool formatConfig) { DARABONBA_PTR_SET_VALUE(formatConfig_, formatConfig) };


        // onDemand Field Functions 
        bool hasOnDemand() const { return this->onDemand_ != nullptr;};
        void deleteOnDemand() { this->onDemand_ = nullptr;};
        inline int32_t getOnDemand() const { DARABONBA_PTR_GET_DEFAULT(onDemand_, 0) };
        inline LiveRecordVodConfig& setOnDemand(int32_t onDemand) { DARABONBA_PTR_SET_VALUE(onDemand_, onDemand) };


        // recordContent Field Functions 
        bool hasRecordContent() const { return this->recordContent_ != nullptr;};
        void deleteRecordContent() { this->recordContent_ = nullptr;};
        inline string getRecordContent() const { DARABONBA_PTR_GET_DEFAULT(recordContent_, "") };
        inline LiveRecordVodConfig& setRecordContent(string recordContent) { DARABONBA_PTR_SET_VALUE(recordContent_, recordContent) };


        // recordFormatList Field Functions 
        bool hasRecordFormatList() const { return this->recordFormatList_ != nullptr;};
        void deleteRecordFormatList() { this->recordFormatList_ = nullptr;};
        inline const LiveRecordVodConfig::RecordFormatList & getRecordFormatList() const { DARABONBA_PTR_GET_CONST(recordFormatList_, LiveRecordVodConfig::RecordFormatList) };
        inline LiveRecordVodConfig::RecordFormatList getRecordFormatList() { DARABONBA_PTR_GET(recordFormatList_, LiveRecordVodConfig::RecordFormatList) };
        inline LiveRecordVodConfig& setRecordFormatList(const LiveRecordVodConfig::RecordFormatList & recordFormatList) { DARABONBA_PTR_SET_VALUE(recordFormatList_, recordFormatList) };
        inline LiveRecordVodConfig& setRecordFormatList(LiveRecordVodConfig::RecordFormatList && recordFormatList) { DARABONBA_PTR_SET_RVALUE(recordFormatList_, recordFormatList) };


        // spaceId Field Functions 
        bool hasSpaceId() const { return this->spaceId_ != nullptr;};
        void deleteSpaceId() { this->spaceId_ = nullptr;};
        inline string getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
        inline LiveRecordVodConfig& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


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


        // transcodeTemplates Field Functions 
        bool hasTranscodeTemplates() const { return this->transcodeTemplates_ != nullptr;};
        void deleteTranscodeTemplates() { this->transcodeTemplates_ = nullptr;};
        inline string getTranscodeTemplates() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplates_, "") };
        inline LiveRecordVodConfig& setTranscodeTemplates(string transcodeTemplates) { DARABONBA_PTR_SET_VALUE(transcodeTemplates_, transcodeTemplates) };


        // vodTranscodeGroupId Field Functions 
        bool hasVodTranscodeGroupId() const { return this->vodTranscodeGroupId_ != nullptr;};
        void deleteVodTranscodeGroupId() { this->vodTranscodeGroupId_ = nullptr;};
        inline string getVodTranscodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(vodTranscodeGroupId_, "") };
        inline LiveRecordVodConfig& setVodTranscodeGroupId(string vodTranscodeGroupId) { DARABONBA_PTR_SET_VALUE(vodTranscodeGroupId_, vodTranscodeGroupId) };


      protected:
        shared_ptr<string> appName_ {};
        shared_ptr<string> autoCompose_ {};
        shared_ptr<string> composeVodTranscodeGroupId_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<int32_t> cycleDuration_ {};
        shared_ptr<int32_t> delayTime_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<bool> formatConfig_ {};
        shared_ptr<int32_t> onDemand_ {};
        shared_ptr<string> recordContent_ {};
        shared_ptr<LiveRecordVodConfig::RecordFormatList> recordFormatList_ {};
        shared_ptr<string> spaceId_ {};
        shared_ptr<string> storageLocation_ {};
        shared_ptr<string> streamName_ {};
        shared_ptr<string> transcodeTemplates_ {};
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
