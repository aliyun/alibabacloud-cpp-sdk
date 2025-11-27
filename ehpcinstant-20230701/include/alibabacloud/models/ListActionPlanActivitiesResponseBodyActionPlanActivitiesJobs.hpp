// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIONPLANACTIVITIESRESPONSEBODYACTIONPLANACTIVITIESJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIONPLANACTIVITIESRESPONSEBODYACTIONPLANACTIVITIESJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobOperationType, jobOperationType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobOperationType, jobOperationType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs() = default ;
    ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs(const ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs &) = default ;
    ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs(ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs &&) = default ;
    ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs() = default ;
    ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs& operator=(const ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs &) = default ;
    ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs& operator=(ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && return this->jobOperationType_ == nullptr && return this->regionId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobOperationType Field Functions 
    bool hasJobOperationType() const { return this->jobOperationType_ != nullptr;};
    void deleteJobOperationType() { this->jobOperationType_ = nullptr;};
    inline string jobOperationType() const { DARABONBA_PTR_GET_DEFAULT(jobOperationType_, "") };
    inline ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs& setJobOperationType(string jobOperationType) { DARABONBA_PTR_SET_VALUE(jobOperationType_, jobOperationType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The operation type of the execution plan activity on the job. Possible values are as follows:
    // 
    // *   Create
    // *   Delete
    std::shared_ptr<string> jobOperationType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
