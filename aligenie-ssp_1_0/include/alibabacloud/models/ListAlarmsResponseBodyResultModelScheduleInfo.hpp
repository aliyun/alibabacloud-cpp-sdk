// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALARMSRESPONSEBODYRESULTMODELSCHEDULEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTALARMSRESPONSEBODYRESULTMODELSCHEDULEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAlarmsResponseBodyResultModelScheduleInfoOnce.hpp>
#include <alibabacloud/models/ListAlarmsResponseBodyResultModelScheduleInfoStatutoryWorkingDay.hpp>
#include <alibabacloud/models/ListAlarmsResponseBodyResultModelScheduleInfoWeekly.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListAlarmsResponseBodyResultModelScheduleInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlarmsResponseBodyResultModelScheduleInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Once, once_);
      DARABONBA_PTR_TO_JSON(StatutoryWorkingDay, statutoryWorkingDay_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Weekly, weekly_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlarmsResponseBodyResultModelScheduleInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Once, once_);
      DARABONBA_PTR_FROM_JSON(StatutoryWorkingDay, statutoryWorkingDay_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Weekly, weekly_);
    };
    ListAlarmsResponseBodyResultModelScheduleInfo() = default ;
    ListAlarmsResponseBodyResultModelScheduleInfo(const ListAlarmsResponseBodyResultModelScheduleInfo &) = default ;
    ListAlarmsResponseBodyResultModelScheduleInfo(ListAlarmsResponseBodyResultModelScheduleInfo &&) = default ;
    ListAlarmsResponseBodyResultModelScheduleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlarmsResponseBodyResultModelScheduleInfo() = default ;
    ListAlarmsResponseBodyResultModelScheduleInfo& operator=(const ListAlarmsResponseBodyResultModelScheduleInfo &) = default ;
    ListAlarmsResponseBodyResultModelScheduleInfo& operator=(ListAlarmsResponseBodyResultModelScheduleInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->once_ != nullptr
        && this->statutoryWorkingDay_ != nullptr && this->type_ != nullptr && this->weekly_ != nullptr; };
    // once Field Functions 
    bool hasOnce() const { return this->once_ != nullptr;};
    void deleteOnce() { this->once_ = nullptr;};
    inline const Models::ListAlarmsResponseBodyResultModelScheduleInfoOnce & once() const { DARABONBA_PTR_GET_CONST(once_, Models::ListAlarmsResponseBodyResultModelScheduleInfoOnce) };
    inline Models::ListAlarmsResponseBodyResultModelScheduleInfoOnce once() { DARABONBA_PTR_GET(once_, Models::ListAlarmsResponseBodyResultModelScheduleInfoOnce) };
    inline ListAlarmsResponseBodyResultModelScheduleInfo& setOnce(const Models::ListAlarmsResponseBodyResultModelScheduleInfoOnce & once) { DARABONBA_PTR_SET_VALUE(once_, once) };
    inline ListAlarmsResponseBodyResultModelScheduleInfo& setOnce(Models::ListAlarmsResponseBodyResultModelScheduleInfoOnce && once) { DARABONBA_PTR_SET_RVALUE(once_, once) };


    // statutoryWorkingDay Field Functions 
    bool hasStatutoryWorkingDay() const { return this->statutoryWorkingDay_ != nullptr;};
    void deleteStatutoryWorkingDay() { this->statutoryWorkingDay_ = nullptr;};
    inline const Models::ListAlarmsResponseBodyResultModelScheduleInfoStatutoryWorkingDay & statutoryWorkingDay() const { DARABONBA_PTR_GET_CONST(statutoryWorkingDay_, Models::ListAlarmsResponseBodyResultModelScheduleInfoStatutoryWorkingDay) };
    inline Models::ListAlarmsResponseBodyResultModelScheduleInfoStatutoryWorkingDay statutoryWorkingDay() { DARABONBA_PTR_GET(statutoryWorkingDay_, Models::ListAlarmsResponseBodyResultModelScheduleInfoStatutoryWorkingDay) };
    inline ListAlarmsResponseBodyResultModelScheduleInfo& setStatutoryWorkingDay(const Models::ListAlarmsResponseBodyResultModelScheduleInfoStatutoryWorkingDay & statutoryWorkingDay) { DARABONBA_PTR_SET_VALUE(statutoryWorkingDay_, statutoryWorkingDay) };
    inline ListAlarmsResponseBodyResultModelScheduleInfo& setStatutoryWorkingDay(Models::ListAlarmsResponseBodyResultModelScheduleInfoStatutoryWorkingDay && statutoryWorkingDay) { DARABONBA_PTR_SET_RVALUE(statutoryWorkingDay_, statutoryWorkingDay) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAlarmsResponseBodyResultModelScheduleInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weekly Field Functions 
    bool hasWeekly() const { return this->weekly_ != nullptr;};
    void deleteWeekly() { this->weekly_ = nullptr;};
    inline const Models::ListAlarmsResponseBodyResultModelScheduleInfoWeekly & weekly() const { DARABONBA_PTR_GET_CONST(weekly_, Models::ListAlarmsResponseBodyResultModelScheduleInfoWeekly) };
    inline Models::ListAlarmsResponseBodyResultModelScheduleInfoWeekly weekly() { DARABONBA_PTR_GET(weekly_, Models::ListAlarmsResponseBodyResultModelScheduleInfoWeekly) };
    inline ListAlarmsResponseBodyResultModelScheduleInfo& setWeekly(const Models::ListAlarmsResponseBodyResultModelScheduleInfoWeekly & weekly) { DARABONBA_PTR_SET_VALUE(weekly_, weekly) };
    inline ListAlarmsResponseBodyResultModelScheduleInfo& setWeekly(Models::ListAlarmsResponseBodyResultModelScheduleInfoWeekly && weekly) { DARABONBA_PTR_SET_RVALUE(weekly_, weekly) };


  protected:
    std::shared_ptr<Models::ListAlarmsResponseBodyResultModelScheduleInfoOnce> once_ = nullptr;
    std::shared_ptr<Models::ListAlarmsResponseBodyResultModelScheduleInfoStatutoryWorkingDay> statutoryWorkingDay_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<Models::ListAlarmsResponseBodyResultModelScheduleInfoWeekly> weekly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
