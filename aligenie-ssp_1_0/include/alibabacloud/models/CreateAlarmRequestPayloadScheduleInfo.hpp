// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALARMREQUESTPAYLOADSCHEDULEINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEALARMREQUESTPAYLOADSCHEDULEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAlarmRequestPayloadScheduleInfoOnce.hpp>
#include <alibabacloud/models/CreateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay.hpp>
#include <alibabacloud/models/CreateAlarmRequestPayloadScheduleInfoWeekly.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CreateAlarmRequestPayloadScheduleInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlarmRequestPayloadScheduleInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Once, once_);
      DARABONBA_PTR_TO_JSON(StatutoryWorkingDay, statutoryWorkingDay_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Weekly, weekly_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlarmRequestPayloadScheduleInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Once, once_);
      DARABONBA_PTR_FROM_JSON(StatutoryWorkingDay, statutoryWorkingDay_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Weekly, weekly_);
    };
    CreateAlarmRequestPayloadScheduleInfo() = default ;
    CreateAlarmRequestPayloadScheduleInfo(const CreateAlarmRequestPayloadScheduleInfo &) = default ;
    CreateAlarmRequestPayloadScheduleInfo(CreateAlarmRequestPayloadScheduleInfo &&) = default ;
    CreateAlarmRequestPayloadScheduleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlarmRequestPayloadScheduleInfo() = default ;
    CreateAlarmRequestPayloadScheduleInfo& operator=(const CreateAlarmRequestPayloadScheduleInfo &) = default ;
    CreateAlarmRequestPayloadScheduleInfo& operator=(CreateAlarmRequestPayloadScheduleInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->once_ != nullptr
        && this->statutoryWorkingDay_ != nullptr && this->type_ != nullptr && this->weekly_ != nullptr; };
    // once Field Functions 
    bool hasOnce() const { return this->once_ != nullptr;};
    void deleteOnce() { this->once_ = nullptr;};
    inline const Models::CreateAlarmRequestPayloadScheduleInfoOnce & once() const { DARABONBA_PTR_GET_CONST(once_, Models::CreateAlarmRequestPayloadScheduleInfoOnce) };
    inline Models::CreateAlarmRequestPayloadScheduleInfoOnce once() { DARABONBA_PTR_GET(once_, Models::CreateAlarmRequestPayloadScheduleInfoOnce) };
    inline CreateAlarmRequestPayloadScheduleInfo& setOnce(const Models::CreateAlarmRequestPayloadScheduleInfoOnce & once) { DARABONBA_PTR_SET_VALUE(once_, once) };
    inline CreateAlarmRequestPayloadScheduleInfo& setOnce(Models::CreateAlarmRequestPayloadScheduleInfoOnce && once) { DARABONBA_PTR_SET_RVALUE(once_, once) };


    // statutoryWorkingDay Field Functions 
    bool hasStatutoryWorkingDay() const { return this->statutoryWorkingDay_ != nullptr;};
    void deleteStatutoryWorkingDay() { this->statutoryWorkingDay_ = nullptr;};
    inline const Models::CreateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay & statutoryWorkingDay() const { DARABONBA_PTR_GET_CONST(statutoryWorkingDay_, Models::CreateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay) };
    inline Models::CreateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay statutoryWorkingDay() { DARABONBA_PTR_GET(statutoryWorkingDay_, Models::CreateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay) };
    inline CreateAlarmRequestPayloadScheduleInfo& setStatutoryWorkingDay(const Models::CreateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay & statutoryWorkingDay) { DARABONBA_PTR_SET_VALUE(statutoryWorkingDay_, statutoryWorkingDay) };
    inline CreateAlarmRequestPayloadScheduleInfo& setStatutoryWorkingDay(Models::CreateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay && statutoryWorkingDay) { DARABONBA_PTR_SET_RVALUE(statutoryWorkingDay_, statutoryWorkingDay) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateAlarmRequestPayloadScheduleInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weekly Field Functions 
    bool hasWeekly() const { return this->weekly_ != nullptr;};
    void deleteWeekly() { this->weekly_ = nullptr;};
    inline const Models::CreateAlarmRequestPayloadScheduleInfoWeekly & weekly() const { DARABONBA_PTR_GET_CONST(weekly_, Models::CreateAlarmRequestPayloadScheduleInfoWeekly) };
    inline Models::CreateAlarmRequestPayloadScheduleInfoWeekly weekly() { DARABONBA_PTR_GET(weekly_, Models::CreateAlarmRequestPayloadScheduleInfoWeekly) };
    inline CreateAlarmRequestPayloadScheduleInfo& setWeekly(const Models::CreateAlarmRequestPayloadScheduleInfoWeekly & weekly) { DARABONBA_PTR_SET_VALUE(weekly_, weekly) };
    inline CreateAlarmRequestPayloadScheduleInfo& setWeekly(Models::CreateAlarmRequestPayloadScheduleInfoWeekly && weekly) { DARABONBA_PTR_SET_RVALUE(weekly_, weekly) };


  protected:
    std::shared_ptr<Models::CreateAlarmRequestPayloadScheduleInfoOnce> once_ = nullptr;
    std::shared_ptr<Models::CreateAlarmRequestPayloadScheduleInfoStatutoryWorkingDay> statutoryWorkingDay_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<Models::CreateAlarmRequestPayloadScheduleInfoWeekly> weekly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
