// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTEVENTSOURCECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TESTEVENTSOURCECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TestEventSourceConfigResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class TestEventSourceConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestEventSourceConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, TestEventSourceConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    TestEventSourceConfigResponseBody() = default ;
    TestEventSourceConfigResponseBody(const TestEventSourceConfigResponseBody &) = default ;
    TestEventSourceConfigResponseBody(TestEventSourceConfigResponseBody &&) = default ;
    TestEventSourceConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestEventSourceConfigResponseBody() = default ;
    TestEventSourceConfigResponseBody& operator=(const TestEventSourceConfigResponseBody &) = default ;
    TestEventSourceConfigResponseBody& operator=(TestEventSourceConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TestEventSourceConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<TestEventSourceConfigResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<TestEventSourceConfigResponseBodyData>) };
    inline vector<TestEventSourceConfigResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<TestEventSourceConfigResponseBodyData>) };
    inline TestEventSourceConfigResponseBody& setData(const vector<TestEventSourceConfigResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TestEventSourceConfigResponseBody& setData(vector<TestEventSourceConfigResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TestEventSourceConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TestEventSourceConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TestEventSourceConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. Valid values:
    // 
    // *   Success: The request was successful.
    // *   Other codes indicate that the request failed. For information about error codes, see Error codes.
    std::shared_ptr<string> code_ = nullptr;
    // The update result.
    std::shared_ptr<vector<TestEventSourceConfigResponseBodyData>> data_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the operation was successful. If the operation was successful, the value true is returned.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
