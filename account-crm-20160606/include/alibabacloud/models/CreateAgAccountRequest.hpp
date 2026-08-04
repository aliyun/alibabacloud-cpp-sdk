// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class CreateAgAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LoginEmail, loginEmail_);
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      DARABONBA_PTR_TO_JSON(NationCode, nationCode_);
      DARABONBA_PTR_TO_JSON(Own, own_);
      DARABONBA_PTR_TO_JSON(RealParentPk, realParentPk_);
      DARABONBA_PTR_TO_JSON(SecurityMobile, securityMobile_);
      DARABONBA_PTR_TO_JSON(ShowNickName, showNickName_);
      DARABONBA_PTR_TO_JSON(SiteNick, siteNick_);
      DARABONBA_PTR_TO_JSON(srcAccountInfo, srcAccountInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginEmail, loginEmail_);
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
      DARABONBA_PTR_FROM_JSON(NationCode, nationCode_);
      DARABONBA_PTR_FROM_JSON(Own, own_);
      DARABONBA_PTR_FROM_JSON(RealParentPk, realParentPk_);
      DARABONBA_PTR_FROM_JSON(SecurityMobile, securityMobile_);
      DARABONBA_PTR_FROM_JSON(ShowNickName, showNickName_);
      DARABONBA_PTR_FROM_JSON(SiteNick, siteNick_);
      DARABONBA_PTR_FROM_JSON(srcAccountInfo, srcAccountInfo_);
    };
    CreateAgAccountRequest() = default ;
    CreateAgAccountRequest(const CreateAgAccountRequest &) = default ;
    CreateAgAccountRequest(CreateAgAccountRequest &&) = default ;
    CreateAgAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgAccountRequest() = default ;
    CreateAgAccountRequest& operator=(const CreateAgAccountRequest &) = default ;
    CreateAgAccountRequest& operator=(CreateAgAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loginEmail_ == nullptr
        && this->mpk_ == nullptr && this->nationCode_ == nullptr && this->own_ == nullptr && this->realParentPk_ == nullptr && this->securityMobile_ == nullptr
        && this->showNickName_ == nullptr && this->siteNick_ == nullptr && this->srcAccountInfo_ == nullptr; };
    // loginEmail Field Functions 
    bool hasLoginEmail() const { return this->loginEmail_ != nullptr;};
    void deleteLoginEmail() { this->loginEmail_ = nullptr;};
    inline string getLoginEmail() const { DARABONBA_PTR_GET_DEFAULT(loginEmail_, "") };
    inline CreateAgAccountRequest& setLoginEmail(string loginEmail) { DARABONBA_PTR_SET_VALUE(loginEmail_, loginEmail) };


    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
    inline CreateAgAccountRequest& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    // nationCode Field Functions 
    bool hasNationCode() const { return this->nationCode_ != nullptr;};
    void deleteNationCode() { this->nationCode_ = nullptr;};
    inline string getNationCode() const { DARABONBA_PTR_GET_DEFAULT(nationCode_, "") };
    inline CreateAgAccountRequest& setNationCode(string nationCode) { DARABONBA_PTR_SET_VALUE(nationCode_, nationCode) };


    // own Field Functions 
    bool hasOwn() const { return this->own_ != nullptr;};
    void deleteOwn() { this->own_ = nullptr;};
    inline string getOwn() const { DARABONBA_PTR_GET_DEFAULT(own_, "") };
    inline CreateAgAccountRequest& setOwn(string own) { DARABONBA_PTR_SET_VALUE(own_, own) };


    // realParentPk Field Functions 
    bool hasRealParentPk() const { return this->realParentPk_ != nullptr;};
    void deleteRealParentPk() { this->realParentPk_ = nullptr;};
    inline string getRealParentPk() const { DARABONBA_PTR_GET_DEFAULT(realParentPk_, "") };
    inline CreateAgAccountRequest& setRealParentPk(string realParentPk) { DARABONBA_PTR_SET_VALUE(realParentPk_, realParentPk) };


    // securityMobile Field Functions 
    bool hasSecurityMobile() const { return this->securityMobile_ != nullptr;};
    void deleteSecurityMobile() { this->securityMobile_ = nullptr;};
    inline string getSecurityMobile() const { DARABONBA_PTR_GET_DEFAULT(securityMobile_, "") };
    inline CreateAgAccountRequest& setSecurityMobile(string securityMobile) { DARABONBA_PTR_SET_VALUE(securityMobile_, securityMobile) };


    // showNickName Field Functions 
    bool hasShowNickName() const { return this->showNickName_ != nullptr;};
    void deleteShowNickName() { this->showNickName_ = nullptr;};
    inline string getShowNickName() const { DARABONBA_PTR_GET_DEFAULT(showNickName_, "") };
    inline CreateAgAccountRequest& setShowNickName(string showNickName) { DARABONBA_PTR_SET_VALUE(showNickName_, showNickName) };


    // siteNick Field Functions 
    bool hasSiteNick() const { return this->siteNick_ != nullptr;};
    void deleteSiteNick() { this->siteNick_ = nullptr;};
    inline string getSiteNick() const { DARABONBA_PTR_GET_DEFAULT(siteNick_, "") };
    inline CreateAgAccountRequest& setSiteNick(string siteNick) { DARABONBA_PTR_SET_VALUE(siteNick_, siteNick) };


    // srcAccountInfo Field Functions 
    bool hasSrcAccountInfo() const { return this->srcAccountInfo_ != nullptr;};
    void deleteSrcAccountInfo() { this->srcAccountInfo_ = nullptr;};
    inline string getSrcAccountInfo() const { DARABONBA_PTR_GET_DEFAULT(srcAccountInfo_, "") };
    inline CreateAgAccountRequest& setSrcAccountInfo(string srcAccountInfo) { DARABONBA_PTR_SET_VALUE(srcAccountInfo_, srcAccountInfo) };


  protected:
    shared_ptr<string> loginEmail_ {};
    // This parameter is required.
    shared_ptr<string> mpk_ {};
    shared_ptr<string> nationCode_ {};
    shared_ptr<string> own_ {};
    shared_ptr<string> realParentPk_ {};
    shared_ptr<string> securityMobile_ {};
    shared_ptr<string> showNickName_ {};
    shared_ptr<string> siteNick_ {};
    shared_ptr<string> srcAccountInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
