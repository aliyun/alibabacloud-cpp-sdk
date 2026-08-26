// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEAPPRECORDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEAPPRECORDCONFIGREQUEST_HPP_
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
  class UpdateLiveAppRecordConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveAppRecordConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OnDemand, onDemand_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RecordFormat, recordFormat_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(TranscodeRecordFormat, transcodeRecordFormat_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplates, transcodeTemplates_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveAppRecordConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OnDemand, onDemand_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormat_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(TranscodeRecordFormat, transcodeRecordFormat_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplates, transcodeTemplates_);
    };
    UpdateLiveAppRecordConfigRequest() = default ;
    UpdateLiveAppRecordConfigRequest(const UpdateLiveAppRecordConfigRequest &) = default ;
    UpdateLiveAppRecordConfigRequest(UpdateLiveAppRecordConfigRequest &&) = default ;
    UpdateLiveAppRecordConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveAppRecordConfigRequest() = default ;
    UpdateLiveAppRecordConfigRequest& operator=(const UpdateLiveAppRecordConfigRequest &) = default ;
    UpdateLiveAppRecordConfigRequest& operator=(UpdateLiveAppRecordConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TranscodeRecordFormat : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeRecordFormat& obj) { 
        DARABONBA_PTR_TO_JSON(CycleDuration, cycleDuration_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(SliceDuration, sliceDuration_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeRecordFormat& obj) { 
        DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(SliceDuration, sliceDuration_);
      };
      TranscodeRecordFormat() = default ;
      TranscodeRecordFormat(const TranscodeRecordFormat &) = default ;
      TranscodeRecordFormat(TranscodeRecordFormat &&) = default ;
      TranscodeRecordFormat(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscodeRecordFormat() = default ;
      TranscodeRecordFormat& operator=(const TranscodeRecordFormat &) = default ;
      TranscodeRecordFormat& operator=(TranscodeRecordFormat &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cycleDuration_ == nullptr
        && this->format_ == nullptr && this->sliceDuration_ == nullptr; };
      // cycleDuration Field Functions 
      bool hasCycleDuration() const { return this->cycleDuration_ != nullptr;};
      void deleteCycleDuration() { this->cycleDuration_ = nullptr;};
      inline int32_t getCycleDuration() const { DARABONBA_PTR_GET_DEFAULT(cycleDuration_, 0) };
      inline TranscodeRecordFormat& setCycleDuration(int32_t cycleDuration) { DARABONBA_PTR_SET_VALUE(cycleDuration_, cycleDuration) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline TranscodeRecordFormat& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // sliceDuration Field Functions 
      bool hasSliceDuration() const { return this->sliceDuration_ != nullptr;};
      void deleteSliceDuration() { this->sliceDuration_ = nullptr;};
      inline int32_t getSliceDuration() const { DARABONBA_PTR_GET_DEFAULT(sliceDuration_, 0) };
      inline TranscodeRecordFormat& setSliceDuration(int32_t sliceDuration) { DARABONBA_PTR_SET_VALUE(sliceDuration_, sliceDuration) };


    protected:
      // The transcoded stream recording cycle. Unit: seconds. If you do not specify this parameter, the default value 6 hours is used.
      shared_ptr<int32_t> cycleDuration_ {};
      // The format of the transcoded stream recording. Valid values:
      // 
      // > If you choose m3u8 or cmaf, you must specify the TranscodeRecordFormat.N.SliceOssObjectPrefix and TranscodeRecordFormat.N.SliceDuration parameters.
      // 
      // - m3u8
      // 
      // - flv
      // 
      // - mp4
      // 
      // - cmaf
      shared_ptr<string> format_ {};
      // The duration of a single segment for transcoded stream recording. Unit: seconds.
      // 
      // > This parameter takes effect only if you set the TranscodeRecordFormat.N.Format parameter to m3u8 or cmaf.
      // 
      // If you do not specify this parameter, the default value 30 seconds is used. Valid values: 5 to 30.
      shared_ptr<int32_t> sliceDuration_ {};
    };

    class RecordFormat : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordFormat& obj) { 
        DARABONBA_PTR_TO_JSON(CycleDuration, cycleDuration_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(SliceDuration, sliceDuration_);
      };
      friend void from_json(const Darabonba::Json& j, RecordFormat& obj) { 
        DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(SliceDuration, sliceDuration_);
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
      virtual bool empty() const override { return this->cycleDuration_ == nullptr
        && this->format_ == nullptr && this->sliceDuration_ == nullptr; };
      // cycleDuration Field Functions 
      bool hasCycleDuration() const { return this->cycleDuration_ != nullptr;};
      void deleteCycleDuration() { this->cycleDuration_ = nullptr;};
      inline int32_t getCycleDuration() const { DARABONBA_PTR_GET_DEFAULT(cycleDuration_, 0) };
      inline RecordFormat& setCycleDuration(int32_t cycleDuration) { DARABONBA_PTR_SET_VALUE(cycleDuration_, cycleDuration) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline RecordFormat& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // sliceDuration Field Functions 
      bool hasSliceDuration() const { return this->sliceDuration_ != nullptr;};
      void deleteSliceDuration() { this->sliceDuration_ = nullptr;};
      inline int32_t getSliceDuration() const { DARABONBA_PTR_GET_DEFAULT(sliceDuration_, 0) };
      inline RecordFormat& setSliceDuration(int32_t sliceDuration) { DARABONBA_PTR_SET_VALUE(sliceDuration_, sliceDuration) };


    protected:
      // The duration of a single recording cycle in seconds. If not specified, the default value is 6 hours
      // 
      // > If a live stream is interrupted during a recording cycle but resumes normal streaming within the merge window, recording will continue in the same file. A recording file is generated only when a live stream is interrupted for longer than the merge window.
      shared_ptr<int32_t> cycleDuration_ {};
      // The recording format. Valid values:
      // 
      // >Notice: 
      // 
      // If you choose m3u8 or cmaf, you must also set SliceOssObjectPrefix and SliceDuration. At least one of RecordFormat or TranscodeRecordFormat must be specified.
      // 
      // 
      // 
      // - m3u8
      // 
      // - flv
      // 
      // - mp4
      // 
      // - cmaf
      shared_ptr<string> format_ {};
      // The duration of a single segment. Unit: seconds
      // 
      // > This parameter takes effect only if you set the RecordFormat.N.Format parameter to m3u8 or cmaf.
      // 
      // If you do not specify this parameter, the default value 30 seconds is used. Valid values: 5 to 30.
      shared_ptr<int32_t> sliceDuration_ {};
    };

    virtual bool empty() const override { return this->appName_ == nullptr
        && this->delayTime_ == nullptr && this->domainName_ == nullptr && this->endTime_ == nullptr && this->onDemand_ == nullptr && this->ossEndpoint_ == nullptr
        && this->ownerId_ == nullptr && this->recordFormat_ == nullptr && this->securityToken_ == nullptr && this->startTime_ == nullptr && this->streamName_ == nullptr
        && this->transcodeRecordFormat_ == nullptr && this->transcodeTemplates_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateLiveAppRecordConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int32_t getDelayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
    inline UpdateLiveAppRecordConfigRequest& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateLiveAppRecordConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateLiveAppRecordConfigRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // onDemand Field Functions 
    bool hasOnDemand() const { return this->onDemand_ != nullptr;};
    void deleteOnDemand() { this->onDemand_ = nullptr;};
    inline int32_t getOnDemand() const { DARABONBA_PTR_GET_DEFAULT(onDemand_, 0) };
    inline UpdateLiveAppRecordConfigRequest& setOnDemand(int32_t onDemand) { DARABONBA_PTR_SET_VALUE(onDemand_, onDemand) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline UpdateLiveAppRecordConfigRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLiveAppRecordConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // recordFormat Field Functions 
    bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
    void deleteRecordFormat() { this->recordFormat_ = nullptr;};
    inline const vector<UpdateLiveAppRecordConfigRequest::RecordFormat> & getRecordFormat() const { DARABONBA_PTR_GET_CONST(recordFormat_, vector<UpdateLiveAppRecordConfigRequest::RecordFormat>) };
    inline vector<UpdateLiveAppRecordConfigRequest::RecordFormat> getRecordFormat() { DARABONBA_PTR_GET(recordFormat_, vector<UpdateLiveAppRecordConfigRequest::RecordFormat>) };
    inline UpdateLiveAppRecordConfigRequest& setRecordFormat(const vector<UpdateLiveAppRecordConfigRequest::RecordFormat> & recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };
    inline UpdateLiveAppRecordConfigRequest& setRecordFormat(vector<UpdateLiveAppRecordConfigRequest::RecordFormat> && recordFormat) { DARABONBA_PTR_SET_RVALUE(recordFormat_, recordFormat) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline UpdateLiveAppRecordConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateLiveAppRecordConfigRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline UpdateLiveAppRecordConfigRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // transcodeRecordFormat Field Functions 
    bool hasTranscodeRecordFormat() const { return this->transcodeRecordFormat_ != nullptr;};
    void deleteTranscodeRecordFormat() { this->transcodeRecordFormat_ = nullptr;};
    inline const vector<UpdateLiveAppRecordConfigRequest::TranscodeRecordFormat> & getTranscodeRecordFormat() const { DARABONBA_PTR_GET_CONST(transcodeRecordFormat_, vector<UpdateLiveAppRecordConfigRequest::TranscodeRecordFormat>) };
    inline vector<UpdateLiveAppRecordConfigRequest::TranscodeRecordFormat> getTranscodeRecordFormat() { DARABONBA_PTR_GET(transcodeRecordFormat_, vector<UpdateLiveAppRecordConfigRequest::TranscodeRecordFormat>) };
    inline UpdateLiveAppRecordConfigRequest& setTranscodeRecordFormat(const vector<UpdateLiveAppRecordConfigRequest::TranscodeRecordFormat> & transcodeRecordFormat) { DARABONBA_PTR_SET_VALUE(transcodeRecordFormat_, transcodeRecordFormat) };
    inline UpdateLiveAppRecordConfigRequest& setTranscodeRecordFormat(vector<UpdateLiveAppRecordConfigRequest::TranscodeRecordFormat> && transcodeRecordFormat) { DARABONBA_PTR_SET_RVALUE(transcodeRecordFormat_, transcodeRecordFormat) };


    // transcodeTemplates Field Functions 
    bool hasTranscodeTemplates() const { return this->transcodeTemplates_ != nullptr;};
    void deleteTranscodeTemplates() { this->transcodeTemplates_ = nullptr;};
    inline const vector<string> & getTranscodeTemplates() const { DARABONBA_PTR_GET_CONST(transcodeTemplates_, vector<string>) };
    inline vector<string> getTranscodeTemplates() { DARABONBA_PTR_GET(transcodeTemplates_, vector<string>) };
    inline UpdateLiveAppRecordConfigRequest& setTranscodeTemplates(const vector<string> & transcodeTemplates) { DARABONBA_PTR_SET_VALUE(transcodeTemplates_, transcodeTemplates) };
    inline UpdateLiveAppRecordConfigRequest& setTranscodeTemplates(vector<string> && transcodeTemplates) { DARABONBA_PTR_SET_RVALUE(transcodeTemplates_, transcodeTemplates) };


  protected:
    // The AppName of the live stream.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The window in seconds for merging fragmented recording after an interruption. If a stream disconnects and reconnects within this window, the recording will continue in the same file. Valid values: 15 to 21600.
    shared_ptr<int32_t> delayTime_ {};
    // The main streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The recording end time. Format: *yyyy-MM-dd*T*HH:mm:ss*Z (UTC time).
    // 
    // > This parameter is only effective for stream-level recordings. The interval between EndTime and StartTime cannot exceed 7 days.
    shared_ptr<string> endTime_ {};
    // Specifies the recording mode. Valid values:
    // 
    // - **0**: disables on-demand recording.
    // 
    // - **1**: On-demand recording via HTTP callback.
    // 
    // - **2**: On-demand recording by parsing parameters in the ingest URL.
    // 
    // - **7**: Manual recording. You can call the [RealTimeRecordCommand](https://help.aliyun.com/document_detail/2847882.html) API to manually start or stop recording.
    // 
    // > If you set OnDemand to **1**, you need to call the [AddLiveRecordNotifyConfig](https://help.aliyun.com/document_detail/2847891.html) API to configure the OnDemandUrl parameter. Otherwise, ApsaraVideo Live does not perform on-demand recording.
    shared_ptr<int32_t> onDemand_ {};
    // The endpoint for OSS storage. You must create an OSS bucket before using this feature. See [Configure OSS](https://help.aliyun.com/document_detail/84932.html).
    // 
    // This parameter is required.
    shared_ptr<string> ossEndpoint_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The recording details.
    shared_ptr<vector<UpdateLiveAppRecordConfigRequest::RecordFormat>> recordFormat_ {};
    shared_ptr<string> securityToken_ {};
    // The recording start time. Format: *yyyy-MM-dd*T*HH:mm:ss*Z (UTC time).
    // 
    // > This parameter is only effective for stream-level recordings (i.e., when `StreamName` is specified). The time must be within 7 days of the actual stream start time.
    shared_ptr<string> startTime_ {};
    // The name of the live stream.
    shared_ptr<string> streamName_ {};
    // The transcoded stream recording configuration.
    shared_ptr<vector<UpdateLiveAppRecordConfigRequest::TranscodeRecordFormat>> transcodeRecordFormat_ {};
    // The transcoding template group details.
    shared_ptr<vector<string>> transcodeTemplates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
