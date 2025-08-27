// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETTESTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENETTESTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateNetTestTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetTestTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TestId, testId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetTestTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TestId, testId_);
    };
    CreateNetTestTaskResponseBody() = default ;
    CreateNetTestTaskResponseBody(const CreateNetTestTaskResponseBody &) = default ;
    CreateNetTestTaskResponseBody(CreateNetTestTaskResponseBody &&) = default ;
    CreateNetTestTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetTestTaskResponseBody() = default ;
    CreateNetTestTaskResponseBody& operator=(const CreateNetTestTaskResponseBody &) = default ;
    CreateNetTestTaskResponseBody& operator=(CreateNetTestTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->testId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNetTestTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // testId Field Functions 
    bool hasTestId() const { return this->testId_ != nullptr;};
    void deleteTestId() { this->testId_ = nullptr;};
    inline string testId() const { DARABONBA_PTR_GET_DEFAULT(testId_, "") };
    inline CreateNetTestTaskResponseBody& setTestId(string testId) { DARABONBA_PTR_SET_VALUE(testId_, testId) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the test task. The unique identifier of a network test task.
    std::shared_ptr<string> testId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
