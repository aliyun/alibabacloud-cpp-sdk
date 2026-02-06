// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitSnapshotJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSnapshotJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotJob, snapshotJob_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSnapshotJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotJob, snapshotJob_);
    };
    SubmitSnapshotJobResponseBody() = default ;
    SubmitSnapshotJobResponseBody(const SubmitSnapshotJobResponseBody &) = default ;
    SubmitSnapshotJobResponseBody(SubmitSnapshotJobResponseBody &&) = default ;
    SubmitSnapshotJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSnapshotJobResponseBody() = default ;
    SubmitSnapshotJobResponseBody& operator=(const SubmitSnapshotJobResponseBody &) = default ;
    SubmitSnapshotJobResponseBody& operator=(SubmitSnapshotJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SnapshotJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnapshotJob& obj) { 
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
      };
      friend void from_json(const Darabonba::Json& j, SnapshotJob& obj) { 
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      };
      SnapshotJob() = default ;
      SnapshotJob(const SnapshotJob &) = default ;
      SnapshotJob(SnapshotJob &&) = default ;
      SnapshotJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnapshotJob() = default ;
      SnapshotJob& operator=(const SnapshotJob &) = default ;
      SnapshotJob& operator=(SnapshotJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->jobId_ == nullptr; };
      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline SnapshotJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    protected:
      // The ID of the snapshot job.
      shared_ptr<string> jobId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->snapshotJob_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitSnapshotJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotJob Field Functions 
    bool hasSnapshotJob() const { return this->snapshotJob_ != nullptr;};
    void deleteSnapshotJob() { this->snapshotJob_ = nullptr;};
    inline const SubmitSnapshotJobResponseBody::SnapshotJob & getSnapshotJob() const { DARABONBA_PTR_GET_CONST(snapshotJob_, SubmitSnapshotJobResponseBody::SnapshotJob) };
    inline SubmitSnapshotJobResponseBody::SnapshotJob getSnapshotJob() { DARABONBA_PTR_GET(snapshotJob_, SubmitSnapshotJobResponseBody::SnapshotJob) };
    inline SubmitSnapshotJobResponseBody& setSnapshotJob(const SubmitSnapshotJobResponseBody::SnapshotJob & snapshotJob) { DARABONBA_PTR_SET_VALUE(snapshotJob_, snapshotJob) };
    inline SubmitSnapshotJobResponseBody& setSnapshotJob(SubmitSnapshotJobResponseBody::SnapshotJob && snapshotJob) { DARABONBA_PTR_SET_RVALUE(snapshotJob_, snapshotJob) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the snapshot job.
    shared_ptr<SubmitSnapshotJobResponseBody::SnapshotJob> snapshotJob_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
