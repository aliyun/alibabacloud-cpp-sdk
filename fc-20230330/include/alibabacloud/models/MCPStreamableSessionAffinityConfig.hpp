// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MCPSTREAMABLESESSIONAFFINITYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MCPSTREAMABLESESSIONAFFINITYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class MCPStreamableSessionAffinityConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MCPStreamableSessionAffinityConfig& obj) { 
      DARABONBA_PTR_TO_JSON(sessionConcurrencyPerInstance, sessionConcurrencyPerInstance_);
      DARABONBA_PTR_TO_JSON(sessionIdleTimeoutInSeconds, sessionIdleTimeoutInSeconds_);
      DARABONBA_PTR_TO_JSON(sessionTTLInSeconds, sessionTTLInSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, MCPStreamableSessionAffinityConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionConcurrencyPerInstance, sessionConcurrencyPerInstance_);
      DARABONBA_PTR_FROM_JSON(sessionIdleTimeoutInSeconds, sessionIdleTimeoutInSeconds_);
      DARABONBA_PTR_FROM_JSON(sessionTTLInSeconds, sessionTTLInSeconds_);
    };
    MCPStreamableSessionAffinityConfig() = default ;
    MCPStreamableSessionAffinityConfig(const MCPStreamableSessionAffinityConfig &) = default ;
    MCPStreamableSessionAffinityConfig(MCPStreamableSessionAffinityConfig &&) = default ;
    MCPStreamableSessionAffinityConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MCPStreamableSessionAffinityConfig() = default ;
    MCPStreamableSessionAffinityConfig& operator=(const MCPStreamableSessionAffinityConfig &) = default ;
    MCPStreamableSessionAffinityConfig& operator=(MCPStreamableSessionAffinityConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionConcurrencyPerInstance_ == nullptr
        && this->sessionIdleTimeoutInSeconds_ == nullptr && this->sessionTTLInSeconds_ == nullptr; };
    // sessionConcurrencyPerInstance Field Functions 
    bool hasSessionConcurrencyPerInstance() const { return this->sessionConcurrencyPerInstance_ != nullptr;};
    void deleteSessionConcurrencyPerInstance() { this->sessionConcurrencyPerInstance_ = nullptr;};
    inline int64_t getSessionConcurrencyPerInstance() const { DARABONBA_PTR_GET_DEFAULT(sessionConcurrencyPerInstance_, 0L) };
    inline MCPStreamableSessionAffinityConfig& setSessionConcurrencyPerInstance(int64_t sessionConcurrencyPerInstance) { DARABONBA_PTR_SET_VALUE(sessionConcurrencyPerInstance_, sessionConcurrencyPerInstance) };


    // sessionIdleTimeoutInSeconds Field Functions 
    bool hasSessionIdleTimeoutInSeconds() const { return this->sessionIdleTimeoutInSeconds_ != nullptr;};
    void deleteSessionIdleTimeoutInSeconds() { this->sessionIdleTimeoutInSeconds_ = nullptr;};
    inline int64_t getSessionIdleTimeoutInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTimeoutInSeconds_, 0L) };
    inline MCPStreamableSessionAffinityConfig& setSessionIdleTimeoutInSeconds(int64_t sessionIdleTimeoutInSeconds) { DARABONBA_PTR_SET_VALUE(sessionIdleTimeoutInSeconds_, sessionIdleTimeoutInSeconds) };


    // sessionTTLInSeconds Field Functions 
    bool hasSessionTTLInSeconds() const { return this->sessionTTLInSeconds_ != nullptr;};
    void deleteSessionTTLInSeconds() { this->sessionTTLInSeconds_ = nullptr;};
    inline int64_t getSessionTTLInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionTTLInSeconds_, 0L) };
    inline MCPStreamableSessionAffinityConfig& setSessionTTLInSeconds(int64_t sessionTTLInSeconds) { DARABONBA_PTR_SET_VALUE(sessionTTLInSeconds_, sessionTTLInSeconds) };


  protected:
    // The maximum number of sessions for simultaneous processing by a single instance. Valid values: 1 to 200.
    shared_ptr<int64_t> sessionConcurrencyPerInstance_ {};
    // The maximum idle time in seconds before a session enters an idle state due to user inactivity. The maximum duration is the upper limit of a single session lifecycle. Valid values: 0 to 21600.
    shared_ptr<int64_t> sessionIdleTimeoutInSeconds_ {};
    // The time-to-live of a session in seconds, covering the entire process from creation and usage to final destruction. If the time-to-live is exceeded, Function Compute automatically destroys the session and no longer guarantees affinity. Valid values: 1 to 21600.
    shared_ptr<int64_t> sessionTTLInSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
