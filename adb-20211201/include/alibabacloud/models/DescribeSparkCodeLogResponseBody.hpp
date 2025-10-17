// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPARKCODELOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPARKCODELOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSparkCodeLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSparkCodeLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Log, log_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSparkCodeLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Log, log_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSparkCodeLogResponseBody() = default ;
    DescribeSparkCodeLogResponseBody(const DescribeSparkCodeLogResponseBody &) = default ;
    DescribeSparkCodeLogResponseBody(DescribeSparkCodeLogResponseBody &&) = default ;
    DescribeSparkCodeLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSparkCodeLogResponseBody() = default ;
    DescribeSparkCodeLogResponseBody& operator=(const DescribeSparkCodeLogResponseBody &) = default ;
    DescribeSparkCodeLogResponseBody& operator=(DescribeSparkCodeLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->log_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline string log() const { DARABONBA_PTR_GET_DEFAULT(log_, "") };
    inline DescribeSparkCodeLogResponseBody& setLog(string log) { DARABONBA_PTR_SET_VALUE(log_, log) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSparkCodeLogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSparkCodeLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSparkCodeLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The content of the log.
    std::shared_ptr<string> log_ = nullptr;
    // The returned message.
    // 
    // *   If the request was successful, **Success** is returned.
    // *   If the request failed, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
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
