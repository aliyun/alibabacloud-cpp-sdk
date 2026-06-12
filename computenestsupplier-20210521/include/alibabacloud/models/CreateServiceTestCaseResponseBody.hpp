// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICETESTCASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICETESTCASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class CreateServiceTestCaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceTestCaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TestCaseId, testCaseId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceTestCaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TestCaseId, testCaseId_);
    };
    CreateServiceTestCaseResponseBody() = default ;
    CreateServiceTestCaseResponseBody(const CreateServiceTestCaseResponseBody &) = default ;
    CreateServiceTestCaseResponseBody(CreateServiceTestCaseResponseBody &&) = default ;
    CreateServiceTestCaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceTestCaseResponseBody() = default ;
    CreateServiceTestCaseResponseBody& operator=(const CreateServiceTestCaseResponseBody &) = default ;
    CreateServiceTestCaseResponseBody& operator=(CreateServiceTestCaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->testCaseId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateServiceTestCaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // testCaseId Field Functions 
    bool hasTestCaseId() const { return this->testCaseId_ != nullptr;};
    void deleteTestCaseId() { this->testCaseId_ = nullptr;};
    inline string getTestCaseId() const { DARABONBA_PTR_GET_DEFAULT(testCaseId_, "") };
    inline CreateServiceTestCaseResponseBody& setTestCaseId(string testCaseId) { DARABONBA_PTR_SET_VALUE(testCaseId_, testCaseId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The test case ID.
    shared_ptr<string> testCaseId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
