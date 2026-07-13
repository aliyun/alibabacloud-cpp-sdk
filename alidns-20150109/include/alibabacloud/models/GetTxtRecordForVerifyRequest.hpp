// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTXTRECORDFORVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTXTRECORDFORVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class GetTxtRecordForVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTxtRecordForVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetTxtRecordForVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetTxtRecordForVerifyRequest() = default ;
    GetTxtRecordForVerifyRequest(const GetTxtRecordForVerifyRequest &) = default ;
    GetTxtRecordForVerifyRequest(GetTxtRecordForVerifyRequest &&) = default ;
    GetTxtRecordForVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTxtRecordForVerifyRequest() = default ;
    GetTxtRecordForVerifyRequest& operator=(const GetTxtRecordForVerifyRequest &) = default ;
    GetTxtRecordForVerifyRequest& operator=(GetTxtRecordForVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->lang_ == nullptr && this->type_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetTxtRecordForVerifyRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetTxtRecordForVerifyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetTxtRecordForVerifyRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The domain name. The [DescribeDomains](https://www.alibabacloud.com/help/en/dns/api-alidns-2015-01-09-describedomains) operation returns a list of domain names.
    shared_ptr<string> domainName_ {};
    // The language of the request and response. Default value: **zh**. Valid values:
    // 
    // - **zh**: Chinese
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The purpose of the TXT record verification. Valid values:
    // 
    // - ADD_SUB_DOMAIN: Add a subdomain for verification.
    // 
    // - RETRIEVAL: Other verifications.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
