// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeReplicationJobsResponseBodyReplicationJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationJobsResponseBodyReplicationJobs& obj) { 
      DARABONBA_PTR_TO_JSON(ReplicationJob, replicationJob_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationJobsResponseBodyReplicationJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(ReplicationJob, replicationJob_);
    };
    DescribeReplicationJobsResponseBodyReplicationJobs() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobs(const DescribeReplicationJobsResponseBodyReplicationJobs &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobs(DescribeReplicationJobsResponseBodyReplicationJobs &&) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationJobsResponseBodyReplicationJobs() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobs& operator=(const DescribeReplicationJobsResponseBodyReplicationJobs &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobs& operator=(DescribeReplicationJobsResponseBodyReplicationJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->replicationJob_ != nullptr; };
    // replicationJob Field Functions 
    bool hasReplicationJob() const { return this->replicationJob_ != nullptr;};
    void deleteReplicationJob() { this->replicationJob_ = nullptr;};
    inline const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob> & replicationJob() const { DARABONBA_PTR_GET_CONST(replicationJob_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob>) };
    inline vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob> replicationJob() { DARABONBA_PTR_GET(replicationJob_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob>) };
    inline DescribeReplicationJobsResponseBodyReplicationJobs& setReplicationJob(const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob> & replicationJob) { DARABONBA_PTR_SET_VALUE(replicationJob_, replicationJob) };
    inline DescribeReplicationJobsResponseBodyReplicationJobs& setReplicationJob(vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob> && replicationJob) { DARABONBA_PTR_SET_RVALUE(replicationJob_, replicationJob) };


  protected:
    std::shared_ptr<vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob>> replicationJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
