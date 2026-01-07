// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTCHANGESECURITYEMAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTCHANGESECURITYEMAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseAccountChangeSecurityEmailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseAccountChangeSecurityEmailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEmail, securityEmail_);
      DARABONBA_PTR_TO_JSON(VerifyCode, verifyCode_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseAccountChangeSecurityEmailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEmail, securityEmail_);
      DARABONBA_PTR_FROM_JSON(VerifyCode, verifyCode_);
    };
    EnterpriseAccountChangeSecurityEmailRequest() = default ;
    EnterpriseAccountChangeSecurityEmailRequest(const EnterpriseAccountChangeSecurityEmailRequest &) = default ;
    EnterpriseAccountChangeSecurityEmailRequest(EnterpriseAccountChangeSecurityEmailRequest &&) = default ;
    EnterpriseAccountChangeSecurityEmailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseAccountChangeSecurityEmailRequest() = default ;
    EnterpriseAccountChangeSecurityEmailRequest& operator=(const EnterpriseAccountChangeSecurityEmailRequest &) = default ;
    EnterpriseAccountChangeSecurityEmailRequest& operator=(EnterpriseAccountChangeSecurityEmailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->orientedEcId_ == nullptr && this->orientedLeId_ == nullptr && this->orientedNbId_ == nullptr && this->pk_ == nullptr && this->requestId_ == nullptr
        && this->securityEmail_ == nullptr && this->verifyCode_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline EnterpriseAccountChangeSecurityEmailRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline EnterpriseAccountChangeSecurityEmailRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline EnterpriseAccountChangeSecurityEmailRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline EnterpriseAccountChangeSecurityEmailRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline EnterpriseAccountChangeSecurityEmailRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseAccountChangeSecurityEmailRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEmail Field Functions 
    bool hasSecurityEmail() const { return this->securityEmail_ != nullptr;};
    void deleteSecurityEmail() { this->securityEmail_ = nullptr;};
    inline string getSecurityEmail() const { DARABONBA_PTR_GET_DEFAULT(securityEmail_, "") };
    inline EnterpriseAccountChangeSecurityEmailRequest& setSecurityEmail(string securityEmail) { DARABONBA_PTR_SET_VALUE(securityEmail_, securityEmail) };


    // verifyCode Field Functions 
    bool hasVerifyCode() const { return this->verifyCode_ != nullptr;};
    void deleteVerifyCode() { this->verifyCode_ = nullptr;};
    inline string getVerifyCode() const { DARABONBA_PTR_GET_DEFAULT(verifyCode_, "") };
    inline EnterpriseAccountChangeSecurityEmailRequest& setVerifyCode(string verifyCode) { DARABONBA_PTR_SET_VALUE(verifyCode_, verifyCode) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<string> securityEmail_ {};
    // This parameter is required.
    shared_ptr<string> verifyCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
