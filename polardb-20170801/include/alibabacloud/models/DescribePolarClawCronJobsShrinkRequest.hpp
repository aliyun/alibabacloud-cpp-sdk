// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWCRONJOBSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWCRONJOBSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawCronJobsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawCronJobsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(IncludeDisabled, includeDisabled_);
      DARABONBA_PTR_TO_JSON(IncludeRuns, includeRuns_);
      DARABONBA_PTR_TO_JSON(JobIdList, jobIdListShrink_);
      DARABONBA_PTR_TO_JSON(RunLimit, runLimit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawCronJobsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(IncludeDisabled, includeDisabled_);
      DARABONBA_PTR_FROM_JSON(IncludeRuns, includeRuns_);
      DARABONBA_PTR_FROM_JSON(JobIdList, jobIdListShrink_);
      DARABONBA_PTR_FROM_JSON(RunLimit, runLimit_);
    };
    DescribePolarClawCronJobsShrinkRequest() = default ;
    DescribePolarClawCronJobsShrinkRequest(const DescribePolarClawCronJobsShrinkRequest &) = default ;
    DescribePolarClawCronJobsShrinkRequest(DescribePolarClawCronJobsShrinkRequest &&) = default ;
    DescribePolarClawCronJobsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawCronJobsShrinkRequest() = default ;
    DescribePolarClawCronJobsShrinkRequest& operator=(const DescribePolarClawCronJobsShrinkRequest &) = default ;
    DescribePolarClawCronJobsShrinkRequest& operator=(DescribePolarClawCronJobsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->includeDisabled_ == nullptr && this->includeRuns_ == nullptr && this->jobIdListShrink_ == nullptr && this->runLimit_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawCronJobsShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // includeDisabled Field Functions 
    bool hasIncludeDisabled() const { return this->includeDisabled_ != nullptr;};
    void deleteIncludeDisabled() { this->includeDisabled_ = nullptr;};
    inline bool getIncludeDisabled() const { DARABONBA_PTR_GET_DEFAULT(includeDisabled_, false) };
    inline DescribePolarClawCronJobsShrinkRequest& setIncludeDisabled(bool includeDisabled) { DARABONBA_PTR_SET_VALUE(includeDisabled_, includeDisabled) };


    // includeRuns Field Functions 
    bool hasIncludeRuns() const { return this->includeRuns_ != nullptr;};
    void deleteIncludeRuns() { this->includeRuns_ = nullptr;};
    inline bool getIncludeRuns() const { DARABONBA_PTR_GET_DEFAULT(includeRuns_, false) };
    inline DescribePolarClawCronJobsShrinkRequest& setIncludeRuns(bool includeRuns) { DARABONBA_PTR_SET_VALUE(includeRuns_, includeRuns) };


    // jobIdListShrink Field Functions 
    bool hasJobIdListShrink() const { return this->jobIdListShrink_ != nullptr;};
    void deleteJobIdListShrink() { this->jobIdListShrink_ = nullptr;};
    inline string getJobIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(jobIdListShrink_, "") };
    inline DescribePolarClawCronJobsShrinkRequest& setJobIdListShrink(string jobIdListShrink) { DARABONBA_PTR_SET_VALUE(jobIdListShrink_, jobIdListShrink) };


    // runLimit Field Functions 
    bool hasRunLimit() const { return this->runLimit_ != nullptr;};
    void deleteRunLimit() { this->runLimit_ = nullptr;};
    inline int32_t getRunLimit() const { DARABONBA_PTR_GET_DEFAULT(runLimit_, 0) };
    inline DescribePolarClawCronJobsShrinkRequest& setRunLimit(int32_t runLimit) { DARABONBA_PTR_SET_VALUE(runLimit_, runLimit) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<bool> includeDisabled_ {};
    shared_ptr<bool> includeRuns_ {};
    shared_ptr<string> jobIdListShrink_ {};
    shared_ptr<int32_t> runLimit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
