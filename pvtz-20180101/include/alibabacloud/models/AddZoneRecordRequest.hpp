// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDZONERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDZONERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class AddZoneRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddZoneRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Line, line_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Rr, rr_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, AddZoneRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Line, line_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Rr, rr_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    AddZoneRecordRequest() = default ;
    AddZoneRecordRequest(const AddZoneRecordRequest &) = default ;
    AddZoneRecordRequest(AddZoneRecordRequest &&) = default ;
    AddZoneRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddZoneRecordRequest() = default ;
    AddZoneRecordRequest& operator=(const AddZoneRecordRequest &) = default ;
    AddZoneRecordRequest& operator=(AddZoneRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->lang_ == nullptr && this->line_ == nullptr && this->priority_ == nullptr && this->remark_ == nullptr && this->rr_ == nullptr
        && this->ttl_ == nullptr && this->type_ == nullptr && this->userClientIp_ == nullptr && this->value_ == nullptr && this->weight_ == nullptr
        && this->zoneId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddZoneRecordRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddZoneRecordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline AddZoneRecordRequest& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline AddZoneRecordRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddZoneRecordRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // rr Field Functions 
    bool hasRr() const { return this->rr_ != nullptr;};
    void deleteRr() { this->rr_ = nullptr;};
    inline string getRr() const { DARABONBA_PTR_GET_DEFAULT(rr_, "") };
    inline AddZoneRecordRequest& setRr(string rr) { DARABONBA_PTR_SET_VALUE(rr_, rr) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline AddZoneRecordRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddZoneRecordRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline AddZoneRecordRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AddZoneRecordRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline AddZoneRecordRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline AddZoneRecordRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. A client generates this value to ensure that it is unique among different requests. The value can be up to 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // The language of the response. Valid values:
    // 
    // - zh: Chinese.
    // 
    // - en: English.
    // 
    // Default value: en
    shared_ptr<string> lang_ {};
    // The source of the DNS resolution request. Valid values:
    // 
    // - default: The default line. This is equivalent to a global line. Configure a default line to ensure that a DNS record is returned even if no smart line is hit.
    // 
    // - Alibaba Cloud line: The DNS resolution request comes from Alibaba Cloud, including Public Cloud, Alibaba Finance Cloud, and Alibaba Gov Cloud.
    // 
    // - Custom line: Customize internal domain name resolution to return a specific IP address for DNS query requests from a specific IP address segment.
    // 
    // > * Only zones in built-in authoritative acceleration regions support adding DNS resolution request source lines.
    // >
    // > * To use the default line, enter "default". For Alibaba Cloud lines and custom lines, enter the specified line code. Example: aliyun_r_cn-beijing-a
    shared_ptr<string> line_ {};
    // The priority of the MX record. A smaller value indicates a higher priority. Valid values: **[1, 99]**.
    shared_ptr<int32_t> priority_ {};
    // The remarks.
    shared_ptr<string> remark_ {};
    // The host record. A host record is the prefix of a domain name. Common host records include www, @, \\* (for wildcard DNS), and mail (for mailboxes).
    // 
    // For example, to resolve @.example.com, set the host record to "@", not an empty string.
    // 
    // This parameter is required.
    shared_ptr<string> rr_ {};
    // The time to live (TTL). The unit is seconds (s). Valid values are 5, 30, 60, 3600 (1 hour), 43200 (12 hours), and 86400 (1 day). The default value is 60.
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
    // - **SRV**: Specifies the server for a specific service. The format is: Priority Weight Port Target. Separate each value with a space.
    // 
    // > Before adding a PTR record, configure a reverse lookup zone. For more information, see [Reverse DNS lookups and PTR records](https://help.aliyun.com/document_detail/2592976.html).
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The IP address of the client.
    shared_ptr<string> userClientIp_ {};
    // The record value. Enter a value based on the DNS record type.
    // 
    // This parameter is required.
    shared_ptr<string> value_ {};
    // The weight. Valid values are integers from 1 to 100. The default value is 1. Set different weights for each address to return addresses based on the weight ratio for DNS queries.
    shared_ptr<int32_t> weight_ {};
    // The ID of the zone. This is the unique identifier of the zone.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
