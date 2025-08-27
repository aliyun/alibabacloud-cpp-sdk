// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULEPASSENGERLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULEPASSENGERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOrderDetailResponseBodyModulePassengerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOrderDetailResponseBodyModulePassengerList& obj) { 
      DARABONBA_PTR_TO_JSON(full_name, fullName_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(job_no, jobNo_);
      DARABONBA_PTR_TO_JSON(nationality, nationality_);
      DARABONBA_PTR_TO_JSON(nationality_code, nationalityCode_);
      DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_type, userType_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOrderDetailResponseBodyModulePassengerList& obj) { 
      DARABONBA_PTR_FROM_JSON(full_name, fullName_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
      DARABONBA_PTR_FROM_JSON(nationality, nationality_);
      DARABONBA_PTR_FROM_JSON(nationality_code, nationalityCode_);
      DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_type, userType_);
    };
    IntlFlightOrderDetailResponseBodyModulePassengerList() = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerList(const IntlFlightOrderDetailResponseBodyModulePassengerList &) = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerList(IntlFlightOrderDetailResponseBodyModulePassengerList &&) = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOrderDetailResponseBodyModulePassengerList() = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerList& operator=(const IntlFlightOrderDetailResponseBodyModulePassengerList &) = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerList& operator=(IntlFlightOrderDetailResponseBodyModulePassengerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fullName_ != nullptr
        && this->gender_ != nullptr && this->jobNo_ != nullptr && this->nationality_ != nullptr && this->nationalityCode_ != nullptr && this->passengerId_ != nullptr
        && this->type_ != nullptr && this->userId_ != nullptr && this->userType_ != nullptr; };
    // fullName Field Functions 
    bool hasFullName() const { return this->fullName_ != nullptr;};
    void deleteFullName() { this->fullName_ = nullptr;};
    inline string fullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
    inline IntlFlightOrderDetailResponseBodyModulePassengerList& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline int32_t gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
    inline IntlFlightOrderDetailResponseBodyModulePassengerList& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // jobNo Field Functions 
    bool hasJobNo() const { return this->jobNo_ != nullptr;};
    void deleteJobNo() { this->jobNo_ = nullptr;};
    inline string jobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
    inline IntlFlightOrderDetailResponseBodyModulePassengerList& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


    // nationality Field Functions 
    bool hasNationality() const { return this->nationality_ != nullptr;};
    void deleteNationality() { this->nationality_ = nullptr;};
    inline string nationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
    inline IntlFlightOrderDetailResponseBodyModulePassengerList& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


    // nationalityCode Field Functions 
    bool hasNationalityCode() const { return this->nationalityCode_ != nullptr;};
    void deleteNationalityCode() { this->nationalityCode_ = nullptr;};
    inline string nationalityCode() const { DARABONBA_PTR_GET_DEFAULT(nationalityCode_, "") };
    inline IntlFlightOrderDetailResponseBodyModulePassengerList& setNationalityCode(string nationalityCode) { DARABONBA_PTR_SET_VALUE(nationalityCode_, nationalityCode) };


    // passengerId Field Functions 
    bool hasPassengerId() const { return this->passengerId_ != nullptr;};
    void deletePassengerId() { this->passengerId_ = nullptr;};
    inline int64_t passengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, 0L) };
    inline IntlFlightOrderDetailResponseBodyModulePassengerList& setPassengerId(int64_t passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline IntlFlightOrderDetailResponseBodyModulePassengerList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IntlFlightOrderDetailResponseBodyModulePassengerList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline IntlFlightOrderDetailResponseBodyModulePassengerList& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    std::shared_ptr<string> fullName_ = nullptr;
    std::shared_ptr<int32_t> gender_ = nullptr;
    std::shared_ptr<string> jobNo_ = nullptr;
    std::shared_ptr<string> nationality_ = nullptr;
    std::shared_ptr<string> nationalityCode_ = nullptr;
    std::shared_ptr<int64_t> passengerId_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<int32_t> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
