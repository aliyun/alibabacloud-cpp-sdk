// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEZONERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEZONERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class UpdateZoneRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateZoneRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Line, line_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(Rr, rr_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateZoneRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Line, line_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(Rr, rr_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    UpdateZoneRecordRequest() = default ;
    UpdateZoneRecordRequest(const UpdateZoneRecordRequest &) = default ;
    UpdateZoneRecordRequest(UpdateZoneRecordRequest &&) = default ;
    UpdateZoneRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateZoneRecordRequest() = default ;
    UpdateZoneRecordRequest& operator=(const UpdateZoneRecordRequest &) = default ;
    UpdateZoneRecordRequest& operator=(UpdateZoneRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->lang_ == nullptr && this->line_ == nullptr && this->priority_ == nullptr && this->recordId_ == nullptr && this->rr_ == nullptr
        && this->ttl_ == nullptr && this->type_ == nullptr && this->userClientIp_ == nullptr && this->value_ == nullptr && this->weight_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateZoneRecordRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateZoneRecordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline UpdateZoneRecordRequest& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateZoneRecordRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline UpdateZoneRecordRequest& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // rr Field Functions 
    bool hasRr() const { return this->rr_ != nullptr;};
    void deleteRr() { this->rr_ = nullptr;};
    inline string getRr() const { DARABONBA_PTR_GET_DEFAULT(rr_, "") };
    inline UpdateZoneRecordRequest& setRr(string rr) { DARABONBA_PTR_SET_VALUE(rr_, rr) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline UpdateZoneRecordRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateZoneRecordRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline UpdateZoneRecordRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateZoneRecordRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline UpdateZoneRecordRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // A client token that is used to ensure the idempotence of the request. The client generates the value, which must be unique among different requests. The token can contain a maximum of 64 ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The language of the response. Valid values:
    // 
    // - zh: Chinese.
    // 
    // - en: English.
    // 
    // Default value: en
    shared_ptr<string> lang_ {};
    // The DNS resolution line. The default value is default.
    shared_ptr<string> line_ {};
    // The priority of the MX record. You can set different priorities for mail servers. Valid values: 1 to 99. A smaller value indicates a higher priority.
    // 
    // > This parameter is required if the record type is MX.
    shared_ptr<int32_t> priority_ {};
    // The ID of the DNS record. To obtain the ID, call the DescribeZoneRecords operation to query a list of DNS records.
    // 
    // This parameter is required.
    shared_ptr<int64_t> recordId_ {};
    // The host record. This is the prefix of a domain name. Common examples include www, @, \\* (for wildcard DNS), and mail (for mailboxes).
    // 
    // For example, to resolve @.example.com, set the host record to "@", not an empty string.
    // 
    // This parameter is required.
    shared_ptr<string> rr_ {};
    // The time to live (TTL) in seconds (s). Valid values: 5, 30, 60, 3600 (1 hour), 43200 (12 hours), and 86400 (1 day).
    shared_ptr<int32_t> ttl_ {};
    // The type of the DNS record. The following types are supported:
    // 
    // - **A**: Maps a domain name to an IPv4 address in dotted decimal notation.
    // 
    // - **AAAA**: Maps a domain name to an IPv6 address.
    // 
    // - **CNAME**: Maps a domain name to another domain name.
    // 
    // - **TXT**: A text record. The text can be up to 255 characters in length. TXT records are often used for Sender Policy Framework (SPF) records to prevent spam.
    // 
    // - **MX**: Maps a domain name to the domain name of a mail server.
    // 
    // - **PTR**: Maps an IP address to a domain name.
    // 
    // - **SRV**: A service record that specifies the server for a specific service. The format is: Priority Weight Port Target. Each part must be separated by a space.
    // 
    // > Before adding a PTR record, configure a reverse lookup zone. For more information, see [Reverse DNS lookup and PTR records](https://help.aliyun.com/document_detail/2592976.html)
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The IP address of the client.
    shared_ptr<string> userClientIp_ {};
    // The record value. Enter a value that corresponds to the record type.
    // 
    // This parameter is required.
    shared_ptr<string> value_ {};
    // The weight of the record. Valid values are integers from 1 to 100. The default value is 1. You can set different weights for records to return IP addresses in proportion to their weights.
    shared_ptr<int32_t> weight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
