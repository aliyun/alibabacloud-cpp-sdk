// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATESUSPICIOUSTARGETCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATESUSPICIOUSTARGETCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateSuspiciousTargetConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateSuspiciousTargetConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(TargetOperations, targetOperations_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, OperateSuspiciousTargetConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(TargetOperations, targetOperations_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    OperateSuspiciousTargetConfigRequest() = default ;
    OperateSuspiciousTargetConfigRequest(const OperateSuspiciousTargetConfigRequest &) = default ;
    OperateSuspiciousTargetConfigRequest(OperateSuspiciousTargetConfigRequest &&) = default ;
    OperateSuspiciousTargetConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateSuspiciousTargetConfigRequest() = default ;
    OperateSuspiciousTargetConfigRequest& operator=(const OperateSuspiciousTargetConfigRequest &) = default ;
    OperateSuspiciousTargetConfigRequest& operator=(OperateSuspiciousTargetConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->sourceIp_ == nullptr && this->targetOperations_ == nullptr && this->targetType_ == nullptr && this->type_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline OperateSuspiciousTargetConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline OperateSuspiciousTargetConfigRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // targetOperations Field Functions 
    bool hasTargetOperations() const { return this->targetOperations_ != nullptr;};
    void deleteTargetOperations() { this->targetOperations_ = nullptr;};
    inline string getTargetOperations() const { DARABONBA_PTR_GET_DEFAULT(targetOperations_, "") };
    inline OperateSuspiciousTargetConfigRequest& setTargetOperations(string targetOperations) { DARABONBA_PTR_SET_VALUE(targetOperations_, targetOperations) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline OperateSuspiciousTargetConfigRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline OperateSuspiciousTargetConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies the language of the request and response. Default value: **zh**. Valid values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The source IP address.
    shared_ptr<string> sourceIp_ {};
    // Specifies the proactive defense parameters for servers. The following parameters are included:
    // 
    // - **targetType**: the dimension of the defense configuration. Currently, only the UUID dimension is supported. Fixed value: **uuid**.
    // - **target**: the UUID of the server for which you want to configure defense settings.
    // - **flag**: specifies whether to enable or disable proactive defense for the server. Valid values: **add** (enable) and **del** (disable).
    // 
    // This parameter is required.
    shared_ptr<string> targetOperations_ {};
    // Specifies the dimension for managing proactive defense. Currently, only the server UUID dimension is supported.
    // 
    // Valid value: **uuid**.
    // 
    // This parameter is required.
    shared_ptr<string> targetType_ {};
    // Specifies the type of proactive defense. Valid values:
    // - **auto_breaking**: automatic interception
    // - **webshell_cloud_breaking**: web shell connection defense
    // - **alinet**: malicious network behavior defense
    // - **ransomware_breaking**: anti-ransomware (bait capture)
    // - **alisecguard**: client self-protection
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
