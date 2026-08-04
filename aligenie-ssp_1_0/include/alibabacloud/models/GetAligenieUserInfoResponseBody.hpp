// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIGENIEUSERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALIGENIEUSERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetAligenieUserInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAligenieUserInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAligenieUserInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAligenieUserInfoResponseBody() = default ;
    GetAligenieUserInfoResponseBody(const GetAligenieUserInfoResponseBody &) = default ;
    GetAligenieUserInfoResponseBody(GetAligenieUserInfoResponseBody &&) = default ;
    GetAligenieUserInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAligenieUserInfoResponseBody() = default ;
    GetAligenieUserInfoResponseBody& operator=(const GetAligenieUserInfoResponseBody &) = default ;
    GetAligenieUserInfoResponseBody& operator=(GetAligenieUserInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AligenieNickname, aligenieNickname_);
        DARABONBA_PTR_TO_JSON(Avatar, avatar_);
        DARABONBA_PTR_TO_JSON(Deletable, deletable_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AligenieNickname, aligenieNickname_);
        DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
        DARABONBA_PTR_FROM_JSON(Deletable, deletable_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aligenieNickname_ == nullptr
        && this->avatar_ == nullptr && this->deletable_ == nullptr; };
      // aligenieNickname Field Functions 
      bool hasAligenieNickname() const { return this->aligenieNickname_ != nullptr;};
      void deleteAligenieNickname() { this->aligenieNickname_ = nullptr;};
      inline string getAligenieNickname() const { DARABONBA_PTR_GET_DEFAULT(aligenieNickname_, "") };
      inline Result& setAligenieNickname(string aligenieNickname) { DARABONBA_PTR_SET_VALUE(aligenieNickname_, aligenieNickname) };


      // avatar Field Functions 
      bool hasAvatar() const { return this->avatar_ != nullptr;};
      void deleteAvatar() { this->avatar_ = nullptr;};
      inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
      inline Result& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


      // deletable Field Functions 
      bool hasDeletable() const { return this->deletable_ != nullptr;};
      void deleteDeletable() { this->deletable_ = nullptr;};
      inline bool getDeletable() const { DARABONBA_PTR_GET_DEFAULT(deletable_, false) };
      inline Result& setDeletable(bool deletable) { DARABONBA_PTR_SET_VALUE(deletable_, deletable) };


    protected:
      // Aligenie user nickname
      shared_ptr<string> aligenieNickname_ {};
      // URL of the Aligenie user profile picture
      shared_ptr<string> avatar_ {};
      // Indicates whether the account can be logged off
      shared_ptr<bool> deletable_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetAligenieUserInfoResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAligenieUserInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAligenieUserInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetAligenieUserInfoResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetAligenieUserInfoResponseBody::Result) };
    inline GetAligenieUserInfoResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetAligenieUserInfoResponseBody::Result) };
    inline GetAligenieUserInfoResponseBody& setResult(const GetAligenieUserInfoResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetAligenieUserInfoResponseBody& setResult(GetAligenieUserInfoResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAligenieUserInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Response code
    shared_ptr<int32_t> code_ {};
    // Response message
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    shared_ptr<GetAligenieUserInfoResponseBody::Result> result_ {};
    // Flag indicating whether the invocation succeeded
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
