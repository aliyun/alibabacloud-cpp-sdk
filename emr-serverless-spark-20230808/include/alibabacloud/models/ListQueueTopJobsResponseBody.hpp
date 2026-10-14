// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUETOPJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUETOPJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListQueueTopJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueueTopJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(queueTopJobs, queueTopJobs_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueueTopJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(queueTopJobs, queueTopJobs_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListQueueTopJobsResponseBody() = default ;
    ListQueueTopJobsResponseBody(const ListQueueTopJobsResponseBody &) = default ;
    ListQueueTopJobsResponseBody(ListQueueTopJobsResponseBody &&) = default ;
    ListQueueTopJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueueTopJobsResponseBody() = default ;
    ListQueueTopJobsResponseBody& operator=(const ListQueueTopJobsResponseBody &) = default ;
    ListQueueTopJobsResponseBody& operator=(ListQueueTopJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueueTopJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueueTopJobs& obj) { 
        DARABONBA_PTR_TO_JSON(jobs, jobs_);
        DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(queueName, queueName_);
        DARABONBA_PTR_TO_JSON(totalCu, totalCu_);
        DARABONBA_PTR_TO_JSON(totalJobCount, totalJobCount_);
      };
      friend void from_json(const Darabonba::Json& j, QueueTopJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(jobs, jobs_);
        DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(queueName, queueName_);
        DARABONBA_PTR_FROM_JSON(totalCu, totalCu_);
        DARABONBA_PTR_FROM_JSON(totalJobCount, totalJobCount_);
      };
      QueueTopJobs() = default ;
      QueueTopJobs(const QueueTopJobs &) = default ;
      QueueTopJobs(QueueTopJobs &&) = default ;
      QueueTopJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueueTopJobs() = default ;
      QueueTopJobs& operator=(const QueueTopJobs &) = default ;
      QueueTopJobs& operator=(QueueTopJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Jobs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Jobs& obj) { 
          DARABONBA_PTR_TO_JSON(cpuCores, cpuCores_);
          DARABONBA_PTR_TO_JSON(cu, cu_);
          DARABONBA_PTR_TO_JSON(jobId, jobId_);
          DARABONBA_PTR_TO_JSON(jobType, jobType_);
          DARABONBA_PTR_TO_JSON(memoryGiB, memoryGiB_);
        };
        friend void from_json(const Darabonba::Json& j, Jobs& obj) { 
          DARABONBA_PTR_FROM_JSON(cpuCores, cpuCores_);
          DARABONBA_PTR_FROM_JSON(cu, cu_);
          DARABONBA_PTR_FROM_JSON(jobId, jobId_);
          DARABONBA_PTR_FROM_JSON(jobType, jobType_);
          DARABONBA_PTR_FROM_JSON(memoryGiB, memoryGiB_);
        };
        Jobs() = default ;
        Jobs(const Jobs &) = default ;
        Jobs(Jobs &&) = default ;
        Jobs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Jobs() = default ;
        Jobs& operator=(const Jobs &) = default ;
        Jobs& operator=(Jobs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpuCores_ == nullptr
        && this->cu_ == nullptr && this->jobId_ == nullptr && this->jobType_ == nullptr && this->memoryGiB_ == nullptr; };
        // cpuCores Field Functions 
        bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
        void deleteCpuCores() { this->cpuCores_ = nullptr;};
        inline string getCpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, "") };
        inline Jobs& setCpuCores(string cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


        // cu Field Functions 
        bool hasCu() const { return this->cu_ != nullptr;};
        void deleteCu() { this->cu_ = nullptr;};
        inline string getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, "") };
        inline Jobs& setCu(string cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline Jobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobType Field Functions 
        bool hasJobType() const { return this->jobType_ != nullptr;};
        void deleteJobType() { this->jobType_ = nullptr;};
        inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
        inline Jobs& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


        // memoryGiB Field Functions 
        bool hasMemoryGiB() const { return this->memoryGiB_ != nullptr;};
        void deleteMemoryGiB() { this->memoryGiB_ = nullptr;};
        inline string getMemoryGiB() const { DARABONBA_PTR_GET_DEFAULT(memoryGiB_, "") };
        inline Jobs& setMemoryGiB(string memoryGiB) { DARABONBA_PTR_SET_VALUE(memoryGiB_, memoryGiB) };


      protected:
        // The number of CPU cores requested by the job.
        shared_ptr<string> cpuCores_ {};
        // The number of CUs consumed by the job.
        shared_ptr<string> cu_ {};
        // The job ID.
        shared_ptr<string> jobId_ {};
        // The job type.
        shared_ptr<string> jobType_ {};
        // The amount of memory requested by the job.
        shared_ptr<string> memoryGiB_ {};
      };

      virtual bool empty() const override { return this->jobs_ == nullptr
        && this->maxResults_ == nullptr && this->queueName_ == nullptr && this->totalCu_ == nullptr && this->totalJobCount_ == nullptr; };
      // jobs Field Functions 
      bool hasJobs() const { return this->jobs_ != nullptr;};
      void deleteJobs() { this->jobs_ = nullptr;};
      inline const vector<QueueTopJobs::Jobs> & getJobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<QueueTopJobs::Jobs>) };
      inline vector<QueueTopJobs::Jobs> getJobs() { DARABONBA_PTR_GET(jobs_, vector<QueueTopJobs::Jobs>) };
      inline QueueTopJobs& setJobs(const vector<QueueTopJobs::Jobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
      inline QueueTopJobs& setJobs(vector<QueueTopJobs::Jobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
      inline QueueTopJobs& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline QueueTopJobs& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // totalCu Field Functions 
      bool hasTotalCu() const { return this->totalCu_ != nullptr;};
      void deleteTotalCu() { this->totalCu_ = nullptr;};
      inline string getTotalCu() const { DARABONBA_PTR_GET_DEFAULT(totalCu_, "") };
      inline QueueTopJobs& setTotalCu(string totalCu) { DARABONBA_PTR_SET_VALUE(totalCu_, totalCu) };


      // totalJobCount Field Functions 
      bool hasTotalJobCount() const { return this->totalJobCount_ != nullptr;};
      void deleteTotalJobCount() { this->totalJobCount_ = nullptr;};
      inline int32_t getTotalJobCount() const { DARABONBA_PTR_GET_DEFAULT(totalJobCount_, 0) };
      inline QueueTopJobs& setTotalJobCount(int32_t totalJobCount) { DARABONBA_PTR_SET_VALUE(totalJobCount_, totalJobCount) };


    protected:
      // The list of jobs.
      shared_ptr<vector<QueueTopJobs::Jobs>> jobs_ {};
      // The maximum number of records returned in a single request.
      shared_ptr<string> maxResults_ {};
      // The name of the queue.
      shared_ptr<string> queueName_ {};
      // The total number of CUs consumed by the queue.
      shared_ptr<string> totalCu_ {};
      // The total number of jobs in the queue.
      shared_ptr<int32_t> totalJobCount_ {};
    };

    virtual bool empty() const override { return this->queueTopJobs_ == nullptr
        && this->requestId_ == nullptr; };
    // queueTopJobs Field Functions 
    bool hasQueueTopJobs() const { return this->queueTopJobs_ != nullptr;};
    void deleteQueueTopJobs() { this->queueTopJobs_ = nullptr;};
    inline const ListQueueTopJobsResponseBody::QueueTopJobs & getQueueTopJobs() const { DARABONBA_PTR_GET_CONST(queueTopJobs_, ListQueueTopJobsResponseBody::QueueTopJobs) };
    inline ListQueueTopJobsResponseBody::QueueTopJobs getQueueTopJobs() { DARABONBA_PTR_GET(queueTopJobs_, ListQueueTopJobsResponseBody::QueueTopJobs) };
    inline ListQueueTopJobsResponseBody& setQueueTopJobs(const ListQueueTopJobsResponseBody::QueueTopJobs & queueTopJobs) { DARABONBA_PTR_SET_VALUE(queueTopJobs_, queueTopJobs) };
    inline ListQueueTopJobsResponseBody& setQueueTopJobs(ListQueueTopJobsResponseBody::QueueTopJobs && queueTopJobs) { DARABONBA_PTR_SET_RVALUE(queueTopJobs_, queueTopJobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQueueTopJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The job details.
    shared_ptr<ListQueueTopJobsResponseBody::QueueTopJobs> queueTopJobs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
