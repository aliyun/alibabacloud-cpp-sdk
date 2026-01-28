// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORGENERATEDOMAINCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORGENERATEDOMAINCERTIFICATEREQUEST_HPP_
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
  class SaveBatchTaskForGenerateDomainCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForGenerateDomainCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForGenerateDomainCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveBatchTaskForGenerateDomainCertificateRequest() = default ;
    SaveBatchTaskForGenerateDomainCertificateRequest(const SaveBatchTaskForGenerateDomainCertificateRequest &) = default ;
    SaveBatchTaskForGenerateDomainCertificateRequest(SaveBatchTaskForGenerateDomainCertificateRequest &&) = default ;
    SaveBatchTaskForGenerateDomainCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForGenerateDomainCertificateRequest() = default ;
    SaveBatchTaskForGenerateDomainCertificateRequest& operator=(const SaveBatchTaskForGenerateDomainCertificateRequest &) = default ;
    SaveBatchTaskForGenerateDomainCertificateRequest& operator=(SaveBatchTaskForGenerateDomainCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainNames_ == nullptr
        && this->lang_ == nullptr && this->userClientIp_ == nullptr; };
    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline const vector<string> & getDomainNames() const { DARABONBA_PTR_GET_CONST(domainNames_, vector<string>) };
    inline vector<string> getDomainNames() { DARABONBA_PTR_GET(domainNames_, vector<string>) };
    inline SaveBatchTaskForGenerateDomainCertificateRequest& setDomainNames(const vector<string> & domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };
    inline SaveBatchTaskForGenerateDomainCertificateRequest& setDomainNames(vector<string> && domainNames) { DARABONBA_PTR_SET_RVALUE(domainNames_, domainNames) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveBatchTaskForGenerateDomainCertificateRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveBatchTaskForGenerateDomainCertificateRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // The domain names.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> domainNames_ {};
    // The language of the error message to return if the request fails. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    // 
    // Default value: **en**.
    shared_ptr<string> lang_ {};
    // The IP address of the client.
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
