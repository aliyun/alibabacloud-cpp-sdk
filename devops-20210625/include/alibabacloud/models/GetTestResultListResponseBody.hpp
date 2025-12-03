// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTESTRESULTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTESTRESULTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTestResultListResponseBodyTestResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetTestResultListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTestResultListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(testResult, testResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetTestResultListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(testResult, testResult_);
    };
    GetTestResultListResponseBody() = default ;
    GetTestResultListResponseBody(const GetTestResultListResponseBody &) = default ;
    GetTestResultListResponseBody(GetTestResultListResponseBody &&) = default ;
    GetTestResultListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTestResultListResponseBody() = default ;
    GetTestResultListResponseBody& operator=(const GetTestResultListResponseBody &) = default ;
    GetTestResultListResponseBody& operator=(GetTestResultListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMsg_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->testResult_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTestResultListResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetTestResultListResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTestResultListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTestResultListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // testResult Field Functions 
    bool hasTestResult() const { return this->testResult_ != nullptr;};
    void deleteTestResult() { this->testResult_ = nullptr;};
    inline const vector<GetTestResultListResponseBodyTestResult> & testResult() const { DARABONBA_PTR_GET_CONST(testResult_, vector<GetTestResultListResponseBodyTestResult>) };
    inline vector<GetTestResultListResponseBodyTestResult> testResult() { DARABONBA_PTR_GET(testResult_, vector<GetTestResultListResponseBodyTestResult>) };
    inline GetTestResultListResponseBody& setTestResult(const vector<GetTestResultListResponseBodyTestResult> & testResult) { DARABONBA_PTR_SET_VALUE(testResult_, testResult) };
    inline GetTestResultListResponseBody& setTestResult(vector<GetTestResultListResponseBodyTestResult> && testResult) { DARABONBA_PTR_SET_RVALUE(testResult_, testResult) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<vector<GetTestResultListResponseBodyTestResult>> testResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
