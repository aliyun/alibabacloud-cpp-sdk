// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGGREGATEREMEDIATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGGREGATEREMEDIATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class UpdateAggregateRemediationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAggregateRemediationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RemediationId, remediationId_);
      DARABONBA_PTR_TO_JSON(RemediationTemplateId, remediationTemplateId_);
      DARABONBA_PTR_TO_JSON(RemediationType, remediationType_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAggregateRemediationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RemediationId, remediationId_);
      DARABONBA_PTR_FROM_JSON(RemediationTemplateId, remediationTemplateId_);
      DARABONBA_PTR_FROM_JSON(RemediationType, remediationType_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    UpdateAggregateRemediationRequest() = default ;
    UpdateAggregateRemediationRequest(const UpdateAggregateRemediationRequest &) = default ;
    UpdateAggregateRemediationRequest(UpdateAggregateRemediationRequest &&) = default ;
    UpdateAggregateRemediationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAggregateRemediationRequest() = default ;
    UpdateAggregateRemediationRequest& operator=(const UpdateAggregateRemediationRequest &) = default ;
    UpdateAggregateRemediationRequest& operator=(UpdateAggregateRemediationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && return this->invokeType_ == nullptr && return this->params_ == nullptr && return this->remediationId_ == nullptr && return this->remediationTemplateId_ == nullptr && return this->remediationType_ == nullptr
        && return this->sourceType_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline UpdateAggregateRemediationRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // invokeType Field Functions 
    bool hasInvokeType() const { return this->invokeType_ != nullptr;};
    void deleteInvokeType() { this->invokeType_ = nullptr;};
    inline string invokeType() const { DARABONBA_PTR_GET_DEFAULT(invokeType_, "") };
    inline UpdateAggregateRemediationRequest& setInvokeType(string invokeType) { DARABONBA_PTR_SET_VALUE(invokeType_, invokeType) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline UpdateAggregateRemediationRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // remediationId Field Functions 
    bool hasRemediationId() const { return this->remediationId_ != nullptr;};
    void deleteRemediationId() { this->remediationId_ = nullptr;};
    inline string remediationId() const { DARABONBA_PTR_GET_DEFAULT(remediationId_, "") };
    inline UpdateAggregateRemediationRequest& setRemediationId(string remediationId) { DARABONBA_PTR_SET_VALUE(remediationId_, remediationId) };


    // remediationTemplateId Field Functions 
    bool hasRemediationTemplateId() const { return this->remediationTemplateId_ != nullptr;};
    void deleteRemediationTemplateId() { this->remediationTemplateId_ = nullptr;};
    inline string remediationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(remediationTemplateId_, "") };
    inline UpdateAggregateRemediationRequest& setRemediationTemplateId(string remediationTemplateId) { DARABONBA_PTR_SET_VALUE(remediationTemplateId_, remediationTemplateId) };


    // remediationType Field Functions 
    bool hasRemediationType() const { return this->remediationType_ != nullptr;};
    void deleteRemediationType() { this->remediationType_ = nullptr;};
    inline string remediationType() const { DARABONBA_PTR_GET_DEFAULT(remediationType_, "") };
    inline UpdateAggregateRemediationRequest& setRemediationType(string remediationType) { DARABONBA_PTR_SET_VALUE(remediationType_, remediationType) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateAggregateRemediationRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The ID of the account group.
    // 
    // You can the [ListAggregators](https://help.aliyun.com/document_detail/255797.html) operation to obtain the ID of the account group.
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The execution mode of the remediation. Valid values:
    // 
    // *   NON_EXECUTION: The remediation is not executed.
    // *   AUTO_EXECUTION: The remediation is automatically executed.
    // *   MANUAL_EXECUTION: The remediation is manually executed.
    // *   NOT_CONFIG: The execution mode is not specified.
    std::shared_ptr<string> invokeType_ = nullptr;
    // The desired parameter values of the remediation setting.
    std::shared_ptr<string> params_ = nullptr;
    // The ID of the remediation setting.
    // 
    // You can call the [ListAggregateRemediations](https://help.aliyun.com/document_detail/270036.html) operation to obtain the ID of the remediation setting.
    // 
    // This parameter is required.
    std::shared_ptr<string> remediationId_ = nullptr;
    // The ID of the remediation template.
    // 
    // You can call the [ListRemediationTemplates](https://help.aliyun.com/document_detail/270066.html) operation to obtain the ID of the remediation template.
    std::shared_ptr<string> remediationTemplateId_ = nullptr;
    // The type of the remediation template. Valid values:
    // 
    // *   OOS: Operation Orchestration Service (OOS)
    // *   FC: Function Compute. You can use Function Compute to configure custom remediation settings.
    std::shared_ptr<string> remediationType_ = nullptr;
    // The type of the rule for which the remediation template is configured. Valid values:
    // 
    // *   ALIYUN: managed rule.
    // *   CUSTOM: custom rule.
    // *   NONE: The rule is not specified.
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
