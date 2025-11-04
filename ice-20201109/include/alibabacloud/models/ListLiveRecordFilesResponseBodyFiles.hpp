// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVERECORDFILESRESPONSEBODYFILES_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVERECORDFILESRESPONSEBODYFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveRecordFilesResponseBodyFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRecordFilesResponseBodyFiles& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(RecordOutput, recordOutput_);
      DARABONBA_PTR_TO_JSON(RecordUrl, recordUrl_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRecordFilesResponseBodyFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(RecordOutput, recordOutput_);
      DARABONBA_PTR_FROM_JSON(RecordUrl, recordUrl_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    ListLiveRecordFilesResponseBodyFiles() = default ;
    ListLiveRecordFilesResponseBodyFiles(const ListLiveRecordFilesResponseBodyFiles &) = default ;
    ListLiveRecordFilesResponseBodyFiles(ListLiveRecordFilesResponseBodyFiles &&) = default ;
    ListLiveRecordFilesResponseBodyFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRecordFilesResponseBodyFiles() = default ;
    ListLiveRecordFilesResponseBodyFiles& operator=(const ListLiveRecordFilesResponseBodyFiles &) = default ;
    ListLiveRecordFilesResponseBodyFiles& operator=(ListLiveRecordFilesResponseBodyFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->duration_ == nullptr && return this->endTime_ == nullptr && return this->format_ == nullptr && return this->height_ == nullptr && return this->jobId_ == nullptr
        && return this->jobName_ == nullptr && return this->recordId_ == nullptr && return this->recordOutput_ == nullptr && return this->recordUrl_ == nullptr && return this->startTime_ == nullptr
        && return this->streamUrl_ == nullptr && return this->width_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListLiveRecordFilesResponseBodyFiles& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline ListLiveRecordFilesResponseBodyFiles& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListLiveRecordFilesResponseBodyFiles& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline ListLiveRecordFilesResponseBodyFiles& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline ListLiveRecordFilesResponseBodyFiles& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListLiveRecordFilesResponseBodyFiles& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListLiveRecordFilesResponseBodyFiles& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline ListLiveRecordFilesResponseBodyFiles& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // recordOutput Field Functions 
    bool hasRecordOutput() const { return this->recordOutput_ != nullptr;};
    void deleteRecordOutput() { this->recordOutput_ = nullptr;};
    inline string recordOutput() const { DARABONBA_PTR_GET_DEFAULT(recordOutput_, "") };
    inline ListLiveRecordFilesResponseBodyFiles& setRecordOutput(string recordOutput) { DARABONBA_PTR_SET_VALUE(recordOutput_, recordOutput) };


    // recordUrl Field Functions 
    bool hasRecordUrl() const { return this->recordUrl_ != nullptr;};
    void deleteRecordUrl() { this->recordUrl_ = nullptr;};
    inline string recordUrl() const { DARABONBA_PTR_GET_DEFAULT(recordUrl_, "") };
    inline ListLiveRecordFilesResponseBodyFiles& setRecordUrl(string recordUrl) { DARABONBA_PTR_SET_VALUE(recordUrl_, recordUrl) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListLiveRecordFilesResponseBodyFiles& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamUrl Field Functions 
    bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
    void deleteStreamUrl() { this->streamUrl_ = nullptr;};
    inline string streamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
    inline ListLiveRecordFilesResponseBodyFiles& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline ListLiveRecordFilesResponseBodyFiles& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The time when the file was created in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The recording length. Unit: seconds.
    std::shared_ptr<float> duration_ = nullptr;
    // The end of the time range to query. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The format of the recording file.
    std::shared_ptr<string> format_ = nullptr;
    // The height of the video.
    std::shared_ptr<int32_t> height_ = nullptr;
    // The ID of the recording job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The name of the recording job.
    std::shared_ptr<string> jobName_ = nullptr;
    // The ID of the index file.
    std::shared_ptr<string> recordId_ = nullptr;
    // The storage information about the recording file.
    std::shared_ptr<string> recordOutput_ = nullptr;
    // The URL of the index file.
    std::shared_ptr<string> recordUrl_ = nullptr;
    // The beginning of the time range to query. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamUrl_ = nullptr;
    // The width of the video.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
