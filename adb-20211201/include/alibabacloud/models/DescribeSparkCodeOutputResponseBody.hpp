// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPARKCODEOUTPUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPARKCODEOUTPUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSparkCodeOutputResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSparkCodeOutputResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSparkCodeOutputResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSparkCodeOutputResponseBody() = default ;
    DescribeSparkCodeOutputResponseBody(const DescribeSparkCodeOutputResponseBody &) = default ;
    DescribeSparkCodeOutputResponseBody(DescribeSparkCodeOutputResponseBody &&) = default ;
    DescribeSparkCodeOutputResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSparkCodeOutputResponseBody() = default ;
    DescribeSparkCodeOutputResponseBody& operator=(const DescribeSparkCodeOutputResponseBody &) = default ;
    DescribeSparkCodeOutputResponseBody& operator=(DescribeSparkCodeOutputResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->output_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSparkCodeOutputResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline DescribeSparkCodeOutputResponseBody& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSparkCodeOutputResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSparkCodeOutputResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned message.
    // 
    // *   If the request was successful, **Success** is returned.
    // *   If the request failed, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The execution result, which is in the format of JSON objects.
    std::shared_ptr<string> output_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
