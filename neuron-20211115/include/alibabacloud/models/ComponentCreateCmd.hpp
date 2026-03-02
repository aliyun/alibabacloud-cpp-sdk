// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPONENTCREATECMD_HPP_
#define ALIBABACLOUD_MODELS_COMPONENTCREATECMD_HPP_
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
  class ComponentCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ComponentCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(configuration, configuration_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(isCustom, isCustom_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(scopeServiceIds, scopeServiceIds_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(useScope, useScope_);
      DARABONBA_PTR_TO_JSON(useType, useType_);
    };
    friend void from_json(const Darabonba::Json& j, ComponentCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(isCustom, isCustom_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(scopeServiceIds, scopeServiceIds_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(useScope, useScope_);
      DARABONBA_PTR_FROM_JSON(useType, useType_);
    };
    ComponentCreateCmd() = default ;
    ComponentCreateCmd(const ComponentCreateCmd &) = default ;
    ComponentCreateCmd(ComponentCreateCmd &&) = default ;
    ComponentCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ComponentCreateCmd() = default ;
    ComponentCreateCmd& operator=(const ComponentCreateCmd &) = default ;
    ComponentCreateCmd& operator=(ComponentCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->configuration_ == nullptr && this->description_ == nullptr && this->env_ == nullptr && this->isCustom_ == nullptr && this->name_ == nullptr
        && this->productId_ == nullptr && this->resourceId_ == nullptr && this->scopeServiceIds_ == nullptr && this->templateId_ == nullptr && this->type_ == nullptr
        && this->useScope_ == nullptr && this->useType_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline ComponentCreateCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const vector<ConfigModel> & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, vector<ConfigModel>) };
    inline vector<ConfigModel> getConfiguration() { DARABONBA_PTR_GET(configuration_, vector<ConfigModel>) };
    inline ComponentCreateCmd& setConfiguration(const vector<ConfigModel> & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline ComponentCreateCmd& setConfiguration(vector<ConfigModel> && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ComponentCreateCmd& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ComponentCreateCmd& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // isCustom Field Functions 
    bool hasIsCustom() const { return this->isCustom_ != nullptr;};
    void deleteIsCustom() { this->isCustom_ = nullptr;};
    inline bool getIsCustom() const { DARABONBA_PTR_GET_DEFAULT(isCustom_, false) };
    inline ComponentCreateCmd& setIsCustom(bool isCustom) { DARABONBA_PTR_SET_VALUE(isCustom_, isCustom) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ComponentCreateCmd& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline ComponentCreateCmd& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline int64_t getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, 0L) };
    inline ComponentCreateCmd& setResourceId(int64_t resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // scopeServiceIds Field Functions 
    bool hasScopeServiceIds() const { return this->scopeServiceIds_ != nullptr;};
    void deleteScopeServiceIds() { this->scopeServiceIds_ = nullptr;};
    inline string getScopeServiceIds() const { DARABONBA_PTR_GET_DEFAULT(scopeServiceIds_, "") };
    inline ComponentCreateCmd& setScopeServiceIds(string scopeServiceIds) { DARABONBA_PTR_SET_VALUE(scopeServiceIds_, scopeServiceIds) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ComponentCreateCmd& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ComponentCreateCmd& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // useScope Field Functions 
    bool hasUseScope() const { return this->useScope_ != nullptr;};
    void deleteUseScope() { this->useScope_ = nullptr;};
    inline string getUseScope() const { DARABONBA_PTR_GET_DEFAULT(useScope_, "") };
    inline ComponentCreateCmd& setUseScope(string useScope) { DARABONBA_PTR_SET_VALUE(useScope_, useScope) };


    // useType Field Functions 
    bool hasUseType() const { return this->useType_ != nullptr;};
    void deleteUseType() { this->useType_ = nullptr;};
    inline string getUseType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
    inline ComponentCreateCmd& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<vector<ConfigModel>> configuration_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> env_ {};
    shared_ptr<bool> isCustom_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<int64_t> productId_ {};
    shared_ptr<int64_t> resourceId_ {};
    shared_ptr<string> scopeServiceIds_ {};
    // This parameter is required.
    shared_ptr<int64_t> templateId_ {};
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
