// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVEDATAAUDITLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVEDATAAUDITLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSensitiveDataAuditLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitiveDataAuditLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SensitiveDataAuditLogList, sensitiveDataAuditLogList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitiveDataAuditLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SensitiveDataAuditLogList, sensitiveDataAuditLogList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSensitiveDataAuditLogResponseBody() = default ;
    ListSensitiveDataAuditLogResponseBody(const ListSensitiveDataAuditLogResponseBody &) = default ;
    ListSensitiveDataAuditLogResponseBody(ListSensitiveDataAuditLogResponseBody &&) = default ;
    ListSensitiveDataAuditLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitiveDataAuditLogResponseBody() = default ;
    ListSensitiveDataAuditLogResponseBody& operator=(const ListSensitiveDataAuditLogResponseBody &) = default ;
    ListSensitiveDataAuditLogResponseBody& operator=(ListSensitiveDataAuditLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->sensitiveDataAuditLogList_ == nullptr && return this->success_ == nullptr && return this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListSensitiveDataAuditLogResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListSensitiveDataAuditLogResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSensitiveDataAuditLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sensitiveDataAuditLogList Field Functions 
    bool hasSensitiveDataAuditLogList() const { return this->sensitiveDataAuditLogList_ != nullptr;};
    void deleteSensitiveDataAuditLogList() { this->sensitiveDataAuditLogList_ = nullptr;};
    inline const vector<ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList> & sensitiveDataAuditLogList() const { DARABONBA_PTR_GET_CONST(sensitiveDataAuditLogList_, vector<ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList>) };
    inline vector<ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList> sensitiveDataAuditLogList() { DARABONBA_PTR_GET(sensitiveDataAuditLogList_, vector<ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList>) };
    inline ListSensitiveDataAuditLogResponseBody& setSensitiveDataAuditLogList(const vector<ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList> & sensitiveDataAuditLogList) { DARABONBA_PTR_SET_VALUE(sensitiveDataAuditLogList_, sensitiveDataAuditLogList) };
    inline ListSensitiveDataAuditLogResponseBody& setSensitiveDataAuditLogList(vector<ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList> && sensitiveDataAuditLogList) { DARABONBA_PTR_SET_RVALUE(sensitiveDataAuditLogList_, sensitiveDataAuditLogList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSensitiveDataAuditLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSensitiveDataAuditLogResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The audit logs for sensitive data.
    std::shared_ptr<vector<ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogList>> sensitiveDataAuditLogList_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
