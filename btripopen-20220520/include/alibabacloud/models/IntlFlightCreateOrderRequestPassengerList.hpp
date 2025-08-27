// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTCREATEORDERREQUESTPASSENGERLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTCREATEORDERREQUESTPASSENGERLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IntlFlightCreateOrderRequestPassengerListCertInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightCreateOrderRequestPassengerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightCreateOrderRequestPassengerList& obj) { 
      DARABONBA_PTR_TO_JSON(birthday, birthday_);
      DARABONBA_PTR_TO_JSON(cert_info, certInfo_);
      DARABONBA_PTR_TO_JSON(full_name, fullName_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(job_no, jobNo_);
      DARABONBA_PTR_TO_JSON(nationality, nationality_);
      DARABONBA_PTR_TO_JSON(nationality_code, nationalityCode_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_type, userType_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightCreateOrderRequestPassengerList& obj) { 
      DARABONBA_PTR_FROM_JSON(birthday, birthday_);
      DARABONBA_PTR_FROM_JSON(cert_info, certInfo_);
      DARABONBA_PTR_FROM_JSON(full_name, fullName_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
      DARABONBA_PTR_FROM_JSON(nationality, nationality_);
      DARABONBA_PTR_FROM_JSON(nationality_code, nationalityCode_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_type, userType_);
    };
    IntlFlightCreateOrderRequestPassengerList() = default ;
    IntlFlightCreateOrderRequestPassengerList(const IntlFlightCreateOrderRequestPassengerList &) = default ;
    IntlFlightCreateOrderRequestPassengerList(IntlFlightCreateOrderRequestPassengerList &&) = default ;
    IntlFlightCreateOrderRequestPassengerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightCreateOrderRequestPassengerList() = default ;
    IntlFlightCreateOrderRequestPassengerList& operator=(const IntlFlightCreateOrderRequestPassengerList &) = default ;
    IntlFlightCreateOrderRequestPassengerList& operator=(IntlFlightCreateOrderRequestPassengerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->birthday_ != nullptr
        && this->certInfo_ != nullptr && this->fullName_ != nullptr && this->gender_ != nullptr && this->jobNo_ != nullptr && this->nationality_ != nullptr
        && this->nationalityCode_ != nullptr && this->phone_ != nullptr && this->type_ != nullptr && this->userId_ != nullptr && this->userType_ != nullptr; };
    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string birthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline IntlFlightCreateOrderRequestPassengerList& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // certInfo Field Functions 
    bool hasCertInfo() const { return this->certInfo_ != nullptr;};
    void deleteCertInfo() { this->certInfo_ = nullptr;};
    inline const Models::IntlFlightCreateOrderRequestPassengerListCertInfo & certInfo() const { DARABONBA_PTR_GET_CONST(certInfo_, Models::IntlFlightCreateOrderRequestPassengerListCertInfo) };
    inline Models::IntlFlightCreateOrderRequestPassengerListCertInfo certInfo() { DARABONBA_PTR_GET(certInfo_, Models::IntlFlightCreateOrderRequestPassengerListCertInfo) };
    inline IntlFlightCreateOrderRequestPassengerList& setCertInfo(const Models::IntlFlightCreateOrderRequestPassengerListCertInfo & certInfo) { DARABONBA_PTR_SET_VALUE(certInfo_, certInfo) };
    inline IntlFlightCreateOrderRequestPassengerList& setCertInfo(Models::IntlFlightCreateOrderRequestPassengerListCertInfo && certInfo) { DARABONBA_PTR_SET_RVALUE(certInfo_, certInfo) };


    // fullName Field Functions 
    bool hasFullName() const { return this->fullName_ != nullptr;};
    void deleteFullName() { this->fullName_ = nullptr;};
    inline string fullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
    inline IntlFlightCreateOrderRequestPassengerList& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline int32_t gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
    inline IntlFlightCreateOrderRequestPassengerList& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // jobNo Field Functions 
    bool hasJobNo() const { return this->jobNo_ != nullptr;};
    void deleteJobNo() { this->jobNo_ = nullptr;};
    inline string jobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
    inline IntlFlightCreateOrderRequestPassengerList& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


    // nationality Field Functions 
    bool hasNationality() const { return this->nationality_ != nullptr;};
    void deleteNationality() { this->nationality_ = nullptr;};
    inline string nationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
    inline IntlFlightCreateOrderRequestPassengerList& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


    // nationalityCode Field Functions 
    bool hasNationalityCode() const { return this->nationalityCode_ != nullptr;};
    void deleteNationalityCode() { this->nationalityCode_ = nullptr;};
    inline string nationalityCode() const { DARABONBA_PTR_GET_DEFAULT(nationalityCode_, "") };
    inline IntlFlightCreateOrderRequestPassengerList& setNationalityCode(string nationalityCode) { DARABONBA_PTR_SET_VALUE(nationalityCode_, nationalityCode) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline IntlFlightCreateOrderRequestPassengerList& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline IntlFlightCreateOrderRequestPassengerList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IntlFlightCreateOrderRequestPassengerList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline IntlFlightCreateOrderRequestPassengerList& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> birthday_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::IntlFlightCreateOrderRequestPassengerListCertInfo> certInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fullName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> gender_ = nullptr;
    std::shared_ptr<string> jobNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nationality_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nationalityCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> phone_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> type_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<int32_t> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
