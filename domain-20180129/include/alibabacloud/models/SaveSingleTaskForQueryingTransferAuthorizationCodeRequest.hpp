// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESINGLETASKFORQUERYINGTRANSFERAUTHORIZATIONCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVESINGLETASKFORQUERYINGTRANSFERAUTHORIZATIONCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveSingleTaskForQueryingTransferAuthorizationCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSingleTaskForQueryingTransferAuthorizationCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSingleTaskForQueryingTransferAuthorizationCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveSingleTaskForQueryingTransferAuthorizationCodeRequest() = default ;
    SaveSingleTaskForQueryingTransferAuthorizationCodeRequest(const SaveSingleTaskForQueryingTransferAuthorizationCodeRequest &) = default ;
    SaveSingleTaskForQueryingTransferAuthorizationCodeRequest(SaveSingleTaskForQueryingTransferAuthorizationCodeRequest &&) = default ;
    SaveSingleTaskForQueryingTransferAuthorizationCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSingleTaskForQueryingTransferAuthorizationCodeRequest() = default ;
    SaveSingleTaskForQueryingTransferAuthorizationCodeRequest& operator=(const SaveSingleTaskForQueryingTransferAuthorizationCodeRequest &) = default ;
    SaveSingleTaskForQueryingTransferAuthorizationCodeRequest& operator=(SaveSingleTaskForQueryingTransferAuthorizationCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->lang_ == nullptr && this->userClientIp_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveSingleTaskForQueryingTransferAuthorizationCodeRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveSingleTaskForQueryingTransferAuthorizationCodeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveSingleTaskForQueryingTransferAuthorizationCodeRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
