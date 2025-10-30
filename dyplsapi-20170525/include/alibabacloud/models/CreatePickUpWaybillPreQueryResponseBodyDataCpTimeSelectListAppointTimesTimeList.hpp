// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYRESPONSEBODYDATACPTIMESELECTLISTAPPOINTTIMESTIMELIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYRESPONSEBODYDATACPTIMESELECTLISTAPPOINTTIMESTIMELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(SelectDisableTip, selectDisableTip_);
      DARABONBA_PTR_TO_JSON(Selectable, selectable_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(SelectDisableTip, selectDisableTip_);
      DARABONBA_PTR_FROM_JSON(Selectable, selectable_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList() = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList(const CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList &) = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList(CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList &&) = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList() = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList& operator=(const CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList &) = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList& operator=(CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->selectDisableTip_ == nullptr && return this->selectable_ == nullptr && return this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // selectDisableTip Field Functions 
    bool hasSelectDisableTip() const { return this->selectDisableTip_ != nullptr;};
    void deleteSelectDisableTip() { this->selectDisableTip_ = nullptr;};
    inline string selectDisableTip() const { DARABONBA_PTR_GET_DEFAULT(selectDisableTip_, "") };
    inline CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList& setSelectDisableTip(string selectDisableTip) { DARABONBA_PTR_SET_VALUE(selectDisableTip_, selectDisableTip) };


    // selectable Field Functions 
    bool hasSelectable() const { return this->selectable_ != nullptr;};
    void deleteSelectable() { this->selectable_ = nullptr;};
    inline bool selectable() const { DARABONBA_PTR_GET_DEFAULT(selectable_, false) };
    inline CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList& setSelectable(bool selectable) { DARABONBA_PTR_SET_VALUE(selectable_, selectable) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range.
    std::shared_ptr<string> endTime_ = nullptr;
    // The tip displayed when the scheduled pickup is not available.
    std::shared_ptr<string> selectDisableTip_ = nullptr;
    // Indicates whether the time range can be selected for the scheduled pickup.
    std::shared_ptr<bool> selectable_ = nullptr;
    // The beginning of the time range.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
