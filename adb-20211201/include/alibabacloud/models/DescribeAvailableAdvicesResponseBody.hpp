// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEADVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEADVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAvailableAdvicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableAdvicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchemaTableNames, schemaTableNames_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableAdvicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchemaTableNames, schemaTableNames_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAvailableAdvicesResponseBody() = default ;
    DescribeAvailableAdvicesResponseBody(const DescribeAvailableAdvicesResponseBody &) = default ;
    DescribeAvailableAdvicesResponseBody(DescribeAvailableAdvicesResponseBody &&) = default ;
    DescribeAvailableAdvicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableAdvicesResponseBody() = default ;
    DescribeAvailableAdvicesResponseBody& operator=(const DescribeAvailableAdvicesResponseBody &) = default ;
    DescribeAvailableAdvicesResponseBody& operator=(DescribeAvailableAdvicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AdviceDate, adviceDate_);
        DARABONBA_PTR_TO_JSON(AdviceId, adviceId_);
        DARABONBA_PTR_TO_JSON(AdviceType, adviceType_);
        DARABONBA_PTR_TO_JSON(Benefit, benefit_);
        DARABONBA_PTR_TO_JSON(IndexFields, indexFields_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(SQL, SQL_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AdviceDate, adviceDate_);
        DARABONBA_PTR_FROM_JSON(AdviceId, adviceId_);
        DARABONBA_PTR_FROM_JSON(AdviceType, adviceType_);
        DARABONBA_PTR_FROM_JSON(Benefit, benefit_);
        DARABONBA_PTR_FROM_JSON(IndexFields, indexFields_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(SQL, SQL_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->adviceDate_ == nullptr
        && this->adviceId_ == nullptr && this->adviceType_ == nullptr && this->benefit_ == nullptr && this->indexFields_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->reason_ == nullptr && this->SQL_ == nullptr && this->schemaName_ == nullptr && this->tableName_ == nullptr
        && this->totalCount_ == nullptr; };
      // adviceDate Field Functions 
      bool hasAdviceDate() const { return this->adviceDate_ != nullptr;};
      void deleteAdviceDate() { this->adviceDate_ = nullptr;};
      inline string getAdviceDate() const { DARABONBA_PTR_GET_DEFAULT(adviceDate_, "") };
      inline Items& setAdviceDate(string adviceDate) { DARABONBA_PTR_SET_VALUE(adviceDate_, adviceDate) };


      // adviceId Field Functions 
      bool hasAdviceId() const { return this->adviceId_ != nullptr;};
      void deleteAdviceId() { this->adviceId_ = nullptr;};
      inline string getAdviceId() const { DARABONBA_PTR_GET_DEFAULT(adviceId_, "") };
      inline Items& setAdviceId(string adviceId) { DARABONBA_PTR_SET_VALUE(adviceId_, adviceId) };


      // adviceType Field Functions 
      bool hasAdviceType() const { return this->adviceType_ != nullptr;};
      void deleteAdviceType() { this->adviceType_ = nullptr;};
      inline string getAdviceType() const { DARABONBA_PTR_GET_DEFAULT(adviceType_, "") };
      inline Items& setAdviceType(string adviceType) { DARABONBA_PTR_SET_VALUE(adviceType_, adviceType) };


      // benefit Field Functions 
      bool hasBenefit() const { return this->benefit_ != nullptr;};
      void deleteBenefit() { this->benefit_ = nullptr;};
      inline string getBenefit() const { DARABONBA_PTR_GET_DEFAULT(benefit_, "") };
      inline Items& setBenefit(string benefit) { DARABONBA_PTR_SET_VALUE(benefit_, benefit) };


      // indexFields Field Functions 
      bool hasIndexFields() const { return this->indexFields_ != nullptr;};
      void deleteIndexFields() { this->indexFields_ = nullptr;};
      inline string getIndexFields() const { DARABONBA_PTR_GET_DEFAULT(indexFields_, "") };
      inline Items& setIndexFields(string indexFields) { DARABONBA_PTR_SET_VALUE(indexFields_, indexFields) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Items& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Items& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Items& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // SQL Field Functions 
      bool hasSQL() const { return this->SQL_ != nullptr;};
      void deleteSQL() { this->SQL_ = nullptr;};
      inline string getSQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
      inline Items& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline Items& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Items& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Items& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The date when the suggestion is generated. The date is in the yyyyMMdd format.
      shared_ptr<string> adviceDate_ {};
      // The suggestion ID.
      shared_ptr<string> adviceId_ {};
      // The type of the suggestion. Valid values:
      // 
      // *   **INDEX**: index optimization.
      // *   **TIERING**: hot and cold data optimization.
      shared_ptr<string> adviceType_ {};
      // The benefit of the suggestion.
      shared_ptr<string> benefit_ {};
      shared_ptr<string> indexFields_ {};
      // The page number. Pages start from page 1. Default value: 1.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries per page. Valid values:
      // 
      // *   **30** (default)
      // *   **50**
      // *   **100**
      shared_ptr<int64_t> pageSize_ {};
      // The reason why the suggestion was generated.
      shared_ptr<string> reason_ {};
      // The SQL statement that is used to apply the suggestion.
      shared_ptr<string> SQL_ {};
      // The name of the database.
      shared_ptr<string> schemaName_ {};
      // The name of the table.
      shared_ptr<string> tableName_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->schemaTableNames_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeAvailableAdvicesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeAvailableAdvicesResponseBody::Items>) };
    inline vector<DescribeAvailableAdvicesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeAvailableAdvicesResponseBody::Items>) };
    inline DescribeAvailableAdvicesResponseBody& setItems(const vector<DescribeAvailableAdvicesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAvailableAdvicesResponseBody& setItems(vector<DescribeAvailableAdvicesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeAvailableAdvicesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeAvailableAdvicesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableAdvicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaTableNames Field Functions 
    bool hasSchemaTableNames() const { return this->schemaTableNames_ != nullptr;};
    void deleteSchemaTableNames() { this->schemaTableNames_ = nullptr;};
    inline const vector<string> & getSchemaTableNames() const { DARABONBA_PTR_GET_CONST(schemaTableNames_, vector<string>) };
    inline vector<string> getSchemaTableNames() { DARABONBA_PTR_GET(schemaTableNames_, vector<string>) };
    inline DescribeAvailableAdvicesResponseBody& setSchemaTableNames(const vector<string> & schemaTableNames) { DARABONBA_PTR_SET_VALUE(schemaTableNames_, schemaTableNames) };
    inline DescribeAvailableAdvicesResponseBody& setSchemaTableNames(vector<string> && schemaTableNames) { DARABONBA_PTR_SET_RVALUE(schemaTableNames_, schemaTableNames) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAvailableAdvicesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried suggestions.
    shared_ptr<vector<DescribeAvailableAdvicesResponseBody::Items>> items_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The name of the table in the DatabaseName.TableName format.
    shared_ptr<vector<string>> schemaTableNames_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
