// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COOKIESESSIONAFFINITYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_COOKIESESSIONAFFINITYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CookieSessionAffinityConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CookieSessionAffinityConfig& obj) { 
      DARABONBA_PTR_TO_JSON(disableSessionIdReuse, disableSessionIdReuse_);
      DARABONBA_PTR_TO_JSON(sessionConcurrencyPerInstance, sessionConcurrencyPerInstance_);
      DARABONBA_PTR_TO_JSON(sessionIdleTimeoutInSeconds, sessionIdleTimeoutInSeconds_);
      DARABONBA_PTR_TO_JSON(sessionTTLInSeconds, sessionTTLInSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, CookieSessionAffinityConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(disableSessionIdReuse, disableSessionIdReuse_);
      DARABONBA_PTR_FROM_JSON(sessionConcurrencyPerInstance, sessionConcurrencyPerInstance_);
      DARABONBA_PTR_FROM_JSON(sessionIdleTimeoutInSeconds, sessionIdleTimeoutInSeconds_);
      DARABONBA_PTR_FROM_JSON(sessionTTLInSeconds, sessionTTLInSeconds_);
    };
    CookieSessionAffinityConfig() = default ;
    CookieSessionAffinityConfig(const CookieSessionAffinityConfig &) = default ;
    CookieSessionAffinityConfig(CookieSessionAffinityConfig &&) = default ;
    CookieSessionAffinityConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CookieSessionAffinityConfig() = default ;
    CookieSessionAffinityConfig& operator=(const CookieSessionAffinityConfig &) = default ;
    CookieSessionAffinityConfig& operator=(CookieSessionAffinityConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disableSessionIdReuse_ == nullptr
        && return this->sessionConcurrencyPerInstance_ == nullptr && return this->sessionIdleTimeoutInSeconds_ == nullptr && return this->sessionTTLInSeconds_ == nullptr; };
    // disableSessionIdReuse Field Functions 
    bool hasDisableSessionIdReuse() const { return this->disableSessionIdReuse_ != nullptr;};
    void deleteDisableSessionIdReuse() { this->disableSessionIdReuse_ = nullptr;};
    inline bool disableSessionIdReuse() const { DARABONBA_PTR_GET_DEFAULT(disableSessionIdReuse_, false) };
    inline CookieSessionAffinityConfig& setDisableSessionIdReuse(bool disableSessionIdReuse) { DARABONBA_PTR_SET_VALUE(disableSessionIdReuse_, disableSessionIdReuse) };


    // sessionConcurrencyPerInstance Field Functions 
    bool hasSessionConcurrencyPerInstance() const { return this->sessionConcurrencyPerInstance_ != nullptr;};
    void deleteSessionConcurrencyPerInstance() { this->sessionConcurrencyPerInstance_ = nullptr;};
    inline int64_t sessionConcurrencyPerInstance() const { DARABONBA_PTR_GET_DEFAULT(sessionConcurrencyPerInstance_, 0L) };
    inline CookieSessionAffinityConfig& setSessionConcurrencyPerInstance(int64_t sessionConcurrencyPerInstance) { DARABONBA_PTR_SET_VALUE(sessionConcurrencyPerInstance_, sessionConcurrencyPerInstance) };


    // sessionIdleTimeoutInSeconds Field Functions 
    bool hasSessionIdleTimeoutInSeconds() const { return this->sessionIdleTimeoutInSeconds_ != nullptr;};
    void deleteSessionIdleTimeoutInSeconds() { this->sessionIdleTimeoutInSeconds_ = nullptr;};
    inline int64_t sessionIdleTimeoutInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTimeoutInSeconds_, 0L) };
    inline CookieSessionAffinityConfig& setSessionIdleTimeoutInSeconds(int64_t sessionIdleTimeoutInSeconds) { DARABONBA_PTR_SET_VALUE(sessionIdleTimeoutInSeconds_, sessionIdleTimeoutInSeconds) };


    // sessionTTLInSeconds Field Functions 
    bool hasSessionTTLInSeconds() const { return this->sessionTTLInSeconds_ != nullptr;};
    void deleteSessionTTLInSeconds() { this->sessionTTLInSeconds_ = nullptr;};
    inline int64_t sessionTTLInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionTTLInSeconds_, 0L) };
    inline CookieSessionAffinityConfig& setSessionTTLInSeconds(int64_t sessionTTLInSeconds) { DARABONBA_PTR_SET_VALUE(sessionTTLInSeconds_, sessionTTLInSeconds) };


  protected:
    std::shared_ptr<bool> disableSessionIdReuse_ = nullptr;
    std::shared_ptr<int64_t> sessionConcurrencyPerInstance_ = nullptr;
    std::shared_ptr<int64_t> sessionIdleTimeoutInSeconds_ = nullptr;
    std::shared_ptr<int64_t> sessionTTLInSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
