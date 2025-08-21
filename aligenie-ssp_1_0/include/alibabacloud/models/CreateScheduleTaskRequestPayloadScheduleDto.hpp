// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULETASKREQUESTPAYLOADSCHEDULEDTO_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULETASKREQUESTPAYLOADSCHEDULEDTO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateScheduleTaskRequestPayloadScheduleDTOOnce.hpp>
#include <alibabacloud/models/CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay.hpp>
#include <alibabacloud/models/CreateScheduleTaskRequestPayloadScheduleDTOWeekly.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CreateScheduleTaskRequestPayloadScheduleDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduleTaskRequestPayloadScheduleDTO& obj) { 
      DARABONBA_PTR_TO_JSON(Once, once_);
      DARABONBA_PTR_TO_JSON(ScheduleEndTime, scheduleEndTime_);
      DARABONBA_PTR_TO_JSON(ScheduleStartTime, scheduleStartTime_);
      DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(StatutoryWorkingDay, statutoryWorkingDay_);
      DARABONBA_PTR_TO_JSON(Weekly, weekly_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduleTaskRequestPayloadScheduleDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(Once, once_);
      DARABONBA_PTR_FROM_JSON(ScheduleEndTime, scheduleEndTime_);
      DARABONBA_PTR_FROM_JSON(ScheduleStartTime, scheduleStartTime_);
      DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(StatutoryWorkingDay, statutoryWorkingDay_);
      DARABONBA_PTR_FROM_JSON(Weekly, weekly_);
    };
    CreateScheduleTaskRequestPayloadScheduleDTO() = default ;
    CreateScheduleTaskRequestPayloadScheduleDTO(const CreateScheduleTaskRequestPayloadScheduleDTO &) = default ;
    CreateScheduleTaskRequestPayloadScheduleDTO(CreateScheduleTaskRequestPayloadScheduleDTO &&) = default ;
    CreateScheduleTaskRequestPayloadScheduleDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduleTaskRequestPayloadScheduleDTO() = default ;
    CreateScheduleTaskRequestPayloadScheduleDTO& operator=(const CreateScheduleTaskRequestPayloadScheduleDTO &) = default ;
    CreateScheduleTaskRequestPayloadScheduleDTO& operator=(CreateScheduleTaskRequestPayloadScheduleDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->once_ != nullptr
        && this->scheduleEndTime_ != nullptr && this->scheduleStartTime_ != nullptr && this->scheduleType_ != nullptr && this->statutoryWorkingDay_ != nullptr && this->weekly_ != nullptr; };
    // once Field Functions 
    bool hasOnce() const { return this->once_ != nullptr;};
    void deleteOnce() { this->once_ = nullptr;};
    inline const Models::CreateScheduleTaskRequestPayloadScheduleDTOOnce & once() const { DARABONBA_PTR_GET_CONST(once_, Models::CreateScheduleTaskRequestPayloadScheduleDTOOnce) };
    inline Models::CreateScheduleTaskRequestPayloadScheduleDTOOnce once() { DARABONBA_PTR_GET(once_, Models::CreateScheduleTaskRequestPayloadScheduleDTOOnce) };
    inline CreateScheduleTaskRequestPayloadScheduleDTO& setOnce(const Models::CreateScheduleTaskRequestPayloadScheduleDTOOnce & once) { DARABONBA_PTR_SET_VALUE(once_, once) };
    inline CreateScheduleTaskRequestPayloadScheduleDTO& setOnce(Models::CreateScheduleTaskRequestPayloadScheduleDTOOnce && once) { DARABONBA_PTR_SET_RVALUE(once_, once) };


    // scheduleEndTime Field Functions 
    bool hasScheduleEndTime() const { return this->scheduleEndTime_ != nullptr;};
    void deleteScheduleEndTime() { this->scheduleEndTime_ = nullptr;};
    inline int64_t scheduleEndTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleEndTime_, 0L) };
    inline CreateScheduleTaskRequestPayloadScheduleDTO& setScheduleEndTime(int64_t scheduleEndTime) { DARABONBA_PTR_SET_VALUE(scheduleEndTime_, scheduleEndTime) };


    // scheduleStartTime Field Functions 
    bool hasScheduleStartTime() const { return this->scheduleStartTime_ != nullptr;};
    void deleteScheduleStartTime() { this->scheduleStartTime_ = nullptr;};
    inline int64_t scheduleStartTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleStartTime_, 0L) };
    inline CreateScheduleTaskRequestPayloadScheduleDTO& setScheduleStartTime(int64_t scheduleStartTime) { DARABONBA_PTR_SET_VALUE(scheduleStartTime_, scheduleStartTime) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string scheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline CreateScheduleTaskRequestPayloadScheduleDTO& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // statutoryWorkingDay Field Functions 
    bool hasStatutoryWorkingDay() const { return this->statutoryWorkingDay_ != nullptr;};
    void deleteStatutoryWorkingDay() { this->statutoryWorkingDay_ = nullptr;};
    inline const Models::CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay & statutoryWorkingDay() const { DARABONBA_PTR_GET_CONST(statutoryWorkingDay_, Models::CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay) };
    inline Models::CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay statutoryWorkingDay() { DARABONBA_PTR_GET(statutoryWorkingDay_, Models::CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay) };
    inline CreateScheduleTaskRequestPayloadScheduleDTO& setStatutoryWorkingDay(const Models::CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay & statutoryWorkingDay) { DARABONBA_PTR_SET_VALUE(statutoryWorkingDay_, statutoryWorkingDay) };
    inline CreateScheduleTaskRequestPayloadScheduleDTO& setStatutoryWorkingDay(Models::CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay && statutoryWorkingDay) { DARABONBA_PTR_SET_RVALUE(statutoryWorkingDay_, statutoryWorkingDay) };


    // weekly Field Functions 
    bool hasWeekly() const { return this->weekly_ != nullptr;};
    void deleteWeekly() { this->weekly_ = nullptr;};
    inline const Models::CreateScheduleTaskRequestPayloadScheduleDTOWeekly & weekly() const { DARABONBA_PTR_GET_CONST(weekly_, Models::CreateScheduleTaskRequestPayloadScheduleDTOWeekly) };
    inline Models::CreateScheduleTaskRequestPayloadScheduleDTOWeekly weekly() { DARABONBA_PTR_GET(weekly_, Models::CreateScheduleTaskRequestPayloadScheduleDTOWeekly) };
    inline CreateScheduleTaskRequestPayloadScheduleDTO& setWeekly(const Models::CreateScheduleTaskRequestPayloadScheduleDTOWeekly & weekly) { DARABONBA_PTR_SET_VALUE(weekly_, weekly) };
    inline CreateScheduleTaskRequestPayloadScheduleDTO& setWeekly(Models::CreateScheduleTaskRequestPayloadScheduleDTOWeekly && weekly) { DARABONBA_PTR_SET_RVALUE(weekly_, weekly) };


  protected:
    std::shared_ptr<Models::CreateScheduleTaskRequestPayloadScheduleDTOOnce> once_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> scheduleEndTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> scheduleStartTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scheduleType_ = nullptr;
    std::shared_ptr<Models::CreateScheduleTaskRequestPayloadScheduleDTOStatutoryWorkingDay> statutoryWorkingDay_ = nullptr;
    std::shared_ptr<Models::CreateScheduleTaskRequestPayloadScheduleDTOWeekly> weekly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
