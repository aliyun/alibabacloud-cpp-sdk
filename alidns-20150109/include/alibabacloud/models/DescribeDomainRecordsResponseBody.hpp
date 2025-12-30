// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINRECORDSRESPONSEBODY_HPP_
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
  class DescribeDomainRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainRecords, domainRecords_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainRecords, domainRecords_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDomainRecordsResponseBody() = default ;
    DescribeDomainRecordsResponseBody(const DescribeDomainRecordsResponseBody &) = default ;
    DescribeDomainRecordsResponseBody(DescribeDomainRecordsResponseBody &&) = default ;
    DescribeDomainRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRecordsResponseBody() = default ;
    DescribeDomainRecordsResponseBody& operator=(const DescribeDomainRecordsResponseBody &) = default ;
    DescribeDomainRecordsResponseBody& operator=(DescribeDomainRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainRecords& obj) { 
        DARABONBA_PTR_TO_JSON(Record, record_);
      };
      friend void from_json(const Darabonba::Json& j, DomainRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(Record, record_);
      };
      DomainRecords() = default ;
      DomainRecords(const DomainRecords &) = default ;
      DomainRecords(DomainRecords &&) = default ;
      DomainRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainRecords() = default ;
      DomainRecords& operator=(const DomainRecords &) = default ;
      DomainRecords& operator=(DomainRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Record : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Record& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(LbaStatus, lbaStatus_);
          DARABONBA_PTR_TO_JSON(Line, line_);
          DARABONBA_PTR_TO_JSON(Locked, locked_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(RR, RR_);
          DARABONBA_PTR_TO_JSON(RecordId, recordId_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TTL, TTL_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, Record& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(LbaStatus, lbaStatus_);
          DARABONBA_PTR_FROM_JSON(Line, line_);
          DARABONBA_PTR_FROM_JSON(Locked, locked_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(RR, RR_);
          DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TTL, TTL_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        Record() = default ;
        Record(const Record &) = default ;
        Record(Record &&) = default ;
        Record(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Record() = default ;
        Record& operator=(const Record &) = default ;
        Record& operator=(Record &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTimestamp_ == nullptr
        && this->domainName_ == nullptr && this->lbaStatus_ == nullptr && this->line_ == nullptr && this->locked_ == nullptr && this->priority_ == nullptr
        && this->RR_ == nullptr && this->recordId_ == nullptr && this->remark_ == nullptr && this->status_ == nullptr && this->TTL_ == nullptr
        && this->type_ == nullptr && this->updateTimestamp_ == nullptr && this->value_ == nullptr && this->weight_ == nullptr; };
        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline Record& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline Record& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // lbaStatus Field Functions 
        bool hasLbaStatus() const { return this->lbaStatus_ != nullptr;};
        void deleteLbaStatus() { this->lbaStatus_ = nullptr;};
        inline bool getLbaStatus() const { DARABONBA_PTR_GET_DEFAULT(lbaStatus_, false) };
        inline Record& setLbaStatus(bool lbaStatus) { DARABONBA_PTR_SET_VALUE(lbaStatus_, lbaStatus) };


        // line Field Functions 
        bool hasLine() const { return this->line_ != nullptr;};
        void deleteLine() { this->line_ = nullptr;};
        inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
        inline Record& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


        // locked Field Functions 
        bool hasLocked() const { return this->locked_ != nullptr;};
        void deleteLocked() { this->locked_ = nullptr;};
        inline bool getLocked() const { DARABONBA_PTR_GET_DEFAULT(locked_, false) };
        inline Record& setLocked(bool locked) { DARABONBA_PTR_SET_VALUE(locked_, locked) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
        inline Record& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // RR Field Functions 
        bool hasRR() const { return this->RR_ != nullptr;};
        void deleteRR() { this->RR_ = nullptr;};
        inline string getRR() const { DARABONBA_PTR_GET_DEFAULT(RR_, "") };
        inline Record& setRR(string RR) { DARABONBA_PTR_SET_VALUE(RR_, RR) };


        // recordId Field Functions 
        bool hasRecordId() const { return this->recordId_ != nullptr;};
        void deleteRecordId() { this->recordId_ = nullptr;};
        inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
        inline Record& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline Record& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Record& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // TTL Field Functions 
        bool hasTTL() const { return this->TTL_ != nullptr;};
        void deleteTTL() { this->TTL_ = nullptr;};
        inline int64_t getTTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, 0L) };
        inline Record& setTTL(int64_t TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Record& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // updateTimestamp Field Functions 
        bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
        void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
        inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
        inline Record& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Record& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline Record& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The time when the DNS record was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since 00:00:00 UTC on January 1, 1970.
        shared_ptr<int64_t> createTimestamp_ {};
        // The domain name.
        shared_ptr<string> domainName_ {};
        shared_ptr<bool> lbaStatus_ {};
        // The resolution line.
        shared_ptr<string> line_ {};
        // Indicates whether the DNS record is locked.
        shared_ptr<bool> locked_ {};
        // The priority of the mail exchanger (MX) record.
        shared_ptr<int64_t> priority_ {};
        // The hostname.
        shared_ptr<string> RR_ {};
        // The ID of the DNS record.
        shared_ptr<string> recordId_ {};
        // The description of the DNS record.
        shared_ptr<string> remark_ {};
        // The status of the DNS record.
        shared_ptr<string> status_ {};
        // The time-to-live (TTL) of the cached DNS record. Unit: seconds.
        shared_ptr<int64_t> TTL_ {};
        // The type of the DNS record.
        shared_ptr<string> type_ {};
        // The time when the DNS record was updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since 00:00:00 UTC on January 1, 1970.
        shared_ptr<int64_t> updateTimestamp_ {};
        // The record value.
        shared_ptr<string> value_ {};
        // The weight of the DNS record.
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->record_ == nullptr; };
      // record Field Functions 
      bool hasRecord() const { return this->record_ != nullptr;};
      void deleteRecord() { this->record_ = nullptr;};
      inline const vector<DomainRecords::Record> & getRecord() const { DARABONBA_PTR_GET_CONST(record_, vector<DomainRecords::Record>) };
      inline vector<DomainRecords::Record> getRecord() { DARABONBA_PTR_GET(record_, vector<DomainRecords::Record>) };
      inline DomainRecords& setRecord(const vector<DomainRecords::Record> & record) { DARABONBA_PTR_SET_VALUE(record_, record) };
      inline DomainRecords& setRecord(vector<DomainRecords::Record> && record) { DARABONBA_PTR_SET_RVALUE(record_, record) };


    protected:
      shared_ptr<vector<DomainRecords::Record>> record_ {};
    };

    virtual bool empty() const override { return this->domainRecords_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // domainRecords Field Functions 
    bool hasDomainRecords() const { return this->domainRecords_ != nullptr;};
    void deleteDomainRecords() { this->domainRecords_ = nullptr;};
    inline const DescribeDomainRecordsResponseBody::DomainRecords & getDomainRecords() const { DARABONBA_PTR_GET_CONST(domainRecords_, DescribeDomainRecordsResponseBody::DomainRecords) };
    inline DescribeDomainRecordsResponseBody::DomainRecords getDomainRecords() { DARABONBA_PTR_GET(domainRecords_, DescribeDomainRecordsResponseBody::DomainRecords) };
    inline DescribeDomainRecordsResponseBody& setDomainRecords(const DescribeDomainRecordsResponseBody::DomainRecords & domainRecords) { DARABONBA_PTR_SET_VALUE(domainRecords_, domainRecords) };
    inline DescribeDomainRecordsResponseBody& setDomainRecords(DescribeDomainRecordsResponseBody::DomainRecords && domainRecords) { DARABONBA_PTR_SET_RVALUE(domainRecords_, domainRecords) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDomainRecordsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDomainRecordsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDomainRecordsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned Domain Name System (DNS) records.
    shared_ptr<DescribeDomainRecordsResponseBody::DomainRecords> domainRecords_ {};
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
