// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVEAPPRECORDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVEAPPRECORDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddLiveAppRecordConfigRequestRecordFormat.hpp>
#include <alibabacloud/models/AddLiveAppRecordConfigRequestTranscodeRecordFormat.hpp>
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
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->delayTime_ == nullptr && return this->domainName_ == nullptr && return this->endTime_ == nullptr && return this->onDemand_ == nullptr && return this->ossBucket_ == nullptr
        && return this->ossEndpoint_ == nullptr && return this->ownerId_ == nullptr && return this->recordFormat_ == nullptr && return this->securityToken_ == nullptr && return this->startTime_ == nullptr
        && return this->streamName_ == nullptr && return this->transcodeRecordFormat_ == nullptr && return this->transcodeTemplates_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline AddLiveAppRecordConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int32_t delayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
    inline AddLiveAppRecordConfigRequest& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddLiveAppRecordConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline AddLiveAppRecordConfigRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // onDemand Field Functions 
    bool hasOnDemand() const { return this->onDemand_ != nullptr;};
    void deleteOnDemand() { this->onDemand_ = nullptr;};
    inline int32_t onDemand() const { DARABONBA_PTR_GET_DEFAULT(onDemand_, 0) };
    inline AddLiveAppRecordConfigRequest& setOnDemand(int32_t onDemand) { DARABONBA_PTR_SET_VALUE(onDemand_, onDemand) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline AddLiveAppRecordConfigRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline AddLiveAppRecordConfigRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddLiveAppRecordConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // recordFormat Field Functions 
    bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
    void deleteRecordFormat() { this->recordFormat_ = nullptr;};
    inline const vector<AddLiveAppRecordConfigRequestRecordFormat> & recordFormat() const { DARABONBA_PTR_GET_CONST(recordFormat_, vector<AddLiveAppRecordConfigRequestRecordFormat>) };
    inline vector<AddLiveAppRecordConfigRequestRecordFormat> recordFormat() { DARABONBA_PTR_GET(recordFormat_, vector<AddLiveAppRecordConfigRequestRecordFormat>) };
    inline AddLiveAppRecordConfigRequest& setRecordFormat(const vector<AddLiveAppRecordConfigRequestRecordFormat> & recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };
    inline AddLiveAppRecordConfigRequest& setRecordFormat(vector<AddLiveAppRecordConfigRequestRecordFormat> && recordFormat) { DARABONBA_PTR_SET_RVALUE(recordFormat_, recordFormat) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline AddLiveAppRecordConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline AddLiveAppRecordConfigRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline AddLiveAppRecordConfigRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // transcodeRecordFormat Field Functions 
    bool hasTranscodeRecordFormat() const { return this->transcodeRecordFormat_ != nullptr;};
    void deleteTranscodeRecordFormat() { this->transcodeRecordFormat_ = nullptr;};
    inline const vector<AddLiveAppRecordConfigRequestTranscodeRecordFormat> & transcodeRecordFormat() const { DARABONBA_PTR_GET_CONST(transcodeRecordFormat_, vector<AddLiveAppRecordConfigRequestTranscodeRecordFormat>) };
    inline vector<AddLiveAppRecordConfigRequestTranscodeRecordFormat> transcodeRecordFormat() { DARABONBA_PTR_GET(transcodeRecordFormat_, vector<AddLiveAppRecordConfigRequestTranscodeRecordFormat>) };
    inline AddLiveAppRecordConfigRequest& setTranscodeRecordFormat(const vector<AddLiveAppRecordConfigRequestTranscodeRecordFormat> & transcodeRecordFormat) { DARABONBA_PTR_SET_VALUE(transcodeRecordFormat_, transcodeRecordFormat) };
    inline AddLiveAppRecordConfigRequest& setTranscodeRecordFormat(vector<AddLiveAppRecordConfigRequestTranscodeRecordFormat> && transcodeRecordFormat) { DARABONBA_PTR_SET_RVALUE(transcodeRecordFormat_, transcodeRecordFormat) };


    // transcodeTemplates Field Functions 
    bool hasTranscodeTemplates() const { return this->transcodeTemplates_ != nullptr;};
    void deleteTranscodeTemplates() { this->transcodeTemplates_ = nullptr;};
    inline const vector<string> & transcodeTemplates() const { DARABONBA_PTR_GET_CONST(transcodeTemplates_, vector<string>) };
    inline vector<string> transcodeTemplates() { DARABONBA_PTR_GET(transcodeTemplates_, vector<string>) };
    inline AddLiveAppRecordConfigRequest& setTranscodeTemplates(const vector<string> & transcodeTemplates) { DARABONBA_PTR_SET_VALUE(transcodeTemplates_, transcodeTemplates) };
    inline AddLiveAppRecordConfigRequest& setTranscodeTemplates(vector<string> && transcodeTemplates) { DARABONBA_PTR_SET_RVALUE(transcodeTemplates_, transcodeTemplates) };


  protected:
    // The name of the application to which the live stream belongs. The value of this parameter must be the same as the application name in the ingest URL. Otherwise, the configuration does not take effect. If you want to match all applications, specify an asterisk (\\*) as the value.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // Duration for stream concatenation. If the live streaming interruption exceeds the set concatenation duration, a new file will be generated. The concatenation duration can be set between 15 to 21600 seconds.
    std::shared_ptr<int32_t> delayTime_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // Recording end time. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC time).
    // > The difference between EndTime and StartTime should not exceed 7 days; if it does, it will be calculated as 7 days. This is only valid for stream-level recording (when StreamName is not empty).
    std::shared_ptr<string> endTime_ = nullptr;
    // Specifies whether to enable on-demand recording. Valid values:
    // 
    // *   **0**: disables on-demand recording.
    // *   **1**: enables on-demand recording by using the HTTP callback method.
    // *   **2**: enables on-demand recording by parsing the stream ingest parameters.
    // *   **7**: By default, ApsaraVideo Live does not automatically record live streams. You can call the [RealTimeRecordCommand](https://help.aliyun.com/document_detail/2847882.html) operation to manually start or stop recording.
    // 
    // >  If you set the OnDemand parameter to **1**, you need to call the [AddLiveRecordNotifyConfig](https://help.aliyun.com/document_detail/2847891.html) operation to configure the OnDemandUrl parameter. Otherwise, ApsaraVideo Live does not perform on-demand recording.
    std::shared_ptr<int32_t> onDemand_ = nullptr;
    // The name of the OSS bucket where live streaming recording files are stored. To store recorded files in OSS, you need to create an OSS bucket in advance. For creation method, please refer to [Configure OSS](https://help.aliyun.com/document_detail/84932.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> ossBucket_ = nullptr;
    // The endpoint of the OSS bucket. 
    // To store live stream recordings in OSS, you need to create an OSS bucket in advance. For more information, see Configure OSS.
    // 
    // This parameter is required.
    std::shared_ptr<string> ossEndpoint_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The recording details.
    std::shared_ptr<vector<AddLiveAppRecordConfigRequestRecordFormat>> recordFormat_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // Start time of the recording. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC time).
    // > The set time must be within 7 days of the actual streaming start time, and is only valid for stream-level recording (when StreamName is not empty).
    std::shared_ptr<string> startTime_ = nullptr;
    // Stream broadcast name.
    std::shared_ptr<string> streamName_ = nullptr;
    // The transcoded stream recording details.
    std::shared_ptr<vector<AddLiveAppRecordConfigRequestTranscodeRecordFormat>> transcodeRecordFormat_ = nullptr;
    // Transcoding stream recording template group.
    std::shared_ptr<vector<string>> transcodeTemplates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
