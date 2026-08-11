// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAAGENTTASKMODELUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATAAGENTTASKMODELUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetDataAgentTaskModelUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataAgentTaskModelUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataAgentTaskModelUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetDataAgentTaskModelUsageRequest() = default ;
    GetDataAgentTaskModelUsageRequest(const GetDataAgentTaskModelUsageRequest &) = default ;
    GetDataAgentTaskModelUsageRequest(GetDataAgentTaskModelUsageRequest &&) = default ;
    GetDataAgentTaskModelUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataAgentTaskModelUsageRequest() = default ;
    GetDataAgentTaskModelUsageRequest& operator=(const GetDataAgentTaskModelUsageRequest &) = default ;
    GetDataAgentTaskModelUsageRequest& operator=(GetDataAgentTaskModelUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->DMSUnit_ == nullptr && this->endTime_ == nullptr && this->regionId_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetDataAgentTaskModelUsageRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline GetDataAgentTaskModelUsageRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetDataAgentTaskModelUsageRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetDataAgentTaskModelUsageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The start time of the query time range. The value is a UNIX timestamp in seconds. The recommended interval length is no longer than one month.
    shared_ptr<int64_t> beginTime_ {};
    // The current Data Management unit.
    shared_ptr<string> DMSUnit_ {};
    // The end time of the query time range. The value is a UNIX timestamp in seconds. The recommended interval length is no longer than one month.
    shared_ptr<int64_t> endTime_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
