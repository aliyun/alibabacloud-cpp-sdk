// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERACCESSTOKENFORPARTNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERACCESSTOKENFORPARTNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetUserAccessTokenForPartnerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserAccessTokenForPartnerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserAccessTokenForPartnerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetUserAccessTokenForPartnerResponseBody() = default ;
    GetUserAccessTokenForPartnerResponseBody(const GetUserAccessTokenForPartnerResponseBody &) = default ;
    GetUserAccessTokenForPartnerResponseBody(GetUserAccessTokenForPartnerResponseBody &&) = default ;
    GetUserAccessTokenForPartnerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserAccessTokenForPartnerResponseBody() = default ;
    GetUserAccessTokenForPartnerResponseBody& operator=(const GetUserAccessTokenForPartnerResponseBody &) = default ;
    GetUserAccessTokenForPartnerResponseBody& operator=(GetUserAccessTokenForPartnerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(TokenValue, tokenValue_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(TokenValue, tokenValue_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tokenValue_ == nullptr; };
      // tokenValue Field Functions 
      bool hasTokenValue() const { return this->tokenValue_ != nullptr;};
      void deleteTokenValue() { this->tokenValue_ = nullptr;};
      inline string getTokenValue() const { DARABONBA_PTR_GET_DEFAULT(tokenValue_, "") };
      inline Module& setTokenValue(string tokenValue) { DARABONBA_PTR_SET_VALUE(tokenValue_, tokenValue) };


    protected:
      shared_ptr<string> tokenValue_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetUserAccessTokenForPartnerResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const GetUserAccessTokenForPartnerResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, GetUserAccessTokenForPartnerResponseBody::Module) };
    inline GetUserAccessTokenForPartnerResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, GetUserAccessTokenForPartnerResponseBody::Module) };
    inline GetUserAccessTokenForPartnerResponseBody& setModule(const GetUserAccessTokenForPartnerResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline GetUserAccessTokenForPartnerResponseBody& setModule(GetUserAccessTokenForPartnerResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserAccessTokenForPartnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetUserAccessTokenForPartnerResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<GetUserAccessTokenForPartnerResponseBody::Module> module_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
