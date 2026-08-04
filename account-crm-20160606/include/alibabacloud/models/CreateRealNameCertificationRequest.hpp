// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREALNAMECERTIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREALNAMECERTIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class CreateRealNameCertificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRealNameCertificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountCertifyType, accountCertifyType_);
      DARABONBA_PTR_TO_JSON(CorporateLicenseNumber, corporateLicenseNumber_);
      DARABONBA_PTR_TO_JSON(CorporateName, corporateName_);
      DARABONBA_PTR_TO_JSON(LicenseNumber, licenseNumber_);
      DARABONBA_PTR_TO_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRealNameCertificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountCertifyType, accountCertifyType_);
      DARABONBA_PTR_FROM_JSON(CorporateLicenseNumber, corporateLicenseNumber_);
      DARABONBA_PTR_FROM_JSON(CorporateName, corporateName_);
      DARABONBA_PTR_FROM_JSON(LicenseNumber, licenseNumber_);
      DARABONBA_PTR_FROM_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
    };
    CreateRealNameCertificationRequest() = default ;
    CreateRealNameCertificationRequest(const CreateRealNameCertificationRequest &) = default ;
    CreateRealNameCertificationRequest(CreateRealNameCertificationRequest &&) = default ;
    CreateRealNameCertificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRealNameCertificationRequest() = default ;
    CreateRealNameCertificationRequest& operator=(const CreateRealNameCertificationRequest &) = default ;
    CreateRealNameCertificationRequest& operator=(CreateRealNameCertificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountCertifyType_ == nullptr
        && this->corporateLicenseNumber_ == nullptr && this->corporateName_ == nullptr && this->licenseNumber_ == nullptr && this->licenseType_ == nullptr && this->name_ == nullptr
        && this->pk_ == nullptr; };
    // accountCertifyType Field Functions 
    bool hasAccountCertifyType() const { return this->accountCertifyType_ != nullptr;};
    void deleteAccountCertifyType() { this->accountCertifyType_ = nullptr;};
    inline string getAccountCertifyType() const { DARABONBA_PTR_GET_DEFAULT(accountCertifyType_, "") };
    inline CreateRealNameCertificationRequest& setAccountCertifyType(string accountCertifyType) { DARABONBA_PTR_SET_VALUE(accountCertifyType_, accountCertifyType) };


    // corporateLicenseNumber Field Functions 
    bool hasCorporateLicenseNumber() const { return this->corporateLicenseNumber_ != nullptr;};
    void deleteCorporateLicenseNumber() { this->corporateLicenseNumber_ = nullptr;};
    inline string getCorporateLicenseNumber() const { DARABONBA_PTR_GET_DEFAULT(corporateLicenseNumber_, "") };
    inline CreateRealNameCertificationRequest& setCorporateLicenseNumber(string corporateLicenseNumber) { DARABONBA_PTR_SET_VALUE(corporateLicenseNumber_, corporateLicenseNumber) };


    // corporateName Field Functions 
    bool hasCorporateName() const { return this->corporateName_ != nullptr;};
    void deleteCorporateName() { this->corporateName_ = nullptr;};
    inline string getCorporateName() const { DARABONBA_PTR_GET_DEFAULT(corporateName_, "") };
    inline CreateRealNameCertificationRequest& setCorporateName(string corporateName) { DARABONBA_PTR_SET_VALUE(corporateName_, corporateName) };


    // licenseNumber Field Functions 
    bool hasLicenseNumber() const { return this->licenseNumber_ != nullptr;};
    void deleteLicenseNumber() { this->licenseNumber_ = nullptr;};
    inline string getLicenseNumber() const { DARABONBA_PTR_GET_DEFAULT(licenseNumber_, "") };
    inline CreateRealNameCertificationRequest& setLicenseNumber(string licenseNumber) { DARABONBA_PTR_SET_VALUE(licenseNumber_, licenseNumber) };


    // licenseType Field Functions 
    bool hasLicenseType() const { return this->licenseType_ != nullptr;};
    void deleteLicenseType() { this->licenseType_ = nullptr;};
    inline string getLicenseType() const { DARABONBA_PTR_GET_DEFAULT(licenseType_, "") };
    inline CreateRealNameCertificationRequest& setLicenseType(string licenseType) { DARABONBA_PTR_SET_VALUE(licenseType_, licenseType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRealNameCertificationRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline CreateRealNameCertificationRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


  protected:
    shared_ptr<string> accountCertifyType_ {};
    shared_ptr<string> corporateLicenseNumber_ {};
    shared_ptr<string> corporateName_ {};
    shared_ptr<string> licenseNumber_ {};
    shared_ptr<string> licenseType_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> pk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
