// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTOKENFORMNSQUEUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTOKENFORMNSQUEUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryTokenForMnsQueueResponseBodyMessageTokenDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dybaseapi20170525
{
namespace Models
{
  class QueryTokenForMnsQueueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTokenForMnsQueueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MessageTokenDTO, messageTokenDTO_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTokenForMnsQueueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MessageTokenDTO, messageTokenDTO_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryTokenForMnsQueueResponseBody() = default ;
    QueryTokenForMnsQueueResponseBody(const QueryTokenForMnsQueueResponseBody &) = default ;
    QueryTokenForMnsQueueResponseBody(QueryTokenForMnsQueueResponseBody &&) = default ;
    QueryTokenForMnsQueueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTokenForMnsQueueResponseBody() = default ;
    QueryTokenForMnsQueueResponseBody& operator=(const QueryTokenForMnsQueueResponseBody &) = default ;
    QueryTokenForMnsQueueResponseBody& operator=(QueryTokenForMnsQueueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->messageTokenDTO_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryTokenForMnsQueueResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryTokenForMnsQueueResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageTokenDTO Field Functions 
    bool hasMessageTokenDTO() const { return this->messageTokenDTO_ != nullptr;};
    void deleteMessageTokenDTO() { this->messageTokenDTO_ = nullptr;};
    inline const QueryTokenForMnsQueueResponseBodyMessageTokenDTO & messageTokenDTO() const { DARABONBA_PTR_GET_CONST(messageTokenDTO_, QueryTokenForMnsQueueResponseBodyMessageTokenDTO) };
    inline QueryTokenForMnsQueueResponseBodyMessageTokenDTO messageTokenDTO() { DARABONBA_PTR_GET(messageTokenDTO_, QueryTokenForMnsQueueResponseBodyMessageTokenDTO) };
    inline QueryTokenForMnsQueueResponseBody& setMessageTokenDTO(const QueryTokenForMnsQueueResponseBodyMessageTokenDTO & messageTokenDTO) { DARABONBA_PTR_SET_VALUE(messageTokenDTO_, messageTokenDTO) };
    inline QueryTokenForMnsQueueResponseBody& setMessageTokenDTO(QueryTokenForMnsQueueResponseBodyMessageTokenDTO && messageTokenDTO) { DARABONBA_PTR_SET_RVALUE(messageTokenDTO_, messageTokenDTO) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTokenForMnsQueueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<QueryTokenForMnsQueueResponseBodyMessageTokenDTO> messageTokenDTO_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dybaseapi20170525
#endif
