// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATESUSPICIOUSOVERALLCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATESUSPICIOUSOVERALLCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateSuspiciousOverallConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateSuspiciousOverallConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NoTargetAsOn, noTargetAsOn_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, OperateSuspiciousOverallConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NoTargetAsOn, noTargetAsOn_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    OperateSuspiciousOverallConfigRequest() = default ;
    OperateSuspiciousOverallConfigRequest(const OperateSuspiciousOverallConfigRequest &) = default ;
    OperateSuspiciousOverallConfigRequest(OperateSuspiciousOverallConfigRequest &&) = default ;
    OperateSuspiciousOverallConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateSuspiciousOverallConfigRequest() = default ;
    OperateSuspiciousOverallConfigRequest& operator=(const OperateSuspiciousOverallConfigRequest &) = default ;
    OperateSuspiciousOverallConfigRequest& operator=(OperateSuspiciousOverallConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->lang_ == nullptr && this->noTargetAsOn_ == nullptr && this->sourceIp_ == nullptr && this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline OperateSuspiciousOverallConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline OperateSuspiciousOverallConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // noTargetAsOn Field Functions 
    bool hasNoTargetAsOn() const { return this->noTargetAsOn_ != nullptr;};
    void deleteNoTargetAsOn() { this->noTargetAsOn_ = nullptr;};
    inline bool getNoTargetAsOn() const { DARABONBA_PTR_GET_DEFAULT(noTargetAsOn_, false) };
    inline OperateSuspiciousOverallConfigRequest& setNoTargetAsOn(bool noTargetAsOn) { DARABONBA_PTR_SET_VALUE(noTargetAsOn_, noTargetAsOn) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline OperateSuspiciousOverallConfigRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline OperateSuspiciousOverallConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The switch status. Valid values:
    // 
    // - **on**: Enable
    // - **off**: Disable
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // The language type for the request and response messages. Default value: **zh**. Valid values:
    // 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Specifies whether asset configuration is required. Default value: **false**. Valid values:
    // - **true**: Required
    // - **false**: Not required
    // > This value takes effect only when **config** is set to **on**.
    shared_ptr<bool> noTargetAsOn_ {};
    // The IP address of the access source.
    shared_ptr<string> sourceIp_ {};
    // The switch type. Valid values:
    // 
    // - **auto_breaking**: Anti-virus
    // - **ransomware_breaking**: Anti-ransomware (bait capture)
    // - **webshell_cloud_breaking**: Website backdoor connection defense
    // - **alinet**: Malicious network behavior defense
    // - **k8s_log_analysis**: Container K8s threat detection
    // - **alisecguard**: Client self-protection defense mode
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
