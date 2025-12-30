// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVETRANSCODEJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVETRANSCODEJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveTranscodeJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveTranscodeJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobList, jobList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveTranscodeJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobList, jobList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLiveTranscodeJobsResponseBody() = default ;
    ListLiveTranscodeJobsResponseBody(const ListLiveTranscodeJobsResponseBody &) = default ;
    ListLiveTranscodeJobsResponseBody(ListLiveTranscodeJobsResponseBody &&) = default ;
    ListLiveTranscodeJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveTranscodeJobsResponseBody() = default ;
    ListLiveTranscodeJobsResponseBody& operator=(const ListLiveTranscodeJobsResponseBody &) = default ;
    ListLiveTranscodeJobsResponseBody& operator=(ListLiveTranscodeJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobList& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OutputStream, outputStream_);
        DARABONBA_PTR_TO_JSON(StartMode, startMode_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StreamInput, streamInput_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      };
      friend void from_json(const Darabonba::Json& j, JobList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OutputStream, outputStream_);
        DARABONBA_PTR_FROM_JSON(StartMode, startMode_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StreamInput, streamInput_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      };
      JobList() = default ;
      JobList(const JobList &) = default ;
      JobList(JobList &&) = default ;
      JobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobList() = default ;
      JobList& operator=(const JobList &) = default ;
      JobList& operator=(JobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StreamInput : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StreamInput& obj) { 
          DARABONBA_PTR_TO_JSON(InputUrl, inputUrl_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, StreamInput& obj) { 
          DARABONBA_PTR_FROM_JSON(InputUrl, inputUrl_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        StreamInput() = default ;
        StreamInput(const StreamInput &) = default ;
        StreamInput(StreamInput &&) = default ;
        StreamInput(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StreamInput() = default ;
        StreamInput& operator=(const StreamInput &) = default ;
        StreamInput& operator=(StreamInput &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->inputUrl_ == nullptr
        && this->type_ == nullptr; };
        // inputUrl Field Functions 
        bool hasInputUrl() const { return this->inputUrl_ != nullptr;};
        void deleteInputUrl() { this->inputUrl_ = nullptr;};
        inline string getInputUrl() const { DARABONBA_PTR_GET_DEFAULT(inputUrl_, "") };
        inline StreamInput& setInputUrl(string inputUrl) { DARABONBA_PTR_SET_VALUE(inputUrl_, inputUrl) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline StreamInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The URL of the input stream.
        shared_ptr<string> inputUrl_ {};
        // The type of the input stream.
        shared_ptr<string> type_ {};
      };

      class OutputStream : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OutputStream& obj) { 
          DARABONBA_PTR_TO_JSON(StreamInfos, streamInfos_);
        };
        friend void from_json(const Darabonba::Json& j, OutputStream& obj) { 
          DARABONBA_PTR_FROM_JSON(StreamInfos, streamInfos_);
        };
        OutputStream() = default ;
        OutputStream(const OutputStream &) = default ;
        OutputStream(OutputStream &&) = default ;
        OutputStream(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OutputStream() = default ;
        OutputStream& operator=(const OutputStream &) = default ;
        OutputStream& operator=(OutputStream &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StreamInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StreamInfos& obj) { 
            DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, StreamInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          StreamInfos() = default ;
          StreamInfos(const StreamInfos &) = default ;
          StreamInfos(StreamInfos &&) = default ;
          StreamInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StreamInfos() = default ;
          StreamInfos& operator=(const StreamInfos &) = default ;
          StreamInfos& operator=(StreamInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->outputUrl_ == nullptr
        && this->type_ == nullptr; };
          // outputUrl Field Functions 
          bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
          void deleteOutputUrl() { this->outputUrl_ = nullptr;};
          inline string getOutputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
          inline StreamInfos& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline StreamInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The URL of the output stream.
          shared_ptr<string> outputUrl_ {};
          // The type of the output stream protocol. Only the RTMP protocol is supported.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->streamInfos_ == nullptr; };
        // streamInfos Field Functions 
        bool hasStreamInfos() const { return this->streamInfos_ != nullptr;};
        void deleteStreamInfos() { this->streamInfos_ = nullptr;};
        inline const vector<OutputStream::StreamInfos> & getStreamInfos() const { DARABONBA_PTR_GET_CONST(streamInfos_, vector<OutputStream::StreamInfos>) };
        inline vector<OutputStream::StreamInfos> getStreamInfos() { DARABONBA_PTR_GET(streamInfos_, vector<OutputStream::StreamInfos>) };
        inline OutputStream& setStreamInfos(const vector<OutputStream::StreamInfos> & streamInfos) { DARABONBA_PTR_SET_VALUE(streamInfos_, streamInfos) };
        inline OutputStream& setStreamInfos(vector<OutputStream::StreamInfos> && streamInfos) { DARABONBA_PTR_SET_RVALUE(streamInfos_, streamInfos) };


      protected:
        // The list of stream URLs.
        shared_ptr<vector<OutputStream::StreamInfos>> streamInfos_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->jobId_ == nullptr && this->name_ == nullptr && this->outputStream_ == nullptr && this->startMode_ == nullptr && this->status_ == nullptr
        && this->streamInput_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr && this->templateType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline JobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline JobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline JobList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // outputStream Field Functions 
      bool hasOutputStream() const { return this->outputStream_ != nullptr;};
      void deleteOutputStream() { this->outputStream_ = nullptr;};
      inline const JobList::OutputStream & getOutputStream() const { DARABONBA_PTR_GET_CONST(outputStream_, JobList::OutputStream) };
      inline JobList::OutputStream getOutputStream() { DARABONBA_PTR_GET(outputStream_, JobList::OutputStream) };
      inline JobList& setOutputStream(const JobList::OutputStream & outputStream) { DARABONBA_PTR_SET_VALUE(outputStream_, outputStream) };
      inline JobList& setOutputStream(JobList::OutputStream && outputStream) { DARABONBA_PTR_SET_RVALUE(outputStream_, outputStream) };


      // startMode Field Functions 
      bool hasStartMode() const { return this->startMode_ != nullptr;};
      void deleteStartMode() { this->startMode_ = nullptr;};
      inline int32_t getStartMode() const { DARABONBA_PTR_GET_DEFAULT(startMode_, 0) };
      inline JobList& setStartMode(int32_t startMode) { DARABONBA_PTR_SET_VALUE(startMode_, startMode) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline JobList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // streamInput Field Functions 
      bool hasStreamInput() const { return this->streamInput_ != nullptr;};
      void deleteStreamInput() { this->streamInput_ = nullptr;};
      inline const JobList::StreamInput & getStreamInput() const { DARABONBA_PTR_GET_CONST(streamInput_, JobList::StreamInput) };
      inline JobList::StreamInput getStreamInput() { DARABONBA_PTR_GET(streamInput_, JobList::StreamInput) };
      inline JobList& setStreamInput(const JobList::StreamInput & streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };
      inline JobList& setStreamInput(JobList::StreamInput && streamInput) { DARABONBA_PTR_SET_RVALUE(streamInput_, streamInput) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline JobList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline JobList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline JobList& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    protected:
      // The time when the job was created.
      shared_ptr<string> createTime_ {};
      // The job ID.
      shared_ptr<string> jobId_ {};
      // The name of the transcoding job.
      shared_ptr<string> name_ {};
      // The information about the output stream.
      shared_ptr<JobList::OutputStream> outputStream_ {};
      // The start mode of the job.
      shared_ptr<int32_t> startMode_ {};
      // The state of the job.
      shared_ptr<int32_t> status_ {};
      // The information about the input stream.
      shared_ptr<JobList::StreamInput> streamInput_ {};
      // The ID of the transcoding template used by the transcoding job.
      shared_ptr<string> templateId_ {};
      // The template name.
      shared_ptr<string> templateName_ {};
      // The type of the transcoding template used by the transcoding job.
      shared_ptr<string> templateType_ {};
    };

    virtual bool empty() const override { return this->jobList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // jobList Field Functions 
    bool hasJobList() const { return this->jobList_ != nullptr;};
    void deleteJobList() { this->jobList_ = nullptr;};
    inline const vector<ListLiveTranscodeJobsResponseBody::JobList> & getJobList() const { DARABONBA_PTR_GET_CONST(jobList_, vector<ListLiveTranscodeJobsResponseBody::JobList>) };
    inline vector<ListLiveTranscodeJobsResponseBody::JobList> getJobList() { DARABONBA_PTR_GET(jobList_, vector<ListLiveTranscodeJobsResponseBody::JobList>) };
    inline ListLiveTranscodeJobsResponseBody& setJobList(const vector<ListLiveTranscodeJobsResponseBody::JobList> & jobList) { DARABONBA_PTR_SET_VALUE(jobList_, jobList) };
    inline ListLiveTranscodeJobsResponseBody& setJobList(vector<ListLiveTranscodeJobsResponseBody::JobList> && jobList) { DARABONBA_PTR_SET_RVALUE(jobList_, jobList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveTranscodeJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLiveTranscodeJobsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of transcoding jobs.
    shared_ptr<vector<ListLiveTranscodeJobsResponseBody::JobList>> jobList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
