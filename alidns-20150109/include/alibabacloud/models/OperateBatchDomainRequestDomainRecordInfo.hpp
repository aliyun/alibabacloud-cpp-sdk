// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEBATCHDOMAINREQUESTDOMAINRECORDINFO_HPP_
#define ALIBABACLOUD_MODELS_OPERATEBATCHDOMAINREQUESTDOMAINRECORDINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class OperateBatchDomainRequestDomainRecordInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateBatchDomainRequestDomainRecordInfo& obj) { 
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
    friend void from_json(const Darabonba::Json& j, OperateBatchDomainRequestDomainRecordInfo& obj) { 
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
    OperateBatchDomainRequestDomainRecordInfo() = default ;
    OperateBatchDomainRequestDomainRecordInfo(const OperateBatchDomainRequestDomainRecordInfo &) = default ;
    OperateBatchDomainRequestDomainRecordInfo(OperateBatchDomainRequestDomainRecordInfo &&) = default ;
    OperateBatchDomainRequestDomainRecordInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateBatchDomainRequestDomainRecordInfo() = default ;
    OperateBatchDomainRequestDomainRecordInfo& operator=(const OperateBatchDomainRequestDomainRecordInfo &) = default ;
    OperateBatchDomainRequestDomainRecordInfo& operator=(OperateBatchDomainRequestDomainRecordInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->line_ != nullptr && this->newRr_ != nullptr && this->newType_ != nullptr && this->newValue_ != nullptr && this->priority_ != nullptr
        && this->rr_ != nullptr && this->ttl_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline OperateBatchDomainRequestDomainRecordInfo& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string line() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline OperateBatchDomainRequestDomainRecordInfo& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    // newRr Field Functions 
    bool hasNewRr() const { return this->newRr_ != nullptr;};
    void deleteNewRr() { this->newRr_ = nullptr;};
    inline string newRr() const { DARABONBA_PTR_GET_DEFAULT(newRr_, "") };
    inline OperateBatchDomainRequestDomainRecordInfo& setNewRr(string newRr) { DARABONBA_PTR_SET_VALUE(newRr_, newRr) };


    // newType Field Functions 
    bool hasNewType() const { return this->newType_ != nullptr;};
    void deleteNewType() { this->newType_ = nullptr;};
    inline string newType() const { DARABONBA_PTR_GET_DEFAULT(newType_, "") };
    inline OperateBatchDomainRequestDomainRecordInfo& setNewType(string newType) { DARABONBA_PTR_SET_VALUE(newType_, newType) };


    // newValue Field Functions 
    bool hasNewValue() const { return this->newValue_ != nullptr;};
    void deleteNewValue() { this->newValue_ = nullptr;};
    inline string newValue() const { DARABONBA_PTR_GET_DEFAULT(newValue_, "") };
    inline OperateBatchDomainRequestDomainRecordInfo& setNewValue(string newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline OperateBatchDomainRequestDomainRecordInfo& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // rr Field Functions 
    bool hasRr() const { return this->rr_ != nullptr;};
    void deleteRr() { this->rr_ = nullptr;};
    inline string rr() const { DARABONBA_PTR_GET_DEFAULT(rr_, "") };
    inline OperateBatchDomainRequestDomainRecordInfo& setRr(string rr) { DARABONBA_PTR_SET_VALUE(rr_, rr) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline OperateBatchDomainRequestDomainRecordInfo& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline OperateBatchDomainRequestDomainRecordInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline OperateBatchDomainRequestDomainRecordInfo& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The domain name.
    // 
    // >  You can submit 1 to 1,000 domain names. Due to the limit on the length of HTTP request headers, excessive domain names are ignored. Do not enter more than 1,000 domain names.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // The DNS request source. Default value: default.
    std::shared_ptr<string> line_ = nullptr;
    // The new hostname (used only for modification operations, not for external users).
    std::shared_ptr<string> newRr_ = nullptr;
    // The new type of the DNS record (used only for modification operations, not for external users).
    std::shared_ptr<string> newType_ = nullptr;
    // The new value of the DNS record (used only for modification operations, not for external users).
    std::shared_ptr<string> newValue_ = nullptr;
    // The priority of the mail exchanger (MX) record.
    // 
    // This parameter is required if the type of the DNS record is MX. Default value: 10.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The hostname.
    // 
    // >  This parameter is required if you set Type to **RR_ADD** or **RR_DEL**.
    std::shared_ptr<string> rr_ = nullptr;
    // The time-to-live (TTL) value of the cached DNS record. Unit: seconds. Default value: ***600***.
    std::shared_ptr<int32_t> ttl_ = nullptr;
    // The type of the DNS record. Valid values: A, AAAA, TXT, MX, and CNAME.
    // 
    // >  This parameter is required if you set Type to **RR_ADD** or **RR_DEL**.
    std::shared_ptr<string> type_ = nullptr;
    // The value of the DNS record.
    // 
    // >  This parameter is required if you set Type to **RR_ADD** or **RR_DEL**.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
