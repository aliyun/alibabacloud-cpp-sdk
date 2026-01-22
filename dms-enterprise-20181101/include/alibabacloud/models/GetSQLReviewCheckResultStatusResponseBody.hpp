// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLREVIEWCHECKRESULTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSQLREVIEWCHECKRESULTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetSQLReviewCheckResultStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSQLReviewCheckResultStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckResultStatus, checkResultStatus_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSQLReviewCheckResultStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckResultStatus, checkResultStatus_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSQLReviewCheckResultStatusResponseBody() = default ;
    GetSQLReviewCheckResultStatusResponseBody(const GetSQLReviewCheckResultStatusResponseBody &) = default ;
    GetSQLReviewCheckResultStatusResponseBody(GetSQLReviewCheckResultStatusResponseBody &&) = default ;
    GetSQLReviewCheckResultStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSQLReviewCheckResultStatusResponseBody() = default ;
    GetSQLReviewCheckResultStatusResponseBody& operator=(const GetSQLReviewCheckResultStatusResponseBody &) = default ;
    GetSQLReviewCheckResultStatusResponseBody& operator=(GetSQLReviewCheckResultStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckResultStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckResultStatus& obj) { 
        DARABONBA_PTR_TO_JSON(CheckStatusResult, checkStatusResult_);
        DARABONBA_PTR_TO_JSON(CheckedCount, checkedCount_);
        DARABONBA_PTR_TO_JSON(SQLReviewResult, SQLReviewResult_);
        DARABONBA_PTR_TO_JSON(TotalSQLCount, totalSQLCount_);
      };
      friend void from_json(const Darabonba::Json& j, CheckResultStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckStatusResult, checkStatusResult_);
        DARABONBA_PTR_FROM_JSON(CheckedCount, checkedCount_);
        DARABONBA_PTR_FROM_JSON(SQLReviewResult, SQLReviewResult_);
        DARABONBA_PTR_FROM_JSON(TotalSQLCount, totalSQLCount_);
      };
      CheckResultStatus() = default ;
      CheckResultStatus(const CheckResultStatus &) = default ;
      CheckResultStatus(CheckResultStatus &&) = default ;
      CheckResultStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckResultStatus() = default ;
      CheckResultStatus& operator=(const CheckResultStatus &) = default ;
      CheckResultStatus& operator=(CheckResultStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SQLReviewResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SQLReviewResult& obj) { 
          DARABONBA_PTR_TO_JSON(MustImprove, mustImprove_);
          DARABONBA_PTR_TO_JSON(PotentialIssue, potentialIssue_);
          DARABONBA_PTR_TO_JSON(SuggestImprove, suggestImprove_);
          DARABONBA_PTR_TO_JSON(TableIndexSuggest, tableIndexSuggest_);
          DARABONBA_PTR_TO_JSON(UseDmsDmlUnlock, useDmsDmlUnlock_);
          DARABONBA_PTR_TO_JSON(UseDmsToolkit, useDmsToolkit_);
        };
        friend void from_json(const Darabonba::Json& j, SQLReviewResult& obj) { 
          DARABONBA_PTR_FROM_JSON(MustImprove, mustImprove_);
          DARABONBA_PTR_FROM_JSON(PotentialIssue, potentialIssue_);
          DARABONBA_PTR_FROM_JSON(SuggestImprove, suggestImprove_);
          DARABONBA_PTR_FROM_JSON(TableIndexSuggest, tableIndexSuggest_);
          DARABONBA_PTR_FROM_JSON(UseDmsDmlUnlock, useDmsDmlUnlock_);
          DARABONBA_PTR_FROM_JSON(UseDmsToolkit, useDmsToolkit_);
        };
        SQLReviewResult() = default ;
        SQLReviewResult(const SQLReviewResult &) = default ;
        SQLReviewResult(SQLReviewResult &&) = default ;
        SQLReviewResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SQLReviewResult() = default ;
        SQLReviewResult& operator=(const SQLReviewResult &) = default ;
        SQLReviewResult& operator=(SQLReviewResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mustImprove_ == nullptr
        && this->potentialIssue_ == nullptr && this->suggestImprove_ == nullptr && this->tableIndexSuggest_ == nullptr && this->useDmsDmlUnlock_ == nullptr && this->useDmsToolkit_ == nullptr; };
        // mustImprove Field Functions 
        bool hasMustImprove() const { return this->mustImprove_ != nullptr;};
        void deleteMustImprove() { this->mustImprove_ = nullptr;};
        inline int64_t getMustImprove() const { DARABONBA_PTR_GET_DEFAULT(mustImprove_, 0L) };
        inline SQLReviewResult& setMustImprove(int64_t mustImprove) { DARABONBA_PTR_SET_VALUE(mustImprove_, mustImprove) };


        // potentialIssue Field Functions 
        bool hasPotentialIssue() const { return this->potentialIssue_ != nullptr;};
        void deletePotentialIssue() { this->potentialIssue_ = nullptr;};
        inline int64_t getPotentialIssue() const { DARABONBA_PTR_GET_DEFAULT(potentialIssue_, 0L) };
        inline SQLReviewResult& setPotentialIssue(int64_t potentialIssue) { DARABONBA_PTR_SET_VALUE(potentialIssue_, potentialIssue) };


        // suggestImprove Field Functions 
        bool hasSuggestImprove() const { return this->suggestImprove_ != nullptr;};
        void deleteSuggestImprove() { this->suggestImprove_ = nullptr;};
        inline int64_t getSuggestImprove() const { DARABONBA_PTR_GET_DEFAULT(suggestImprove_, 0L) };
        inline SQLReviewResult& setSuggestImprove(int64_t suggestImprove) { DARABONBA_PTR_SET_VALUE(suggestImprove_, suggestImprove) };


        // tableIndexSuggest Field Functions 
        bool hasTableIndexSuggest() const { return this->tableIndexSuggest_ != nullptr;};
        void deleteTableIndexSuggest() { this->tableIndexSuggest_ = nullptr;};
        inline int64_t getTableIndexSuggest() const { DARABONBA_PTR_GET_DEFAULT(tableIndexSuggest_, 0L) };
        inline SQLReviewResult& setTableIndexSuggest(int64_t tableIndexSuggest) { DARABONBA_PTR_SET_VALUE(tableIndexSuggest_, tableIndexSuggest) };


        // useDmsDmlUnlock Field Functions 
        bool hasUseDmsDmlUnlock() const { return this->useDmsDmlUnlock_ != nullptr;};
        void deleteUseDmsDmlUnlock() { this->useDmsDmlUnlock_ = nullptr;};
        inline int64_t getUseDmsDmlUnlock() const { DARABONBA_PTR_GET_DEFAULT(useDmsDmlUnlock_, 0L) };
        inline SQLReviewResult& setUseDmsDmlUnlock(int64_t useDmsDmlUnlock) { DARABONBA_PTR_SET_VALUE(useDmsDmlUnlock_, useDmsDmlUnlock) };


        // useDmsToolkit Field Functions 
        bool hasUseDmsToolkit() const { return this->useDmsToolkit_ != nullptr;};
        void deleteUseDmsToolkit() { this->useDmsToolkit_ = nullptr;};
        inline int64_t getUseDmsToolkit() const { DARABONBA_PTR_GET_DEFAULT(useDmsToolkit_, 0L) };
        inline SQLReviewResult& setUseDmsToolkit(int64_t useDmsToolkit) { DARABONBA_PTR_SET_VALUE(useDmsToolkit_, useDmsToolkit) };


      protected:
        // The number of SQL statements that must be modified.
        shared_ptr<int64_t> mustImprove_ {};
        // The number of SQL statements that have potential issues.
        shared_ptr<int64_t> potentialIssue_ {};
        // The number of SQL statements that can be modified.
        shared_ptr<int64_t> suggestImprove_ {};
        // The number of SQL statements that can use indexes.
        shared_ptr<int64_t> tableIndexSuggest_ {};
        // The number of SQL statements that can be used for lock-free data changes.
        shared_ptr<int64_t> useDmsDmlUnlock_ {};
        // The number of SQL statements that can be used for lock-free schema changes.
        shared_ptr<int64_t> useDmsToolkit_ {};
      };

      class CheckStatusResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CheckStatusResult& obj) { 
          DARABONBA_PTR_TO_JSON(CheckNotPass, checkNotPass_);
          DARABONBA_PTR_TO_JSON(CheckPass, checkPass_);
          DARABONBA_PTR_TO_JSON(ForceNotPass, forceNotPass_);
          DARABONBA_PTR_TO_JSON(ForcePass, forcePass_);
          DARABONBA_PTR_TO_JSON(New, new_);
          DARABONBA_PTR_TO_JSON(Unknown, unknown_);
        };
        friend void from_json(const Darabonba::Json& j, CheckStatusResult& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckNotPass, checkNotPass_);
          DARABONBA_PTR_FROM_JSON(CheckPass, checkPass_);
          DARABONBA_PTR_FROM_JSON(ForceNotPass, forceNotPass_);
          DARABONBA_PTR_FROM_JSON(ForcePass, forcePass_);
          DARABONBA_PTR_FROM_JSON(New, new_);
          DARABONBA_PTR_FROM_JSON(Unknown, unknown_);
        };
        CheckStatusResult() = default ;
        CheckStatusResult(const CheckStatusResult &) = default ;
        CheckStatusResult(CheckStatusResult &&) = default ;
        CheckStatusResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CheckStatusResult() = default ;
        CheckStatusResult& operator=(const CheckStatusResult &) = default ;
        CheckStatusResult& operator=(CheckStatusResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkNotPass_ == nullptr
        && this->checkPass_ == nullptr && this->forceNotPass_ == nullptr && this->forcePass_ == nullptr && this->new_ == nullptr && this->unknown_ == nullptr; };
        // checkNotPass Field Functions 
        bool hasCheckNotPass() const { return this->checkNotPass_ != nullptr;};
        void deleteCheckNotPass() { this->checkNotPass_ = nullptr;};
        inline int64_t getCheckNotPass() const { DARABONBA_PTR_GET_DEFAULT(checkNotPass_, 0L) };
        inline CheckStatusResult& setCheckNotPass(int64_t checkNotPass) { DARABONBA_PTR_SET_VALUE(checkNotPass_, checkNotPass) };


        // checkPass Field Functions 
        bool hasCheckPass() const { return this->checkPass_ != nullptr;};
        void deleteCheckPass() { this->checkPass_ = nullptr;};
        inline int64_t getCheckPass() const { DARABONBA_PTR_GET_DEFAULT(checkPass_, 0L) };
        inline CheckStatusResult& setCheckPass(int64_t checkPass) { DARABONBA_PTR_SET_VALUE(checkPass_, checkPass) };


        // forceNotPass Field Functions 
        bool hasForceNotPass() const { return this->forceNotPass_ != nullptr;};
        void deleteForceNotPass() { this->forceNotPass_ = nullptr;};
        inline int64_t getForceNotPass() const { DARABONBA_PTR_GET_DEFAULT(forceNotPass_, 0L) };
        inline CheckStatusResult& setForceNotPass(int64_t forceNotPass) { DARABONBA_PTR_SET_VALUE(forceNotPass_, forceNotPass) };


        // forcePass Field Functions 
        bool hasForcePass() const { return this->forcePass_ != nullptr;};
        void deleteForcePass() { this->forcePass_ = nullptr;};
        inline int64_t getForcePass() const { DARABONBA_PTR_GET_DEFAULT(forcePass_, 0L) };
        inline CheckStatusResult& setForcePass(int64_t forcePass) { DARABONBA_PTR_SET_VALUE(forcePass_, forcePass) };


        // new Field Functions 
        bool hasNew() const { return this->new_ != nullptr;};
        void deleteNew() { this->new_ = nullptr;};
        inline int64_t getNew() const { DARABONBA_PTR_GET_DEFAULT(new_, 0L) };
        inline CheckStatusResult& setNew(int64_t _new) { DARABONBA_PTR_SET_VALUE(new_, _new) };


        // unknown Field Functions 
        bool hasUnknown() const { return this->unknown_ != nullptr;};
        void deleteUnknown() { this->unknown_ = nullptr;};
        inline int64_t getUnknown() const { DARABONBA_PTR_GET_DEFAULT(unknown_, 0L) };
        inline CheckStatusResult& setUnknown(int64_t unknown) { DARABONBA_PTR_SET_VALUE(unknown_, unknown) };


      protected:
        // The number of SQL statements that failed to pass the review.
        shared_ptr<int64_t> checkNotPass_ {};
        // The number of SQL statements that passed the review.
        shared_ptr<int64_t> checkPass_ {};
        // The number of SQL statements that failed to pass the manual review.
        shared_ptr<int64_t> forceNotPass_ {};
        // The number of SQL statements that passed the manual review.
        shared_ptr<int64_t> forcePass_ {};
        // The number of SQL statements to be reviewed.
        shared_ptr<int64_t> new_ {};
        // The number of abnormal SQL statements.
        shared_ptr<int64_t> unknown_ {};
      };

      virtual bool empty() const override { return this->checkStatusResult_ == nullptr
        && this->checkedCount_ == nullptr && this->SQLReviewResult_ == nullptr && this->totalSQLCount_ == nullptr; };
      // checkStatusResult Field Functions 
      bool hasCheckStatusResult() const { return this->checkStatusResult_ != nullptr;};
      void deleteCheckStatusResult() { this->checkStatusResult_ = nullptr;};
      inline const CheckResultStatus::CheckStatusResult & getCheckStatusResult() const { DARABONBA_PTR_GET_CONST(checkStatusResult_, CheckResultStatus::CheckStatusResult) };
      inline CheckResultStatus::CheckStatusResult getCheckStatusResult() { DARABONBA_PTR_GET(checkStatusResult_, CheckResultStatus::CheckStatusResult) };
      inline CheckResultStatus& setCheckStatusResult(const CheckResultStatus::CheckStatusResult & checkStatusResult) { DARABONBA_PTR_SET_VALUE(checkStatusResult_, checkStatusResult) };
      inline CheckResultStatus& setCheckStatusResult(CheckResultStatus::CheckStatusResult && checkStatusResult) { DARABONBA_PTR_SET_RVALUE(checkStatusResult_, checkStatusResult) };


      // checkedCount Field Functions 
      bool hasCheckedCount() const { return this->checkedCount_ != nullptr;};
      void deleteCheckedCount() { this->checkedCount_ = nullptr;};
      inline int64_t getCheckedCount() const { DARABONBA_PTR_GET_DEFAULT(checkedCount_, 0L) };
      inline CheckResultStatus& setCheckedCount(int64_t checkedCount) { DARABONBA_PTR_SET_VALUE(checkedCount_, checkedCount) };


      // SQLReviewResult Field Functions 
      bool hasSQLReviewResult() const { return this->SQLReviewResult_ != nullptr;};
      void deleteSQLReviewResult() { this->SQLReviewResult_ = nullptr;};
      inline const CheckResultStatus::SQLReviewResult & getSQLReviewResult() const { DARABONBA_PTR_GET_CONST(SQLReviewResult_, CheckResultStatus::SQLReviewResult) };
      inline CheckResultStatus::SQLReviewResult getSQLReviewResult() { DARABONBA_PTR_GET(SQLReviewResult_, CheckResultStatus::SQLReviewResult) };
      inline CheckResultStatus& setSQLReviewResult(const CheckResultStatus::SQLReviewResult & sQLReviewResult) { DARABONBA_PTR_SET_VALUE(SQLReviewResult_, sQLReviewResult) };
      inline CheckResultStatus& setSQLReviewResult(CheckResultStatus::SQLReviewResult && sQLReviewResult) { DARABONBA_PTR_SET_RVALUE(SQLReviewResult_, sQLReviewResult) };


      // totalSQLCount Field Functions 
      bool hasTotalSQLCount() const { return this->totalSQLCount_ != nullptr;};
      void deleteTotalSQLCount() { this->totalSQLCount_ = nullptr;};
      inline int64_t getTotalSQLCount() const { DARABONBA_PTR_GET_DEFAULT(totalSQLCount_, 0L) };
      inline CheckResultStatus& setTotalSQLCount(int64_t totalSQLCount) { DARABONBA_PTR_SET_VALUE(totalSQLCount_, totalSQLCount) };


    protected:
      // The result of the SQL status check.
      shared_ptr<CheckResultStatus::CheckStatusResult> checkStatusResult_ {};
      // The number of SQL statements that were reviewed.
      shared_ptr<int64_t> checkedCount_ {};
      // The optimization suggestion for SQL statements.
      shared_ptr<CheckResultStatus::SQLReviewResult> SQLReviewResult_ {};
      // The total number of SQL statements.
      shared_ptr<int64_t> totalSQLCount_ {};
    };

    virtual bool empty() const override { return this->checkResultStatus_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // checkResultStatus Field Functions 
    bool hasCheckResultStatus() const { return this->checkResultStatus_ != nullptr;};
    void deleteCheckResultStatus() { this->checkResultStatus_ = nullptr;};
    inline const GetSQLReviewCheckResultStatusResponseBody::CheckResultStatus & getCheckResultStatus() const { DARABONBA_PTR_GET_CONST(checkResultStatus_, GetSQLReviewCheckResultStatusResponseBody::CheckResultStatus) };
    inline GetSQLReviewCheckResultStatusResponseBody::CheckResultStatus getCheckResultStatus() { DARABONBA_PTR_GET(checkResultStatus_, GetSQLReviewCheckResultStatusResponseBody::CheckResultStatus) };
    inline GetSQLReviewCheckResultStatusResponseBody& setCheckResultStatus(const GetSQLReviewCheckResultStatusResponseBody::CheckResultStatus & checkResultStatus) { DARABONBA_PTR_SET_VALUE(checkResultStatus_, checkResultStatus) };
    inline GetSQLReviewCheckResultStatusResponseBody& setCheckResultStatus(GetSQLReviewCheckResultStatusResponseBody::CheckResultStatus && checkResultStatus) { DARABONBA_PTR_SET_RVALUE(checkResultStatus_, checkResultStatus) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetSQLReviewCheckResultStatusResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetSQLReviewCheckResultStatusResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSQLReviewCheckResultStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSQLReviewCheckResultStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result of the SQL review.
    shared_ptr<GetSQLReviewCheckResultStatusResponseBody::CheckResultStatus> checkResultStatus_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
