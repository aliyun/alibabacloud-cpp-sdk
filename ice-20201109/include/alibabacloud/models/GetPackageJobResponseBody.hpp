// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPACKAGEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPACKAGEJOBRESPONSEBODY_HPP_
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
  class GetPackageJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPackageJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PackageJob, packageJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPackageJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PackageJob, packageJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPackageJobResponseBody() = default ;
    GetPackageJobResponseBody(const GetPackageJobResponseBody &) = default ;
    GetPackageJobResponseBody(GetPackageJobResponseBody &&) = default ;
    GetPackageJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPackageJobResponseBody() = default ;
    GetPackageJobResponseBody& operator=(const GetPackageJobResponseBody &) = default ;
    GetPackageJobResponseBody& operator=(GetPackageJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PackageJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PackageJob& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(Inputs, inputs_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Output, output_);
        DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
        DARABONBA_PTR_TO_JSON(TriggerSource, triggerSource_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, PackageJob& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Output, output_);
        DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
        DARABONBA_PTR_FROM_JSON(TriggerSource, triggerSource_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      PackageJob() = default ;
      PackageJob(const PackageJob &) = default ;
      PackageJob(PackageJob &&) = default ;
      PackageJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PackageJob() = default ;
      PackageJob& operator=(const PackageJob &) = default ;
      PackageJob& operator=(PackageJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Output : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Output& obj) { 
          DARABONBA_PTR_TO_JSON(Media, media_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Output& obj) { 
          DARABONBA_PTR_FROM_JSON(Media, media_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Output() = default ;
        Output(const Output &) = default ;
        Output(Output &&) = default ;
        Output(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Output() = default ;
        Output& operator=(const Output &) = default ;
        Output& operator=(Output &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
        // media Field Functions 
        bool hasMedia() const { return this->media_ != nullptr;};
        void deleteMedia() { this->media_ = nullptr;};
        inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
        inline Output& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Output& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The media object.
        // 
        // *   If Type is set to OSS, the URL of an OSS object is returned. Both the OSS and HTTP protocols are supported.
        // *   If Type is set to Media, the ID of a media asset is returned.
        shared_ptr<string> media_ {};
        // The type of the media object. Valid values:
        // 
        // *   OSS: an OSS object.
        // *   Media: a media asset.
        shared_ptr<string> type_ {};
      };

      class Inputs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Inputs& obj) { 
          DARABONBA_PTR_TO_JSON(Input, input_);
        };
        friend void from_json(const Darabonba::Json& j, Inputs& obj) { 
          DARABONBA_PTR_FROM_JSON(Input, input_);
        };
        Inputs() = default ;
        Inputs(const Inputs &) = default ;
        Inputs(Inputs &&) = default ;
        Inputs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Inputs() = default ;
        Inputs& operator=(const Inputs &) = default ;
        Inputs& operator=(Inputs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Input : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Input& obj) { 
            DARABONBA_PTR_TO_JSON(Media, media_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Input& obj) { 
            DARABONBA_PTR_FROM_JSON(Media, media_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Input() = default ;
          Input(const Input &) = default ;
          Input(Input &&) = default ;
          Input(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Input() = default ;
          Input& operator=(const Input &) = default ;
          Input& operator=(Input &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
          // media Field Functions 
          bool hasMedia() const { return this->media_ != nullptr;};
          void deleteMedia() { this->media_ = nullptr;};
          inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
          inline Input& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Input& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The media object.
          // 
          // *   If Type is set to OSS, the URL of an OSS object is returned. Both the OSS and HTTP protocols are supported.
          // *   If Type is set to Media, the ID of a media asset is returned.
          shared_ptr<string> media_ {};
          // The type of the media object. Valid values:
          // 
          // *   OSS: an Object Storage Service (OSS) object.
          // *   Media: a media asset.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->input_ == nullptr; };
        // input Field Functions 
        bool hasInput() const { return this->input_ != nullptr;};
        void deleteInput() { this->input_ = nullptr;};
        inline const Inputs::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, Inputs::Input) };
        inline Inputs::Input getInput() { DARABONBA_PTR_GET(input_, Inputs::Input) };
        inline Inputs& setInput(const Inputs::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
        inline Inputs& setInput(Inputs::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


      protected:
        // The information about the input stream file.
        shared_ptr<Inputs::Input> input_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->createTime_ == nullptr && this->finishTime_ == nullptr && this->inputs_ == nullptr && this->jobId_ == nullptr && this->message_ == nullptr
        && this->modifiedTime_ == nullptr && this->name_ == nullptr && this->output_ == nullptr && this->outputUrl_ == nullptr && this->pipelineId_ == nullptr
        && this->priority_ == nullptr && this->status_ == nullptr && this->submitTime_ == nullptr && this->triggerSource_ == nullptr && this->userData_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline PackageJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PackageJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline PackageJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // inputs Field Functions 
      bool hasInputs() const { return this->inputs_ != nullptr;};
      void deleteInputs() { this->inputs_ = nullptr;};
      inline const vector<PackageJob::Inputs> & getInputs() const { DARABONBA_PTR_GET_CONST(inputs_, vector<PackageJob::Inputs>) };
      inline vector<PackageJob::Inputs> getInputs() { DARABONBA_PTR_GET(inputs_, vector<PackageJob::Inputs>) };
      inline PackageJob& setInputs(const vector<PackageJob::Inputs> & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
      inline PackageJob& setInputs(vector<PackageJob::Inputs> && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline PackageJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline PackageJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline PackageJob& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline PackageJob& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline const PackageJob::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, PackageJob::Output) };
      inline PackageJob::Output getOutput() { DARABONBA_PTR_GET(output_, PackageJob::Output) };
      inline PackageJob& setOutput(const PackageJob::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
      inline PackageJob& setOutput(PackageJob::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


      // outputUrl Field Functions 
      bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
      void deleteOutputUrl() { this->outputUrl_ = nullptr;};
      inline string getOutputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
      inline PackageJob& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline PackageJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline PackageJob& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PackageJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // submitTime Field Functions 
      bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
      void deleteSubmitTime() { this->submitTime_ = nullptr;};
      inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
      inline PackageJob& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


      // triggerSource Field Functions 
      bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
      void deleteTriggerSource() { this->triggerSource_ = nullptr;};
      inline string getTriggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
      inline PackageJob& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline PackageJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // The error code returned if the job fails.
      shared_ptr<string> code_ {};
      // The time when the job was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The time when the job was complete. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> finishTime_ {};
      // The input of the job.
      shared_ptr<vector<PackageJob::Inputs>> inputs_ {};
      // The job ID.
      shared_ptr<string> jobId_ {};
      // The error message that is returned.
      shared_ptr<string> message_ {};
      // The time when the job was last modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> modifiedTime_ {};
      // The name of the job.
      shared_ptr<string> name_ {};
      // The output of the job.
      shared_ptr<PackageJob::Output> output_ {};
      // The URL of the output file.
      shared_ptr<string> outputUrl_ {};
      // The ID of the MPS queue to which the job was submitted.
      shared_ptr<string> pipelineId_ {};
      // The priority of the job. Valid values: 1 to 10. The greater the value, the higher the priority.
      shared_ptr<int32_t> priority_ {};
      // The state of the job.
      shared_ptr<string> status_ {};
      // The time when the job was submitted. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> submitTime_ {};
      // The source of the job. Valid values:
      // 
      // *   API
      // *   WorkFlow
      // *   Console
      shared_ptr<string> triggerSource_ {};
      // The user-defined data.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->packageJob_ == nullptr
        && this->requestId_ == nullptr; };
    // packageJob Field Functions 
    bool hasPackageJob() const { return this->packageJob_ != nullptr;};
    void deletePackageJob() { this->packageJob_ = nullptr;};
    inline const GetPackageJobResponseBody::PackageJob & getPackageJob() const { DARABONBA_PTR_GET_CONST(packageJob_, GetPackageJobResponseBody::PackageJob) };
    inline GetPackageJobResponseBody::PackageJob getPackageJob() { DARABONBA_PTR_GET(packageJob_, GetPackageJobResponseBody::PackageJob) };
    inline GetPackageJobResponseBody& setPackageJob(const GetPackageJobResponseBody::PackageJob & packageJob) { DARABONBA_PTR_SET_VALUE(packageJob_, packageJob) };
    inline GetPackageJobResponseBody& setPackageJob(GetPackageJobResponseBody::PackageJob && packageJob) { DARABONBA_PTR_SET_RVALUE(packageJob_, packageJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPackageJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the packaging job.
    shared_ptr<GetPackageJobResponseBody::PackageJob> packageJob_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
