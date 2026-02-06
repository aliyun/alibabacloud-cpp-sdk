// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODESUMMARYRESPONSEBODY_HPP_
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
  class GetTranscodeSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExistVideoIds, nonExistVideoIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeSummaryList, transcodeSummaryList_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExistVideoIds, nonExistVideoIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeSummaryList, transcodeSummaryList_);
    };
    GetTranscodeSummaryResponseBody() = default ;
    GetTranscodeSummaryResponseBody(const GetTranscodeSummaryResponseBody &) = default ;
    GetTranscodeSummaryResponseBody(GetTranscodeSummaryResponseBody &&) = default ;
    GetTranscodeSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeSummaryResponseBody() = default ;
    GetTranscodeSummaryResponseBody& operator=(const GetTranscodeSummaryResponseBody &) = default ;
    GetTranscodeSummaryResponseBody& operator=(GetTranscodeSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TranscodeSummaryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeSummaryList& obj) { 
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(TranscodeJobInfoSummaryList, transcodeJobInfoSummaryList_);
        DARABONBA_PTR_TO_JSON(TranscodeStatus, transcodeStatus_);
        DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
        DARABONBA_PTR_TO_JSON(VideoId, videoId_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeSummaryList& obj) { 
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(TranscodeJobInfoSummaryList, transcodeJobInfoSummaryList_);
        DARABONBA_PTR_FROM_JSON(TranscodeStatus, transcodeStatus_);
        DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
        DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
      };
      TranscodeSummaryList() = default ;
      TranscodeSummaryList(const TranscodeSummaryList &) = default ;
      TranscodeSummaryList(TranscodeSummaryList &&) = default ;
      TranscodeSummaryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscodeSummaryList() = default ;
      TranscodeSummaryList& operator=(const TranscodeSummaryList &) = default ;
      TranscodeSummaryList& operator=(TranscodeSummaryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TranscodeJobInfoSummaryList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TranscodeJobInfoSummaryList& obj) { 
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
        friend void from_json(const Darabonba::Json& j, TranscodeJobInfoSummaryList& obj) { 
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
        TranscodeJobInfoSummaryList() = default ;
        TranscodeJobInfoSummaryList(const TranscodeJobInfoSummaryList &) = default ;
        TranscodeJobInfoSummaryList(TranscodeJobInfoSummaryList &&) = default ;
        TranscodeJobInfoSummaryList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TranscodeJobInfoSummaryList() = default ;
        TranscodeJobInfoSummaryList& operator=(const TranscodeJobInfoSummaryList &) = default ;
        TranscodeJobInfoSummaryList& operator=(TranscodeJobInfoSummaryList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->completeTime_ == nullptr && this->creationTime_ == nullptr && this->duration_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr
        && this->filesize_ == nullptr && this->format_ == nullptr && this->fps_ == nullptr && this->height_ == nullptr && this->transcodeJobStatus_ == nullptr
        && this->transcodeProgress_ == nullptr && this->transcodeTemplateId_ == nullptr && this->watermarkIdList_ == nullptr && this->width_ == nullptr; };
        // bitrate Field Functions 
        bool hasBitrate() const { return this->bitrate_ != nullptr;};
        void deleteBitrate() { this->bitrate_ = nullptr;};
        inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
        inline TranscodeJobInfoSummaryList& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


        // completeTime Field Functions 
        bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
        void deleteCompleteTime() { this->completeTime_ = nullptr;};
        inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
        inline TranscodeJobInfoSummaryList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline TranscodeJobInfoSummaryList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline TranscodeJobInfoSummaryList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline TranscodeJobInfoSummaryList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline TranscodeJobInfoSummaryList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // filesize Field Functions 
        bool hasFilesize() const { return this->filesize_ != nullptr;};
        void deleteFilesize() { this->filesize_ = nullptr;};
        inline int64_t getFilesize() const { DARABONBA_PTR_GET_DEFAULT(filesize_, 0L) };
        inline TranscodeJobInfoSummaryList& setFilesize(int64_t filesize) { DARABONBA_PTR_SET_VALUE(filesize_, filesize) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline TranscodeJobInfoSummaryList& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // fps Field Functions 
        bool hasFps() const { return this->fps_ != nullptr;};
        void deleteFps() { this->fps_ = nullptr;};
        inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
        inline TranscodeJobInfoSummaryList& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
        inline TranscodeJobInfoSummaryList& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // transcodeJobStatus Field Functions 
        bool hasTranscodeJobStatus() const { return this->transcodeJobStatus_ != nullptr;};
        void deleteTranscodeJobStatus() { this->transcodeJobStatus_ = nullptr;};
        inline string getTranscodeJobStatus() const { DARABONBA_PTR_GET_DEFAULT(transcodeJobStatus_, "") };
        inline TranscodeJobInfoSummaryList& setTranscodeJobStatus(string transcodeJobStatus) { DARABONBA_PTR_SET_VALUE(transcodeJobStatus_, transcodeJobStatus) };


        // transcodeProgress Field Functions 
        bool hasTranscodeProgress() const { return this->transcodeProgress_ != nullptr;};
        void deleteTranscodeProgress() { this->transcodeProgress_ = nullptr;};
        inline int64_t getTranscodeProgress() const { DARABONBA_PTR_GET_DEFAULT(transcodeProgress_, 0L) };
        inline TranscodeJobInfoSummaryList& setTranscodeProgress(int64_t transcodeProgress) { DARABONBA_PTR_SET_VALUE(transcodeProgress_, transcodeProgress) };


        // transcodeTemplateId Field Functions 
        bool hasTranscodeTemplateId() const { return this->transcodeTemplateId_ != nullptr;};
        void deleteTranscodeTemplateId() { this->transcodeTemplateId_ = nullptr;};
        inline string getTranscodeTemplateId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateId_, "") };
        inline TranscodeJobInfoSummaryList& setTranscodeTemplateId(string transcodeTemplateId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateId_, transcodeTemplateId) };


        // watermarkIdList Field Functions 
        bool hasWatermarkIdList() const { return this->watermarkIdList_ != nullptr;};
        void deleteWatermarkIdList() { this->watermarkIdList_ = nullptr;};
        inline const vector<string> & getWatermarkIdList() const { DARABONBA_PTR_GET_CONST(watermarkIdList_, vector<string>) };
        inline vector<string> getWatermarkIdList() { DARABONBA_PTR_GET(watermarkIdList_, vector<string>) };
        inline TranscodeJobInfoSummaryList& setWatermarkIdList(const vector<string> & watermarkIdList) { DARABONBA_PTR_SET_VALUE(watermarkIdList_, watermarkIdList) };
        inline TranscodeJobInfoSummaryList& setWatermarkIdList(vector<string> && watermarkIdList) { DARABONBA_PTR_SET_RVALUE(watermarkIdList_, watermarkIdList) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
        inline TranscodeJobInfoSummaryList& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The average bitrate of the output video. Unit: Kbit/s.
        shared_ptr<string> bitrate_ {};
        // The time when the transcoding job was complete. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> completeTime_ {};
        // The time when the transcoding job was created. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The duration of the output video. Unit: seconds.
        shared_ptr<string> duration_ {};
        // The error code returned when the transcoding job failed.
        shared_ptr<string> errorCode_ {};
        // The error message returned when the transcoding job failed.
        shared_ptr<string> errorMessage_ {};
        // The size of the output video. Unit: bytes.
        shared_ptr<int64_t> filesize_ {};
        // The container format of the output video.
        shared_ptr<string> format_ {};
        // The frame rate of the output video. Unit: frames per second.
        shared_ptr<string> fps_ {};
        // The height of the output video. Unit: pixels.
        shared_ptr<string> height_ {};
        // The status of the transcoding job. Valid values:
        // 
        // *   **Transcoding**: Transcoding is in process.
        // *   **TranscodeSuccess**: The job was successful.
        // *   **TranscodeFail**: The job failed.
        shared_ptr<string> transcodeJobStatus_ {};
        // The transcoding progress. Valid values: `[0,100]`.
        shared_ptr<int64_t> transcodeProgress_ {};
        // The ID of the transcoding template.
        shared_ptr<string> transcodeTemplateId_ {};
        // The IDs of the watermarks that are applied to the output video.
        shared_ptr<vector<string>> watermarkIdList_ {};
        // The width of the output video. Unit: pixels.
        shared_ptr<string> width_ {};
      };

      virtual bool empty() const override { return this->completeTime_ == nullptr
        && this->creationTime_ == nullptr && this->transcodeJobInfoSummaryList_ == nullptr && this->transcodeStatus_ == nullptr && this->transcodeTemplateGroupId_ == nullptr && this->videoId_ == nullptr; };
      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
      inline TranscodeSummaryList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline TranscodeSummaryList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // transcodeJobInfoSummaryList Field Functions 
      bool hasTranscodeJobInfoSummaryList() const { return this->transcodeJobInfoSummaryList_ != nullptr;};
      void deleteTranscodeJobInfoSummaryList() { this->transcodeJobInfoSummaryList_ = nullptr;};
      inline const vector<TranscodeSummaryList::TranscodeJobInfoSummaryList> & getTranscodeJobInfoSummaryList() const { DARABONBA_PTR_GET_CONST(transcodeJobInfoSummaryList_, vector<TranscodeSummaryList::TranscodeJobInfoSummaryList>) };
      inline vector<TranscodeSummaryList::TranscodeJobInfoSummaryList> getTranscodeJobInfoSummaryList() { DARABONBA_PTR_GET(transcodeJobInfoSummaryList_, vector<TranscodeSummaryList::TranscodeJobInfoSummaryList>) };
      inline TranscodeSummaryList& setTranscodeJobInfoSummaryList(const vector<TranscodeSummaryList::TranscodeJobInfoSummaryList> & transcodeJobInfoSummaryList) { DARABONBA_PTR_SET_VALUE(transcodeJobInfoSummaryList_, transcodeJobInfoSummaryList) };
      inline TranscodeSummaryList& setTranscodeJobInfoSummaryList(vector<TranscodeSummaryList::TranscodeJobInfoSummaryList> && transcodeJobInfoSummaryList) { DARABONBA_PTR_SET_RVALUE(transcodeJobInfoSummaryList_, transcodeJobInfoSummaryList) };


      // transcodeStatus Field Functions 
      bool hasTranscodeStatus() const { return this->transcodeStatus_ != nullptr;};
      void deleteTranscodeStatus() { this->transcodeStatus_ = nullptr;};
      inline string getTranscodeStatus() const { DARABONBA_PTR_GET_DEFAULT(transcodeStatus_, "") };
      inline TranscodeSummaryList& setTranscodeStatus(string transcodeStatus) { DARABONBA_PTR_SET_VALUE(transcodeStatus_, transcodeStatus) };


      // transcodeTemplateGroupId Field Functions 
      bool hasTranscodeTemplateGroupId() const { return this->transcodeTemplateGroupId_ != nullptr;};
      void deleteTranscodeTemplateGroupId() { this->transcodeTemplateGroupId_ = nullptr;};
      inline string getTranscodeTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateGroupId_, "") };
      inline TranscodeSummaryList& setTranscodeTemplateGroupId(string transcodeTemplateGroupId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupId_, transcodeTemplateGroupId) };


      // videoId Field Functions 
      bool hasVideoId() const { return this->videoId_ != nullptr;};
      void deleteVideoId() { this->videoId_ = nullptr;};
      inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
      inline TranscodeSummaryList& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    protected:
      // The time when the transcoding task was complete. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> completeTime_ {};
      // The time when the transcoding task was created. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The summaries of transcoding jobs.
      shared_ptr<vector<TranscodeSummaryList::TranscodeJobInfoSummaryList>> transcodeJobInfoSummaryList_ {};
      // The status of the transcoding task. Valid values:
      // 
      // *   **Processing**: Transcoding is in process.
      // *   **Partial**: Some transcoding jobs were complete.
      // *   **CompleteAllSucc**: All transcoding jobs were successful.
      // *   **CompleteAllFail**: All transcoding jobs failed. If an exception occurs in the source file, no transcoding job is initiated and the transcoding task fails.
      // *   **CompletePartialSucc**: All transcoding jobs were complete but only some were successful.
      shared_ptr<string> transcodeStatus_ {};
      // The ID of the transcoding template group.
      shared_ptr<string> transcodeTemplateGroupId_ {};
      // The ID of the audio or video file.
      shared_ptr<string> videoId_ {};
    };

    virtual bool empty() const override { return this->nonExistVideoIds_ == nullptr
        && this->requestId_ == nullptr && this->transcodeSummaryList_ == nullptr; };
    // nonExistVideoIds Field Functions 
    bool hasNonExistVideoIds() const { return this->nonExistVideoIds_ != nullptr;};
    void deleteNonExistVideoIds() { this->nonExistVideoIds_ = nullptr;};
    inline const vector<string> & getNonExistVideoIds() const { DARABONBA_PTR_GET_CONST(nonExistVideoIds_, vector<string>) };
    inline vector<string> getNonExistVideoIds() { DARABONBA_PTR_GET(nonExistVideoIds_, vector<string>) };
    inline GetTranscodeSummaryResponseBody& setNonExistVideoIds(const vector<string> & nonExistVideoIds) { DARABONBA_PTR_SET_VALUE(nonExistVideoIds_, nonExistVideoIds) };
    inline GetTranscodeSummaryResponseBody& setNonExistVideoIds(vector<string> && nonExistVideoIds) { DARABONBA_PTR_SET_RVALUE(nonExistVideoIds_, nonExistVideoIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTranscodeSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeSummaryList Field Functions 
    bool hasTranscodeSummaryList() const { return this->transcodeSummaryList_ != nullptr;};
    void deleteTranscodeSummaryList() { this->transcodeSummaryList_ = nullptr;};
    inline const vector<GetTranscodeSummaryResponseBody::TranscodeSummaryList> & getTranscodeSummaryList() const { DARABONBA_PTR_GET_CONST(transcodeSummaryList_, vector<GetTranscodeSummaryResponseBody::TranscodeSummaryList>) };
    inline vector<GetTranscodeSummaryResponseBody::TranscodeSummaryList> getTranscodeSummaryList() { DARABONBA_PTR_GET(transcodeSummaryList_, vector<GetTranscodeSummaryResponseBody::TranscodeSummaryList>) };
    inline GetTranscodeSummaryResponseBody& setTranscodeSummaryList(const vector<GetTranscodeSummaryResponseBody::TranscodeSummaryList> & transcodeSummaryList) { DARABONBA_PTR_SET_VALUE(transcodeSummaryList_, transcodeSummaryList) };
    inline GetTranscodeSummaryResponseBody& setTranscodeSummaryList(vector<GetTranscodeSummaryResponseBody::TranscodeSummaryList> && transcodeSummaryList) { DARABONBA_PTR_SET_RVALUE(transcodeSummaryList_, transcodeSummaryList) };


  protected:
    // The IDs of the audio or video files that do not exist.
    shared_ptr<vector<string>> nonExistVideoIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The transcoding summary of the file.
    shared_ptr<vector<GetTranscodeSummaryResponseBody::TranscodeSummaryList>> transcodeSummaryList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
