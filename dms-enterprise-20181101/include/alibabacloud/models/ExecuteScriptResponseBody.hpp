// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESCRIPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESCRIPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExecuteScriptResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ExecuteScriptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteScriptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteScriptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ExecuteScriptResponseBody() = default ;
    ExecuteScriptResponseBody(const ExecuteScriptResponseBody &) = default ;
    ExecuteScriptResponseBody(ExecuteScriptResponseBody &&) = default ;
    ExecuteScriptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteScriptResponseBody() = default ;
    ExecuteScriptResponseBody& operator=(const ExecuteScriptResponseBody &) = default ;
    ExecuteScriptResponseBody& operator=(ExecuteScriptResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->results_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ExecuteScriptResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ExecuteScriptResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteScriptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<ExecuteScriptResponseBodyResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<ExecuteScriptResponseBodyResults>) };
    inline vector<ExecuteScriptResponseBodyResults> results() { DARABONBA_PTR_GET(results_, vector<ExecuteScriptResponseBodyResults>) };
    inline ExecuteScriptResponseBody& setResults(const vector<ExecuteScriptResponseBodyResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ExecuteScriptResponseBody& setResults(vector<ExecuteScriptResponseBodyResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ExecuteScriptResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message about the gateway.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The results of the SQL statements that are executed, in the format of an array. Each entry in the array indicates the result of an SQL statement.
    std::shared_ptr<vector<ExecuteScriptResponseBodyResults>> results_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
