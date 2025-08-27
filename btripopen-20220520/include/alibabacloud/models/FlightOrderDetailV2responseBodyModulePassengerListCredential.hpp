// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODYMODULEPASSENGERLISTCREDENTIAL_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODYMODULEPASSENGERLISTCREDENTIAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderDetailV2ResponseBodyModulePassengerListCredential : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderDetailV2ResponseBodyModulePassengerListCredential& obj) { 
      DARABONBA_PTR_TO_JSON(birth_date, birthDate_);
      DARABONBA_PTR_TO_JSON(cert_issue_date, certIssueDate_);
      DARABONBA_PTR_TO_JSON(cert_issue_place, certIssuePlace_);
      DARABONBA_PTR_TO_JSON(credential_no, credentialNo_);
      DARABONBA_PTR_TO_JSON(drive_licence_first, driveLicenceFirst_);
      DARABONBA_PTR_TO_JSON(drive_licence_type, driveLicenceType_);
      DARABONBA_PTR_TO_JSON(expire_date, expireDate_);
      DARABONBA_PTR_TO_JSON(holder_nationality, holderNationality_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(id_check_code, idCheckCode_);
      DARABONBA_PTR_TO_JSON(issue_country, issueCountry_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderDetailV2ResponseBodyModulePassengerListCredential& obj) { 
      DARABONBA_PTR_FROM_JSON(birth_date, birthDate_);
      DARABONBA_PTR_FROM_JSON(cert_issue_date, certIssueDate_);
      DARABONBA_PTR_FROM_JSON(cert_issue_place, certIssuePlace_);
      DARABONBA_PTR_FROM_JSON(credential_no, credentialNo_);
      DARABONBA_PTR_FROM_JSON(drive_licence_first, driveLicenceFirst_);
      DARABONBA_PTR_FROM_JSON(drive_licence_type, driveLicenceType_);
      DARABONBA_PTR_FROM_JSON(expire_date, expireDate_);
      DARABONBA_PTR_FROM_JSON(holder_nationality, holderNationality_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(id_check_code, idCheckCode_);
      DARABONBA_PTR_FROM_JSON(issue_country, issueCountry_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    FlightOrderDetailV2ResponseBodyModulePassengerListCredential() = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerListCredential(const FlightOrderDetailV2ResponseBodyModulePassengerListCredential &) = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerListCredential(FlightOrderDetailV2ResponseBodyModulePassengerListCredential &&) = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerListCredential(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderDetailV2ResponseBodyModulePassengerListCredential() = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerListCredential& operator=(const FlightOrderDetailV2ResponseBodyModulePassengerListCredential &) = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerListCredential& operator=(FlightOrderDetailV2ResponseBodyModulePassengerListCredential &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->birthDate_ != nullptr
        && this->certIssueDate_ != nullptr && this->certIssuePlace_ != nullptr && this->credentialNo_ != nullptr && this->driveLicenceFirst_ != nullptr && this->driveLicenceType_ != nullptr
        && this->expireDate_ != nullptr && this->holderNationality_ != nullptr && this->id_ != nullptr && this->idCheckCode_ != nullptr && this->issueCountry_ != nullptr
        && this->type_ != nullptr; };
    // birthDate Field Functions 
    bool hasBirthDate() const { return this->birthDate_ != nullptr;};
    void deleteBirthDate() { this->birthDate_ = nullptr;};
    inline string birthDate() const { DARABONBA_PTR_GET_DEFAULT(birthDate_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListCredential& setBirthDate(string birthDate) { DARABONBA_PTR_SET_VALUE(birthDate_, birthDate) };


    // certIssueDate Field Functions 
    bool hasCertIssueDate() const { return this->certIssueDate_ != nullptr;};
    void deleteCertIssueDate() { this->certIssueDate_ = nullptr;};
    inline string certIssueDate() const { DARABONBA_PTR_GET_DEFAULT(certIssueDate_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListCredential& setCertIssueDate(string certIssueDate) { DARABONBA_PTR_SET_VALUE(certIssueDate_, certIssueDate) };


    // certIssuePlace Field Functions 
    bool hasCertIssuePlace() const { return this->certIssuePlace_ != nullptr;};
    void deleteCertIssuePlace() { this->certIssuePlace_ = nullptr;};
    inline string certIssuePlace() const { DARABONBA_PTR_GET_DEFAULT(certIssuePlace_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListCredential& setCertIssuePlace(string certIssuePlace) { DARABONBA_PTR_SET_VALUE(certIssuePlace_, certIssuePlace) };


    // credentialNo Field Functions 
    bool hasCredentialNo() const { return this->credentialNo_ != nullptr;};
    void deleteCredentialNo() { this->credentialNo_ = nullptr;};
    inline string credentialNo() const { DARABONBA_PTR_GET_DEFAULT(credentialNo_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListCredential& setCredentialNo(string credentialNo) { DARABONBA_PTR_SET_VALUE(credentialNo_, credentialNo) };


    // driveLicenceFirst Field Functions 
    bool hasDriveLicenceFirst() const { return this->driveLicenceFirst_ != nullptr;};
    void deleteDriveLicenceFirst() { this->driveLicenceFirst_ = nullptr;};
    inline string driveLicenceFirst() const { DARABONBA_PTR_GET_DEFAULT(driveLicenceFirst_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListCredential& setDriveLicenceFirst(string driveLicenceFirst) { DARABONBA_PTR_SET_VALUE(driveLicenceFirst_, driveLicenceFirst) };


    // driveLicenceType Field Functions 
    bool hasDriveLicenceType() const { return this->driveLicenceType_ != nullptr;};
    void deleteDriveLicenceType() { this->driveLicenceType_ = nullptr;};
    inline string driveLicenceType() const { DARABONBA_PTR_GET_DEFAULT(driveLicenceType_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListCredential& setDriveLicenceType(string driveLicenceType) { DARABONBA_PTR_SET_VALUE(driveLicenceType_, driveLicenceType) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListCredential& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // holderNationality Field Functions 
    bool hasHolderNationality() const { return this->holderNationality_ != nullptr;};
    void deleteHolderNationality() { this->holderNationality_ = nullptr;};
    inline string holderNationality() const { DARABONBA_PTR_GET_DEFAULT(holderNationality_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListCredential& setHolderNationality(string holderNationality) { DARABONBA_PTR_SET_VALUE(holderNationality_, holderNationality) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListCredential& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idCheckCode Field Functions 
    bool hasIdCheckCode() const { return this->idCheckCode_ != nullptr;};
    void deleteIdCheckCode() { this->idCheckCode_ = nullptr;};
    inline string idCheckCode() const { DARABONBA_PTR_GET_DEFAULT(idCheckCode_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListCredential& setIdCheckCode(string idCheckCode) { DARABONBA_PTR_SET_VALUE(idCheckCode_, idCheckCode) };


    // issueCountry Field Functions 
    bool hasIssueCountry() const { return this->issueCountry_ != nullptr;};
    void deleteIssueCountry() { this->issueCountry_ = nullptr;};
    inline string issueCountry() const { DARABONBA_PTR_GET_DEFAULT(issueCountry_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListCredential& setIssueCountry(string issueCountry) { DARABONBA_PTR_SET_VALUE(issueCountry_, issueCountry) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListCredential& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> birthDate_ = nullptr;
    std::shared_ptr<string> certIssueDate_ = nullptr;
    std::shared_ptr<string> certIssuePlace_ = nullptr;
    std::shared_ptr<string> credentialNo_ = nullptr;
    std::shared_ptr<string> driveLicenceFirst_ = nullptr;
    std::shared_ptr<string> driveLicenceType_ = nullptr;
    std::shared_ptr<string> expireDate_ = nullptr;
    std::shared_ptr<string> holderNationality_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> idCheckCode_ = nullptr;
    std::shared_ptr<string> issueCountry_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
