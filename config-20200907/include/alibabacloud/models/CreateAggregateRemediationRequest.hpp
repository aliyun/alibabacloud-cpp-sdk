// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGGREGATEREMEDIATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGGREGATEREMEDIATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class CreateAggregateRemediationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAggregateRemediationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RemediationTemplateId, remediationTemplateId_);
      DARABONBA_PTR_TO_JSON(RemediationType, remediationType_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAggregateRemediationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RemediationTemplateId, remediationTemplateId_);
      DARABONBA_PTR_FROM_JSON(RemediationType, remediationType_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    CreateAggregateRemediationRequest() = default ;
    CreateAggregateRemediationRequest(const CreateAggregateRemediationRequest &) = default ;
    CreateAggregateRemediationRequest(CreateAggregateRemediationRequest &&) = default ;
    CreateAggregateRemediationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAggregateRemediationRequest() = default ;
    CreateAggregateRemediationRequest& operator=(const CreateAggregateRemediationRequest &) = default ;
    CreateAggregateRemediationRequest& operator=(CreateAggregateRemediationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && return this->clientToken_ == nullptr && return this->configRuleId_ == nullptr && return this->invokeType_ == nullptr && return this->params_ == nullptr && return this->remediationTemplateId_ == nullptr
        && return this->remediationType_ == nullptr && return this->sourceType_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline CreateAggregateRemediationRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAggregateRemediationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline CreateAggregateRemediationRequest& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // invokeType Field Functions 
    bool hasInvokeType() const { return this->invokeType_ != nullptr;};
    void deleteInvokeType() { this->invokeType_ = nullptr;};
    inline string invokeType() const { DARABONBA_PTR_GET_DEFAULT(invokeType_, "") };
    inline CreateAggregateRemediationRequest& setInvokeType(string invokeType) { DARABONBA_PTR_SET_VALUE(invokeType_, invokeType) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline CreateAggregateRemediationRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // remediationTemplateId Field Functions 
    bool hasRemediationTemplateId() const { return this->remediationTemplateId_ != nullptr;};
    void deleteRemediationTemplateId() { this->remediationTemplateId_ = nullptr;};
    inline string remediationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(remediationTemplateId_, "") };
    inline CreateAggregateRemediationRequest& setRemediationTemplateId(string remediationTemplateId) { DARABONBA_PTR_SET_VALUE(remediationTemplateId_, remediationTemplateId) };


    // remediationType Field Functions 
    bool hasRemediationType() const { return this->remediationType_ != nullptr;};
    void deleteRemediationType() { this->remediationType_ = nullptr;};
    inline string remediationType() const { DARABONBA_PTR_GET_DEFAULT(remediationType_, "") };
    inline CreateAggregateRemediationRequest& setRemediationType(string remediationType) { DARABONBA_PTR_SET_VALUE(remediationType_, remediationType) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateAggregateRemediationRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of the account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The `token` can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The rule ID.
    // 
    // For more information about how to obtain the ID of a rule, see [ListAggregateConfigRules](https://help.aliyun.com/document_detail/264148.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> configRuleId_ = nullptr;
    // The execution mode of the remediation template. Valid values:
    // 
    // *   NON_EXECUTION: The remediation template is not executed.
    // *   AUTO_EXECUTION: The remediation template is automatically executed.
    // *   MANUAL_EXECUTION: The remediation template is manually executed.
    // *   NOT_CONFIG: The execution mode is not specified.
    // 
    // This parameter is required.
    std::shared_ptr<string> invokeType_ = nullptr;
    // The configuration of the remediation template.
    // 
    // For more information about how to obtain the configuration of the remediation template, see [ListRemediationTemplates](https://help.aliyun.com/document_detail/416781.html). You can view the `TemplateDefinition` response parameter to obtain the configuration of the remediation template.
    // 
    // This parameter is required.
    std::shared_ptr<string> params_ = nullptr;
    // The ID of the remediation template.
    // 
    // *   If you set the `RemediationType` parameter to `OOS`, set this parameter to the identifier of the relevant official remediation template, such as `ACS-OSS-PutBucketAcl`. For more information about how to obtain the remediation template identifier, see [ListRemediationTemplates](https://help.aliyun.com/document_detail/416781.html).
    // *   If you set the `RemediationType` parameter to `FC`, set this parameter to the Alibaba Cloud Resource Name (ARN) of the relevant Function Compute resource, such as `acs:fc:cn-hangzhou:100931896542****:services/ConfigService.LATEST/functions/test-php`.
    // 
    // This parameter is required.
    std::shared_ptr<string> remediationTemplateId_ = nullptr;
    // The type of the remediation template. Valid values:
    // 
    // *   OOS: stands for Operation Orchestration Service and indicates official remediation.
    // *   FC: stands for Function Compute and indicates custom remediation.
    // 
    // This parameter is required.
    std::shared_ptr<string> remediationType_ = nullptr;
    // The source of remediation template. Valid values:
    // 
    // *   ALIYUN (default): official template.
    // *   CUSTOM: custom template.
    // *   NONE: none.
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
