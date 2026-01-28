// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORMODIFYINGDOMAINDNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORMODIFYINGDOMAINDNSREQUEST_HPP_
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
  class SaveBatchTaskForModifyingDomainDnsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForModifyingDomainDnsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunDns, aliyunDns_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainNameServer, domainNameServer_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForModifyingDomainDnsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunDns, aliyunDns_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainNameServer, domainNameServer_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveBatchTaskForModifyingDomainDnsRequest() = default ;
    SaveBatchTaskForModifyingDomainDnsRequest(const SaveBatchTaskForModifyingDomainDnsRequest &) = default ;
    SaveBatchTaskForModifyingDomainDnsRequest(SaveBatchTaskForModifyingDomainDnsRequest &&) = default ;
    SaveBatchTaskForModifyingDomainDnsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForModifyingDomainDnsRequest() = default ;
    SaveBatchTaskForModifyingDomainDnsRequest& operator=(const SaveBatchTaskForModifyingDomainDnsRequest &) = default ;
    SaveBatchTaskForModifyingDomainDnsRequest& operator=(SaveBatchTaskForModifyingDomainDnsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunDns_ == nullptr
        && this->domainName_ == nullptr && this->domainNameServer_ == nullptr && this->lang_ == nullptr && this->userClientIp_ == nullptr; };
    // aliyunDns Field Functions 
    bool hasAliyunDns() const { return this->aliyunDns_ != nullptr;};
    void deleteAliyunDns() { this->aliyunDns_ = nullptr;};
    inline bool getAliyunDns() const { DARABONBA_PTR_GET_DEFAULT(aliyunDns_, false) };
    inline SaveBatchTaskForModifyingDomainDnsRequest& setAliyunDns(bool aliyunDns) { DARABONBA_PTR_SET_VALUE(aliyunDns_, aliyunDns) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline const vector<string> & getDomainName() const { DARABONBA_PTR_GET_CONST(domainName_, vector<string>) };
    inline vector<string> getDomainName() { DARABONBA_PTR_GET(domainName_, vector<string>) };
    inline SaveBatchTaskForModifyingDomainDnsRequest& setDomainName(const vector<string> & domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };
    inline SaveBatchTaskForModifyingDomainDnsRequest& setDomainName(vector<string> && domainName) { DARABONBA_PTR_SET_RVALUE(domainName_, domainName) };


    // domainNameServer Field Functions 
    bool hasDomainNameServer() const { return this->domainNameServer_ != nullptr;};
    void deleteDomainNameServer() { this->domainNameServer_ = nullptr;};
    inline const vector<string> & getDomainNameServer() const { DARABONBA_PTR_GET_CONST(domainNameServer_, vector<string>) };
    inline vector<string> getDomainNameServer() { DARABONBA_PTR_GET(domainNameServer_, vector<string>) };
    inline SaveBatchTaskForModifyingDomainDnsRequest& setDomainNameServer(const vector<string> & domainNameServer) { DARABONBA_PTR_SET_VALUE(domainNameServer_, domainNameServer) };
    inline SaveBatchTaskForModifyingDomainDnsRequest& setDomainNameServer(vector<string> && domainNameServer) { DARABONBA_PTR_SET_RVALUE(domainNameServer_, domainNameServer) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveBatchTaskForModifyingDomainDnsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveBatchTaskForModifyingDomainDnsRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<bool> aliyunDns_ {};
    // This parameter is required.
    shared_ptr<vector<string>> domainName_ {};
    shared_ptr<vector<string>> domainNameServer_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
