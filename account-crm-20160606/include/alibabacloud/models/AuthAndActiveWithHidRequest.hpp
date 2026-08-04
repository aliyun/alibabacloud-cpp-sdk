// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHANDACTIVEWITHHIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHANDACTIVEWITHHIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class AuthAndActiveWithHidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthAndActiveWithHidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(HavanaId, havanaId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthAndActiveWithHidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(HavanaId, havanaId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    AuthAndActiveWithHidRequest() = default ;
    AuthAndActiveWithHidRequest(const AuthAndActiveWithHidRequest &) = default ;
    AuthAndActiveWithHidRequest(AuthAndActiveWithHidRequest &&) = default ;
    AuthAndActiveWithHidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthAndActiveWithHidRequest() = default ;
    AuthAndActiveWithHidRequest& operator=(const AuthAndActiveWithHidRequest &) = default ;
    AuthAndActiveWithHidRequest& operator=(AuthAndActiveWithHidRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->havanaId_ == nullptr && this->sessionId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline AuthAndActiveWithHidRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // havanaId Field Functions 
    bool hasHavanaId() const { return this->havanaId_ != nullptr;};
    void deleteHavanaId() { this->havanaId_ = nullptr;};
    inline string getHavanaId() const { DARABONBA_PTR_GET_DEFAULT(havanaId_, "") };
    inline AuthAndActiveWithHidRequest& setHavanaId(string havanaId) { DARABONBA_PTR_SET_VALUE(havanaId_, havanaId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline AuthAndActiveWithHidRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> havanaId_ {};
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
