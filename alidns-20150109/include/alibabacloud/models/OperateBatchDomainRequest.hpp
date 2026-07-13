// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEBATCHDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEBATCHDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class DomainRecordInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainRecordInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Line, line_);
        DARABONBA_PTR_TO_JSON(NewRr, newRr_);
        DARABONBA_PTR_TO_JSON(NewType, newType_);
        DARABONBA_PTR_TO_JSON(NewValue, newValue_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Rr, rr_);
        DARABONBA_PTR_TO_JSON(Ttl, ttl_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, DomainRecordInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Line, line_);
        DARABONBA_PTR_FROM_JSON(NewRr, newRr_);
        DARABONBA_PTR_FROM_JSON(NewType, newType_);
        DARABONBA_PTR_FROM_JSON(NewValue, newValue_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Rr, rr_);
        DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      DomainRecordInfo() = default ;
      DomainRecordInfo(const DomainRecordInfo &) = default ;
      DomainRecordInfo(DomainRecordInfo &&) = default ;
      DomainRecordInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainRecordInfo() = default ;
      DomainRecordInfo& operator=(const DomainRecordInfo &) = default ;
      DomainRecordInfo& operator=(DomainRecordInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->line_ == nullptr && this->newRr_ == nullptr && this->newType_ == nullptr && this->newValue_ == nullptr && this->priority_ == nullptr
        && this->rr_ == nullptr && this->ttl_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline DomainRecordInfo& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // line Field Functions 
      bool hasLine() const { return this->line_ != nullptr;};
      void deleteLine() { this->line_ = nullptr;};
      inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
      inline DomainRecordInfo& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


      // newRr Field Functions 
      bool hasNewRr() const { return this->newRr_ != nullptr;};
      void deleteNewRr() { this->newRr_ = nullptr;};
      inline string getNewRr() const { DARABONBA_PTR_GET_DEFAULT(newRr_, "") };
      inline DomainRecordInfo& setNewRr(string newRr) { DARABONBA_PTR_SET_VALUE(newRr_, newRr) };


      // newType Field Functions 
      bool hasNewType() const { return this->newType_ != nullptr;};
      void deleteNewType() { this->newType_ = nullptr;};
      inline string getNewType() const { DARABONBA_PTR_GET_DEFAULT(newType_, "") };
      inline DomainRecordInfo& setNewType(string newType) { DARABONBA_PTR_SET_VALUE(newType_, newType) };


      // newValue Field Functions 
      bool hasNewValue() const { return this->newValue_ != nullptr;};
      void deleteNewValue() { this->newValue_ = nullptr;};
      inline string getNewValue() const { DARABONBA_PTR_GET_DEFAULT(newValue_, "") };
      inline DomainRecordInfo& setNewValue(string newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline DomainRecordInfo& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // rr Field Functions 
      bool hasRr() const { return this->rr_ != nullptr;};
      void deleteRr() { this->rr_ = nullptr;};
      inline string getRr() const { DARABONBA_PTR_GET_DEFAULT(rr_, "") };
      inline DomainRecordInfo& setRr(string rr) { DARABONBA_PTR_SET_VALUE(rr_, rr) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
      inline DomainRecordInfo& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DomainRecordInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline DomainRecordInfo& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The domain name.
      // 
      // > A single request can contain up to 200 entries. Exceeding this limit may cause the request to fail due to the HTTP request header size limit.
      // 
      // This parameter is required.
      shared_ptr<string> domain_ {};
      // The resolution line. Default value: default.
      shared_ptr<string> line_ {};
      // The new host record. This parameter is used only for modification operations and is for internal use only.
      shared_ptr<string> newRr_ {};
      // The new record type. This parameter is used only for modification operations and is for internal use only.
      shared_ptr<string> newType_ {};
      // The new record value. This parameter is used only for modification operations and is for internal use only.
      shared_ptr<string> newValue_ {};
      // The MX priority.
      // 
      // This parameter is required if the record type is MX. Default value: 10.
      shared_ptr<int32_t> priority_ {};
      // The host record.
      // 
      // > This parameter is required when `Type` is **RR_ADD** or **RR_DEL**.
      shared_ptr<string> rr_ {};
      // The TTL, in seconds. Default value: ***600***.
      shared_ptr<int32_t> ttl_ {};
      // The record type. Examples: A, AAAA, TXT, MX, and CNAME.
      // 
      // > This parameter is required when `Type` is **RR_ADD** or **RR_DEL**.
      shared_ptr<string> type_ {};
      // The record value.
      // 
      // > This parameter is required when `Type` is **RR_ADD** or **RR_DEL**.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->domainRecordInfo_ == nullptr
        && this->lang_ == nullptr && this->type_ == nullptr; };
    // domainRecordInfo Field Functions 
    bool hasDomainRecordInfo() const { return this->domainRecordInfo_ != nullptr;};
    void deleteDomainRecordInfo() { this->domainRecordInfo_ = nullptr;};
    inline const vector<OperateBatchDomainRequest::DomainRecordInfo> & getDomainRecordInfo() const { DARABONBA_PTR_GET_CONST(domainRecordInfo_, vector<OperateBatchDomainRequest::DomainRecordInfo>) };
    inline vector<OperateBatchDomainRequest::DomainRecordInfo> getDomainRecordInfo() { DARABONBA_PTR_GET(domainRecordInfo_, vector<OperateBatchDomainRequest::DomainRecordInfo>) };
    inline OperateBatchDomainRequest& setDomainRecordInfo(const vector<OperateBatchDomainRequest::DomainRecordInfo> & domainRecordInfo) { DARABONBA_PTR_SET_VALUE(domainRecordInfo_, domainRecordInfo) };
    inline OperateBatchDomainRequest& setDomainRecordInfo(vector<OperateBatchDomainRequest::DomainRecordInfo> && domainRecordInfo) { DARABONBA_PTR_SET_RVALUE(domainRecordInfo_, domainRecordInfo) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline OperateBatchDomainRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline OperateBatchDomainRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The data for the batch operation.
    // 
    // This parameter is required.
    shared_ptr<vector<OperateBatchDomainRequest::DomainRecordInfo>> domainRecordInfo_ {};
    // The response language. Valid values:
    // 
    // - zh: Chinese
    // 
    // - en: English
    // 
    // Default value: zh
    shared_ptr<string> lang_ {};
    // The batch operation type. Valid values:
    // 
    // - **DOMAIN_ADD**: adds domain names in batches.
    // 
    // - **DOMAIN_DEL**: deletes domain names in batches.
    // 
    // - **RR_ADD**: adds DNS records in batches.
    // 
    // - **RR_DEL**: deletes DNS records in batches. This operation deletes DNS records that match the conditions specified by `Rr`, `Value`, or both. If you do not specify `Rr` and `Value`, all DNS records for the specified domain name are deleted.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
