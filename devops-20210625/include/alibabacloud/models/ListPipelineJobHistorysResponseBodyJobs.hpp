// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINEJOBHISTORYSRESPONSEBODYJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINEJOBHISTORYSRESPONSEBODYJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListPipelineJobHistorysResponseBodyJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineJobHistorysResponseBodyJobs& obj) { 
      DARABONBA_PTR_TO_JSON(executeNumber, executeNumber_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(jobName, jobName_);
      DARABONBA_PTR_TO_JSON(operatorAccountId, operatorAccountId_);
      DARABONBA_PTR_TO_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(pipelineRunId, pipelineRunId_);
      DARABONBA_PTR_TO_JSON(sources, sources_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineJobHistorysResponseBodyJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(executeNumber, executeNumber_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(jobName, jobName_);
      DARABONBA_PTR_FROM_JSON(operatorAccountId, operatorAccountId_);
      DARABONBA_PTR_FROM_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(pipelineRunId, pipelineRunId_);
      DARABONBA_PTR_FROM_JSON(sources, sources_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListPipelineJobHistorysResponseBodyJobs() = default ;
    ListPipelineJobHistorysResponseBodyJobs(const ListPipelineJobHistorysResponseBodyJobs &) = default ;
    ListPipelineJobHistorysResponseBodyJobs(ListPipelineJobHistorysResponseBodyJobs &&) = default ;
    ListPipelineJobHistorysResponseBodyJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineJobHistorysResponseBodyJobs() = default ;
    ListPipelineJobHistorysResponseBodyJobs& operator=(const ListPipelineJobHistorysResponseBodyJobs &) = default ;
    ListPipelineJobHistorysResponseBodyJobs& operator=(ListPipelineJobHistorysResponseBodyJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executeNumber_ == nullptr
        && return this->identifier_ == nullptr && return this->jobId_ == nullptr && return this->jobName_ == nullptr && return this->operatorAccountId_ == nullptr && return this->pipelineId_ == nullptr
        && return this->pipelineRunId_ == nullptr && return this->sources_ == nullptr && return this->status_ == nullptr; };
    // executeNumber Field Functions 
    bool hasExecuteNumber() const { return this->executeNumber_ != nullptr;};
    void deleteExecuteNumber() { this->executeNumber_ = nullptr;};
    inline int32_t executeNumber() const { DARABONBA_PTR_GET_DEFAULT(executeNumber_, 0) };
    inline ListPipelineJobHistorysResponseBodyJobs& setExecuteNumber(int32_t executeNumber) { DARABONBA_PTR_SET_VALUE(executeNumber_, executeNumber) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListPipelineJobHistorysResponseBodyJobs& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline ListPipelineJobHistorysResponseBodyJobs& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListPipelineJobHistorysResponseBodyJobs& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // operatorAccountId Field Functions 
    bool hasOperatorAccountId() const { return this->operatorAccountId_ != nullptr;};
    void deleteOperatorAccountId() { this->operatorAccountId_ = nullptr;};
    inline string operatorAccountId() const { DARABONBA_PTR_GET_DEFAULT(operatorAccountId_, "") };
    inline ListPipelineJobHistorysResponseBodyJobs& setOperatorAccountId(string operatorAccountId) { DARABONBA_PTR_SET_VALUE(operatorAccountId_, operatorAccountId) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline int64_t pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
    inline ListPipelineJobHistorysResponseBodyJobs& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // pipelineRunId Field Functions 
    bool hasPipelineRunId() const { return this->pipelineRunId_ != nullptr;};
    void deletePipelineRunId() { this->pipelineRunId_ = nullptr;};
    inline int64_t pipelineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipelineRunId_, 0L) };
    inline ListPipelineJobHistorysResponseBodyJobs& setPipelineRunId(int64_t pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline string sources() const { DARABONBA_PTR_GET_DEFAULT(sources_, "") };
    inline ListPipelineJobHistorysResponseBodyJobs& setSources(string sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPipelineJobHistorysResponseBodyJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int32_t> executeNumber_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<int64_t> jobId_ = nullptr;
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<string> operatorAccountId_ = nullptr;
    std::shared_ptr<int64_t> pipelineId_ = nullptr;
    std::shared_ptr<int64_t> pipelineRunId_ = nullptr;
    std::shared_ptr<string> sources_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
