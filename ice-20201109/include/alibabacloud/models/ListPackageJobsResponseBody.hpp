// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPACKAGEJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPACKAGEJOBSRESPONSEBODY_HPP_
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
  class ListPackageJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPackageJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PackageJobList, packageJobList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPackageJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PackageJobList, packageJobList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPackageJobsResponseBody() = default ;
    ListPackageJobsResponseBody(const ListPackageJobsResponseBody &) = default ;
    ListPackageJobsResponseBody(ListPackageJobsResponseBody &&) = default ;
    ListPackageJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPackageJobsResponseBody() = default ;
    ListPackageJobsResponseBody& operator=(const ListPackageJobsResponseBody &) = default ;
    ListPackageJobsResponseBody& operator=(ListPackageJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PackageJobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PackageJobList& obj) { 
        DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
        DARABONBA_PTR_TO_JSON(PackageJobs, packageJobs_);
      };
      friend void from_json(const Darabonba::Json& j, PackageJobList& obj) { 
        DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
        DARABONBA_PTR_FROM_JSON(PackageJobs, packageJobs_);
      };
      PackageJobList() = default ;
      PackageJobList(const PackageJobList &) = default ;
      PackageJobList(PackageJobList &&) = default ;
      PackageJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PackageJobList() = default ;
      PackageJobList& operator=(const PackageJobList &) = default ;
      PackageJobList& operator=(PackageJobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PackageJobs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PackageJobs& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(Inputs, inputs_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Output, output_);
          DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
          DARABONBA_PTR_TO_JSON(TriggerSource, triggerSource_);
          DARABONBA_PTR_TO_JSON(UserData, userData_);
        };
        friend void from_json(const Darabonba::Json& j, PackageJobs& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Output, output_);
          DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
          DARABONBA_PTR_FROM_JSON(TriggerSource, triggerSource_);
          DARABONBA_PTR_FROM_JSON(UserData, userData_);
        };
        PackageJobs() = default ;
        PackageJobs(const PackageJobs &) = default ;
        PackageJobs(PackageJobs &&) = default ;
        PackageJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PackageJobs() = default ;
        PackageJobs& operator=(const PackageJobs &) = default ;
        PackageJobs& operator=(PackageJobs &&) = default ;
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
          // *   If Type is set to Media, set this parameter to the ID of a media asset.
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
            // *   If Type is set to Media, set this parameter to the ID of a media asset.
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
        && this->modifiedTime_ == nullptr && this->name_ == nullptr && this->output_ == nullptr && this->pipelineId_ == nullptr && this->priority_ == nullptr
        && this->status_ == nullptr && this->submitTime_ == nullptr && this->triggerSource_ == nullptr && this->userData_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline PackageJobs& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline PackageJobs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline PackageJobs& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // inputs Field Functions 
        bool hasInputs() const { return this->inputs_ != nullptr;};
        void deleteInputs() { this->inputs_ = nullptr;};
        inline const vector<PackageJobs::Inputs> & getInputs() const { DARABONBA_PTR_GET_CONST(inputs_, vector<PackageJobs::Inputs>) };
        inline vector<PackageJobs::Inputs> getInputs() { DARABONBA_PTR_GET(inputs_, vector<PackageJobs::Inputs>) };
        inline PackageJobs& setInputs(const vector<PackageJobs::Inputs> & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
        inline PackageJobs& setInputs(vector<PackageJobs::Inputs> && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline PackageJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline PackageJobs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline PackageJobs& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PackageJobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // output Field Functions 
        bool hasOutput() const { return this->output_ != nullptr;};
        void deleteOutput() { this->output_ = nullptr;};
        inline const PackageJobs::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, PackageJobs::Output) };
        inline PackageJobs::Output getOutput() { DARABONBA_PTR_GET(output_, PackageJobs::Output) };
        inline PackageJobs& setOutput(const PackageJobs::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
        inline PackageJobs& setOutput(PackageJobs::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


        // pipelineId Field Functions 
        bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
        void deletePipelineId() { this->pipelineId_ = nullptr;};
        inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
        inline PackageJobs& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline PackageJobs& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PackageJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // submitTime Field Functions 
        bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
        void deleteSubmitTime() { this->submitTime_ = nullptr;};
        inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
        inline PackageJobs& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


        // triggerSource Field Functions 
        bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
        void deleteTriggerSource() { this->triggerSource_ = nullptr;};
        inline string getTriggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
        inline PackageJobs& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


        // userData Field Functions 
        bool hasUserData() const { return this->userData_ != nullptr;};
        void deleteUserData() { this->userData_ = nullptr;};
        inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
        inline PackageJobs& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      protected:
        // The error code returned if the job fails.
        shared_ptr<string> code_ {};
        // The time when the job was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The time when the job was complete. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> finishTime_ {};
        // The input of the job.
        shared_ptr<vector<PackageJobs::Inputs>> inputs_ {};
        // The job ID.
        shared_ptr<string> jobId_ {};
        // The error message that is returned.
        shared_ptr<string> message_ {};
        // The time when the job was last modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> modifiedTime_ {};
        // The name of the job.
        shared_ptr<string> name_ {};
        // The output of the job.
        shared_ptr<PackageJobs::Output> output_ {};
        // The ID of the ApsaraVideo Media Processing (MPS) queue that is used to run the job.
        shared_ptr<string> pipelineId_ {};
        // The priority of the job. Valid values: 1 to 10. The greater the value, the higher the priority. Default value: 6.
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

      virtual bool empty() const override { return this->nextPageToken_ == nullptr
        && this->packageJobs_ == nullptr; };
      // nextPageToken Field Functions 
      bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
      void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
      inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
      inline PackageJobList& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


      // packageJobs Field Functions 
      bool hasPackageJobs() const { return this->packageJobs_ != nullptr;};
      void deletePackageJobs() { this->packageJobs_ = nullptr;};
      inline const vector<PackageJobList::PackageJobs> & getPackageJobs() const { DARABONBA_PTR_GET_CONST(packageJobs_, vector<PackageJobList::PackageJobs>) };
      inline vector<PackageJobList::PackageJobs> getPackageJobs() { DARABONBA_PTR_GET(packageJobs_, vector<PackageJobList::PackageJobs>) };
      inline PackageJobList& setPackageJobs(const vector<PackageJobList::PackageJobs> & packageJobs) { DARABONBA_PTR_SET_VALUE(packageJobs_, packageJobs) };
      inline PackageJobList& setPackageJobs(vector<PackageJobList::PackageJobs> && packageJobs) { DARABONBA_PTR_SET_RVALUE(packageJobs_, packageJobs) };


    protected:
      // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. The token of the next page is returned after you call this operation for the first time.
      shared_ptr<string> nextPageToken_ {};
      // The list of packaging jobs.
      shared_ptr<vector<PackageJobList::PackageJobs>> packageJobs_ {};
    };

    virtual bool empty() const override { return this->packageJobList_ == nullptr
        && this->requestId_ == nullptr; };
    // packageJobList Field Functions 
    bool hasPackageJobList() const { return this->packageJobList_ != nullptr;};
    void deletePackageJobList() { this->packageJobList_ = nullptr;};
    inline const ListPackageJobsResponseBody::PackageJobList & getPackageJobList() const { DARABONBA_PTR_GET_CONST(packageJobList_, ListPackageJobsResponseBody::PackageJobList) };
    inline ListPackageJobsResponseBody::PackageJobList getPackageJobList() { DARABONBA_PTR_GET(packageJobList_, ListPackageJobsResponseBody::PackageJobList) };
    inline ListPackageJobsResponseBody& setPackageJobList(const ListPackageJobsResponseBody::PackageJobList & packageJobList) { DARABONBA_PTR_SET_VALUE(packageJobList_, packageJobList) };
    inline ListPackageJobsResponseBody& setPackageJobList(ListPackageJobsResponseBody::PackageJobList && packageJobList) { DARABONBA_PTR_SET_RVALUE(packageJobList_, packageJobList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPackageJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of packaging jobs.
    shared_ptr<ListPackageJobsResponseBody::PackageJobList> packageJobList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
