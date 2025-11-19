// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOB_HPP_
#define ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAIMediaAuditJobResponseBodyMediaAuditJobData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIMediaAuditJobResponseBodyMediaAuditJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIMediaAuditJobResponseBodyMediaAuditJob& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIMediaAuditJobResponseBodyMediaAuditJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetAIMediaAuditJobResponseBodyMediaAuditJob() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJob(const GetAIMediaAuditJobResponseBodyMediaAuditJob &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJob(GetAIMediaAuditJobResponseBodyMediaAuditJob &&) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIMediaAuditJobResponseBodyMediaAuditJob() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJob& operator=(const GetAIMediaAuditJobResponseBodyMediaAuditJob &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJob& operator=(GetAIMediaAuditJobResponseBodyMediaAuditJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->completeTime_ == nullptr && return this->creationTime_ == nullptr && return this->data_ == nullptr && return this->jobId_ == nullptr && return this->mediaId_ == nullptr
        && return this->message_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJob& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::GetAIMediaAuditJobResponseBodyMediaAuditJobData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::GetAIMediaAuditJobResponseBodyMediaAuditJobData) };
    inline Models::GetAIMediaAuditJobResponseBodyMediaAuditJobData data() { DARABONBA_PTR_GET(data_, Models::GetAIMediaAuditJobResponseBodyMediaAuditJobData) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJob& setData(const Models::GetAIMediaAuditJobResponseBodyMediaAuditJobData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJob& setData(Models::GetAIMediaAuditJobResponseBodyMediaAuditJobData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJob& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJob& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The error code. This parameter is returned if the value of Status is fail.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the job is complete. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> completeTime_ = nullptr;
    // The time when the job started to run. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The job result.
    std::shared_ptr<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobData> data_ = nullptr;
    // The ID of the job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The ID of the video.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The error message. This parameter is returned if the value of Status is fail.
    std::shared_ptr<string> message_ = nullptr;
    // The status of the job. Valid values:
    // 
    // *   **success**: The job is successful.
    // *   **fail**: The job failed.
    // *   **init**: The job is being initialized.
    // *   **Processing**: The job is in progress.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the job. The value is AIMediaAudit.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
