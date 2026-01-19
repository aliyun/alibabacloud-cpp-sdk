// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREMEDIATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREMEDIATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class UpdateRemediationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRemediationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RemediationId, remediationId_);
      DARABONBA_PTR_TO_JSON(RemediationTemplateId, remediationTemplateId_);
      DARABONBA_PTR_TO_JSON(RemediationType, remediationType_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRemediationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RemediationId, remediationId_);
      DARABONBA_PTR_FROM_JSON(RemediationTemplateId, remediationTemplateId_);
      DARABONBA_PTR_FROM_JSON(RemediationType, remediationType_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    UpdateRemediationRequest() = default ;
    UpdateRemediationRequest(const UpdateRemediationRequest &) = default ;
    UpdateRemediationRequest(UpdateRemediationRequest &&) = default ;
    UpdateRemediationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRemediationRequest() = default ;
    UpdateRemediationRequest& operator=(const UpdateRemediationRequest &) = default ;
    UpdateRemediationRequest& operator=(UpdateRemediationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->invokeType_ == nullptr && this->params_ == nullptr && this->remediationId_ == nullptr && this->remediationTemplateId_ == nullptr && this->remediationType_ == nullptr
        && this->sourceType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateRemediationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // invokeType Field Functions 
    bool hasInvokeType() const { return this->invokeType_ != nullptr;};
    void deleteInvokeType() { this->invokeType_ = nullptr;};
    inline string getInvokeType() const { DARABONBA_PTR_GET_DEFAULT(invokeType_, "") };
    inline UpdateRemediationRequest& setInvokeType(string invokeType) { DARABONBA_PTR_SET_VALUE(invokeType_, invokeType) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline UpdateRemediationRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // remediationId Field Functions 
    bool hasRemediationId() const { return this->remediationId_ != nullptr;};
    void deleteRemediationId() { this->remediationId_ = nullptr;};
    inline string getRemediationId() const { DARABONBA_PTR_GET_DEFAULT(remediationId_, "") };
    inline UpdateRemediationRequest& setRemediationId(string remediationId) { DARABONBA_PTR_SET_VALUE(remediationId_, remediationId) };


    // remediationTemplateId Field Functions 
    bool hasRemediationTemplateId() const { return this->remediationTemplateId_ != nullptr;};
    void deleteRemediationTemplateId() { this->remediationTemplateId_ = nullptr;};
    inline string getRemediationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(remediationTemplateId_, "") };
    inline UpdateRemediationRequest& setRemediationTemplateId(string remediationTemplateId) { DARABONBA_PTR_SET_VALUE(remediationTemplateId_, remediationTemplateId) };


    // remediationType Field Functions 
    bool hasRemediationType() const { return this->remediationType_ != nullptr;};
    void deleteRemediationType() { this->remediationType_ = nullptr;};
    inline string getRemediationType() const { DARABONBA_PTR_GET_DEFAULT(remediationType_, "") };
    inline UpdateRemediationRequest& setRemediationType(string remediationType) { DARABONBA_PTR_SET_VALUE(remediationType_, remediationType) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateRemediationRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The client token that is used to ensure the idempotency of the request. You can use the client to generate the value, but you must ensure that the value is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The execution mode of the remediation. Valid values:
    // 
    // *   NON_EXECUTION: The remediation is not executed.
    // *   AUTO_EXECUTION: The remediation is automatically executed.
    // *   MANUAL_EXECUTION: The remediation is manually executed.
    // *   NOT_CONFIG: The execution mode is not specified.
    shared_ptr<string> invokeType_ {};
    // The desired parameter values of the remediation setting.
    shared_ptr<string> params_ {};
    // The ID of the remediation setting.
    // 
    // You can call the [ListRemediations](https://help.aliyun.com/document_detail/270772.html) operation to obtain the ID of the remediation setting.
    // 
    // This parameter is required.
    shared_ptr<string> remediationId_ {};
    // The ID of the remediation template.
    // 
    // You can call the [ListRemediationTemplates](https://help.aliyun.com/document_detail/270066.html) operation to obtain the ID of the remediation template.
    shared_ptr<string> remediationTemplateId_ {};
    // The type of the remediation template. Valid values:
    // 
    // *   OOS: Operation Orchestration Service (OOS)
    // *   FC: Function Compute. You can use Function Compute to configure custom remediation settings.
    shared_ptr<string> remediationType_ {};
    // The source of the remediation setting. Valid values:
    // 
    // *   ALIYUN: the default remediation setting of Alibaba Cloud.
    // *   CUSTOM: a custom remediation setting.
    // *   NONE: The source is not specified.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
