// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBEEBOTINTENTUSERSAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEBEEBOTINTENTUSERSAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DeleteBeebotIntentUserSayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBeebotIntentUserSayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BeebotRequestId, beebotRequestId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UserSayId, userSayId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBeebotIntentUserSayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BeebotRequestId, beebotRequestId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UserSayId, userSayId_);
    };
    DeleteBeebotIntentUserSayResponseBody() = default ;
    DeleteBeebotIntentUserSayResponseBody(const DeleteBeebotIntentUserSayResponseBody &) = default ;
    DeleteBeebotIntentUserSayResponseBody(DeleteBeebotIntentUserSayResponseBody &&) = default ;
    DeleteBeebotIntentUserSayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBeebotIntentUserSayResponseBody() = default ;
    DeleteBeebotIntentUserSayResponseBody& operator=(const DeleteBeebotIntentUserSayResponseBody &) = default ;
    DeleteBeebotIntentUserSayResponseBody& operator=(DeleteBeebotIntentUserSayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beebotRequestId_ == nullptr
        && return this->code_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr
        && return this->userSayId_ == nullptr; };
    // beebotRequestId Field Functions 
    bool hasBeebotRequestId() const { return this->beebotRequestId_ != nullptr;};
    void deleteBeebotRequestId() { this->beebotRequestId_ = nullptr;};
    inline string beebotRequestId() const { DARABONBA_PTR_GET_DEFAULT(beebotRequestId_, "") };
    inline DeleteBeebotIntentUserSayResponseBody& setBeebotRequestId(string beebotRequestId) { DARABONBA_PTR_SET_VALUE(beebotRequestId_, beebotRequestId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteBeebotIntentUserSayResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DeleteBeebotIntentUserSayResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteBeebotIntentUserSayResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteBeebotIntentUserSayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteBeebotIntentUserSayResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // userSayId Field Functions 
    bool hasUserSayId() const { return this->userSayId_ != nullptr;};
    void deleteUserSayId() { this->userSayId_ = nullptr;};
    inline int64_t userSayId() const { DARABONBA_PTR_GET_DEFAULT(userSayId_, 0L) };
    inline DeleteBeebotIntentUserSayResponseBody& setUserSayId(int64_t userSayId) { DARABONBA_PTR_SET_VALUE(userSayId_, userSayId) };


  protected:
    std::shared_ptr<string> beebotRequestId_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int64_t> userSayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
