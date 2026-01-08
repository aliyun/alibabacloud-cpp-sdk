// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERCOMMANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERCOMMANDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetUserCommandResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserCommandResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OnStart, onStart_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UserCommandId, userCommandId_);
      DARABONBA_ANY_TO_JSON(accessDeniedDetail, accessDeniedDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserCommandResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OnStart, onStart_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UserCommandId, userCommandId_);
      DARABONBA_ANY_FROM_JSON(accessDeniedDetail, accessDeniedDetail_);
    };
    GetUserCommandResponseBody() = default ;
    GetUserCommandResponseBody(const GetUserCommandResponseBody &) = default ;
    GetUserCommandResponseBody(GetUserCommandResponseBody &&) = default ;
    GetUserCommandResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserCommandResponseBody() = default ;
    GetUserCommandResponseBody& operator=(const GetUserCommandResponseBody &) = default ;
    GetUserCommandResponseBody& operator=(GetUserCommandResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OnStart : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OnStart& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
      };
      friend void from_json(const Darabonba::Json& j, OnStart& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
      };
      OnStart() = default ;
      OnStart(const OnStart &) = default ;
      OnStart(OnStart &&) = default ;
      OnStart(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OnStart() = default ;
      OnStart& operator=(const OnStart &) = default ;
      OnStart& operator=(OnStart &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline OnStart& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    protected:
      shared_ptr<string> content_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->onStart_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->userCommandId_ == nullptr
        && this->accessDeniedDetail_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUserCommandResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUserCommandResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // onStart Field Functions 
    bool hasOnStart() const { return this->onStart_ != nullptr;};
    void deleteOnStart() { this->onStart_ = nullptr;};
    inline const GetUserCommandResponseBody::OnStart & getOnStart() const { DARABONBA_PTR_GET_CONST(onStart_, GetUserCommandResponseBody::OnStart) };
    inline GetUserCommandResponseBody::OnStart getOnStart() { DARABONBA_PTR_GET(onStart_, GetUserCommandResponseBody::OnStart) };
    inline GetUserCommandResponseBody& setOnStart(const GetUserCommandResponseBody::OnStart & onStart) { DARABONBA_PTR_SET_VALUE(onStart_, onStart) };
    inline GetUserCommandResponseBody& setOnStart(GetUserCommandResponseBody::OnStart && onStart) { DARABONBA_PTR_SET_RVALUE(onStart_, onStart) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserCommandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUserCommandResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // userCommandId Field Functions 
    bool hasUserCommandId() const { return this->userCommandId_ != nullptr;};
    void deleteUserCommandId() { this->userCommandId_ = nullptr;};
    inline string getUserCommandId() const { DARABONBA_PTR_GET_DEFAULT(userCommandId_, "") };
    inline GetUserCommandResponseBody& setUserCommandId(string userCommandId) { DARABONBA_PTR_SET_VALUE(userCommandId_, userCommandId) };


    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline     const Darabonba::Json & getAccessDeniedDetail() const { DARABONBA_GET(accessDeniedDetail_) };
    Darabonba::Json & getAccessDeniedDetail() { DARABONBA_GET(accessDeniedDetail_) };
    inline GetUserCommandResponseBody& setAccessDeniedDetail(const Darabonba::Json & accessDeniedDetail) { DARABONBA_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline GetUserCommandResponseBody& setAccessDeniedDetail(Darabonba::Json && accessDeniedDetail) { DARABONBA_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetUserCommandResponseBody::OnStart> onStart_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> userCommandId_ {};
    Darabonba::Json accessDeniedDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
