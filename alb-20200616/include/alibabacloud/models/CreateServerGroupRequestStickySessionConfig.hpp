// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVERGROUPREQUESTSTICKYSESSIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVERGROUPREQUESTSTICKYSESSIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateServerGroupRequestStickySessionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServerGroupRequestStickySessionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Cookie, cookie_);
      DARABONBA_PTR_TO_JSON(CookieTimeout, cookieTimeout_);
      DARABONBA_PTR_TO_JSON(StickySessionEnabled, stickySessionEnabled_);
      DARABONBA_PTR_TO_JSON(StickySessionType, stickySessionType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServerGroupRequestStickySessionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Cookie, cookie_);
      DARABONBA_PTR_FROM_JSON(CookieTimeout, cookieTimeout_);
      DARABONBA_PTR_FROM_JSON(StickySessionEnabled, stickySessionEnabled_);
      DARABONBA_PTR_FROM_JSON(StickySessionType, stickySessionType_);
    };
    CreateServerGroupRequestStickySessionConfig() = default ;
    CreateServerGroupRequestStickySessionConfig(const CreateServerGroupRequestStickySessionConfig &) = default ;
    CreateServerGroupRequestStickySessionConfig(CreateServerGroupRequestStickySessionConfig &&) = default ;
    CreateServerGroupRequestStickySessionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServerGroupRequestStickySessionConfig() = default ;
    CreateServerGroupRequestStickySessionConfig& operator=(const CreateServerGroupRequestStickySessionConfig &) = default ;
    CreateServerGroupRequestStickySessionConfig& operator=(CreateServerGroupRequestStickySessionConfig &&) = default ;
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
    inline CreateServerGroupRequestStickySessionConfig& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


    // cookieTimeout Field Functions 
    bool hasCookieTimeout() const { return this->cookieTimeout_ != nullptr;};
    void deleteCookieTimeout() { this->cookieTimeout_ = nullptr;};
    inline int32_t cookieTimeout() const { DARABONBA_PTR_GET_DEFAULT(cookieTimeout_, 0) };
    inline CreateServerGroupRequestStickySessionConfig& setCookieTimeout(int32_t cookieTimeout) { DARABONBA_PTR_SET_VALUE(cookieTimeout_, cookieTimeout) };


    // stickySessionEnabled Field Functions 
    bool hasStickySessionEnabled() const { return this->stickySessionEnabled_ != nullptr;};
    void deleteStickySessionEnabled() { this->stickySessionEnabled_ = nullptr;};
    inline bool stickySessionEnabled() const { DARABONBA_PTR_GET_DEFAULT(stickySessionEnabled_, false) };
    inline CreateServerGroupRequestStickySessionConfig& setStickySessionEnabled(bool stickySessionEnabled) { DARABONBA_PTR_SET_VALUE(stickySessionEnabled_, stickySessionEnabled) };


    // stickySessionType Field Functions 
    bool hasStickySessionType() const { return this->stickySessionType_ != nullptr;};
    void deleteStickySessionType() { this->stickySessionType_ = nullptr;};
    inline string stickySessionType() const { DARABONBA_PTR_GET_DEFAULT(stickySessionType_, "") };
    inline CreateServerGroupRequestStickySessionConfig& setStickySessionType(string stickySessionType) { DARABONBA_PTR_SET_VALUE(stickySessionType_, stickySessionType) };


  protected:
    // The cookie that you want to configure for the server.
    // 
    // The cookie must be 1 to 200 characters in length, and can contain only ASCII letters and digits. It cannot contain commas (,), semicolons (;), or space characters. It cannot start with a dollar sign ($).
    // 
    // >  This parameter takes effect only when **StickySessionEnabled** is set to **true** and **StickySessionType** is set to **server**.
    std::shared_ptr<string> cookie_ = nullptr;
    // The maximum amount of time to wait before the session cookie expires. Unit: seconds
    // 
    // Valid values: **1** to **86400**
    // 
    // Default value: **1000**
    // 
    // >  This parameter takes effect only when **StickySessionEnabled** is set to **true** and **StickySessionType** is set to **Insert**.
    std::shared_ptr<int32_t> cookieTimeout_ = nullptr;
    // Specifies whether to enable session persistence. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter takes effect when the **ServerGroupType** parameter is set to **Instance** or **Ip**.
    std::shared_ptr<bool> stickySessionEnabled_ = nullptr;
    // The method that is used to handle cookies. Valid values:
    // 
    // *   **Insert** (default value): inserts a cookie. The first time a client accesses ALB, ALB inserts the SERVERID cookie into the HTTP or HTTPS response packet. Subsequent requests from the client that carry this cookie are forwarded to the same backend server as the first request.
    // *   **Server**: rewrites a cookie. ALB rewrites the custom cookies in requests from a client. Subsequent requests from the client that carry the new cookie are forwarded to the same backend server as the first request.
    // 
    // >  This parameter takes effect when the **StickySessionEnabled** parameter is set to **true**.
    std::shared_ptr<string> stickySessionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
