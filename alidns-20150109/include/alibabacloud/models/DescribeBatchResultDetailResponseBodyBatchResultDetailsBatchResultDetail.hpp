// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBATCHRESULTDETAILRESPONSEBODYBATCHRESULTDETAILSBATCHRESULTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBATCHRESULTDETAILRESPONSEBODYBATCHRESULTDETAILSBATCHRESULTDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& obj) { 
      DARABONBA_PTR_TO_JSON(BatchType, batchType_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Line, line_);
      DARABONBA_PTR_TO_JSON(NewRr, newRr_);
      DARABONBA_PTR_TO_JSON(NewValue, newValue_);
      DARABONBA_PTR_TO_JSON(OperateDateStr, operateDateStr_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Rr, rr_);
      DARABONBA_PTR_TO_JSON(RrStatus, rrStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchType, batchType_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Line, line_);
      DARABONBA_PTR_FROM_JSON(NewRr, newRr_);
      DARABONBA_PTR_FROM_JSON(NewValue, newValue_);
      DARABONBA_PTR_FROM_JSON(OperateDateStr, operateDateStr_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Rr, rr_);
      DARABONBA_PTR_FROM_JSON(RrStatus, rrStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail() = default ;
    DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail(const DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail &) = default ;
    DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail(DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail &&) = default ;
    DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail() = default ;
    DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& operator=(const DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail &) = default ;
    DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& operator=(DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchType_ != nullptr
        && this->domain_ != nullptr && this->line_ != nullptr && this->newRr_ != nullptr && this->newValue_ != nullptr && this->operateDateStr_ != nullptr
        && this->priority_ != nullptr && this->reason_ != nullptr && this->recordId_ != nullptr && this->remark_ != nullptr && this->rr_ != nullptr
        && this->rrStatus_ != nullptr && this->status_ != nullptr && this->ttl_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // batchType Field Functions 
    bool hasBatchType() const { return this->batchType_ != nullptr;};
    void deleteBatchType() { this->batchType_ = nullptr;};
    inline string batchType() const { DARABONBA_PTR_GET_DEFAULT(batchType_, "") };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& setBatchType(string batchType) { DARABONBA_PTR_SET_VALUE(batchType_, batchType) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string line() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    // newRr Field Functions 
    bool hasNewRr() const { return this->newRr_ != nullptr;};
    void deleteNewRr() { this->newRr_ = nullptr;};
    inline string newRr() const { DARABONBA_PTR_GET_DEFAULT(newRr_, "") };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& setNewRr(string newRr) { DARABONBA_PTR_SET_VALUE(newRr_, newRr) };


    // newValue Field Functions 
    bool hasNewValue() const { return this->newValue_ != nullptr;};
    void deleteNewValue() { this->newValue_ = nullptr;};
    inline string newValue() const { DARABONBA_PTR_GET_DEFAULT(newValue_, "") };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& setNewValue(string newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };


    // operateDateStr Field Functions 
    bool hasOperateDateStr() const { return this->operateDateStr_ != nullptr;};
    void deleteOperateDateStr() { this->operateDateStr_ = nullptr;};
    inline string operateDateStr() const { DARABONBA_PTR_GET_DEFAULT(operateDateStr_, "") };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& setOperateDateStr(string operateDateStr) { DARABONBA_PTR_SET_VALUE(operateDateStr_, operateDateStr) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // rr Field Functions 
    bool hasRr() const { return this->rr_ != nullptr;};
    void deleteRr() { this->rr_ = nullptr;};
    inline string rr() const { DARABONBA_PTR_GET_DEFAULT(rr_, "") };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& setRr(string rr) { DARABONBA_PTR_SET_VALUE(rr_, rr) };


    // rrStatus Field Functions 
    bool hasRrStatus() const { return this->rrStatus_ != nullptr;};
    void deleteRrStatus() { this->rrStatus_ = nullptr;};
    inline string rrStatus() const { DARABONBA_PTR_GET_DEFAULT(rrStatus_, "") };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& setRrStatus(string rrStatus) { DARABONBA_PTR_SET_VALUE(rrStatus_, rrStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline string ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, "") };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& setTtl(string ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The type of the batch operation.
    std::shared_ptr<string> batchType_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The line code.
    std::shared_ptr<string> line_ = nullptr;
    // The new hostname.
    std::shared_ptr<string> newRr_ = nullptr;
    // The new record value.
    std::shared_ptr<string> newValue_ = nullptr;
    // The time when the operation was performed. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> operateDateStr_ = nullptr;
    // The priority of the mail exchanger (MX) record.
    std::shared_ptr<string> priority_ = nullptr;
    // The cause of the execution failure.
    std::shared_ptr<string> reason_ = nullptr;
    // The ID of the DNS record.
    std::shared_ptr<string> recordId_ = nullptr;
    // The description of the DNS record.
    std::shared_ptr<string> remark_ = nullptr;
    // The hostname.
    std::shared_ptr<string> rr_ = nullptr;
    // The status of the DNS record.
    std::shared_ptr<string> rrStatus_ = nullptr;
    // The execution result of the batch operation. Valid values: **true**: The operation succeeded. **false**: The operation failed.
    std::shared_ptr<bool> status_ = nullptr;
    // The time-to-live (TTL) of the DNS record.
    std::shared_ptr<string> ttl_ = nullptr;
    // The type of the DNS record.
    std::shared_ptr<string> type_ = nullptr;
    // The value of the DNS record.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
