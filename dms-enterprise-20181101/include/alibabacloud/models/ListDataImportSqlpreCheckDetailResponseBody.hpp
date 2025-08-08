// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAIMPORTSQLPRECHECKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAIMPORTSQLPRECHECKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDataImportSQLPreCheckDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataImportSQLPreCheckDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PreCheckSQLDetailList, preCheckSQLDetailList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataImportSQLPreCheckDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PreCheckSQLDetailList, preCheckSQLDetailList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataImportSQLPreCheckDetailResponseBody() = default ;
    ListDataImportSQLPreCheckDetailResponseBody(const ListDataImportSQLPreCheckDetailResponseBody &) = default ;
    ListDataImportSQLPreCheckDetailResponseBody(ListDataImportSQLPreCheckDetailResponseBody &&) = default ;
    ListDataImportSQLPreCheckDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataImportSQLPreCheckDetailResponseBody() = default ;
    ListDataImportSQLPreCheckDetailResponseBody& operator=(const ListDataImportSQLPreCheckDetailResponseBody &) = default ;
    ListDataImportSQLPreCheckDetailResponseBody& operator=(ListDataImportSQLPreCheckDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->preCheckSQLDetailList_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDataImportSQLPreCheckDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDataImportSQLPreCheckDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // preCheckSQLDetailList Field Functions 
    bool hasPreCheckSQLDetailList() const { return this->preCheckSQLDetailList_ != nullptr;};
    void deletePreCheckSQLDetailList() { this->preCheckSQLDetailList_ = nullptr;};
    inline const vector<ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList> & preCheckSQLDetailList() const { DARABONBA_PTR_GET_CONST(preCheckSQLDetailList_, vector<ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList>) };
    inline vector<ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList> preCheckSQLDetailList() { DARABONBA_PTR_GET(preCheckSQLDetailList_, vector<ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList>) };
    inline ListDataImportSQLPreCheckDetailResponseBody& setPreCheckSQLDetailList(const vector<ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList> & preCheckSQLDetailList) { DARABONBA_PTR_SET_VALUE(preCheckSQLDetailList_, preCheckSQLDetailList) };
    inline ListDataImportSQLPreCheckDetailResponseBody& setPreCheckSQLDetailList(vector<ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList> && preCheckSQLDetailList) { DARABONBA_PTR_SET_RVALUE(preCheckSQLDetailList_, preCheckSQLDetailList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataImportSQLPreCheckDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataImportSQLPreCheckDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDataImportSQLPreCheckDetailResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The precheck information of SQL statements.
    std::shared_ptr<vector<ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList>> preCheckSQLDetailList_ = nullptr;
    // The request ID. You can use the ID to locate logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
    // The number of SQL statements.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
