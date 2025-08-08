// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSQLREVIEWORIGINSQLREQUESTORDERACTIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_LISTSQLREVIEWORIGINSQLREQUESTORDERACTIONDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSQLReviewOriginSQLRequestOrderActionDetailPage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSQLReviewOriginSQLRequestOrderActionDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSQLReviewOriginSQLRequestOrderActionDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CheckStatusResult, checkStatusResult_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(SQLReviewResult, SQLReviewResult_);
    };
    friend void from_json(const Darabonba::Json& j, ListSQLReviewOriginSQLRequestOrderActionDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckStatusResult, checkStatusResult_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(SQLReviewResult, SQLReviewResult_);
    };
    ListSQLReviewOriginSQLRequestOrderActionDetail() = default ;
    ListSQLReviewOriginSQLRequestOrderActionDetail(const ListSQLReviewOriginSQLRequestOrderActionDetail &) = default ;
    ListSQLReviewOriginSQLRequestOrderActionDetail(ListSQLReviewOriginSQLRequestOrderActionDetail &&) = default ;
    ListSQLReviewOriginSQLRequestOrderActionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSQLReviewOriginSQLRequestOrderActionDetail() = default ;
    ListSQLReviewOriginSQLRequestOrderActionDetail& operator=(const ListSQLReviewOriginSQLRequestOrderActionDetail &) = default ;
    ListSQLReviewOriginSQLRequestOrderActionDetail& operator=(ListSQLReviewOriginSQLRequestOrderActionDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkStatusResult_ != nullptr
        && this->fileId_ != nullptr && this->page_ != nullptr && this->SQLReviewResult_ != nullptr; };
    // checkStatusResult Field Functions 
    bool hasCheckStatusResult() const { return this->checkStatusResult_ != nullptr;};
    void deleteCheckStatusResult() { this->checkStatusResult_ = nullptr;};
    inline string checkStatusResult() const { DARABONBA_PTR_GET_DEFAULT(checkStatusResult_, "") };
    inline ListSQLReviewOriginSQLRequestOrderActionDetail& setCheckStatusResult(string checkStatusResult) { DARABONBA_PTR_SET_VALUE(checkStatusResult_, checkStatusResult) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline ListSQLReviewOriginSQLRequestOrderActionDetail& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const Models::ListSQLReviewOriginSQLRequestOrderActionDetailPage & page() const { DARABONBA_PTR_GET_CONST(page_, Models::ListSQLReviewOriginSQLRequestOrderActionDetailPage) };
    inline Models::ListSQLReviewOriginSQLRequestOrderActionDetailPage page() { DARABONBA_PTR_GET(page_, Models::ListSQLReviewOriginSQLRequestOrderActionDetailPage) };
    inline ListSQLReviewOriginSQLRequestOrderActionDetail& setPage(const Models::ListSQLReviewOriginSQLRequestOrderActionDetailPage & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListSQLReviewOriginSQLRequestOrderActionDetail& setPage(Models::ListSQLReviewOriginSQLRequestOrderActionDetailPage && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // SQLReviewResult Field Functions 
    bool hasSQLReviewResult() const { return this->SQLReviewResult_ != nullptr;};
    void deleteSQLReviewResult() { this->SQLReviewResult_ = nullptr;};
    inline string SQLReviewResult() const { DARABONBA_PTR_GET_DEFAULT(SQLReviewResult_, "") };
    inline ListSQLReviewOriginSQLRequestOrderActionDetail& setSQLReviewResult(string SQLReviewResult) { DARABONBA_PTR_SET_VALUE(SQLReviewResult_, SQLReviewResult) };


  protected:
    // The review status of the SQL statement. Valid values:
    // 
    // *   **new**: The SQL statement was waiting to be reviewed.
    // *   **unknown**: The SQL statement cannot be parsed.
    // *   **check_not_pass**: The SQL statement failed to pass the review.
    // *   **check_pass**: The SQL statement passed the review.
    // *   **force_pass**: The SQL statement passed the manual review.
    // *   **force_not_pass**: The SQL statement failed to pass the manual review.
    std::shared_ptr<string> checkStatusResult_ = nullptr;
    // The ID of the file that contains the SQL statements to be reviewed.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // The pagination information.
    std::shared_ptr<Models::ListSQLReviewOriginSQLRequestOrderActionDetailPage> page_ = nullptr;
    // The optimization suggestion for the SQL statement. Valid values:
    // 
    // *   **MUST_IMPROVE**: The SQL statement must be optimized.
    // *   **POTENTIAL_ISSUE**: The SQL statement contains potential issues.
    // *   **SUGGEST_IMPROVE**: We recommend that you optimize the SQL statement.
    // *   **USE_DMS_TOOLKIT**: We recommend that you change schemas without locking tables.
    // *   **USE_DMS_DML_UNLOCK**: We recommend that you change data without locking tables.
    // *   **TABLE_INDEX_SUGGEST**: We recommend that you optimize indexes for the SQL statement.
    std::shared_ptr<string> SQLReviewResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
