// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBATCHRESULTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBATCHRESULTDETAILRESPONSEBODY_HPP_
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
  class DescribeBatchResultDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBatchResultDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BatchResultDetails, batchResultDetails_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBatchResultDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchResultDetails, batchResultDetails_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBatchResultDetailResponseBody() = default ;
    DescribeBatchResultDetailResponseBody(const DescribeBatchResultDetailResponseBody &) = default ;
    DescribeBatchResultDetailResponseBody(DescribeBatchResultDetailResponseBody &&) = default ;
    DescribeBatchResultDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBatchResultDetailResponseBody() = default ;
    DescribeBatchResultDetailResponseBody& operator=(const DescribeBatchResultDetailResponseBody &) = default ;
    DescribeBatchResultDetailResponseBody& operator=(DescribeBatchResultDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BatchResultDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BatchResultDetails& obj) { 
        DARABONBA_PTR_TO_JSON(BatchResultDetail, batchResultDetail_);
      };
      friend void from_json(const Darabonba::Json& j, BatchResultDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(BatchResultDetail, batchResultDetail_);
      };
      BatchResultDetails() = default ;
      BatchResultDetails(const BatchResultDetails &) = default ;
      BatchResultDetails(BatchResultDetails &&) = default ;
      BatchResultDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BatchResultDetails() = default ;
      BatchResultDetails& operator=(const BatchResultDetails &) = default ;
      BatchResultDetails& operator=(BatchResultDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BatchResultDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BatchResultDetail& obj) { 
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
        friend void from_json(const Darabonba::Json& j, BatchResultDetail& obj) { 
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
        BatchResultDetail() = default ;
        BatchResultDetail(const BatchResultDetail &) = default ;
        BatchResultDetail(BatchResultDetail &&) = default ;
        BatchResultDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BatchResultDetail() = default ;
        BatchResultDetail& operator=(const BatchResultDetail &) = default ;
        BatchResultDetail& operator=(BatchResultDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->batchType_ == nullptr
        && this->domain_ == nullptr && this->line_ == nullptr && this->newRr_ == nullptr && this->newValue_ == nullptr && this->operateDateStr_ == nullptr
        && this->priority_ == nullptr && this->reason_ == nullptr && this->recordId_ == nullptr && this->remark_ == nullptr && this->rr_ == nullptr
        && this->rrStatus_ == nullptr && this->status_ == nullptr && this->ttl_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // batchType Field Functions 
        bool hasBatchType() const { return this->batchType_ != nullptr;};
        void deleteBatchType() { this->batchType_ = nullptr;};
        inline string getBatchType() const { DARABONBA_PTR_GET_DEFAULT(batchType_, "") };
        inline BatchResultDetail& setBatchType(string batchType) { DARABONBA_PTR_SET_VALUE(batchType_, batchType) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline BatchResultDetail& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // line Field Functions 
        bool hasLine() const { return this->line_ != nullptr;};
        void deleteLine() { this->line_ = nullptr;};
        inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
        inline BatchResultDetail& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


        // newRr Field Functions 
        bool hasNewRr() const { return this->newRr_ != nullptr;};
        void deleteNewRr() { this->newRr_ = nullptr;};
        inline string getNewRr() const { DARABONBA_PTR_GET_DEFAULT(newRr_, "") };
        inline BatchResultDetail& setNewRr(string newRr) { DARABONBA_PTR_SET_VALUE(newRr_, newRr) };


        // newValue Field Functions 
        bool hasNewValue() const { return this->newValue_ != nullptr;};
        void deleteNewValue() { this->newValue_ = nullptr;};
        inline string getNewValue() const { DARABONBA_PTR_GET_DEFAULT(newValue_, "") };
        inline BatchResultDetail& setNewValue(string newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };


        // operateDateStr Field Functions 
        bool hasOperateDateStr() const { return this->operateDateStr_ != nullptr;};
        void deleteOperateDateStr() { this->operateDateStr_ = nullptr;};
        inline string getOperateDateStr() const { DARABONBA_PTR_GET_DEFAULT(operateDateStr_, "") };
        inline BatchResultDetail& setOperateDateStr(string operateDateStr) { DARABONBA_PTR_SET_VALUE(operateDateStr_, operateDateStr) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
        inline BatchResultDetail& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline BatchResultDetail& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // recordId Field Functions 
        bool hasRecordId() const { return this->recordId_ != nullptr;};
        void deleteRecordId() { this->recordId_ = nullptr;};
        inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
        inline BatchResultDetail& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline BatchResultDetail& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // rr Field Functions 
        bool hasRr() const { return this->rr_ != nullptr;};
        void deleteRr() { this->rr_ = nullptr;};
        inline string getRr() const { DARABONBA_PTR_GET_DEFAULT(rr_, "") };
        inline BatchResultDetail& setRr(string rr) { DARABONBA_PTR_SET_VALUE(rr_, rr) };


        // rrStatus Field Functions 
        bool hasRrStatus() const { return this->rrStatus_ != nullptr;};
        void deleteRrStatus() { this->rrStatus_ = nullptr;};
        inline string getRrStatus() const { DARABONBA_PTR_GET_DEFAULT(rrStatus_, "") };
        inline BatchResultDetail& setRrStatus(string rrStatus) { DARABONBA_PTR_SET_VALUE(rrStatus_, rrStatus) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
        inline BatchResultDetail& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // ttl Field Functions 
        bool hasTtl() const { return this->ttl_ != nullptr;};
        void deleteTtl() { this->ttl_ = nullptr;};
        inline string getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, "") };
        inline BatchResultDetail& setTtl(string ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline BatchResultDetail& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline BatchResultDetail& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The type of the batch operation.
        shared_ptr<string> batchType_ {};
        // The domain name.
        shared_ptr<string> domain_ {};
        // The line code.
        shared_ptr<string> line_ {};
        // The new hostname.
        shared_ptr<string> newRr_ {};
        // The new record value.
        shared_ptr<string> newValue_ {};
        // The time when the operation was performed. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
        shared_ptr<string> operateDateStr_ {};
        // The priority of the mail exchanger (MX) record.
        shared_ptr<string> priority_ {};
        // The cause of the execution failure.
        shared_ptr<string> reason_ {};
        // The ID of the DNS record.
        shared_ptr<string> recordId_ {};
        // The description of the DNS record.
        shared_ptr<string> remark_ {};
        // The hostname.
        shared_ptr<string> rr_ {};
        // The status of the DNS record.
        shared_ptr<string> rrStatus_ {};
        // The execution result of the batch operation. Valid values: **true**: The operation succeeded. **false**: The operation failed.
        shared_ptr<bool> status_ {};
        // The time-to-live (TTL) of the DNS record.
        shared_ptr<string> ttl_ {};
        // The type of the DNS record.
        shared_ptr<string> type_ {};
        // The value of the DNS record.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->batchResultDetail_ == nullptr; };
      // batchResultDetail Field Functions 
      bool hasBatchResultDetail() const { return this->batchResultDetail_ != nullptr;};
      void deleteBatchResultDetail() { this->batchResultDetail_ = nullptr;};
      inline const vector<BatchResultDetails::BatchResultDetail> & getBatchResultDetail() const { DARABONBA_PTR_GET_CONST(batchResultDetail_, vector<BatchResultDetails::BatchResultDetail>) };
      inline vector<BatchResultDetails::BatchResultDetail> getBatchResultDetail() { DARABONBA_PTR_GET(batchResultDetail_, vector<BatchResultDetails::BatchResultDetail>) };
      inline BatchResultDetails& setBatchResultDetail(const vector<BatchResultDetails::BatchResultDetail> & batchResultDetail) { DARABONBA_PTR_SET_VALUE(batchResultDetail_, batchResultDetail) };
      inline BatchResultDetails& setBatchResultDetail(vector<BatchResultDetails::BatchResultDetail> && batchResultDetail) { DARABONBA_PTR_SET_RVALUE(batchResultDetail_, batchResultDetail) };


    protected:
      shared_ptr<vector<BatchResultDetails::BatchResultDetail>> batchResultDetail_ {};
    };

    virtual bool empty() const override { return this->batchResultDetails_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // batchResultDetails Field Functions 
    bool hasBatchResultDetails() const { return this->batchResultDetails_ != nullptr;};
    void deleteBatchResultDetails() { this->batchResultDetails_ = nullptr;};
    inline const DescribeBatchResultDetailResponseBody::BatchResultDetails & getBatchResultDetails() const { DARABONBA_PTR_GET_CONST(batchResultDetails_, DescribeBatchResultDetailResponseBody::BatchResultDetails) };
    inline DescribeBatchResultDetailResponseBody::BatchResultDetails getBatchResultDetails() { DARABONBA_PTR_GET(batchResultDetails_, DescribeBatchResultDetailResponseBody::BatchResultDetails) };
    inline DescribeBatchResultDetailResponseBody& setBatchResultDetails(const DescribeBatchResultDetailResponseBody::BatchResultDetails & batchResultDetails) { DARABONBA_PTR_SET_VALUE(batchResultDetails_, batchResultDetails) };
    inline DescribeBatchResultDetailResponseBody& setBatchResultDetails(DescribeBatchResultDetailResponseBody::BatchResultDetails && batchResultDetails) { DARABONBA_PTR_SET_RVALUE(batchResultDetails_, batchResultDetails) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeBatchResultDetailResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeBatchResultDetailResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBatchResultDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeBatchResultDetailResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The detailed results of the batch operation.
    shared_ptr<DescribeBatchResultDetailResponseBody::BatchResultDetails> batchResultDetails_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
