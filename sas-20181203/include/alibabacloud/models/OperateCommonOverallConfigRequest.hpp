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
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(NoTargetAsOn, noTargetAsOn_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, OperateCommonOverallConfigRequest& obj) { 
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
    virtual bool empty() const override { return this->config_ == nullptr
        && this->noTargetAsOn_ == nullptr && this->sourceIp_ == nullptr && this->type_ == nullptr; };
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
    // Specifies whether to enable or disable the feature. Valid values:
    // 
    // *   **on**: enable
    // *   **off**: disable
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // Specifies whether to configure assets for the feature. Default value: **false**. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter takes effect only when you set **Config** to **on**.
    shared_ptr<bool> noTargetAsOn_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The type of the feature. Valid values:
    // 
    // *   **kdump_switch**: Active defense experience optimization
    // *   **threat_detect**: Dynamic adaptive threat detection capability
    // *   **suspicious_aggregation**: Alert Association
    // *   **alidetect**: File Test
    // *   **USER-ENABLE-SWITCH-TYPE_38857**: Entrance service execution high-risk operation (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_50858**: Web service performs high-risk operations (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_50859**: Entrance service execution suspicious operation (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_50862**: Cloud Assistant Advanced Protection (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_50867**: Create malicious files (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_50868**: Create suspicious files (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_64025**: Ingress service execute command [enhanced mode] (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_51229**: Browser service execution a high-risk operation (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_51230**: Entrance service execution suspicious operation (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_51232**: System processes execution high-risk operations (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_51233**: Java service execution high-risk operations (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_51234**: Office components execution high-risk operations (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_51235**: Web service performs high-risk operations (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_52820**: Create malicious files (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_52826**: Entrance service execution high-risk operation (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_55251**: Database services execution high-risk operations (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_63725**: Ingress service implants suspicious script/binary file (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_3277**: Suspicious process startup (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_50983**: obfuscated command (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_51200**: Command line download and run malicious files (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_71131**: Ingress service executes sequence of suspicious behavior (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_51225**: Powershell executes high-risk commands (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_51226**: Powershell execute suspicious command (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_52821**: Suspicious process startup (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_57242**: Malicious command execution (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_57340**: Command line download and run malicious files (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_39659**: Sensitive Registry Key Protection (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_52816**: high-risk account manipulation behavior (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_54365**: Create service autorun item (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_54366**: Create high-risk autorun item (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_54367**: Create scheduled task autorun item (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_54368**: Create registry autorun item (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_54369**: Create WMI autorun item (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_50869**: Unauthorized execution of high-risk orders (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_53272**: Exploiting Kernel Vulnerabilities to Elevate Privileges (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_54395**: Unauthorized reading and writing of sensitive files (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_57897**: suspected privilege escalation (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_52825**: Unauthorized execution of high-risk orders (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_5507**: malicious drivers (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_50876**: Against security software (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_53168**: process debugging (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_54699**: Hijack dynamic link library (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_62981**: Bypassing security monitoring (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_52815**: Load high-risk drivers (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_52823**: Running high-risk ARK tools (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_54373**: Against security software (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_54374**: Intrusion trace cleanup (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_54265**: Hijacking the PAM Module (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_54953**: Hashdump Attack (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_54383**: MimiKatz Credential Stealing (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_54384**: Hashdump Attack (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_50861**: Information detection (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_52818**: Information detection (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_54034**: Intranet scan (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_51228**: High-risk lateral penetration tools (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_50870**: Rebound Shell (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_50873**: WebShell execute command
    // *   **USER-ENABLE-SWITCH-TYPE_51236**: Rebound Shell (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_50877**: Malicious soft communication (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_50884**: Suspicious worm script behavior (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_50885**: malicious script behavior (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_51201**: ransomware (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_51202**: Suspected Extortion (Linux)
    // *   **USER-ENABLE-SWITCH-TYPE_52827**: ransomware (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_52828**: Suspected Extortion (Windows)
    // *   **USER-ENABLE-SWITCH-TYPE_52829**: delete system backup behavior (Windows)
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
