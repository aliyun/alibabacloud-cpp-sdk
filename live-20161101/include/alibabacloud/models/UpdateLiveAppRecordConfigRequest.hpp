// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEAPPRECORDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEAPPRECORDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateLiveAppRecordConfigRequestRecordFormat.hpp>
#include <alibabacloud/models/UpdateLiveAppRecordConfigRequestTranscodeRecordFormat.hpp>
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
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->delayTime_ == nullptr && return this->domainName_ == nullptr && return this->endTime_ == nullptr && return this->onDemand_ == nullptr && return this->ossEndpoint_ == nullptr
        && return this->ownerId_ == nullptr && return this->recordFormat_ == nullptr && return this->securityToken_ == nullptr && return this->startTime_ == nullptr && return this->streamName_ == nullptr
        && return this->transcodeRecordFormat_ == nullptr && return this->transcodeTemplates_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateLiveAppRecordConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int32_t delayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
    inline UpdateLiveAppRecordConfigRequest& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateLiveAppRecordConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateLiveAppRecordConfigRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // onDemand Field Functions 
    bool hasOnDemand() const { return this->onDemand_ != nullptr;};
    void deleteOnDemand() { this->onDemand_ = nullptr;};
    inline int32_t onDemand() const { DARABONBA_PTR_GET_DEFAULT(onDemand_, 0) };
    inline UpdateLiveAppRecordConfigRequest& setOnDemand(int32_t onDemand) { DARABONBA_PTR_SET_VALUE(onDemand_, onDemand) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline UpdateLiveAppRecordConfigRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLiveAppRecordConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // recordFormat Field Functions 
    bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
    void deleteRecordFormat() { this->recordFormat_ = nullptr;};
    inline const vector<UpdateLiveAppRecordConfigRequestRecordFormat> & recordFormat() const { DARABONBA_PTR_GET_CONST(recordFormat_, vector<UpdateLiveAppRecordConfigRequestRecordFormat>) };
    inline vector<UpdateLiveAppRecordConfigRequestRecordFormat> recordFormat() { DARABONBA_PTR_GET(recordFormat_, vector<UpdateLiveAppRecordConfigRequestRecordFormat>) };
    inline UpdateLiveAppRecordConfigRequest& setRecordFormat(const vector<UpdateLiveAppRecordConfigRequestRecordFormat> & recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };
    inline UpdateLiveAppRecordConfigRequest& setRecordFormat(vector<UpdateLiveAppRecordConfigRequestRecordFormat> && recordFormat) { DARABONBA_PTR_SET_RVALUE(recordFormat_, recordFormat) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline UpdateLiveAppRecordConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateLiveAppRecordConfigRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline UpdateLiveAppRecordConfigRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // transcodeRecordFormat Field Functions 
    bool hasTranscodeRecordFormat() const { return this->transcodeRecordFormat_ != nullptr;};
    void deleteTranscodeRecordFormat() { this->transcodeRecordFormat_ = nullptr;};
    inline const vector<UpdateLiveAppRecordConfigRequestTranscodeRecordFormat> & transcodeRecordFormat() const { DARABONBA_PTR_GET_CONST(transcodeRecordFormat_, vector<UpdateLiveAppRecordConfigRequestTranscodeRecordFormat>) };
    inline vector<UpdateLiveAppRecordConfigRequestTranscodeRecordFormat> transcodeRecordFormat() { DARABONBA_PTR_GET(transcodeRecordFormat_, vector<UpdateLiveAppRecordConfigRequestTranscodeRecordFormat>) };
    inline UpdateLiveAppRecordConfigRequest& setTranscodeRecordFormat(const vector<UpdateLiveAppRecordConfigRequestTranscodeRecordFormat> & transcodeRecordFormat) { DARABONBA_PTR_SET_VALUE(transcodeRecordFormat_, transcodeRecordFormat) };
    inline UpdateLiveAppRecordConfigRequest& setTranscodeRecordFormat(vector<UpdateLiveAppRecordConfigRequestTranscodeRecordFormat> && transcodeRecordFormat) { DARABONBA_PTR_SET_RVALUE(transcodeRecordFormat_, transcodeRecordFormat) };


    // transcodeTemplates Field Functions 
    bool hasTranscodeTemplates() const { return this->transcodeTemplates_ != nullptr;};
    void deleteTranscodeTemplates() { this->transcodeTemplates_ = nullptr;};
    inline const vector<string> & transcodeTemplates() const { DARABONBA_PTR_GET_CONST(transcodeTemplates_, vector<string>) };
    inline vector<string> transcodeTemplates() { DARABONBA_PTR_GET(transcodeTemplates_, vector<string>) };
    inline UpdateLiveAppRecordConfigRequest& setTranscodeTemplates(const vector<string> & transcodeTemplates) { DARABONBA_PTR_SET_VALUE(transcodeTemplates_, transcodeTemplates) };
    inline UpdateLiveAppRecordConfigRequest& setTranscodeTemplates(vector<string> && transcodeTemplates) { DARABONBA_PTR_SET_RVALUE(transcodeTemplates_, transcodeTemplates) };


  protected:
    // The name of the application to which the live stream belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The interruption duration for merge. If the stream interruption duration exceeds the specified duration, a new recording is generated. The value of this parameter ranges from 15 to 21600 seconds.
    std::shared_ptr<int32_t> delayTime_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The recording end time. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // >  The time range that is specified by the EndTime and StartTime parameters must be less than or equal to seven days. If the value exceeds seven days, ApsaraVideo Live considers seven days as the time range. This parameter takes effect only for the live stream specified by the StreamName parameter. If the StreamName parameter is not specified, this parameter does not take effect.
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
    // The endpoint of the Object Storage Service (OSS) bucket.
    // 
    // To store live stream recordings in OSS, you need to create an OSS bucket in advance. For more information, see [Configure OSS](https://help.aliyun.com/document_detail/84932.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> ossEndpoint_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The recording details.
    std::shared_ptr<vector<UpdateLiveAppRecordConfigRequestRecordFormat>> recordFormat_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The recording start time. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // >  The start time must be within seven days after the stream ingest starts. This parameter takes effect only for the live stream specified by the StreamName parameter. If the StreamName parameter is not specified, this parameter does not take effect.
    std::shared_ptr<string> startTime_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The transcoded stream recording details.
    std::shared_ptr<vector<UpdateLiveAppRecordConfigRequestTranscodeRecordFormat>> transcodeRecordFormat_ = nullptr;
    // The transcoding template group details.
    std::shared_ptr<vector<string>> transcodeTemplates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
