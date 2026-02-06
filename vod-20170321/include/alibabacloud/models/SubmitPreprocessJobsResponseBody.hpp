// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPREPROCESSJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPREPROCESSJOBSRESPONSEBODY_HPP_
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
  class SubmitPreprocessJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitPreprocessJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PreprocessJobs, preprocessJobs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitPreprocessJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PreprocessJobs, preprocessJobs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitPreprocessJobsResponseBody() = default ;
    SubmitPreprocessJobsResponseBody(const SubmitPreprocessJobsResponseBody &) = default ;
    SubmitPreprocessJobsResponseBody(SubmitPreprocessJobsResponseBody &&) = default ;
    SubmitPreprocessJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitPreprocessJobsResponseBody() = default ;
    SubmitPreprocessJobsResponseBody& operator=(const SubmitPreprocessJobsResponseBody &) = default ;
    SubmitPreprocessJobsResponseBody& operator=(SubmitPreprocessJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PreprocessJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PreprocessJobs& obj) { 
        DARABONBA_PTR_TO_JSON(PreprocessJob, preprocessJob_);
      };
      friend void from_json(const Darabonba::Json& j, PreprocessJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(PreprocessJob, preprocessJob_);
      };
      PreprocessJobs() = default ;
      PreprocessJobs(const PreprocessJobs &) = default ;
      PreprocessJobs(PreprocessJobs &&) = default ;
      PreprocessJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PreprocessJobs() = default ;
      PreprocessJobs& operator=(const PreprocessJobs &) = default ;
      PreprocessJobs& operator=(PreprocessJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PreprocessJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PreprocessJob& obj) { 
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
        };
        friend void from_json(const Darabonba::Json& j, PreprocessJob& obj) { 
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        };
        PreprocessJob() = default ;
        PreprocessJob(const PreprocessJob &) = default ;
        PreprocessJob(PreprocessJob &&) = default ;
        PreprocessJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PreprocessJob() = default ;
        PreprocessJob& operator=(const PreprocessJob &) = default ;
        PreprocessJob& operator=(PreprocessJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->jobId_ == nullptr; };
        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline PreprocessJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      protected:
        // The ID of the job.
        shared_ptr<string> jobId_ {};
      };

      virtual bool empty() const override { return this->preprocessJob_ == nullptr; };
      // preprocessJob Field Functions 
      bool hasPreprocessJob() const { return this->preprocessJob_ != nullptr;};
      void deletePreprocessJob() { this->preprocessJob_ = nullptr;};
      inline const vector<PreprocessJobs::PreprocessJob> & getPreprocessJob() const { DARABONBA_PTR_GET_CONST(preprocessJob_, vector<PreprocessJobs::PreprocessJob>) };
      inline vector<PreprocessJobs::PreprocessJob> getPreprocessJob() { DARABONBA_PTR_GET(preprocessJob_, vector<PreprocessJobs::PreprocessJob>) };
      inline PreprocessJobs& setPreprocessJob(const vector<PreprocessJobs::PreprocessJob> & preprocessJob) { DARABONBA_PTR_SET_VALUE(preprocessJob_, preprocessJob) };
      inline PreprocessJobs& setPreprocessJob(vector<PreprocessJobs::PreprocessJob> && preprocessJob) { DARABONBA_PTR_SET_RVALUE(preprocessJob_, preprocessJob) };


    protected:
      shared_ptr<vector<PreprocessJobs::PreprocessJob>> preprocessJob_ {};
    };

    virtual bool empty() const override { return this->preprocessJobs_ == nullptr
        && this->requestId_ == nullptr; };
    // preprocessJobs Field Functions 
    bool hasPreprocessJobs() const { return this->preprocessJobs_ != nullptr;};
    void deletePreprocessJobs() { this->preprocessJobs_ = nullptr;};
    inline const SubmitPreprocessJobsResponseBody::PreprocessJobs & getPreprocessJobs() const { DARABONBA_PTR_GET_CONST(preprocessJobs_, SubmitPreprocessJobsResponseBody::PreprocessJobs) };
    inline SubmitPreprocessJobsResponseBody::PreprocessJobs getPreprocessJobs() { DARABONBA_PTR_GET(preprocessJobs_, SubmitPreprocessJobsResponseBody::PreprocessJobs) };
    inline SubmitPreprocessJobsResponseBody& setPreprocessJobs(const SubmitPreprocessJobsResponseBody::PreprocessJobs & preprocessJobs) { DARABONBA_PTR_SET_VALUE(preprocessJobs_, preprocessJobs) };
    inline SubmitPreprocessJobsResponseBody& setPreprocessJobs(SubmitPreprocessJobsResponseBody::PreprocessJobs && preprocessJobs) { DARABONBA_PTR_SET_RVALUE(preprocessJobs_, preprocessJobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitPreprocessJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the job.
    shared_ptr<SubmitPreprocessJobsResponseBody::PreprocessJobs> preprocessJobs_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
