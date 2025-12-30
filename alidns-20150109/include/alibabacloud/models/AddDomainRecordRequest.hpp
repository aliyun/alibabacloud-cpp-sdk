// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDOMAINRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDOMAINRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddDomainRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDomainRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Line, line_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RR, RR_);
      DARABONBA_PTR_TO_JSON(TTL, TTL_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AddDomainRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Line, line_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RR, RR_);
      DARABONBA_PTR_FROM_JSON(TTL, TTL_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    AddDomainRecordRequest() = default ;
    AddDomainRecordRequest(const AddDomainRecordRequest &) = default ;
    AddDomainRecordRequest(AddDomainRecordRequest &&) = default ;
    AddDomainRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDomainRecordRequest() = default ;
    AddDomainRecordRequest& operator=(const AddDomainRecordRequest &) = default ;
    AddDomainRecordRequest& operator=(AddDomainRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->lang_ == nullptr && this->line_ == nullptr && this->priority_ == nullptr && this->RR_ == nullptr && this->TTL_ == nullptr
        && this->type_ == nullptr && this->userClientIp_ == nullptr && this->value_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddDomainRecordRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddDomainRecordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline AddDomainRecordRequest& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline AddDomainRecordRequest& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // RR Field Functions 
    bool hasRR() const { return this->RR_ != nullptr;};
    void deleteRR() { this->RR_ = nullptr;};
    inline string getRR() const { DARABONBA_PTR_GET_DEFAULT(RR_, "") };
    inline AddDomainRecordRequest& setRR(string RR) { DARABONBA_PTR_SET_VALUE(RR_, RR) };


    // TTL Field Functions 
    bool hasTTL() const { return this->TTL_ != nullptr;};
    void deleteTTL() { this->TTL_ = nullptr;};
    inline int64_t getTTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, 0L) };
    inline AddDomainRecordRequest& setTTL(int64_t TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddDomainRecordRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline AddDomainRecordRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AddDomainRecordRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The domain name. You can call the [DescribeDomains](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-describedomains?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the domain name.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English Default: **zh**
    shared_ptr<string> lang_ {};
    // The resolution line. Default value: **default**. For more information, see
    // 
    // [DNS resolution lines](https://www.alibabacloud.com/help/zh/doc-detail/29807.htm).
    shared_ptr<string> line_ {};
    // The priority of the mail exchanger (MX) record. Valid values: `1 to 50`.
    // 
    // This parameter is required if the type of the DNS record is MX. A smaller value indicates a higher priority.
    shared_ptr<int64_t> priority_ {};
    // The hostname.
    // 
    // For example, to resolve @.example.com, you must set this parameter to an at sign (@). You cannot leave this parameter empty.
    // 
    // This parameter is required.
    shared_ptr<string> RR_ {};
    // The time to live (TTL) period of the Alibaba Cloud DNS (DNS) record. Default value: 600. Unit: seconds. For more information, see
    // 
    // [TTL definition](https://www.alibabacloud.com/help/zh/doc-detail/29806.htm).
    shared_ptr<int64_t> TTL_ {};
    // The type of the DNS record. For more information, see
    // 
    // [DNS record types](https://www.alibabacloud.com/help/zh/doc-detail/29805.htm).
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The IP address of the client.
    shared_ptr<string> userClientIp_ {};
    // The value of the DNS record.
    // 
    // This parameter is required.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
