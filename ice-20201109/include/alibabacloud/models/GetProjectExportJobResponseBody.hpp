// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTEXPORTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTEXPORTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetProjectExportJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectExportJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectExportJob, projectExportJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectExportJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectExportJob, projectExportJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProjectExportJobResponseBody() = default ;
    GetProjectExportJobResponseBody(const GetProjectExportJobResponseBody &) = default ;
    GetProjectExportJobResponseBody(GetProjectExportJobResponseBody &&) = default ;
    GetProjectExportJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectExportJobResponseBody() = default ;
    GetProjectExportJobResponseBody& operator=(const GetProjectExportJobResponseBody &) = default ;
    GetProjectExportJobResponseBody& operator=(GetProjectExportJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProjectExportJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProjectExportJob& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(ExportResult, exportResult_);
        DARABONBA_PTR_TO_JSON(ExportType, exportType_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, ProjectExportJob& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(ExportResult, exportResult_);
        DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      ProjectExportJob() = default ;
      ProjectExportJob(const ProjectExportJob &) = default ;
      ProjectExportJob(ProjectExportJob &&) = default ;
      ProjectExportJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProjectExportJob() = default ;
      ProjectExportJob& operator=(const ProjectExportJob &) = default ;
      ProjectExportJob& operator=(ProjectExportJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ExportResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExportResult& obj) { 
          DARABONBA_PTR_TO_JSON(ProjectUrl, projectUrl_);
          DARABONBA_PTR_TO_JSON(Timeline, timeline_);
        };
        friend void from_json(const Darabonba::Json& j, ExportResult& obj) { 
          DARABONBA_PTR_FROM_JSON(ProjectUrl, projectUrl_);
          DARABONBA_PTR_FROM_JSON(Timeline, timeline_);
        };
        ExportResult() = default ;
        ExportResult(const ExportResult &) = default ;
        ExportResult(ExportResult &&) = default ;
        ExportResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExportResult() = default ;
        ExportResult& operator=(const ExportResult &) = default ;
        ExportResult& operator=(ExportResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->projectUrl_ == nullptr
        && this->timeline_ == nullptr; };
        // projectUrl Field Functions 
        bool hasProjectUrl() const { return this->projectUrl_ != nullptr;};
        void deleteProjectUrl() { this->projectUrl_ = nullptr;};
        inline string getProjectUrl() const { DARABONBA_PTR_GET_DEFAULT(projectUrl_, "") };
        inline ExportResult& setProjectUrl(string projectUrl) { DARABONBA_PTR_SET_VALUE(projectUrl_, projectUrl) };


        // timeline Field Functions 
        bool hasTimeline() const { return this->timeline_ != nullptr;};
        void deleteTimeline() { this->timeline_ = nullptr;};
        inline string getTimeline() const { DARABONBA_PTR_GET_DEFAULT(timeline_, "") };
        inline ExportResult& setTimeline(string timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };


      protected:
        // The URL of the exported project, which is typically a signed OSS URL. This field is returned when ExportType is AdobePremierePro.
        shared_ptr<string> projectUrl_ {};
        // The timeline of the online editing job. This field is returned when ExportType is BaseTimeline. For data structure, see [Timeline](https://help.aliyun.com/document_detail/198823.html).
        shared_ptr<string> timeline_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->exportResult_ == nullptr && this->exportType_ == nullptr && this->jobId_ == nullptr && this->message_ == nullptr && this->projectId_ == nullptr
        && this->status_ == nullptr && this->userData_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline ProjectExportJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // exportResult Field Functions 
      bool hasExportResult() const { return this->exportResult_ != nullptr;};
      void deleteExportResult() { this->exportResult_ = nullptr;};
      inline const ProjectExportJob::ExportResult & getExportResult() const { DARABONBA_PTR_GET_CONST(exportResult_, ProjectExportJob::ExportResult) };
      inline ProjectExportJob::ExportResult getExportResult() { DARABONBA_PTR_GET(exportResult_, ProjectExportJob::ExportResult) };
      inline ProjectExportJob& setExportResult(const ProjectExportJob::ExportResult & exportResult) { DARABONBA_PTR_SET_VALUE(exportResult_, exportResult) };
      inline ProjectExportJob& setExportResult(ProjectExportJob::ExportResult && exportResult) { DARABONBA_PTR_SET_RVALUE(exportResult_, exportResult) };


      // exportType Field Functions 
      bool hasExportType() const { return this->exportType_ != nullptr;};
      void deleteExportType() { this->exportType_ = nullptr;};
      inline string getExportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
      inline ProjectExportJob& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline ProjectExportJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline ProjectExportJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline ProjectExportJob& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ProjectExportJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline ProjectExportJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // The error code for the failed export task.
      // >Notice: Use the error code for troubleshooting.
      shared_ptr<string> code_ {};
      // The exported data.
      shared_ptr<ProjectExportJob::ExportResult> exportResult_ {};
      // The export type. Valid values:
      // 
      // *   **BaseTimeline**: exports the timeline.
      // *   **AdobePremierePro**: exports an Adobe Premiere Pro project.
      shared_ptr<string> exportType_ {};
      // The ID of the project export task.
      shared_ptr<string> jobId_ {};
      // The error message for the failed export task.
      // >Notice: Use the error message for troubleshooting.
      shared_ptr<string> message_ {};
      // The ID of the online editing project.
      shared_ptr<string> projectId_ {};
      // The status of the project export task. Valid values:
      // 
      // - Init: Initializing
      // - Processing
      // - Success
      // - Failed
      shared_ptr<string> status_ {};
      // The user-defined data in the JSON format.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->projectExportJob_ == nullptr
        && this->requestId_ == nullptr; };
    // projectExportJob Field Functions 
    bool hasProjectExportJob() const { return this->projectExportJob_ != nullptr;};
    void deleteProjectExportJob() { this->projectExportJob_ = nullptr;};
    inline const GetProjectExportJobResponseBody::ProjectExportJob & getProjectExportJob() const { DARABONBA_PTR_GET_CONST(projectExportJob_, GetProjectExportJobResponseBody::ProjectExportJob) };
    inline GetProjectExportJobResponseBody::ProjectExportJob getProjectExportJob() { DARABONBA_PTR_GET(projectExportJob_, GetProjectExportJobResponseBody::ProjectExportJob) };
    inline GetProjectExportJobResponseBody& setProjectExportJob(const GetProjectExportJobResponseBody::ProjectExportJob & projectExportJob) { DARABONBA_PTR_SET_VALUE(projectExportJob_, projectExportJob) };
    inline GetProjectExportJobResponseBody& setProjectExportJob(GetProjectExportJobResponseBody::ProjectExportJob && projectExportJob) { DARABONBA_PTR_SET_RVALUE(projectExportJob_, projectExportJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProjectExportJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The project export task.
    shared_ptr<GetProjectExportJobResponseBody::ProjectExportJob> projectExportJob_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
