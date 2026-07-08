// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Callback, callback_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileFormat, fileFormat_);
      DARABONBA_PTR_TO_JSON(Flv, flv_);
      DARABONBA_PTR_TO_JSON(HlsM3u8, hlsM3u8_);
      DARABONBA_PTR_TO_JSON(HlsTs, hlsTs_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(JpgOnDemand, jpgOnDemand_);
      DARABONBA_PTR_TO_JSON(JpgOverwrite, jpgOverwrite_);
      DARABONBA_PTR_TO_JSON(JpgSequence, jpgSequence_);
      DARABONBA_PTR_TO_JSON(Mp4, mp4_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(OssFilePrefix, ossFilePrefix_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(TransConfigsJSON, transConfigsJSON_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileFormat, fileFormat_);
      DARABONBA_PTR_FROM_JSON(Flv, flv_);
      DARABONBA_PTR_FROM_JSON(HlsM3u8, hlsM3u8_);
      DARABONBA_PTR_FROM_JSON(HlsTs, hlsTs_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(JpgOnDemand, jpgOnDemand_);
      DARABONBA_PTR_FROM_JSON(JpgOverwrite, jpgOverwrite_);
      DARABONBA_PTR_FROM_JSON(JpgSequence, jpgSequence_);
      DARABONBA_PTR_FROM_JSON(Mp4, mp4_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(OssFilePrefix, ossFilePrefix_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(TransConfigsJSON, transConfigsJSON_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateTemplateRequest() = default ;
    CreateTemplateRequest(const CreateTemplateRequest &) = default ;
    CreateTemplateRequest(CreateTemplateRequest &&) = default ;
    CreateTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateRequest() = default ;
    CreateTemplateRequest& operator=(const CreateTemplateRequest &) = default ;
    CreateTemplateRequest& operator=(CreateTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callback_ == nullptr
        && this->description_ == nullptr && this->fileFormat_ == nullptr && this->flv_ == nullptr && this->hlsM3u8_ == nullptr && this->hlsTs_ == nullptr
        && this->interval_ == nullptr && this->jpgOnDemand_ == nullptr && this->jpgOverwrite_ == nullptr && this->jpgSequence_ == nullptr && this->mp4_ == nullptr
        && this->name_ == nullptr && this->ossBucket_ == nullptr && this->ossEndpoint_ == nullptr && this->ossFilePrefix_ == nullptr && this->ownerId_ == nullptr
        && this->region_ == nullptr && this->retention_ == nullptr && this->transConfigsJSON_ == nullptr && this->trigger_ == nullptr && this->type_ == nullptr; };
    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline string getCallback() const { DARABONBA_PTR_GET_DEFAULT(callback_, "") };
    inline CreateTemplateRequest& setCallback(string callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileFormat Field Functions 
    bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
    void deleteFileFormat() { this->fileFormat_ = nullptr;};
    inline string getFileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
    inline CreateTemplateRequest& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


    // flv Field Functions 
    bool hasFlv() const { return this->flv_ != nullptr;};
    void deleteFlv() { this->flv_ = nullptr;};
    inline string getFlv() const { DARABONBA_PTR_GET_DEFAULT(flv_, "") };
    inline CreateTemplateRequest& setFlv(string flv) { DARABONBA_PTR_SET_VALUE(flv_, flv) };


    // hlsM3u8 Field Functions 
    bool hasHlsM3u8() const { return this->hlsM3u8_ != nullptr;};
    void deleteHlsM3u8() { this->hlsM3u8_ = nullptr;};
    inline string getHlsM3u8() const { DARABONBA_PTR_GET_DEFAULT(hlsM3u8_, "") };
    inline CreateTemplateRequest& setHlsM3u8(string hlsM3u8) { DARABONBA_PTR_SET_VALUE(hlsM3u8_, hlsM3u8) };


    // hlsTs Field Functions 
    bool hasHlsTs() const { return this->hlsTs_ != nullptr;};
    void deleteHlsTs() { this->hlsTs_ = nullptr;};
    inline string getHlsTs() const { DARABONBA_PTR_GET_DEFAULT(hlsTs_, "") };
    inline CreateTemplateRequest& setHlsTs(string hlsTs) { DARABONBA_PTR_SET_VALUE(hlsTs_, hlsTs) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline CreateTemplateRequest& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // jpgOnDemand Field Functions 
    bool hasJpgOnDemand() const { return this->jpgOnDemand_ != nullptr;};
    void deleteJpgOnDemand() { this->jpgOnDemand_ = nullptr;};
    inline string getJpgOnDemand() const { DARABONBA_PTR_GET_DEFAULT(jpgOnDemand_, "") };
    inline CreateTemplateRequest& setJpgOnDemand(string jpgOnDemand) { DARABONBA_PTR_SET_VALUE(jpgOnDemand_, jpgOnDemand) };


    // jpgOverwrite Field Functions 
    bool hasJpgOverwrite() const { return this->jpgOverwrite_ != nullptr;};
    void deleteJpgOverwrite() { this->jpgOverwrite_ = nullptr;};
    inline string getJpgOverwrite() const { DARABONBA_PTR_GET_DEFAULT(jpgOverwrite_, "") };
    inline CreateTemplateRequest& setJpgOverwrite(string jpgOverwrite) { DARABONBA_PTR_SET_VALUE(jpgOverwrite_, jpgOverwrite) };


    // jpgSequence Field Functions 
    bool hasJpgSequence() const { return this->jpgSequence_ != nullptr;};
    void deleteJpgSequence() { this->jpgSequence_ = nullptr;};
    inline string getJpgSequence() const { DARABONBA_PTR_GET_DEFAULT(jpgSequence_, "") };
    inline CreateTemplateRequest& setJpgSequence(string jpgSequence) { DARABONBA_PTR_SET_VALUE(jpgSequence_, jpgSequence) };


    // mp4 Field Functions 
    bool hasMp4() const { return this->mp4_ != nullptr;};
    void deleteMp4() { this->mp4_ = nullptr;};
    inline string getMp4() const { DARABONBA_PTR_GET_DEFAULT(mp4_, "") };
    inline CreateTemplateRequest& setMp4(string mp4) { DARABONBA_PTR_SET_VALUE(mp4_, mp4) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline CreateTemplateRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline CreateTemplateRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // ossFilePrefix Field Functions 
    bool hasOssFilePrefix() const { return this->ossFilePrefix_ != nullptr;};
    void deleteOssFilePrefix() { this->ossFilePrefix_ = nullptr;};
    inline string getOssFilePrefix() const { DARABONBA_PTR_GET_DEFAULT(ossFilePrefix_, "") };
    inline CreateTemplateRequest& setOssFilePrefix(string ossFilePrefix) { DARABONBA_PTR_SET_VALUE(ossFilePrefix_, ossFilePrefix) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTemplateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateTemplateRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline CreateTemplateRequest& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // transConfigsJSON Field Functions 
    bool hasTransConfigsJSON() const { return this->transConfigsJSON_ != nullptr;};
    void deleteTransConfigsJSON() { this->transConfigsJSON_ = nullptr;};
    inline string getTransConfigsJSON() const { DARABONBA_PTR_GET_DEFAULT(transConfigsJSON_, "") };
    inline CreateTemplateRequest& setTransConfigsJSON(string transConfigsJSON) { DARABONBA_PTR_SET_VALUE(transConfigsJSON_, transConfigsJSON) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline string getTrigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, "") };
    inline CreateTemplateRequest& setTrigger(string trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateTemplateRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Callback URL to be invoked after template execution.  
    // 
    // > Note: Templates triggered on demand do not support callback parameters.
    shared_ptr<string> callback_ {};
    // Template description.
    shared_ptr<string> description_ {};
    // Storage file format. Multiple values are separated by commas. Valid values:
    // - mp4
    // - flv
    // - hls
    // > The Qingdao ingest endpoint does not support recording in FLV or MP4 formats.
    shared_ptr<string> fileFormat_ {};
    // Storage path for FLV files. For the format, see the description for Mp4.
    shared_ptr<string> flv_ {};
    // Storage path for HLS m3u8 files. For the format, see the description for Mp4.
    shared_ptr<string> hlsM3u8_ {};
    // Storage path for HLS .ts files.
    // - Variables can be used in the path. Supported variables include {AppName}, {StreamName}, {UnixTimestamp}, and {Sequence}.
    // - The variables {UnixTimestamp} and {Sequence} must both be included.
    shared_ptr<string> hlsTs_ {};
    // Operation epoch, in seconds.
    shared_ptr<int64_t> interval_ {};
    // Storage path for on-demand JPG screenshots.
    // - Only JPG images are currently supported.
    // - Variables can be used in the path. Supported variables include {AppName}, {StreamName}, {UnixTimestamp}, and {Sequence}.
    // - Either {UnixTimestamp} or {Sequence} must be included.
    shared_ptr<string> jpgOnDemand_ {};
    // Storage path for JPG files used in overwrite snapshots.  
    // - Only JPG images are currently supported.  
    // - Supports variable substitution with {AppName} and {StreamName}.
    shared_ptr<string> jpgOverwrite_ {};
    // Storage path for JPG files used in sequential snapshots.  
    // - Only JPG images are currently supported.  
    // - Supports variable substitution with {AppName}, {StreamName}, {UnixTimestamp}, and {Sequence}.  
    // - Either {UnixTimestamp} or {Sequence} is required.
    shared_ptr<string> jpgSequence_ {};
    // Storage path for MP4 files.  
    // - The path supports variable substitution. Available variables include {AppName}, {StreamName}, {Sequence}, {EscapedStartTime}, and {EscapedEndTime}.  
    // - {EscapedStartTime} and {EscapedEndTime} are required.
    shared_ptr<string> mp4_ {};
    // Template Name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // OSS bucket.
    shared_ptr<string> ossBucket_ {};
    // Domain name of OSS.
    shared_ptr<string> ossEndpoint_ {};
    // OSS file prefix.
    shared_ptr<string> ossFilePrefix_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Region where the OSS bucket resides, that is, the service center.
    shared_ptr<string> region_ {};
    // Time-shift retention period, in days.
    shared_ptr<int64_t> retention_ {};
    // An array of TransConfig-type transcoding configurations, formatted as a JSON string.
    shared_ptr<string> transConfigsJSON_ {};
    // Template trigger type. Default value: auto. Valid values:  
    // - auto (automatic)  
    // - ondemand (on-demand)
    shared_ptr<string> trigger_ {};
    // Template type. Valid values:  
    // - record (recording)  
    // - snapshot (snapshot)  
    // - transcode (transcoding)  
    // - timeshift (time shifting)
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
