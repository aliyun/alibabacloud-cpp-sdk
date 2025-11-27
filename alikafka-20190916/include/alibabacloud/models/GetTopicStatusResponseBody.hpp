// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTopicStatusResponseBodyTopicStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetTopicStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TopicStatus, topicStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TopicStatus, topicStatus_);
    };
    GetTopicStatusResponseBody() = default ;
    GetTopicStatusResponseBody(const GetTopicStatusResponseBody &) = default ;
    GetTopicStatusResponseBody(GetTopicStatusResponseBody &&) = default ;
    GetTopicStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicStatusResponseBody() = default ;
    GetTopicStatusResponseBody& operator=(const GetTopicStatusResponseBody &) = default ;
    GetTopicStatusResponseBody& operator=(GetTopicStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->topicStatus_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetTopicStatusResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTopicStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTopicStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTopicStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // topicStatus Field Functions 
    bool hasTopicStatus() const { return this->topicStatus_ != nullptr;};
    void deleteTopicStatus() { this->topicStatus_ = nullptr;};
    inline const GetTopicStatusResponseBodyTopicStatus & topicStatus() const { DARABONBA_PTR_GET_CONST(topicStatus_, GetTopicStatusResponseBodyTopicStatus) };
    inline GetTopicStatusResponseBodyTopicStatus topicStatus() { DARABONBA_PTR_GET(topicStatus_, GetTopicStatusResponseBodyTopicStatus) };
    inline GetTopicStatusResponseBody& setTopicStatus(const GetTopicStatusResponseBodyTopicStatus & topicStatus) { DARABONBA_PTR_SET_VALUE(topicStatus_, topicStatus) };
    inline GetTopicStatusResponseBody& setTopicStatus(GetTopicStatusResponseBodyTopicStatus && topicStatus) { DARABONBA_PTR_SET_RVALUE(topicStatus_, topicStatus) };


  protected:
    // The HTTP status code returned. The HTTP status code 200 indicates that the request is successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The status information about messages in the topic.
    std::shared_ptr<GetTopicStatusResponseBodyTopicStatus> topicStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
