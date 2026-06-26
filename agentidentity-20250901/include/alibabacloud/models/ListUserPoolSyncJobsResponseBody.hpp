// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPOOLSYNCJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPOOLSYNCJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class ListUserPoolSyncJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserPoolSyncJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobs, synchronizationJobs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserPoolSyncJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobs, synchronizationJobs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListUserPoolSyncJobsResponseBody() = default ;
    ListUserPoolSyncJobsResponseBody(const ListUserPoolSyncJobsResponseBody &) = default ;
    ListUserPoolSyncJobsResponseBody(ListUserPoolSyncJobsResponseBody &&) = default ;
    ListUserPoolSyncJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserPoolSyncJobsResponseBody() = default ;
    ListUserPoolSyncJobsResponseBody& operator=(const ListUserPoolSyncJobsResponseBody &) = default ;
    ListUserPoolSyncJobsResponseBody& operator=(ListUserPoolSyncJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SynchronizationJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SynchronizationJobs& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(IdentityProviderType, identityProviderType_);
        DARABONBA_PTR_TO_JSON(JobSummary, jobSummary_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SynchronizationJobId, synchronizationJobId_);
        DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      };
      friend void from_json(const Darabonba::Json& j, SynchronizationJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderType, identityProviderType_);
        DARABONBA_PTR_FROM_JSON(JobSummary, jobSummary_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SynchronizationJobId, synchronizationJobId_);
        DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      };
      SynchronizationJobs() = default ;
      SynchronizationJobs(const SynchronizationJobs &) = default ;
      SynchronizationJobs(SynchronizationJobs &&) = default ;
      SynchronizationJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SynchronizationJobs() = default ;
      SynchronizationJobs& operator=(const SynchronizationJobs &) = default ;
      SynchronizationJobs& operator=(SynchronizationJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class JobSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobSummary& obj) { 
          DARABONBA_PTR_TO_JSON(Created, created_);
          DARABONBA_PTR_TO_JSON(Deleted, deleted_);
          DARABONBA_PTR_TO_JSON(Same, same_);
          DARABONBA_PTR_TO_JSON(Updated, updated_);
        };
        friend void from_json(const Darabonba::Json& j, JobSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(Created, created_);
          DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
          DARABONBA_PTR_FROM_JSON(Same, same_);
          DARABONBA_PTR_FROM_JSON(Updated, updated_);
        };
        JobSummary() = default ;
        JobSummary(const JobSummary &) = default ;
        JobSummary(JobSummary &&) = default ;
        JobSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobSummary() = default ;
        JobSummary& operator=(const JobSummary &) = default ;
        JobSummary& operator=(JobSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->created_ == nullptr
        && this->deleted_ == nullptr && this->same_ == nullptr && this->updated_ == nullptr; };
        // created Field Functions 
        bool hasCreated() const { return this->created_ != nullptr;};
        void deleteCreated() { this->created_ = nullptr;};
        inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
        inline JobSummary& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


        // deleted Field Functions 
        bool hasDeleted() const { return this->deleted_ != nullptr;};
        void deleteDeleted() { this->deleted_ = nullptr;};
        inline string getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, "") };
        inline JobSummary& setDeleted(string deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


        // same Field Functions 
        bool hasSame() const { return this->same_ != nullptr;};
        void deleteSame() { this->same_ = nullptr;};
        inline string getSame() const { DARABONBA_PTR_GET_DEFAULT(same_, "") };
        inline JobSummary& setSame(string same) { DARABONBA_PTR_SET_VALUE(same_, same) };


        // updated Field Functions 
        bool hasUpdated() const { return this->updated_ != nullptr;};
        void deleteUpdated() { this->updated_ = nullptr;};
        inline string getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
        inline JobSummary& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


      protected:
        shared_ptr<string> created_ {};
        shared_ptr<string> deleted_ {};
        shared_ptr<string> same_ {};
        shared_ptr<string> updated_ {};
      };

      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->errorMessage_ == nullptr && this->identityProviderType_ == nullptr && this->jobSummary_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->synchronizationJobId_ == nullptr && this->triggerType_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline SynchronizationJobs& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline SynchronizationJobs& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // identityProviderType Field Functions 
      bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
      void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
      inline string getIdentityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
      inline SynchronizationJobs& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


      // jobSummary Field Functions 
      bool hasJobSummary() const { return this->jobSummary_ != nullptr;};
      void deleteJobSummary() { this->jobSummary_ = nullptr;};
      inline const SynchronizationJobs::JobSummary & getJobSummary() const { DARABONBA_PTR_GET_CONST(jobSummary_, SynchronizationJobs::JobSummary) };
      inline SynchronizationJobs::JobSummary getJobSummary() { DARABONBA_PTR_GET(jobSummary_, SynchronizationJobs::JobSummary) };
      inline SynchronizationJobs& setJobSummary(const SynchronizationJobs::JobSummary & jobSummary) { DARABONBA_PTR_SET_VALUE(jobSummary_, jobSummary) };
      inline SynchronizationJobs& setJobSummary(SynchronizationJobs::JobSummary && jobSummary) { DARABONBA_PTR_SET_RVALUE(jobSummary_, jobSummary) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline SynchronizationJobs& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SynchronizationJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // synchronizationJobId Field Functions 
      bool hasSynchronizationJobId() const { return this->synchronizationJobId_ != nullptr;};
      void deleteSynchronizationJobId() { this->synchronizationJobId_ = nullptr;};
      inline string getSynchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobId_, "") };
      inline SynchronizationJobs& setSynchronizationJobId(string synchronizationJobId) { DARABONBA_PTR_SET_VALUE(synchronizationJobId_, synchronizationJobId) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline SynchronizationJobs& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    protected:
      shared_ptr<string> endTime_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> identityProviderType_ {};
      shared_ptr<SynchronizationJobs::JobSummary> jobSummary_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> synchronizationJobId_ {};
      shared_ptr<string> triggerType_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->synchronizationJobs_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUserPoolSyncJobsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserPoolSyncJobsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserPoolSyncJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // synchronizationJobs Field Functions 
    bool hasSynchronizationJobs() const { return this->synchronizationJobs_ != nullptr;};
    void deleteSynchronizationJobs() { this->synchronizationJobs_ = nullptr;};
    inline const vector<ListUserPoolSyncJobsResponseBody::SynchronizationJobs> & getSynchronizationJobs() const { DARABONBA_PTR_GET_CONST(synchronizationJobs_, vector<ListUserPoolSyncJobsResponseBody::SynchronizationJobs>) };
    inline vector<ListUserPoolSyncJobsResponseBody::SynchronizationJobs> getSynchronizationJobs() { DARABONBA_PTR_GET(synchronizationJobs_, vector<ListUserPoolSyncJobsResponseBody::SynchronizationJobs>) };
    inline ListUserPoolSyncJobsResponseBody& setSynchronizationJobs(const vector<ListUserPoolSyncJobsResponseBody::SynchronizationJobs> & synchronizationJobs) { DARABONBA_PTR_SET_VALUE(synchronizationJobs_, synchronizationJobs) };
    inline ListUserPoolSyncJobsResponseBody& setSynchronizationJobs(vector<ListUserPoolSyncJobsResponseBody::SynchronizationJobs> && synchronizationJobs) { DARABONBA_PTR_SET_RVALUE(synchronizationJobs_, synchronizationJobs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUserPoolSyncJobsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListUserPoolSyncJobsResponseBody::SynchronizationJobs>> synchronizationJobs_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
