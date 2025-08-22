// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEALARMSEVERITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEALARMSEVERITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ChangeAlarmSeverityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeAlarmSeverityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
      DARABONBA_PTR_TO_JSON(HandlerId, handlerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeAlarmSeverityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
      DARABONBA_PTR_FROM_JSON(HandlerId, handlerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
    };
    ChangeAlarmSeverityRequest() = default ;
    ChangeAlarmSeverityRequest(const ChangeAlarmSeverityRequest &) = default ;
    ChangeAlarmSeverityRequest(ChangeAlarmSeverityRequest &&) = default ;
    ChangeAlarmSeverityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeAlarmSeverityRequest() = default ;
    ChangeAlarmSeverityRequest& operator=(const ChangeAlarmSeverityRequest &) = default ;
    ChangeAlarmSeverityRequest& operator=(ChangeAlarmSeverityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmId_ != nullptr
        && this->handlerId_ != nullptr && this->regionId_ != nullptr && this->severity_ != nullptr; };
    // alarmId Field Functions 
    bool hasAlarmId() const { return this->alarmId_ != nullptr;};
    void deleteAlarmId() { this->alarmId_ = nullptr;};
    inline int64_t alarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, 0L) };
    inline ChangeAlarmSeverityRequest& setAlarmId(int64_t alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


    // handlerId Field Functions 
    bool hasHandlerId() const { return this->handlerId_ != nullptr;};
    void deleteHandlerId() { this->handlerId_ = nullptr;};
    inline int64_t handlerId() const { DARABONBA_PTR_GET_DEFAULT(handlerId_, 0L) };
    inline ChangeAlarmSeverityRequest& setHandlerId(int64_t handlerId) { DARABONBA_PTR_SET_VALUE(handlerId_, handlerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ChangeAlarmSeverityRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline ChangeAlarmSeverityRequest& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


  protected:
    // The ID of the alert.
    // 
    // For more information about how to obtain the ID of an alert, see [ListAlertEvents](https://help.aliyun.com/document_detail/2612346.html).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> alarmId_ = nullptr;
    // The ID of the handler.
    std::shared_ptr<int64_t> handlerId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The severity level of the alert. Valid values: P1, P2, P3, and P4. P4 indicates the lowest severity, whereas P1 indicates the highest severity.
    // 
    // This parameter is required.
    std::shared_ptr<string> severity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
