// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOKENINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOKENINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetTokenInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTokenInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(tokenMasked, tokenMasked_);
    };
    friend void from_json(const Darabonba::Json& j, GetTokenInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(tokenMasked, tokenMasked_);
    };
    GetTokenInfoResponseBody() = default ;
    GetTokenInfoResponseBody(const GetTokenInfoResponseBody &) = default ;
    GetTokenInfoResponseBody(GetTokenInfoResponseBody &&) = default ;
    GetTokenInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTokenInfoResponseBody() = default ;
    GetTokenInfoResponseBody& operator=(const GetTokenInfoResponseBody &) = default ;
    GetTokenInfoResponseBody& operator=(GetTokenInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->enabled_ == nullptr && this->gmtCreate_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->tokenMasked_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTokenInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetTokenInfoResponseBody& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetTokenInfoResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTokenInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTokenInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tokenMasked Field Functions 
    bool hasTokenMasked() const { return this->tokenMasked_ != nullptr;};
    void deleteTokenMasked() { this->tokenMasked_ = nullptr;};
    inline string getTokenMasked() const { DARABONBA_PTR_GET_DEFAULT(tokenMasked_, "") };
    inline GetTokenInfoResponseBody& setTokenMasked(string tokenMasked) { DARABONBA_PTR_SET_VALUE(tokenMasked_, tokenMasked) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // Indicates whether the token is enabled.
    shared_ptr<bool> enabled_ {};
    // The creation time.
    shared_ptr<string> gmtCreate_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The masked token value.
    shared_ptr<string> tokenMasked_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
