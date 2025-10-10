// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODYSERVERGROUPSSTICKYSESSIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODYSERVERGROUPSSTICKYSESSIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListServerGroupsResponseBodyServerGroupsStickySessionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerGroupsResponseBodyServerGroupsStickySessionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Cookie, cookie_);
      DARABONBA_PTR_TO_JSON(CookieTimeout, cookieTimeout_);
      DARABONBA_PTR_TO_JSON(StickySessionEnabled, stickySessionEnabled_);
      DARABONBA_PTR_TO_JSON(StickySessionType, stickySessionType_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerGroupsResponseBodyServerGroupsStickySessionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Cookie, cookie_);
      DARABONBA_PTR_FROM_JSON(CookieTimeout, cookieTimeout_);
      DARABONBA_PTR_FROM_JSON(StickySessionEnabled, stickySessionEnabled_);
      DARABONBA_PTR_FROM_JSON(StickySessionType, stickySessionType_);
    };
    ListServerGroupsResponseBodyServerGroupsStickySessionConfig() = default ;
    ListServerGroupsResponseBodyServerGroupsStickySessionConfig(const ListServerGroupsResponseBodyServerGroupsStickySessionConfig &) = default ;
    ListServerGroupsResponseBodyServerGroupsStickySessionConfig(ListServerGroupsResponseBodyServerGroupsStickySessionConfig &&) = default ;
    ListServerGroupsResponseBodyServerGroupsStickySessionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServerGroupsResponseBodyServerGroupsStickySessionConfig() = default ;
    ListServerGroupsResponseBodyServerGroupsStickySessionConfig& operator=(const ListServerGroupsResponseBodyServerGroupsStickySessionConfig &) = default ;
    ListServerGroupsResponseBodyServerGroupsStickySessionConfig& operator=(ListServerGroupsResponseBodyServerGroupsStickySessionConfig &&) = default ;
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
    inline ListServerGroupsResponseBodyServerGroupsStickySessionConfig& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


    // cookieTimeout Field Functions 
    bool hasCookieTimeout() const { return this->cookieTimeout_ != nullptr;};
    void deleteCookieTimeout() { this->cookieTimeout_ = nullptr;};
    inline int32_t cookieTimeout() const { DARABONBA_PTR_GET_DEFAULT(cookieTimeout_, 0) };
    inline ListServerGroupsResponseBodyServerGroupsStickySessionConfig& setCookieTimeout(int32_t cookieTimeout) { DARABONBA_PTR_SET_VALUE(cookieTimeout_, cookieTimeout) };


    // stickySessionEnabled Field Functions 
    bool hasStickySessionEnabled() const { return this->stickySessionEnabled_ != nullptr;};
    void deleteStickySessionEnabled() { this->stickySessionEnabled_ = nullptr;};
    inline bool stickySessionEnabled() const { DARABONBA_PTR_GET_DEFAULT(stickySessionEnabled_, false) };
    inline ListServerGroupsResponseBodyServerGroupsStickySessionConfig& setStickySessionEnabled(bool stickySessionEnabled) { DARABONBA_PTR_SET_VALUE(stickySessionEnabled_, stickySessionEnabled) };


    // stickySessionType Field Functions 
    bool hasStickySessionType() const { return this->stickySessionType_ != nullptr;};
    void deleteStickySessionType() { this->stickySessionType_ = nullptr;};
    inline string stickySessionType() const { DARABONBA_PTR_GET_DEFAULT(stickySessionType_, "") };
    inline ListServerGroupsResponseBodyServerGroupsStickySessionConfig& setStickySessionType(string stickySessionType) { DARABONBA_PTR_SET_VALUE(stickySessionType_, stickySessionType) };


  protected:
    // The cookie configured for the server.
    std::shared_ptr<string> cookie_ = nullptr;
    // The timeout period of the cookie. Unit: seconds. Valid values: **1** to **86400**.
    // 
    // >  This parameter takes effect only when **StickySessionEnabled** is set to **true** and **StickySessionType** is set to **Insert**.
    std::shared_ptr<int32_t> cookieTimeout_ = nullptr;
    // Indicates whether session persistence is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> stickySessionEnabled_ = nullptr;
    // The method that is used to handle the cookie. Valid values:
    // 
    // *   **insert**: inserts the cookie. The first time a client accesses ALB, ALB inserts the SERVERID cookie into the HTTP or HTTPS response packet. Subsequent requests from the client that carry this cookie are forwarded to the same backend server as the first request.
    // *   **Server**: rewrites the cookie. ALB rewrites the custom cookies in requests from a client. Subsequent requests from the client that carry the new cookie are forwarded to the same backend server as the first request.
    std::shared_ptr<string> stickySessionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
