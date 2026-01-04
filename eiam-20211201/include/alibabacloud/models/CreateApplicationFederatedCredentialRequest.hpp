// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONFEDERATEDCREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONFEDERATEDCREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateApplicationFederatedCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationFederatedCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentialName, applicationFederatedCredentialName_);
      DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentialType, applicationFederatedCredentialType_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(AttributeMappings, attributeMappings_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VerificationCondition, verificationCondition_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationFederatedCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentialName, applicationFederatedCredentialName_);
      DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentialType, applicationFederatedCredentialType_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(AttributeMappings, attributeMappings_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VerificationCondition, verificationCondition_);
    };
    CreateApplicationFederatedCredentialRequest() = default ;
    CreateApplicationFederatedCredentialRequest(const CreateApplicationFederatedCredentialRequest &) = default ;
    CreateApplicationFederatedCredentialRequest(CreateApplicationFederatedCredentialRequest &&) = default ;
    CreateApplicationFederatedCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationFederatedCredentialRequest() = default ;
    CreateApplicationFederatedCredentialRequest& operator=(const CreateApplicationFederatedCredentialRequest &) = default ;
    CreateApplicationFederatedCredentialRequest& operator=(CreateApplicationFederatedCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttributeMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttributeMappings& obj) { 
        DARABONBA_PTR_TO_JSON(SourceValueExpression, sourceValueExpression_);
        DARABONBA_PTR_TO_JSON(TargetField, targetField_);
      };
      friend void from_json(const Darabonba::Json& j, AttributeMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(SourceValueExpression, sourceValueExpression_);
        DARABONBA_PTR_FROM_JSON(TargetField, targetField_);
      };
      AttributeMappings() = default ;
      AttributeMappings(const AttributeMappings &) = default ;
      AttributeMappings(AttributeMappings &&) = default ;
      AttributeMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttributeMappings() = default ;
      AttributeMappings& operator=(const AttributeMappings &) = default ;
      AttributeMappings& operator=(AttributeMappings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sourceValueExpression_ == nullptr
        && this->targetField_ == nullptr; };
      // sourceValueExpression Field Functions 
      bool hasSourceValueExpression() const { return this->sourceValueExpression_ != nullptr;};
      void deleteSourceValueExpression() { this->sourceValueExpression_ = nullptr;};
      inline string getSourceValueExpression() const { DARABONBA_PTR_GET_DEFAULT(sourceValueExpression_, "") };
      inline AttributeMappings& setSourceValueExpression(string sourceValueExpression) { DARABONBA_PTR_SET_VALUE(sourceValueExpression_, sourceValueExpression) };


      // targetField Field Functions 
      bool hasTargetField() const { return this->targetField_ != nullptr;};
      void deleteTargetField() { this->targetField_ = nullptr;};
      inline string getTargetField() const { DARABONBA_PTR_GET_DEFAULT(targetField_, "") };
      inline AttributeMappings& setTargetField(string targetField) { DARABONBA_PTR_SET_VALUE(targetField_, targetField) };


    protected:
      // 源值表达式
      shared_ptr<string> sourceValueExpression_ {};
      // 目标字段
      shared_ptr<string> targetField_ {};
    };

    virtual bool empty() const override { return this->applicationFederatedCredentialName_ == nullptr
        && this->applicationFederatedCredentialType_ == nullptr && this->applicationId_ == nullptr && this->attributeMappings_ == nullptr && this->description_ == nullptr && this->federatedCredentialProviderId_ == nullptr
        && this->instanceId_ == nullptr && this->verificationCondition_ == nullptr; };
    // applicationFederatedCredentialName Field Functions 
    bool hasApplicationFederatedCredentialName() const { return this->applicationFederatedCredentialName_ != nullptr;};
    void deleteApplicationFederatedCredentialName() { this->applicationFederatedCredentialName_ = nullptr;};
    inline string getApplicationFederatedCredentialName() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialName_, "") };
    inline CreateApplicationFederatedCredentialRequest& setApplicationFederatedCredentialName(string applicationFederatedCredentialName) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialName_, applicationFederatedCredentialName) };


    // applicationFederatedCredentialType Field Functions 
    bool hasApplicationFederatedCredentialType() const { return this->applicationFederatedCredentialType_ != nullptr;};
    void deleteApplicationFederatedCredentialType() { this->applicationFederatedCredentialType_ = nullptr;};
    inline string getApplicationFederatedCredentialType() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialType_, "") };
    inline CreateApplicationFederatedCredentialRequest& setApplicationFederatedCredentialType(string applicationFederatedCredentialType) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialType_, applicationFederatedCredentialType) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline CreateApplicationFederatedCredentialRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // attributeMappings Field Functions 
    bool hasAttributeMappings() const { return this->attributeMappings_ != nullptr;};
    void deleteAttributeMappings() { this->attributeMappings_ = nullptr;};
    inline const vector<CreateApplicationFederatedCredentialRequest::AttributeMappings> & getAttributeMappings() const { DARABONBA_PTR_GET_CONST(attributeMappings_, vector<CreateApplicationFederatedCredentialRequest::AttributeMappings>) };
    inline vector<CreateApplicationFederatedCredentialRequest::AttributeMappings> getAttributeMappings() { DARABONBA_PTR_GET(attributeMappings_, vector<CreateApplicationFederatedCredentialRequest::AttributeMappings>) };
    inline CreateApplicationFederatedCredentialRequest& setAttributeMappings(const vector<CreateApplicationFederatedCredentialRequest::AttributeMappings> & attributeMappings) { DARABONBA_PTR_SET_VALUE(attributeMappings_, attributeMappings) };
    inline CreateApplicationFederatedCredentialRequest& setAttributeMappings(vector<CreateApplicationFederatedCredentialRequest::AttributeMappings> && attributeMappings) { DARABONBA_PTR_SET_RVALUE(attributeMappings_, attributeMappings) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApplicationFederatedCredentialRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // federatedCredentialProviderId Field Functions 
    bool hasFederatedCredentialProviderId() const { return this->federatedCredentialProviderId_ != nullptr;};
    void deleteFederatedCredentialProviderId() { this->federatedCredentialProviderId_ = nullptr;};
    inline string getFederatedCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderId_, "") };
    inline CreateApplicationFederatedCredentialRequest& setFederatedCredentialProviderId(string federatedCredentialProviderId) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderId_, federatedCredentialProviderId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateApplicationFederatedCredentialRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // verificationCondition Field Functions 
    bool hasVerificationCondition() const { return this->verificationCondition_ != nullptr;};
    void deleteVerificationCondition() { this->verificationCondition_ = nullptr;};
    inline string getVerificationCondition() const { DARABONBA_PTR_GET_DEFAULT(verificationCondition_, "") };
    inline CreateApplicationFederatedCredentialRequest& setVerificationCondition(string verificationCondition) { DARABONBA_PTR_SET_VALUE(verificationCondition_, verificationCondition) };


  protected:
    // 应用联邦凭证名称
    // 
    // This parameter is required.
    shared_ptr<string> applicationFederatedCredentialName_ {};
    // 应用联邦凭证类型
    // 
    // This parameter is required.
    shared_ptr<string> applicationFederatedCredentialType_ {};
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // 属性映射
    shared_ptr<vector<CreateApplicationFederatedCredentialRequest::AttributeMappings>> attributeMappings_ {};
    // 描述
    shared_ptr<string> description_ {};
    // 联邦凭证提供方ID
    // 
    // This parameter is required.
    shared_ptr<string> federatedCredentialProviderId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 校验条件
    shared_ptr<string> verificationCondition_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
