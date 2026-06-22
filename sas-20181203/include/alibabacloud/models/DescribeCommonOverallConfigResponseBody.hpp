// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONOVERALLCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONOVERALLCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCommonOverallConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonOverallConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OverallConfig, overallConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonOverallConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OverallConfig, overallConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCommonOverallConfigResponseBody() = default ;
    DescribeCommonOverallConfigResponseBody(const DescribeCommonOverallConfigResponseBody &) = default ;
    DescribeCommonOverallConfigResponseBody(DescribeCommonOverallConfigResponseBody &&) = default ;
    DescribeCommonOverallConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonOverallConfigResponseBody() = default ;
    DescribeCommonOverallConfigResponseBody& operator=(const DescribeCommonOverallConfigResponseBody &) = default ;
    DescribeCommonOverallConfigResponseBody& operator=(DescribeCommonOverallConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OverallConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OverallConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, OverallConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      OverallConfig() = default ;
      OverallConfig(const OverallConfig &) = default ;
      OverallConfig(OverallConfig &&) = default ;
      OverallConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OverallConfig() = default ;
      OverallConfig& operator=(const OverallConfig &) = default ;
      OverallConfig& operator=(OverallConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->type_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline OverallConfig& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline OverallConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The switch status. Valid values:
      // 
      // - **on**: Enabled.
      // - **off**: Disabled.
      shared_ptr<string> config_ {};
      // The configuration type. Valid values:
      // 
      // - **kdump_switch**: proactive defense optimization
      // - **threat_detect**: adaptive threat detection
      // - **suspicious_aggregation**: alert association
      // - **alidetect**: file detection
      // - **USER-ENABLE-SWITCH-TYPE_3277**: suspicious process startup
      // - **USER-ENABLE-SWITCH-TYPE_5507**: malicious driver
      // - **USER-ENABLE-SWITCH-TYPE_38857**: entry service performing high-risk operations
      // - **USER-ENABLE-SWITCH-TYPE_50858**: web service performing high-risk operations
      // - **USER-ENABLE-SWITCH-TYPE_50859**: entry service performing suspicious operations
      // - **USER-ENABLE-SWITCH-TYPE_50861**: information probing
      // - **USER-ENABLE-SWITCH-TYPE_50862**: Cloud Assistant advanced protection
      // - **USER-ENABLE-SWITCH-TYPE_50867**: malicious file implantation
      // - **USER-ENABLE-SWITCH-TYPE_50868**: suspicious file implantation
      // - **USER-ENABLE-SWITCH-TYPE_50869**: unauthorized execution of high-risk commands
      // - **USER-ENABLE-SWITCH-TYPE_50870**: reverse shell
      // - **USER-ENABLE-SWITCH-TYPE_50873**: WebShell command execution
      // - **USER-ENABLE-SWITCH-TYPE_50876**: anti-security software
      // - **USER-ENABLE-SWITCH-TYPE_50877**: malicious program communication
      // - **USER-ENABLE-SWITCH-TYPE_50884**: suspicious worm script behavior
      // - **USER-ENABLE-SWITCH-TYPE_50885**: malicious script behavior
      // - **USER-ENABLE-SWITCH-TYPE_50983**: obfuscated commands
      // - **USER-ENABLE-SWITCH-TYPE_51200**: downloading and running malicious files from the command line
      // - **USER-ENABLE-SWITCH-TYPE_51201**: ransomware
      // - **USER-ENABLE-SWITCH-TYPE_51202**: suspicious ransomware behavior
      // - **USER-ENABLE-SWITCH-TYPE_53168**: process debugging
      // - **USER-ENABLE-SWITCH-TYPE_53272**: privilege escalation by exploiting kernel vulnerabilities
      // - **USER-ENABLE-SWITCH-TYPE_54034**: internal network scanning
      // - **USER-ENABLE-SWITCH-TYPE_54265**: PAM module hijacking
      // - **USER-ENABLE-SWITCH-TYPE_54395**: unauthorized read/write of sensitive files
      // - **USER-ENABLE-SWITCH-TYPE_54699**: dynamic-link library hijacking
      // - **USER-ENABLE-SWITCH-TYPE_54953**: HashDump attack
      // - **USER-ENABLE-SWITCH-TYPE_57897**: suspected privilege escalation behavior
      // - **USER-ENABLE-SWITCH-TYPE_62981**: bypassing security monitoring
      // - **USER-ENABLE-SWITCH-TYPE_64025**: entry service command execution [enhanced mode]
      // - **USER-ENABLE-SWITCH-TYPE_39659**: sensitive registry key protection
      // - **USER-ENABLE-SWITCH-TYPE_51225**: Powershell executing high-risk commands
      // - **USER-ENABLE-SWITCH-TYPE_51226**: Powershell executing suspicious commands
      // - **USER-ENABLE-SWITCH-TYPE_51228**: high-risk lateral movement tools
      // - **USER-ENABLE-SWITCH-TYPE_51229**: browser service performing high-risk operations
      // - **USER-ENABLE-SWITCH-TYPE_51230**: entry service performing suspicious operations
      // - **USER-ENABLE-SWITCH-TYPE_51232**: system process performing high-risk operations
      // - **USER-ENABLE-SWITCH-TYPE_51233**: Java service performing high-risk operations
      // - **USER-ENABLE-SWITCH-TYPE_51234**: Office component performing high-risk operations
      // - **USER-ENABLE-SWITCH-TYPE_51235**: web service performing high-risk operations
      // - **USER-ENABLE-SWITCH-TYPE_51236**: reverse shell
      // - **USER-ENABLE-SWITCH-TYPE_52815**: loading high-risk drivers
      // - **USER-ENABLE-SWITCH-TYPE_52816**: high-risk account manipulation
      // - **USER-ENABLE-SWITCH-TYPE_52818**: information probing
      // - **USER-ENABLE-SWITCH-TYPE_52820**: malicious file implantation
      // - **USER-ENABLE-SWITCH-TYPE_52821**: suspicious process startup
      // - **USER-ENABLE-SWITCH-TYPE_52823**: running high-risk ARK tools
      // - **USER-ENABLE-SWITCH-TYPE_52825**: unauthorized execution of high-risk commands
      // - **USER-ENABLE-SWITCH-TYPE_52826**: entry service performing high-risk operations
      // - **USER-ENABLE-SWITCH-TYPE_52827**: ransomware
      // - **USER-ENABLE-SWITCH-TYPE_52828**: suspicious ransomware behavior
      // - **USER-ENABLE-SWITCH-TYPE_52829**: system backup deletion behavior
      // - **USER-ENABLE-SWITCH-TYPE_54168**: LSA security authority service protection
      // - **USER-ENABLE-SWITCH-TYPE_54365**: creating service auto-start items
      // - **USER-ENABLE-SWITCH-TYPE_54366**: creating high-risk auto-start items
      // - **USER-ENABLE-SWITCH-TYPE_54367**: creating scheduled task auto-start items
      // - **USER-ENABLE-SWITCH-TYPE_54368**: creating registry auto-start items
      // - **USER-ENABLE-SWITCH-TYPE_54369**: creating WMI auto-start items
      // - **USER-ENABLE-SWITCH-TYPE_54373**: anti-security software
      // - **USER-ENABLE-SWITCH-TYPE_54374**: intrusion trace cleanup
      // - **USER-ENABLE-SWITCH-TYPE_54384**: HashDump attack
      // - **USER-ENABLE-SWITCH-TYPE_55251**: database service performing high-risk operations
      // - **USER-ENABLE-SWITCH-TYPE_57242**: malicious command execution
      // - **USER-ENABLE-SWITCH-TYPE_57340**: downloading and running malicious files from the command line
      // - **USER-ENABLE-SWITCH-TYPE_62357**: Cloud Assistant service information probing
      // - **USER-ENABLE-SWITCH-TYPE_63725**: entry service implanting suspicious scripts or binary files.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->overallConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // overallConfig Field Functions 
    bool hasOverallConfig() const { return this->overallConfig_ != nullptr;};
    void deleteOverallConfig() { this->overallConfig_ = nullptr;};
    inline const DescribeCommonOverallConfigResponseBody::OverallConfig & getOverallConfig() const { DARABONBA_PTR_GET_CONST(overallConfig_, DescribeCommonOverallConfigResponseBody::OverallConfig) };
    inline DescribeCommonOverallConfigResponseBody::OverallConfig getOverallConfig() { DARABONBA_PTR_GET(overallConfig_, DescribeCommonOverallConfigResponseBody::OverallConfig) };
    inline DescribeCommonOverallConfigResponseBody& setOverallConfig(const DescribeCommonOverallConfigResponseBody::OverallConfig & overallConfig) { DARABONBA_PTR_SET_VALUE(overallConfig_, overallConfig) };
    inline DescribeCommonOverallConfigResponseBody& setOverallConfig(DescribeCommonOverallConfigResponseBody::OverallConfig && overallConfig) { DARABONBA_PTR_SET_RVALUE(overallConfig_, overallConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommonOverallConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration information.
    shared_ptr<DescribeCommonOverallConfigResponseBody::OverallConfig> overallConfig_ {};
    // The request ID, which is a unique identifier generated by Alibaba Cloud for the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
