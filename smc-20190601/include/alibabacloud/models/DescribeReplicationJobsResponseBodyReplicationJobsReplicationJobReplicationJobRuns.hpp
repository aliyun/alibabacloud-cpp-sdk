// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBREPLICATIONJOBRUNS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBREPLICATIONJOBRUNS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRunsReplicationJobRun.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns& obj) { 
      DARABONBA_PTR_TO_JSON(ReplicationJobRun, replicationJobRun_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns& obj) { 
      DARABONBA_PTR_FROM_JSON(ReplicationJobRun, replicationJobRun_);
    };
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns &&) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns& operator=(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns& operator=(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->replicationJobRun_ != nullptr; };
    // replicationJobRun Field Functions 
    bool hasReplicationJobRun() const { return this->replicationJobRun_ != nullptr;};
    void deleteReplicationJobRun() { this->replicationJobRun_ = nullptr;};
    inline const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRunsReplicationJobRun> & replicationJobRun() const { DARABONBA_PTR_GET_CONST(replicationJobRun_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRunsReplicationJobRun>) };
    inline vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRunsReplicationJobRun> replicationJobRun() { DARABONBA_PTR_GET(replicationJobRun_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRunsReplicationJobRun>) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns& setReplicationJobRun(const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRunsReplicationJobRun> & replicationJobRun) { DARABONBA_PTR_SET_VALUE(replicationJobRun_, replicationJobRun) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns& setReplicationJobRun(vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRunsReplicationJobRun> && replicationJobRun) { DARABONBA_PTR_SET_RVALUE(replicationJobRun_, replicationJobRun) };


  protected:
    std::shared_ptr<vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRunsReplicationJobRun>> replicationJobRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
