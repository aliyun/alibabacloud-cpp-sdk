// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHLOGINTICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHLOGINTICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class AuthLoginTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthLoginTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(MinorAuthCode, minorAuthCode_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
    };
    friend void from_json(const Darabonba::Json& j, AuthLoginTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(MinorAuthCode, minorAuthCode_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
    };
    AuthLoginTicketRequest() = default ;
    AuthLoginTicketRequest(const AuthLoginTicketRequest &) = default ;
    AuthLoginTicketRequest(AuthLoginTicketRequest &&) = default ;
    AuthLoginTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthLoginTicketRequest() = default ;
    AuthLoginTicketRequest& operator=(const AuthLoginTicketRequest &) = default ;
    AuthLoginTicketRequest& operator=(AuthLoginTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->authCode_ == nullptr && this->minorAuthCode_ == nullptr && this->scene_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline AuthLoginTicketRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline AuthLoginTicketRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // minorAuthCode Field Functions 
    bool hasMinorAuthCode() const { return this->minorAuthCode_ != nullptr;};
    void deleteMinorAuthCode() { this->minorAuthCode_ = nullptr;};
    inline string getMinorAuthCode() const { DARABONBA_PTR_GET_DEFAULT(minorAuthCode_, "") };
    inline AuthLoginTicketRequest& setMinorAuthCode(string minorAuthCode) { DARABONBA_PTR_SET_VALUE(minorAuthCode_, minorAuthCode) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline AuthLoginTicketRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> authCode_ {};
    // This parameter is required.
    shared_ptr<string> minorAuthCode_ {};
    // This parameter is required.
    shared_ptr<string> scene_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
