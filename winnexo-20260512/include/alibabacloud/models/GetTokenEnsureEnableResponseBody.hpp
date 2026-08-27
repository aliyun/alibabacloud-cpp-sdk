// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOKENENSUREENABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOKENENSUREENABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetTokenEnsureEnableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTokenEnsureEnableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(tokenMasked, tokenMasked_);
    };
    friend void from_json(const Darabonba::Json& j, GetTokenEnsureEnableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(tokenMasked, tokenMasked_);
    };
    GetTokenEnsureEnableResponseBody() = default ;
    GetTokenEnsureEnableResponseBody(const GetTokenEnsureEnableResponseBody &) = default ;
    GetTokenEnsureEnableResponseBody(GetTokenEnsureEnableResponseBody &&) = default ;
    GetTokenEnsureEnableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTokenEnsureEnableResponseBody() = default ;
    GetTokenEnsureEnableResponseBody& operator=(const GetTokenEnsureEnableResponseBody &) = default ;
    GetTokenEnsureEnableResponseBody& operator=(GetTokenEnsureEnableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->gmtCreate_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->token_ == nullptr && this->tokenMasked_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTokenEnsureEnableResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetTokenEnsureEnableResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTokenEnsureEnableResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTokenEnsureEnableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetTokenEnsureEnableResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // tokenMasked Field Functions 
    bool hasTokenMasked() const { return this->tokenMasked_ != nullptr;};
    void deleteTokenMasked() { this->tokenMasked_ = nullptr;};
    inline string getTokenMasked() const { DARABONBA_PTR_GET_DEFAULT(tokenMasked_, "") };
    inline GetTokenEnsureEnableResponseBody& setTokenMasked(string tokenMasked) { DARABONBA_PTR_SET_VALUE(tokenMasked_, tokenMasked) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The creation time.
    shared_ptr<string> gmtCreate_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The temporary access credential for the data catalog.
    shared_ptr<string> token_ {};
    // The masked token value.
    shared_ptr<string> tokenMasked_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
