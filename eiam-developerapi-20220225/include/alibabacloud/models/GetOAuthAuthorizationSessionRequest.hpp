// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOAUTHAUTHORIZATIONSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOAUTHAUTHORIZATIONSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GetOAuthAuthorizationSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOAuthAuthorizationSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sessionUri, sessionUri_);
    };
    friend void from_json(const Darabonba::Json& j, GetOAuthAuthorizationSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionUri, sessionUri_);
    };
    GetOAuthAuthorizationSessionRequest() = default ;
    GetOAuthAuthorizationSessionRequest(const GetOAuthAuthorizationSessionRequest &) = default ;
    GetOAuthAuthorizationSessionRequest(GetOAuthAuthorizationSessionRequest &&) = default ;
    GetOAuthAuthorizationSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOAuthAuthorizationSessionRequest() = default ;
    GetOAuthAuthorizationSessionRequest& operator=(const GetOAuthAuthorizationSessionRequest &) = default ;
    GetOAuthAuthorizationSessionRequest& operator=(GetOAuthAuthorizationSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionUri_ == nullptr; };
    // sessionUri Field Functions 
    bool hasSessionUri() const { return this->sessionUri_ != nullptr;};
    void deleteSessionUri() { this->sessionUri_ = nullptr;};
    inline string getSessionUri() const { DARABONBA_PTR_GET_DEFAULT(sessionUri_, "") };
    inline GetOAuthAuthorizationSessionRequest& setSessionUri(string sessionUri) { DARABONBA_PTR_SET_VALUE(sessionUri_, sessionUri) };


  protected:
    // The authorization session URI.
    // 
    // > Returned by the FetchOAuthAuthenticationToken call.
    // 
    // This parameter is required.
    shared_ptr<string> sessionUri_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
