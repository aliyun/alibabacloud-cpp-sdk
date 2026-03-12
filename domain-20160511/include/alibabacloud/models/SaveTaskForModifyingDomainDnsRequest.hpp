// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVETASKFORMODIFYINGDOMAINDNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVETASKFORMODIFYINGDOMAINDNSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class SaveTaskForModifyingDomainDnsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveTaskForModifyingDomainDnsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunDns, aliyunDns_);
      DARABONBA_PTR_TO_JSON(DnsList, dnsList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SaleId, saleId_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveTaskForModifyingDomainDnsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunDns, aliyunDns_);
      DARABONBA_PTR_FROM_JSON(DnsList, dnsList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SaleId, saleId_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveTaskForModifyingDomainDnsRequest() = default ;
    SaveTaskForModifyingDomainDnsRequest(const SaveTaskForModifyingDomainDnsRequest &) = default ;
    SaveTaskForModifyingDomainDnsRequest(SaveTaskForModifyingDomainDnsRequest &&) = default ;
    SaveTaskForModifyingDomainDnsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveTaskForModifyingDomainDnsRequest() = default ;
    SaveTaskForModifyingDomainDnsRequest& operator=(const SaveTaskForModifyingDomainDnsRequest &) = default ;
    SaveTaskForModifyingDomainDnsRequest& operator=(SaveTaskForModifyingDomainDnsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunDns_ == nullptr
        && this->dnsList_ == nullptr && this->domainName_ == nullptr && this->lang_ == nullptr && this->saleId_ == nullptr && this->userClientIp_ == nullptr; };
    // aliyunDns Field Functions 
    bool hasAliyunDns() const { return this->aliyunDns_ != nullptr;};
    void deleteAliyunDns() { this->aliyunDns_ = nullptr;};
    inline bool getAliyunDns() const { DARABONBA_PTR_GET_DEFAULT(aliyunDns_, false) };
    inline SaveTaskForModifyingDomainDnsRequest& setAliyunDns(bool aliyunDns) { DARABONBA_PTR_SET_VALUE(aliyunDns_, aliyunDns) };


    // dnsList Field Functions 
    bool hasDnsList() const { return this->dnsList_ != nullptr;};
    void deleteDnsList() { this->dnsList_ = nullptr;};
    inline const vector<string> & getDnsList() const { DARABONBA_PTR_GET_CONST(dnsList_, vector<string>) };
    inline vector<string> getDnsList() { DARABONBA_PTR_GET(dnsList_, vector<string>) };
    inline SaveTaskForModifyingDomainDnsRequest& setDnsList(const vector<string> & dnsList) { DARABONBA_PTR_SET_VALUE(dnsList_, dnsList) };
    inline SaveTaskForModifyingDomainDnsRequest& setDnsList(vector<string> && dnsList) { DARABONBA_PTR_SET_RVALUE(dnsList_, dnsList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveTaskForModifyingDomainDnsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveTaskForModifyingDomainDnsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // saleId Field Functions 
    bool hasSaleId() const { return this->saleId_ != nullptr;};
    void deleteSaleId() { this->saleId_ = nullptr;};
    inline string getSaleId() const { DARABONBA_PTR_GET_DEFAULT(saleId_, "") };
    inline SaveTaskForModifyingDomainDnsRequest& setSaleId(string saleId) { DARABONBA_PTR_SET_VALUE(saleId_, saleId) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveTaskForModifyingDomainDnsRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<bool> aliyunDns_ {};
    shared_ptr<vector<string>> dnsList_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> saleId_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
