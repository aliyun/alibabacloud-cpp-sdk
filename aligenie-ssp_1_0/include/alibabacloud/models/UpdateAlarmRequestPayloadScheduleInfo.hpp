// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALARMREQUESTPAYLOADSCHEDULEINFO_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALARMREQUESTPAYLOADSCHEDULEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAlarmRequestPayloadScheduleInfoOnce.hpp>
#include <alibabacloud/models/UpdateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay.hpp>
#include <alibabacloud/models/UpdateAlarmRequestPayloadScheduleInfoWeekly.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class UpdateAlarmRequestPayloadScheduleInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlarmRequestPayloadScheduleInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Once, once_);
      DARABONBA_PTR_TO_JSON(StatutoryWorkingDay, statutoryWorkingDay_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Weekly, weekly_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlarmRequestPayloadScheduleInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Once, once_);
      DARABONBA_PTR_FROM_JSON(StatutoryWorkingDay, statutoryWorkingDay_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Weekly, weekly_);
    };
    UpdateAlarmRequestPayloadScheduleInfo() = default ;
    UpdateAlarmRequestPayloadScheduleInfo(const UpdateAlarmRequestPayloadScheduleInfo &) = default ;
    UpdateAlarmRequestPayloadScheduleInfo(UpdateAlarmRequestPayloadScheduleInfo &&) = default ;
    UpdateAlarmRequestPayloadScheduleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlarmRequestPayloadScheduleInfo() = default ;
    UpdateAlarmRequestPayloadScheduleInfo& operator=(const UpdateAlarmRequestPayloadScheduleInfo &) = default ;
    UpdateAlarmRequestPayloadScheduleInfo& operator=(UpdateAlarmRequestPayloadScheduleInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->once_ != nullptr
        && this->statutoryWorkingDay_ != nullptr && this->type_ != nullptr && this->weekly_ != nullptr; };
    // once Field Functions 
    bool hasOnce() const { return this->once_ != nullptr;};
    void deleteOnce() { this->once_ = nullptr;};
    inline const Models::UpdateAlarmRequestPayloadScheduleInfoOnce & once() const { DARABONBA_PTR_GET_CONST(once_, Models::UpdateAlarmRequestPayloadScheduleInfoOnce) };
    inline Models::UpdateAlarmRequestPayloadScheduleInfoOnce once() { DARABONBA_PTR_GET(once_, Models::UpdateAlarmRequestPayloadScheduleInfoOnce) };
    inline UpdateAlarmRequestPayloadScheduleInfo& setOnce(const Models::UpdateAlarmRequestPayloadScheduleInfoOnce & once) { DARABONBA_PTR_SET_VALUE(once_, once) };
    inline UpdateAlarmRequestPayloadScheduleInfo& setOnce(Models::UpdateAlarmRequestPayloadScheduleInfoOnce && once) { DARABONBA_PTR_SET_RVALUE(once_, once) };


    // statutoryWorkingDay Field Functions 
    bool hasStatutoryWorkingDay() const { return this->statutoryWorkingDay_ != nullptr;};
    void deleteStatutoryWorkingDay() { this->statutoryWorkingDay_ = nullptr;};
    inline const Models::UpdateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay & statutoryWorkingDay() const { DARABONBA_PTR_GET_CONST(statutoryWorkingDay_, Models::UpdateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay) };
    inline Models::UpdateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay statutoryWorkingDay() { DARABONBA_PTR_GET(statutoryWorkingDay_, Models::UpdateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay) };
    inline UpdateAlarmRequestPayloadScheduleInfo& setStatutoryWorkingDay(const Models::UpdateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay & statutoryWorkingDay) { DARABONBA_PTR_SET_VALUE(statutoryWorkingDay_, statutoryWorkingDay) };
    inline UpdateAlarmRequestPayloadScheduleInfo& setStatutoryWorkingDay(Models::UpdateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay && statutoryWorkingDay) { DARABONBA_PTR_SET_RVALUE(statutoryWorkingDay_, statutoryWorkingDay) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateAlarmRequestPayloadScheduleInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weekly Field Functions 
    bool hasWeekly() const { return this->weekly_ != nullptr;};
    void deleteWeekly() { this->weekly_ = nullptr;};
    inline const Models::UpdateAlarmRequestPayloadScheduleInfoWeekly & weekly() const { DARABONBA_PTR_GET_CONST(weekly_, Models::UpdateAlarmRequestPayloadScheduleInfoWeekly) };
    inline Models::UpdateAlarmRequestPayloadScheduleInfoWeekly weekly() { DARABONBA_PTR_GET(weekly_, Models::UpdateAlarmRequestPayloadScheduleInfoWeekly) };
    inline UpdateAlarmRequestPayloadScheduleInfo& setWeekly(const Models::UpdateAlarmRequestPayloadScheduleInfoWeekly & weekly) { DARABONBA_PTR_SET_VALUE(weekly_, weekly) };
    inline UpdateAlarmRequestPayloadScheduleInfo& setWeekly(Models::UpdateAlarmRequestPayloadScheduleInfoWeekly && weekly) { DARABONBA_PTR_SET_RVALUE(weekly_, weekly) };


  protected:
    std::shared_ptr<Models::UpdateAlarmRequestPayloadScheduleInfoOnce> once_ = nullptr;
    std::shared_ptr<Models::UpdateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay> statutoryWorkingDay_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<Models::UpdateAlarmRequestPayloadScheduleInfoWeekly> weekly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
