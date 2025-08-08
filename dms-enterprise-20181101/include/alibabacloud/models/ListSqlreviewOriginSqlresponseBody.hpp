// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSQLREVIEWORIGINSQLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSQLREVIEWORIGINSQLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSQLReviewOriginSQLResponseBodyOriginSQLList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSQLReviewOriginSQLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSQLReviewOriginSQLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(OriginSQLList, originSQLList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSQLReviewOriginSQLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(OriginSQLList, originSQLList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSQLReviewOriginSQLResponseBody() = default ;
    ListSQLReviewOriginSQLResponseBody(const ListSQLReviewOriginSQLResponseBody &) = default ;
    ListSQLReviewOriginSQLResponseBody(ListSQLReviewOriginSQLResponseBody &&) = default ;
    ListSQLReviewOriginSQLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSQLReviewOriginSQLResponseBody() = default ;
    ListSQLReviewOriginSQLResponseBody& operator=(const ListSQLReviewOriginSQLResponseBody &) = default ;
    ListSQLReviewOriginSQLResponseBody& operator=(ListSQLReviewOriginSQLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->originSQLList_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListSQLReviewOriginSQLResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListSQLReviewOriginSQLResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // originSQLList Field Functions 
    bool hasOriginSQLList() const { return this->originSQLList_ != nullptr;};
    void deleteOriginSQLList() { this->originSQLList_ = nullptr;};
    inline const vector<ListSQLReviewOriginSQLResponseBodyOriginSQLList> & originSQLList() const { DARABONBA_PTR_GET_CONST(originSQLList_, vector<ListSQLReviewOriginSQLResponseBodyOriginSQLList>) };
    inline vector<ListSQLReviewOriginSQLResponseBodyOriginSQLList> originSQLList() { DARABONBA_PTR_GET(originSQLList_, vector<ListSQLReviewOriginSQLResponseBodyOriginSQLList>) };
    inline ListSQLReviewOriginSQLResponseBody& setOriginSQLList(const vector<ListSQLReviewOriginSQLResponseBodyOriginSQLList> & originSQLList) { DARABONBA_PTR_SET_VALUE(originSQLList_, originSQLList) };
    inline ListSQLReviewOriginSQLResponseBody& setOriginSQLList(vector<ListSQLReviewOriginSQLResponseBodyOriginSQLList> && originSQLList) { DARABONBA_PTR_SET_RVALUE(originSQLList_, originSQLList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSQLReviewOriginSQLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSQLReviewOriginSQLResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSQLReviewOriginSQLResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code that is returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message that is returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The information about the parsed SQL statements.
    std::shared_ptr<vector<ListSQLReviewOriginSQLResponseBodyOriginSQLList>> originSQLList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
    // The number of SQL statements in the file.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
