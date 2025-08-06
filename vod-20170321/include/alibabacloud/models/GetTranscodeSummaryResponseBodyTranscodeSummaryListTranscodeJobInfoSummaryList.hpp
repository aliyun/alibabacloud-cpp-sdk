// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODESUMMARYRESPONSEBODYTRANSCODESUMMARYLISTTRANSCODEJOBINFOSUMMARYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODESUMMARYRESPONSEBODYTRANSCODESUMMARYLISTTRANSCODEJOBINFOSUMMARYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Filesize, filesize_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(TranscodeJobStatus, transcodeJobStatus_);
      DARABONBA_PTR_TO_JSON(TranscodeProgress, transcodeProgress_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateId, transcodeTemplateId_);
      DARABONBA_PTR_TO_JSON(WatermarkIdList, watermarkIdList_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Filesize, filesize_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(TranscodeJobStatus, transcodeJobStatus_);
      DARABONBA_PTR_FROM_JSON(TranscodeProgress, transcodeProgress_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateId, transcodeTemplateId_);
      DARABONBA_PTR_FROM_JSON(WatermarkIdList, watermarkIdList_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList() = default ;
    GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList(const GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList &) = default ;
    GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList(GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList &&) = default ;
    GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList() = default ;
    GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& operator=(const GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList &) = default ;
    GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& operator=(GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bitrate_ != nullptr
        && this->completeTime_ != nullptr && this->creationTime_ != nullptr && this->duration_ != nullptr && this->errorCode_ != nullptr && this->errorMessage_ != nullptr
        && this->filesize_ != nullptr && this->format_ != nullptr && this->fps_ != nullptr && this->height_ != nullptr && this->transcodeJobStatus_ != nullptr
        && this->transcodeProgress_ != nullptr && this->transcodeTemplateId_ != nullptr && this->watermarkIdList_ != nullptr && this->width_ != nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // filesize Field Functions 
    bool hasFilesize() const { return this->filesize_ != nullptr;};
    void deleteFilesize() { this->filesize_ = nullptr;};
    inline int64_t filesize() const { DARABONBA_PTR_GET_DEFAULT(filesize_, 0L) };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& setFilesize(int64_t filesize) { DARABONBA_PTR_SET_VALUE(filesize_, filesize) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // transcodeJobStatus Field Functions 
    bool hasTranscodeJobStatus() const { return this->transcodeJobStatus_ != nullptr;};
    void deleteTranscodeJobStatus() { this->transcodeJobStatus_ = nullptr;};
    inline string transcodeJobStatus() const { DARABONBA_PTR_GET_DEFAULT(transcodeJobStatus_, "") };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& setTranscodeJobStatus(string transcodeJobStatus) { DARABONBA_PTR_SET_VALUE(transcodeJobStatus_, transcodeJobStatus) };


    // transcodeProgress Field Functions 
    bool hasTranscodeProgress() const { return this->transcodeProgress_ != nullptr;};
    void deleteTranscodeProgress() { this->transcodeProgress_ = nullptr;};
    inline int64_t transcodeProgress() const { DARABONBA_PTR_GET_DEFAULT(transcodeProgress_, 0L) };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& setTranscodeProgress(int64_t transcodeProgress) { DARABONBA_PTR_SET_VALUE(transcodeProgress_, transcodeProgress) };


    // transcodeTemplateId Field Functions 
    bool hasTranscodeTemplateId() const { return this->transcodeTemplateId_ != nullptr;};
    void deleteTranscodeTemplateId() { this->transcodeTemplateId_ = nullptr;};
    inline string transcodeTemplateId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateId_, "") };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& setTranscodeTemplateId(string transcodeTemplateId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateId_, transcodeTemplateId) };


    // watermarkIdList Field Functions 
    bool hasWatermarkIdList() const { return this->watermarkIdList_ != nullptr;};
    void deleteWatermarkIdList() { this->watermarkIdList_ = nullptr;};
    inline const vector<string> & watermarkIdList() const { DARABONBA_PTR_GET_CONST(watermarkIdList_, vector<string>) };
    inline vector<string> watermarkIdList() { DARABONBA_PTR_GET(watermarkIdList_, vector<string>) };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& setWatermarkIdList(const vector<string> & watermarkIdList) { DARABONBA_PTR_SET_VALUE(watermarkIdList_, watermarkIdList) };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& setWatermarkIdList(vector<string> && watermarkIdList) { DARABONBA_PTR_SET_RVALUE(watermarkIdList_, watermarkIdList) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The average bitrate of the output video. Unit: Kbit/s.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The time when the transcoding job was complete. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> completeTime_ = nullptr;
    // The time when the transcoding job was created. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The duration of the output video. Unit: seconds.
    std::shared_ptr<string> duration_ = nullptr;
    // The error code returned when the transcoding job failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned when the transcoding job failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The size of the output video. Unit: bytes.
    std::shared_ptr<int64_t> filesize_ = nullptr;
    // The container format of the output video.
    std::shared_ptr<string> format_ = nullptr;
    // The frame rate of the output video. Unit: frames per second.
    std::shared_ptr<string> fps_ = nullptr;
    // The height of the output video. Unit: pixels.
    std::shared_ptr<string> height_ = nullptr;
    // The status of the transcoding job. Valid values:
    // 
    // *   **Transcoding**: Transcoding is in process.
    // *   **TranscodeSuccess**: The job was successful.
    // *   **TranscodeFail**: The job failed.
    std::shared_ptr<string> transcodeJobStatus_ = nullptr;
    // The transcoding progress. Valid values: `[0,100]`.
    std::shared_ptr<int64_t> transcodeProgress_ = nullptr;
    // The ID of the transcoding template.
    std::shared_ptr<string> transcodeTemplateId_ = nullptr;
    // The IDs of the watermarks that are applied to the output video.
    std::shared_ptr<vector<string>> watermarkIdList_ = nullptr;
    // The width of the output video. Unit: pixels.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
