// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINEJOBSRESPONSEBODYJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINEJOBSRESPONSEBODYJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListPipelineJobsResponseBodyJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineJobsResponseBodyJobs& obj) { 
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(jobName, jobName_);
      DARABONBA_PTR_TO_JSON(lastJobId, lastJobId_);
      DARABONBA_PTR_TO_JSON(lastJobParams, lastJobParams_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineJobsResponseBodyJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(jobName, jobName_);
      DARABONBA_PTR_FROM_JSON(lastJobId, lastJobId_);
      DARABONBA_PTR_FROM_JSON(lastJobParams, lastJobParams_);
    };
    ListPipelineJobsResponseBodyJobs() = default ;
    ListPipelineJobsResponseBodyJobs(const ListPipelineJobsResponseBodyJobs &) = default ;
    ListPipelineJobsResponseBodyJobs(ListPipelineJobsResponseBodyJobs &&) = default ;
    ListPipelineJobsResponseBodyJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineJobsResponseBodyJobs() = default ;
    ListPipelineJobsResponseBodyJobs& operator=(const ListPipelineJobsResponseBodyJobs &) = default ;
    ListPipelineJobsResponseBodyJobs& operator=(ListPipelineJobsResponseBodyJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifier_ == nullptr
        && return this->jobName_ == nullptr && return this->lastJobId_ == nullptr && return this->lastJobParams_ == nullptr; };
    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListPipelineJobsResponseBodyJobs& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListPipelineJobsResponseBodyJobs& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // lastJobId Field Functions 
    bool hasLastJobId() const { return this->lastJobId_ != nullptr;};
    void deleteLastJobId() { this->lastJobId_ = nullptr;};
    inline int64_t lastJobId() const { DARABONBA_PTR_GET_DEFAULT(lastJobId_, 0L) };
    inline ListPipelineJobsResponseBodyJobs& setLastJobId(int64_t lastJobId) { DARABONBA_PTR_SET_VALUE(lastJobId_, lastJobId) };


    // lastJobParams Field Functions 
    bool hasLastJobParams() const { return this->lastJobParams_ != nullptr;};
    void deleteLastJobParams() { this->lastJobParams_ = nullptr;};
    inline string lastJobParams() const { DARABONBA_PTR_GET_DEFAULT(lastJobParams_, "") };
    inline ListPipelineJobsResponseBodyJobs& setLastJobParams(string lastJobParams) { DARABONBA_PTR_SET_VALUE(lastJobParams_, lastJobParams) };


  protected:
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<int64_t> lastJobId_ = nullptr;
    std::shared_ptr<string> lastJobParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
