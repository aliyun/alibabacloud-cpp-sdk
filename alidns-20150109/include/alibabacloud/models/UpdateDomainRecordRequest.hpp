// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDOMAINRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDOMAINRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateDomainRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDomainRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Line, line_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RR, RR_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(TTL, TTL_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDomainRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Line, line_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RR, RR_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(TTL, TTL_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    UpdateDomainRecordRequest() = default ;
    UpdateDomainRecordRequest(const UpdateDomainRecordRequest &) = default ;
    UpdateDomainRecordRequest(UpdateDomainRecordRequest &&) = default ;
    UpdateDomainRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDomainRecordRequest() = default ;
    UpdateDomainRecordRequest& operator=(const UpdateDomainRecordRequest &) = default ;
    UpdateDomainRecordRequest& operator=(UpdateDomainRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->line_ == nullptr && return this->priority_ == nullptr && return this->RR_ == nullptr && return this->recordId_ == nullptr && return this->TTL_ == nullptr
        && return this->type_ == nullptr && return this->userClientIp_ == nullptr && return this->value_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDomainRecordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string line() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline UpdateDomainRecordRequest& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline UpdateDomainRecordRequest& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // RR Field Functions 
    bool hasRR() const { return this->RR_ != nullptr;};
    void deleteRR() { this->RR_ = nullptr;};
    inline string RR() const { DARABONBA_PTR_GET_DEFAULT(RR_, "") };
    inline UpdateDomainRecordRequest& setRR(string RR) { DARABONBA_PTR_SET_VALUE(RR_, RR) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline UpdateDomainRecordRequest& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // TTL Field Functions 
    bool hasTTL() const { return this->TTL_ != nullptr;};
    void deleteTTL() { this->TTL_ = nullptr;};
    inline int64_t TTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, 0L) };
    inline UpdateDomainRecordRequest& setTTL(int64_t TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateDomainRecordRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline UpdateDomainRecordRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateDomainRecordRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The resolution line. Default value: **default**.
    // 
    // For more information, see
    // 
    // [DNS resolution lines](https://www.alibabacloud.com/help/zh/doc-detail/29807.htm).
    std::shared_ptr<string> line_ = nullptr;
    // The priority of the mail exchanger (MX) record. Valid values: `1 to 50`.
    // 
    // This parameter is required if the type of the DNS record is MX.
    std::shared_ptr<int64_t> priority_ = nullptr;
    // The hostname.
    // 
    // For example, if you want to resolve @.example.com, you must set RR to an at sign (@) instead of leaving it empty.
    // 
    // This parameter is required.
    std::shared_ptr<string> RR_ = nullptr;
    // The ID of the Domain Name System (DNS) record.
    // 
    // You can call the [DescribeDomainRecords](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-describedomainrecords?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> recordId_ = nullptr;
    // The time to live (TTL) period of the Alibaba Cloud DNS (DNS) record. Default value: 600. Unit: seconds.
    // 
    // For more information, see
    // 
    // [TTL definition](https://www.alibabacloud.com/help/zh/doc-detail/29806.htm).
    std::shared_ptr<int64_t> TTL_ = nullptr;
    // The type of the DNS record. For more information, see
    // 
    // [DNS record types](https://www.alibabacloud.com/help/zh/doc-detail/29805.htm).
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The IP address of the client.
    std::shared_ptr<string> userClientIp_ = nullptr;
    // The value of the DNS record.
    // 
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
