// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETESTCASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATETESTCASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTestCaseResponseBodyTestcase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateTestCaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTestCaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Testcase, testcase_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTestCaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Testcase, testcase_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    UpdateTestCaseResponseBody() = default ;
    UpdateTestCaseResponseBody(const UpdateTestCaseResponseBody &) = default ;
    UpdateTestCaseResponseBody(UpdateTestCaseResponseBody &&) = default ;
    UpdateTestCaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTestCaseResponseBody() = default ;
    UpdateTestCaseResponseBody& operator=(const UpdateTestCaseResponseBody &) = default ;
    UpdateTestCaseResponseBody& operator=(UpdateTestCaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->testcase_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMsg_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // testcase Field Functions 
    bool hasTestcase() const { return this->testcase_ != nullptr;};
    void deleteTestcase() { this->testcase_ = nullptr;};
    inline const UpdateTestCaseResponseBodyTestcase & testcase() const { DARABONBA_PTR_GET_CONST(testcase_, UpdateTestCaseResponseBodyTestcase) };
    inline UpdateTestCaseResponseBodyTestcase testcase() { DARABONBA_PTR_GET(testcase_, UpdateTestCaseResponseBodyTestcase) };
    inline UpdateTestCaseResponseBody& setTestcase(const UpdateTestCaseResponseBodyTestcase & testcase) { DARABONBA_PTR_SET_VALUE(testcase_, testcase) };
    inline UpdateTestCaseResponseBody& setTestcase(UpdateTestCaseResponseBodyTestcase && testcase) { DARABONBA_PTR_SET_RVALUE(testcase_, testcase) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline UpdateTestCaseResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline UpdateTestCaseResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateTestCaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateTestCaseResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<UpdateTestCaseResponseBodyTestcase> testcase_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
