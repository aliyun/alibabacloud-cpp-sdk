// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHIFTPERSONNELSRESPONSEBODYPAGINGSHIFTPERSONS_HPP_
#define ALIBABACLOUD_MODELS_LISTSHIFTPERSONNELSRESPONSEBODYPAGINGSHIFTPERSONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListShiftPersonnelsResponseBodyPagingShiftPersons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListShiftPersonnelsResponseBodyPagingShiftPersons& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ShiftPersonName, shiftPersonName_);
      DARABONBA_PTR_TO_JSON(ShiftPersonUID, shiftPersonUID_);
    };
    friend void from_json(const Darabonba::Json& j, ListShiftPersonnelsResponseBodyPagingShiftPersons& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ShiftPersonName, shiftPersonName_);
      DARABONBA_PTR_FROM_JSON(ShiftPersonUID, shiftPersonUID_);
    };
    ListShiftPersonnelsResponseBodyPagingShiftPersons() = default ;
    ListShiftPersonnelsResponseBodyPagingShiftPersons(const ListShiftPersonnelsResponseBodyPagingShiftPersons &) = default ;
    ListShiftPersonnelsResponseBodyPagingShiftPersons(ListShiftPersonnelsResponseBodyPagingShiftPersons &&) = default ;
    ListShiftPersonnelsResponseBodyPagingShiftPersons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListShiftPersonnelsResponseBodyPagingShiftPersons() = default ;
    ListShiftPersonnelsResponseBodyPagingShiftPersons& operator=(const ListShiftPersonnelsResponseBodyPagingShiftPersons &) = default ;
    ListShiftPersonnelsResponseBodyPagingShiftPersons& operator=(ListShiftPersonnelsResponseBodyPagingShiftPersons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beginTime_ != nullptr
        && this->endTime_ != nullptr && this->shiftPersonName_ != nullptr && this->shiftPersonUID_ != nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline ListShiftPersonnelsResponseBodyPagingShiftPersons& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListShiftPersonnelsResponseBodyPagingShiftPersons& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // shiftPersonName Field Functions 
    bool hasShiftPersonName() const { return this->shiftPersonName_ != nullptr;};
    void deleteShiftPersonName() { this->shiftPersonName_ = nullptr;};
    inline string shiftPersonName() const { DARABONBA_PTR_GET_DEFAULT(shiftPersonName_, "") };
    inline ListShiftPersonnelsResponseBodyPagingShiftPersons& setShiftPersonName(string shiftPersonName) { DARABONBA_PTR_SET_VALUE(shiftPersonName_, shiftPersonName) };


    // shiftPersonUID Field Functions 
    bool hasShiftPersonUID() const { return this->shiftPersonUID_ != nullptr;};
    void deleteShiftPersonUID() { this->shiftPersonUID_ = nullptr;};
    inline string shiftPersonUID() const { DARABONBA_PTR_GET_DEFAULT(shiftPersonUID_, "") };
    inline ListShiftPersonnelsResponseBodyPagingShiftPersons& setShiftPersonUID(string shiftPersonUID) { DARABONBA_PTR_SET_VALUE(shiftPersonUID_, shiftPersonUID) };


  protected:
    // The time when the on-duty engineer starts the shift.
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    // The time when the on-duty engineer ends the shift.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The name of the on-duty engineer.
    std::shared_ptr<string> shiftPersonName_ = nullptr;
    // The UID of the on-duty engineer.
    std::shared_ptr<string> shiftPersonUID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
