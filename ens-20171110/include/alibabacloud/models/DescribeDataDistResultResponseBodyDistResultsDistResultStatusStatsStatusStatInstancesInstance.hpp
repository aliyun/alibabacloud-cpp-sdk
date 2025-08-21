// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATADISTRESULTRESPONSEBODYDISTRESULTSDISTRESULTSTATUSSTATSSTATUSSTATINSTANCESINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATADISTRESULTRESPONSEBODYDISTRESULTSDISTRESULTSTATUSSTATSSTATUSSTATINSTANCESINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StatusDescrip, statusDescrip_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StatusDescrip, statusDescrip_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance() = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance(const DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance &) = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance(DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance &&) = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance() = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance& operator=(const DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance &) = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance& operator=(DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->startTime_ != nullptr && this->statusDescrip_ != nullptr && this->updateTime_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statusDescrip Field Functions 
    bool hasStatusDescrip() const { return this->statusDescrip_ != nullptr;};
    void deleteStatusDescrip() { this->statusDescrip_ = nullptr;};
    inline string statusDescrip() const { DARABONBA_PTR_GET_DEFAULT(statusDescrip_, "") };
    inline DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance& setStatusDescrip(string statusDescrip) { DARABONBA_PTR_SET_VALUE(statusDescrip_, statusDescrip) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStatInstancesInstance& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ID of the instance
    std::shared_ptr<string> instanceId_ = nullptr;
    // The start time of the distribution. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The description of the distribution status.
    std::shared_ptr<string> statusDescrip_ = nullptr;
    // The time when the distribution status was last updated. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
