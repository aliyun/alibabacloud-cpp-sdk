// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINRECORDINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINRECORDINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainRecordInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRecordInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Line, line_);
      DARABONBA_PTR_TO_JSON(Locked, locked_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(PunyCode, punyCode_);
      DARABONBA_PTR_TO_JSON(RR, RR_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TTL, TTL_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRecordInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Line, line_);
      DARABONBA_PTR_FROM_JSON(Locked, locked_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(PunyCode, punyCode_);
      DARABONBA_PTR_FROM_JSON(RR, RR_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TTL, TTL_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDomainRecordInfoResponseBody() = default ;
    DescribeDomainRecordInfoResponseBody(const DescribeDomainRecordInfoResponseBody &) = default ;
    DescribeDomainRecordInfoResponseBody(DescribeDomainRecordInfoResponseBody &&) = default ;
    DescribeDomainRecordInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRecordInfoResponseBody() = default ;
    DescribeDomainRecordInfoResponseBody& operator=(const DescribeDomainRecordInfoResponseBody &) = default ;
    DescribeDomainRecordInfoResponseBody& operator=(DescribeDomainRecordInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainId_ != nullptr
        && this->domainName_ != nullptr && this->groupId_ != nullptr && this->groupName_ != nullptr && this->line_ != nullptr && this->locked_ != nullptr
        && this->priority_ != nullptr && this->punyCode_ != nullptr && this->RR_ != nullptr && this->recordId_ != nullptr && this->remark_ != nullptr
        && this->requestId_ != nullptr && this->status_ != nullptr && this->TTL_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline DescribeDomainRecordInfoResponseBody& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainRecordInfoResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDomainRecordInfoResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeDomainRecordInfoResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string line() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline DescribeDomainRecordInfoResponseBody& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    // locked Field Functions 
    bool hasLocked() const { return this->locked_ != nullptr;};
    void deleteLocked() { this->locked_ = nullptr;};
    inline bool locked() const { DARABONBA_PTR_GET_DEFAULT(locked_, false) };
    inline DescribeDomainRecordInfoResponseBody& setLocked(bool locked) { DARABONBA_PTR_SET_VALUE(locked_, locked) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline DescribeDomainRecordInfoResponseBody& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // punyCode Field Functions 
    bool hasPunyCode() const { return this->punyCode_ != nullptr;};
    void deletePunyCode() { this->punyCode_ = nullptr;};
    inline string punyCode() const { DARABONBA_PTR_GET_DEFAULT(punyCode_, "") };
    inline DescribeDomainRecordInfoResponseBody& setPunyCode(string punyCode) { DARABONBA_PTR_SET_VALUE(punyCode_, punyCode) };


    // RR Field Functions 
    bool hasRR() const { return this->RR_ != nullptr;};
    void deleteRR() { this->RR_ = nullptr;};
    inline string RR() const { DARABONBA_PTR_GET_DEFAULT(RR_, "") };
    inline DescribeDomainRecordInfoResponseBody& setRR(string RR) { DARABONBA_PTR_SET_VALUE(RR_, RR) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline DescribeDomainRecordInfoResponseBody& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeDomainRecordInfoResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainRecordInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDomainRecordInfoResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // TTL Field Functions 
    bool hasTTL() const { return this->TTL_ != nullptr;};
    void deleteTTL() { this->TTL_ = nullptr;};
    inline int64_t TTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, 0L) };
    inline DescribeDomainRecordInfoResponseBody& setTTL(int64_t TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDomainRecordInfoResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDomainRecordInfoResponseBody& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The ID of the domain name.
    std::shared_ptr<string> domainId_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the domain name group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the domain name group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The DNS resolution line.
    std::shared_ptr<string> line_ = nullptr;
    // The lock state of the DNS record. Valid values: **true and false**.
    std::shared_ptr<bool> locked_ = nullptr;
    // The priority of the mail exchanger (MX) record.
    std::shared_ptr<int64_t> priority_ = nullptr;
    // The Punycode for the domain name. This parameter is returned only for Chinese domain names.
    std::shared_ptr<string> punyCode_ = nullptr;
    // The hostname.
    std::shared_ptr<string> RR_ = nullptr;
    // The ID of the DNS record.
    std::shared_ptr<string> recordId_ = nullptr;
    // The description of your DNS record.
    std::shared_ptr<string> remark_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the DNS record. Valid values:
    // 
    // Enable: enabled
    // 
    // Disable: disabled
    std::shared_ptr<string> status_ = nullptr;
    // The time for which the DNS record is cached in a local DNS system.
    std::shared_ptr<int64_t> TTL_ = nullptr;
    // The type of the DNS record.
    std::shared_ptr<string> type_ = nullptr;
    // The record value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
