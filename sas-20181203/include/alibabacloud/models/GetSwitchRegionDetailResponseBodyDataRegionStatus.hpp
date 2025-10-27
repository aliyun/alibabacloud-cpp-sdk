// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSWITCHREGIONDETAILRESPONSEBODYDATAREGIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETSWITCHREGIONDETAILRESPONSEBODYDATAREGIONSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSwitchRegionDetailResponseBodyDataRegionStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSwitchRegionDetailResponseBodyDataRegionStatus& obj) { 
      DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_TO_JSON(GmtPlanSwitchTime, gmtPlanSwitchTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetSwitchRegionDetailResponseBodyDataRegionStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_FROM_JSON(GmtPlanSwitchTime, gmtPlanSwitchTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetSwitchRegionDetailResponseBodyDataRegionStatus() = default ;
    GetSwitchRegionDetailResponseBodyDataRegionStatus(const GetSwitchRegionDetailResponseBodyDataRegionStatus &) = default ;
    GetSwitchRegionDetailResponseBodyDataRegionStatus(GetSwitchRegionDetailResponseBodyDataRegionStatus &&) = default ;
    GetSwitchRegionDetailResponseBodyDataRegionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSwitchRegionDetailResponseBodyDataRegionStatus() = default ;
    GetSwitchRegionDetailResponseBodyDataRegionStatus& operator=(const GetSwitchRegionDetailResponseBodyDataRegionStatus &) = default ;
    GetSwitchRegionDetailResponseBodyDataRegionStatus& operator=(GetSwitchRegionDetailResponseBodyDataRegionStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsCount_ == nullptr
        && return this->gmtPlanSwitchTime_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr; };
    // ecsCount Field Functions 
    bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
    void deleteEcsCount() { this->ecsCount_ = nullptr;};
    inline int32_t ecsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0) };
    inline GetSwitchRegionDetailResponseBodyDataRegionStatus& setEcsCount(int32_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


    // gmtPlanSwitchTime Field Functions 
    bool hasGmtPlanSwitchTime() const { return this->gmtPlanSwitchTime_ != nullptr;};
    void deleteGmtPlanSwitchTime() { this->gmtPlanSwitchTime_ = nullptr;};
    inline int64_t gmtPlanSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(gmtPlanSwitchTime_, 0L) };
    inline GetSwitchRegionDetailResponseBodyDataRegionStatus& setGmtPlanSwitchTime(int64_t gmtPlanSwitchTime) { DARABONBA_PTR_SET_VALUE(gmtPlanSwitchTime_, gmtPlanSwitchTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSwitchRegionDetailResponseBodyDataRegionStatus& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetSwitchRegionDetailResponseBodyDataRegionStatus& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of ECS instances.
    std::shared_ptr<int32_t> ecsCount_ = nullptr;
    // The time when the migration is scheduled.
    std::shared_ptr<int64_t> gmtPlanSwitchTime_ = nullptr;
    // The region in which the server resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The migration status. Valid values:
    // 
    // *   **0**: pending
    // *   **1**: successful
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
