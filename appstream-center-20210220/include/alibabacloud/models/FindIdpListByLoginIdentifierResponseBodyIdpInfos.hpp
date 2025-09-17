// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDIDPLISTBYLOGINIDENTIFIERRESPONSEBODYIDPINFOS_HPP_
#define ALIBABACLOUD_MODELS_FINDIDPLISTBYLOGINIDENTIFIERRESPONSEBODYIDPINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210220
{
namespace Models
{
  class FindIdpListByLoginIdentifierResponseBodyIdpInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindIdpListByLoginIdentifierResponseBodyIdpInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(Cookies, cookies_);
      DARABONBA_PTR_TO_JSON(IdpId, idpId_);
      DARABONBA_PTR_TO_JSON(IdpName, idpName_);
      DARABONBA_PTR_TO_JSON(IdpNameEN, idpNameEN_);
      DARABONBA_PTR_TO_JSON(IdpProvider, idpProvider_);
      DARABONBA_PTR_TO_JSON(JumpSwitch, jumpSwitch_);
      DARABONBA_PTR_TO_JSON(SsoProtocol, ssoProtocol_);
      DARABONBA_PTR_TO_JSON(SsoServiceUrl, ssoServiceUrl_);
    };
    friend void from_json(const Darabonba::Json& j, FindIdpListByLoginIdentifierResponseBodyIdpInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(Cookies, cookies_);
      DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
      DARABONBA_PTR_FROM_JSON(IdpName, idpName_);
      DARABONBA_PTR_FROM_JSON(IdpNameEN, idpNameEN_);
      DARABONBA_PTR_FROM_JSON(IdpProvider, idpProvider_);
      DARABONBA_PTR_FROM_JSON(JumpSwitch, jumpSwitch_);
      DARABONBA_PTR_FROM_JSON(SsoProtocol, ssoProtocol_);
      DARABONBA_PTR_FROM_JSON(SsoServiceUrl, ssoServiceUrl_);
    };
    FindIdpListByLoginIdentifierResponseBodyIdpInfos() = default ;
    FindIdpListByLoginIdentifierResponseBodyIdpInfos(const FindIdpListByLoginIdentifierResponseBodyIdpInfos &) = default ;
    FindIdpListByLoginIdentifierResponseBodyIdpInfos(FindIdpListByLoginIdentifierResponseBodyIdpInfos &&) = default ;
    FindIdpListByLoginIdentifierResponseBodyIdpInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindIdpListByLoginIdentifierResponseBodyIdpInfos() = default ;
    FindIdpListByLoginIdentifierResponseBodyIdpInfos& operator=(const FindIdpListByLoginIdentifierResponseBodyIdpInfos &) = default ;
    FindIdpListByLoginIdentifierResponseBodyIdpInfos& operator=(FindIdpListByLoginIdentifierResponseBodyIdpInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountType_ != nullptr
        && this->cookies_ != nullptr && this->idpId_ != nullptr && this->idpName_ != nullptr && this->idpNameEN_ != nullptr && this->idpProvider_ != nullptr
        && this->jumpSwitch_ != nullptr && this->ssoProtocol_ != nullptr && this->ssoServiceUrl_ != nullptr; };
    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline FindIdpListByLoginIdentifierResponseBodyIdpInfos& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // cookies Field Functions 
    bool hasCookies() const { return this->cookies_ != nullptr;};
    void deleteCookies() { this->cookies_ = nullptr;};
    inline string cookies() const { DARABONBA_PTR_GET_DEFAULT(cookies_, "") };
    inline FindIdpListByLoginIdentifierResponseBodyIdpInfos& setCookies(string cookies) { DARABONBA_PTR_SET_VALUE(cookies_, cookies) };


    // idpId Field Functions 
    bool hasIdpId() const { return this->idpId_ != nullptr;};
    void deleteIdpId() { this->idpId_ = nullptr;};
    inline string idpId() const { DARABONBA_PTR_GET_DEFAULT(idpId_, "") };
    inline FindIdpListByLoginIdentifierResponseBodyIdpInfos& setIdpId(string idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


    // idpName Field Functions 
    bool hasIdpName() const { return this->idpName_ != nullptr;};
    void deleteIdpName() { this->idpName_ = nullptr;};
    inline string idpName() const { DARABONBA_PTR_GET_DEFAULT(idpName_, "") };
    inline FindIdpListByLoginIdentifierResponseBodyIdpInfos& setIdpName(string idpName) { DARABONBA_PTR_SET_VALUE(idpName_, idpName) };


    // idpNameEN Field Functions 
    bool hasIdpNameEN() const { return this->idpNameEN_ != nullptr;};
    void deleteIdpNameEN() { this->idpNameEN_ = nullptr;};
    inline string idpNameEN() const { DARABONBA_PTR_GET_DEFAULT(idpNameEN_, "") };
    inline FindIdpListByLoginIdentifierResponseBodyIdpInfos& setIdpNameEN(string idpNameEN) { DARABONBA_PTR_SET_VALUE(idpNameEN_, idpNameEN) };


    // idpProvider Field Functions 
    bool hasIdpProvider() const { return this->idpProvider_ != nullptr;};
    void deleteIdpProvider() { this->idpProvider_ = nullptr;};
    inline string idpProvider() const { DARABONBA_PTR_GET_DEFAULT(idpProvider_, "") };
    inline FindIdpListByLoginIdentifierResponseBodyIdpInfos& setIdpProvider(string idpProvider) { DARABONBA_PTR_SET_VALUE(idpProvider_, idpProvider) };


    // jumpSwitch Field Functions 
    bool hasJumpSwitch() const { return this->jumpSwitch_ != nullptr;};
    void deleteJumpSwitch() { this->jumpSwitch_ = nullptr;};
    inline string jumpSwitch() const { DARABONBA_PTR_GET_DEFAULT(jumpSwitch_, "") };
    inline FindIdpListByLoginIdentifierResponseBodyIdpInfos& setJumpSwitch(string jumpSwitch) { DARABONBA_PTR_SET_VALUE(jumpSwitch_, jumpSwitch) };


    // ssoProtocol Field Functions 
    bool hasSsoProtocol() const { return this->ssoProtocol_ != nullptr;};
    void deleteSsoProtocol() { this->ssoProtocol_ = nullptr;};
    inline string ssoProtocol() const { DARABONBA_PTR_GET_DEFAULT(ssoProtocol_, "") };
    inline FindIdpListByLoginIdentifierResponseBodyIdpInfos& setSsoProtocol(string ssoProtocol) { DARABONBA_PTR_SET_VALUE(ssoProtocol_, ssoProtocol) };


    // ssoServiceUrl Field Functions 
    bool hasSsoServiceUrl() const { return this->ssoServiceUrl_ != nullptr;};
    void deleteSsoServiceUrl() { this->ssoServiceUrl_ = nullptr;};
    inline string ssoServiceUrl() const { DARABONBA_PTR_GET_DEFAULT(ssoServiceUrl_, "") };
    inline FindIdpListByLoginIdentifierResponseBodyIdpInfos& setSsoServiceUrl(string ssoServiceUrl) { DARABONBA_PTR_SET_VALUE(ssoServiceUrl_, ssoServiceUrl) };


  protected:
    std::shared_ptr<string> accountType_ = nullptr;
    std::shared_ptr<string> cookies_ = nullptr;
    std::shared_ptr<string> idpId_ = nullptr;
    std::shared_ptr<string> idpName_ = nullptr;
    std::shared_ptr<string> idpNameEN_ = nullptr;
    std::shared_ptr<string> idpProvider_ = nullptr;
    std::shared_ptr<string> jumpSwitch_ = nullptr;
    std::shared_ptr<string> ssoProtocol_ = nullptr;
    std::shared_ptr<string> ssoServiceUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220
#endif
