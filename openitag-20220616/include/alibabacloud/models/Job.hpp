// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOB_HPP_
#define ALIBABACLOUD_MODELS_JOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SimpleUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class Job : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Job& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobResult, jobResult_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, Job& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobResult, jobResult_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    Job() = default ;
    Job(const Job &) = default ;
    Job(Job &&) = default ;
    Job(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Job() = default ;
    Job& operator=(const Job &) = default ;
    Job& operator=(Job &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobResult& obj) { 
        DARABONBA_PTR_TO_JSON(ResultLink, resultLink_);
      };
      friend void from_json(const Darabonba::Json& j, JobResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ResultLink, resultLink_);
      };
      JobResult() = default ;
      JobResult(const JobResult &) = default ;
      JobResult(JobResult &&) = default ;
      JobResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobResult() = default ;
      JobResult& operator=(const JobResult &) = default ;
      JobResult& operator=(JobResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resultLink_ == nullptr; };
      // resultLink Field Functions 
      bool hasResultLink() const { return this->resultLink_ != nullptr;};
      void deleteResultLink() { this->resultLink_ = nullptr;};
      inline string getResultLink() const { DARABONBA_PTR_GET_DEFAULT(resultLink_, "") };
      inline JobResult& setResultLink(string resultLink) { DARABONBA_PTR_SET_VALUE(resultLink_, resultLink) };


    protected:
      // Return value link, which is the OSS path where the annotation results are stored.
      shared_ptr<string> resultLink_ {};
    };

    virtual bool empty() const override { return this->creator_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->jobId_ == nullptr && this->jobResult_ == nullptr && this->jobType_ == nullptr
        && this->status_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const SimpleUser & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, SimpleUser) };
    inline SimpleUser getCreator() { DARABONBA_PTR_GET(creator_, SimpleUser) };
    inline Job& setCreator(const SimpleUser & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline Job& setCreator(SimpleUser && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline Job& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline Job& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline Job& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobResult Field Functions 
    bool hasJobResult() const { return this->jobResult_ != nullptr;};
    void deleteJobResult() { this->jobResult_ = nullptr;};
    inline const Job::JobResult & getJobResult() const { DARABONBA_PTR_GET_CONST(jobResult_, Job::JobResult) };
    inline Job::JobResult getJobResult() { DARABONBA_PTR_GET(jobResult_, Job::JobResult) };
    inline Job& setJobResult(const Job::JobResult & jobResult) { DARABONBA_PTR_SET_VALUE(jobResult_, jobResult) };
    inline Job& setJobResult(Job::JobResult && jobResult) { DARABONBA_PTR_SET_RVALUE(jobResult_, jobResult) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline Job& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Job& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Job creator.
    shared_ptr<SimpleUser> creator_ {};
    // Creation Time.
    shared_ptr<string> gmtCreateTime_ {};
    // Updated At.
    shared_ptr<string> gmtModifiedTime_ {};
    // Job ID.
    shared_ptr<string> jobId_ {};
    // Task Result.
    shared_ptr<Job::JobResult> jobResult_ {};
    // Task Type. Currently, only DOWNLOWD_MARKRESULT_FLOW is supported.
    shared_ptr<string> jobType_ {};
    // Job status. Possible values:
    // - init: initialization
    // - running: running
    // - pause: pause
    // - stop: stopped
    // - succ: Succeeded
    // - fail: failed
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
