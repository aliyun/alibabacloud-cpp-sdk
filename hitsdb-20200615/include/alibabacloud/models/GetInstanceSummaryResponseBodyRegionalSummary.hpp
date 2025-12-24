// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESUMMARYRESPONSEBODYREGIONALSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESUMMARYRESPONSEBODYREGIONALSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetInstanceSummaryResponseBodyRegionalSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceSummaryResponseBodyRegionalSummary& obj) { 
      DARABONBA_PTR_TO_JSON(LockingCount, lockingCount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RunningCount, runningCount_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceSummaryResponseBodyRegionalSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(LockingCount, lockingCount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RunningCount, runningCount_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetInstanceSummaryResponseBodyRegionalSummary() = default ;
    GetInstanceSummaryResponseBodyRegionalSummary(const GetInstanceSummaryResponseBodyRegionalSummary &) = default ;
    GetInstanceSummaryResponseBodyRegionalSummary(GetInstanceSummaryResponseBodyRegionalSummary &&) = default ;
    GetInstanceSummaryResponseBodyRegionalSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceSummaryResponseBodyRegionalSummary() = default ;
    GetInstanceSummaryResponseBodyRegionalSummary& operator=(const GetInstanceSummaryResponseBodyRegionalSummary &) = default ;
    GetInstanceSummaryResponseBodyRegionalSummary& operator=(GetInstanceSummaryResponseBodyRegionalSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lockingCount_ == nullptr
        && return this->regionId_ == nullptr && return this->runningCount_ == nullptr && return this->total_ == nullptr; };
    // lockingCount Field Functions 
    bool hasLockingCount() const { return this->lockingCount_ != nullptr;};
    void deleteLockingCount() { this->lockingCount_ = nullptr;};
    inline int32_t lockingCount() const { DARABONBA_PTR_GET_DEFAULT(lockingCount_, 0) };
    inline GetInstanceSummaryResponseBodyRegionalSummary& setLockingCount(int32_t lockingCount) { DARABONBA_PTR_SET_VALUE(lockingCount_, lockingCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetInstanceSummaryResponseBodyRegionalSummary& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // runningCount Field Functions 
    bool hasRunningCount() const { return this->runningCount_ != nullptr;};
    void deleteRunningCount() { this->runningCount_ = nullptr;};
    inline int32_t runningCount() const { DARABONBA_PTR_GET_DEFAULT(runningCount_, 0) };
    inline GetInstanceSummaryResponseBodyRegionalSummary& setRunningCount(int32_t runningCount) { DARABONBA_PTR_SET_VALUE(runningCount_, runningCount) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetInstanceSummaryResponseBodyRegionalSummary& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int32_t> lockingCount_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int32_t> runningCount_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
