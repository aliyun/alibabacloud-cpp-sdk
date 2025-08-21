// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALARMRESPONSEBODYRESULTSCHEDULEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETALARMRESPONSEBODYRESULTSCHEDULEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAlarmResponseBodyResultScheduleInfoOnce.hpp>
#include <alibabacloud/models/GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay.hpp>
#include <alibabacloud/models/GetAlarmResponseBodyResultScheduleInfoWeekly.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetAlarmResponseBodyResultScheduleInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlarmResponseBodyResultScheduleInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Once, once_);
      DARABONBA_PTR_TO_JSON(StatutoryWorkingDay, statutoryWorkingDay_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Weekly, weekly_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlarmResponseBodyResultScheduleInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Once, once_);
      DARABONBA_PTR_FROM_JSON(StatutoryWorkingDay, statutoryWorkingDay_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Weekly, weekly_);
    };
    GetAlarmResponseBodyResultScheduleInfo() = default ;
    GetAlarmResponseBodyResultScheduleInfo(const GetAlarmResponseBodyResultScheduleInfo &) = default ;
    GetAlarmResponseBodyResultScheduleInfo(GetAlarmResponseBodyResultScheduleInfo &&) = default ;
    GetAlarmResponseBodyResultScheduleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlarmResponseBodyResultScheduleInfo() = default ;
    GetAlarmResponseBodyResultScheduleInfo& operator=(const GetAlarmResponseBodyResultScheduleInfo &) = default ;
    GetAlarmResponseBodyResultScheduleInfo& operator=(GetAlarmResponseBodyResultScheduleInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->once_ != nullptr
        && this->statutoryWorkingDay_ != nullptr && this->type_ != nullptr && this->weekly_ != nullptr; };
    // once Field Functions 
    bool hasOnce() const { return this->once_ != nullptr;};
    void deleteOnce() { this->once_ = nullptr;};
    inline const Models::GetAlarmResponseBodyResultScheduleInfoOnce & once() const { DARABONBA_PTR_GET_CONST(once_, Models::GetAlarmResponseBodyResultScheduleInfoOnce) };
    inline Models::GetAlarmResponseBodyResultScheduleInfoOnce once() { DARABONBA_PTR_GET(once_, Models::GetAlarmResponseBodyResultScheduleInfoOnce) };
    inline GetAlarmResponseBodyResultScheduleInfo& setOnce(const Models::GetAlarmResponseBodyResultScheduleInfoOnce & once) { DARABONBA_PTR_SET_VALUE(once_, once) };
    inline GetAlarmResponseBodyResultScheduleInfo& setOnce(Models::GetAlarmResponseBodyResultScheduleInfoOnce && once) { DARABONBA_PTR_SET_RVALUE(once_, once) };


    // statutoryWorkingDay Field Functions 
    bool hasStatutoryWorkingDay() const { return this->statutoryWorkingDay_ != nullptr;};
    void deleteStatutoryWorkingDay() { this->statutoryWorkingDay_ = nullptr;};
    inline const Models::GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay & statutoryWorkingDay() const { DARABONBA_PTR_GET_CONST(statutoryWorkingDay_, Models::GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay) };
    inline Models::GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay statutoryWorkingDay() { DARABONBA_PTR_GET(statutoryWorkingDay_, Models::GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay) };
    inline GetAlarmResponseBodyResultScheduleInfo& setStatutoryWorkingDay(const Models::GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay & statutoryWorkingDay) { DARABONBA_PTR_SET_VALUE(statutoryWorkingDay_, statutoryWorkingDay) };
    inline GetAlarmResponseBodyResultScheduleInfo& setStatutoryWorkingDay(Models::GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay && statutoryWorkingDay) { DARABONBA_PTR_SET_RVALUE(statutoryWorkingDay_, statutoryWorkingDay) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAlarmResponseBodyResultScheduleInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weekly Field Functions 
    bool hasWeekly() const { return this->weekly_ != nullptr;};
    void deleteWeekly() { this->weekly_ = nullptr;};
    inline const Models::GetAlarmResponseBodyResultScheduleInfoWeekly & weekly() const { DARABONBA_PTR_GET_CONST(weekly_, Models::GetAlarmResponseBodyResultScheduleInfoWeekly) };
    inline Models::GetAlarmResponseBodyResultScheduleInfoWeekly weekly() { DARABONBA_PTR_GET(weekly_, Models::GetAlarmResponseBodyResultScheduleInfoWeekly) };
    inline GetAlarmResponseBodyResultScheduleInfo& setWeekly(const Models::GetAlarmResponseBodyResultScheduleInfoWeekly & weekly) { DARABONBA_PTR_SET_VALUE(weekly_, weekly) };
    inline GetAlarmResponseBodyResultScheduleInfo& setWeekly(Models::GetAlarmResponseBodyResultScheduleInfoWeekly && weekly) { DARABONBA_PTR_SET_RVALUE(weekly_, weekly) };


  protected:
    std::shared_ptr<Models::GetAlarmResponseBodyResultScheduleInfoOnce> once_ = nullptr;
    std::shared_ptr<Models::GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay> statutoryWorkingDay_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<Models::GetAlarmResponseBodyResultScheduleInfoWeekly> weekly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
