// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACORRECTPRECHECKSQLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACORRECTPRECHECKSQLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDataCorrectPreCheckSQLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCorrectPreCheckSQLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PreCheckSQLList, preCheckSQLList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCorrectPreCheckSQLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PreCheckSQLList, preCheckSQLList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataCorrectPreCheckSQLResponseBody() = default ;
    ListDataCorrectPreCheckSQLResponseBody(const ListDataCorrectPreCheckSQLResponseBody &) = default ;
    ListDataCorrectPreCheckSQLResponseBody(ListDataCorrectPreCheckSQLResponseBody &&) = default ;
    ListDataCorrectPreCheckSQLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCorrectPreCheckSQLResponseBody() = default ;
    ListDataCorrectPreCheckSQLResponseBody& operator=(const ListDataCorrectPreCheckSQLResponseBody &) = default ;
    ListDataCorrectPreCheckSQLResponseBody& operator=(ListDataCorrectPreCheckSQLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->preCheckSQLList_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDataCorrectPreCheckSQLResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDataCorrectPreCheckSQLResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // preCheckSQLList Field Functions 
    bool hasPreCheckSQLList() const { return this->preCheckSQLList_ != nullptr;};
    void deletePreCheckSQLList() { this->preCheckSQLList_ = nullptr;};
    inline const vector<ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList> & preCheckSQLList() const { DARABONBA_PTR_GET_CONST(preCheckSQLList_, vector<ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList>) };
    inline vector<ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList> preCheckSQLList() { DARABONBA_PTR_GET(preCheckSQLList_, vector<ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList>) };
    inline ListDataCorrectPreCheckSQLResponseBody& setPreCheckSQLList(const vector<ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList> & preCheckSQLList) { DARABONBA_PTR_SET_VALUE(preCheckSQLList_, preCheckSQLList) };
    inline ListDataCorrectPreCheckSQLResponseBody& setPreCheckSQLList(vector<ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList> && preCheckSQLList) { DARABONBA_PTR_SET_RVALUE(preCheckSQLList_, preCheckSQLList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataCorrectPreCheckSQLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataCorrectPreCheckSQLResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The precheck information about SQL statements.
    std::shared_ptr<vector<ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList>> preCheckSQLList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
