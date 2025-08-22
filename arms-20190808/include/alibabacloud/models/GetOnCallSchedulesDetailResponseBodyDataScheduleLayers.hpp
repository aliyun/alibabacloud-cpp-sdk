// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILRESPONSEBODYDATASCHEDULELAYERS_HPP_
#define ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILRESPONSEBODYDATASCHEDULELAYERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetOnCallSchedulesDetailResponseBodyDataScheduleLayers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnCallSchedulesDetailResponseBodyDataScheduleLayers& obj) { 
      DARABONBA_PTR_TO_JSON(ContactIds, contactIds_);
      DARABONBA_PTR_TO_JSON(Restrictions, restrictions_);
      DARABONBA_PTR_TO_JSON(RotationType, rotationType_);
      DARABONBA_PTR_TO_JSON(ShiftLength, shiftLength_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnCallSchedulesDetailResponseBodyDataScheduleLayers& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactIds, contactIds_);
      DARABONBA_PTR_FROM_JSON(Restrictions, restrictions_);
      DARABONBA_PTR_FROM_JSON(RotationType, rotationType_);
      DARABONBA_PTR_FROM_JSON(ShiftLength, shiftLength_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetOnCallSchedulesDetailResponseBodyDataScheduleLayers() = default ;
    GetOnCallSchedulesDetailResponseBodyDataScheduleLayers(const GetOnCallSchedulesDetailResponseBodyDataScheduleLayers &) = default ;
    GetOnCallSchedulesDetailResponseBodyDataScheduleLayers(GetOnCallSchedulesDetailResponseBodyDataScheduleLayers &&) = default ;
    GetOnCallSchedulesDetailResponseBodyDataScheduleLayers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnCallSchedulesDetailResponseBodyDataScheduleLayers() = default ;
    GetOnCallSchedulesDetailResponseBodyDataScheduleLayers& operator=(const GetOnCallSchedulesDetailResponseBodyDataScheduleLayers &) = default ;
    GetOnCallSchedulesDetailResponseBodyDataScheduleLayers& operator=(GetOnCallSchedulesDetailResponseBodyDataScheduleLayers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactIds_ != nullptr
        && this->restrictions_ != nullptr && this->rotationType_ != nullptr && this->shiftLength_ != nullptr && this->startTime_ != nullptr; };
    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline const vector<int64_t> & contactIds() const { DARABONBA_PTR_GET_CONST(contactIds_, vector<int64_t>) };
    inline vector<int64_t> contactIds() { DARABONBA_PTR_GET(contactIds_, vector<int64_t>) };
    inline GetOnCallSchedulesDetailResponseBodyDataScheduleLayers& setContactIds(const vector<int64_t> & contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };
    inline GetOnCallSchedulesDetailResponseBodyDataScheduleLayers& setContactIds(vector<int64_t> && contactIds) { DARABONBA_PTR_SET_RVALUE(contactIds_, contactIds) };


    // restrictions Field Functions 
    bool hasRestrictions() const { return this->restrictions_ != nullptr;};
    void deleteRestrictions() { this->restrictions_ = nullptr;};
    inline const vector<Models::GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions> & restrictions() const { DARABONBA_PTR_GET_CONST(restrictions_, vector<Models::GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions>) };
    inline vector<Models::GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions> restrictions() { DARABONBA_PTR_GET(restrictions_, vector<Models::GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions>) };
    inline GetOnCallSchedulesDetailResponseBodyDataScheduleLayers& setRestrictions(const vector<Models::GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions> & restrictions) { DARABONBA_PTR_SET_VALUE(restrictions_, restrictions) };
    inline GetOnCallSchedulesDetailResponseBodyDataScheduleLayers& setRestrictions(vector<Models::GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions> && restrictions) { DARABONBA_PTR_SET_RVALUE(restrictions_, restrictions) };


    // rotationType Field Functions 
    bool hasRotationType() const { return this->rotationType_ != nullptr;};
    void deleteRotationType() { this->rotationType_ = nullptr;};
    inline string rotationType() const { DARABONBA_PTR_GET_DEFAULT(rotationType_, "") };
    inline GetOnCallSchedulesDetailResponseBodyDataScheduleLayers& setRotationType(string rotationType) { DARABONBA_PTR_SET_VALUE(rotationType_, rotationType) };


    // shiftLength Field Functions 
    bool hasShiftLength() const { return this->shiftLength_ != nullptr;};
    void deleteShiftLength() { this->shiftLength_ = nullptr;};
    inline int64_t shiftLength() const { DARABONBA_PTR_GET_DEFAULT(shiftLength_, 0L) };
    inline GetOnCallSchedulesDetailResponseBodyDataScheduleLayers& setShiftLength(int64_t shiftLength) { DARABONBA_PTR_SET_VALUE(shiftLength_, shiftLength) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetOnCallSchedulesDetailResponseBodyDataScheduleLayers& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID list of users on duty.
    std::shared_ptr<vector<int64_t>> contactIds_ = nullptr;
    // The limit on the time of the shift.
    std::shared_ptr<vector<Models::GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions>> restrictions_ = nullptr;
    // The type of the shift. Valid values:
    // 
    // *   DAY
    // *   WEEK
    // *   CUSTOM
    std::shared_ptr<string> rotationType_ = nullptr;
    // The shift cycle. Unit: hours.
    std::shared_ptr<int64_t> shiftLength_ = nullptr;
    // The date on which the shift change took effect.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
