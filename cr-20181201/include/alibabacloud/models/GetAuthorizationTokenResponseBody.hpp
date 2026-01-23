// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHORIZATIONTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHORIZATIONTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetAuthorizationTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthorizationTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationToken, authorizationToken_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TempUsername, tempUsername_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthorizationTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationToken, authorizationToken_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TempUsername, tempUsername_);
    };
    GetAuthorizationTokenResponseBody() = default ;
    GetAuthorizationTokenResponseBody(const GetAuthorizationTokenResponseBody &) = default ;
    GetAuthorizationTokenResponseBody(GetAuthorizationTokenResponseBody &&) = default ;
    GetAuthorizationTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthorizationTokenResponseBody() = default ;
    GetAuthorizationTokenResponseBody& operator=(const GetAuthorizationTokenResponseBody &) = default ;
    GetAuthorizationTokenResponseBody& operator=(GetAuthorizationTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationToken_ == nullptr
        && this->code_ == nullptr && this->expireTime_ == nullptr && this->isSuccess_ == nullptr && this->requestId_ == nullptr && this->tempUsername_ == nullptr; };
    // authorizationToken Field Functions 
    bool hasAuthorizationToken() const { return this->authorizationToken_ != nullptr;};
    void deleteAuthorizationToken() { this->authorizationToken_ = nullptr;};
    inline string getAuthorizationToken() const { DARABONBA_PTR_GET_DEFAULT(authorizationToken_, "") };
    inline GetAuthorizationTokenResponseBody& setAuthorizationToken(string authorizationToken) { DARABONBA_PTR_SET_VALUE(authorizationToken_, authorizationToken) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAuthorizationTokenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline GetAuthorizationTokenResponseBody& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetAuthorizationTokenResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuthorizationTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tempUsername Field Functions 
    bool hasTempUsername() const { return this->tempUsername_ != nullptr;};
    void deleteTempUsername() { this->tempUsername_ = nullptr;};
    inline string getTempUsername() const { DARABONBA_PTR_GET_DEFAULT(tempUsername_, "") };
    inline GetAuthorizationTokenResponseBody& setTempUsername(string tempUsername) { DARABONBA_PTR_SET_VALUE(tempUsername_, tempUsername) };


  protected:
    // The password that you use to log on to the registry.
    shared_ptr<string> authorizationToken_ {};
    // The HTTP status code.
    shared_ptr<string> code_ {};
    // The timestamp when the temporary token expired. Unit: milliseconds.
    shared_ptr<int64_t> expireTime_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The request ID
    shared_ptr<string> requestId_ {};
    // The username that you use to log on to the registry.
    shared_ptr<string> tempUsername_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
