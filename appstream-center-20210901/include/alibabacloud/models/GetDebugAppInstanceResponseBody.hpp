// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEBUGAPPINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEBUGAPPINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetDebugAppInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDebugAppInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDebugAppInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetDebugAppInstanceResponseBody() = default ;
    GetDebugAppInstanceResponseBody(const GetDebugAppInstanceResponseBody &) = default ;
    GetDebugAppInstanceResponseBody(GetDebugAppInstanceResponseBody &&) = default ;
    GetDebugAppInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDebugAppInstanceResponseBody() = default ;
    GetDebugAppInstanceResponseBody& operator=(const GetDebugAppInstanceResponseBody &) = default ;
    GetDebugAppInstanceResponseBody& operator=(GetDebugAppInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appInstanceGroupId_ == nullptr && this->appInstanceId_ == nullptr && this->appVersion_ == nullptr && this->authCode_ == nullptr && this->requestId_ == nullptr
        && this->userId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetDebugAppInstanceResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline GetDebugAppInstanceResponseBody& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline GetDebugAppInstanceResponseBody& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline GetDebugAppInstanceResponseBody& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline GetDebugAppInstanceResponseBody& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDebugAppInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetDebugAppInstanceResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The application ID.
    shared_ptr<string> appId_ {};
    // The ID of the delivery group.
    shared_ptr<string> appInstanceGroupId_ {};
    // The ID of the application instance.
    shared_ptr<string> appInstanceId_ {};
    // The ID of the application version.
    shared_ptr<string> appVersion_ {};
    // The authorization code. This authorization code is valid for 3 minutes and can be used only once, regardless of whether the authentication succeeds. If multiple authentication codes are generated for a user, only the latest authentication code takes effect.
    shared_ptr<string> authCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The user ID.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
