// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210218
{
namespace Models
{
  class GetAuthCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthModel, authModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthModel, authModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAuthCodeResponseBody() = default ;
    GetAuthCodeResponseBody(const GetAuthCodeResponseBody &) = default ;
    GetAuthCodeResponseBody(GetAuthCodeResponseBody &&) = default ;
    GetAuthCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthCodeResponseBody() = default ;
    GetAuthCodeResponseBody& operator=(const GetAuthCodeResponseBody &) = default ;
    GetAuthCodeResponseBody& operator=(GetAuthCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthModel& obj) { 
        DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      };
      friend void from_json(const Darabonba::Json& j, AuthModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      };
      AuthModel() = default ;
      AuthModel(const AuthModel &) = default ;
      AuthModel(AuthModel &&) = default ;
      AuthModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthModel() = default ;
      AuthModel& operator=(const AuthModel &) = default ;
      AuthModel& operator=(AuthModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authCode_ == nullptr
        && this->endUserId_ == nullptr && this->expireTime_ == nullptr; };
      // authCode Field Functions 
      bool hasAuthCode() const { return this->authCode_ != nullptr;};
      void deleteAuthCode() { this->authCode_ = nullptr;};
      inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
      inline AuthModel& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline AuthModel& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline AuthModel& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    protected:
      shared_ptr<string> authCode_ {};
      shared_ptr<string> endUserId_ {};
      shared_ptr<string> expireTime_ {};
    };

    virtual bool empty() const override { return this->authModel_ == nullptr
        && this->requestId_ == nullptr; };
    // authModel Field Functions 
    bool hasAuthModel() const { return this->authModel_ != nullptr;};
    void deleteAuthModel() { this->authModel_ = nullptr;};
    inline const GetAuthCodeResponseBody::AuthModel & getAuthModel() const { DARABONBA_PTR_GET_CONST(authModel_, GetAuthCodeResponseBody::AuthModel) };
    inline GetAuthCodeResponseBody::AuthModel getAuthModel() { DARABONBA_PTR_GET(authModel_, GetAuthCodeResponseBody::AuthModel) };
    inline GetAuthCodeResponseBody& setAuthModel(const GetAuthCodeResponseBody::AuthModel & authModel) { DARABONBA_PTR_SET_VALUE(authModel_, authModel) };
    inline GetAuthCodeResponseBody& setAuthModel(GetAuthCodeResponseBody::AuthModel && authModel) { DARABONBA_PTR_SET_RVALUE(authModel_, authModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuthCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetAuthCodeResponseBody::AuthModel> authModel_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210218
#endif
