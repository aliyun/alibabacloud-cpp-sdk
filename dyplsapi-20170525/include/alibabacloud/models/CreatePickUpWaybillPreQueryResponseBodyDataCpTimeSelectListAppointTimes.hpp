// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYRESPONSEBODYDATACPTIMESELECTLISTAPPOINTTIMES_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYRESPONSEBODYDATACPTIMESELECTLISTAPPOINTTIMES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(DateSelectable, dateSelectable_);
      DARABONBA_PTR_TO_JSON(TimeList, timeList_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(DateSelectable, dateSelectable_);
      DARABONBA_PTR_FROM_JSON(TimeList, timeList_);
    };
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes() = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes(const CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes &) = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes(CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes &&) = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes() = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes& operator=(const CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes &) = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes& operator=(CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && return this->dateSelectable_ == nullptr && return this->timeList_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // dateSelectable Field Functions 
    bool hasDateSelectable() const { return this->dateSelectable_ != nullptr;};
    void deleteDateSelectable() { this->dateSelectable_ = nullptr;};
    inline bool dateSelectable() const { DARABONBA_PTR_GET_DEFAULT(dateSelectable_, false) };
    inline CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes& setDateSelectable(bool dateSelectable) { DARABONBA_PTR_SET_VALUE(dateSelectable_, dateSelectable) };


    // timeList Field Functions 
    bool hasTimeList() const { return this->timeList_ != nullptr;};
    void deleteTimeList() { this->timeList_ = nullptr;};
    inline const vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList> & timeList() const { DARABONBA_PTR_GET_CONST(timeList_, vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList>) };
    inline vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList> timeList() { DARABONBA_PTR_GET(timeList_, vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList>) };
    inline CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes& setTimeList(const vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList> & timeList) { DARABONBA_PTR_SET_VALUE(timeList_, timeList) };
    inline CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes& setTimeList(vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList> && timeList) { DARABONBA_PTR_SET_RVALUE(timeList_, timeList) };


  protected:
    // The date in the YYYY-MM-DD format.
    std::shared_ptr<string> date_ = nullptr;
    // Indicates whether the date is selectable.
    std::shared_ptr<bool> dateSelectable_ = nullptr;
    // The time range for the scheduled pickup for this date.
    std::shared_ptr<vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList>> timeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
