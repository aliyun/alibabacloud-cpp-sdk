// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEMAINTENANCEATTRIBUTESREQUESTMAINTENANCEWINDOW_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEMAINTENANCEATTRIBUTESREQUESTMAINTENANCEWINDOW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow() = default ;
    ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow(const ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow &) = default ;
    ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow(ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow &&) = default ;
    ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow() = default ;
    ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow& operator=(const ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow &) = default ;
    ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow& operator=(ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time of the maintenance window. The time must be on the hour. You must configure both StartTime and EndTime. The value of EndTime must be 1 to 23 hours later than the value of StartTime. Specify the time in the `HH:mm:ss` format. The time must be in UTC+8. Set the value of N to 1.
    std::shared_ptr<string> endTime_ = nullptr;
    // The start time of the maintenance window. The time must be on the hour. You must configure both StartTime and EndTime. The value of EndTime must be 1 to 23 hours later than the value of StartTime. Specify the time in the `HH:mm:ss` format. The time must be in UTC+8. Set the value of N to 1.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
