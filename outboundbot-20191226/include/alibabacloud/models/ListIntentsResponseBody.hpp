// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIntentsResponseBodyIntents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListIntentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Intents, intents_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Intents, intents_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListIntentsResponseBody() = default ;
    ListIntentsResponseBody(const ListIntentsResponseBody &) = default ;
    ListIntentsResponseBody(ListIntentsResponseBody &&) = default ;
    ListIntentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntentsResponseBody() = default ;
    ListIntentsResponseBody& operator=(const ListIntentsResponseBody &) = default ;
    ListIntentsResponseBody& operator=(ListIntentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->intents_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListIntentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListIntentsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // intents Field Functions 
    bool hasIntents() const { return this->intents_ != nullptr;};
    void deleteIntents() { this->intents_ = nullptr;};
    inline const ListIntentsResponseBodyIntents & intents() const { DARABONBA_PTR_GET_CONST(intents_, ListIntentsResponseBodyIntents) };
    inline ListIntentsResponseBodyIntents intents() { DARABONBA_PTR_GET(intents_, ListIntentsResponseBodyIntents) };
    inline ListIntentsResponseBody& setIntents(const ListIntentsResponseBodyIntents & intents) { DARABONBA_PTR_SET_VALUE(intents_, intents) };
    inline ListIntentsResponseBody& setIntents(ListIntentsResponseBodyIntents && intents) { DARABONBA_PTR_SET_RVALUE(intents_, intents) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIntentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListIntentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<ListIntentsResponseBodyIntents> intents_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
