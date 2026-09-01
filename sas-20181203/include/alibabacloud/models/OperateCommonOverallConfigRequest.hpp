// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATECOMMONOVERALLCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATECOMMONOVERALLCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateCommonOverallConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateCommonOverallConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(NoTargetAsOn, noTargetAsOn_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, OperateCommonOverallConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(NoTargetAsOn, noTargetAsOn_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    OperateCommonOverallConfigRequest() = default ;
    OperateCommonOverallConfigRequest(const OperateCommonOverallConfigRequest &) = default ;
    OperateCommonOverallConfigRequest(OperateCommonOverallConfigRequest &&) = default ;
    OperateCommonOverallConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateCommonOverallConfigRequest() = default ;
    OperateCommonOverallConfigRequest& operator=(const OperateCommonOverallConfigRequest &) = default ;
    OperateCommonOverallConfigRequest& operator=(OperateCommonOverallConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->config_ == nullptr && this->noTargetAsOn_ == nullptr && this->sourceIp_ == nullptr && this->type_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline OperateCommonOverallConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline OperateCommonOverallConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // noTargetAsOn Field Functions 
    bool hasNoTargetAsOn() const { return this->noTargetAsOn_ != nullptr;};
    void deleteNoTargetAsOn() { this->noTargetAsOn_ = nullptr;};
    inline bool getNoTargetAsOn() const { DARABONBA_PTR_GET_DEFAULT(noTargetAsOn_, false) };
    inline OperateCommonOverallConfigRequest& setNoTargetAsOn(bool noTargetAsOn) { DARABONBA_PTR_SET_VALUE(noTargetAsOn_, noTargetAsOn) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline OperateCommonOverallConfigRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline OperateCommonOverallConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The client token that is used to ensure the idempotence of the request. Different requests must use different tokens. The token supports only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The switch status. Valid values:
    // 
    // - **on**: enabled.
    // - **off**: disabled.
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // Specifies whether asset configuration is required. Default value: **false**. Valid values:
    // - **true**: Required.
    // - **false**: Not required.
    // > This parameter takes effect only when **config** is set to **on**.
    shared_ptr<bool> noTargetAsOn_ {};
    // The IP address of the access source.
    shared_ptr<string> sourceIp_ {};
    // The configuration type. Valid values:
    // 
    // - **kdump_switch**: proactive defense optimization
    // - **threat_detect**: adaptive threat detection capability
    // - **suspicious_aggregation**: alert associate
    // - **alidetect**: file detection
    // - **USER-ENABLE-SWITCH-TYPE_38857**: Linux entry service execute high-risk operations
    // - **USER-ENABLE-SWITCH-TYPE_50858**: Linux web service execute high-risk operations
    // - **USER-ENABLE-SWITCH-TYPE_50859**: Linux entry service execute suspicious operations
    // - **USER-ENABLE-SWITCH-TYPE_50862**: Linux Cloud Assistant advanced protection
    // - **USER-ENABLE-SWITCH-TYPE_50867**: Linux malicious file implantation
    // - **USER-ENABLE-SWITCH-TYPE_50868**: Linux suspicious file implantation
    // - **USER-ENABLE-SWITCH-TYPE_64025**: Linux entry service execute commands [enhanced mode]
    // - **USER-ENABLE-SWITCH-TYPE_51229**: Windows browser service execute high-risk operations
    // - **USER-ENABLE-SWITCH-TYPE_51230**: Windows entry service execute suspicious operations
    // - **USER-ENABLE-SWITCH-TYPE_51232**: Windows system process execute high-risk operations
    // - **USER-ENABLE-SWITCH-TYPE_51233**: Windows Java service execute high-risk operations
    // - **USER-ENABLE-SWITCH-TYPE_51234**: Windows Office component execute high-risk operations
    // - **USER-ENABLE-SWITCH-TYPE_51235**: Windows web service execute high-risk operations
    // - **USER-ENABLE-SWITCH-TYPE_52820**: Windows malicious file implantation
    // - **USER-ENABLE-SWITCH-TYPE_52826**: Windows entry service execute high-risk operations
    // - **USER-ENABLE-SWITCH-TYPE_55251**: Windows database service execute high-risk operations
    // - **USER-ENABLE-SWITCH-TYPE_63725**: Windows entry service implanting suspicious scripts/binary files
    // - **USER-ENABLE-SWITCH-TYPE_3277**: Linux suspicious process startup
    // - **USER-ENABLE-SWITCH-TYPE_50983**: Linux obfuscation commands
    // - **USER-ENABLE-SWITCH-TYPE_51200**: Linux command line downloading and running malicious files
    // - **USER-ENABLE-SWITCH-TYPE_71131**: Linux entry service execute suspicious behavior sequence
    // - **USER-ENABLE-SWITCH-TYPE_51225**: Windows PowerShell execute high-risk commands
    // - **USER-ENABLE-SWITCH-TYPE_51226**: Windows PowerShell execute suspicious commands
    // - **USER-ENABLE-SWITCH-TYPE_52821**: Windows suspicious process startup
    // - **USER-ENABLE-SWITCH-TYPE_57242**: Windows malicious command execution
    // - **USER-ENABLE-SWITCH-TYPE_57340**: Windows command line downloading and running malicious files
    // - **USER-ENABLE-SWITCH-TYPE_39659**: Windows sensitive registry key protection
    // - **USER-ENABLE-SWITCH-TYPE_52816**: Windows high-risk account manipulation
    // - **USER-ENABLE-SWITCH-TYPE_54365**: Windows creating service auto-start items
    // - **USER-ENABLE-SWITCH-TYPE_54366**: Windows creating high-risk auto-start items
    // - **USER-ENABLE-SWITCH-TYPE_54367**: Windows creating scheduled task auto-start items
    // - **USER-ENABLE-SWITCH-TYPE_54368**: Windows creating registry auto-start items
    // - **USER-ENABLE-SWITCH-TYPE_54369**: Windows creating WMI auto-start items
    // - **USER-ENABLE-SWITCH-TYPE_50869**: Linux privilege escalation execute high-risk commands
    // - **USER-ENABLE-SWITCH-TYPE_53272**: Linux kernel vulnerability privilege escalation
    // - **USER-ENABLE-SWITCH-TYPE_54395**: Linux privilege escalation reading/writing sensitive files
    // - **USER-ENABLE-SWITCH-TYPE_57897**: Linux suspected privilege escalation behavior
    // - **USER-ENABLE-SWITCH-TYPE_52825**: Windows privilege escalation execute high-risk commands
    // - **USER-ENABLE-SWITCH-TYPE_5507**: Linux malicious driver
    // - **USER-ENABLE-SWITCH-TYPE_50876**: Linux anti-security software
    // - **USER-ENABLE-SWITCH-TYPE_53168**: Linux process debugging
    // - **USER-ENABLE-SWITCH-TYPE_54699**: Linux dynamic-link library hijacking
    // - **USER-ENABLE-SWITCH-TYPE_62981**: Linux bypassing security monitoring
    // - **USER-ENABLE-SWITCH-TYPE_52815**: Windows loading high-risk drivers
    // - **USER-ENABLE-SWITCH-TYPE_52823**: Windows running high-risk ARK tools
    // - **USER-ENABLE-SWITCH-TYPE_54373**: Windows anti-security software
    // - **USER-ENABLE-SWITCH-TYPE_54374**: Windows intrusion trace cleanup
    // - **USER-ENABLE-SWITCH-TYPE_54265**: Linux PAM module hijacking
    // - **USER-ENABLE-SWITCH-TYPE_54953**: Linux HashDump attack
    // - **USER-ENABLE-SWITCH-TYPE_54383**: Windows MimiKatz credential theft
    // - **USER-ENABLE-SWITCH-TYPE_54384**: Windows HashDump attack
    // - **USER-ENABLE-SWITCH-TYPE_50861**: Linux information reconnaissance
    // - **USER-ENABLE-SWITCH-TYPE_52818**: Windows information reconnaissance
    // - **USER-ENABLE-SWITCH-TYPE_54034**: Linux internal network scanning
    // - **USER-ENABLE-SWITCH-TYPE_51228**: Windows high-risk lateral movement tools
    // - **USER-ENABLE-SWITCH-TYPE_50870**: Linux reverse shell
    // - **USER-ENABLE-SWITCH-TYPE_50873**: WebShell command execution
    // - **USER-ENABLE-SWITCH-TYPE_51236**: Windows reverse shell
    // - **USER-ENABLE-SWITCH-TYPE_50877**: Linux malicious program communication
    // - **USER-ENABLE-SWITCH-TYPE_50884**: Linux suspicious worm script behavior
    // - **USER-ENABLE-SWITCH-TYPE_50885**: Linux malicious script behavior
    // - **USER-ENABLE-SWITCH-TYPE_51201**: Linux ransomware virus
    // - **USER-ENABLE-SWITCH-TYPE_51202**: Linux suspicious ransomware behavior
    // - **USER-ENABLE-SWITCH-TYPE_52827**: Windows ransomware virus
    // - **USER-ENABLE-SWITCH-TYPE_52828**: Windows suspicious ransomware behavior
    // - **USER-ENABLE-SWITCH-TYPE_52829**: Windows delete system backup behavior
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
