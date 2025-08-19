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
      DARABONBA_PTR_TO_JSON(sessionConcurrencyPerInstance, sessionConcurrencyPerInstance_);
      DARABONBA_PTR_TO_JSON(sessionIdleTimeoutInSeconds, sessionIdleTimeoutInSeconds_);
      DARABONBA_PTR_TO_JSON(sessionTTLInSeconds, sessionTTLInSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, HeaderFieldSessionAffinityConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(affinityHeaderFieldName, affinityHeaderFieldName_);
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
    virtual bool empty() const override { this->affinityHeaderFieldName_ != nullptr
        && this->sessionConcurrencyPerInstance_ != nullptr && this->sessionIdleTimeoutInSeconds_ != nullptr && this->sessionTTLInSeconds_ != nullptr; };
    // affinityHeaderFieldName Field Functions 
    bool hasAffinityHeaderFieldName() const { return this->affinityHeaderFieldName_ != nullptr;};
    void deleteAffinityHeaderFieldName() { this->affinityHeaderFieldName_ = nullptr;};
    inline string affinityHeaderFieldName() const { DARABONBA_PTR_GET_DEFAULT(affinityHeaderFieldName_, "") };
    inline HeaderFieldSessionAffinityConfig& setAffinityHeaderFieldName(string affinityHeaderFieldName) { DARABONBA_PTR_SET_VALUE(affinityHeaderFieldName_, affinityHeaderFieldName) };


    // sessionConcurrencyPerInstance Field Functions 
    bool hasSessionConcurrencyPerInstance() const { return this->sessionConcurrencyPerInstance_ != nullptr;};
    void deleteSessionConcurrencyPerInstance() { this->sessionConcurrencyPerInstance_ = nullptr;};
    inline int64_t sessionConcurrencyPerInstance() const { DARABONBA_PTR_GET_DEFAULT(sessionConcurrencyPerInstance_, 0L) };
    inline HeaderFieldSessionAffinityConfig& setSessionConcurrencyPerInstance(int64_t sessionConcurrencyPerInstance) { DARABONBA_PTR_SET_VALUE(sessionConcurrencyPerInstance_, sessionConcurrencyPerInstance) };


    // sessionIdleTimeoutInSeconds Field Functions 
    bool hasSessionIdleTimeoutInSeconds() const { return this->sessionIdleTimeoutInSeconds_ != nullptr;};
    void deleteSessionIdleTimeoutInSeconds() { this->sessionIdleTimeoutInSeconds_ = nullptr;};
    inline int64_t sessionIdleTimeoutInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTimeoutInSeconds_, 0L) };
    inline HeaderFieldSessionAffinityConfig& setSessionIdleTimeoutInSeconds(int64_t sessionIdleTimeoutInSeconds) { DARABONBA_PTR_SET_VALUE(sessionIdleTimeoutInSeconds_, sessionIdleTimeoutInSeconds) };


    // sessionTTLInSeconds Field Functions 
    bool hasSessionTTLInSeconds() const { return this->sessionTTLInSeconds_ != nullptr;};
    void deleteSessionTTLInSeconds() { this->sessionTTLInSeconds_ = nullptr;};
    inline int64_t sessionTTLInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionTTLInSeconds_, 0L) };
    inline HeaderFieldSessionAffinityConfig& setSessionTTLInSeconds(int64_t sessionTTLInSeconds) { DARABONBA_PTR_SET_VALUE(sessionTTLInSeconds_, sessionTTLInSeconds) };


  protected:
    std::shared_ptr<string> affinityHeaderFieldName_ = nullptr;
    std::shared_ptr<int64_t> sessionConcurrencyPerInstance_ = nullptr;
    std::shared_ptr<int64_t> sessionIdleTimeoutInSeconds_ = nullptr;
    std::shared_ptr<int64_t> sessionTTLInSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
