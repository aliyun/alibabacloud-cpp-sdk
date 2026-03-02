// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPCOMPONENT_HPP_
#define ALIBABACLOUD_MODELS_PDPCOMPONENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ConfigModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpComponent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpComponent& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(configuration, configuration_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isCustom, isCustom_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(templateConfiguration, templateConfiguration_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(templateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(useScope, useScope_);
      DARABONBA_PTR_TO_JSON(useType, useType_);
    };
    friend void from_json(const Darabonba::Json& j, PdpComponent& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isCustom, isCustom_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(templateConfiguration, templateConfiguration_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(templateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(useScope, useScope_);
      DARABONBA_PTR_FROM_JSON(useType, useType_);
    };
    PdpComponent() = default ;
    PdpComponent(const PdpComponent &) = default ;
    PdpComponent(PdpComponent &&) = default ;
    PdpComponent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpComponent() = default ;
    PdpComponent& operator=(const PdpComponent &) = default ;
    PdpComponent& operator=(PdpComponent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->configuration_ == nullptr && this->description_ == nullptr && this->env_ == nullptr && this->id_ == nullptr && this->isCustom_ == nullptr
        && this->name_ == nullptr && this->productId_ == nullptr && this->requestId_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr
        && this->scope_ == nullptr && this->templateConfiguration_ == nullptr && this->templateId_ == nullptr && this->templateVersion_ == nullptr && this->type_ == nullptr
        && this->useScope_ == nullptr && this->useType_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline PdpComponent& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const vector<ConfigModel> & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, vector<ConfigModel>) };
    inline vector<ConfigModel> getConfiguration() { DARABONBA_PTR_GET(configuration_, vector<ConfigModel>) };
    inline PdpComponent& setConfiguration(const vector<ConfigModel> & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline PdpComponent& setConfiguration(vector<ConfigModel> && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PdpComponent& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline PdpComponent& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PdpComponent& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isCustom Field Functions 
    bool hasIsCustom() const { return this->isCustom_ != nullptr;};
    void deleteIsCustom() { this->isCustom_ = nullptr;};
    inline bool getIsCustom() const { DARABONBA_PTR_GET_DEFAULT(isCustom_, false) };
    inline PdpComponent& setIsCustom(bool isCustom) { DARABONBA_PTR_SET_VALUE(isCustom_, isCustom) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PdpComponent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline PdpComponent& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PdpComponent& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline int64_t getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, 0L) };
    inline PdpComponent& setResourceId(int64_t resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline PdpComponent& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline PdpComponent& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // templateConfiguration Field Functions 
    bool hasTemplateConfiguration() const { return this->templateConfiguration_ != nullptr;};
    void deleteTemplateConfiguration() { this->templateConfiguration_ = nullptr;};
    inline const vector<ConfigModel> & getTemplateConfiguration() const { DARABONBA_PTR_GET_CONST(templateConfiguration_, vector<ConfigModel>) };
    inline vector<ConfigModel> getTemplateConfiguration() { DARABONBA_PTR_GET(templateConfiguration_, vector<ConfigModel>) };
    inline PdpComponent& setTemplateConfiguration(const vector<ConfigModel> & templateConfiguration) { DARABONBA_PTR_SET_VALUE(templateConfiguration_, templateConfiguration) };
    inline PdpComponent& setTemplateConfiguration(vector<ConfigModel> && templateConfiguration) { DARABONBA_PTR_SET_RVALUE(templateConfiguration_, templateConfiguration) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline PdpComponent& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline int64_t getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, 0L) };
    inline PdpComponent& setTemplateVersion(int64_t templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PdpComponent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // useScope Field Functions 
    bool hasUseScope() const { return this->useScope_ != nullptr;};
    void deleteUseScope() { this->useScope_ = nullptr;};
    inline string getUseScope() const { DARABONBA_PTR_GET_DEFAULT(useScope_, "") };
    inline PdpComponent& setUseScope(string useScope) { DARABONBA_PTR_SET_VALUE(useScope_, useScope) };


    // useType Field Functions 
    bool hasUseType() const { return this->useType_ != nullptr;};
    void deleteUseType() { this->useType_ = nullptr;};
    inline string getUseType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
    inline PdpComponent& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<vector<ConfigModel>> configuration_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> env_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<bool> isCustom_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<int64_t> productId_ {};
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<int64_t> resourceId_ {};
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> scope_ {};
    // This parameter is required.
    shared_ptr<vector<ConfigModel>> templateConfiguration_ {};
    // This parameter is required.
    shared_ptr<int64_t> templateId_ {};
    // This parameter is required.
    shared_ptr<int64_t> templateVersion_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
    // This parameter is required.
    shared_ptr<string> useScope_ {};
    // This parameter is required.
    shared_ptr<string> useType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
