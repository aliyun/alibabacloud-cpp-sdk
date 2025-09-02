// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHIFTSCHEDULESRESPONSEBODYPAGINGSHIFTSCHEDULES_HPP_
#define ALIBABACLOUD_MODELS_LISTSHIFTSCHEDULESRESPONSEBODYPAGINGSHIFTSCHEDULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListShiftSchedulesResponseBodyPagingShiftSchedules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListShiftSchedulesResponseBodyPagingShiftSchedules& obj) { 
      DARABONBA_PTR_TO_JSON(ShiftScheduleIdentifier, shiftScheduleIdentifier_);
      DARABONBA_PTR_TO_JSON(ShiftScheduleName, shiftScheduleName_);
    };
    friend void from_json(const Darabonba::Json& j, ListShiftSchedulesResponseBodyPagingShiftSchedules& obj) { 
      DARABONBA_PTR_FROM_JSON(ShiftScheduleIdentifier, shiftScheduleIdentifier_);
      DARABONBA_PTR_FROM_JSON(ShiftScheduleName, shiftScheduleName_);
    };
    ListShiftSchedulesResponseBodyPagingShiftSchedules() = default ;
    ListShiftSchedulesResponseBodyPagingShiftSchedules(const ListShiftSchedulesResponseBodyPagingShiftSchedules &) = default ;
    ListShiftSchedulesResponseBodyPagingShiftSchedules(ListShiftSchedulesResponseBodyPagingShiftSchedules &&) = default ;
    ListShiftSchedulesResponseBodyPagingShiftSchedules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListShiftSchedulesResponseBodyPagingShiftSchedules() = default ;
    ListShiftSchedulesResponseBodyPagingShiftSchedules& operator=(const ListShiftSchedulesResponseBodyPagingShiftSchedules &) = default ;
    ListShiftSchedulesResponseBodyPagingShiftSchedules& operator=(ListShiftSchedulesResponseBodyPagingShiftSchedules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->shiftScheduleIdentifier_ != nullptr
        && this->shiftScheduleName_ != nullptr; };
    // shiftScheduleIdentifier Field Functions 
    bool hasShiftScheduleIdentifier() const { return this->shiftScheduleIdentifier_ != nullptr;};
    void deleteShiftScheduleIdentifier() { this->shiftScheduleIdentifier_ = nullptr;};
    inline string shiftScheduleIdentifier() const { DARABONBA_PTR_GET_DEFAULT(shiftScheduleIdentifier_, "") };
    inline ListShiftSchedulesResponseBodyPagingShiftSchedules& setShiftScheduleIdentifier(string shiftScheduleIdentifier) { DARABONBA_PTR_SET_VALUE(shiftScheduleIdentifier_, shiftScheduleIdentifier) };


    // shiftScheduleName Field Functions 
    bool hasShiftScheduleName() const { return this->shiftScheduleName_ != nullptr;};
    void deleteShiftScheduleName() { this->shiftScheduleName_ = nullptr;};
    inline string shiftScheduleName() const { DARABONBA_PTR_GET_DEFAULT(shiftScheduleName_, "") };
    inline ListShiftSchedulesResponseBodyPagingShiftSchedules& setShiftScheduleName(string shiftScheduleName) { DARABONBA_PTR_SET_VALUE(shiftScheduleName_, shiftScheduleName) };


  protected:
    // The unique identifier of the shift schedule. You can use the identifier to query the on-duty engineers in the shift schedule.
    std::shared_ptr<string> shiftScheduleIdentifier_ = nullptr;
    // The name of the shift schedule.
    std::shared_ptr<string> shiftScheduleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
