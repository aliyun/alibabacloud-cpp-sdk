// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRECURSIONRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRECURSIONRECORDSRESPONSEBODY_HPP_
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
  class SearchRecursionRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRecursionRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRecursionRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    SearchRecursionRecordsResponseBody() = default ;
    SearchRecursionRecordsResponseBody(const SearchRecursionRecordsResponseBody &) = default ;
    SearchRecursionRecordsResponseBody(SearchRecursionRecordsResponseBody &&) = default ;
    SearchRecursionRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRecursionRecordsResponseBody() = default ;
    SearchRecursionRecordsResponseBody& operator=(const SearchRecursionRecordsResponseBody &) = default ;
    SearchRecursionRecordsResponseBody& operator=(SearchRecursionRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(Record, record_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(Record, record_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Record : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Record& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(CreatorSubType, creatorSubType_);
          DARABONBA_PTR_TO_JSON(CreatorType, creatorType_);
          DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(RecordId, recordId_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(RequestSource, requestSource_);
          DARABONBA_PTR_TO_JSON(Rr, rr_);
          DARABONBA_PTR_TO_JSON(Ttl, ttl_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Record& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(CreatorSubType, creatorSubType_);
          DARABONBA_PTR_FROM_JSON(CreatorType, creatorType_);
          DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(RequestSource, requestSource_);
          DARABONBA_PTR_FROM_JSON(Rr, rr_);
          DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->creator_ == nullptr && this->creatorSubType_ == nullptr && this->creatorType_ == nullptr && this->enableStatus_ == nullptr
        && this->priority_ == nullptr && this->recordId_ == nullptr && this->remark_ == nullptr && this->requestSource_ == nullptr && this->rr_ == nullptr
        && this->ttl_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr && this->value_ == nullptr
        && this->weight_ == nullptr && this->zoneId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Record& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline Record& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline int64_t getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, 0L) };
        inline Record& setCreator(int64_t creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // creatorSubType Field Functions 
        bool hasCreatorSubType() const { return this->creatorSubType_ != nullptr;};
        void deleteCreatorSubType() { this->creatorSubType_ = nullptr;};
        inline string getCreatorSubType() const { DARABONBA_PTR_GET_DEFAULT(creatorSubType_, "") };
        inline Record& setCreatorSubType(string creatorSubType) { DARABONBA_PTR_SET_VALUE(creatorSubType_, creatorSubType) };


        // creatorType Field Functions 
        bool hasCreatorType() const { return this->creatorType_ != nullptr;};
        void deleteCreatorType() { this->creatorType_ = nullptr;};
        inline string getCreatorType() const { DARABONBA_PTR_GET_DEFAULT(creatorType_, "") };
        inline Record& setCreatorType(string creatorType) { DARABONBA_PTR_SET_VALUE(creatorType_, creatorType) };


        // enableStatus Field Functions 
        bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
        void deleteEnableStatus() { this->enableStatus_ = nullptr;};
        inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
        inline Record& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline Record& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


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


        // requestSource Field Functions 
        bool hasRequestSource() const { return this->requestSource_ != nullptr;};
        void deleteRequestSource() { this->requestSource_ = nullptr;};
        inline string getRequestSource() const { DARABONBA_PTR_GET_DEFAULT(requestSource_, "") };
        inline Record& setRequestSource(string requestSource) { DARABONBA_PTR_SET_VALUE(requestSource_, requestSource) };


        // rr Field Functions 
        bool hasRr() const { return this->rr_ != nullptr;};
        void deleteRr() { this->rr_ = nullptr;};
        inline string getRr() const { DARABONBA_PTR_GET_DEFAULT(rr_, "") };
        inline Record& setRr(string rr) { DARABONBA_PTR_SET_VALUE(rr_, rr) };


        // ttl Field Functions 
        bool hasTtl() const { return this->ttl_ != nullptr;};
        void deleteTtl() { this->ttl_ = nullptr;};
        inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
        inline Record& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Record& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Record& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


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
        inline string getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
        inline Record& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Record& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<int64_t> createTimestamp_ {};
        shared_ptr<int64_t> creator_ {};
        shared_ptr<string> creatorSubType_ {};
        shared_ptr<string> creatorType_ {};
        shared_ptr<string> enableStatus_ {};
        shared_ptr<int32_t> priority_ {};
        // record ID
        shared_ptr<string> recordId_ {};
        shared_ptr<string> remark_ {};
        shared_ptr<string> requestSource_ {};
        shared_ptr<string> rr_ {};
        shared_ptr<int32_t> ttl_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> updateTime_ {};
        shared_ptr<int64_t> updateTimestamp_ {};
        shared_ptr<string> value_ {};
        shared_ptr<string> weight_ {};
        // zone ID
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->record_ == nullptr; };
      // record Field Functions 
      bool hasRecord() const { return this->record_ != nullptr;};
      void deleteRecord() { this->record_ = nullptr;};
      inline const vector<Records::Record> & getRecord() const { DARABONBA_PTR_GET_CONST(record_, vector<Records::Record>) };
      inline vector<Records::Record> getRecord() { DARABONBA_PTR_GET(record_, vector<Records::Record>) };
      inline Records& setRecord(const vector<Records::Record> & record) { DARABONBA_PTR_SET_VALUE(record_, record) };
      inline Records& setRecord(vector<Records::Record> && record) { DARABONBA_PTR_SET_RVALUE(record_, record) };


    protected:
      shared_ptr<vector<Records::Record>> record_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->records_ == nullptr && this->requestId_ == nullptr
        && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SearchRecursionRecordsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchRecursionRecordsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchRecursionRecordsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchRecursionRecordsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const SearchRecursionRecordsResponseBody::Records & getRecords() const { DARABONBA_PTR_GET_CONST(records_, SearchRecursionRecordsResponseBody::Records) };
    inline SearchRecursionRecordsResponseBody::Records getRecords() { DARABONBA_PTR_GET(records_, SearchRecursionRecordsResponseBody::Records) };
    inline SearchRecursionRecordsResponseBody& setRecords(const SearchRecursionRecordsResponseBody::Records & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline SearchRecursionRecordsResponseBody& setRecords(SearchRecursionRecordsResponseBody::Records && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchRecursionRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline SearchRecursionRecordsResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline SearchRecursionRecordsResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<SearchRecursionRecordsResponseBody::Records> records_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalItems_ {};
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
