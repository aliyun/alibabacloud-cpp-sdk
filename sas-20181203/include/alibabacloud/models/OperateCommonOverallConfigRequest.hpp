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
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(NoTargetAsOn, noTargetAsOn_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, OperateCommonOverallConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
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
        && this->config_ == nullptr && this->dryRun_ == nullptr && this->noTargetAsOn_ == nullptr && this->sourceIp_ == nullptr && this->type_ == nullptr; };
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


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline OperateCommonOverallConfigRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


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
    // The client token that is used to ensure the idempotence of the request. Different requests must use different tokens. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The switch status. Valid values:
    // 
    // - **on**: enabled
    // - **off**: disabled
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // Specifies whether to only precheck the request. Valid values: true: Prechecks the request without performing the actual operation. false: Performs the actual operation.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether assets need to be configured. Default value: **false**. Valid values:
    // - **true**: required
    // - **false**: not required
    // > This value is valid only when **Config** is set to **on**.
    shared_ptr<bool> noTargetAsOn_ {};
    // The IP address of the access source.
    shared_ptr<string> sourceIp_ {};
    // The configuration type. Valid values:
    // 
    // - **kdump_switch**: proactive defense optimization experience
    // - **threat_detect**: adaptive threat detection capability
    // - **suspicious_aggregation**: alerting associate
    // - **alidetect**: file detection
    // - **USER-ENABLE-SWITCH-TYPE_38857**: high-risk operations executed by Linux entry services
    // - **USER-ENABLE-SWITCH-TYPE_50858**: high-risk operations executed by Linux web services
    // - **USER-ENABLE-SWITCH-TYPE_50859**: suspicious operations executed by Linux entry services
    // - **USER-ENABLE-SWITCH-TYPE_50862**: advanced protection for Linux Cloud Assistant
    // - **USER-ENABLE-SWITCH-TYPE_50867**: malicious file implantation in Linux
    // - **USER-ENABLE-SWITCH-TYPE_50868**: suspicious file implantation in Linux
    // - **USER-ENABLE-SWITCH-TYPE_64025**: command execution by Linux entry services [enhanced pattern]
    // - **USER-ENABLE-SWITCH-TYPE_51229**: high-risk operations executed by Windows browser services
    // - **USER-ENABLE-SWITCH-TYPE_51230**: suspicious operations executed by Windows entry services
    // - **USER-ENABLE-SWITCH-TYPE_51232**: high-risk operations executed by Windows system processes
    // - **USER-ENABLE-SWITCH-TYPE_51233**: high-risk operations executed by Windows Java services
    // - **USER-ENABLE-SWITCH-TYPE_51234**: high-risk operations executed by Windows Office components
    // - **USER-ENABLE-SWITCH-TYPE_51235**: high-risk operations executed by Windows web services
    // - **USER-ENABLE-SWITCH-TYPE_52820**: malicious file implantation in Windows
    // - **USER-ENABLE-SWITCH-TYPE_52826**: high-risk operations executed by Windows entry services
    // - **USER-ENABLE-SWITCH-TYPE_55251**: high-risk operations executed by Windows database services
    // - **USER-ENABLE-SWITCH-TYPE_63725**: suspicious script or binary file implantation by Windows entry services
    // - **USER-ENABLE-SWITCH-TYPE_3277**: suspicious process startup in Linux
    // - **USER-ENABLE-SWITCH-TYPE_50983**: command obfuscation in Linux
    // - **USER-ENABLE-SWITCH-TYPE_51200**: downloading and running malicious files via Linux command line
    // - **USER-ENABLE-SWITCH-TYPE_71131**: suspicious behavior sequences executed by Linux entry services
    // - **USER-ENABLE-SWITCH-TYPE_51225**: high-risk commands executed by Windows PowerShell
    // - **USER-ENABLE-SWITCH-TYPE_51226**: suspicious commands executed by Windows PowerShell
    // - **USER-ENABLE-SWITCH-TYPE_52821**: suspicious process startup in Windows
    // - **USER-ENABLE-SWITCH-TYPE_57242**: malicious command execution in Windows
    // - **USER-ENABLE-SWITCH-TYPE_57340**: downloading and running malicious files via Windows command line
    // - **USER-ENABLE-SWITCH-TYPE_39659**: sensitive registry key protection in Windows
    // - **USER-ENABLE-SWITCH-TYPE_52816**: high-risk account manipulation in Windows
    // - **USER-ENABLE-SWITCH-TYPE_54365**: creation of service auto-start items in Windows
    // - **USER-ENABLE-SWITCH-TYPE_54366**: creation of high-risk auto-start items in Windows
    // - **USER-ENABLE-SWITCH-TYPE_54367**: creation of scheduled node auto-start items in Windows
    // - **USER-ENABLE-SWITCH-TYPE_54368**: creation of registry auto-start items in Windows
    // - **USER-ENABLE-SWITCH-TYPE_54369**: creation of WMI auto-start items in Windows
    // - **USER-ENABLE-SWITCH-TYPE_50869**: unauthorized execution of high-risk commands in Linux
    // - **USER-ENABLE-SWITCH-TYPE_53272**: privilege escalation by exploiting kernel vulnerabilities in Linux
    // - **USER-ENABLE-SWITCH-TYPE_54395**: unauthorized reading and writing of sensitive files in Linux
    // - **USER-ENABLE-SWITCH-TYPE_57897**: suspected privilege escalation in Linux
    // - **USER-ENABLE-SWITCH-TYPE_52825**: unauthorized execution of high-risk commands in Windows
    // - **USER-ENABLE-SWITCH-TYPE_5507**: malicious drivers in Linux
    // - **USER-ENABLE-SWITCH-TYPE_50876**: evasion of security software in Linux
    // - **USER-ENABLE-SWITCH-TYPE_53168**: process debugging in Linux
    // - **USER-ENABLE-SWITCH-TYPE_54699**: dynamic-link library hijacking in Linux
    // - **USER-ENABLE-SWITCH-TYPE_62981**: bypassing security monitoring in Linux
    // - **USER-ENABLE-SWITCH-TYPE_52815**: loading of high-risk drivers in Windows
    // - **USER-ENABLE-SWITCH-TYPE_52823**: running high-risk ARK tools in Windows
    // - **USER-ENABLE-SWITCH-TYPE_54373**: evasion of security software in Windows
    // - **USER-ENABLE-SWITCH-TYPE_54374**: clearing intrusion traces in Windows
    // - **USER-ENABLE-SWITCH-TYPE_54265**: PAM module hijacking in Linux
    // - **USER-ENABLE-SWITCH-TYPE_54953**: HashDump attacks in Linux
    // - **USER-ENABLE-SWITCH-TYPE_54383**: credential theft by Mimikatz in Windows
    // - **USER-ENABLE-SWITCH-TYPE_54384**: HashDump attacks in Windows
    // - **USER-ENABLE-SWITCH-TYPE_50861**: information probing in Linux
    // - **USER-ENABLE-SWITCH-TYPE_52818**: information probing in Windows
    // - **USER-ENABLE-SWITCH-TYPE_54034**: internal network scanning in Linux
    // - **USER-ENABLE-SWITCH-TYPE_51228**: high-risk lateral movement tools in Windows
    // - **USER-ENABLE-SWITCH-TYPE_50870**: reverse shells in Linux
    // - **USER-ENABLE-SWITCH-TYPE_50873**: command execution by web shells
    // - **USER-ENABLE-SWITCH-TYPE_51236**: reverse shells in Windows
    // - **USER-ENABLE-SWITCH-TYPE_50877**: malicious program communication in Linux
    // - **USER-ENABLE-SWITCH-TYPE_50884**: suspicious worm script behavior in Linux
    // - **USER-ENABLE-SWITCH-TYPE_50885**: malicious script behavior in Linux
    // - **USER-ENABLE-SWITCH-TYPE_51201**: ransomware virus in Linux
    // - **USER-ENABLE-SWITCH-TYPE_51202**: suspicious ransomware behavior in Linux
    // - **USER-ENABLE-SWITCH-TYPE_52827**: ransomware virus in Windows
    // - **USER-ENABLE-SWITCH-TYPE_52828**: suspicious ransomware behavior in Windows
    // - **USER-ENABLE-SWITCH-TYPE_52829**: delete system backups behavior in Windows
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
