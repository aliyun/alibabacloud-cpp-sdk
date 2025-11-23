// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSQLREVIEWORIGINSQLRESPONSEBODYORIGINSQLLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSQLREVIEWORIGINSQLRESPONSEBODYORIGINSQLLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSQLReviewOriginSQLResponseBodyOriginSQLList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSQLReviewOriginSQLResponseBodyOriginSQLList& obj) { 
      DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_TO_JSON(CheckedTime, checkedTime_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(ReviewSummary, reviewSummary_);
      DARABONBA_PTR_TO_JSON(SQLContent, SQLContent_);
      DARABONBA_PTR_TO_JSON(SQLId, SQLId_);
      DARABONBA_PTR_TO_JSON(SQLName, SQLName_);
      DARABONBA_PTR_TO_JSON(SQLReviewQueryKey, SQLReviewQueryKey_);
      DARABONBA_PTR_TO_JSON(SqlHash, sqlHash_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
    };
    friend void from_json(const Darabonba::Json& j, ListSQLReviewOriginSQLResponseBodyOriginSQLList& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_FROM_JSON(CheckedTime, checkedTime_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(ReviewSummary, reviewSummary_);
      DARABONBA_PTR_FROM_JSON(SQLContent, SQLContent_);
      DARABONBA_PTR_FROM_JSON(SQLId, SQLId_);
      DARABONBA_PTR_FROM_JSON(SQLName, SQLName_);
      DARABONBA_PTR_FROM_JSON(SQLReviewQueryKey, SQLReviewQueryKey_);
      DARABONBA_PTR_FROM_JSON(SqlHash, sqlHash_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
    };
    ListSQLReviewOriginSQLResponseBodyOriginSQLList() = default ;
    ListSQLReviewOriginSQLResponseBodyOriginSQLList(const ListSQLReviewOriginSQLResponseBodyOriginSQLList &) = default ;
    ListSQLReviewOriginSQLResponseBodyOriginSQLList(ListSQLReviewOriginSQLResponseBodyOriginSQLList &&) = default ;
    ListSQLReviewOriginSQLResponseBodyOriginSQLList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSQLReviewOriginSQLResponseBodyOriginSQLList() = default ;
    ListSQLReviewOriginSQLResponseBodyOriginSQLList& operator=(const ListSQLReviewOriginSQLResponseBodyOriginSQLList &) = default ;
    ListSQLReviewOriginSQLResponseBodyOriginSQLList& operator=(ListSQLReviewOriginSQLResponseBodyOriginSQLList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkStatus_ == nullptr
        && return this->checkedTime_ == nullptr && return this->fileId_ == nullptr && return this->fileName_ == nullptr && return this->reviewSummary_ == nullptr && return this->SQLContent_ == nullptr
        && return this->SQLId_ == nullptr && return this->SQLName_ == nullptr && return this->SQLReviewQueryKey_ == nullptr && return this->sqlHash_ == nullptr && return this->statusDesc_ == nullptr; };
    // checkStatus Field Functions 
    bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
    void deleteCheckStatus() { this->checkStatus_ = nullptr;};
    inline string checkStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, "") };
    inline ListSQLReviewOriginSQLResponseBodyOriginSQLList& setCheckStatus(string checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


    // checkedTime Field Functions 
    bool hasCheckedTime() const { return this->checkedTime_ != nullptr;};
    void deleteCheckedTime() { this->checkedTime_ = nullptr;};
    inline string checkedTime() const { DARABONBA_PTR_GET_DEFAULT(checkedTime_, "") };
    inline ListSQLReviewOriginSQLResponseBodyOriginSQLList& setCheckedTime(string checkedTime) { DARABONBA_PTR_SET_VALUE(checkedTime_, checkedTime) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline ListSQLReviewOriginSQLResponseBodyOriginSQLList& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListSQLReviewOriginSQLResponseBodyOriginSQLList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // reviewSummary Field Functions 
    bool hasReviewSummary() const { return this->reviewSummary_ != nullptr;};
    void deleteReviewSummary() { this->reviewSummary_ = nullptr;};
    inline string reviewSummary() const { DARABONBA_PTR_GET_DEFAULT(reviewSummary_, "") };
    inline ListSQLReviewOriginSQLResponseBodyOriginSQLList& setReviewSummary(string reviewSummary) { DARABONBA_PTR_SET_VALUE(reviewSummary_, reviewSummary) };


    // SQLContent Field Functions 
    bool hasSQLContent() const { return this->SQLContent_ != nullptr;};
    void deleteSQLContent() { this->SQLContent_ = nullptr;};
    inline string SQLContent() const { DARABONBA_PTR_GET_DEFAULT(SQLContent_, "") };
    inline ListSQLReviewOriginSQLResponseBodyOriginSQLList& setSQLContent(string SQLContent) { DARABONBA_PTR_SET_VALUE(SQLContent_, SQLContent) };


    // SQLId Field Functions 
    bool hasSQLId() const { return this->SQLId_ != nullptr;};
    void deleteSQLId() { this->SQLId_ = nullptr;};
    inline int64_t SQLId() const { DARABONBA_PTR_GET_DEFAULT(SQLId_, 0L) };
    inline ListSQLReviewOriginSQLResponseBodyOriginSQLList& setSQLId(int64_t SQLId) { DARABONBA_PTR_SET_VALUE(SQLId_, SQLId) };


    // SQLName Field Functions 
    bool hasSQLName() const { return this->SQLName_ != nullptr;};
    void deleteSQLName() { this->SQLName_ = nullptr;};
    inline string SQLName() const { DARABONBA_PTR_GET_DEFAULT(SQLName_, "") };
    inline ListSQLReviewOriginSQLResponseBodyOriginSQLList& setSQLName(string SQLName) { DARABONBA_PTR_SET_VALUE(SQLName_, SQLName) };


    // SQLReviewQueryKey Field Functions 
    bool hasSQLReviewQueryKey() const { return this->SQLReviewQueryKey_ != nullptr;};
    void deleteSQLReviewQueryKey() { this->SQLReviewQueryKey_ = nullptr;};
    inline string SQLReviewQueryKey() const { DARABONBA_PTR_GET_DEFAULT(SQLReviewQueryKey_, "") };
    inline ListSQLReviewOriginSQLResponseBodyOriginSQLList& setSQLReviewQueryKey(string SQLReviewQueryKey) { DARABONBA_PTR_SET_VALUE(SQLReviewQueryKey_, SQLReviewQueryKey) };


    // sqlHash Field Functions 
    bool hasSqlHash() const { return this->sqlHash_ != nullptr;};
    void deleteSqlHash() { this->sqlHash_ = nullptr;};
    inline string sqlHash() const { DARABONBA_PTR_GET_DEFAULT(sqlHash_, "") };
    inline ListSQLReviewOriginSQLResponseBodyOriginSQLList& setSqlHash(string sqlHash) { DARABONBA_PTR_SET_VALUE(sqlHash_, sqlHash) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline ListSQLReviewOriginSQLResponseBodyOriginSQLList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


  protected:
    // The review status of the SQL statement. Valid values:
    // 
    // *   **new**: The SQL statement was waiting to be reviewed.
    // *   **unknown**: The SQL statement cannot be parsed.
    // *   **check_not_pass**: The SQL statement failed to pass the review.
    // *   **check_pass**: The SQL statement passed the review.
    // *   **force_pass**: The SQL statement passed the manual review.
    // *   **force_not_pass**: The SQL statement failed to pass the manual review.
    std::shared_ptr<string> checkStatus_ = nullptr;
    // The time when the SQL statement was reviewed.
    std::shared_ptr<string> checkedTime_ = nullptr;
    // The file ID.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // The name of the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The statistics on the optimization suggestions for SQL statements. The value is a JSON string. Valid values:
    // 
    // *   **MUST_IMPROVE**: The SQL statements must be optimized.
    // *   **POTENTIAL_ISSUE**: The SQL statements contain potential issues.
    // *   **SUGGEST_IMPROVE**: We recommend that you optimize the SQL statements.
    // *   **USEDMSTOOLKIT**: We recommend that you change schemas without locking tables.
    // *   **USEDMSDML_UNLOCK**: We recommend that you change data without locking tables.
    // *   **TABLEINDEXSUGGEST**: We recommend that you optimize indexes for the SQL statements.
    std::shared_ptr<string> reviewSummary_ = nullptr;
    // The SQL statement in the file.
    std::shared_ptr<string> SQLContent_ = nullptr;
    // The ID of the SQL statement.
    std::shared_ptr<int64_t> SQLId_ = nullptr;
    // The name of the SQL statement.
    std::shared_ptr<string> SQLName_ = nullptr;
    // The key that is used to query the information about optimization suggestions. You can call the [GetSQLReviewOptimizeDetail](https://help.aliyun.com/document_detail/465919.html) operation to query the details based on this key.
    std::shared_ptr<string> SQLReviewQueryKey_ = nullptr;
    // The MD5 hash value that is obtained after the SQL statement is calculated by using a hash algorithm.
    std::shared_ptr<string> sqlHash_ = nullptr;
    // The description of the review status.
    std::shared_ptr<string> statusDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
