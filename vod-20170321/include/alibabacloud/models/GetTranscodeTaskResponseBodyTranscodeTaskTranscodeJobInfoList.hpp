// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODETASKRESPONSEBODYTRANSCODETASKTRANSCODEJOBINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODETASKRESPONSEBODYTRANSCODETASKTRANSCODEJOBINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList& obj) { 
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
    GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList() = default ;
    GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList(const GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList &) = default ;
    GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList(GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList &&) = default ;
    GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList() = default ;
    GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList& operator=(const GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList &) = default ;
    GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList& operator=(GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completeTime_ != nullptr
        && this->creationTime_ != nullptr && this->definition_ != nullptr && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->inputFileUrl_ != nullptr
        && this->outputFile_ != nullptr && this->priority_ != nullptr && this->transcodeJobId_ != nullptr && this->transcodeJobStatus_ != nullptr && this->transcodeProgress_ != nullptr
        && this->transcodeTemplateId_ != nullptr; };
    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string definition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // inputFileUrl Field Functions 
    bool hasInputFileUrl() const { return this->inputFileUrl_ != nullptr;};
    void deleteInputFileUrl() { this->inputFileUrl_ = nullptr;};
    inline string inputFileUrl() const { DARABONBA_PTR_GET_DEFAULT(inputFileUrl_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList& setInputFileUrl(string inputFileUrl) { DARABONBA_PTR_SET_VALUE(inputFileUrl_, inputFileUrl) };


    // outputFile Field Functions 
    bool hasOutputFile() const { return this->outputFile_ != nullptr;};
    void deleteOutputFile() { this->outputFile_ = nullptr;};
    inline const Models::GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile & outputFile() const { DARABONBA_PTR_GET_CONST(outputFile_, Models::GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile) };
    inline Models::GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile outputFile() { DARABONBA_PTR_GET(outputFile_, Models::GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile) };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList& setOutputFile(const Models::GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile & outputFile) { DARABONBA_PTR_SET_VALUE(outputFile_, outputFile) };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList& setOutputFile(Models::GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile && outputFile) { DARABONBA_PTR_SET_RVALUE(outputFile_, outputFile) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // transcodeJobId Field Functions 
    bool hasTranscodeJobId() const { return this->transcodeJobId_ != nullptr;};
    void deleteTranscodeJobId() { this->transcodeJobId_ = nullptr;};
    inline string transcodeJobId() const { DARABONBA_PTR_GET_DEFAULT(transcodeJobId_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList& setTranscodeJobId(string transcodeJobId) { DARABONBA_PTR_SET_VALUE(transcodeJobId_, transcodeJobId) };


    // transcodeJobStatus Field Functions 
    bool hasTranscodeJobStatus() const { return this->transcodeJobStatus_ != nullptr;};
    void deleteTranscodeJobStatus() { this->transcodeJobStatus_ = nullptr;};
    inline string transcodeJobStatus() const { DARABONBA_PTR_GET_DEFAULT(transcodeJobStatus_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList& setTranscodeJobStatus(string transcodeJobStatus) { DARABONBA_PTR_SET_VALUE(transcodeJobStatus_, transcodeJobStatus) };


    // transcodeProgress Field Functions 
    bool hasTranscodeProgress() const { return this->transcodeProgress_ != nullptr;};
    void deleteTranscodeProgress() { this->transcodeProgress_ = nullptr;};
    inline int64_t transcodeProgress() const { DARABONBA_PTR_GET_DEFAULT(transcodeProgress_, 0L) };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList& setTranscodeProgress(int64_t transcodeProgress) { DARABONBA_PTR_SET_VALUE(transcodeProgress_, transcodeProgress) };


    // transcodeTemplateId Field Functions 
    bool hasTranscodeTemplateId() const { return this->transcodeTemplateId_ != nullptr;};
    void deleteTranscodeTemplateId() { this->transcodeTemplateId_ = nullptr;};
    inline string transcodeTemplateId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateId_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList& setTranscodeTemplateId(string transcodeTemplateId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateId_, transcodeTemplateId) };


  protected:
    // The time when the transcoding job was complete. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> completeTime_ = nullptr;
    // The time when the transcoding job was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The video resolution. Valid values:
    // 
    // *   **LD**: low definition
    // *   **SD**: standard definition
    // *   **HD**: high definition
    // *   **FHD**: ultra high definition
    // *   **OD**: original definition
    // *   **2K**: 2K
    // *   **4K**: 4K
    // *   **SQ**: standard sound quality
    // *   **HQ**: high sound quality
    // *   **AUTO**: adaptive bitrate Adaptive bitrate streams are returned only if PackageSetting is set in the transcoding template. For more information, see [Basic structures](https://help.aliyun.com/document_detail/52839.html).
    // 
    // > This parameter indicates the definition that is configured in the transcoding template and does not indicate the actual resolution of the output video.
    std::shared_ptr<string> definition_ = nullptr;
    // The error code returned when the transcoding job failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned when the transcoding job failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The Object Storage Service (OSS) URL of the input file.
    std::shared_ptr<string> inputFileUrl_ = nullptr;
    // The information about the output file.
    std::shared_ptr<Models::GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoListOutputFile> outputFile_ = nullptr;
    // The priority of the transcoding job.
    std::shared_ptr<string> priority_ = nullptr;
    // The ID of the transcoding job.
    std::shared_ptr<string> transcodeJobId_ = nullptr;
    // The status of the transcoding job.
    // 
    // *   **Transcoding**
    // *   **TranscodeSuccess**
    // *   **TranscodeFail**
    std::shared_ptr<string> transcodeJobStatus_ = nullptr;
    // The progress of the transcoding job. Valid values: `[0,100]`.
    std::shared_ptr<int64_t> transcodeProgress_ = nullptr;
    // The ID of the transcoding template.
    std::shared_ptr<string> transcodeTemplateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
