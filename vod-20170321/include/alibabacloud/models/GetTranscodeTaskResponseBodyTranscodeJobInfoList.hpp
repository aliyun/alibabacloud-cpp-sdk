// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODETASKRESPONSEBODYTRANSCODEJOBINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODETASKRESPONSEBODYTRANSCODEJOBINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTranscodeTaskResponseBodyTranscodeJobInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeTaskResponseBodyTranscodeJobInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(InputFileUrl, inputFileUrl_);
      DARABONBA_PTR_TO_JSON(OutputFile, outputFile_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(TranscodeJobId, transcodeJobId_);
      DARABONBA_PTR_TO_JSON(TranscodeJobStatus, transcodeJobStatus_);
      DARABONBA_PTR_TO_JSON(TranscodeProgress, transcodeProgress_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateId, transcodeTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeTaskResponseBodyTranscodeJobInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(InputFileUrl, inputFileUrl_);
      DARABONBA_PTR_FROM_JSON(OutputFile, outputFile_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(TranscodeJobId, transcodeJobId_);
      DARABONBA_PTR_FROM_JSON(TranscodeJobStatus, transcodeJobStatus_);
      DARABONBA_PTR_FROM_JSON(TranscodeProgress, transcodeProgress_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateId, transcodeTemplateId_);
    };
    GetTranscodeTaskResponseBodyTranscodeJobInfoList() = default ;
    GetTranscodeTaskResponseBodyTranscodeJobInfoList(const GetTranscodeTaskResponseBodyTranscodeJobInfoList &) = default ;
    GetTranscodeTaskResponseBodyTranscodeJobInfoList(GetTranscodeTaskResponseBodyTranscodeJobInfoList &&) = default ;
    GetTranscodeTaskResponseBodyTranscodeJobInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeTaskResponseBodyTranscodeJobInfoList() = default ;
    GetTranscodeTaskResponseBodyTranscodeJobInfoList& operator=(const GetTranscodeTaskResponseBodyTranscodeJobInfoList &) = default ;
    GetTranscodeTaskResponseBodyTranscodeJobInfoList& operator=(GetTranscodeTaskResponseBodyTranscodeJobInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completeTime_ == nullptr
        && return this->creationTime_ == nullptr && return this->definition_ == nullptr && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->inputFileUrl_ == nullptr
        && return this->outputFile_ == nullptr && return this->priority_ == nullptr && return this->transcodeJobId_ == nullptr && return this->transcodeJobStatus_ == nullptr && return this->transcodeProgress_ == nullptr
        && return this->transcodeTemplateId_ == nullptr; };
    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string definition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoList& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // inputFileUrl Field Functions 
    bool hasInputFileUrl() const { return this->inputFileUrl_ != nullptr;};
    void deleteInputFileUrl() { this->inputFileUrl_ = nullptr;};
    inline string inputFileUrl() const { DARABONBA_PTR_GET_DEFAULT(inputFileUrl_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoList& setInputFileUrl(string inputFileUrl) { DARABONBA_PTR_SET_VALUE(inputFileUrl_, inputFileUrl) };


    // outputFile Field Functions 
    bool hasOutputFile() const { return this->outputFile_ != nullptr;};
    void deleteOutputFile() { this->outputFile_ = nullptr;};
    inline const Models::GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile & outputFile() const { DARABONBA_PTR_GET_CONST(outputFile_, Models::GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile) };
    inline Models::GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile outputFile() { DARABONBA_PTR_GET(outputFile_, Models::GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile) };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoList& setOutputFile(const Models::GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile & outputFile) { DARABONBA_PTR_SET_VALUE(outputFile_, outputFile) };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoList& setOutputFile(Models::GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile && outputFile) { DARABONBA_PTR_SET_RVALUE(outputFile_, outputFile) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoList& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // transcodeJobId Field Functions 
    bool hasTranscodeJobId() const { return this->transcodeJobId_ != nullptr;};
    void deleteTranscodeJobId() { this->transcodeJobId_ = nullptr;};
    inline string transcodeJobId() const { DARABONBA_PTR_GET_DEFAULT(transcodeJobId_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoList& setTranscodeJobId(string transcodeJobId) { DARABONBA_PTR_SET_VALUE(transcodeJobId_, transcodeJobId) };


    // transcodeJobStatus Field Functions 
    bool hasTranscodeJobStatus() const { return this->transcodeJobStatus_ != nullptr;};
    void deleteTranscodeJobStatus() { this->transcodeJobStatus_ = nullptr;};
    inline string transcodeJobStatus() const { DARABONBA_PTR_GET_DEFAULT(transcodeJobStatus_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoList& setTranscodeJobStatus(string transcodeJobStatus) { DARABONBA_PTR_SET_VALUE(transcodeJobStatus_, transcodeJobStatus) };


    // transcodeProgress Field Functions 
    bool hasTranscodeProgress() const { return this->transcodeProgress_ != nullptr;};
    void deleteTranscodeProgress() { this->transcodeProgress_ = nullptr;};
    inline int64_t transcodeProgress() const { DARABONBA_PTR_GET_DEFAULT(transcodeProgress_, 0L) };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoList& setTranscodeProgress(int64_t transcodeProgress) { DARABONBA_PTR_SET_VALUE(transcodeProgress_, transcodeProgress) };


    // transcodeTemplateId Field Functions 
    bool hasTranscodeTemplateId() const { return this->transcodeTemplateId_ != nullptr;};
    void deleteTranscodeTemplateId() { this->transcodeTemplateId_ = nullptr;};
    inline string transcodeTemplateId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateId_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeJobInfoList& setTranscodeTemplateId(string transcodeTemplateId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateId_, transcodeTemplateId) };


  protected:
    // The complete time of the transcoding job. The format is yyyy-MM-dd\\"T\\"HH:mm:ssZ (UTC time).
    std::shared_ptr<string> completeTime_ = nullptr;
    // The creation time of the transcoding job. The format is yyyy-MM-dd\\"T\\"HH:mm:ssZ (UTC time).
    std::shared_ptr<string> creationTime_ = nullptr;
    // The clarity and audio quality types are defined as follows:
    // 
    // - SD: Standard Definition.
    // - HD: High Definition.
    // - FHD: Full High Definition.
    // - OD: Original Definition.
    // - 2K: 2K.
    // - 4K: 4K.
    // - SQ: Standard Audio Quality.
    // - HQ: High Audio Quality.
    // - AUTO: Adaptive Bitrate.  This is only available when the transcoding template is configured with packaging settings. Please refer to [the Transcoding Template Configuration - Package Setting](https://api.aliyun-inc.com/~~52839~~?spm=openapi-amp.newDocPublishment.0.0.65b0281fNUFIXC) for more details.
    // 
    // > This value represents the clarity label configured in the transcoding template and does not indicate the actual resolution range of the transcoded output file.
    std::shared_ptr<string> definition_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The OSS address of the source file for transcoding.
    std::shared_ptr<string> inputFileUrl_ = nullptr;
    // Information about the transcoded output files.
    std::shared_ptr<Models::GetTranscodeTaskResponseBodyTranscodeJobInfoListOutputFile> outputFile_ = nullptr;
    // The priority of the transcoding task.
    std::shared_ptr<string> priority_ = nullptr;
    // The ID of the transcode job.
    std::shared_ptr<string> transcodeJobId_ = nullptr;
    // The status of the transcoding job:
    // 
    // Transcoding: Transcoding in progress.
    // TranscodeSuccess: Transcoding successful.
    // TranscodeFail: Transcoding failed.
    std::shared_ptr<string> transcodeJobStatus_ = nullptr;
    // The processing progress of the transcoding job. The value range is [0, 100].
    std::shared_ptr<int64_t> transcodeProgress_ = nullptr;
    // The ID of the template used for the transcode job.
    std::shared_ptr<string> transcodeTemplateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
