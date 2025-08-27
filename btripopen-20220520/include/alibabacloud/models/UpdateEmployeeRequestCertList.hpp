// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEMPLOYEEREQUESTCERTLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEMPLOYEEREQUESTCERTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class UpdateEmployeeRequestCertList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEmployeeRequestCertList& obj) { 
      DARABONBA_PTR_TO_JSON(birthday, birthday_);
      DARABONBA_PTR_TO_JSON(cert_expired_time, certExpiredTime_);
      DARABONBA_PTR_TO_JSON(cert_nation, certNation_);
      DARABONBA_PTR_TO_JSON(cert_no, certNo_);
      DARABONBA_PTR_TO_JSON(cert_type, certType_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(nationality, nationality_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(real_name, realName_);
      DARABONBA_PTR_TO_JSON(real_name_en, realNameEn_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEmployeeRequestCertList& obj) { 
      DARABONBA_PTR_FROM_JSON(birthday, birthday_);
      DARABONBA_PTR_FROM_JSON(cert_expired_time, certExpiredTime_);
      DARABONBA_PTR_FROM_JSON(cert_nation, certNation_);
      DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
      DARABONBA_PTR_FROM_JSON(cert_type, certType_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(nationality, nationality_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(real_name, realName_);
      DARABONBA_PTR_FROM_JSON(real_name_en, realNameEn_);
    };
    UpdateEmployeeRequestCertList() = default ;
    UpdateEmployeeRequestCertList(const UpdateEmployeeRequestCertList &) = default ;
    UpdateEmployeeRequestCertList(UpdateEmployeeRequestCertList &&) = default ;
    UpdateEmployeeRequestCertList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEmployeeRequestCertList() = default ;
    UpdateEmployeeRequestCertList& operator=(const UpdateEmployeeRequestCertList &) = default ;
    UpdateEmployeeRequestCertList& operator=(UpdateEmployeeRequestCertList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->birthday_ != nullptr
        && this->certExpiredTime_ != nullptr && this->certNation_ != nullptr && this->certNo_ != nullptr && this->certType_ != nullptr && this->gender_ != nullptr
        && this->nationality_ != nullptr && this->phone_ != nullptr && this->realName_ != nullptr && this->realNameEn_ != nullptr; };
    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string birthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline UpdateEmployeeRequestCertList& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // certExpiredTime Field Functions 
    bool hasCertExpiredTime() const { return this->certExpiredTime_ != nullptr;};
    void deleteCertExpiredTime() { this->certExpiredTime_ = nullptr;};
    inline string certExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(certExpiredTime_, "") };
    inline UpdateEmployeeRequestCertList& setCertExpiredTime(string certExpiredTime) { DARABONBA_PTR_SET_VALUE(certExpiredTime_, certExpiredTime) };


    // certNation Field Functions 
    bool hasCertNation() const { return this->certNation_ != nullptr;};
    void deleteCertNation() { this->certNation_ = nullptr;};
    inline string certNation() const { DARABONBA_PTR_GET_DEFAULT(certNation_, "") };
    inline UpdateEmployeeRequestCertList& setCertNation(string certNation) { DARABONBA_PTR_SET_VALUE(certNation_, certNation) };


    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline UpdateEmployeeRequestCertList& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline int32_t certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, 0) };
    inline UpdateEmployeeRequestCertList& setCertType(int32_t certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline UpdateEmployeeRequestCertList& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // nationality Field Functions 
    bool hasNationality() const { return this->nationality_ != nullptr;};
    void deleteNationality() { this->nationality_ = nullptr;};
    inline string nationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
    inline UpdateEmployeeRequestCertList& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline UpdateEmployeeRequestCertList& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // realName Field Functions 
    bool hasRealName() const { return this->realName_ != nullptr;};
    void deleteRealName() { this->realName_ = nullptr;};
    inline string realName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
    inline UpdateEmployeeRequestCertList& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


    // realNameEn Field Functions 
    bool hasRealNameEn() const { return this->realNameEn_ != nullptr;};
    void deleteRealNameEn() { this->realNameEn_ = nullptr;};
    inline string realNameEn() const { DARABONBA_PTR_GET_DEFAULT(realNameEn_, "") };
    inline UpdateEmployeeRequestCertList& setRealNameEn(string realNameEn) { DARABONBA_PTR_SET_VALUE(realNameEn_, realNameEn) };


  protected:
    std::shared_ptr<string> birthday_ = nullptr;
    std::shared_ptr<string> certExpiredTime_ = nullptr;
    std::shared_ptr<string> certNation_ = nullptr;
    std::shared_ptr<string> certNo_ = nullptr;
    std::shared_ptr<int32_t> certType_ = nullptr;
    std::shared_ptr<string> gender_ = nullptr;
    std::shared_ptr<string> nationality_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> realName_ = nullptr;
    std::shared_ptr<string> realNameEn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
