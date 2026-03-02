// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPONENTTEMPLATECREATECMD_HPP_
#define ALIBABACLOUD_MODELS_COMPONENTTEMPLATECREATECMD_HPP_
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
  class ComponentTemplateCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ComponentTemplateCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(configuration, configuration_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(isCustom, isCustom_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(useScope, useScope_);
      DARABONBA_PTR_TO_JSON(useType, useType_);
    };
    friend void from_json(const Darabonba::Json& j, ComponentTemplateCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(isCustom, isCustom_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(useScope, useScope_);
      DARABONBA_PTR_FROM_JSON(useType, useType_);
    };
    ComponentTemplateCreateCmd() = default ;
    ComponentTemplateCreateCmd(const ComponentTemplateCreateCmd &) = default ;
    ComponentTemplateCreateCmd(ComponentTemplateCreateCmd &&) = default ;
    ComponentTemplateCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ComponentTemplateCreateCmd() = default ;
    ComponentTemplateCreateCmd& operator=(const ComponentTemplateCreateCmd &) = default ;
    ComponentTemplateCreateCmd& operator=(ComponentTemplateCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->configuration_ == nullptr && this->description_ == nullptr && this->isCustom_ == nullptr && this->name_ == nullptr && this->productId_ == nullptr
        && this->type_ == nullptr && this->useScope_ == nullptr && this->useType_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline ComponentTemplateCreateCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const vector<ConfigModel> & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, vector<ConfigModel>) };
    inline vector<ConfigModel> getConfiguration() { DARABONBA_PTR_GET(configuration_, vector<ConfigModel>) };
    inline ComponentTemplateCreateCmd& setConfiguration(const vector<ConfigModel> & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline ComponentTemplateCreateCmd& setConfiguration(vector<ConfigModel> && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ComponentTemplateCreateCmd& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isCustom Field Functions 
    bool hasIsCustom() const { return this->isCustom_ != nullptr;};
    void deleteIsCustom() { this->isCustom_ = nullptr;};
    inline bool getIsCustom() const { DARABONBA_PTR_GET_DEFAULT(isCustom_, false) };
    inline ComponentTemplateCreateCmd& setIsCustom(bool isCustom) { DARABONBA_PTR_SET_VALUE(isCustom_, isCustom) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ComponentTemplateCreateCmd& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline ComponentTemplateCreateCmd& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ComponentTemplateCreateCmd& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // useScope Field Functions 
    bool hasUseScope() const { return this->useScope_ != nullptr;};
    void deleteUseScope() { this->useScope_ = nullptr;};
    inline string getUseScope() const { DARABONBA_PTR_GET_DEFAULT(useScope_, "") };
    inline ComponentTemplateCreateCmd& setUseScope(string useScope) { DARABONBA_PTR_SET_VALUE(useScope_, useScope) };


    // useType Field Functions 
    bool hasUseType() const { return this->useType_ != nullptr;};
    void deleteUseType() { this->useType_ = nullptr;};
    inline string getUseType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
    inline ComponentTemplateCreateCmd& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<vector<ConfigModel>> configuration_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> isCustom_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<int64_t> productId_ {};
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
