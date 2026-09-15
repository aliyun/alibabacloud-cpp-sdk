// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INNERCREATESANDBOXINPUT_HPP_
#define ALIBABACLOUD_MODELS_INNERCREATESANDBOXINPUT_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/E2BNetwork.hpp>
#include <alibabacloud/models/InnerSandboxRuntimeConfig.hpp>
#include <alibabacloud/models/InnerCreateSandboxVolumeMounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class InnerCreateSandboxInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InnerCreateSandboxInput& obj) { 
      DARABONBA_PTR_TO_JSON(allowInternetAccess, allowInternetAccess_);
      DARABONBA_PTR_TO_JSON(autoPause, autoPause_);
      DARABONBA_PTR_TO_JSON(autoResume, autoResume_);
      DARABONBA_PTR_TO_JSON(envVars, envVars_);
      DARABONBA_PTR_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(network, network_);
      DARABONBA_PTR_TO_JSON(runtime, runtime_);
      DARABONBA_PTR_TO_JSON(secure, secure_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(volumeMounts, volumeMounts_);
    };
    friend void from_json(const Darabonba::Json& j, InnerCreateSandboxInput& obj) { 
      DARABONBA_PTR_FROM_JSON(allowInternetAccess, allowInternetAccess_);
      DARABONBA_PTR_FROM_JSON(autoPause, autoPause_);
      DARABONBA_PTR_FROM_JSON(autoResume, autoResume_);
      DARABONBA_PTR_FROM_JSON(envVars, envVars_);
      DARABONBA_PTR_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(network, network_);
      DARABONBA_PTR_FROM_JSON(runtime, runtime_);
      DARABONBA_PTR_FROM_JSON(secure, secure_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(volumeMounts, volumeMounts_);
    };
    InnerCreateSandboxInput() = default ;
    InnerCreateSandboxInput(const InnerCreateSandboxInput &) = default ;
    InnerCreateSandboxInput(InnerCreateSandboxInput &&) = default ;
    InnerCreateSandboxInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InnerCreateSandboxInput() = default ;
    InnerCreateSandboxInput& operator=(const InnerCreateSandboxInput &) = default ;
    InnerCreateSandboxInput& operator=(InnerCreateSandboxInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowInternetAccess_ == nullptr
        && this->autoPause_ == nullptr && this->autoResume_ == nullptr && this->envVars_ == nullptr && this->metadata_ == nullptr && this->network_ == nullptr
        && this->runtime_ == nullptr && this->secure_ == nullptr && this->teamID_ == nullptr && this->templateID_ == nullptr && this->timeout_ == nullptr
        && this->volumeMounts_ == nullptr; };
    // allowInternetAccess Field Functions 
    bool hasAllowInternetAccess() const { return this->allowInternetAccess_ != nullptr;};
    void deleteAllowInternetAccess() { this->allowInternetAccess_ = nullptr;};
    inline bool getAllowInternetAccess() const { DARABONBA_PTR_GET_DEFAULT(allowInternetAccess_, false) };
    inline InnerCreateSandboxInput& setAllowInternetAccess(bool allowInternetAccess) { DARABONBA_PTR_SET_VALUE(allowInternetAccess_, allowInternetAccess) };


    // autoPause Field Functions 
    bool hasAutoPause() const { return this->autoPause_ != nullptr;};
    void deleteAutoPause() { this->autoPause_ = nullptr;};
    inline bool getAutoPause() const { DARABONBA_PTR_GET_DEFAULT(autoPause_, false) };
    inline InnerCreateSandboxInput& setAutoPause(bool autoPause) { DARABONBA_PTR_SET_VALUE(autoPause_, autoPause) };


    // autoResume Field Functions 
    bool hasAutoResume() const { return this->autoResume_ != nullptr;};
    void deleteAutoResume() { this->autoResume_ = nullptr;};
    inline bool getAutoResume() const { DARABONBA_PTR_GET_DEFAULT(autoResume_, false) };
    inline InnerCreateSandboxInput& setAutoResume(bool autoResume) { DARABONBA_PTR_SET_VALUE(autoResume_, autoResume) };


    // envVars Field Functions 
    bool hasEnvVars() const { return this->envVars_ != nullptr;};
    void deleteEnvVars() { this->envVars_ = nullptr;};
    inline const map<string, string> & getEnvVars() const { DARABONBA_PTR_GET_CONST(envVars_, map<string, string>) };
    inline map<string, string> getEnvVars() { DARABONBA_PTR_GET(envVars_, map<string, string>) };
    inline InnerCreateSandboxInput& setEnvVars(const map<string, string> & envVars) { DARABONBA_PTR_SET_VALUE(envVars_, envVars) };
    inline InnerCreateSandboxInput& setEnvVars(map<string, string> && envVars) { DARABONBA_PTR_SET_RVALUE(envVars_, envVars) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const map<string, string> & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
    inline map<string, string> getMetadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
    inline InnerCreateSandboxInput& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline InnerCreateSandboxInput& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const E2BNetwork & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, E2BNetwork) };
    inline E2BNetwork getNetwork() { DARABONBA_PTR_GET(network_, E2BNetwork) };
    inline InnerCreateSandboxInput& setNetwork(const E2BNetwork & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline InnerCreateSandboxInput& setNetwork(E2BNetwork && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const InnerSandboxRuntimeConfig & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, InnerSandboxRuntimeConfig) };
    inline InnerSandboxRuntimeConfig getRuntime() { DARABONBA_PTR_GET(runtime_, InnerSandboxRuntimeConfig) };
    inline InnerCreateSandboxInput& setRuntime(const InnerSandboxRuntimeConfig & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline InnerCreateSandboxInput& setRuntime(InnerSandboxRuntimeConfig && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


    // secure Field Functions 
    bool hasSecure() const { return this->secure_ != nullptr;};
    void deleteSecure() { this->secure_ = nullptr;};
    inline bool getSecure() const { DARABONBA_PTR_GET_DEFAULT(secure_, false) };
    inline InnerCreateSandboxInput& setSecure(bool secure) { DARABONBA_PTR_SET_VALUE(secure_, secure) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline InnerCreateSandboxInput& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string getTemplateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline InnerCreateSandboxInput& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline InnerCreateSandboxInput& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // volumeMounts Field Functions 
    bool hasVolumeMounts() const { return this->volumeMounts_ != nullptr;};
    void deleteVolumeMounts() { this->volumeMounts_ = nullptr;};
    inline const InnerCreateSandboxVolumeMounts & getVolumeMounts() const { DARABONBA_PTR_GET_CONST(volumeMounts_, InnerCreateSandboxVolumeMounts) };
    inline InnerCreateSandboxVolumeMounts getVolumeMounts() { DARABONBA_PTR_GET(volumeMounts_, InnerCreateSandboxVolumeMounts) };
    inline InnerCreateSandboxInput& setVolumeMounts(const InnerCreateSandboxVolumeMounts & volumeMounts) { DARABONBA_PTR_SET_VALUE(volumeMounts_, volumeMounts) };
    inline InnerCreateSandboxInput& setVolumeMounts(InnerCreateSandboxVolumeMounts && volumeMounts) { DARABONBA_PTR_SET_RVALUE(volumeMounts_, volumeMounts) };


  protected:
    shared_ptr<bool> allowInternetAccess_ {};
    shared_ptr<bool> autoPause_ {};
    shared_ptr<bool> autoResume_ {};
    shared_ptr<map<string, string>> envVars_ {};
    shared_ptr<map<string, string>> metadata_ {};
    shared_ptr<E2BNetwork> network_ {};
    shared_ptr<InnerSandboxRuntimeConfig> runtime_ {};
    shared_ptr<bool> secure_ {};
    shared_ptr<string> teamID_ {};
    shared_ptr<string> templateID_ {};
    shared_ptr<int32_t> timeout_ {};
    shared_ptr<InnerCreateSandboxVolumeMounts> volumeMounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
