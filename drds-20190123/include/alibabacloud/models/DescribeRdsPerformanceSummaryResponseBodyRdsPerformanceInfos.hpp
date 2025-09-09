// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSPERFORMANCESUMMARYRESPONSEBODYRDSPERFORMANCEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSPERFORMANCESUMMARYRESPONSEBODYRDSPERFORMANCEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveSessions, activeSessions_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Iops, iops_);
      DARABONBA_PTR_TO_JSON(RdsId, rdsId_);
      DARABONBA_PTR_TO_JSON(SpaceUsage, spaceUsage_);
      DARABONBA_PTR_TO_JSON(TotalSessions, totalSessions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveSessions, activeSessions_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Iops, iops_);
      DARABONBA_PTR_FROM_JSON(RdsId, rdsId_);
      DARABONBA_PTR_FROM_JSON(SpaceUsage, spaceUsage_);
      DARABONBA_PTR_FROM_JSON(TotalSessions, totalSessions_);
    };
    DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos() = default ;
    DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos(const DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos &) = default ;
    DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos(DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos &&) = default ;
    DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos() = default ;
    DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos& operator=(const DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos &) = default ;
    DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos& operator=(DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activeSessions_ != nullptr
        && this->cpu_ != nullptr && this->iops_ != nullptr && this->rdsId_ != nullptr && this->spaceUsage_ != nullptr && this->totalSessions_ != nullptr; };
    // activeSessions Field Functions 
    bool hasActiveSessions() const { return this->activeSessions_ != nullptr;};
    void deleteActiveSessions() { this->activeSessions_ = nullptr;};
    inline int32_t activeSessions() const { DARABONBA_PTR_GET_DEFAULT(activeSessions_, 0) };
    inline DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos& setActiveSessions(int32_t activeSessions) { DARABONBA_PTR_SET_VALUE(activeSessions_, activeSessions) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // iops Field Functions 
    bool hasIops() const { return this->iops_ != nullptr;};
    void deleteIops() { this->iops_ = nullptr;};
    inline float iops() const { DARABONBA_PTR_GET_DEFAULT(iops_, 0.0) };
    inline DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos& setIops(float iops) { DARABONBA_PTR_SET_VALUE(iops_, iops) };


    // rdsId Field Functions 
    bool hasRdsId() const { return this->rdsId_ != nullptr;};
    void deleteRdsId() { this->rdsId_ = nullptr;};
    inline string rdsId() const { DARABONBA_PTR_GET_DEFAULT(rdsId_, "") };
    inline DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos& setRdsId(string rdsId) { DARABONBA_PTR_SET_VALUE(rdsId_, rdsId) };


    // spaceUsage Field Functions 
    bool hasSpaceUsage() const { return this->spaceUsage_ != nullptr;};
    void deleteSpaceUsage() { this->spaceUsage_ = nullptr;};
    inline int64_t spaceUsage() const { DARABONBA_PTR_GET_DEFAULT(spaceUsage_, 0L) };
    inline DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos& setSpaceUsage(int64_t spaceUsage) { DARABONBA_PTR_SET_VALUE(spaceUsage_, spaceUsage) };


    // totalSessions Field Functions 
    bool hasTotalSessions() const { return this->totalSessions_ != nullptr;};
    void deleteTotalSessions() { this->totalSessions_ = nullptr;};
    inline int32_t totalSessions() const { DARABONBA_PTR_GET_DEFAULT(totalSessions_, 0) };
    inline DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos& setTotalSessions(int32_t totalSessions) { DARABONBA_PTR_SET_VALUE(totalSessions_, totalSessions) };


  protected:
    // The number of active sessions of the RDS instance.
    std::shared_ptr<int32_t> activeSessions_ = nullptr;
    // The CPU utilization of an RDS instance.
    std::shared_ptr<float> cpu_ = nullptr;
    // The IOPS of the RDS instance.
    std::shared_ptr<float> iops_ = nullptr;
    // The ID of an RDS instance.
    std::shared_ptr<string> rdsId_ = nullptr;
    // The disk usage of apsaradb for RDS. Unit: MB.
    std::shared_ptr<int64_t> spaceUsage_ = nullptr;
    // The total number of current RDS sessions.
    std::shared_ptr<int32_t> totalSessions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
