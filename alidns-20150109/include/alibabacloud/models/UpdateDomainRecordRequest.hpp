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
        && this->line_ == nullptr && this->priority_ == nullptr && this->RR_ == nullptr && this->recordId_ == nullptr && this->TTL_ == nullptr
        && this->type_ == nullptr && this->userClientIp_ == nullptr && this->value_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDomainRecordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline UpdateDomainRecordRequest& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline UpdateDomainRecordRequest& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // RR Field Functions 
    bool hasRR() const { return this->RR_ != nullptr;};
    void deleteRR() { this->RR_ = nullptr;};
    inline string getRR() const { DARABONBA_PTR_GET_DEFAULT(RR_, "") };
    inline UpdateDomainRecordRequest& setRR(string RR) { DARABONBA_PTR_SET_VALUE(RR_, RR) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline UpdateDomainRecordRequest& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // TTL Field Functions 
    bool hasTTL() const { return this->TTL_ != nullptr;};
    void deleteTTL() { this->TTL_ = nullptr;};
    inline int64_t getTTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, 0L) };
    inline UpdateDomainRecordRequest& setTTL(int64_t TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateDomainRecordRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline UpdateDomainRecordRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateDomainRecordRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The language of the request and response. Valid values:
    // 
    // - **zh**: Chinese
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The resolution line. The default value is **default**.
    // For more information, see
    // <props="china">[Enumeration of resolution lines](https://help.aliyun.com/document_detail/29807.html).
    // <props="intl">[Enumeration of resolution lines](https://www.alibabacloud.com/help/en/doc-detail/29807.htm).
    shared_ptr<string> line_ {};
    // The priority of the MX record. Valid values: `[1, 50]`.
    // 
    // This parameter is required if the record type is MX.
    shared_ptr<int64_t> priority_ {};
    // The host record.
    // To resolve the root domain, such as example.com, set the host record to the at sign (@).
    // 
    // This parameter is required.
    shared_ptr<string> RR_ {};
    // The ID of the DNS record. To obtain the ID, call the [DescribeDomainRecords](https://help.aliyun.com/document_detail/2357159.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> recordId_ {};
    // The time to live (TTL). The default value is 600 seconds (10 minutes).
    // For more information, see
    // <props="china">[TTL definition](https://help.aliyun.com/document_detail/29806.html).
    // <props="intl">[TTL definition](https://www.alibabacloud.com/help/en/doc-detail/29806.htm).
    shared_ptr<int64_t> TTL_ {};
    // The type of the DNS record. For more information, see
    // <props="china">[DNS record types](https://help.aliyun.com/document_detail/29805.html).
    // <props="intl">[DNS record types](https://www.alibabacloud.com/help/en/doc-detail/29805.htm).
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The client IP address.
    shared_ptr<string> userClientIp_ {};
    // The record value.
    // 
    // This parameter is required.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
