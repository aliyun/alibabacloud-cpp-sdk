// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACTIVEOPERATIONMAINTAINCONFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACTIVEOPERATIONMAINTAINCONFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyActiveOperationMaintainConfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyActiveOperationMaintainConfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CycleTime, cycleTime_);
      DARABONBA_PTR_TO_JSON(CycleType, cycleType_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyActiveOperationMaintainConfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleTime, cycleTime_);
      DARABONBA_PTR_FROM_JSON(CycleType, cycleType_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyActiveOperationMaintainConfRequest() = default ;
    ModifyActiveOperationMaintainConfRequest(const ModifyActiveOperationMaintainConfRequest &) = default ;
    ModifyActiveOperationMaintainConfRequest(ModifyActiveOperationMaintainConfRequest &&) = default ;
    ModifyActiveOperationMaintainConfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyActiveOperationMaintainConfRequest() = default ;
    ModifyActiveOperationMaintainConfRequest& operator=(const ModifyActiveOperationMaintainConfRequest &) = default ;
    ModifyActiveOperationMaintainConfRequest& operator=(ModifyActiveOperationMaintainConfRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cycleTime_ == nullptr
        && this->cycleType_ == nullptr && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr; };
    // cycleTime Field Functions 
    bool hasCycleTime() const { return this->cycleTime_ != nullptr;};
    void deleteCycleTime() { this->cycleTime_ = nullptr;};
    inline string getCycleTime() const { DARABONBA_PTR_GET_DEFAULT(cycleTime_, "") };
    inline ModifyActiveOperationMaintainConfRequest& setCycleTime(string cycleTime) { DARABONBA_PTR_SET_VALUE(cycleTime_, cycleTime) };


    // cycleType Field Functions 
    bool hasCycleType() const { return this->cycleType_ != nullptr;};
    void deleteCycleType() { this->cycleType_ = nullptr;};
    inline string getCycleType() const { DARABONBA_PTR_GET_DEFAULT(cycleType_, "") };
    inline ModifyActiveOperationMaintainConfRequest& setCycleType(string cycleType) { DARABONBA_PTR_SET_VALUE(cycleType_, cycleType) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline ModifyActiveOperationMaintainConfRequest& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline ModifyActiveOperationMaintainConfRequest& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyActiveOperationMaintainConfRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ModifyActiveOperationMaintainConfRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is required.
    shared_ptr<string> cycleTime_ {};
    // This parameter is required.
    shared_ptr<string> cycleType_ {};
    // This parameter is required.
    shared_ptr<string> maintainEndTime_ {};
    // This parameter is required.
    shared_ptr<string> maintainStartTime_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
