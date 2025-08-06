// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSUBSCRIBESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSUBSCRIBESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetTopicSubscribeStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicSubscribeStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TopicSubscribeStatus, topicSubscribeStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicSubscribeStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TopicSubscribeStatus, topicSubscribeStatus_);
    };
    GetTopicSubscribeStatusResponseBody() = default ;
    GetTopicSubscribeStatusResponseBody(const GetTopicSubscribeStatusResponseBody &) = default ;
    GetTopicSubscribeStatusResponseBody(GetTopicSubscribeStatusResponseBody &&) = default ;
    GetTopicSubscribeStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicSubscribeStatusResponseBody() = default ;
    GetTopicSubscribeStatusResponseBody& operator=(const GetTopicSubscribeStatusResponseBody &) = default ;
    GetTopicSubscribeStatusResponseBody& operator=(GetTopicSubscribeStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->topicSubscribeStatus_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetTopicSubscribeStatusResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTopicSubscribeStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTopicSubscribeStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTopicSubscribeStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // topicSubscribeStatus Field Functions 
    bool hasTopicSubscribeStatus() const { return this->topicSubscribeStatus_ != nullptr;};
    void deleteTopicSubscribeStatus() { this->topicSubscribeStatus_ = nullptr;};
    inline const GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus & topicSubscribeStatus() const { DARABONBA_PTR_GET_CONST(topicSubscribeStatus_, GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus) };
    inline GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus topicSubscribeStatus() { DARABONBA_PTR_GET(topicSubscribeStatus_, GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus) };
    inline GetTopicSubscribeStatusResponseBody& setTopicSubscribeStatus(const GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus & topicSubscribeStatus) { DARABONBA_PTR_SET_VALUE(topicSubscribeStatus_, topicSubscribeStatus) };
    inline GetTopicSubscribeStatusResponseBody& setTopicSubscribeStatus(GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus && topicSubscribeStatus) { DARABONBA_PTR_SET_RVALUE(topicSubscribeStatus_, topicSubscribeStatus) };


  protected:
    // The HTTP status code.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The subscription details.
    std::shared_ptr<GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus> topicSubscribeStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
