// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SESSION_HPP_
#define ALIBABACLOUD_MODELS_SESSION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NASConfig.hpp>
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
  class Session : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Session& obj) { 
      DARABONBA_PTR_TO_JSON(containerId, containerId_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(disableSessionIdReuse, disableSessionIdReuse_);
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_TO_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_TO_JSON(polarFsConfig, polarFsConfig_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(sessionAffinityType, sessionAffinityType_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(sessionIdleTimeoutInSeconds, sessionIdleTimeoutInSeconds_);
      DARABONBA_PTR_TO_JSON(sessionStatus, sessionStatus_);
      DARABONBA_PTR_TO_JSON(sessionTTLInSeconds, sessionTTLInSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, Session& obj) { 
      DARABONBA_PTR_FROM_JSON(containerId, containerId_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(disableSessionIdReuse, disableSessionIdReuse_);
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_FROM_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_FROM_JSON(polarFsConfig, polarFsConfig_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(sessionAffinityType, sessionAffinityType_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(sessionIdleTimeoutInSeconds, sessionIdleTimeoutInSeconds_);
      DARABONBA_PTR_FROM_JSON(sessionStatus, sessionStatus_);
      DARABONBA_PTR_FROM_JSON(sessionTTLInSeconds, sessionTTLInSeconds_);
    };
    Session() = default ;
    Session(const Session &) = default ;
    Session(Session &&) = default ;
    Session(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Session() = default ;
    Session& operator=(const Session &) = default ;
    Session& operator=(Session &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerId_ == nullptr
        && this->createdTime_ == nullptr && this->disableSessionIdReuse_ == nullptr && this->functionName_ == nullptr && this->lastModifiedTime_ == nullptr && this->nasConfig_ == nullptr
        && this->ossMountConfig_ == nullptr && this->polarFsConfig_ == nullptr && this->qualifier_ == nullptr && this->sessionAffinityType_ == nullptr && this->sessionId_ == nullptr
        && this->sessionIdleTimeoutInSeconds_ == nullptr && this->sessionStatus_ == nullptr && this->sessionTTLInSeconds_ == nullptr; };
    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline Session& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline Session& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // disableSessionIdReuse Field Functions 
    bool hasDisableSessionIdReuse() const { return this->disableSessionIdReuse_ != nullptr;};
    void deleteDisableSessionIdReuse() { this->disableSessionIdReuse_ = nullptr;};
    inline bool getDisableSessionIdReuse() const { DARABONBA_PTR_GET_DEFAULT(disableSessionIdReuse_, false) };
    inline Session& setDisableSessionIdReuse(bool disableSessionIdReuse) { DARABONBA_PTR_SET_VALUE(disableSessionIdReuse_, disableSessionIdReuse) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline Session& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline Session& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // nasConfig Field Functions 
    bool hasNasConfig() const { return this->nasConfig_ != nullptr;};
    void deleteNasConfig() { this->nasConfig_ = nullptr;};
    inline const NASConfig & getNasConfig() const { DARABONBA_PTR_GET_CONST(nasConfig_, NASConfig) };
    inline NASConfig getNasConfig() { DARABONBA_PTR_GET(nasConfig_, NASConfig) };
    inline Session& setNasConfig(const NASConfig & nasConfig) { DARABONBA_PTR_SET_VALUE(nasConfig_, nasConfig) };
    inline Session& setNasConfig(NASConfig && nasConfig) { DARABONBA_PTR_SET_RVALUE(nasConfig_, nasConfig) };


    // ossMountConfig Field Functions 
    bool hasOssMountConfig() const { return this->ossMountConfig_ != nullptr;};
    void deleteOssMountConfig() { this->ossMountConfig_ = nullptr;};
    inline const OSSMountConfig & getOssMountConfig() const { DARABONBA_PTR_GET_CONST(ossMountConfig_, OSSMountConfig) };
    inline OSSMountConfig getOssMountConfig() { DARABONBA_PTR_GET(ossMountConfig_, OSSMountConfig) };
    inline Session& setOssMountConfig(const OSSMountConfig & ossMountConfig) { DARABONBA_PTR_SET_VALUE(ossMountConfig_, ossMountConfig) };
    inline Session& setOssMountConfig(OSSMountConfig && ossMountConfig) { DARABONBA_PTR_SET_RVALUE(ossMountConfig_, ossMountConfig) };


    // polarFsConfig Field Functions 
    bool hasPolarFsConfig() const { return this->polarFsConfig_ != nullptr;};
    void deletePolarFsConfig() { this->polarFsConfig_ = nullptr;};
    inline const PolarFsConfig & getPolarFsConfig() const { DARABONBA_PTR_GET_CONST(polarFsConfig_, PolarFsConfig) };
    inline PolarFsConfig getPolarFsConfig() { DARABONBA_PTR_GET(polarFsConfig_, PolarFsConfig) };
    inline Session& setPolarFsConfig(const PolarFsConfig & polarFsConfig) { DARABONBA_PTR_SET_VALUE(polarFsConfig_, polarFsConfig) };
    inline Session& setPolarFsConfig(PolarFsConfig && polarFsConfig) { DARABONBA_PTR_SET_RVALUE(polarFsConfig_, polarFsConfig) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline Session& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // sessionAffinityType Field Functions 
    bool hasSessionAffinityType() const { return this->sessionAffinityType_ != nullptr;};
    void deleteSessionAffinityType() { this->sessionAffinityType_ = nullptr;};
    inline string getSessionAffinityType() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinityType_, "") };
    inline Session& setSessionAffinityType(string sessionAffinityType) { DARABONBA_PTR_SET_VALUE(sessionAffinityType_, sessionAffinityType) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline Session& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sessionIdleTimeoutInSeconds Field Functions 
    bool hasSessionIdleTimeoutInSeconds() const { return this->sessionIdleTimeoutInSeconds_ != nullptr;};
    void deleteSessionIdleTimeoutInSeconds() { this->sessionIdleTimeoutInSeconds_ = nullptr;};
    inline int64_t getSessionIdleTimeoutInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTimeoutInSeconds_, 0L) };
    inline Session& setSessionIdleTimeoutInSeconds(int64_t sessionIdleTimeoutInSeconds) { DARABONBA_PTR_SET_VALUE(sessionIdleTimeoutInSeconds_, sessionIdleTimeoutInSeconds) };


    // sessionStatus Field Functions 
    bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
    void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
    inline string getSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
    inline Session& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


    // sessionTTLInSeconds Field Functions 
    bool hasSessionTTLInSeconds() const { return this->sessionTTLInSeconds_ != nullptr;};
    void deleteSessionTTLInSeconds() { this->sessionTTLInSeconds_ = nullptr;};
    inline int64_t getSessionTTLInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionTTLInSeconds_, 0L) };
    inline Session& setSessionTTLInSeconds(int64_t sessionTTLInSeconds) { DARABONBA_PTR_SET_VALUE(sessionTTLInSeconds_, sessionTTLInSeconds) };


  protected:
    shared_ptr<string> containerId_ {};
    shared_ptr<string> createdTime_ {};
    shared_ptr<bool> disableSessionIdReuse_ {};
    shared_ptr<string> functionName_ {};
    shared_ptr<string> lastModifiedTime_ {};
    shared_ptr<NASConfig> nasConfig_ {};
    shared_ptr<OSSMountConfig> ossMountConfig_ {};
    shared_ptr<PolarFsConfig> polarFsConfig_ {};
    shared_ptr<string> qualifier_ {};
    shared_ptr<string> sessionAffinityType_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<int64_t> sessionIdleTimeoutInSeconds_ {};
    shared_ptr<string> sessionStatus_ {};
    shared_ptr<int64_t> sessionTTLInSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
