// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDONMETAENVIRONMENTS_HPP_
#define ALIBABACLOUD_MODELS_ADDONMETAENVIRONMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddonMetaEnvironmentsCommonSchemaRefs.hpp>
#include <alibabacloud/models/AddonMetaEnvironmentsDependencies.hpp>
#include <alibabacloud/models/AddonMetaEnvironmentsPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AddonMetaEnvironments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddonMetaEnvironments& obj) { 
      DARABONBA_PTR_TO_JSON(commonSchemaRefs, commonSchemaRefs_);
      DARABONBA_PTR_TO_JSON(dependencies, dependencies_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(policies, policies_);
      DARABONBA_PTR_TO_JSON(policyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, AddonMetaEnvironments& obj) { 
      DARABONBA_PTR_FROM_JSON(commonSchemaRefs, commonSchemaRefs_);
      DARABONBA_PTR_FROM_JSON(dependencies, dependencies_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(policies, policies_);
      DARABONBA_PTR_FROM_JSON(policyType, policyType_);
    };
    AddonMetaEnvironments() = default ;
    AddonMetaEnvironments(const AddonMetaEnvironments &) = default ;
    AddonMetaEnvironments(AddonMetaEnvironments &&) = default ;
    AddonMetaEnvironments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddonMetaEnvironments() = default ;
    AddonMetaEnvironments& operator=(const AddonMetaEnvironments &) = default ;
    AddonMetaEnvironments& operator=(AddonMetaEnvironments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonSchemaRefs_ == nullptr
        && return this->dependencies_ == nullptr && return this->description_ == nullptr && return this->enable_ == nullptr && return this->label_ == nullptr && return this->name_ == nullptr
        && return this->policies_ == nullptr && return this->policyType_ == nullptr; };
    // commonSchemaRefs Field Functions 
    bool hasCommonSchemaRefs() const { return this->commonSchemaRefs_ != nullptr;};
    void deleteCommonSchemaRefs() { this->commonSchemaRefs_ = nullptr;};
    inline const vector<Models::AddonMetaEnvironmentsCommonSchemaRefs> & commonSchemaRefs() const { DARABONBA_PTR_GET_CONST(commonSchemaRefs_, vector<Models::AddonMetaEnvironmentsCommonSchemaRefs>) };
    inline vector<Models::AddonMetaEnvironmentsCommonSchemaRefs> commonSchemaRefs() { DARABONBA_PTR_GET(commonSchemaRefs_, vector<Models::AddonMetaEnvironmentsCommonSchemaRefs>) };
    inline AddonMetaEnvironments& setCommonSchemaRefs(const vector<Models::AddonMetaEnvironmentsCommonSchemaRefs> & commonSchemaRefs) { DARABONBA_PTR_SET_VALUE(commonSchemaRefs_, commonSchemaRefs) };
    inline AddonMetaEnvironments& setCommonSchemaRefs(vector<Models::AddonMetaEnvironmentsCommonSchemaRefs> && commonSchemaRefs) { DARABONBA_PTR_SET_RVALUE(commonSchemaRefs_, commonSchemaRefs) };


    // dependencies Field Functions 
    bool hasDependencies() const { return this->dependencies_ != nullptr;};
    void deleteDependencies() { this->dependencies_ = nullptr;};
    inline const Models::AddonMetaEnvironmentsDependencies & dependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, Models::AddonMetaEnvironmentsDependencies) };
    inline Models::AddonMetaEnvironmentsDependencies dependencies() { DARABONBA_PTR_GET(dependencies_, Models::AddonMetaEnvironmentsDependencies) };
    inline AddonMetaEnvironments& setDependencies(const Models::AddonMetaEnvironmentsDependencies & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
    inline AddonMetaEnvironments& setDependencies(Models::AddonMetaEnvironmentsDependencies && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddonMetaEnvironments& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline AddonMetaEnvironments& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline AddonMetaEnvironments& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddonMetaEnvironments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const Models::AddonMetaEnvironmentsPolicies & policies() const { DARABONBA_PTR_GET_CONST(policies_, Models::AddonMetaEnvironmentsPolicies) };
    inline Models::AddonMetaEnvironmentsPolicies policies() { DARABONBA_PTR_GET(policies_, Models::AddonMetaEnvironmentsPolicies) };
    inline AddonMetaEnvironments& setPolicies(const Models::AddonMetaEnvironmentsPolicies & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline AddonMetaEnvironments& setPolicies(Models::AddonMetaEnvironmentsPolicies && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline AddonMetaEnvironments& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


  protected:
    std::shared_ptr<vector<Models::AddonMetaEnvironmentsCommonSchemaRefs>> commonSchemaRefs_ = nullptr;
    std::shared_ptr<Models::AddonMetaEnvironmentsDependencies> dependencies_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::AddonMetaEnvironmentsPolicies> policies_ = nullptr;
    std::shared_ptr<string> policyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
