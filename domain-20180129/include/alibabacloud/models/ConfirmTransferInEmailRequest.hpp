// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMTRANSFERINEMAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMTRANSFERINEMAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class ConfirmTransferInEmailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmTransferInEmailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmTransferInEmailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    ConfirmTransferInEmailRequest() = default ;
    ConfirmTransferInEmailRequest(const ConfirmTransferInEmailRequest &) = default ;
    ConfirmTransferInEmailRequest(ConfirmTransferInEmailRequest &&) = default ;
    ConfirmTransferInEmailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmTransferInEmailRequest() = default ;
    ConfirmTransferInEmailRequest& operator=(const ConfirmTransferInEmailRequest &) = default ;
    ConfirmTransferInEmailRequest& operator=(ConfirmTransferInEmailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->email_ == nullptr && return this->lang_ == nullptr && return this->userClientIp_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline const vector<string> & domainName() const { DARABONBA_PTR_GET_CONST(domainName_, vector<string>) };
    inline vector<string> domainName() { DARABONBA_PTR_GET(domainName_, vector<string>) };
    inline ConfirmTransferInEmailRequest& setDomainName(const vector<string> & domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };
    inline ConfirmTransferInEmailRequest& setDomainName(vector<string> && domainName) { DARABONBA_PTR_SET_RVALUE(domainName_, domainName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ConfirmTransferInEmailRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ConfirmTransferInEmailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline ConfirmTransferInEmailRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> domainName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
