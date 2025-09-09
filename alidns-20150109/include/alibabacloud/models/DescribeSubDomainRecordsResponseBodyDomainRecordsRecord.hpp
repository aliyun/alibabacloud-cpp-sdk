// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBDOMAINRECORDSRESPONSEBODYDOMAINRECORDSRECORD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBDOMAINRECORDSRESPONSEBODYDOMAINRECORDSRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeSubDomainRecordsResponseBodyDomainRecordsRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubDomainRecordsResponseBodyDomainRecordsRecord& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Line, line_);
      DARABONBA_PTR_TO_JSON(Locked, locked_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RR, RR_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TTL, TTL_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubDomainRecordsResponseBodyDomainRecordsRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Line, line_);
      DARABONBA_PTR_FROM_JSON(Locked, locked_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RR, RR_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TTL, TTL_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    DescribeSubDomainRecordsResponseBodyDomainRecordsRecord() = default ;
    DescribeSubDomainRecordsResponseBodyDomainRecordsRecord(const DescribeSubDomainRecordsResponseBodyDomainRecordsRecord &) = default ;
    DescribeSubDomainRecordsResponseBodyDomainRecordsRecord(DescribeSubDomainRecordsResponseBodyDomainRecordsRecord &&) = default ;
    DescribeSubDomainRecordsResponseBodyDomainRecordsRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubDomainRecordsResponseBodyDomainRecordsRecord() = default ;
    DescribeSubDomainRecordsResponseBodyDomainRecordsRecord& operator=(const DescribeSubDomainRecordsResponseBodyDomainRecordsRecord &) = default ;
    DescribeSubDomainRecordsResponseBodyDomainRecordsRecord& operator=(DescribeSubDomainRecordsResponseBodyDomainRecordsRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->line_ != nullptr && this->locked_ != nullptr && this->priority_ != nullptr && this->RR_ != nullptr && this->recordId_ != nullptr
        && this->remark_ != nullptr && this->status_ != nullptr && this->TTL_ != nullptr && this->type_ != nullptr && this->value_ != nullptr
        && this->weight_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeSubDomainRecordsResponseBodyDomainRecordsRecord& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string line() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline DescribeSubDomainRecordsResponseBodyDomainRecordsRecord& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    // locked Field Functions 
    bool hasLocked() const { return this->locked_ != nullptr;};
    void deleteLocked() { this->locked_ = nullptr;};
    inline bool locked() const { DARABONBA_PTR_GET_DEFAULT(locked_, false) };
    inline DescribeSubDomainRecordsResponseBodyDomainRecordsRecord& setLocked(bool locked) { DARABONBA_PTR_SET_VALUE(locked_, locked) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline DescribeSubDomainRecordsResponseBodyDomainRecordsRecord& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // RR Field Functions 
    bool hasRR() const { return this->RR_ != nullptr;};
    void deleteRR() { this->RR_ = nullptr;};
    inline string RR() const { DARABONBA_PTR_GET_DEFAULT(RR_, "") };
    inline DescribeSubDomainRecordsResponseBodyDomainRecordsRecord& setRR(string RR) { DARABONBA_PTR_SET_VALUE(RR_, RR) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline DescribeSubDomainRecordsResponseBodyDomainRecordsRecord& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeSubDomainRecordsResponseBodyDomainRecordsRecord& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSubDomainRecordsResponseBodyDomainRecordsRecord& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // TTL Field Functions 
    bool hasTTL() const { return this->TTL_ != nullptr;};
    void deleteTTL() { this->TTL_ = nullptr;};
    inline int64_t TTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, 0L) };
    inline DescribeSubDomainRecordsResponseBodyDomainRecordsRecord& setTTL(int64_t TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSubDomainRecordsResponseBodyDomainRecordsRecord& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeSubDomainRecordsResponseBodyDomainRecordsRecord& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline DescribeSubDomainRecordsResponseBodyDomainRecordsRecord& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The DNS resolution line.
    std::shared_ptr<string> line_ = nullptr;
    // The lock status of the DNS record.
    std::shared_ptr<bool> locked_ = nullptr;
    // The priority of the mail exchanger (MX) record.
    std::shared_ptr<int64_t> priority_ = nullptr;
    // The hostname.
    std::shared_ptr<string> RR_ = nullptr;
    // The ID of the DNS record.
    std::shared_ptr<string> recordId_ = nullptr;
    // The description of the DNS record.
    std::shared_ptr<string> remark_ = nullptr;
    // The status of the DNS record.
    std::shared_ptr<string> status_ = nullptr;
    // The time-to-live (TTL) of the DNS record.
    std::shared_ptr<int64_t> TTL_ = nullptr;
    // The type of the DNS record.
    std::shared_ptr<string> type_ = nullptr;
    // The record value.
    std::shared_ptr<string> value_ = nullptr;
    // The weight of the DNS record.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
