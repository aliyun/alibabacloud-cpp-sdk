// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEADVICESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEADVICESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAvailableAdvicesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableAdvicesResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeAvailableAdvicesResponseBodyItems& obj) { 
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
    DescribeAvailableAdvicesResponseBodyItems() = default ;
    DescribeAvailableAdvicesResponseBodyItems(const DescribeAvailableAdvicesResponseBodyItems &) = default ;
    DescribeAvailableAdvicesResponseBodyItems(DescribeAvailableAdvicesResponseBodyItems &&) = default ;
    DescribeAvailableAdvicesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableAdvicesResponseBodyItems() = default ;
    DescribeAvailableAdvicesResponseBodyItems& operator=(const DescribeAvailableAdvicesResponseBodyItems &) = default ;
    DescribeAvailableAdvicesResponseBodyItems& operator=(DescribeAvailableAdvicesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adviceDate_ != nullptr
        && this->adviceId_ != nullptr && this->adviceType_ != nullptr && this->benefit_ != nullptr && this->indexFields_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->reason_ != nullptr && this->SQL_ != nullptr && this->schemaName_ != nullptr && this->tableName_ != nullptr
        && this->totalCount_ != nullptr; };
    // adviceDate Field Functions 
    bool hasAdviceDate() const { return this->adviceDate_ != nullptr;};
    void deleteAdviceDate() { this->adviceDate_ = nullptr;};
    inline string adviceDate() const { DARABONBA_PTR_GET_DEFAULT(adviceDate_, "") };
    inline DescribeAvailableAdvicesResponseBodyItems& setAdviceDate(string adviceDate) { DARABONBA_PTR_SET_VALUE(adviceDate_, adviceDate) };


    // adviceId Field Functions 
    bool hasAdviceId() const { return this->adviceId_ != nullptr;};
    void deleteAdviceId() { this->adviceId_ = nullptr;};
    inline string adviceId() const { DARABONBA_PTR_GET_DEFAULT(adviceId_, "") };
    inline DescribeAvailableAdvicesResponseBodyItems& setAdviceId(string adviceId) { DARABONBA_PTR_SET_VALUE(adviceId_, adviceId) };


    // adviceType Field Functions 
    bool hasAdviceType() const { return this->adviceType_ != nullptr;};
    void deleteAdviceType() { this->adviceType_ = nullptr;};
    inline string adviceType() const { DARABONBA_PTR_GET_DEFAULT(adviceType_, "") };
    inline DescribeAvailableAdvicesResponseBodyItems& setAdviceType(string adviceType) { DARABONBA_PTR_SET_VALUE(adviceType_, adviceType) };


    // benefit Field Functions 
    bool hasBenefit() const { return this->benefit_ != nullptr;};
    void deleteBenefit() { this->benefit_ = nullptr;};
    inline string benefit() const { DARABONBA_PTR_GET_DEFAULT(benefit_, "") };
    inline DescribeAvailableAdvicesResponseBodyItems& setBenefit(string benefit) { DARABONBA_PTR_SET_VALUE(benefit_, benefit) };


    // indexFields Field Functions 
    bool hasIndexFields() const { return this->indexFields_ != nullptr;};
    void deleteIndexFields() { this->indexFields_ = nullptr;};
    inline string indexFields() const { DARABONBA_PTR_GET_DEFAULT(indexFields_, "") };
    inline DescribeAvailableAdvicesResponseBodyItems& setIndexFields(string indexFields) { DARABONBA_PTR_SET_VALUE(indexFields_, indexFields) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeAvailableAdvicesResponseBodyItems& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeAvailableAdvicesResponseBodyItems& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeAvailableAdvicesResponseBodyItems& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // SQL Field Functions 
    bool hasSQL() const { return this->SQL_ != nullptr;};
    void deleteSQL() { this->SQL_ = nullptr;};
    inline string SQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
    inline DescribeAvailableAdvicesResponseBodyItems& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeAvailableAdvicesResponseBodyItems& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeAvailableAdvicesResponseBodyItems& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAvailableAdvicesResponseBodyItems& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The date when the suggestion is generated. The date is in the yyyyMMdd format.
    std::shared_ptr<string> adviceDate_ = nullptr;
    // The suggestion ID.
    std::shared_ptr<string> adviceId_ = nullptr;
    // The type of the suggestion. Valid values:
    // 
    // *   **INDEX**: index optimization.
    // *   **TIERING**: hot and cold data optimization.
    std::shared_ptr<string> adviceType_ = nullptr;
    // The benefit of the suggestion.
    std::shared_ptr<string> benefit_ = nullptr;
    std::shared_ptr<string> indexFields_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The reason why the suggestion was generated.
    std::shared_ptr<string> reason_ = nullptr;
    // The SQL statement that is used to apply the suggestion.
    std::shared_ptr<string> SQL_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
