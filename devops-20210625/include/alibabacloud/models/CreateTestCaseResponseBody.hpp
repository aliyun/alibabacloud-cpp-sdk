// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETESTCASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETESTCASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTestCaseResponseBodyTestcase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateTestCaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTestCaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(testcase, testcase_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTestCaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(testcase, testcase_);
    };
    CreateTestCaseResponseBody() = default ;
    CreateTestCaseResponseBody(const CreateTestCaseResponseBody &) = default ;
    CreateTestCaseResponseBody(CreateTestCaseResponseBody &&) = default ;
    CreateTestCaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTestCaseResponseBody() = default ;
    CreateTestCaseResponseBody& operator=(const CreateTestCaseResponseBody &) = default ;
    CreateTestCaseResponseBody& operator=(CreateTestCaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMsg_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->testcase_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateTestCaseResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline CreateTestCaseResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTestCaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateTestCaseResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // testcase Field Functions 
    bool hasTestcase() const { return this->testcase_ != nullptr;};
    void deleteTestcase() { this->testcase_ = nullptr;};
    inline const CreateTestCaseResponseBodyTestcase & testcase() const { DARABONBA_PTR_GET_CONST(testcase_, CreateTestCaseResponseBodyTestcase) };
    inline CreateTestCaseResponseBodyTestcase testcase() { DARABONBA_PTR_GET(testcase_, CreateTestCaseResponseBodyTestcase) };
    inline CreateTestCaseResponseBody& setTestcase(const CreateTestCaseResponseBodyTestcase & testcase) { DARABONBA_PTR_SET_VALUE(testcase_, testcase) };
    inline CreateTestCaseResponseBody& setTestcase(CreateTestCaseResponseBodyTestcase && testcase) { DARABONBA_PTR_SET_RVALUE(testcase_, testcase) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<CreateTestCaseResponseBodyTestcase> testcase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
