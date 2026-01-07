// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTUPDATEACCOUNTALIASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTUPDATEACCOUNTALIASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseAccountUpdateAccountAliasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseAccountUpdateAccountAliasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseAccountUpdateAccountAliasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EnterpriseAccountUpdateAccountAliasRequest() = default ;
    EnterpriseAccountUpdateAccountAliasRequest(const EnterpriseAccountUpdateAccountAliasRequest &) = default ;
    EnterpriseAccountUpdateAccountAliasRequest(EnterpriseAccountUpdateAccountAliasRequest &&) = default ;
    EnterpriseAccountUpdateAccountAliasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseAccountUpdateAccountAliasRequest() = default ;
    EnterpriseAccountUpdateAccountAliasRequest& operator=(const EnterpriseAccountUpdateAccountAliasRequest &) = default ;
    EnterpriseAccountUpdateAccountAliasRequest& operator=(EnterpriseAccountUpdateAccountAliasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->appName_ == nullptr && this->encryptTicket_ == nullptr && this->orientedEcId_ == nullptr && this->orientedLeId_ == nullptr && this->orientedNbId_ == nullptr
        && this->pk_ == nullptr && this->requestId_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline EnterpriseAccountUpdateAccountAliasRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline EnterpriseAccountUpdateAccountAliasRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // encryptTicket Field Functions 
    bool hasEncryptTicket() const { return this->encryptTicket_ != nullptr;};
    void deleteEncryptTicket() { this->encryptTicket_ = nullptr;};
    inline string getEncryptTicket() const { DARABONBA_PTR_GET_DEFAULT(encryptTicket_, "") };
    inline EnterpriseAccountUpdateAccountAliasRequest& setEncryptTicket(string encryptTicket) { DARABONBA_PTR_SET_VALUE(encryptTicket_, encryptTicket) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline EnterpriseAccountUpdateAccountAliasRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline EnterpriseAccountUpdateAccountAliasRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline EnterpriseAccountUpdateAccountAliasRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline EnterpriseAccountUpdateAccountAliasRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseAccountUpdateAccountAliasRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> alias_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> encryptTicket_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
    shared_ptr<string> pk_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
