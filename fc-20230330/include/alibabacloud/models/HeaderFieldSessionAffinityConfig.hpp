// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HEADERFIELDSESSIONAFFINITYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HEADERFIELDSESSIONAFFINITYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class HeaderFieldSessionAffinityConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HeaderFieldSessionAffinityConfig& obj) { 
      DARABONBA_PTR_TO_JSON(affinityHeaderFieldName, affinityHeaderFieldName_);
      DARABONBA_PTR_TO_JSON(disableSessionIdReuse, disableSessionIdReuse_);
      DARABONBA_PTR_TO_JSON(sessionConcurrencyPerInstance, sessionConcurrencyPerInstance_);
      DARABONBA_PTR_TO_JSON(sessionIdleTimeoutInSeconds, sessionIdleTimeoutInSeconds_);
      DARABONBA_PTR_TO_JSON(sessionTTLInSeconds, sessionTTLInSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, HeaderFieldSessionAffinityConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(affinityHeaderFieldName, affinityHeaderFieldName_);
      DARABONBA_PTR_FROM_JSON(disableSessionIdReuse, disableSessionIdReuse_);
      DARABONBA_PTR_FROM_JSON(sessionConcurrencyPerInstance, sessionConcurrencyPerInstance_);
      DARABONBA_PTR_FROM_JSON(sessionIdleTimeoutInSeconds, sessionIdleTimeoutInSeconds_);
      DARABONBA_PTR_FROM_JSON(sessionTTLInSeconds, sessionTTLInSeconds_);
    };
    HeaderFieldSessionAffinityConfig() = default ;
    HeaderFieldSessionAffinityConfig(const HeaderFieldSessionAffinityConfig &) = default ;
    HeaderFieldSessionAffinityConfig(HeaderFieldSessionAffinityConfig &&) = default ;
    HeaderFieldSessionAffinityConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HeaderFieldSessionAffinityConfig() = default ;
    HeaderFieldSessionAffinityConfig& operator=(const HeaderFieldSessionAffinityConfig &) = default ;
    HeaderFieldSessionAffinityConfig& operator=(HeaderFieldSessionAffinityConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->affinityHeaderFieldName_ == nullptr
        && this->disableSessionIdReuse_ == nullptr && this->sessionConcurrencyPerInstance_ == nullptr && this->sessionIdleTimeoutInSeconds_ == nullptr && this->sessionTTLInSeconds_ == nullptr; };
    // affinityHeaderFieldName Field Functions 
    bool hasAffinityHeaderFieldName() const { return this->affinityHeaderFieldName_ != nullptr;};
    void deleteAffinityHeaderFieldName() { this->affinityHeaderFieldName_ = nullptr;};
    inline string getAffinityHeaderFieldName() const { DARABONBA_PTR_GET_DEFAULT(affinityHeaderFieldName_, "") };
    inline HeaderFieldSessionAffinityConfig& setAffinityHeaderFieldName(string affinityHeaderFieldName) { DARABONBA_PTR_SET_VALUE(affinityHeaderFieldName_, affinityHeaderFieldName) };


    // disableSessionIdReuse Field Functions 
    bool hasDisableSessionIdReuse() const { return this->disableSessionIdReuse_ != nullptr;};
    void deleteDisableSessionIdReuse() { this->disableSessionIdReuse_ = nullptr;};
    inline bool getDisableSessionIdReuse() const { DARABONBA_PTR_GET_DEFAULT(disableSessionIdReuse_, false) };
    inline HeaderFieldSessionAffinityConfig& setDisableSessionIdReuse(bool disableSessionIdReuse) { DARABONBA_PTR_SET_VALUE(disableSessionIdReuse_, disableSessionIdReuse) };


    // sessionConcurrencyPerInstance Field Functions 
    bool hasSessionConcurrencyPerInstance() const { return this->sessionConcurrencyPerInstance_ != nullptr;};
    void deleteSessionConcurrencyPerInstance() { this->sessionConcurrencyPerInstance_ = nullptr;};
    inline int64_t getSessionConcurrencyPerInstance() const { DARABONBA_PTR_GET_DEFAULT(sessionConcurrencyPerInstance_, 0L) };
    inline HeaderFieldSessionAffinityConfig& setSessionConcurrencyPerInstance(int64_t sessionConcurrencyPerInstance) { DARABONBA_PTR_SET_VALUE(sessionConcurrencyPerInstance_, sessionConcurrencyPerInstance) };


    // sessionIdleTimeoutInSeconds Field Functions 
    bool hasSessionIdleTimeoutInSeconds() const { return this->sessionIdleTimeoutInSeconds_ != nullptr;};
    void deleteSessionIdleTimeoutInSeconds() { this->sessionIdleTimeoutInSeconds_ = nullptr;};
    inline int64_t getSessionIdleTimeoutInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTimeoutInSeconds_, 0L) };
    inline HeaderFieldSessionAffinityConfig& setSessionIdleTimeoutInSeconds(int64_t sessionIdleTimeoutInSeconds) { DARABONBA_PTR_SET_VALUE(sessionIdleTimeoutInSeconds_, sessionIdleTimeoutInSeconds) };


    // sessionTTLInSeconds Field Functions 
    bool hasSessionTTLInSeconds() const { return this->sessionTTLInSeconds_ != nullptr;};
    void deleteSessionTTLInSeconds() { this->sessionTTLInSeconds_ = nullptr;};
    inline int64_t getSessionTTLInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionTTLInSeconds_, 0L) };
    inline HeaderFieldSessionAffinityConfig& setSessionTTLInSeconds(int64_t sessionTTLInSeconds) { DARABONBA_PTR_SET_VALUE(sessionTTLInSeconds_, sessionTTLInSeconds) };


  protected:
    // The name of the HTTP request header that passes the client session identity. The name must be 5 to 40 characters long, start with a letter, and contain only letters, numbers, hyphens (-), and underscores (_). The name cannot start with the x-fc- prefix.
    shared_ptr<string> affinityHeaderFieldName_ {};
    // The default value is False. If set to False, a session ID can be reused in a new request after the original session expires. The system treats this as a new session and attaches it to a new instance. If set to True, an expired session ID cannot be reused.
    shared_ptr<bool> disableSessionIdReuse_ {};
    // The maximum number of sessions that a single instance can process simultaneously. The value must be an integer from 1 to 200.
    shared_ptr<int64_t> sessionConcurrencyPerInstance_ {};
    // The idle timeout period for a session in seconds. A session becomes idle if no operations are performed within this period. The maximum value cannot exceed the session\\"s TTL. The value must be an integer from 0 to 21600.
    shared_ptr<int64_t> sessionIdleTimeoutInSeconds_ {};
    // The session\\"s Time to Live (TTL) in seconds. This defines the entire lifecycle of a session, from creation to destruction. After this period expires, Function Compute automatically destroys the session and no longer guarantees affinity. The value must be an integer from 1 to 21600.
    shared_ptr<int64_t> sessionTTLInSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
