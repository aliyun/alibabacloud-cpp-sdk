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
        && return this->code_ == nullptr && return this->expireTime_ == nullptr && return this->isSuccess_ == nullptr && return this->requestId_ == nullptr && return this->tempUsername_ == nullptr; };
    // authorizationToken Field Functions 
    bool hasAuthorizationToken() const { return this->authorizationToken_ != nullptr;};
    void deleteAuthorizationToken() { this->authorizationToken_ = nullptr;};
    inline string authorizationToken() const { DARABONBA_PTR_GET_DEFAULT(authorizationToken_, "") };
    inline GetAuthorizationTokenResponseBody& setAuthorizationToken(string authorizationToken) { DARABONBA_PTR_SET_VALUE(authorizationToken_, authorizationToken) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAuthorizationTokenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline GetAuthorizationTokenResponseBody& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetAuthorizationTokenResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuthorizationTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tempUsername Field Functions 
    bool hasTempUsername() const { return this->tempUsername_ != nullptr;};
    void deleteTempUsername() { this->tempUsername_ = nullptr;};
    inline string tempUsername() const { DARABONBA_PTR_GET_DEFAULT(tempUsername_, "") };
    inline GetAuthorizationTokenResponseBody& setTempUsername(string tempUsername) { DARABONBA_PTR_SET_VALUE(tempUsername_, tempUsername) };


  protected:
    // The temporary password returned after you call this API operation is a Security Token Service (STS) token whose validity period is 1 hour. Take note of the following items when you log on to Container Registry instances by using an STS token:
    // 
    // *   If the STS token belongs to an Alibaba Cloud account, you can use the STS token to log on to all Container Registry instances that belong to the Alibaba Cloud account.
    // *   If the STS token belongs to a Resource Access Management (RAM) user, you can use the STS token to log on to all Container Registry instances that belong to the RAM user.
    // *   You can use an STS token to access only Container Registry instances to which the STS token is scoped.
    std::shared_ptr<string> authorizationToken_ = nullptr;
    // Indicates whether the API call is successful.
    // 
    // *   `true`: successful
    // *   `false`: failed
    std::shared_ptr<string> code_ = nullptr;
    // The return value.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The username that is used to log on to the Container Registry instance.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The timestamp when the temporary password expires. Unit: milliseconds.
    std::shared_ptr<string> requestId_ = nullptr;
    // The password that is used to log on to the Container Registry instance.
    std::shared_ptr<string> tempUsername_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
