// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAEXPORTPRECHECKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAEXPORTPRECHECKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataExportPreCheckDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataExportPreCheckDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PreCheckResult, preCheckResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataExportPreCheckDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PreCheckResult, preCheckResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataExportPreCheckDetailResponseBody() = default ;
    GetDataExportPreCheckDetailResponseBody(const GetDataExportPreCheckDetailResponseBody &) = default ;
    GetDataExportPreCheckDetailResponseBody(GetDataExportPreCheckDetailResponseBody &&) = default ;
    GetDataExportPreCheckDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataExportPreCheckDetailResponseBody() = default ;
    GetDataExportPreCheckDetailResponseBody& operator=(const GetDataExportPreCheckDetailResponseBody &) = default ;
    GetDataExportPreCheckDetailResponseBody& operator=(GetDataExportPreCheckDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PreCheckResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PreCheckResult& obj) { 
        DARABONBA_PTR_TO_JSON(IgnoreAffectRows, ignoreAffectRows_);
        DARABONBA_PTR_TO_JSON(PreCheckDetailList, preCheckDetailList_);
      };
      friend void from_json(const Darabonba::Json& j, PreCheckResult& obj) { 
        DARABONBA_PTR_FROM_JSON(IgnoreAffectRows, ignoreAffectRows_);
        DARABONBA_PTR_FROM_JSON(PreCheckDetailList, preCheckDetailList_);
      };
      PreCheckResult() = default ;
      PreCheckResult(const PreCheckResult &) = default ;
      PreCheckResult(PreCheckResult &&) = default ;
      PreCheckResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PreCheckResult() = default ;
      PreCheckResult& operator=(const PreCheckResult &) = default ;
      PreCheckResult& operator=(PreCheckResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PreCheckDetailList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PreCheckDetailList& obj) { 
          DARABONBA_PTR_TO_JSON(PreCheckDetailList, preCheckDetailList_);
        };
        friend void from_json(const Darabonba::Json& j, PreCheckDetailList& obj) { 
          DARABONBA_PTR_FROM_JSON(PreCheckDetailList, preCheckDetailList_);
        };
        PreCheckDetailList() = default ;
        PreCheckDetailList(const PreCheckDetailList &) = default ;
        PreCheckDetailList(PreCheckDetailList &&) = default ;
        PreCheckDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PreCheckDetailList() = default ;
        PreCheckDetailList& operator=(const PreCheckDetailList &) = default ;
        PreCheckDetailList& operator=(PreCheckDetailList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PreCheckDetailListItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PreCheckDetailListItem& obj) { 
            DARABONBA_PTR_TO_JSON(AffectRows, affectRows_);
            DARABONBA_PTR_TO_JSON(SQL, SQL_);
          };
          friend void from_json(const Darabonba::Json& j, PreCheckDetailListItem& obj) { 
            DARABONBA_PTR_FROM_JSON(AffectRows, affectRows_);
            DARABONBA_PTR_FROM_JSON(SQL, SQL_);
          };
          PreCheckDetailListItem() = default ;
          PreCheckDetailListItem(const PreCheckDetailListItem &) = default ;
          PreCheckDetailListItem(PreCheckDetailListItem &&) = default ;
          PreCheckDetailListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PreCheckDetailListItem() = default ;
          PreCheckDetailListItem& operator=(const PreCheckDetailListItem &) = default ;
          PreCheckDetailListItem& operator=(PreCheckDetailListItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->affectRows_ == nullptr
        && this->SQL_ == nullptr; };
          // affectRows Field Functions 
          bool hasAffectRows() const { return this->affectRows_ != nullptr;};
          void deleteAffectRows() { this->affectRows_ = nullptr;};
          inline int64_t getAffectRows() const { DARABONBA_PTR_GET_DEFAULT(affectRows_, 0L) };
          inline PreCheckDetailListItem& setAffectRows(int64_t affectRows) { DARABONBA_PTR_SET_VALUE(affectRows_, affectRows) };


          // SQL Field Functions 
          bool hasSQL() const { return this->SQL_ != nullptr;};
          void deleteSQL() { this->SQL_ = nullptr;};
          inline string getSQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
          inline PreCheckDetailListItem& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


        protected:
          // The estimated number of data rows to be affected.
          shared_ptr<int64_t> affectRows_ {};
          // The SQL statement.
          shared_ptr<string> SQL_ {};
        };

        virtual bool empty() const override { return this->preCheckDetailList_ == nullptr; };
        // preCheckDetailList Field Functions 
        bool hasPreCheckDetailList() const { return this->preCheckDetailList_ != nullptr;};
        void deletePreCheckDetailList() { this->preCheckDetailList_ = nullptr;};
        inline const vector<PreCheckDetailList::PreCheckDetailListItem> & getPreCheckDetailList() const { DARABONBA_PTR_GET_CONST(preCheckDetailList_, vector<PreCheckDetailList::PreCheckDetailListItem>) };
        inline vector<PreCheckDetailList::PreCheckDetailListItem> getPreCheckDetailList() { DARABONBA_PTR_GET(preCheckDetailList_, vector<PreCheckDetailList::PreCheckDetailListItem>) };
        inline PreCheckDetailList& setPreCheckDetailList(const vector<PreCheckDetailList::PreCheckDetailListItem> & preCheckDetailList) { DARABONBA_PTR_SET_VALUE(preCheckDetailList_, preCheckDetailList) };
        inline PreCheckDetailList& setPreCheckDetailList(vector<PreCheckDetailList::PreCheckDetailListItem> && preCheckDetailList) { DARABONBA_PTR_SET_RVALUE(preCheckDetailList_, preCheckDetailList) };


      protected:
        shared_ptr<vector<PreCheckDetailList::PreCheckDetailListItem>> preCheckDetailList_ {};
      };

      virtual bool empty() const override { return this->ignoreAffectRows_ == nullptr
        && this->preCheckDetailList_ == nullptr; };
      // ignoreAffectRows Field Functions 
      bool hasIgnoreAffectRows() const { return this->ignoreAffectRows_ != nullptr;};
      void deleteIgnoreAffectRows() { this->ignoreAffectRows_ = nullptr;};
      inline bool getIgnoreAffectRows() const { DARABONBA_PTR_GET_DEFAULT(ignoreAffectRows_, false) };
      inline PreCheckResult& setIgnoreAffectRows(bool ignoreAffectRows) { DARABONBA_PTR_SET_VALUE(ignoreAffectRows_, ignoreAffectRows) };


      // preCheckDetailList Field Functions 
      bool hasPreCheckDetailList() const { return this->preCheckDetailList_ != nullptr;};
      void deletePreCheckDetailList() { this->preCheckDetailList_ = nullptr;};
      inline const PreCheckResult::PreCheckDetailList & getPreCheckDetailList() const { DARABONBA_PTR_GET_CONST(preCheckDetailList_, PreCheckResult::PreCheckDetailList) };
      inline PreCheckResult::PreCheckDetailList getPreCheckDetailList() { DARABONBA_PTR_GET(preCheckDetailList_, PreCheckResult::PreCheckDetailList) };
      inline PreCheckResult& setPreCheckDetailList(const PreCheckResult::PreCheckDetailList & preCheckDetailList) { DARABONBA_PTR_SET_VALUE(preCheckDetailList_, preCheckDetailList) };
      inline PreCheckResult& setPreCheckDetailList(PreCheckResult::PreCheckDetailList && preCheckDetailList) { DARABONBA_PTR_SET_RVALUE(preCheckDetailList_, preCheckDetailList) };


    protected:
      // Specifies whether to skip verification. Valid values:
      // 
      // - true
      // - false
      shared_ptr<bool> ignoreAffectRows_ {};
      // The list of pre-check details.
      shared_ptr<PreCheckResult::PreCheckDetailList> preCheckDetailList_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->preCheckResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataExportPreCheckDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataExportPreCheckDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // preCheckResult Field Functions 
    bool hasPreCheckResult() const { return this->preCheckResult_ != nullptr;};
    void deletePreCheckResult() { this->preCheckResult_ = nullptr;};
    inline const GetDataExportPreCheckDetailResponseBody::PreCheckResult & getPreCheckResult() const { DARABONBA_PTR_GET_CONST(preCheckResult_, GetDataExportPreCheckDetailResponseBody::PreCheckResult) };
    inline GetDataExportPreCheckDetailResponseBody::PreCheckResult getPreCheckResult() { DARABONBA_PTR_GET(preCheckResult_, GetDataExportPreCheckDetailResponseBody::PreCheckResult) };
    inline GetDataExportPreCheckDetailResponseBody& setPreCheckResult(const GetDataExportPreCheckDetailResponseBody::PreCheckResult & preCheckResult) { DARABONBA_PTR_SET_VALUE(preCheckResult_, preCheckResult) };
    inline GetDataExportPreCheckDetailResponseBody& setPreCheckResult(GetDataExportPreCheckDetailResponseBody::PreCheckResult && preCheckResult) { DARABONBA_PTR_SET_RVALUE(preCheckResult_, preCheckResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataExportPreCheckDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataExportPreCheckDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // Indicates the result of the precheck task.
    shared_ptr<GetDataExportPreCheckDetailResponseBody::PreCheckResult> preCheckResult_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
