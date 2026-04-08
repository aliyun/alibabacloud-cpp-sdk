// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHIFTPERSONNELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSHIFTPERSONNELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListShiftPersonnelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListShiftPersonnelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ShiftPersonUID, shiftPersonUID_);
      DARABONBA_PTR_TO_JSON(ShiftScheduleIdentifier, shiftScheduleIdentifier_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, ListShiftPersonnelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ShiftPersonUID, shiftPersonUID_);
      DARABONBA_PTR_FROM_JSON(ShiftScheduleIdentifier, shiftScheduleIdentifier_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    ListShiftPersonnelsRequest() = default ;
    ListShiftPersonnelsRequest(const ListShiftPersonnelsRequest &) = default ;
    ListShiftPersonnelsRequest(ListShiftPersonnelsRequest &&) = default ;
    ListShiftPersonnelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListShiftPersonnelsRequest() = default ;
    ListShiftPersonnelsRequest& operator=(const ListShiftPersonnelsRequest &) = default ;
    ListShiftPersonnelsRequest& operator=(ListShiftPersonnelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->shiftPersonUID_ == nullptr && this->shiftScheduleIdentifier_ == nullptr && this->userType_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline ListShiftPersonnelsRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListShiftPersonnelsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // shiftPersonUID Field Functions 
    bool hasShiftPersonUID() const { return this->shiftPersonUID_ != nullptr;};
    void deleteShiftPersonUID() { this->shiftPersonUID_ = nullptr;};
    inline string getShiftPersonUID() const { DARABONBA_PTR_GET_DEFAULT(shiftPersonUID_, "") };
    inline ListShiftPersonnelsRequest& setShiftPersonUID(string shiftPersonUID) { DARABONBA_PTR_SET_VALUE(shiftPersonUID_, shiftPersonUID) };


    // shiftScheduleIdentifier Field Functions 
    bool hasShiftScheduleIdentifier() const { return this->shiftScheduleIdentifier_ != nullptr;};
    void deleteShiftScheduleIdentifier() { this->shiftScheduleIdentifier_ = nullptr;};
    inline string getShiftScheduleIdentifier() const { DARABONBA_PTR_GET_DEFAULT(shiftScheduleIdentifier_, "") };
    inline ListShiftPersonnelsRequest& setShiftScheduleIdentifier(string shiftScheduleIdentifier) { DARABONBA_PTR_SET_VALUE(shiftScheduleIdentifier_, shiftScheduleIdentifier) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline ListShiftPersonnelsRequest& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // The time when the on-duty engineer starts a shift. Set the value to a UNIX timestamp.
    // 
    // This parameter is required.
    shared_ptr<int64_t> beginTime_ {};
    // The time when the on-duty engineer ends a shift. Set the value to a UNIX timestamp.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the Alibaba Cloud account. You can log on to the DataWorks console and move the pointer over the profile picture in the upper-right corner to view the ID.
    shared_ptr<string> shiftPersonUID_ {};
    // The unique identifier of the shift schedule.
    // 
    // This parameter is required.
    shared_ptr<string> shiftScheduleIdentifier_ {};
    // The type of the on-duty engineer that you want to query. Valid values: ALL, PRIMARY, BACKUP, and DESIGNATED_USER.
    shared_ptr<string> userType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
