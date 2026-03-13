// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTERNALUSERADDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXTERNALUSERADDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ExternalUserAddRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExternalUserAddRequest& obj) { 
      DARABONBA_PTR_TO_JSON(birthday, birthday_);
      DARABONBA_PTR_TO_JSON(cert_request_list, certRequestList_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(external_user_id, externalUserId_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(real_name, realName_);
      DARABONBA_PTR_TO_JSON(real_name_en, realNameEn_);
      DARABONBA_PTR_TO_JSON(user_type, userType_);
    };
    friend void from_json(const Darabonba::Json& j, ExternalUserAddRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(birthday, birthday_);
      DARABONBA_PTR_FROM_JSON(cert_request_list, certRequestList_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(external_user_id, externalUserId_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(real_name, realName_);
      DARABONBA_PTR_FROM_JSON(real_name_en, realNameEn_);
      DARABONBA_PTR_FROM_JSON(user_type, userType_);
    };
    ExternalUserAddRequest() = default ;
    ExternalUserAddRequest(const ExternalUserAddRequest &) = default ;
    ExternalUserAddRequest(ExternalUserAddRequest &&) = default ;
    ExternalUserAddRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExternalUserAddRequest() = default ;
    ExternalUserAddRequest& operator=(const ExternalUserAddRequest &) = default ;
    ExternalUserAddRequest& operator=(ExternalUserAddRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CertRequestList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertRequestList& obj) { 
        DARABONBA_PTR_TO_JSON(cert_expired_time, certExpiredTime_);
        DARABONBA_PTR_TO_JSON(cert_nation, certNation_);
        DARABONBA_PTR_TO_JSON(cert_no, certNo_);
        DARABONBA_PTR_TO_JSON(cert_type, certType_);
        DARABONBA_PTR_TO_JSON(nationality, nationality_);
      };
      friend void from_json(const Darabonba::Json& j, CertRequestList& obj) { 
        DARABONBA_PTR_FROM_JSON(cert_expired_time, certExpiredTime_);
        DARABONBA_PTR_FROM_JSON(cert_nation, certNation_);
        DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
        DARABONBA_PTR_FROM_JSON(cert_type, certType_);
        DARABONBA_PTR_FROM_JSON(nationality, nationality_);
      };
      CertRequestList() = default ;
      CertRequestList(const CertRequestList &) = default ;
      CertRequestList(CertRequestList &&) = default ;
      CertRequestList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertRequestList() = default ;
      CertRequestList& operator=(const CertRequestList &) = default ;
      CertRequestList& operator=(CertRequestList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certExpiredTime_ == nullptr
        && this->certNation_ == nullptr && this->certNo_ == nullptr && this->certType_ == nullptr && this->nationality_ == nullptr; };
      // certExpiredTime Field Functions 
      bool hasCertExpiredTime() const { return this->certExpiredTime_ != nullptr;};
      void deleteCertExpiredTime() { this->certExpiredTime_ = nullptr;};
      inline string getCertExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(certExpiredTime_, "") };
      inline CertRequestList& setCertExpiredTime(string certExpiredTime) { DARABONBA_PTR_SET_VALUE(certExpiredTime_, certExpiredTime) };


      // certNation Field Functions 
      bool hasCertNation() const { return this->certNation_ != nullptr;};
      void deleteCertNation() { this->certNation_ = nullptr;};
      inline string getCertNation() const { DARABONBA_PTR_GET_DEFAULT(certNation_, "") };
      inline CertRequestList& setCertNation(string certNation) { DARABONBA_PTR_SET_VALUE(certNation_, certNation) };


      // certNo Field Functions 
      bool hasCertNo() const { return this->certNo_ != nullptr;};
      void deleteCertNo() { this->certNo_ = nullptr;};
      inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
      inline CertRequestList& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


      // certType Field Functions 
      bool hasCertType() const { return this->certType_ != nullptr;};
      void deleteCertType() { this->certType_ = nullptr;};
      inline int32_t getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, 0) };
      inline CertRequestList& setCertType(int32_t certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


      // nationality Field Functions 
      bool hasNationality() const { return this->nationality_ != nullptr;};
      void deleteNationality() { this->nationality_ = nullptr;};
      inline string getNationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
      inline CertRequestList& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


    protected:
      shared_ptr<string> certExpiredTime_ {};
      shared_ptr<string> certNation_ {};
      // This parameter is required.
      shared_ptr<string> certNo_ {};
      // This parameter is required.
      shared_ptr<int32_t> certType_ {};
      shared_ptr<string> nationality_ {};
    };

    virtual bool empty() const override { return this->birthday_ == nullptr
        && this->certRequestList_ == nullptr && this->email_ == nullptr && this->externalUserId_ == nullptr && this->phone_ == nullptr && this->realName_ == nullptr
        && this->realNameEn_ == nullptr && this->userType_ == nullptr; };
    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline ExternalUserAddRequest& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // certRequestList Field Functions 
    bool hasCertRequestList() const { return this->certRequestList_ != nullptr;};
    void deleteCertRequestList() { this->certRequestList_ = nullptr;};
    inline const vector<ExternalUserAddRequest::CertRequestList> & getCertRequestList() const { DARABONBA_PTR_GET_CONST(certRequestList_, vector<ExternalUserAddRequest::CertRequestList>) };
    inline vector<ExternalUserAddRequest::CertRequestList> getCertRequestList() { DARABONBA_PTR_GET(certRequestList_, vector<ExternalUserAddRequest::CertRequestList>) };
    inline ExternalUserAddRequest& setCertRequestList(const vector<ExternalUserAddRequest::CertRequestList> & certRequestList) { DARABONBA_PTR_SET_VALUE(certRequestList_, certRequestList) };
    inline ExternalUserAddRequest& setCertRequestList(vector<ExternalUserAddRequest::CertRequestList> && certRequestList) { DARABONBA_PTR_SET_RVALUE(certRequestList_, certRequestList) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ExternalUserAddRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // externalUserId Field Functions 
    bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
    void deleteExternalUserId() { this->externalUserId_ = nullptr;};
    inline string getExternalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
    inline ExternalUserAddRequest& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline ExternalUserAddRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // realName Field Functions 
    bool hasRealName() const { return this->realName_ != nullptr;};
    void deleteRealName() { this->realName_ = nullptr;};
    inline string getRealName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
    inline ExternalUserAddRequest& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


    // realNameEn Field Functions 
    bool hasRealNameEn() const { return this->realNameEn_ != nullptr;};
    void deleteRealNameEn() { this->realNameEn_ = nullptr;};
    inline string getRealNameEn() const { DARABONBA_PTR_GET_DEFAULT(realNameEn_, "") };
    inline ExternalUserAddRequest& setRealNameEn(string realNameEn) { DARABONBA_PTR_SET_VALUE(realNameEn_, realNameEn) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline ExternalUserAddRequest& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    shared_ptr<string> birthday_ {};
    shared_ptr<vector<ExternalUserAddRequest::CertRequestList>> certRequestList_ {};
    shared_ptr<string> email_ {};
    // This parameter is required.
    shared_ptr<string> externalUserId_ {};
    shared_ptr<string> phone_ {};
    shared_ptr<string> realName_ {};
    shared_ptr<string> realNameEn_ {};
    // This parameter is required.
    shared_ptr<int32_t> userType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
