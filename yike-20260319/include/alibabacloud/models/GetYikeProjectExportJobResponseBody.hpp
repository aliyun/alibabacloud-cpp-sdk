// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYIKEPROJECTEXPORTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETYIKEPROJECTEXPORTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class GetYikeProjectExportJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYikeProjectExportJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectExportJob, projectExportJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetYikeProjectExportJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectExportJob, projectExportJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetYikeProjectExportJobResponseBody() = default ;
    GetYikeProjectExportJobResponseBody(const GetYikeProjectExportJobResponseBody &) = default ;
    GetYikeProjectExportJobResponseBody(GetYikeProjectExportJobResponseBody &&) = default ;
    GetYikeProjectExportJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYikeProjectExportJobResponseBody() = default ;
    GetYikeProjectExportJobResponseBody& operator=(const GetYikeProjectExportJobResponseBody &) = default ;
    GetYikeProjectExportJobResponseBody& operator=(GetYikeProjectExportJobResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AudioUrl, audioUrl_);
          DARABONBA_PTR_TO_JSON(ProjectUrl, projectUrl_);
          DARABONBA_PTR_TO_JSON(SrtList, srtList_);
          DARABONBA_PTR_TO_JSON(Timeline, timeline_);
        };
        friend void from_json(const Darabonba::Json& j, ExportResult& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioUrl, audioUrl_);
          DARABONBA_PTR_FROM_JSON(ProjectUrl, projectUrl_);
          DARABONBA_PTR_FROM_JSON(SrtList, srtList_);
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
        class SrtList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SrtList& obj) { 
            DARABONBA_PTR_TO_JSON(SrtUrl, srtUrl_);
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, SrtList& obj) { 
            DARABONBA_PTR_FROM_JSON(SrtUrl, srtUrl_);
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          SrtList() = default ;
          SrtList(const SrtList &) = default ;
          SrtList(SrtList &&) = default ;
          SrtList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SrtList() = default ;
          SrtList& operator=(const SrtList &) = default ;
          SrtList& operator=(SrtList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->srtUrl_ == nullptr
        && this->tag_ == nullptr; };
          // srtUrl Field Functions 
          bool hasSrtUrl() const { return this->srtUrl_ != nullptr;};
          void deleteSrtUrl() { this->srtUrl_ = nullptr;};
          inline string getSrtUrl() const { DARABONBA_PTR_GET_DEFAULT(srtUrl_, "") };
          inline SrtList& setSrtUrl(string srtUrl) { DARABONBA_PTR_SET_VALUE(srtUrl_, srtUrl) };


          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
          inline SrtList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        protected:
          // The download URL of the SRT file.
          shared_ptr<string> srtUrl_ {};
          // The type enumeration. Currently, only VoiceOver is supported.
          shared_ptr<string> tag_ {};
        };

        virtual bool empty() const override { return this->audioUrl_ == nullptr
        && this->projectUrl_ == nullptr && this->srtList_ == nullptr && this->timeline_ == nullptr; };
        // audioUrl Field Functions 
        bool hasAudioUrl() const { return this->audioUrl_ != nullptr;};
        void deleteAudioUrl() { this->audioUrl_ = nullptr;};
        inline string getAudioUrl() const { DARABONBA_PTR_GET_DEFAULT(audioUrl_, "") };
        inline ExportResult& setAudioUrl(string audioUrl) { DARABONBA_PTR_SET_VALUE(audioUrl_, audioUrl) };


        // projectUrl Field Functions 
        bool hasProjectUrl() const { return this->projectUrl_ != nullptr;};
        void deleteProjectUrl() { this->projectUrl_ = nullptr;};
        inline string getProjectUrl() const { DARABONBA_PTR_GET_DEFAULT(projectUrl_, "") };
        inline ExportResult& setProjectUrl(string projectUrl) { DARABONBA_PTR_SET_VALUE(projectUrl_, projectUrl) };


        // srtList Field Functions 
        bool hasSrtList() const { return this->srtList_ != nullptr;};
        void deleteSrtList() { this->srtList_ = nullptr;};
        inline const vector<ExportResult::SrtList> & getSrtList() const { DARABONBA_PTR_GET_CONST(srtList_, vector<ExportResult::SrtList>) };
        inline vector<ExportResult::SrtList> getSrtList() { DARABONBA_PTR_GET(srtList_, vector<ExportResult::SrtList>) };
        inline ExportResult& setSrtList(const vector<ExportResult::SrtList> & srtList) { DARABONBA_PTR_SET_VALUE(srtList_, srtList) };
        inline ExportResult& setSrtList(vector<ExportResult::SrtList> && srtList) { DARABONBA_PTR_SET_RVALUE(srtList_, srtList) };


        // timeline Field Functions 
        bool hasTimeline() const { return this->timeline_ != nullptr;};
        void deleteTimeline() { this->timeline_ = nullptr;};
        inline string getTimeline() const { DARABONBA_PTR_GET_DEFAULT(timeline_, "") };
        inline ExportResult& setTimeline(string timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };


      protected:
        // The download URL of the audio file.
        shared_ptr<string> audioUrl_ {};
        // The download URL of the PR project file (not supported).
        shared_ptr<string> projectUrl_ {};
        // The subtitle list.
        shared_ptr<vector<ExportResult::SrtList>> srtList_ {};
        // The editing timeline (not supported).
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
      // The task failure code.
      shared_ptr<string> code_ {};
      // The export result.
      shared_ptr<ProjectExportJob::ExportResult> exportResult_ {};
      // The project export type.
      shared_ptr<string> exportType_ {};
      // The task ID.
      shared_ptr<string> jobId_ {};
      // The task failure message.
      shared_ptr<string> message_ {};
      // The online editing project ID.
      shared_ptr<string> projectId_ {};
      // The task status.
      shared_ptr<string> status_ {};
      // The custom data.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->projectExportJob_ == nullptr
        && this->requestId_ == nullptr; };
    // projectExportJob Field Functions 
    bool hasProjectExportJob() const { return this->projectExportJob_ != nullptr;};
    void deleteProjectExportJob() { this->projectExportJob_ = nullptr;};
    inline const GetYikeProjectExportJobResponseBody::ProjectExportJob & getProjectExportJob() const { DARABONBA_PTR_GET_CONST(projectExportJob_, GetYikeProjectExportJobResponseBody::ProjectExportJob) };
    inline GetYikeProjectExportJobResponseBody::ProjectExportJob getProjectExportJob() { DARABONBA_PTR_GET(projectExportJob_, GetYikeProjectExportJobResponseBody::ProjectExportJob) };
    inline GetYikeProjectExportJobResponseBody& setProjectExportJob(const GetYikeProjectExportJobResponseBody::ProjectExportJob & projectExportJob) { DARABONBA_PTR_SET_VALUE(projectExportJob_, projectExportJob) };
    inline GetYikeProjectExportJobResponseBody& setProjectExportJob(GetYikeProjectExportJobResponseBody::ProjectExportJob && projectExportJob) { DARABONBA_PTR_SET_RVALUE(projectExportJob_, projectExportJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetYikeProjectExportJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The export task object.
    shared_ptr<GetYikeProjectExportJobResponseBody::ProjectExportJob> projectExportJob_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
