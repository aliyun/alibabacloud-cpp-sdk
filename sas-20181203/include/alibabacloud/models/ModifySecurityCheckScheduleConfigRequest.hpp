// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYCHECKSCHEDULECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYCHECKSCHEDULECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifySecurityCheckScheduleConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityCheckScheduleConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DaysOfWeek, daysOfWeek_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityCheckScheduleConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DaysOfWeek, daysOfWeek_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ModifySecurityCheckScheduleConfigRequest() = default ;
    ModifySecurityCheckScheduleConfigRequest(const ModifySecurityCheckScheduleConfigRequest &) = default ;
    ModifySecurityCheckScheduleConfigRequest(ModifySecurityCheckScheduleConfigRequest &&) = default ;
    ModifySecurityCheckScheduleConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySecurityCheckScheduleConfigRequest() = default ;
    ModifySecurityCheckScheduleConfigRequest& operator=(const ModifySecurityCheckScheduleConfigRequest &) = default ;
    ModifySecurityCheckScheduleConfigRequest& operator=(ModifySecurityCheckScheduleConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->daysOfWeek_ == nullptr
        && this->endTime_ == nullptr && this->lang_ == nullptr && this->resourceOwnerId_ == nullptr && this->sourceIp_ == nullptr && this->startTime_ == nullptr; };
    // daysOfWeek Field Functions 
    bool hasDaysOfWeek() const { return this->daysOfWeek_ != nullptr;};
    void deleteDaysOfWeek() { this->daysOfWeek_ = nullptr;};
    inline string getDaysOfWeek() const { DARABONBA_PTR_GET_DEFAULT(daysOfWeek_, "") };
    inline ModifySecurityCheckScheduleConfigRequest& setDaysOfWeek(string daysOfWeek) { DARABONBA_PTR_SET_VALUE(daysOfWeek_, daysOfWeek) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline ModifySecurityCheckScheduleConfigRequest& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifySecurityCheckScheduleConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySecurityCheckScheduleConfigRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifySecurityCheckScheduleConfigRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline ModifySecurityCheckScheduleConfigRequest& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The days on which the automatic configuration check runs. You can specify multiple days. Separate multiple days with commas (,). Valid values:
    // 
    // *   **1**: Monday
    // *   **2**: Tuesday
    // *   **3**: Wednesday
    // *   **4**: Thursday
    // *   **5**: Friday
    // *   **6**: Saturday
    // *   **7**: Sunday
    // 
    // This parameter is required.
    shared_ptr<string> daysOfWeek_ {};
    // The time period during which the automatic configuration check ends. Valid values:
    // 
    // *   **0**: 00:00 to 06:00
    // *   **6**: 06:00 to 12:00
    // *   **12**: 12:00 to 18:00
    // *   **18**: 18:00 to 24:00
    // 
    // This parameter is required.
    shared_ptr<int32_t> endTime_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The time period during which the automatic configuration check starts. Valid values:
    // 
    // *   **0**: 00:00 to 06:00
    // *   **6**: 06:00 to 12:00
    // *   **12**: 12:00 to 18:00
    // *   **18**: 18:00 to 24:00
    // 
    // This parameter is required.
    shared_ptr<int32_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
