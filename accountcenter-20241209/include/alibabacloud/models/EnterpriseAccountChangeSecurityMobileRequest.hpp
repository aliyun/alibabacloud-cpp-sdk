// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTCHANGESECURITYMOBILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTCHANGESECURITYMOBILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseAccountChangeSecurityMobileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseAccountChangeSecurityMobileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_TO_JSON(NewMobile, newMobile_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VerificationCode, verificationCode_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseAccountChangeSecurityMobileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_FROM_JSON(NewMobile, newMobile_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VerificationCode, verificationCode_);
    };
    EnterpriseAccountChangeSecurityMobileRequest() = default ;
    EnterpriseAccountChangeSecurityMobileRequest(const EnterpriseAccountChangeSecurityMobileRequest &) = default ;
    EnterpriseAccountChangeSecurityMobileRequest(EnterpriseAccountChangeSecurityMobileRequest &&) = default ;
    EnterpriseAccountChangeSecurityMobileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseAccountChangeSecurityMobileRequest() = default ;
    EnterpriseAccountChangeSecurityMobileRequest& operator=(const EnterpriseAccountChangeSecurityMobileRequest &) = default ;
    EnterpriseAccountChangeSecurityMobileRequest& operator=(EnterpriseAccountChangeSecurityMobileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->encryptTicket_ == nullptr && this->newMobile_ == nullptr && this->orientedEcId_ == nullptr && this->orientedLeId_ == nullptr && this->orientedNbId_ == nullptr
        && this->pk_ == nullptr && this->requestId_ == nullptr && this->verificationCode_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline EnterpriseAccountChangeSecurityMobileRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // encryptTicket Field Functions 
    bool hasEncryptTicket() const { return this->encryptTicket_ != nullptr;};
    void deleteEncryptTicket() { this->encryptTicket_ = nullptr;};
    inline string getEncryptTicket() const { DARABONBA_PTR_GET_DEFAULT(encryptTicket_, "") };
    inline EnterpriseAccountChangeSecurityMobileRequest& setEncryptTicket(string encryptTicket) { DARABONBA_PTR_SET_VALUE(encryptTicket_, encryptTicket) };


    // newMobile Field Functions 
    bool hasNewMobile() const { return this->newMobile_ != nullptr;};
    void deleteNewMobile() { this->newMobile_ = nullptr;};
    inline string getNewMobile() const { DARABONBA_PTR_GET_DEFAULT(newMobile_, "") };
    inline EnterpriseAccountChangeSecurityMobileRequest& setNewMobile(string newMobile) { DARABONBA_PTR_SET_VALUE(newMobile_, newMobile) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline EnterpriseAccountChangeSecurityMobileRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline EnterpriseAccountChangeSecurityMobileRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline EnterpriseAccountChangeSecurityMobileRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline EnterpriseAccountChangeSecurityMobileRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseAccountChangeSecurityMobileRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // verificationCode Field Functions 
    bool hasVerificationCode() const { return this->verificationCode_ != nullptr;};
    void deleteVerificationCode() { this->verificationCode_ = nullptr;};
    inline string getVerificationCode() const { DARABONBA_PTR_GET_DEFAULT(verificationCode_, "") };
    inline EnterpriseAccountChangeSecurityMobileRequest& setVerificationCode(string verificationCode) { DARABONBA_PTR_SET_VALUE(verificationCode_, verificationCode) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<string> encryptTicket_ {};
    // This parameter is required.
    shared_ptr<string> newMobile_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<string> verificationCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
