// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListJobsRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeCreatedAfter, timeCreatedAfter_);
      DARABONBA_PTR_TO_JSON(TimeCreatedBefore, timeCreatedBefore_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeCreatedAfter, timeCreatedAfter_);
      DARABONBA_PTR_FROM_JSON(TimeCreatedBefore, timeCreatedBefore_);
    };
    ListJobsRequestFilter() = default ;
    ListJobsRequestFilter(const ListJobsRequestFilter &) = default ;
    ListJobsRequestFilter(ListJobsRequestFilter &&) = default ;
    ListJobsRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsRequestFilter() = default ;
    ListJobsRequestFilter& operator=(const ListJobsRequestFilter &) = default ;
    ListJobsRequestFilter& operator=(ListJobsRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->jobName_ != nullptr && this->status_ != nullptr && this->timeCreatedAfter_ != nullptr && this->timeCreatedBefore_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListJobsRequestFilter& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListJobsRequestFilter& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobsRequestFilter& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeCreatedAfter Field Functions 
    bool hasTimeCreatedAfter() const { return this->timeCreatedAfter_ != nullptr;};
    void deleteTimeCreatedAfter() { this->timeCreatedAfter_ = nullptr;};
    inline int32_t timeCreatedAfter() const { DARABONBA_PTR_GET_DEFAULT(timeCreatedAfter_, 0) };
    inline ListJobsRequestFilter& setTimeCreatedAfter(int32_t timeCreatedAfter) { DARABONBA_PTR_SET_VALUE(timeCreatedAfter_, timeCreatedAfter) };


    // timeCreatedBefore Field Functions 
    bool hasTimeCreatedBefore() const { return this->timeCreatedBefore_ != nullptr;};
    void deleteTimeCreatedBefore() { this->timeCreatedBefore_ = nullptr;};
    inline int32_t timeCreatedBefore() const { DARABONBA_PTR_GET_DEFAULT(timeCreatedBefore_, 0) };
    inline ListJobsRequestFilter& setTimeCreatedBefore(int32_t timeCreatedBefore) { DARABONBA_PTR_SET_VALUE(timeCreatedBefore_, timeCreatedBefore) };


  protected:
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> timeCreatedAfter_ = nullptr;
    std::shared_ptr<int32_t> timeCreatedBefore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
