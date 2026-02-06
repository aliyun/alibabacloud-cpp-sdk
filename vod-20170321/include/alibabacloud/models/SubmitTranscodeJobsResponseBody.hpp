// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBSRESPONSEBODY_HPP_
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
  class SubmitTranscodeJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeJobs, transcodeJobs_);
      DARABONBA_PTR_TO_JSON(TranscodeTaskId, transcodeTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeJobs, transcodeJobs_);
      DARABONBA_PTR_FROM_JSON(TranscodeTaskId, transcodeTaskId_);
    };
    SubmitTranscodeJobsResponseBody() = default ;
    SubmitTranscodeJobsResponseBody(const SubmitTranscodeJobsResponseBody &) = default ;
    SubmitTranscodeJobsResponseBody(SubmitTranscodeJobsResponseBody &&) = default ;
    SubmitTranscodeJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobsResponseBody() = default ;
    SubmitTranscodeJobsResponseBody& operator=(const SubmitTranscodeJobsResponseBody &) = default ;
    SubmitTranscodeJobsResponseBody& operator=(SubmitTranscodeJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TranscodeJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeJobs& obj) { 
        DARABONBA_PTR_TO_JSON(TranscodeJob, transcodeJob_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(TranscodeJob, transcodeJob_);
      };
      TranscodeJobs() = default ;
      TranscodeJobs(const TranscodeJobs &) = default ;
      TranscodeJobs(TranscodeJobs &&) = default ;
      TranscodeJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscodeJobs() = default ;
      TranscodeJobs& operator=(const TranscodeJobs &) = default ;
      TranscodeJobs& operator=(TranscodeJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TranscodeJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TranscodeJob& obj) { 
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
        };
        friend void from_json(const Darabonba::Json& j, TranscodeJob& obj) { 
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        };
        TranscodeJob() = default ;
        TranscodeJob(const TranscodeJob &) = default ;
        TranscodeJob(TranscodeJob &&) = default ;
        TranscodeJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TranscodeJob() = default ;
        TranscodeJob& operator=(const TranscodeJob &) = default ;
        TranscodeJob& operator=(TranscodeJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->jobId_ == nullptr; };
        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline TranscodeJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      protected:
        // The ID of the transcoding job.
        // 
        // >  This parameter is not returned for HLS packaging tasks. You must asynchronously receive the transcoding result.
        shared_ptr<string> jobId_ {};
      };

      virtual bool empty() const override { return this->transcodeJob_ == nullptr; };
      // transcodeJob Field Functions 
      bool hasTranscodeJob() const { return this->transcodeJob_ != nullptr;};
      void deleteTranscodeJob() { this->transcodeJob_ = nullptr;};
      inline const vector<TranscodeJobs::TranscodeJob> & getTranscodeJob() const { DARABONBA_PTR_GET_CONST(transcodeJob_, vector<TranscodeJobs::TranscodeJob>) };
      inline vector<TranscodeJobs::TranscodeJob> getTranscodeJob() { DARABONBA_PTR_GET(transcodeJob_, vector<TranscodeJobs::TranscodeJob>) };
      inline TranscodeJobs& setTranscodeJob(const vector<TranscodeJobs::TranscodeJob> & transcodeJob) { DARABONBA_PTR_SET_VALUE(transcodeJob_, transcodeJob) };
      inline TranscodeJobs& setTranscodeJob(vector<TranscodeJobs::TranscodeJob> && transcodeJob) { DARABONBA_PTR_SET_RVALUE(transcodeJob_, transcodeJob) };


    protected:
      shared_ptr<vector<TranscodeJobs::TranscodeJob>> transcodeJob_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->transcodeJobs_ == nullptr && this->transcodeTaskId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitTranscodeJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeJobs Field Functions 
    bool hasTranscodeJobs() const { return this->transcodeJobs_ != nullptr;};
    void deleteTranscodeJobs() { this->transcodeJobs_ = nullptr;};
    inline const SubmitTranscodeJobsResponseBody::TranscodeJobs & getTranscodeJobs() const { DARABONBA_PTR_GET_CONST(transcodeJobs_, SubmitTranscodeJobsResponseBody::TranscodeJobs) };
    inline SubmitTranscodeJobsResponseBody::TranscodeJobs getTranscodeJobs() { DARABONBA_PTR_GET(transcodeJobs_, SubmitTranscodeJobsResponseBody::TranscodeJobs) };
    inline SubmitTranscodeJobsResponseBody& setTranscodeJobs(const SubmitTranscodeJobsResponseBody::TranscodeJobs & transcodeJobs) { DARABONBA_PTR_SET_VALUE(transcodeJobs_, transcodeJobs) };
    inline SubmitTranscodeJobsResponseBody& setTranscodeJobs(SubmitTranscodeJobsResponseBody::TranscodeJobs && transcodeJobs) { DARABONBA_PTR_SET_RVALUE(transcodeJobs_, transcodeJobs) };


    // transcodeTaskId Field Functions 
    bool hasTranscodeTaskId() const { return this->transcodeTaskId_ != nullptr;};
    void deleteTranscodeTaskId() { this->transcodeTaskId_ = nullptr;};
    inline string getTranscodeTaskId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTaskId_, "") };
    inline SubmitTranscodeJobsResponseBody& setTranscodeTaskId(string transcodeTaskId) { DARABONBA_PTR_SET_VALUE(transcodeTaskId_, transcodeTaskId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the transcoding job.
    // 
    // >  This parameter is not returned for HLS packaging tasks. You must asynchronously receive the transcoding result.
    shared_ptr<SubmitTranscodeJobsResponseBody::TranscodeJobs> transcodeJobs_ {};
    // The ID of the transcoding task that was submitted.
    shared_ptr<string> transcodeTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
