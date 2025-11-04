// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTEXPORTJOBRESPONSEBODYPROJECTEXPORTJOB_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTEXPORTJOBRESPONSEBODYPROJECTEXPORTJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetProjectExportJobResponseBodyProjectExportJobExportResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetProjectExportJobResponseBodyProjectExportJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectExportJobResponseBodyProjectExportJob& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ExportResult, exportResult_);
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectExportJobResponseBodyProjectExportJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ExportResult, exportResult_);
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetProjectExportJobResponseBodyProjectExportJob() = default ;
    GetProjectExportJobResponseBodyProjectExportJob(const GetProjectExportJobResponseBodyProjectExportJob &) = default ;
    GetProjectExportJobResponseBodyProjectExportJob(GetProjectExportJobResponseBodyProjectExportJob &&) = default ;
    GetProjectExportJobResponseBodyProjectExportJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectExportJobResponseBodyProjectExportJob() = default ;
    GetProjectExportJobResponseBodyProjectExportJob& operator=(const GetProjectExportJobResponseBodyProjectExportJob &) = default ;
    GetProjectExportJobResponseBodyProjectExportJob& operator=(GetProjectExportJobResponseBodyProjectExportJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->exportResult_ == nullptr && return this->exportType_ == nullptr && return this->jobId_ == nullptr && return this->message_ == nullptr && return this->projectId_ == nullptr
        && return this->status_ == nullptr && return this->userData_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetProjectExportJobResponseBodyProjectExportJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // exportResult Field Functions 
    bool hasExportResult() const { return this->exportResult_ != nullptr;};
    void deleteExportResult() { this->exportResult_ = nullptr;};
    inline const Models::GetProjectExportJobResponseBodyProjectExportJobExportResult & exportResult() const { DARABONBA_PTR_GET_CONST(exportResult_, Models::GetProjectExportJobResponseBodyProjectExportJobExportResult) };
    inline Models::GetProjectExportJobResponseBodyProjectExportJobExportResult exportResult() { DARABONBA_PTR_GET(exportResult_, Models::GetProjectExportJobResponseBodyProjectExportJobExportResult) };
    inline GetProjectExportJobResponseBodyProjectExportJob& setExportResult(const Models::GetProjectExportJobResponseBodyProjectExportJobExportResult & exportResult) { DARABONBA_PTR_SET_VALUE(exportResult_, exportResult) };
    inline GetProjectExportJobResponseBodyProjectExportJob& setExportResult(Models::GetProjectExportJobResponseBodyProjectExportJobExportResult && exportResult) { DARABONBA_PTR_SET_RVALUE(exportResult_, exportResult) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string exportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline GetProjectExportJobResponseBodyProjectExportJob& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetProjectExportJobResponseBodyProjectExportJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetProjectExportJobResponseBodyProjectExportJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetProjectExportJobResponseBodyProjectExportJob& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetProjectExportJobResponseBodyProjectExportJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetProjectExportJobResponseBodyProjectExportJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The error code for the failed export task.
    // >Notice: Use the error code for troubleshooting.
    std::shared_ptr<string> code_ = nullptr;
    // The exported data.
    std::shared_ptr<Models::GetProjectExportJobResponseBodyProjectExportJobExportResult> exportResult_ = nullptr;
    // The export type. Valid values:
    // 
    // *   **BaseTimeline**: exports the timeline.
    // *   **AdobePremierePro**: exports an Adobe Premiere Pro project.
    std::shared_ptr<string> exportType_ = nullptr;
    // The ID of the project export task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The error message for the failed export task.
    // >Notice: Use the error message for troubleshooting.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the online editing project.
    std::shared_ptr<string> projectId_ = nullptr;
    // The status of the project export task. Valid values:
    // 
    // - Init: Initializing
    // - Processing
    // - Success
    // - Failed
    std::shared_ptr<string> status_ = nullptr;
    // The user-defined data in the JSON format.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
