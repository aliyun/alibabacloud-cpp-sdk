// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVERGROUPATTRIBUTEREQUESTSTICKYSESSIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVERGROUPATTRIBUTEREQUESTSTICKYSESSIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateServerGroupAttributeRequestStickySessionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServerGroupAttributeRequestStickySessionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Cookie, cookie_);
      DARABONBA_PTR_TO_JSON(CookieTimeout, cookieTimeout_);
      DARABONBA_PTR_TO_JSON(StickySessionEnabled, stickySessionEnabled_);
      DARABONBA_PTR_TO_JSON(StickySessionType, stickySessionType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServerGroupAttributeRequestStickySessionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Cookie, cookie_);
      DARABONBA_PTR_FROM_JSON(CookieTimeout, cookieTimeout_);
      DARABONBA_PTR_FROM_JSON(StickySessionEnabled, stickySessionEnabled_);
      DARABONBA_PTR_FROM_JSON(StickySessionType, stickySessionType_);
    };
    UpdateServerGroupAttributeRequestStickySessionConfig() = default ;
    UpdateServerGroupAttributeRequestStickySessionConfig(const UpdateServerGroupAttributeRequestStickySessionConfig &) = default ;
    UpdateServerGroupAttributeRequestStickySessionConfig(UpdateServerGroupAttributeRequestStickySessionConfig &&) = default ;
    UpdateServerGroupAttributeRequestStickySessionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServerGroupAttributeRequestStickySessionConfig() = default ;
    UpdateServerGroupAttributeRequestStickySessionConfig& operator=(const UpdateServerGroupAttributeRequestStickySessionConfig &) = default ;
    UpdateServerGroupAttributeRequestStickySessionConfig& operator=(UpdateServerGroupAttributeRequestStickySessionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cookie_ != nullptr
        && this->cookieTimeout_ != nullptr && this->stickySessionEnabled_ != nullptr && this->stickySessionType_ != nullptr; };
    // cookie Field Functions 
    bool hasCookie() const { return this->cookie_ != nullptr;};
    void deleteCookie() { this->cookie_ = nullptr;};
    inline string cookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
    inline UpdateServerGroupAttributeRequestStickySessionConfig& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


    // cookieTimeout Field Functions 
    bool hasCookieTimeout() const { return this->cookieTimeout_ != nullptr;};
    void deleteCookieTimeout() { this->cookieTimeout_ = nullptr;};
    inline int32_t cookieTimeout() const { DARABONBA_PTR_GET_DEFAULT(cookieTimeout_, 0) };
    inline UpdateServerGroupAttributeRequestStickySessionConfig& setCookieTimeout(int32_t cookieTimeout) { DARABONBA_PTR_SET_VALUE(cookieTimeout_, cookieTimeout) };


    // stickySessionEnabled Field Functions 
    bool hasStickySessionEnabled() const { return this->stickySessionEnabled_ != nullptr;};
    void deleteStickySessionEnabled() { this->stickySessionEnabled_ = nullptr;};
    inline bool stickySessionEnabled() const { DARABONBA_PTR_GET_DEFAULT(stickySessionEnabled_, false) };
    inline UpdateServerGroupAttributeRequestStickySessionConfig& setStickySessionEnabled(bool stickySessionEnabled) { DARABONBA_PTR_SET_VALUE(stickySessionEnabled_, stickySessionEnabled) };


    // stickySessionType Field Functions 
    bool hasStickySessionType() const { return this->stickySessionType_ != nullptr;};
    void deleteStickySessionType() { this->stickySessionType_ = nullptr;};
    inline string stickySessionType() const { DARABONBA_PTR_GET_DEFAULT(stickySessionType_, "") };
    inline UpdateServerGroupAttributeRequestStickySessionConfig& setStickySessionType(string stickySessionType) { DARABONBA_PTR_SET_VALUE(stickySessionType_, stickySessionType) };


  protected:
    // The cookie to be configured on the server.
    // 
    // The cookie must be 1 to 200 characters in length and can contain only ASCII characters and digits. It cannot contain commas (,), semicolons (;), or space characters. It cannot start with a dollar sign ($).
    // 
    // > This parameter takes effect when the **StickySessionEnabled** parameter is set to **true** and the **StickySessionType** parameter is set to **Server**.
    std::shared_ptr<string> cookie_ = nullptr;
    // The timeout period of a cookie. Unit: seconds.
    // 
    // Valid values: **1** to **86400**.
    // 
    // > This parameter takes effect when the **StickySessionEnabled** parameter is set to **true** and the **StickySessionType** parameter is set to **Insert**.
    std::shared_ptr<int32_t> cookieTimeout_ = nullptr;
    // Specifies whether to enable session persistence. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> stickySessionEnabled_ = nullptr;
    // The method that is used to handle a cookie. Valid values:
    // 
    // *   **Insert**: inserts a cookie.
    // 
    // ALB inserts a cookie (SERVERID) into the first HTTP or HTTPS response packet that is sent to a client. The next request from the client contains this cookie and the listener forwards this request to the recorded backend server.
    // 
    // *   **Server**: rewrites a cookie.
    // 
    // When ALB detects a user-defined cookie, it overwrites the original cookie with the user-defined cookie. Subsequent requests to ALB carry this user-defined cookie, and ALB determines the destination servers of the requests based on the cookies.
    // 
    // > This parameter takes effect when the **StickySessionEnabled** parameter is set to **true** for the server group.
    std::shared_ptr<string> stickySessionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
