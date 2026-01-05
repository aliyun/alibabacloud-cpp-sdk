// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMONITORLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMONITORLISTRESPONSEBODY_HPP_
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
  class DescribeLiveStreamMonitorListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamMonitorListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamMonitorList, liveStreamMonitorList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamMonitorListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamMonitorList, liveStreamMonitorList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeLiveStreamMonitorListResponseBody() = default ;
    DescribeLiveStreamMonitorListResponseBody(const DescribeLiveStreamMonitorListResponseBody &) = default ;
    DescribeLiveStreamMonitorListResponseBody(DescribeLiveStreamMonitorListResponseBody &&) = default ;
    DescribeLiveStreamMonitorListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamMonitorListResponseBody() = default ;
    DescribeLiveStreamMonitorListResponseBody& operator=(const DescribeLiveStreamMonitorListResponseBody &) = default ;
    DescribeLiveStreamMonitorListResponseBody& operator=(DescribeLiveStreamMonitorListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveStreamMonitorList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveStreamMonitorList& obj) { 
        DARABONBA_PTR_TO_JSON(AudioFrom, audioFrom_);
        DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
        DARABONBA_PTR_TO_JSON(DingTalkWebHookUrl, dingTalkWebHookUrl_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(InputList, inputList_);
        DARABONBA_PTR_TO_JSON(MonitorConfig, monitorConfig_);
        DARABONBA_PTR_TO_JSON(MonitorId, monitorId_);
        DARABONBA_PTR_TO_JSON(MonitorName, monitorName_);
        DARABONBA_PTR_TO_JSON(OutputTemplate, outputTemplate_);
        DARABONBA_PTR_TO_JSON(OutputUrls, outputUrls_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
      };
      friend void from_json(const Darabonba::Json& j, LiveStreamMonitorList& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioFrom, audioFrom_);
        DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
        DARABONBA_PTR_FROM_JSON(DingTalkWebHookUrl, dingTalkWebHookUrl_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(InputList, inputList_);
        DARABONBA_PTR_FROM_JSON(MonitorConfig, monitorConfig_);
        DARABONBA_PTR_FROM_JSON(MonitorId, monitorId_);
        DARABONBA_PTR_FROM_JSON(MonitorName, monitorName_);
        DARABONBA_PTR_FROM_JSON(OutputTemplate, outputTemplate_);
        DARABONBA_PTR_FROM_JSON(OutputUrls, outputUrls_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
      };
      LiveStreamMonitorList() = default ;
      LiveStreamMonitorList(const LiveStreamMonitorList &) = default ;
      LiveStreamMonitorList(LiveStreamMonitorList &&) = default ;
      LiveStreamMonitorList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveStreamMonitorList() = default ;
      LiveStreamMonitorList& operator=(const LiveStreamMonitorList &) = default ;
      LiveStreamMonitorList& operator=(LiveStreamMonitorList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OutputUrls : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OutputUrls& obj) { 
          DARABONBA_PTR_TO_JSON(FlvUrl, flvUrl_);
          DARABONBA_PTR_TO_JSON(RtmpUrl, rtmpUrl_);
        };
        friend void from_json(const Darabonba::Json& j, OutputUrls& obj) { 
          DARABONBA_PTR_FROM_JSON(FlvUrl, flvUrl_);
          DARABONBA_PTR_FROM_JSON(RtmpUrl, rtmpUrl_);
        };
        OutputUrls() = default ;
        OutputUrls(const OutputUrls &) = default ;
        OutputUrls(OutputUrls &&) = default ;
        OutputUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OutputUrls() = default ;
        OutputUrls& operator=(const OutputUrls &) = default ;
        OutputUrls& operator=(OutputUrls &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->flvUrl_ == nullptr
        && this->rtmpUrl_ == nullptr; };
        // flvUrl Field Functions 
        bool hasFlvUrl() const { return this->flvUrl_ != nullptr;};
        void deleteFlvUrl() { this->flvUrl_ = nullptr;};
        inline string getFlvUrl() const { DARABONBA_PTR_GET_DEFAULT(flvUrl_, "") };
        inline OutputUrls& setFlvUrl(string flvUrl) { DARABONBA_PTR_SET_VALUE(flvUrl_, flvUrl) };


        // rtmpUrl Field Functions 
        bool hasRtmpUrl() const { return this->rtmpUrl_ != nullptr;};
        void deleteRtmpUrl() { this->rtmpUrl_ = nullptr;};
        inline string getRtmpUrl() const { DARABONBA_PTR_GET_DEFAULT(rtmpUrl_, "") };
        inline OutputUrls& setRtmpUrl(string rtmpUrl) { DARABONBA_PTR_SET_VALUE(rtmpUrl_, rtmpUrl) };


      protected:
        // The output URL in the Flash Video (FLV) format.
        shared_ptr<string> flvUrl_ {};
        // The output URL in the Real-Time Messaging Protocol (RTMP) format.
        shared_ptr<string> rtmpUrl_ {};
      };

      class InputList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InputList& obj) { 
          DARABONBA_PTR_TO_JSON(Index, index_);
          DARABONBA_PTR_TO_JSON(InputUrl, inputUrl_);
          DARABONBA_PTR_TO_JSON(LayoutConfig, layoutConfig_);
          DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
          DARABONBA_PTR_TO_JSON(PlayConfig, playConfig_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
        };
        friend void from_json(const Darabonba::Json& j, InputList& obj) { 
          DARABONBA_PTR_FROM_JSON(Index, index_);
          DARABONBA_PTR_FROM_JSON(InputUrl, inputUrl_);
          DARABONBA_PTR_FROM_JSON(LayoutConfig, layoutConfig_);
          DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
          DARABONBA_PTR_FROM_JSON(PlayConfig, playConfig_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
        };
        InputList() = default ;
        InputList(const InputList &) = default ;
        InputList(InputList &&) = default ;
        InputList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InputList() = default ;
        InputList& operator=(const InputList &) = default ;
        InputList& operator=(InputList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PlayConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PlayConfig& obj) { 
            DARABONBA_PTR_TO_JSON(VolumeRate, volumeRate_);
          };
          friend void from_json(const Darabonba::Json& j, PlayConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(VolumeRate, volumeRate_);
          };
          PlayConfig() = default ;
          PlayConfig(const PlayConfig &) = default ;
          PlayConfig(PlayConfig &&) = default ;
          PlayConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PlayConfig() = default ;
          PlayConfig& operator=(const PlayConfig &) = default ;
          PlayConfig& operator=(PlayConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->volumeRate_ == nullptr; };
          // volumeRate Field Functions 
          bool hasVolumeRate() const { return this->volumeRate_ != nullptr;};
          void deleteVolumeRate() { this->volumeRate_ = nullptr;};
          inline float getVolumeRate() const { DARABONBA_PTR_GET_DEFAULT(volumeRate_, 0.0) };
          inline PlayConfig& setVolumeRate(float volumeRate) { DARABONBA_PTR_SET_VALUE(volumeRate_, volumeRate) };


        protected:
          // The volume. Valid values: 0 to 1. The value is rounded to two decimal places.
          shared_ptr<float> volumeRate_ {};
        };

        class LayoutConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LayoutConfig& obj) { 
            DARABONBA_PTR_TO_JSON(FillMode, fillMode_);
            DARABONBA_PTR_TO_JSON(PositionNormalized, positionNormalized_);
            DARABONBA_PTR_TO_JSON(PositionRefer, positionRefer_);
            DARABONBA_PTR_TO_JSON(SizeNormalized, sizeNormalized_);
          };
          friend void from_json(const Darabonba::Json& j, LayoutConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(FillMode, fillMode_);
            DARABONBA_PTR_FROM_JSON(PositionNormalized, positionNormalized_);
            DARABONBA_PTR_FROM_JSON(PositionRefer, positionRefer_);
            DARABONBA_PTR_FROM_JSON(SizeNormalized, sizeNormalized_);
          };
          LayoutConfig() = default ;
          LayoutConfig(const LayoutConfig &) = default ;
          LayoutConfig(LayoutConfig &&) = default ;
          LayoutConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LayoutConfig() = default ;
          LayoutConfig& operator=(const LayoutConfig &) = default ;
          LayoutConfig& operator=(LayoutConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fillMode_ == nullptr
        && this->positionNormalized_ == nullptr && this->positionRefer_ == nullptr && this->sizeNormalized_ == nullptr; };
          // fillMode Field Functions 
          bool hasFillMode() const { return this->fillMode_ != nullptr;};
          void deleteFillMode() { this->fillMode_ = nullptr;};
          inline string getFillMode() const { DARABONBA_PTR_GET_DEFAULT(fillMode_, "") };
          inline LayoutConfig& setFillMode(string fillMode) { DARABONBA_PTR_SET_VALUE(fillMode_, fillMode) };


          // positionNormalized Field Functions 
          bool hasPositionNormalized() const { return this->positionNormalized_ != nullptr;};
          void deletePositionNormalized() { this->positionNormalized_ = nullptr;};
          inline const vector<float> & getPositionNormalized() const { DARABONBA_PTR_GET_CONST(positionNormalized_, vector<float>) };
          inline vector<float> getPositionNormalized() { DARABONBA_PTR_GET(positionNormalized_, vector<float>) };
          inline LayoutConfig& setPositionNormalized(const vector<float> & positionNormalized) { DARABONBA_PTR_SET_VALUE(positionNormalized_, positionNormalized) };
          inline LayoutConfig& setPositionNormalized(vector<float> && positionNormalized) { DARABONBA_PTR_SET_RVALUE(positionNormalized_, positionNormalized) };


          // positionRefer Field Functions 
          bool hasPositionRefer() const { return this->positionRefer_ != nullptr;};
          void deletePositionRefer() { this->positionRefer_ = nullptr;};
          inline string getPositionRefer() const { DARABONBA_PTR_GET_DEFAULT(positionRefer_, "") };
          inline LayoutConfig& setPositionRefer(string positionRefer) { DARABONBA_PTR_SET_VALUE(positionRefer_, positionRefer) };


          // sizeNormalized Field Functions 
          bool hasSizeNormalized() const { return this->sizeNormalized_ != nullptr;};
          void deleteSizeNormalized() { this->sizeNormalized_ = nullptr;};
          inline const vector<float> & getSizeNormalized() const { DARABONBA_PTR_GET_CONST(sizeNormalized_, vector<float>) };
          inline vector<float> getSizeNormalized() { DARABONBA_PTR_GET(sizeNormalized_, vector<float>) };
          inline LayoutConfig& setSizeNormalized(const vector<float> & sizeNormalized) { DARABONBA_PTR_SET_VALUE(sizeNormalized_, sizeNormalized) };
          inline LayoutConfig& setSizeNormalized(vector<float> && sizeNormalized) { DARABONBA_PTR_SET_RVALUE(sizeNormalized_, sizeNormalized) };


        protected:
          // The fill type. Set this value to none.
          shared_ptr<string> fillMode_ {};
          // The position of the layer, in the format of [unk][x,y][unk]. The values of x and y need to be normalized.
          shared_ptr<vector<float>> positionNormalized_ {};
          // The reference position of the element. Valid values:
          // 
          // *   topLeft
          // *   topRight
          // *   bottomLeft
          // *   bottomRight
          shared_ptr<string> positionRefer_ {};
          // The size of the layer. Unit: bytes.
          shared_ptr<vector<float>> sizeNormalized_ {};
        };

        virtual bool empty() const override { return this->index_ == nullptr
        && this->inputUrl_ == nullptr && this->layoutConfig_ == nullptr && this->layoutId_ == nullptr && this->playConfig_ == nullptr && this->streamName_ == nullptr; };
        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
        inline InputList& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // inputUrl Field Functions 
        bool hasInputUrl() const { return this->inputUrl_ != nullptr;};
        void deleteInputUrl() { this->inputUrl_ = nullptr;};
        inline string getInputUrl() const { DARABONBA_PTR_GET_DEFAULT(inputUrl_, "") };
        inline InputList& setInputUrl(string inputUrl) { DARABONBA_PTR_SET_VALUE(inputUrl_, inputUrl) };


        // layoutConfig Field Functions 
        bool hasLayoutConfig() const { return this->layoutConfig_ != nullptr;};
        void deleteLayoutConfig() { this->layoutConfig_ = nullptr;};
        inline const InputList::LayoutConfig & getLayoutConfig() const { DARABONBA_PTR_GET_CONST(layoutConfig_, InputList::LayoutConfig) };
        inline InputList::LayoutConfig getLayoutConfig() { DARABONBA_PTR_GET(layoutConfig_, InputList::LayoutConfig) };
        inline InputList& setLayoutConfig(const InputList::LayoutConfig & layoutConfig) { DARABONBA_PTR_SET_VALUE(layoutConfig_, layoutConfig) };
        inline InputList& setLayoutConfig(InputList::LayoutConfig && layoutConfig) { DARABONBA_PTR_SET_RVALUE(layoutConfig_, layoutConfig) };


        // layoutId Field Functions 
        bool hasLayoutId() const { return this->layoutId_ != nullptr;};
        void deleteLayoutId() { this->layoutId_ = nullptr;};
        inline int32_t getLayoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, 0) };
        inline InputList& setLayoutId(int32_t layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


        // playConfig Field Functions 
        bool hasPlayConfig() const { return this->playConfig_ != nullptr;};
        void deletePlayConfig() { this->playConfig_ = nullptr;};
        inline const InputList::PlayConfig & getPlayConfig() const { DARABONBA_PTR_GET_CONST(playConfig_, InputList::PlayConfig) };
        inline InputList::PlayConfig getPlayConfig() { DARABONBA_PTR_GET(playConfig_, InputList::PlayConfig) };
        inline InputList& setPlayConfig(const InputList::PlayConfig & playConfig) { DARABONBA_PTR_SET_VALUE(playConfig_, playConfig) };
        inline InputList& setPlayConfig(InputList::PlayConfig && playConfig) { DARABONBA_PTR_SET_RVALUE(playConfig_, playConfig) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline InputList& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


      protected:
        // The index.
        shared_ptr<int32_t> index_ {};
        // The URL of the input stream.
        shared_ptr<string> inputUrl_ {};
        // The layout information.
        shared_ptr<InputList::LayoutConfig> layoutConfig_ {};
        // The layout ID, which must start from 1.
        shared_ptr<int32_t> layoutId_ {};
        // The playback configurations.
        shared_ptr<InputList::PlayConfig> playConfig_ {};
        // The display name of the monitored stream.
        shared_ptr<string> streamName_ {};
      };

      virtual bool empty() const override { return this->audioFrom_ == nullptr
        && this->callbackUrl_ == nullptr && this->dingTalkWebHookUrl_ == nullptr && this->domain_ == nullptr && this->inputList_ == nullptr && this->monitorConfig_ == nullptr
        && this->monitorId_ == nullptr && this->monitorName_ == nullptr && this->outputTemplate_ == nullptr && this->outputUrls_ == nullptr && this->region_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->stopTime_ == nullptr; };
      // audioFrom Field Functions 
      bool hasAudioFrom() const { return this->audioFrom_ != nullptr;};
      void deleteAudioFrom() { this->audioFrom_ = nullptr;};
      inline int32_t getAudioFrom() const { DARABONBA_PTR_GET_DEFAULT(audioFrom_, 0) };
      inline LiveStreamMonitorList& setAudioFrom(int32_t audioFrom) { DARABONBA_PTR_SET_VALUE(audioFrom_, audioFrom) };


      // callbackUrl Field Functions 
      bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
      void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
      inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
      inline LiveStreamMonitorList& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


      // dingTalkWebHookUrl Field Functions 
      bool hasDingTalkWebHookUrl() const { return this->dingTalkWebHookUrl_ != nullptr;};
      void deleteDingTalkWebHookUrl() { this->dingTalkWebHookUrl_ = nullptr;};
      inline string getDingTalkWebHookUrl() const { DARABONBA_PTR_GET_DEFAULT(dingTalkWebHookUrl_, "") };
      inline LiveStreamMonitorList& setDingTalkWebHookUrl(string dingTalkWebHookUrl) { DARABONBA_PTR_SET_VALUE(dingTalkWebHookUrl_, dingTalkWebHookUrl) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline LiveStreamMonitorList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // inputList Field Functions 
      bool hasInputList() const { return this->inputList_ != nullptr;};
      void deleteInputList() { this->inputList_ = nullptr;};
      inline const vector<LiveStreamMonitorList::InputList> & getInputList() const { DARABONBA_PTR_GET_CONST(inputList_, vector<LiveStreamMonitorList::InputList>) };
      inline vector<LiveStreamMonitorList::InputList> getInputList() { DARABONBA_PTR_GET(inputList_, vector<LiveStreamMonitorList::InputList>) };
      inline LiveStreamMonitorList& setInputList(const vector<LiveStreamMonitorList::InputList> & inputList) { DARABONBA_PTR_SET_VALUE(inputList_, inputList) };
      inline LiveStreamMonitorList& setInputList(vector<LiveStreamMonitorList::InputList> && inputList) { DARABONBA_PTR_SET_RVALUE(inputList_, inputList) };


      // monitorConfig Field Functions 
      bool hasMonitorConfig() const { return this->monitorConfig_ != nullptr;};
      void deleteMonitorConfig() { this->monitorConfig_ = nullptr;};
      inline string getMonitorConfig() const { DARABONBA_PTR_GET_DEFAULT(monitorConfig_, "") };
      inline LiveStreamMonitorList& setMonitorConfig(string monitorConfig) { DARABONBA_PTR_SET_VALUE(monitorConfig_, monitorConfig) };


      // monitorId Field Functions 
      bool hasMonitorId() const { return this->monitorId_ != nullptr;};
      void deleteMonitorId() { this->monitorId_ = nullptr;};
      inline string getMonitorId() const { DARABONBA_PTR_GET_DEFAULT(monitorId_, "") };
      inline LiveStreamMonitorList& setMonitorId(string monitorId) { DARABONBA_PTR_SET_VALUE(monitorId_, monitorId) };


      // monitorName Field Functions 
      bool hasMonitorName() const { return this->monitorName_ != nullptr;};
      void deleteMonitorName() { this->monitorName_ = nullptr;};
      inline string getMonitorName() const { DARABONBA_PTR_GET_DEFAULT(monitorName_, "") };
      inline LiveStreamMonitorList& setMonitorName(string monitorName) { DARABONBA_PTR_SET_VALUE(monitorName_, monitorName) };


      // outputTemplate Field Functions 
      bool hasOutputTemplate() const { return this->outputTemplate_ != nullptr;};
      void deleteOutputTemplate() { this->outputTemplate_ = nullptr;};
      inline string getOutputTemplate() const { DARABONBA_PTR_GET_DEFAULT(outputTemplate_, "") };
      inline LiveStreamMonitorList& setOutputTemplate(string outputTemplate) { DARABONBA_PTR_SET_VALUE(outputTemplate_, outputTemplate) };


      // outputUrls Field Functions 
      bool hasOutputUrls() const { return this->outputUrls_ != nullptr;};
      void deleteOutputUrls() { this->outputUrls_ = nullptr;};
      inline const LiveStreamMonitorList::OutputUrls & getOutputUrls() const { DARABONBA_PTR_GET_CONST(outputUrls_, LiveStreamMonitorList::OutputUrls) };
      inline LiveStreamMonitorList::OutputUrls getOutputUrls() { DARABONBA_PTR_GET(outputUrls_, LiveStreamMonitorList::OutputUrls) };
      inline LiveStreamMonitorList& setOutputUrls(const LiveStreamMonitorList::OutputUrls & outputUrls) { DARABONBA_PTR_SET_VALUE(outputUrls_, outputUrls) };
      inline LiveStreamMonitorList& setOutputUrls(LiveStreamMonitorList::OutputUrls && outputUrls) { DARABONBA_PTR_SET_RVALUE(outputUrls_, outputUrls) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline LiveStreamMonitorList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline LiveStreamMonitorList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline LiveStreamMonitorList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // stopTime Field Functions 
      bool hasStopTime() const { return this->stopTime_ != nullptr;};
      void deleteStopTime() { this->stopTime_ = nullptr;};
      inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
      inline LiveStreamMonitorList& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


    protected:
      // The audio source in the layout.
      shared_ptr<int32_t> audioFrom_ {};
      // The callback URL that sends monitoring alerts.
      shared_ptr<string> callbackUrl_ {};
      // The URL of the DingTalk chatbot.
      shared_ptr<string> dingTalkWebHookUrl_ {};
      // The domain name.
      shared_ptr<string> domain_ {};
      // The list of monitored input streams.
      shared_ptr<vector<LiveStreamMonitorList::InputList>> inputList_ {};
      // The monitoring alert thresholds. The following fields are included:
      // 
      // *   fpsLowThres: the video frame rate alert threshold. The value is a floating-point number.
      // *   brHighThres: the audio/video bitrate alert threshold. The value is a floating-point number.
      // *   eofDurationThresSec: the interruption duration alert threshold. The value is a floating-point number.
      shared_ptr<string> monitorConfig_ {};
      // The ID of the monitoring session.
      shared_ptr<string> monitorId_ {};
      // The name of the monitoring session.
      shared_ptr<string> monitorName_ {};
      // The output resolution template. Valid values:
      // 
      // *   **lp_ld**: low definition
      // *   **lp_sd**: standard definition
      // *   **lp_hd**: high definition
      // *   **lp_ud**: ultra-high definition
      shared_ptr<string> outputTemplate_ {};
      // The output URLs.
      shared_ptr<LiveStreamMonitorList::OutputUrls> outputUrls_ {};
      // The ID of the region. Valid values:
      // 
      // *   cn-shanghai: China (Shanghai)
      // *   cn-beijing: China (Beijing)
      // *   ap-southeast-1: Singapore
      shared_ptr<string> region_ {};
      // The start time of live monitoring. The time is displayed in UTC.
      shared_ptr<string> startTime_ {};
      // The status of the monitoring session. Valid values:
      // 
      // *   1: Monitoring
      // *   0: Unmonitored
      shared_ptr<int32_t> status_ {};
      // The end time of live monitoring. The time is displayed in UTC.
      shared_ptr<string> stopTime_ {};
    };

    virtual bool empty() const override { return this->liveStreamMonitorList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // liveStreamMonitorList Field Functions 
    bool hasLiveStreamMonitorList() const { return this->liveStreamMonitorList_ != nullptr;};
    void deleteLiveStreamMonitorList() { this->liveStreamMonitorList_ = nullptr;};
    inline const vector<DescribeLiveStreamMonitorListResponseBody::LiveStreamMonitorList> & getLiveStreamMonitorList() const { DARABONBA_PTR_GET_CONST(liveStreamMonitorList_, vector<DescribeLiveStreamMonitorListResponseBody::LiveStreamMonitorList>) };
    inline vector<DescribeLiveStreamMonitorListResponseBody::LiveStreamMonitorList> getLiveStreamMonitorList() { DARABONBA_PTR_GET(liveStreamMonitorList_, vector<DescribeLiveStreamMonitorListResponseBody::LiveStreamMonitorList>) };
    inline DescribeLiveStreamMonitorListResponseBody& setLiveStreamMonitorList(const vector<DescribeLiveStreamMonitorListResponseBody::LiveStreamMonitorList> & liveStreamMonitorList) { DARABONBA_PTR_SET_VALUE(liveStreamMonitorList_, liveStreamMonitorList) };
    inline DescribeLiveStreamMonitorListResponseBody& setLiveStreamMonitorList(vector<DescribeLiveStreamMonitorListResponseBody::LiveStreamMonitorList> && liveStreamMonitorList) { DARABONBA_PTR_SET_RVALUE(liveStreamMonitorList_, liveStreamMonitorList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamMonitorListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeLiveStreamMonitorListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The list of monitoring sessions.
    shared_ptr<vector<DescribeLiveStreamMonitorListResponseBody::LiveStreamMonitorList>> liveStreamMonitorList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of monitoring sessions.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
