// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERACCESSTOKENFORPARTNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERACCESSTOKENFORPARTNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserAccessTokenForPartnerResponseBodyModule.hpp>
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
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->module_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetUserAccessTokenForPartnerResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const GetUserAccessTokenForPartnerResponseBodyModule & module() const { DARABONBA_PTR_GET_CONST(module_, GetUserAccessTokenForPartnerResponseBodyModule) };
    inline GetUserAccessTokenForPartnerResponseBodyModule module() { DARABONBA_PTR_GET(module_, GetUserAccessTokenForPartnerResponseBodyModule) };
    inline GetUserAccessTokenForPartnerResponseBody& setModule(const GetUserAccessTokenForPartnerResponseBodyModule & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline GetUserAccessTokenForPartnerResponseBody& setModule(GetUserAccessTokenForPartnerResponseBodyModule && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserAccessTokenForPartnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetUserAccessTokenForPartnerResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<GetUserAccessTokenForPartnerResponseBodyModule> module_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
