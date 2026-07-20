// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESESSIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATESESSIONINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/JuiceFsConfig.hpp>
#include <alibabacloud/models/NASConfig.hpp>
#include <alibabacloud/models/UpdateSessionNetworkConfig.hpp>
#include <alibabacloud/models/OSSMountConfig.hpp>
#include <alibabacloud/models/PolarFsConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class UpdateSessionInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSessionInput& obj) { 
      DARABONBA_PTR_TO_JSON(allowInternetAccess, allowInternetAccess_);
      DARABONBA_PTR_TO_JSON(disableSessionIdReuse, disableSessionIdReuse_);
      DARABONBA_PTR_TO_JSON(enableAutoPause, enableAutoPause_);
      DARABONBA_PTR_TO_JSON(enableAutoResume, enableAutoResume_);
      DARABONBA_PTR_TO_JSON(juiceFsConfig, juiceFsConfig_);
      DARABONBA_PTR_TO_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_TO_JSON(network, network_);
      DARABONBA_PTR_TO_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_TO_JSON(polarFsConfig, polarFsConfig_);
      DARABONBA_PTR_TO_JSON(sessionIdleTimeoutInSeconds, sessionIdleTimeoutInSeconds_);
      DARABONBA_PTR_TO_JSON(sessionTTLInSeconds, sessionTTLInSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSessionInput& obj) { 
      DARABONBA_PTR_FROM_JSON(allowInternetAccess, allowInternetAccess_);
      DARABONBA_PTR_FROM_JSON(disableSessionIdReuse, disableSessionIdReuse_);
      DARABONBA_PTR_FROM_JSON(enableAutoPause, enableAutoPause_);
      DARABONBA_PTR_FROM_JSON(enableAutoResume, enableAutoResume_);
      DARABONBA_PTR_FROM_JSON(juiceFsConfig, juiceFsConfig_);
      DARABONBA_PTR_FROM_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_FROM_JSON(network, network_);
      DARABONBA_PTR_FROM_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_FROM_JSON(polarFsConfig, polarFsConfig_);
      DARABONBA_PTR_FROM_JSON(sessionIdleTimeoutInSeconds, sessionIdleTimeoutInSeconds_);
      DARABONBA_PTR_FROM_JSON(sessionTTLInSeconds, sessionTTLInSeconds_);
    };
    UpdateSessionInput() = default ;
    UpdateSessionInput(const UpdateSessionInput &) = default ;
    UpdateSessionInput(UpdateSessionInput &&) = default ;
    UpdateSessionInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSessionInput() = default ;
    UpdateSessionInput& operator=(const UpdateSessionInput &) = default ;
    UpdateSessionInput& operator=(UpdateSessionInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowInternetAccess_ == nullptr
        && this->disableSessionIdReuse_ == nullptr && this->enableAutoPause_ == nullptr && this->enableAutoResume_ == nullptr && this->juiceFsConfig_ == nullptr && this->nasConfig_ == nullptr
        && this->network_ == nullptr && this->ossMountConfig_ == nullptr && this->polarFsConfig_ == nullptr && this->sessionIdleTimeoutInSeconds_ == nullptr && this->sessionTTLInSeconds_ == nullptr; };
    // allowInternetAccess Field Functions 
    bool hasAllowInternetAccess() const { return this->allowInternetAccess_ != nullptr;};
    void deleteAllowInternetAccess() { this->allowInternetAccess_ = nullptr;};
    inline bool getAllowInternetAccess() const { DARABONBA_PTR_GET_DEFAULT(allowInternetAccess_, false) };
    inline UpdateSessionInput& setAllowInternetAccess(bool allowInternetAccess) { DARABONBA_PTR_SET_VALUE(allowInternetAccess_, allowInternetAccess) };


    // disableSessionIdReuse Field Functions 
    bool hasDisableSessionIdReuse() const { return this->disableSessionIdReuse_ != nullptr;};
    void deleteDisableSessionIdReuse() { this->disableSessionIdReuse_ = nullptr;};
    inline bool getDisableSessionIdReuse() const { DARABONBA_PTR_GET_DEFAULT(disableSessionIdReuse_, false) };
    inline UpdateSessionInput& setDisableSessionIdReuse(bool disableSessionIdReuse) { DARABONBA_PTR_SET_VALUE(disableSessionIdReuse_, disableSessionIdReuse) };


    // enableAutoPause Field Functions 
    bool hasEnableAutoPause() const { return this->enableAutoPause_ != nullptr;};
    void deleteEnableAutoPause() { this->enableAutoPause_ = nullptr;};
    inline bool getEnableAutoPause() const { DARABONBA_PTR_GET_DEFAULT(enableAutoPause_, false) };
    inline UpdateSessionInput& setEnableAutoPause(bool enableAutoPause) { DARABONBA_PTR_SET_VALUE(enableAutoPause_, enableAutoPause) };


    // enableAutoResume Field Functions 
    bool hasEnableAutoResume() const { return this->enableAutoResume_ != nullptr;};
    void deleteEnableAutoResume() { this->enableAutoResume_ = nullptr;};
    inline bool getEnableAutoResume() const { DARABONBA_PTR_GET_DEFAULT(enableAutoResume_, false) };
    inline UpdateSessionInput& setEnableAutoResume(bool enableAutoResume) { DARABONBA_PTR_SET_VALUE(enableAutoResume_, enableAutoResume) };


    // juiceFsConfig Field Functions 
    bool hasJuiceFsConfig() const { return this->juiceFsConfig_ != nullptr;};
    void deleteJuiceFsConfig() { this->juiceFsConfig_ = nullptr;};
    inline const JuiceFsConfig & getJuiceFsConfig() const { DARABONBA_PTR_GET_CONST(juiceFsConfig_, JuiceFsConfig) };
    inline JuiceFsConfig getJuiceFsConfig() { DARABONBA_PTR_GET(juiceFsConfig_, JuiceFsConfig) };
    inline UpdateSessionInput& setJuiceFsConfig(const JuiceFsConfig & juiceFsConfig) { DARABONBA_PTR_SET_VALUE(juiceFsConfig_, juiceFsConfig) };
    inline UpdateSessionInput& setJuiceFsConfig(JuiceFsConfig && juiceFsConfig) { DARABONBA_PTR_SET_RVALUE(juiceFsConfig_, juiceFsConfig) };


    // nasConfig Field Functions 
    bool hasNasConfig() const { return this->nasConfig_ != nullptr;};
    void deleteNasConfig() { this->nasConfig_ = nullptr;};
    inline const NASConfig & getNasConfig() const { DARABONBA_PTR_GET_CONST(nasConfig_, NASConfig) };
    inline NASConfig getNasConfig() { DARABONBA_PTR_GET(nasConfig_, NASConfig) };
    inline UpdateSessionInput& setNasConfig(const NASConfig & nasConfig) { DARABONBA_PTR_SET_VALUE(nasConfig_, nasConfig) };
    inline UpdateSessionInput& setNasConfig(NASConfig && nasConfig) { DARABONBA_PTR_SET_RVALUE(nasConfig_, nasConfig) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const UpdateSessionNetworkConfig & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, UpdateSessionNetworkConfig) };
    inline UpdateSessionNetworkConfig getNetwork() { DARABONBA_PTR_GET(network_, UpdateSessionNetworkConfig) };
    inline UpdateSessionInput& setNetwork(const UpdateSessionNetworkConfig & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline UpdateSessionInput& setNetwork(UpdateSessionNetworkConfig && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // ossMountConfig Field Functions 
    bool hasOssMountConfig() const { return this->ossMountConfig_ != nullptr;};
    void deleteOssMountConfig() { this->ossMountConfig_ = nullptr;};
    inline const OSSMountConfig & getOssMountConfig() const { DARABONBA_PTR_GET_CONST(ossMountConfig_, OSSMountConfig) };
    inline OSSMountConfig getOssMountConfig() { DARABONBA_PTR_GET(ossMountConfig_, OSSMountConfig) };
    inline UpdateSessionInput& setOssMountConfig(const OSSMountConfig & ossMountConfig) { DARABONBA_PTR_SET_VALUE(ossMountConfig_, ossMountConfig) };
    inline UpdateSessionInput& setOssMountConfig(OSSMountConfig && ossMountConfig) { DARABONBA_PTR_SET_RVALUE(ossMountConfig_, ossMountConfig) };


    // polarFsConfig Field Functions 
    bool hasPolarFsConfig() const { return this->polarFsConfig_ != nullptr;};
    void deletePolarFsConfig() { this->polarFsConfig_ = nullptr;};
    inline const PolarFsConfig & getPolarFsConfig() const { DARABONBA_PTR_GET_CONST(polarFsConfig_, PolarFsConfig) };
    inline PolarFsConfig getPolarFsConfig() { DARABONBA_PTR_GET(polarFsConfig_, PolarFsConfig) };
    inline UpdateSessionInput& setPolarFsConfig(const PolarFsConfig & polarFsConfig) { DARABONBA_PTR_SET_VALUE(polarFsConfig_, polarFsConfig) };
    inline UpdateSessionInput& setPolarFsConfig(PolarFsConfig && polarFsConfig) { DARABONBA_PTR_SET_RVALUE(polarFsConfig_, polarFsConfig) };


    // sessionIdleTimeoutInSeconds Field Functions 
    bool hasSessionIdleTimeoutInSeconds() const { return this->sessionIdleTimeoutInSeconds_ != nullptr;};
    void deleteSessionIdleTimeoutInSeconds() { this->sessionIdleTimeoutInSeconds_ = nullptr;};
    inline int64_t getSessionIdleTimeoutInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTimeoutInSeconds_, 0L) };
    inline UpdateSessionInput& setSessionIdleTimeoutInSeconds(int64_t sessionIdleTimeoutInSeconds) { DARABONBA_PTR_SET_VALUE(sessionIdleTimeoutInSeconds_, sessionIdleTimeoutInSeconds) };


    // sessionTTLInSeconds Field Functions 
    bool hasSessionTTLInSeconds() const { return this->sessionTTLInSeconds_ != nullptr;};
    void deleteSessionTTLInSeconds() { this->sessionTTLInSeconds_ = nullptr;};
    inline int64_t getSessionTTLInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionTTLInSeconds_, 0L) };
    inline UpdateSessionInput& setSessionTTLInSeconds(int64_t sessionTTLInSeconds) { DARABONBA_PTR_SET_VALUE(sessionTTLInSeconds_, sessionTTLInSeconds) };


  protected:
    shared_ptr<bool> allowInternetAccess_ {};
    // Specifies whether to disable session ID reuse after the session expires. Default value: False, which indicates that after a session expires, you can use the same session ID to initiate requests. The system treats the request as a new session and binds it to a new instance. If you set this parameter to True, the session ID cannot be reused after the session expires.
    shared_ptr<bool> disableSessionIdReuse_ {};
    shared_ptr<bool> enableAutoPause_ {};
    shared_ptr<bool> enableAutoResume_ {};
    shared_ptr<JuiceFsConfig> juiceFsConfig_ {};
    shared_ptr<NASConfig> nasConfig_ {};
    shared_ptr<UpdateSessionNetworkConfig> network_ {};
    shared_ptr<OSSMountConfig> ossMountConfig_ {};
    shared_ptr<PolarFsConfig> polarFsConfig_ {};
    // The session idle timeout.
    shared_ptr<int64_t> sessionIdleTimeoutInSeconds_ {};
    // The session lifetime.
    shared_ptr<int64_t> sessionTTLInSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
