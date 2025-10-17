// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLIEDADVICESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLIEDADVICESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAppliedAdvicesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppliedAdvicesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(AdviceId, adviceId_);
      DARABONBA_PTR_TO_JSON(Benefit, benefit_);
      DARABONBA_PTR_TO_JSON(BuildSQL, buildSQL_);
      DARABONBA_PTR_TO_JSON(IndexFields, indexFields_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RollbackSQL, rollbackSQL_);
      DARABONBA_PTR_TO_JSON(SQL, SQL_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SubmitStatus, submitStatus_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppliedAdvicesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AdviceId, adviceId_);
      DARABONBA_PTR_FROM_JSON(Benefit, benefit_);
      DARABONBA_PTR_FROM_JSON(BuildSQL, buildSQL_);
      DARABONBA_PTR_FROM_JSON(IndexFields, indexFields_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RollbackSQL, rollbackSQL_);
      DARABONBA_PTR_FROM_JSON(SQL, SQL_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SubmitStatus, submitStatus_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAppliedAdvicesResponseBodyItems() = default ;
    DescribeAppliedAdvicesResponseBodyItems(const DescribeAppliedAdvicesResponseBodyItems &) = default ;
    DescribeAppliedAdvicesResponseBodyItems(DescribeAppliedAdvicesResponseBodyItems &&) = default ;
    DescribeAppliedAdvicesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppliedAdvicesResponseBodyItems() = default ;
    DescribeAppliedAdvicesResponseBodyItems& operator=(const DescribeAppliedAdvicesResponseBodyItems &) = default ;
    DescribeAppliedAdvicesResponseBodyItems& operator=(DescribeAppliedAdvicesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adviceId_ == nullptr
        && return this->benefit_ == nullptr && return this->buildSQL_ == nullptr && return this->indexFields_ == nullptr && return this->jobStatus_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->rollbackSQL_ == nullptr && return this->SQL_ == nullptr && return this->schemaName_ == nullptr && return this->submitStatus_ == nullptr
        && return this->submitTime_ == nullptr && return this->tableName_ == nullptr && return this->totalCount_ == nullptr; };
    // adviceId Field Functions 
    bool hasAdviceId() const { return this->adviceId_ != nullptr;};
    void deleteAdviceId() { this->adviceId_ = nullptr;};
    inline string adviceId() const { DARABONBA_PTR_GET_DEFAULT(adviceId_, "") };
    inline DescribeAppliedAdvicesResponseBodyItems& setAdviceId(string adviceId) { DARABONBA_PTR_SET_VALUE(adviceId_, adviceId) };


    // benefit Field Functions 
    bool hasBenefit() const { return this->benefit_ != nullptr;};
    void deleteBenefit() { this->benefit_ = nullptr;};
    inline string benefit() const { DARABONBA_PTR_GET_DEFAULT(benefit_, "") };
    inline DescribeAppliedAdvicesResponseBodyItems& setBenefit(string benefit) { DARABONBA_PTR_SET_VALUE(benefit_, benefit) };


    // buildSQL Field Functions 
    bool hasBuildSQL() const { return this->buildSQL_ != nullptr;};
    void deleteBuildSQL() { this->buildSQL_ = nullptr;};
    inline string buildSQL() const { DARABONBA_PTR_GET_DEFAULT(buildSQL_, "") };
    inline DescribeAppliedAdvicesResponseBodyItems& setBuildSQL(string buildSQL) { DARABONBA_PTR_SET_VALUE(buildSQL_, buildSQL) };


    // indexFields Field Functions 
    bool hasIndexFields() const { return this->indexFields_ != nullptr;};
    void deleteIndexFields() { this->indexFields_ = nullptr;};
    inline string indexFields() const { DARABONBA_PTR_GET_DEFAULT(indexFields_, "") };
    inline DescribeAppliedAdvicesResponseBodyItems& setIndexFields(string indexFields) { DARABONBA_PTR_SET_VALUE(indexFields_, indexFields) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline DescribeAppliedAdvicesResponseBodyItems& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeAppliedAdvicesResponseBodyItems& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeAppliedAdvicesResponseBodyItems& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rollbackSQL Field Functions 
    bool hasRollbackSQL() const { return this->rollbackSQL_ != nullptr;};
    void deleteRollbackSQL() { this->rollbackSQL_ = nullptr;};
    inline string rollbackSQL() const { DARABONBA_PTR_GET_DEFAULT(rollbackSQL_, "") };
    inline DescribeAppliedAdvicesResponseBodyItems& setRollbackSQL(string rollbackSQL) { DARABONBA_PTR_SET_VALUE(rollbackSQL_, rollbackSQL) };


    // SQL Field Functions 
    bool hasSQL() const { return this->SQL_ != nullptr;};
    void deleteSQL() { this->SQL_ = nullptr;};
    inline string SQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
    inline DescribeAppliedAdvicesResponseBodyItems& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeAppliedAdvicesResponseBodyItems& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // submitStatus Field Functions 
    bool hasSubmitStatus() const { return this->submitStatus_ != nullptr;};
    void deleteSubmitStatus() { this->submitStatus_ = nullptr;};
    inline string submitStatus() const { DARABONBA_PTR_GET_DEFAULT(submitStatus_, "") };
    inline DescribeAppliedAdvicesResponseBodyItems& setSubmitStatus(string submitStatus) { DARABONBA_PTR_SET_VALUE(submitStatus_, submitStatus) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline DescribeAppliedAdvicesResponseBodyItems& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeAppliedAdvicesResponseBodyItems& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAppliedAdvicesResponseBodyItems& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The suggestion ID.
    std::shared_ptr<string> adviceId_ = nullptr;
    // The benefit of the suggestion.
    std::shared_ptr<string> benefit_ = nullptr;
    // The SQL statement that is used to execute the BUILD job.
    std::shared_ptr<string> buildSQL_ = nullptr;
    std::shared_ptr<string> indexFields_ = nullptr;
    // The status of the suggestion execution job. Valid values:
    // 
    // *   **SUCCEED**
    // *   **FAILED**
    std::shared_ptr<string> jobStatus_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values:
    // 
    // *   **30**(Default)
    // *   **50**
    // *   **100**
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The SQL statement that is used to roll back the suggestion.
    std::shared_ptr<string> rollbackSQL_ = nullptr;
    // The SQL statement that is used to apply the suggestion.
    std::shared_ptr<string> SQL_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The submission status of the suggestion. Valid values:
    // 
    // *   **SUCCEED**
    // *   **FAILED**
    std::shared_ptr<string> submitStatus_ = nullptr;
    // The time when the suggestion was submitted. The time follows the ISO 8601 standard in the yyMMddHHmm format. The time is displayed in UTC.
    std::shared_ptr<string> submitTime_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
