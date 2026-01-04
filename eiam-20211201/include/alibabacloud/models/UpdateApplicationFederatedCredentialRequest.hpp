// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONFEDERATEDCREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONFEDERATEDCREDENTIALREQUEST_HPP_
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
  class UpdateApplicationFederatedCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationFederatedCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentialId, applicationFederatedCredentialId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(AttributeMappings, attributeMappings_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VerificationCondition, verificationCondition_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationFederatedCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentialId, applicationFederatedCredentialId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(AttributeMappings, attributeMappings_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VerificationCondition, verificationCondition_);
    };
    UpdateApplicationFederatedCredentialRequest() = default ;
    UpdateApplicationFederatedCredentialRequest(const UpdateApplicationFederatedCredentialRequest &) = default ;
    UpdateApplicationFederatedCredentialRequest(UpdateApplicationFederatedCredentialRequest &&) = default ;
    UpdateApplicationFederatedCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationFederatedCredentialRequest() = default ;
    UpdateApplicationFederatedCredentialRequest& operator=(const UpdateApplicationFederatedCredentialRequest &) = default ;
    UpdateApplicationFederatedCredentialRequest& operator=(UpdateApplicationFederatedCredentialRequest &&) = default ;
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

    virtual bool empty() const override { return this->applicationFederatedCredentialId_ == nullptr
        && this->applicationId_ == nullptr && this->attributeMappings_ == nullptr && this->instanceId_ == nullptr && this->verificationCondition_ == nullptr; };
    // applicationFederatedCredentialId Field Functions 
    bool hasApplicationFederatedCredentialId() const { return this->applicationFederatedCredentialId_ != nullptr;};
    void deleteApplicationFederatedCredentialId() { this->applicationFederatedCredentialId_ = nullptr;};
    inline string getApplicationFederatedCredentialId() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialId_, "") };
    inline UpdateApplicationFederatedCredentialRequest& setApplicationFederatedCredentialId(string applicationFederatedCredentialId) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialId_, applicationFederatedCredentialId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdateApplicationFederatedCredentialRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // attributeMappings Field Functions 
    bool hasAttributeMappings() const { return this->attributeMappings_ != nullptr;};
    void deleteAttributeMappings() { this->attributeMappings_ = nullptr;};
    inline const vector<UpdateApplicationFederatedCredentialRequest::AttributeMappings> & getAttributeMappings() const { DARABONBA_PTR_GET_CONST(attributeMappings_, vector<UpdateApplicationFederatedCredentialRequest::AttributeMappings>) };
    inline vector<UpdateApplicationFederatedCredentialRequest::AttributeMappings> getAttributeMappings() { DARABONBA_PTR_GET(attributeMappings_, vector<UpdateApplicationFederatedCredentialRequest::AttributeMappings>) };
    inline UpdateApplicationFederatedCredentialRequest& setAttributeMappings(const vector<UpdateApplicationFederatedCredentialRequest::AttributeMappings> & attributeMappings) { DARABONBA_PTR_SET_VALUE(attributeMappings_, attributeMappings) };
    inline UpdateApplicationFederatedCredentialRequest& setAttributeMappings(vector<UpdateApplicationFederatedCredentialRequest::AttributeMappings> && attributeMappings) { DARABONBA_PTR_SET_RVALUE(attributeMappings_, attributeMappings) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateApplicationFederatedCredentialRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // verificationCondition Field Functions 
    bool hasVerificationCondition() const { return this->verificationCondition_ != nullptr;};
    void deleteVerificationCondition() { this->verificationCondition_ = nullptr;};
    inline string getVerificationCondition() const { DARABONBA_PTR_GET_DEFAULT(verificationCondition_, "") };
    inline UpdateApplicationFederatedCredentialRequest& setVerificationCondition(string verificationCondition) { DARABONBA_PTR_SET_VALUE(verificationCondition_, verificationCondition) };


  protected:
    // 应用联邦凭证Id
    // 
    // This parameter is required.
    shared_ptr<string> applicationFederatedCredentialId_ {};
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // 属性映射
    shared_ptr<vector<UpdateApplicationFederatedCredentialRequest::AttributeMappings>> attributeMappings_ {};
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
