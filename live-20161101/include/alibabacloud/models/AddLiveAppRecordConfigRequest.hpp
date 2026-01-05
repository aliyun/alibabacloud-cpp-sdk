// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVEAPPRECORDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVEAPPRECORDCONFIGREQUEST_HPP_
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
  class AddLiveAppRecordConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLiveAppRecordConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OnDemand, onDemand_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RecordFormat, recordFormat_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(TranscodeRecordFormat, transcodeRecordFormat_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplates, transcodeTemplates_);
    };
    friend void from_json(const Darabonba::Json& j, AddLiveAppRecordConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OnDemand, onDemand_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormat_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(TranscodeRecordFormat, transcodeRecordFormat_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplates, transcodeTemplates_);
    };
    AddLiveAppRecordConfigRequest() = default ;
    AddLiveAppRecordConfigRequest(const AddLiveAppRecordConfigRequest &) = default ;
    AddLiveAppRecordConfigRequest(AddLiveAppRecordConfigRequest &&) = default ;
    AddLiveAppRecordConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLiveAppRecordConfigRequest() = default ;
    AddLiveAppRecordConfigRequest& operator=(const AddLiveAppRecordConfigRequest &) = default ;
    AddLiveAppRecordConfigRequest& operator=(AddLiveAppRecordConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TranscodeRecordFormat : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeRecordFormat& obj) { 
        DARABONBA_PTR_TO_JSON(CycleDuration, cycleDuration_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(OssObjectPrefix, ossObjectPrefix_);
        DARABONBA_PTR_TO_JSON(SliceDuration, sliceDuration_);
        DARABONBA_PTR_TO_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeRecordFormat& obj) { 
        DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(OssObjectPrefix, ossObjectPrefix_);
        DARABONBA_PTR_FROM_JSON(SliceDuration, sliceDuration_);
        DARABONBA_PTR_FROM_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
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
        && this->format_ == nullptr && this->ossObjectPrefix_ == nullptr && this->sliceDuration_ == nullptr && this->sliceOssObjectPrefix_ == nullptr; };
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


      // ossObjectPrefix Field Functions 
      bool hasOssObjectPrefix() const { return this->ossObjectPrefix_ != nullptr;};
      void deleteOssObjectPrefix() { this->ossObjectPrefix_ = nullptr;};
      inline string getOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossObjectPrefix_, "") };
      inline TranscodeRecordFormat& setOssObjectPrefix(string ossObjectPrefix) { DARABONBA_PTR_SET_VALUE(ossObjectPrefix_, ossObjectPrefix) };


      // sliceDuration Field Functions 
      bool hasSliceDuration() const { return this->sliceDuration_ != nullptr;};
      void deleteSliceDuration() { this->sliceDuration_ = nullptr;};
      inline int32_t getSliceDuration() const { DARABONBA_PTR_GET_DEFAULT(sliceDuration_, 0) };
      inline TranscodeRecordFormat& setSliceDuration(int32_t sliceDuration) { DARABONBA_PTR_SET_VALUE(sliceDuration_, sliceDuration) };


      // sliceOssObjectPrefix Field Functions 
      bool hasSliceOssObjectPrefix() const { return this->sliceOssObjectPrefix_ != nullptr;};
      void deleteSliceOssObjectPrefix() { this->sliceOssObjectPrefix_ = nullptr;};
      inline string getSliceOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(sliceOssObjectPrefix_, "") };
      inline TranscodeRecordFormat& setSliceOssObjectPrefix(string sliceOssObjectPrefix) { DARABONBA_PTR_SET_VALUE(sliceOssObjectPrefix_, sliceOssObjectPrefix) };


    protected:
      // The transcoded stream recording cycle. Unit: seconds. If you do not specify this parameter, the default value 6 hours is used.
      shared_ptr<int32_t> cycleDuration_ {};
      // The transcoded stream recording format. Supported formats include M3U8, FLV, MP4, and CMAF. Valid values:
      // 
      // >  If you set this parameter to m3u8 or cmaf, you must also specify the TranscodeRecordFormat.N.SliceOssObjectPrefix and TranscodeRecordFormat.N.SliceDuration parameters.
      // 
      // *   m3u8
      // *   flv
      // *   mp4
      // *   cmaf
      shared_ptr<string> format_ {};
      // The naming format of a transcoded stream recording to store in OSS.
      // 
      // *   The name must be less than 256 bytes in length and can contain the {AppName}, {StreamName}, {Sequence}, {StartTime}, {EndTime}, {EscapedStartTime}, and {EscapedEndTime} variables.
      // *   The name must contain the {StartTime} and {EndTime} variables or the {EscapedStartTime} and {EscapedEndTime} variables.
      shared_ptr<string> ossObjectPrefix_ {};
      // The duration of a single segment in a transcoded stream recording. Unit: seconds.
      // 
      // >  This parameter takes effect only if you set the TranscodeRecordFormat.N.Format parameter to m3u8 or cmaf.
      // 
      // If you do not specify this parameter, the default value 30 seconds is used. Valid values: 5 to 30.
      shared_ptr<int32_t> sliceDuration_ {};
      // The naming format of a segment in a transcoded stream recording.
      // 
      // >  This parameter is required only if you set the TranscodeRecordFormat.N.Format parameter to m3u8 or cmaf.
      // 
      // *   By default, the duration of a segment is 30 seconds. The segment name must be less than 256 bytes in length and can contain the {AppName}, {StreamName}, {UnixTimestamp}, and {Sequence} variables.
      // *   The segment name must contain the {UnixTimestamp} and {Sequence} variables.
      shared_ptr<string> sliceOssObjectPrefix_ {};
    };

    class RecordFormat : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordFormat& obj) { 
        DARABONBA_PTR_TO_JSON(CycleDuration, cycleDuration_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(OssObjectPrefix, ossObjectPrefix_);
        DARABONBA_PTR_TO_JSON(SliceDuration, sliceDuration_);
        DARABONBA_PTR_TO_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
      };
      friend void from_json(const Darabonba::Json& j, RecordFormat& obj) { 
        DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(OssObjectPrefix, ossObjectPrefix_);
        DARABONBA_PTR_FROM_JSON(SliceDuration, sliceDuration_);
        DARABONBA_PTR_FROM_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
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
        && this->format_ == nullptr && this->ossObjectPrefix_ == nullptr && this->sliceDuration_ == nullptr && this->sliceOssObjectPrefix_ == nullptr; };
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


      // ossObjectPrefix Field Functions 
      bool hasOssObjectPrefix() const { return this->ossObjectPrefix_ != nullptr;};
      void deleteOssObjectPrefix() { this->ossObjectPrefix_ = nullptr;};
      inline string getOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossObjectPrefix_, "") };
      inline RecordFormat& setOssObjectPrefix(string ossObjectPrefix) { DARABONBA_PTR_SET_VALUE(ossObjectPrefix_, ossObjectPrefix) };


      // sliceDuration Field Functions 
      bool hasSliceDuration() const { return this->sliceDuration_ != nullptr;};
      void deleteSliceDuration() { this->sliceDuration_ = nullptr;};
      inline int32_t getSliceDuration() const { DARABONBA_PTR_GET_DEFAULT(sliceDuration_, 0) };
      inline RecordFormat& setSliceDuration(int32_t sliceDuration) { DARABONBA_PTR_SET_VALUE(sliceDuration_, sliceDuration) };


      // sliceOssObjectPrefix Field Functions 
      bool hasSliceOssObjectPrefix() const { return this->sliceOssObjectPrefix_ != nullptr;};
      void deleteSliceOssObjectPrefix() { this->sliceOssObjectPrefix_ = nullptr;};
      inline string getSliceOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(sliceOssObjectPrefix_, "") };
      inline RecordFormat& setSliceOssObjectPrefix(string sliceOssObjectPrefix) { DARABONBA_PTR_SET_VALUE(sliceOssObjectPrefix_, sliceOssObjectPrefix) };


    protected:
      // The recording cycle. Unit: seconds. If you do not specify this parameter, the default value 6 hours is used.
      // 
      // > 
      // 
      // *   If a live stream is interrupted during a recording cycle but is resumed within the interruption duration threshold, the stream is recorded in the same recording before and after the interruption.
      // 
      // *   If a live stream is interrupted for longer than the interruption duration threshold, a new recording is generated.
      shared_ptr<int32_t> cycleDuration_ {};
      // The recording format. Supported formats include M3U8, FLV, MP4, and CMAF. Valid values:
      // 
      // >  You need to specify at lease one of the RecordFormat and TranscodeRecordFormat parameters. If you set this parameter to m3u8 or cmaf, you must also specify the RecordFormat.N.SliceOssObjectPrefix and RecordFormat.N.SliceDuration parameters.
      // 
      // *   m3u8
      // *   flv
      // *   mp4
      // *   cmaf
      shared_ptr<string> format_ {};
      // The naming format of a recording to store in OSS.
      // 
      // *   The name must be less than 256 bytes in length and can contain the {AppName}, {StreamName}, {Sequence}, {StartTime}, {EndTime}, {EscapedStartTime}, and {EscapedEndTime} variables.
      // *   The name must contain the {StartTime} and {EndTime} variables or the {EscapedStartTime} and {EscapedEndTime} variables.
      shared_ptr<string> ossObjectPrefix_ {};
      // The duration of a single segment. Unit: seconds.
      // 
      // >  This parameter takes effect only if you set the RecordFormat.N.Format parameter to m3u8 or cmaf.
      // 
      // If you do not specify this parameter, the default value 30 seconds is used. Valid values: 5 to 30.
      shared_ptr<int32_t> sliceDuration_ {};
      // The naming format of a segment.
      // 
      // >  This parameter is required only if you set the RecordFormat.N.Format parameter to m3u8 or cmaf.
      // 
      // *   By default, the duration of a segment is 30 seconds. The segment name must be less than 256 bytes in length and can contain the {AppName}, {StreamName}, {UnixTimestamp}, and {Sequence} variables.
      // *   The segment name must contain the {UnixTimestamp} and {Sequence} variables.
      shared_ptr<string> sliceOssObjectPrefix_ {};
    };

    virtual bool empty() const override { return this->appName_ == nullptr
        && this->delayTime_ == nullptr && this->domainName_ == nullptr && this->endTime_ == nullptr && this->onDemand_ == nullptr && this->ossBucket_ == nullptr
        && this->ossEndpoint_ == nullptr && this->ownerId_ == nullptr && this->recordFormat_ == nullptr && this->securityToken_ == nullptr && this->startTime_ == nullptr
        && this->streamName_ == nullptr && this->transcodeRecordFormat_ == nullptr && this->transcodeTemplates_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline AddLiveAppRecordConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int32_t getDelayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
    inline AddLiveAppRecordConfigRequest& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddLiveAppRecordConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline AddLiveAppRecordConfigRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // onDemand Field Functions 
    bool hasOnDemand() const { return this->onDemand_ != nullptr;};
    void deleteOnDemand() { this->onDemand_ = nullptr;};
    inline int32_t getOnDemand() const { DARABONBA_PTR_GET_DEFAULT(onDemand_, 0) };
    inline AddLiveAppRecordConfigRequest& setOnDemand(int32_t onDemand) { DARABONBA_PTR_SET_VALUE(onDemand_, onDemand) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline AddLiveAppRecordConfigRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline AddLiveAppRecordConfigRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddLiveAppRecordConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // recordFormat Field Functions 
    bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
    void deleteRecordFormat() { this->recordFormat_ = nullptr;};
    inline const vector<AddLiveAppRecordConfigRequest::RecordFormat> & getRecordFormat() const { DARABONBA_PTR_GET_CONST(recordFormat_, vector<AddLiveAppRecordConfigRequest::RecordFormat>) };
    inline vector<AddLiveAppRecordConfigRequest::RecordFormat> getRecordFormat() { DARABONBA_PTR_GET(recordFormat_, vector<AddLiveAppRecordConfigRequest::RecordFormat>) };
    inline AddLiveAppRecordConfigRequest& setRecordFormat(const vector<AddLiveAppRecordConfigRequest::RecordFormat> & recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };
    inline AddLiveAppRecordConfigRequest& setRecordFormat(vector<AddLiveAppRecordConfigRequest::RecordFormat> && recordFormat) { DARABONBA_PTR_SET_RVALUE(recordFormat_, recordFormat) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline AddLiveAppRecordConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline AddLiveAppRecordConfigRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline AddLiveAppRecordConfigRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // transcodeRecordFormat Field Functions 
    bool hasTranscodeRecordFormat() const { return this->transcodeRecordFormat_ != nullptr;};
    void deleteTranscodeRecordFormat() { this->transcodeRecordFormat_ = nullptr;};
    inline const vector<AddLiveAppRecordConfigRequest::TranscodeRecordFormat> & getTranscodeRecordFormat() const { DARABONBA_PTR_GET_CONST(transcodeRecordFormat_, vector<AddLiveAppRecordConfigRequest::TranscodeRecordFormat>) };
    inline vector<AddLiveAppRecordConfigRequest::TranscodeRecordFormat> getTranscodeRecordFormat() { DARABONBA_PTR_GET(transcodeRecordFormat_, vector<AddLiveAppRecordConfigRequest::TranscodeRecordFormat>) };
    inline AddLiveAppRecordConfigRequest& setTranscodeRecordFormat(const vector<AddLiveAppRecordConfigRequest::TranscodeRecordFormat> & transcodeRecordFormat) { DARABONBA_PTR_SET_VALUE(transcodeRecordFormat_, transcodeRecordFormat) };
    inline AddLiveAppRecordConfigRequest& setTranscodeRecordFormat(vector<AddLiveAppRecordConfigRequest::TranscodeRecordFormat> && transcodeRecordFormat) { DARABONBA_PTR_SET_RVALUE(transcodeRecordFormat_, transcodeRecordFormat) };


    // transcodeTemplates Field Functions 
    bool hasTranscodeTemplates() const { return this->transcodeTemplates_ != nullptr;};
    void deleteTranscodeTemplates() { this->transcodeTemplates_ = nullptr;};
    inline const vector<string> & getTranscodeTemplates() const { DARABONBA_PTR_GET_CONST(transcodeTemplates_, vector<string>) };
    inline vector<string> getTranscodeTemplates() { DARABONBA_PTR_GET(transcodeTemplates_, vector<string>) };
    inline AddLiveAppRecordConfigRequest& setTranscodeTemplates(const vector<string> & transcodeTemplates) { DARABONBA_PTR_SET_VALUE(transcodeTemplates_, transcodeTemplates) };
    inline AddLiveAppRecordConfigRequest& setTranscodeTemplates(vector<string> && transcodeTemplates) { DARABONBA_PTR_SET_RVALUE(transcodeTemplates_, transcodeTemplates) };


  protected:
    // The name of the application to which the live stream belongs. The value of this parameter must be the same as the application name in the ingest URL. Otherwise, the configuration does not take effect. If you want to match all applications, specify an asterisk (\\*) as the value.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // Duration for stream concatenation. If the live streaming interruption exceeds the set concatenation duration, a new file will be generated. The concatenation duration can be set between 15 to 21600 seconds.
    shared_ptr<int32_t> delayTime_ {};
    // The main streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // Recording end time. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC time).
    // > The difference between EndTime and StartTime should not exceed 7 days; if it does, it will be calculated as 7 days. This is only valid for stream-level recording (when StreamName is not empty).
    shared_ptr<string> endTime_ {};
    // Specifies whether to enable on-demand recording. Valid values:
    // 
    // *   **0**: disables on-demand recording.
    // *   **1**: enables on-demand recording by using the HTTP callback method.
    // *   **2**: enables on-demand recording by parsing the stream ingest parameters.
    // *   **7**: By default, ApsaraVideo Live does not automatically record live streams. You can call the [RealTimeRecordCommand](https://help.aliyun.com/document_detail/2847882.html) operation to manually start or stop recording.
    // 
    // >  If you set the OnDemand parameter to **1**, you need to call the [AddLiveRecordNotifyConfig](https://help.aliyun.com/document_detail/2847891.html) operation to configure the OnDemandUrl parameter. Otherwise, ApsaraVideo Live does not perform on-demand recording.
    shared_ptr<int32_t> onDemand_ {};
    // The name of the OSS bucket where live streaming recording files are stored. To store recorded files in OSS, you need to create an OSS bucket in advance. For creation method, please refer to [Configure OSS](https://help.aliyun.com/document_detail/84932.html).
    // 
    // This parameter is required.
    shared_ptr<string> ossBucket_ {};
    // The endpoint of the OSS bucket. 
    // To store live stream recordings in OSS, you need to create an OSS bucket in advance. For more information, see Configure OSS.
    // 
    // This parameter is required.
    shared_ptr<string> ossEndpoint_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The recording details.
    shared_ptr<vector<AddLiveAppRecordConfigRequest::RecordFormat>> recordFormat_ {};
    shared_ptr<string> securityToken_ {};
    // Start time of the recording. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC time).
    // > The set time must be within 7 days of the actual streaming start time, and is only valid for stream-level recording (when StreamName is not empty).
    shared_ptr<string> startTime_ {};
    // Stream broadcast name.
    shared_ptr<string> streamName_ {};
    // The transcoded stream recording details.
    shared_ptr<vector<AddLiveAppRecordConfigRequest::TranscodeRecordFormat>> transcodeRecordFormat_ {};
    // Transcoding stream recording template group.
    shared_ptr<vector<string>> transcodeTemplates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
