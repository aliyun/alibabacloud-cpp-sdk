// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGININSTANCEREQUESTINSTANCELOGININFO_HPP_
#define ALIBABACLOUD_MODELS_LOGININSTANCEREQUESTINSTANCELOGININFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LoginInstanceRequestInstanceLoginInfoEncryptionOptions.hpp>
#include <alibabacloud/models/LoginInstanceRequestInstanceLoginInfoOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class LoginInstanceRequestInstanceLoginInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginInstanceRequestInstanceLoginInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(CredentialToken, credentialToken_);
      DARABONBA_PTR_TO_JSON(DockerContainerName, dockerContainerName_);
      DARABONBA_PTR_TO_JSON(DockerExec, dockerExec_);
      DARABONBA_PTR_TO_JSON(DurationSeconds, durationSeconds_);
      DARABONBA_PTR_TO_JSON(EncryptionOptions, encryptionOptions_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(LoginByInstanceCredential, loginByInstanceCredential_);
      DARABONBA_PTR_TO_JSON(LoginByInstanceShortcut, loginByInstanceShortcut_);
      DARABONBA_PTR_TO_JSON(NetworkAccessMode, networkAccessMode_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(PassPhrase, passPhrase_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShortcutToken, shortcutToken_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, LoginInstanceRequestInstanceLoginInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(CredentialToken, credentialToken_);
      DARABONBA_PTR_FROM_JSON(DockerContainerName, dockerContainerName_);
      DARABONBA_PTR_FROM_JSON(DockerExec, dockerExec_);
      DARABONBA_PTR_FROM_JSON(DurationSeconds, durationSeconds_);
      DARABONBA_PTR_FROM_JSON(EncryptionOptions, encryptionOptions_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(LoginByInstanceCredential, loginByInstanceCredential_);
      DARABONBA_PTR_FROM_JSON(LoginByInstanceShortcut, loginByInstanceShortcut_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessMode, networkAccessMode_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(PassPhrase, passPhrase_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShortcutToken, shortcutToken_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    LoginInstanceRequestInstanceLoginInfo() = default ;
    LoginInstanceRequestInstanceLoginInfo(const LoginInstanceRequestInstanceLoginInfo &) = default ;
    LoginInstanceRequestInstanceLoginInfo(LoginInstanceRequestInstanceLoginInfo &&) = default ;
    LoginInstanceRequestInstanceLoginInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginInstanceRequestInstanceLoginInfo() = default ;
    LoginInstanceRequestInstanceLoginInfo& operator=(const LoginInstanceRequestInstanceLoginInfo &) = default ;
    LoginInstanceRequestInstanceLoginInfo& operator=(LoginInstanceRequestInstanceLoginInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authenticationType_ != nullptr
        && this->certificate_ != nullptr && this->credentialToken_ != nullptr && this->dockerContainerName_ != nullptr && this->dockerExec_ != nullptr && this->durationSeconds_ != nullptr
        && this->encryptionOptions_ != nullptr && this->expireTime_ != nullptr && this->host_ != nullptr && this->instanceId_ != nullptr && this->instanceType_ != nullptr
        && this->loginByInstanceCredential_ != nullptr && this->loginByInstanceShortcut_ != nullptr && this->networkAccessMode_ != nullptr && this->options_ != nullptr && this->passPhrase_ != nullptr
        && this->password_ != nullptr && this->port_ != nullptr && this->protocol_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->shortcutToken_ != nullptr && this->username_ != nullptr && this->vpcId_ != nullptr; };
    // authenticationType Field Functions 
    bool hasAuthenticationType() const { return this->authenticationType_ != nullptr;};
    void deleteAuthenticationType() { this->authenticationType_ = nullptr;};
    inline string authenticationType() const { DARABONBA_PTR_GET_DEFAULT(authenticationType_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setAuthenticationType(string authenticationType) { DARABONBA_PTR_SET_VALUE(authenticationType_, authenticationType) };


    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string certificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // credentialToken Field Functions 
    bool hasCredentialToken() const { return this->credentialToken_ != nullptr;};
    void deleteCredentialToken() { this->credentialToken_ = nullptr;};
    inline string credentialToken() const { DARABONBA_PTR_GET_DEFAULT(credentialToken_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setCredentialToken(string credentialToken) { DARABONBA_PTR_SET_VALUE(credentialToken_, credentialToken) };


    // dockerContainerName Field Functions 
    bool hasDockerContainerName() const { return this->dockerContainerName_ != nullptr;};
    void deleteDockerContainerName() { this->dockerContainerName_ = nullptr;};
    inline string dockerContainerName() const { DARABONBA_PTR_GET_DEFAULT(dockerContainerName_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setDockerContainerName(string dockerContainerName) { DARABONBA_PTR_SET_VALUE(dockerContainerName_, dockerContainerName) };


    // dockerExec Field Functions 
    bool hasDockerExec() const { return this->dockerExec_ != nullptr;};
    void deleteDockerExec() { this->dockerExec_ = nullptr;};
    inline string dockerExec() const { DARABONBA_PTR_GET_DEFAULT(dockerExec_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setDockerExec(string dockerExec) { DARABONBA_PTR_SET_VALUE(dockerExec_, dockerExec) };


    // durationSeconds Field Functions 
    bool hasDurationSeconds() const { return this->durationSeconds_ != nullptr;};
    void deleteDurationSeconds() { this->durationSeconds_ = nullptr;};
    inline int64_t durationSeconds() const { DARABONBA_PTR_GET_DEFAULT(durationSeconds_, 0L) };
    inline LoginInstanceRequestInstanceLoginInfo& setDurationSeconds(int64_t durationSeconds) { DARABONBA_PTR_SET_VALUE(durationSeconds_, durationSeconds) };


    // encryptionOptions Field Functions 
    bool hasEncryptionOptions() const { return this->encryptionOptions_ != nullptr;};
    void deleteEncryptionOptions() { this->encryptionOptions_ = nullptr;};
    inline const Models::LoginInstanceRequestInstanceLoginInfoEncryptionOptions & encryptionOptions() const { DARABONBA_PTR_GET_CONST(encryptionOptions_, Models::LoginInstanceRequestInstanceLoginInfoEncryptionOptions) };
    inline Models::LoginInstanceRequestInstanceLoginInfoEncryptionOptions encryptionOptions() { DARABONBA_PTR_GET(encryptionOptions_, Models::LoginInstanceRequestInstanceLoginInfoEncryptionOptions) };
    inline LoginInstanceRequestInstanceLoginInfo& setEncryptionOptions(const Models::LoginInstanceRequestInstanceLoginInfoEncryptionOptions & encryptionOptions) { DARABONBA_PTR_SET_VALUE(encryptionOptions_, encryptionOptions) };
    inline LoginInstanceRequestInstanceLoginInfo& setEncryptionOptions(Models::LoginInstanceRequestInstanceLoginInfoEncryptionOptions && encryptionOptions) { DARABONBA_PTR_SET_RVALUE(encryptionOptions_, encryptionOptions) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // loginByInstanceCredential Field Functions 
    bool hasLoginByInstanceCredential() const { return this->loginByInstanceCredential_ != nullptr;};
    void deleteLoginByInstanceCredential() { this->loginByInstanceCredential_ = nullptr;};
    inline bool loginByInstanceCredential() const { DARABONBA_PTR_GET_DEFAULT(loginByInstanceCredential_, false) };
    inline LoginInstanceRequestInstanceLoginInfo& setLoginByInstanceCredential(bool loginByInstanceCredential) { DARABONBA_PTR_SET_VALUE(loginByInstanceCredential_, loginByInstanceCredential) };


    // loginByInstanceShortcut Field Functions 
    bool hasLoginByInstanceShortcut() const { return this->loginByInstanceShortcut_ != nullptr;};
    void deleteLoginByInstanceShortcut() { this->loginByInstanceShortcut_ = nullptr;};
    inline bool loginByInstanceShortcut() const { DARABONBA_PTR_GET_DEFAULT(loginByInstanceShortcut_, false) };
    inline LoginInstanceRequestInstanceLoginInfo& setLoginByInstanceShortcut(bool loginByInstanceShortcut) { DARABONBA_PTR_SET_VALUE(loginByInstanceShortcut_, loginByInstanceShortcut) };


    // networkAccessMode Field Functions 
    bool hasNetworkAccessMode() const { return this->networkAccessMode_ != nullptr;};
    void deleteNetworkAccessMode() { this->networkAccessMode_ = nullptr;};
    inline string networkAccessMode() const { DARABONBA_PTR_GET_DEFAULT(networkAccessMode_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setNetworkAccessMode(string networkAccessMode) { DARABONBA_PTR_SET_VALUE(networkAccessMode_, networkAccessMode) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const Models::LoginInstanceRequestInstanceLoginInfoOptions & options() const { DARABONBA_PTR_GET_CONST(options_, Models::LoginInstanceRequestInstanceLoginInfoOptions) };
    inline Models::LoginInstanceRequestInstanceLoginInfoOptions options() { DARABONBA_PTR_GET(options_, Models::LoginInstanceRequestInstanceLoginInfoOptions) };
    inline LoginInstanceRequestInstanceLoginInfo& setOptions(const Models::LoginInstanceRequestInstanceLoginInfoOptions & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline LoginInstanceRequestInstanceLoginInfo& setOptions(Models::LoginInstanceRequestInstanceLoginInfoOptions && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // passPhrase Field Functions 
    bool hasPassPhrase() const { return this->passPhrase_ != nullptr;};
    void deletePassPhrase() { this->passPhrase_ = nullptr;};
    inline string passPhrase() const { DARABONBA_PTR_GET_DEFAULT(passPhrase_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setPassPhrase(string passPhrase) { DARABONBA_PTR_SET_VALUE(passPhrase_, passPhrase) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline LoginInstanceRequestInstanceLoginInfo& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // shortcutToken Field Functions 
    bool hasShortcutToken() const { return this->shortcutToken_ != nullptr;};
    void deleteShortcutToken() { this->shortcutToken_ = nullptr;};
    inline string shortcutToken() const { DARABONBA_PTR_GET_DEFAULT(shortcutToken_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setShortcutToken(string shortcutToken) { DARABONBA_PTR_SET_VALUE(shortcutToken_, shortcutToken) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline LoginInstanceRequestInstanceLoginInfo& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> authenticationType_ = nullptr;
    std::shared_ptr<string> certificate_ = nullptr;
    std::shared_ptr<string> credentialToken_ = nullptr;
    std::shared_ptr<string> dockerContainerName_ = nullptr;
    std::shared_ptr<string> dockerExec_ = nullptr;
    std::shared_ptr<int64_t> durationSeconds_ = nullptr;
    std::shared_ptr<Models::LoginInstanceRequestInstanceLoginInfoEncryptionOptions> encryptionOptions_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<bool> loginByInstanceCredential_ = nullptr;
    std::shared_ptr<bool> loginByInstanceShortcut_ = nullptr;
    std::shared_ptr<string> networkAccessMode_ = nullptr;
    std::shared_ptr<Models::LoginInstanceRequestInstanceLoginInfoOptions> options_ = nullptr;
    std::shared_ptr<string> passPhrase_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> shortcutToken_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
