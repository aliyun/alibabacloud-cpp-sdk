// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEBATCHDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEBATCHDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OperateBatchDomainRequestDomainRecordInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class OperateBatchDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateBatchDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainRecordInfo, domainRecordInfo_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, OperateBatchDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainRecordInfo, domainRecordInfo_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    OperateBatchDomainRequest() = default ;
    OperateBatchDomainRequest(const OperateBatchDomainRequest &) = default ;
    OperateBatchDomainRequest(OperateBatchDomainRequest &&) = default ;
    OperateBatchDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateBatchDomainRequest() = default ;
    OperateBatchDomainRequest& operator=(const OperateBatchDomainRequest &) = default ;
    OperateBatchDomainRequest& operator=(OperateBatchDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainRecordInfo_ == nullptr
        && return this->lang_ == nullptr && return this->type_ == nullptr; };
    // domainRecordInfo Field Functions 
    bool hasDomainRecordInfo() const { return this->domainRecordInfo_ != nullptr;};
    void deleteDomainRecordInfo() { this->domainRecordInfo_ = nullptr;};
    inline const vector<OperateBatchDomainRequestDomainRecordInfo> & domainRecordInfo() const { DARABONBA_PTR_GET_CONST(domainRecordInfo_, vector<OperateBatchDomainRequestDomainRecordInfo>) };
    inline vector<OperateBatchDomainRequestDomainRecordInfo> domainRecordInfo() { DARABONBA_PTR_GET(domainRecordInfo_, vector<OperateBatchDomainRequestDomainRecordInfo>) };
    inline OperateBatchDomainRequest& setDomainRecordInfo(const vector<OperateBatchDomainRequestDomainRecordInfo> & domainRecordInfo) { DARABONBA_PTR_SET_VALUE(domainRecordInfo_, domainRecordInfo) };
    inline OperateBatchDomainRequest& setDomainRecordInfo(vector<OperateBatchDomainRequestDomainRecordInfo> && domainRecordInfo) { DARABONBA_PTR_SET_RVALUE(domainRecordInfo_, domainRecordInfo) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline OperateBatchDomainRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline OperateBatchDomainRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The DNS records. You can submit up to 1,000 DNS records.
    // 
    // This parameter is required.
    std::shared_ptr<vector<OperateBatchDomainRequestDomainRecordInfo>> domainRecordInfo_ = nullptr;
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    // 
    // Default value: zh
    std::shared_ptr<string> lang_ = nullptr;
    // The type of the batch operation. Valid values:
    // 
    // *   **DOMAIN_ADD**: adds domain names in batches.
    // *   **DOMAIN_DEL**: deletes domain names in batches.
    // *   **RR_ADD**: adds DNS records in batches.
    // *   **RR_DEL**: deletes DNS records in batches. This operation deletes the DNS records with the specified hostname or record value. If you do not specify the Rr and Value parameters, this operation deletes the DNS records that are added for the specified domain names.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
