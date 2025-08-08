// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLREVIEWCHECKRESULTSTATUSRESPONSEBODYCHECKRESULTSTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETSQLREVIEWCHECKRESULTSTATUSRESPONSEBODYCHECKRESULTSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult.hpp>
#include <alibabacloud/models/GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus& obj) { 
      DARABONBA_PTR_TO_JSON(CheckStatusResult, checkStatusResult_);
      DARABONBA_PTR_TO_JSON(CheckedCount, checkedCount_);
      DARABONBA_PTR_TO_JSON(SQLReviewResult, SQLReviewResult_);
      DARABONBA_PTR_TO_JSON(TotalSQLCount, totalSQLCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckStatusResult, checkStatusResult_);
      DARABONBA_PTR_FROM_JSON(CheckedCount, checkedCount_);
      DARABONBA_PTR_FROM_JSON(SQLReviewResult, SQLReviewResult_);
      DARABONBA_PTR_FROM_JSON(TotalSQLCount, totalSQLCount_);
    };
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus() = default ;
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus(const GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus &) = default ;
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus(GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus &&) = default ;
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus() = default ;
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus& operator=(const GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus &) = default ;
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus& operator=(GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkStatusResult_ != nullptr
        && this->checkedCount_ != nullptr && this->SQLReviewResult_ != nullptr && this->totalSQLCount_ != nullptr; };
    // checkStatusResult Field Functions 
    bool hasCheckStatusResult() const { return this->checkStatusResult_ != nullptr;};
    void deleteCheckStatusResult() { this->checkStatusResult_ = nullptr;};
    inline const Models::GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult & checkStatusResult() const { DARABONBA_PTR_GET_CONST(checkStatusResult_, Models::GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult) };
    inline Models::GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult checkStatusResult() { DARABONBA_PTR_GET(checkStatusResult_, Models::GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus& setCheckStatusResult(const Models::GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult & checkStatusResult) { DARABONBA_PTR_SET_VALUE(checkStatusResult_, checkStatusResult) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus& setCheckStatusResult(Models::GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult && checkStatusResult) { DARABONBA_PTR_SET_RVALUE(checkStatusResult_, checkStatusResult) };


    // checkedCount Field Functions 
    bool hasCheckedCount() const { return this->checkedCount_ != nullptr;};
    void deleteCheckedCount() { this->checkedCount_ = nullptr;};
    inline int64_t checkedCount() const { DARABONBA_PTR_GET_DEFAULT(checkedCount_, 0L) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus& setCheckedCount(int64_t checkedCount) { DARABONBA_PTR_SET_VALUE(checkedCount_, checkedCount) };


    // SQLReviewResult Field Functions 
    bool hasSQLReviewResult() const { return this->SQLReviewResult_ != nullptr;};
    void deleteSQLReviewResult() { this->SQLReviewResult_ = nullptr;};
    inline const Models::GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult & SQLReviewResult() const { DARABONBA_PTR_GET_CONST(SQLReviewResult_, Models::GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult) };
    inline Models::GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult SQLReviewResult() { DARABONBA_PTR_GET(SQLReviewResult_, Models::GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus& setSQLReviewResult(const Models::GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult & SQLReviewResult) { DARABONBA_PTR_SET_VALUE(SQLReviewResult_, SQLReviewResult) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus& setSQLReviewResult(Models::GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult && SQLReviewResult) { DARABONBA_PTR_SET_RVALUE(SQLReviewResult_, SQLReviewResult) };


    // totalSQLCount Field Functions 
    bool hasTotalSQLCount() const { return this->totalSQLCount_ != nullptr;};
    void deleteTotalSQLCount() { this->totalSQLCount_ = nullptr;};
    inline int64_t totalSQLCount() const { DARABONBA_PTR_GET_DEFAULT(totalSQLCount_, 0L) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus& setTotalSQLCount(int64_t totalSQLCount) { DARABONBA_PTR_SET_VALUE(totalSQLCount_, totalSQLCount) };


  protected:
    // The result of the SQL status check.
    std::shared_ptr<Models::GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult> checkStatusResult_ = nullptr;
    // The number of SQL statements that were reviewed.
    std::shared_ptr<int64_t> checkedCount_ = nullptr;
    // The optimization suggestion for SQL statements.
    std::shared_ptr<Models::GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult> SQLReviewResult_ = nullptr;
    // The total number of SQL statements.
    std::shared_ptr<int64_t> totalSQLCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
