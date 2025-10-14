// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATADISTRESULTRESPONSEBODYDISTRESULTSDISTRESULTSTATUSSTATSSTATUSSTAT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATADISTRESULTRESPONSEBODYDISTRESULTSDISTRESULTSTATUSSTATSSTATUSSTAT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat() = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat(const DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat &) = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat(DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat &&) = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat() = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat& operator=(const DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat &) = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat& operator=(DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceCount_ == nullptr
        && return this->instances_ == nullptr && return this->status_ == nullptr; };
    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline string instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, "") };
    inline DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat& setInstanceCount(string instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstances & instances() const { DARABONBA_PTR_GET_CONST(instances_, Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstances) };
    inline Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstances instances() { DARABONBA_PTR_GET(instances_, Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstances) };
    inline DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat& setInstances(const Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat& setInstances(Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of associated edge instances.
    std::shared_ptr<string> instanceCount_ = nullptr;
    // The distribution status of the edge instance.
    std::shared_ptr<Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstances> instances_ = nullptr;
    // The distribution status. The value is of the enumeration type. Valid values:
    // 
    // *   SUCCESS: The distribution is successful.
    // *   FAILED: The distribution failed.
    // *   DISTING: The data is being distributed.
    // *   POD_RESTARTING: The idle pod is being restarted.
    // *   DELETED: The data is cleared or removed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
