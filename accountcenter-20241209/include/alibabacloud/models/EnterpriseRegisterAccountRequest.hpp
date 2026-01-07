// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEREGISTERACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEREGISTERACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseRegisterAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseRegisterAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(EncryptPassword, encryptPassword_);
      DARABONBA_PTR_TO_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_TO_JSON(LoginEmail, loginEmail_);
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowCompleteInfo, showCompleteInfo_);
      DARABONBA_PTR_TO_JSON(SiteNick, siteNick_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseRegisterAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(EncryptPassword, encryptPassword_);
      DARABONBA_PTR_FROM_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_FROM_JSON(LoginEmail, loginEmail_);
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowCompleteInfo, showCompleteInfo_);
      DARABONBA_PTR_FROM_JSON(SiteNick, siteNick_);
    };
    EnterpriseRegisterAccountRequest() = default ;
    EnterpriseRegisterAccountRequest(const EnterpriseRegisterAccountRequest &) = default ;
    EnterpriseRegisterAccountRequest(EnterpriseRegisterAccountRequest &&) = default ;
    EnterpriseRegisterAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseRegisterAccountRequest() = default ;
    EnterpriseRegisterAccountRequest& operator=(const EnterpriseRegisterAccountRequest &) = default ;
    EnterpriseRegisterAccountRequest& operator=(EnterpriseRegisterAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->encryptPassword_ == nullptr && this->encryptTicket_ == nullptr && this->loginEmail_ == nullptr && this->organizationId_ == nullptr && this->orientedEcId_ == nullptr
        && this->orientedLeId_ == nullptr && this->orientedNbId_ == nullptr && this->requestId_ == nullptr && this->showCompleteInfo_ == nullptr && this->siteNick_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline EnterpriseRegisterAccountRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // encryptPassword Field Functions 
    bool hasEncryptPassword() const { return this->encryptPassword_ != nullptr;};
    void deleteEncryptPassword() { this->encryptPassword_ = nullptr;};
    inline string getEncryptPassword() const { DARABONBA_PTR_GET_DEFAULT(encryptPassword_, "") };
    inline EnterpriseRegisterAccountRequest& setEncryptPassword(string encryptPassword) { DARABONBA_PTR_SET_VALUE(encryptPassword_, encryptPassword) };


    // encryptTicket Field Functions 
    bool hasEncryptTicket() const { return this->encryptTicket_ != nullptr;};
    void deleteEncryptTicket() { this->encryptTicket_ = nullptr;};
    inline string getEncryptTicket() const { DARABONBA_PTR_GET_DEFAULT(encryptTicket_, "") };
    inline EnterpriseRegisterAccountRequest& setEncryptTicket(string encryptTicket) { DARABONBA_PTR_SET_VALUE(encryptTicket_, encryptTicket) };


    // loginEmail Field Functions 
    bool hasLoginEmail() const { return this->loginEmail_ != nullptr;};
    void deleteLoginEmail() { this->loginEmail_ = nullptr;};
    inline string getLoginEmail() const { DARABONBA_PTR_GET_DEFAULT(loginEmail_, "") };
    inline EnterpriseRegisterAccountRequest& setLoginEmail(string loginEmail) { DARABONBA_PTR_SET_VALUE(loginEmail_, loginEmail) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline EnterpriseRegisterAccountRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline EnterpriseRegisterAccountRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline EnterpriseRegisterAccountRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline EnterpriseRegisterAccountRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseRegisterAccountRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showCompleteInfo Field Functions 
    bool hasShowCompleteInfo() const { return this->showCompleteInfo_ != nullptr;};
    void deleteShowCompleteInfo() { this->showCompleteInfo_ = nullptr;};
    inline bool getShowCompleteInfo() const { DARABONBA_PTR_GET_DEFAULT(showCompleteInfo_, false) };
    inline EnterpriseRegisterAccountRequest& setShowCompleteInfo(bool showCompleteInfo) { DARABONBA_PTR_SET_VALUE(showCompleteInfo_, showCompleteInfo) };


    // siteNick Field Functions 
    bool hasSiteNick() const { return this->siteNick_ != nullptr;};
    void deleteSiteNick() { this->siteNick_ = nullptr;};
    inline string getSiteNick() const { DARABONBA_PTR_GET_DEFAULT(siteNick_, "") };
    inline EnterpriseRegisterAccountRequest& setSiteNick(string siteNick) { DARABONBA_PTR_SET_VALUE(siteNick_, siteNick) };


  protected:
    shared_ptr<string> alias_ {};
    shared_ptr<string> encryptPassword_ {};
    shared_ptr<string> encryptTicket_ {};
    shared_ptr<string> loginEmail_ {};
    shared_ptr<string> organizationId_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> showCompleteInfo_ {};
    shared_ptr<string> siteNick_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
