// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBS2RESPONSEBODYRESTOREJOBS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBS2RESPONSEBODYRESTOREJOBS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeRestoreJobs2ResponseBodyRestoreJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreJobs2ResponseBodyRestoreJobs& obj) { 
      DARABONBA_PTR_TO_JSON(RestoreJob, restoreJob_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreJobs2ResponseBodyRestoreJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(RestoreJob, restoreJob_);
    };
    DescribeRestoreJobs2ResponseBodyRestoreJobs() = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobs(const DescribeRestoreJobs2ResponseBodyRestoreJobs &) = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobs(DescribeRestoreJobs2ResponseBodyRestoreJobs &&) = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreJobs2ResponseBodyRestoreJobs() = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobs& operator=(const DescribeRestoreJobs2ResponseBodyRestoreJobs &) = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobs& operator=(DescribeRestoreJobs2ResponseBodyRestoreJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->restoreJob_ == nullptr; };
    // restoreJob Field Functions 
    bool hasRestoreJob() const { return this->restoreJob_ != nullptr;};
    void deleteRestoreJob() { this->restoreJob_ = nullptr;};
    inline const vector<Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob> & restoreJob() const { DARABONBA_PTR_GET_CONST(restoreJob_, vector<Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob>) };
    inline vector<Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob> restoreJob() { DARABONBA_PTR_GET(restoreJob_, vector<Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob>) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobs& setRestoreJob(const vector<Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob> & restoreJob) { DARABONBA_PTR_SET_VALUE(restoreJob_, restoreJob) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobs& setRestoreJob(vector<Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob> && restoreJob) { DARABONBA_PTR_SET_RVALUE(restoreJob_, restoreJob) };


  protected:
    std::shared_ptr<vector<Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob>> restoreJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
